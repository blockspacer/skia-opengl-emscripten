/*
 * Copyright (C) 2012 Apple Inc. All rights reserved.
 * Copyright (C) 2013 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "third_party/blink/renderer/core/inspector/inspector_layer_tree_agent.h"

#include <memory>

#include "base/stl_util.h"
#include "cc/base/region.h"
#include "cc/layers/picture_layer.h"
#include "third_party/blink/public/platform/web_float_point.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/dom/dom_node_ids.h"
#include "third_party/blink/renderer/core/frame/local_frame.h"
#include "third_party/blink/renderer/core/frame/local_frame_view.h"
#include "third_party/blink/renderer/core/frame/visual_viewport.h"
#include "third_party/blink/renderer/core/inspector/identifiers_factory.h"
#include "third_party/blink/renderer/core/inspector/inspected_frames.h"
#include "third_party/blink/renderer/core/layout/layout_embedded_content.h"
#include "third_party/blink/renderer/core/layout/layout_view.h"
#include "third_party/blink/renderer/core/loader/document_loader.h"
#include "third_party/blink/renderer/core/page/chrome_client.h"
#include "third_party/blink/renderer/core/page/page.h"
#include "third_party/blink/renderer/core/paint/paint_layer_scrollable_area.h"
#include "third_party/blink/renderer/platform/geometry/int_rect.h"
#include "third_party/blink/renderer/platform/graphics/compositing_reasons.h"
#include "third_party/blink/renderer/platform/graphics/compositor_element_id.h"
#include "third_party/blink/renderer/platform/graphics/graphics_layer.h"
#include "third_party/blink/renderer/platform/graphics/picture_snapshot.h"
#include "third_party/blink/renderer/platform/transforms/transformation_matrix.h"
#include "third_party/blink/renderer/platform/wtf/text/string_builder.h"
#include "third_party/skia/include/core/SkPicture.h"
#include "third_party/skia/include/core/SkRefCnt.h"
#include "ui/gfx/geometry/rect.h"

namespace blink {

using protocol::Array;
using protocol::Maybe;
using protocol::Response;
unsigned InspectorLayerTreeAgent::last_snapshot_id_;

inline String IdForLayer(const cc::Layer* layer) {
  return String::Number(layer->id());
}

static std::unique_ptr<protocol::DOM::Rect> BuildObjectForRect(
    const gfx::Rect& rect) {
  return protocol::DOM::Rect::create()
      .setX(rect.x())
      .setY(rect.y())
      .setHeight(rect.height())
      .setWidth(rect.width())
      .build();
}

static std::unique_ptr<protocol::LayerTree::ScrollRect> BuildScrollRect(
    const gfx::Rect& rect,
    const String& type) {
  std::unique_ptr<protocol::DOM::Rect> rect_object = BuildObjectForRect(rect);
  std::unique_ptr<protocol::LayerTree::ScrollRect> scroll_rect_object =
      protocol::LayerTree::ScrollRect::create()
          .setRect(std::move(rect_object))
          .setType(type)
          .build();
  return scroll_rect_object;
}

static std::unique_ptr<Array<protocol::LayerTree::ScrollRect>>
BuildScrollRectsForLayer(const cc::Layer* layer, bool report_wheel_scrollers) {
  std::unique_ptr<Array<protocol::LayerTree::ScrollRect>> scroll_rects =
      Array<protocol::LayerTree::ScrollRect>::create();
  const cc::Region& non_fast_scrollable_rects =
      layer->non_fast_scrollable_region();
  for (const gfx::Rect& rect : non_fast_scrollable_rects) {
    scroll_rects->addItem(BuildScrollRect(
        IntRect(rect),
        protocol::LayerTree::ScrollRect::TypeEnum::RepaintsOnScroll));
  }
  const cc::Region& touch_event_handler_region =
      layer->touch_action_region().region();

  for (const gfx::Rect& rect : touch_event_handler_region) {
    scroll_rects->addItem(BuildScrollRect(
        IntRect(rect),
        protocol::LayerTree::ScrollRect::TypeEnum::TouchEventHandler));
  }
  if (report_wheel_scrollers) {
    scroll_rects->addItem(BuildScrollRect(
        // TODO(yutak): This truncates the floating point position to integers.
        gfx::Rect(layer->position().x(), layer->position().y(),
                  layer->bounds().width(), layer->bounds().height()),
        protocol::LayerTree::ScrollRect::TypeEnum::WheelEventHandler));
  }
  return scroll_rects->length() ? std::move(scroll_rects) : nullptr;
}

// TODO(flackr): We should be getting the sticky position constraints from the
// property tree once blink is able to access them. https://crbug.com/754339
static const cc::Layer* FindLayerByElementId(const cc::Layer* root,
                                             CompositorElementId element_id) {
  if (root->element_id() == element_id)
    return root;
  for (auto child : root->children()) {
    if (const auto* layer = FindLayerByElementId(child.get(), element_id))
      return layer;
  }
  return nullptr;
}

static std::unique_ptr<protocol::LayerTree::StickyPositionConstraint>
BuildStickyInfoForLayer(const cc::Layer* root, const cc::Layer* layer) {
  cc::LayerStickyPositionConstraint constraints =
      layer->sticky_position_constraint();
  if (!constraints.is_sticky)
    return nullptr;

  std::unique_ptr<protocol::DOM::Rect> sticky_box_rect =
      BuildObjectForRect(constraints.scroll_container_relative_sticky_box_rect);

  std::unique_ptr<protocol::DOM::Rect> containing_block_rect =
      BuildObjectForRect(
          constraints.scroll_container_relative_containing_block_rect);

  std::unique_ptr<protocol::LayerTree::StickyPositionConstraint>
      constraints_obj =
          protocol::LayerTree::StickyPositionConstraint::create()
              .setStickyBoxRect(std::move(sticky_box_rect))
              .setContainingBlockRect(std::move(containing_block_rect))
              .build();
  if (constraints.nearest_element_shifting_sticky_box) {
    constraints_obj->setNearestLayerShiftingStickyBox(String::Number(
        FindLayerByElementId(root,
                             constraints.nearest_element_shifting_sticky_box)
            ->id()));
  }
  if (constraints.nearest_element_shifting_containing_block) {
    constraints_obj->setNearestLayerShiftingContainingBlock(String::Number(
        FindLayerByElementId(
            root, constraints.nearest_element_shifting_containing_block)
            ->id()));
  }

  return constraints_obj;
}

static std::unique_ptr<protocol::LayerTree::Layer> BuildObjectForLayer(
    const cc::Layer* root,
    const cc::Layer* layer,
    bool report_wheel_event_listeners) {
  bool using_layer_list =
      RuntimeEnabledFeatures::CompositeAfterPaintEnabled() ||
      RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled();

  // When the front-end doesn't show internal layers, it will use the the first
  // DrawsContent layer as the root of the shown layer tree. This doesn't work
  // for layer list because the non-DrawsContent root layer is the parent of
  // all DrawsContent layers. We have to cheat the front-end by setting
  // drawsContent to true for the root layer.
  bool draws_content =
      (using_layer_list && root == layer) || layer->DrawsContent();

  std::unique_ptr<protocol::LayerTree::Layer> layer_object =
      protocol::LayerTree::Layer::create()
          .setLayerId(IdForLayer(layer))
          .setOffsetX(using_layer_list ? 0 : layer->position().x())
          .setOffsetY(using_layer_list ? 0 : layer->position().y())
          .setWidth(layer->bounds().width())
          .setHeight(layer->bounds().height())
          .setPaintCount(layer->paint_count())
          .setDrawsContent(draws_content)
          .build();

  if (auto node_id = layer->owner_node_id())
    layer_object->setBackendNodeId(node_id);

  if (const auto* parent = layer->parent())
    layer_object->setParentLayerId(IdForLayer(parent));

  gfx::Transform transform;
  gfx::Point3F transform_origin;
  if (using_layer_list) {
    transform = layer->ScreenSpaceTransform();
  } else {
    transform = layer->transform();
    transform_origin = layer->transform_origin();
  }

  if (!transform.IsIdentity()) {
    auto transform_array = Array<double>::create();
    for (int col = 0; col < 4; ++col) {
      for (int row = 0; row < 4; ++row)
        transform_array->addItem(transform.matrix().get(row, col));
    }
    layer_object->setTransform(std::move(transform_array));
    // FIXME: rename these to setTransformOrigin*
    if (layer->bounds().width() > 0) {
      layer_object->setAnchorX(transform_origin.x() / layer->bounds().width());
    } else {
      layer_object->setAnchorX(0.f);
    }
    if (layer->bounds().height() > 0) {
      layer_object->setAnchorY(transform_origin.y() / layer->bounds().height());
    } else {
      layer_object->setAnchorY(0.f);
    }
    layer_object->setAnchorZ(transform_origin.z());
  }
  std::unique_ptr<Array<protocol::LayerTree::ScrollRect>> scroll_rects =
      BuildScrollRectsForLayer(layer, report_wheel_event_listeners);
  if (scroll_rects)
    layer_object->setScrollRects(std::move(scroll_rects));
  std::unique_ptr<protocol::LayerTree::StickyPositionConstraint> sticky_info =
      BuildStickyInfoForLayer(root, layer);
  if (sticky_info)
    layer_object->setStickyPositionConstraint(std::move(sticky_info));
  return layer_object;
}

InspectorLayerTreeAgent::InspectorLayerTreeAgent(
    InspectedFrames* inspected_frames,
    Client* client)
    : inspected_frames_(inspected_frames),
      client_(client),
      suppress_layer_paint_events_(false) {}

InspectorLayerTreeAgent::~InspectorLayerTreeAgent() = default;

void InspectorLayerTreeAgent::Trace(blink::Visitor* visitor) {
  visitor->Trace(inspected_frames_);
  InspectorBaseAgent::Trace(visitor);
}

void InspectorLayerTreeAgent::Restore() {
  // We do not re-enable layer agent automatically after navigation. This is
  // because it depends on DOMAgent and node ids in particular, so we let
  // front-end request document and re-enable the agent manually after this.
}

Response InspectorLayerTreeAgent::enable() {
  instrumenting_agents_->AddInspectorLayerTreeAgent(this);
  Document* document = inspected_frames_->Root()->GetDocument();
  if (!document)
    return Response::Error("The root frame doesn't have document");

  if (RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled() ||
      RuntimeEnabledFeatures::CompositeAfterPaintEnabled()) {
    if (document->Lifecycle().GetState() >= DocumentLifecycle::kPaintClean)
      LayerTreePainted();
  } else if (document->Lifecycle().GetState() >=
             DocumentLifecycle::kCompositingClean) {
    LayerTreeDidChange();
  }
  return Response::OK();
}

Response InspectorLayerTreeAgent::disable() {
  instrumenting_agents_->RemoveInspectorLayerTreeAgent(this);
  snapshot_by_id_.clear();
  return Response::OK();
}

void InspectorLayerTreeAgent::LayerTreeDidChange() {
  DCHECK(!RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled() &&
         !RuntimeEnabledFeatures::CompositeAfterPaintEnabled());
  GetFrontend()->layerTreeDidChange(BuildLayerTree());
}

void InspectorLayerTreeAgent::DidPaint(const cc::Layer* layer,
                                       const LayoutRect& rect) {
  DCHECK(!RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled() &&
         !RuntimeEnabledFeatures::CompositeAfterPaintEnabled());
  if (suppress_layer_paint_events_)
    return;

  // Should only happen for LocalFrameView paints when compositing is off.
  // Consider different instrumentation method for that.
  if (!layer)
    return;

  std::unique_ptr<protocol::DOM::Rect> dom_rect = protocol::DOM::Rect::create()
                                                      .setX(rect.X())
                                                      .setY(rect.Y())
                                                      .setWidth(rect.Width())
                                                      .setHeight(rect.Height())
                                                      .build();
  GetFrontend()->layerPainted(IdForLayer(layer), std::move(dom_rect));
}

void InspectorLayerTreeAgent::LayerTreePainted() {
  DCHECK(RuntimeEnabledFeatures::BlinkGenPropertyTreesEnabled() ||
         RuntimeEnabledFeatures::CompositeAfterPaintEnabled());

  GetFrontend()->layerTreeDidChange(BuildLayerTree());

  for (const auto& layer :
       inspected_frames_->Root()->View()->RootCcLayer()->children()) {
    if (!layer->update_rect().IsEmpty()) {
      GetFrontend()->layerPainted(IdForLayer(layer.get()),
                                  BuildObjectForRect(layer->update_rect()));
    }
  }
}

std::unique_ptr<Array<protocol::LayerTree::Layer>>
InspectorLayerTreeAgent::BuildLayerTree() {
  const auto* root_layer = RootLayer();
  if (!root_layer)
    return nullptr;

  std::unique_ptr<Array<protocol::LayerTree::Layer>> layers =
      Array<protocol::LayerTree::Layer>::create();
  auto* root_frame = inspected_frames_->Root();
  auto* layer_for_scrolling =
      root_frame->View()->LayoutViewport()->LayerForScrolling();
  int scrolling_layer_id =
      layer_for_scrolling ? layer_for_scrolling->CcLayer()->id() : 0;
  bool have_blocking_wheel_event_handlers =
      root_frame->GetChromeClient().EventListenerProperties(
          root_frame, cc::EventListenerClass::kMouseWheel) ==
      cc::EventListenerProperties::kBlocking;

  GatherLayers(root_layer, layers, have_blocking_wheel_event_handlers,
               scrolling_layer_id);
  return layers;
}

void InspectorLayerTreeAgent::GatherLayers(
    const cc::Layer* layer,
    std::unique_ptr<Array<protocol::LayerTree::Layer>>& layers,
    bool has_wheel_event_handlers,
    int scrolling_layer_id) {
  if (client_->IsInspectorLayer(layer))
    return;
  int layer_id = layer->id();
  layers->addItem(BuildObjectForLayer(
      RootLayer(), layer,
      has_wheel_event_handlers && layer_id == scrolling_layer_id));
  for (auto child : layer->children()) {
    GatherLayers(child.get(), layers, has_wheel_event_handlers,
                 scrolling_layer_id);
  }
}

const cc::Layer* InspectorLayerTreeAgent::RootLayer() {
  return inspected_frames_->Root()->View()->RootCcLayer();
}

static const cc::Layer* FindLayerById(const cc::Layer* root, int layer_id) {
  if (root->id() == layer_id)
    return root;
  for (auto child : root->children()) {
    if (const auto* layer = FindLayerById(child.get(), layer_id))
      return layer;
  }
  return nullptr;
}

Response InspectorLayerTreeAgent::LayerById(const String& layer_id,
                                            const cc::Layer*& result) {
  bool ok;
  int id = layer_id.ToInt(&ok);
  if (!ok)
    return Response::Error("Invalid layer id");

  result = FindLayerById(RootLayer(), id);
  if (!result)
    return Response::Error("No layer matching given id found");
  return Response::OK();
}

Response InspectorLayerTreeAgent::compositingReasons(
    const String& layer_id,
    std::unique_ptr<Array<String>>* reason_strings) {
  const cc::Layer* layer = nullptr;
  Response response = LayerById(layer_id, layer);
  if (!response.isSuccess())
    return response;
  CompositingReasons reasons = layer->compositing_reasons();
  *reason_strings = Array<String>::create();
  for (const char* name : CompositingReason::ShortNames(reasons))
    (*reason_strings)->addItem(name);
  return Response::OK();
}

Response InspectorLayerTreeAgent::makeSnapshot(const String& layer_id,
                                               String* snapshot_id) {
  const cc::Layer* layer = nullptr;
  Response response = LayerById(layer_id, layer);
  if (!response.isSuccess())
    return response;
  if (!layer->DrawsContent())
    return Response::Error("Layer does not draw content");

  suppress_layer_paint_events_ = true;

  // If we hit a devtool break point in the middle of document lifecycle, for
  // example, https://crbug.com/788219, this will prevent crash when clicking
  // the "layer" panel.
  if (inspected_frames_->Root()->GetDocument() && inspected_frames_->Root()
                                                      ->GetDocument()
                                                      ->Lifecycle()
                                                      .LifecyclePostponed())
    return Response::Error("Layer does not draw content");

  inspected_frames_->Root()->View()->UpdateAllLifecyclePhases(
      DocumentLifecycle::LifecycleUpdateReason::kOther);

  suppress_layer_paint_events_ = false;

  auto picture = layer->GetPicture();
  if (!picture)
    return Response::Error("Layer does not produce picture");

  auto snapshot = base::MakeRefCounted<PictureSnapshot>(std::move(picture));
  *snapshot_id = String::Number(++last_snapshot_id_);
  bool new_entry = snapshot_by_id_.insert(*snapshot_id, snapshot).is_new_entry;
  DCHECK(new_entry);
  return Response::OK();
}

Response InspectorLayerTreeAgent::loadSnapshot(
    std::unique_ptr<Array<protocol::LayerTree::PictureTile>> tiles,
    String* snapshot_id) {
  if (!tiles->length())
    return Response::Error("Invalid argument, no tiles provided");
  if (tiles->length() > UINT_MAX)
    return Response::Error("Invalid argument, too many tiles provided");
  wtf_size_t tiles_length = static_cast<wtf_size_t>(tiles->length());
  Vector<scoped_refptr<PictureSnapshot::TilePictureStream>> decoded_tiles;
  decoded_tiles.Grow(tiles_length);
  for (wtf_size_t i = 0; i < tiles_length; ++i) {
    protocol::LayerTree::PictureTile* tile = tiles->get(i);
    decoded_tiles[i] = base::AdoptRef(new PictureSnapshot::TilePictureStream());
    decoded_tiles[i]->layer_offset.Set(tile->getX(), tile->getY());
    const protocol::Binary& data = tile->getPicture();
    decoded_tiles[i]->picture =
        SkPicture::MakeFromData(data.data(), data.size());
  }
  scoped_refptr<PictureSnapshot> snapshot =
      PictureSnapshot::Load(decoded_tiles);
  if (!snapshot)
    return Response::Error("Invalid snapshot format");
  if (snapshot->IsEmpty())
    return Response::Error("Empty snapshot");

  *snapshot_id = String::Number(++last_snapshot_id_);
  bool new_entry = snapshot_by_id_.insert(*snapshot_id, snapshot).is_new_entry;
  DCHECK(new_entry);
  return Response::OK();
}

Response InspectorLayerTreeAgent::releaseSnapshot(const String& snapshot_id) {
  SnapshotById::iterator it = snapshot_by_id_.find(snapshot_id);
  if (it == snapshot_by_id_.end())
    return Response::Error("Snapshot not found");
  snapshot_by_id_.erase(it);
  return Response::OK();
}

Response InspectorLayerTreeAgent::GetSnapshotById(
    const String& snapshot_id,
    const PictureSnapshot*& result) {
  SnapshotById::iterator it = snapshot_by_id_.find(snapshot_id);
  if (it == snapshot_by_id_.end())
    return Response::Error("Snapshot not found");
  result = it->value.get();
  return Response::OK();
}

Response InspectorLayerTreeAgent::replaySnapshot(const String& snapshot_id,
                                                 Maybe<int> from_step,
                                                 Maybe<int> to_step,
                                                 Maybe<double> scale,
                                                 String* data_url) {
  const PictureSnapshot* snapshot = nullptr;
  Response response = GetSnapshotById(snapshot_id, snapshot);
  if (!response.isSuccess())
    return response;
  Vector<char> base64_data = snapshot->Replay(
      from_step.fromMaybe(0), to_step.fromMaybe(0), scale.fromMaybe(1.0));
  if (base64_data.IsEmpty())
    return Response::Error("Image encoding failed");
  static constexpr char kUrlPrefix[] = "data:image/png;base64,";
  StringBuilder url;
  url.ReserveCapacity(sizeof(kUrlPrefix) + base64_data.size());
  url.Append(kUrlPrefix);
  url.Append(base64_data.begin(), base64_data.size());
  *data_url = url.ToString();
  return Response::OK();
}

static void ParseRect(protocol::DOM::Rect* object, FloatRect* rect) {
  *rect = FloatRect(object->getX(), object->getY(), object->getWidth(),
                    object->getHeight());
}

Response InspectorLayerTreeAgent::profileSnapshot(
    const String& snapshot_id,
    Maybe<int> min_repeat_count,
    Maybe<double> min_duration,
    Maybe<protocol::DOM::Rect> clip_rect,
    std::unique_ptr<protocol::Array<protocol::Array<double>>>* out_timings) {
  const PictureSnapshot* snapshot = nullptr;
  Response response = GetSnapshotById(snapshot_id, snapshot);
  if (!response.isSuccess())
    return response;
  FloatRect rect;
  if (clip_rect.isJust())
    ParseRect(clip_rect.fromJust(), &rect);
  auto timings =
      snapshot->Profile(min_repeat_count.fromMaybe(1),
                        TimeDelta::FromSecondsD(min_duration.fromMaybe(0)),
                        clip_rect.isJust() ? &rect : nullptr);
  *out_timings = Array<Array<double>>::create();
  for (const auto& row : timings) {
    std::unique_ptr<Array<double>> out_row = Array<double>::create();
    for (TimeDelta delta : row)
      out_row->addItem(delta.InSecondsF());
    (*out_timings)->addItem(std::move(out_row));
  }
  return Response::OK();
}

Response InspectorLayerTreeAgent::snapshotCommandLog(
    const String& snapshot_id,
    std::unique_ptr<Array<protocol::DictionaryValue>>* command_log) {
  const PictureSnapshot* snapshot = nullptr;
  Response response = GetSnapshotById(snapshot_id, snapshot);
  if (!response.isSuccess())
    return response;
  protocol::ErrorSupport errors;
  std::unique_ptr<protocol::Value> log_value = protocol::StringUtil::parseJSON(
      snapshot->SnapshotCommandLog()->ToJSONString());
  *command_log =
      Array<protocol::DictionaryValue>::fromValue(log_value.get(), &errors);
  if (errors.hasErrors())
    return Response::Error(errors.errors());
  return Response::OK();
}

}  // namespace blink
