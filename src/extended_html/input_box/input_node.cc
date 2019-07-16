// Copyright 2016 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "extended_html/input_box/input_node.h"

#include "cobalt/render_tree/node_visitor.h"

#include "cobalt/base/polymorphic_downcast.h"

#include "renderer_stub/rasterizer/skia/render_tree_node_visitor.h"

namespace cobalt {
namespace render_tree {

using namespace cobalt::renderer::rasterizer::skia;

void InputNode::RenderTreeNodeVisit(const NodeVisitor *render_target) {
  DCHECK(render_target);

  /// TODO
  const RenderTreeNodeVisitor* skia_visitor =
  base::polymorphic_downcast<const RenderTreeNodeVisitor*>(render_target);

  const math::RectF math_rect = data().rect;

  /// TODO
  //printf("draw rect %s\n", math_rect.ToString().c_str());

  /*SkRect sk_rect = SkRect::MakeXYWH(math_rect.x(), math_rect.y(),
                                    math_rect.width(), math_rect.height());
  SkMatrix total_matrix = skia_visitor->draw_state_.render_target->getTotalMatrix();

  SkRect sk_rect_transformed;
  total_matrix.mapRect(&sk_rect_transformed, sk_rect);

  math::RectF transformed_rectf(
      sk_rect_transformed.x(), sk_rect_transformed.y(),
      sk_rect_transformed.width(), sk_rect_transformed.height());
  math::Rect transformed_rect = math::Rect::RoundFromRectF(transformed_rectf);
  //data().set_bounds_cb.Run(transformed_rect);*/

  SkRect sk_rect =
      SkRect::MakeXYWH(math_rect.x(), math_rect.y(), math_rect.width(), math_rect.height());

  SkPaint paint;

  paint.setColor(SK_ColorGREEN);

  skia_visitor->draw_state_.render_target->drawRect(sk_rect, paint);

  //skia_visitor->draw_state_.render_target->drawOval(sk_rect, paint);

#if ENABLE_FLUSH_AFTER_EVERY_NODE
  skia_visitor->draw_state_.render_target->flush();
#endif
}

void InputNode::Accept(NodeVisitor* visitor) {
  visitor->Visit(this);
}

math::RectF InputNode::GetBounds() const { return data_.rect; }

}  // namespace render_tree
}  // namespace cobalt
