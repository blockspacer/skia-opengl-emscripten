// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_H_

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
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/rrect_f.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include <string>
#include <vector>

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
#include "components/viz/common/quads/shared_quad_state.h"




namespace viz {
namespace mojom {








class  SharedQuadState {
 public:
  using DataView = SharedQuadStateDataView;
  using Data_ = internal::SharedQuadState_Data;

  template <typename... Args>
  static SharedQuadStatePtr New(Args&&... args) {
    return SharedQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SharedQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedQuadState>::Convert(*this);
  }


  SharedQuadState();

  SharedQuadState(
      const gfx::Transform& quad_to_target_transform,
      const gfx::Rect& quad_layer_rect,
      const gfx::Rect& visible_quad_layer_rect,
      const gfx::RRectF& rounded_corner_bounds,
      const gfx::Rect& clip_rect,
      bool is_clipped,
      bool are_contents_opaque,
      float opacity,
      uint32_t blend_mode,
      int32_t sorting_context_id);

  ~SharedQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedQuadStatePtr>
  SharedQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedQuadState_UnserializedMessageContext<
            UserType, SharedQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SharedQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedQuadState_UnserializedMessageContext<
            UserType, SharedQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::Transform quad_to_target_transform;
  
  gfx::Rect quad_layer_rect;
  
  gfx::Rect visible_quad_layer_rect;
  
  gfx::RRectF rounded_corner_bounds;
  
  gfx::Rect clip_rect;
  
  bool is_clipped;
  
  bool are_contents_opaque;
  
  float opacity;
  
  uint32_t blend_mode;
  
  int32_t sorting_context_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SharedQuadStatePtr SharedQuadState::Clone() const {
  return New(
      mojo::Clone(quad_to_target_transform),
      mojo::Clone(quad_layer_rect),
      mojo::Clone(visible_quad_layer_rect),
      mojo::Clone(rounded_corner_bounds),
      mojo::Clone(clip_rect),
      mojo::Clone(is_clipped),
      mojo::Clone(are_contents_opaque),
      mojo::Clone(opacity),
      mojo::Clone(blend_mode),
      mojo::Clone(sorting_context_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedQuadState>::value>::type*>
bool SharedQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->quad_to_target_transform, other_struct.quad_to_target_transform))
    return false;
  if (!mojo::Equals(this->quad_layer_rect, other_struct.quad_layer_rect))
    return false;
  if (!mojo::Equals(this->visible_quad_layer_rect, other_struct.visible_quad_layer_rect))
    return false;
  if (!mojo::Equals(this->rounded_corner_bounds, other_struct.rounded_corner_bounds))
    return false;
  if (!mojo::Equals(this->clip_rect, other_struct.clip_rect))
    return false;
  if (!mojo::Equals(this->is_clipped, other_struct.is_clipped))
    return false;
  if (!mojo::Equals(this->are_contents_opaque, other_struct.are_contents_opaque))
    return false;
  if (!mojo::Equals(this->opacity, other_struct.opacity))
    return false;
  if (!mojo::Equals(this->blend_mode, other_struct.blend_mode))
    return false;
  if (!mojo::Equals(this->sorting_context_id, other_struct.sorting_context_id))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::SharedQuadState::DataView,
                                         ::viz::mojom::SharedQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::SharedQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::SharedQuadStatePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::SharedQuadState::quad_to_target_transform)& quad_to_target_transform(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->quad_to_target_transform;
  }

  static const decltype(::viz::mojom::SharedQuadState::quad_layer_rect)& quad_layer_rect(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->quad_layer_rect;
  }

  static const decltype(::viz::mojom::SharedQuadState::visible_quad_layer_rect)& visible_quad_layer_rect(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->visible_quad_layer_rect;
  }

  static const decltype(::viz::mojom::SharedQuadState::rounded_corner_bounds)& rounded_corner_bounds(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->rounded_corner_bounds;
  }

  static const decltype(::viz::mojom::SharedQuadState::clip_rect)& clip_rect(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->clip_rect;
  }

  static decltype(::viz::mojom::SharedQuadState::is_clipped) is_clipped(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->is_clipped;
  }

  static decltype(::viz::mojom::SharedQuadState::are_contents_opaque) are_contents_opaque(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->are_contents_opaque;
  }

  static decltype(::viz::mojom::SharedQuadState::opacity) opacity(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->opacity;
  }

  static decltype(::viz::mojom::SharedQuadState::blend_mode) blend_mode(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->blend_mode;
  }

  static decltype(::viz::mojom::SharedQuadState::sorting_context_id) sorting_context_id(
      const ::viz::mojom::SharedQuadStatePtr& input) {
    return input->sorting_context_id;
  }

  static bool Read(::viz::mojom::SharedQuadState::DataView input, ::viz::mojom::SharedQuadStatePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SHARED_QUAD_STATE_MOJOM_H_