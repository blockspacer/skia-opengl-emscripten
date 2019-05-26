// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-shared.h"
#include "services/viz/public/interfaces/hit_test/aggregated_hit_test_region.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
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








class  AggregatedHitTestRegion {
 public:
  using DataView = AggregatedHitTestRegionDataView;
  using Data_ = internal::AggregatedHitTestRegion_Data;

  template <typename... Args>
  static AggregatedHitTestRegionPtr New(Args&&... args) {
    return AggregatedHitTestRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AggregatedHitTestRegionPtr From(const U& u) {
    return mojo::TypeConverter<AggregatedHitTestRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AggregatedHitTestRegion>::Convert(*this);
  }


  AggregatedHitTestRegion();

  AggregatedHitTestRegion(
      const viz::FrameSinkId& frame_sink_id,
      uint32_t flags,
      uint32_t async_hit_test_reasons,
      const ::blink::WebRect& rect,
      uint32_t child_count,
      ::gfx::mojom::blink::TransformPtr transform);

  ~AggregatedHitTestRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AggregatedHitTestRegionPtr>
  AggregatedHitTestRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AggregatedHitTestRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AggregatedHitTestRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AggregatedHitTestRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AggregatedHitTestRegion_UnserializedMessageContext<
            UserType, AggregatedHitTestRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AggregatedHitTestRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AggregatedHitTestRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AggregatedHitTestRegion_UnserializedMessageContext<
            UserType, AggregatedHitTestRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AggregatedHitTestRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::FrameSinkId frame_sink_id;
  
  uint32_t flags;
  
  uint32_t async_hit_test_reasons;
  
  ::blink::WebRect rect;
  
  uint32_t child_count;
  
  ::gfx::mojom::blink::TransformPtr transform;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AggregatedHitTestRegion);
};

template <typename StructPtrType>
AggregatedHitTestRegionPtr AggregatedHitTestRegion::Clone() const {
  return New(
      mojo::Clone(frame_sink_id),
      mojo::Clone(flags),
      mojo::Clone(async_hit_test_reasons),
      mojo::Clone(rect),
      mojo::Clone(child_count),
      mojo::Clone(transform)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AggregatedHitTestRegion>::value>::type*>
bool AggregatedHitTestRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_sink_id, other_struct.frame_sink_id))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->async_hit_test_reasons, other_struct.async_hit_test_reasons))
    return false;
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->child_count, other_struct.child_count))
    return false;
  if (!mojo::Equals(this->transform, other_struct.transform))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::AggregatedHitTestRegion::DataView,
                                         ::viz::mojom::blink::AggregatedHitTestRegionPtr> {
  static bool IsNull(const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::AggregatedHitTestRegionPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::AggregatedHitTestRegion::frame_sink_id)& frame_sink_id(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->frame_sink_id;
  }

  static decltype(::viz::mojom::blink::AggregatedHitTestRegion::flags) flags(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->flags;
  }

  static decltype(::viz::mojom::blink::AggregatedHitTestRegion::async_hit_test_reasons) async_hit_test_reasons(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->async_hit_test_reasons;
  }

  static const decltype(::viz::mojom::blink::AggregatedHitTestRegion::rect)& rect(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->rect;
  }

  static decltype(::viz::mojom::blink::AggregatedHitTestRegion::child_count) child_count(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->child_count;
  }

  static const decltype(::viz::mojom::blink::AggregatedHitTestRegion::transform)& transform(
      const ::viz::mojom::blink::AggregatedHitTestRegionPtr& input) {
    return input->transform;
  }

  static bool Read(::viz::mojom::blink::AggregatedHitTestRegion::DataView input, ::viz::mojom::blink::AggregatedHitTestRegionPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_AGGREGATED_HIT_TEST_REGION_MOJOM_BLINK_H_