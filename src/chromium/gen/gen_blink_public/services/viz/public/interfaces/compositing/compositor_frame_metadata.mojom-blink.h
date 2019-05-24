// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_metadata.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/begin_frame_args.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/frame_deadline.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/selection.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-blink.h"
#include "ui/latency/mojo/latency_info.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {
namespace blink {








class  CompositorFrameMetadata {
 public:
  using DataView = CompositorFrameMetadataDataView;
  using Data_ = internal::CompositorFrameMetadata_Data;

  template <typename... Args>
  static CompositorFrameMetadataPtr New(Args&&... args) {
    return CompositorFrameMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CompositorFrameMetadataPtr From(const U& u) {
    return mojo::TypeConverter<CompositorFrameMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CompositorFrameMetadata>::Convert(*this);
  }


  CompositorFrameMetadata();

  CompositorFrameMetadata(
      float device_scale_factor,
      ::gfx::mojom::blink::Vector2dFPtr root_scroll_offset,
      float page_scale_factor,
      ::gfx::mojom::blink::SizeFPtr scrollable_viewport_size,
      bool may_contain_video,
      bool is_resourceless_software_draw_with_scroll_or_animation,
      uint32_t root_background_color,
      WTF::Vector<::ui::mojom::blink::LatencyInfoPtr> latency_info,
      WTF::Vector<::viz::mojom::blink::SurfaceRangePtr> referenced_surfaces,
      ::viz::mojom::blink::FrameDeadlinePtr deadline,
      const WTF::Vector<viz::SurfaceId>& activation_dependencies,
      uint32_t content_source_id,
      const viz::BeginFrameAck& begin_frame_ack,
      uint32_t frame_token,
      bool send_frame_token_to_embedder,
      float min_page_scale_factor,
      float top_controls_height,
      float top_controls_shown_ratio,
      base::TimeTicks local_surface_id_allocation_time,
      base::Optional<base::TimeDelta> preferred_frame_interval);

  ~CompositorFrameMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CompositorFrameMetadataPtr>
  CompositorFrameMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CompositorFrameMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CompositorFrameMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CompositorFrameMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CompositorFrameMetadata_UnserializedMessageContext<
            UserType, CompositorFrameMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CompositorFrameMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CompositorFrameMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CompositorFrameMetadata_UnserializedMessageContext<
            UserType, CompositorFrameMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CompositorFrameMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  float device_scale_factor;
  
  ::gfx::mojom::blink::Vector2dFPtr root_scroll_offset;
  
  float page_scale_factor;
  
  ::gfx::mojom::blink::SizeFPtr scrollable_viewport_size;
  
  bool may_contain_video;
  
  bool is_resourceless_software_draw_with_scroll_or_animation;
  
  uint32_t root_background_color;
  
  WTF::Vector<::ui::mojom::blink::LatencyInfoPtr> latency_info;
  
  WTF::Vector<::viz::mojom::blink::SurfaceRangePtr> referenced_surfaces;
  
  ::viz::mojom::blink::FrameDeadlinePtr deadline;
  
  WTF::Vector<viz::SurfaceId> activation_dependencies;
  
  uint32_t content_source_id;
  
  viz::BeginFrameAck begin_frame_ack;
  
  uint32_t frame_token;
  
  bool send_frame_token_to_embedder;
  
  float min_page_scale_factor;
  
  float top_controls_height;
  
  float top_controls_shown_ratio;
  
  base::TimeTicks local_surface_id_allocation_time;
  
  base::Optional<base::TimeDelta> preferred_frame_interval;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CompositorFrameMetadata);
};

template <typename StructPtrType>
CompositorFrameMetadataPtr CompositorFrameMetadata::Clone() const {
  return New(
      mojo::Clone(device_scale_factor),
      mojo::Clone(root_scroll_offset),
      mojo::Clone(page_scale_factor),
      mojo::Clone(scrollable_viewport_size),
      mojo::Clone(may_contain_video),
      mojo::Clone(is_resourceless_software_draw_with_scroll_or_animation),
      mojo::Clone(root_background_color),
      mojo::Clone(latency_info),
      mojo::Clone(referenced_surfaces),
      mojo::Clone(deadline),
      mojo::Clone(activation_dependencies),
      mojo::Clone(content_source_id),
      mojo::Clone(begin_frame_ack),
      mojo::Clone(frame_token),
      mojo::Clone(send_frame_token_to_embedder),
      mojo::Clone(min_page_scale_factor),
      mojo::Clone(top_controls_height),
      mojo::Clone(top_controls_shown_ratio),
      mojo::Clone(local_surface_id_allocation_time),
      mojo::Clone(preferred_frame_interval)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CompositorFrameMetadata>::value>::type*>
bool CompositorFrameMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->root_scroll_offset, other_struct.root_scroll_offset))
    return false;
  if (!mojo::Equals(this->page_scale_factor, other_struct.page_scale_factor))
    return false;
  if (!mojo::Equals(this->scrollable_viewport_size, other_struct.scrollable_viewport_size))
    return false;
  if (!mojo::Equals(this->may_contain_video, other_struct.may_contain_video))
    return false;
  if (!mojo::Equals(this->is_resourceless_software_draw_with_scroll_or_animation, other_struct.is_resourceless_software_draw_with_scroll_or_animation))
    return false;
  if (!mojo::Equals(this->root_background_color, other_struct.root_background_color))
    return false;
  if (!mojo::Equals(this->latency_info, other_struct.latency_info))
    return false;
  if (!mojo::Equals(this->referenced_surfaces, other_struct.referenced_surfaces))
    return false;
  if (!mojo::Equals(this->deadline, other_struct.deadline))
    return false;
  if (!mojo::Equals(this->activation_dependencies, other_struct.activation_dependencies))
    return false;
  if (!mojo::Equals(this->content_source_id, other_struct.content_source_id))
    return false;
  if (!mojo::Equals(this->begin_frame_ack, other_struct.begin_frame_ack))
    return false;
  if (!mojo::Equals(this->frame_token, other_struct.frame_token))
    return false;
  if (!mojo::Equals(this->send_frame_token_to_embedder, other_struct.send_frame_token_to_embedder))
    return false;
  if (!mojo::Equals(this->min_page_scale_factor, other_struct.min_page_scale_factor))
    return false;
  if (!mojo::Equals(this->top_controls_height, other_struct.top_controls_height))
    return false;
  if (!mojo::Equals(this->top_controls_shown_ratio, other_struct.top_controls_shown_ratio))
    return false;
  if (!mojo::Equals(this->local_surface_id_allocation_time, other_struct.local_surface_id_allocation_time))
    return false;
  if (!mojo::Equals(this->preferred_frame_interval, other_struct.preferred_frame_interval))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::CompositorFrameMetadata::DataView,
                                         ::viz::mojom::blink::CompositorFrameMetadataPtr> {
  static bool IsNull(const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::CompositorFrameMetadataPtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::device_scale_factor) device_scale_factor(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->device_scale_factor;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::root_scroll_offset)& root_scroll_offset(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->root_scroll_offset;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::page_scale_factor) page_scale_factor(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->page_scale_factor;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::scrollable_viewport_size)& scrollable_viewport_size(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->scrollable_viewport_size;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::may_contain_video) may_contain_video(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->may_contain_video;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::is_resourceless_software_draw_with_scroll_or_animation) is_resourceless_software_draw_with_scroll_or_animation(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->is_resourceless_software_draw_with_scroll_or_animation;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::root_background_color) root_background_color(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->root_background_color;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::latency_info)& latency_info(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->latency_info;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::referenced_surfaces)& referenced_surfaces(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->referenced_surfaces;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::deadline)& deadline(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->deadline;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::activation_dependencies)& activation_dependencies(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->activation_dependencies;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::content_source_id) content_source_id(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->content_source_id;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::begin_frame_ack)& begin_frame_ack(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->begin_frame_ack;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::frame_token) frame_token(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->frame_token;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::send_frame_token_to_embedder) send_frame_token_to_embedder(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->send_frame_token_to_embedder;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::min_page_scale_factor) min_page_scale_factor(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->min_page_scale_factor;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::top_controls_height) top_controls_height(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->top_controls_height;
  }

  static decltype(::viz::mojom::blink::CompositorFrameMetadata::top_controls_shown_ratio) top_controls_shown_ratio(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->top_controls_shown_ratio;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::local_surface_id_allocation_time)& local_surface_id_allocation_time(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->local_surface_id_allocation_time;
  }

  static const decltype(::viz::mojom::blink::CompositorFrameMetadata::preferred_frame_interval)& preferred_frame_interval(
      const ::viz::mojom::blink::CompositorFrameMetadataPtr& input) {
    return input->preferred_frame_interval;
  }

  static bool Read(::viz::mojom::blink::CompositorFrameMetadata::DataView input, ::viz::mojom::blink::CompositorFrameMetadataPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_METADATA_MOJOM_BLINK_H_