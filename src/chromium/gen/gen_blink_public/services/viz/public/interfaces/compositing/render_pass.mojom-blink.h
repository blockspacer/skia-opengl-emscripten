// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/render_pass.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/render_pass.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/copy_output_request.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/filter_operations.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/quads.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "ui/gfx/mojo/color_space.mojom-blink.h"
#include "ui/gfx/mojo/rrect_f.mojom-blink.h"
#include "ui/gfx/mojo/transform.mojom-blink.h"

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








class  RenderPass {
 public:
  using DataView = RenderPassDataView;
  using Data_ = internal::RenderPass_Data;

  template <typename... Args>
  static RenderPassPtr New(Args&&... args) {
    return RenderPassPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RenderPassPtr From(const U& u) {
    return mojo::TypeConverter<RenderPassPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderPass>::Convert(*this);
  }


  RenderPass();

  RenderPass(
      uint64_t id,
      const ::blink::WebRect& output_rect,
      const ::blink::WebRect& damage_rect,
      ::gfx::mojom::blink::TransformPtr transform_to_root_target,
      ::viz::mojom::blink::FilterOperationsPtr filters,
      ::viz::mojom::blink::FilterOperationsPtr backdrop_filters,
      ::gfx::mojom::blink::RRectFPtr backdrop_filter_bounds,
      ::gfx::mojom::blink::ColorSpacePtr color_space,
      bool has_transparent_background,
      bool cache_render_pass,
      bool has_damage_from_contributing_content,
      bool generate_mipmap,
      WTF::Vector<::viz::mojom::blink::CopyOutputRequestPtr> copy_requests,
      WTF::Vector<::viz::mojom::blink::DrawQuadPtr> quad_list);

  ~RenderPass();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderPassPtr>
  RenderPassPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RenderPass>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RenderPass::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RenderPass::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RenderPass_UnserializedMessageContext<
            UserType, RenderPass::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RenderPass::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RenderPass::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RenderPass_UnserializedMessageContext<
            UserType, RenderPass::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RenderPass::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t id;
  
  ::blink::WebRect output_rect;
  
  ::blink::WebRect damage_rect;
  
  ::gfx::mojom::blink::TransformPtr transform_to_root_target;
  
  ::viz::mojom::blink::FilterOperationsPtr filters;
  
  ::viz::mojom::blink::FilterOperationsPtr backdrop_filters;
  
  ::gfx::mojom::blink::RRectFPtr backdrop_filter_bounds;
  
  ::gfx::mojom::blink::ColorSpacePtr color_space;
  
  bool has_transparent_background;
  
  bool cache_render_pass;
  
  bool has_damage_from_contributing_content;
  
  bool generate_mipmap;
  
  WTF::Vector<::viz::mojom::blink::CopyOutputRequestPtr> copy_requests;
  
  WTF::Vector<::viz::mojom::blink::DrawQuadPtr> quad_list;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(RenderPass);
};

template <typename StructPtrType>
RenderPassPtr RenderPass::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(output_rect),
      mojo::Clone(damage_rect),
      mojo::Clone(transform_to_root_target),
      mojo::Clone(filters),
      mojo::Clone(backdrop_filters),
      mojo::Clone(backdrop_filter_bounds),
      mojo::Clone(color_space),
      mojo::Clone(has_transparent_background),
      mojo::Clone(cache_render_pass),
      mojo::Clone(has_damage_from_contributing_content),
      mojo::Clone(generate_mipmap),
      mojo::Clone(copy_requests),
      mojo::Clone(quad_list)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RenderPass>::value>::type*>
bool RenderPass::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->output_rect, other_struct.output_rect))
    return false;
  if (!mojo::Equals(this->damage_rect, other_struct.damage_rect))
    return false;
  if (!mojo::Equals(this->transform_to_root_target, other_struct.transform_to_root_target))
    return false;
  if (!mojo::Equals(this->filters, other_struct.filters))
    return false;
  if (!mojo::Equals(this->backdrop_filters, other_struct.backdrop_filters))
    return false;
  if (!mojo::Equals(this->backdrop_filter_bounds, other_struct.backdrop_filter_bounds))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  if (!mojo::Equals(this->has_transparent_background, other_struct.has_transparent_background))
    return false;
  if (!mojo::Equals(this->cache_render_pass, other_struct.cache_render_pass))
    return false;
  if (!mojo::Equals(this->has_damage_from_contributing_content, other_struct.has_damage_from_contributing_content))
    return false;
  if (!mojo::Equals(this->generate_mipmap, other_struct.generate_mipmap))
    return false;
  if (!mojo::Equals(this->copy_requests, other_struct.copy_requests))
    return false;
  if (!mojo::Equals(this->quad_list, other_struct.quad_list))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::RenderPass::DataView,
                                         ::viz::mojom::blink::RenderPassPtr> {
  static bool IsNull(const ::viz::mojom::blink::RenderPassPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::RenderPassPtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::RenderPass::id) id(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->id;
  }

  static const decltype(::viz::mojom::blink::RenderPass::output_rect)& output_rect(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->output_rect;
  }

  static const decltype(::viz::mojom::blink::RenderPass::damage_rect)& damage_rect(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->damage_rect;
  }

  static const decltype(::viz::mojom::blink::RenderPass::transform_to_root_target)& transform_to_root_target(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->transform_to_root_target;
  }

  static const decltype(::viz::mojom::blink::RenderPass::filters)& filters(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->filters;
  }

  static const decltype(::viz::mojom::blink::RenderPass::backdrop_filters)& backdrop_filters(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->backdrop_filters;
  }

  static const decltype(::viz::mojom::blink::RenderPass::backdrop_filter_bounds)& backdrop_filter_bounds(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->backdrop_filter_bounds;
  }

  static const decltype(::viz::mojom::blink::RenderPass::color_space)& color_space(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->color_space;
  }

  static decltype(::viz::mojom::blink::RenderPass::has_transparent_background) has_transparent_background(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->has_transparent_background;
  }

  static decltype(::viz::mojom::blink::RenderPass::cache_render_pass) cache_render_pass(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->cache_render_pass;
  }

  static decltype(::viz::mojom::blink::RenderPass::has_damage_from_contributing_content) has_damage_from_contributing_content(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->has_damage_from_contributing_content;
  }

  static decltype(::viz::mojom::blink::RenderPass::generate_mipmap) generate_mipmap(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->generate_mipmap;
  }

  static  decltype(::viz::mojom::blink::RenderPass::copy_requests)& copy_requests(
       ::viz::mojom::blink::RenderPassPtr& input) {
    return input->copy_requests;
  }

  static const decltype(::viz::mojom::blink::RenderPass::quad_list)& quad_list(
      const ::viz::mojom::blink::RenderPassPtr& input) {
    return input->quad_list;
  }

  static bool Read(::viz::mojom::blink::RenderPass::DataView input, ::viz::mojom::blink::RenderPassPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_RENDER_PASS_MOJOM_BLINK_H_