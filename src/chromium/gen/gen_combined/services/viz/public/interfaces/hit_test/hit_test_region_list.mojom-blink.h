// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-shared.h"
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-blink.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink.h"
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









class  HitTestRegion {
 public:
  using DataView = HitTestRegionDataView;
  using Data_ = internal::HitTestRegion_Data;

  template <typename... Args>
  static HitTestRegionPtr New(Args&&... args) {
    return HitTestRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HitTestRegionPtr From(const U& u) {
    return mojo::TypeConverter<HitTestRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HitTestRegion>::Convert(*this);
  }


  HitTestRegion();

  HitTestRegion(
      uint32_t flags,
      uint32_t async_hit_test_reasons,
      const viz::FrameSinkId& frame_sink_id,
      const ::blink::WebRect& rect,
      ::gfx::mojom::blink::TransformPtr transform);

  ~HitTestRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HitTestRegionPtr>
  HitTestRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HitTestRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HitTestRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HitTestRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HitTestRegion_UnserializedMessageContext<
            UserType, HitTestRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HitTestRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HitTestRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HitTestRegion_UnserializedMessageContext<
            UserType, HitTestRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HitTestRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t flags;
  
  uint32_t async_hit_test_reasons;
  
  viz::FrameSinkId frame_sink_id;
  
  ::blink::WebRect rect;
  
  ::gfx::mojom::blink::TransformPtr transform;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HitTestRegion);
};





class  HitTestRegionList {
 public:
  using DataView = HitTestRegionListDataView;
  using Data_ = internal::HitTestRegionList_Data;

  template <typename... Args>
  static HitTestRegionListPtr New(Args&&... args) {
    return HitTestRegionListPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HitTestRegionListPtr From(const U& u) {
    return mojo::TypeConverter<HitTestRegionListPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HitTestRegionList>::Convert(*this);
  }


  HitTestRegionList();

  HitTestRegionList(
      uint32_t flags,
      uint32_t async_hit_test_reasons,
      const ::blink::WebRect& bounds,
      ::gfx::mojom::blink::TransformPtr transform,
      WTF::Vector<HitTestRegionPtr> regions);

  ~HitTestRegionList();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HitTestRegionListPtr>
  HitTestRegionListPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HitTestRegionList>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HitTestRegionList::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HitTestRegionList::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HitTestRegionList_UnserializedMessageContext<
            UserType, HitTestRegionList::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HitTestRegionList::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HitTestRegionList::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HitTestRegionList_UnserializedMessageContext<
            UserType, HitTestRegionList::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HitTestRegionList::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t flags;
  
  uint32_t async_hit_test_reasons;
  
  ::blink::WebRect bounds;
  
  ::gfx::mojom::blink::TransformPtr transform;
  
  WTF::Vector<HitTestRegionPtr> regions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HitTestRegionList);
};

template <typename StructPtrType>
HitTestRegionPtr HitTestRegion::Clone() const {
  return New(
      mojo::Clone(flags),
      mojo::Clone(async_hit_test_reasons),
      mojo::Clone(frame_sink_id),
      mojo::Clone(rect),
      mojo::Clone(transform)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HitTestRegion>::value>::type*>
bool HitTestRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->async_hit_test_reasons, other_struct.async_hit_test_reasons))
    return false;
  if (!mojo::Equals(this->frame_sink_id, other_struct.frame_sink_id))
    return false;
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->transform, other_struct.transform))
    return false;
  return true;
}
template <typename StructPtrType>
HitTestRegionListPtr HitTestRegionList::Clone() const {
  return New(
      mojo::Clone(flags),
      mojo::Clone(async_hit_test_reasons),
      mojo::Clone(bounds),
      mojo::Clone(transform),
      mojo::Clone(regions)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HitTestRegionList>::value>::type*>
bool HitTestRegionList::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->async_hit_test_reasons, other_struct.async_hit_test_reasons))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  if (!mojo::Equals(this->transform, other_struct.transform))
    return false;
  if (!mojo::Equals(this->regions, other_struct.regions))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::HitTestRegion::DataView,
                                         ::viz::mojom::blink::HitTestRegionPtr> {
  static bool IsNull(const ::viz::mojom::blink::HitTestRegionPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::HitTestRegionPtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::HitTestRegion::flags) flags(
      const ::viz::mojom::blink::HitTestRegionPtr& input) {
    return input->flags;
  }

  static decltype(::viz::mojom::blink::HitTestRegion::async_hit_test_reasons) async_hit_test_reasons(
      const ::viz::mojom::blink::HitTestRegionPtr& input) {
    return input->async_hit_test_reasons;
  }

  static const decltype(::viz::mojom::blink::HitTestRegion::frame_sink_id)& frame_sink_id(
      const ::viz::mojom::blink::HitTestRegionPtr& input) {
    return input->frame_sink_id;
  }

  static const decltype(::viz::mojom::blink::HitTestRegion::rect)& rect(
      const ::viz::mojom::blink::HitTestRegionPtr& input) {
    return input->rect;
  }

  static const decltype(::viz::mojom::blink::HitTestRegion::transform)& transform(
      const ::viz::mojom::blink::HitTestRegionPtr& input) {
    return input->transform;
  }

  static bool Read(::viz::mojom::blink::HitTestRegion::DataView input, ::viz::mojom::blink::HitTestRegionPtr* output);
};


template <>
struct  StructTraits<::viz::mojom::blink::HitTestRegionList::DataView,
                                         ::viz::mojom::blink::HitTestRegionListPtr> {
  static bool IsNull(const ::viz::mojom::blink::HitTestRegionListPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::HitTestRegionListPtr* output) { output->reset(); }

  static decltype(::viz::mojom::blink::HitTestRegionList::flags) flags(
      const ::viz::mojom::blink::HitTestRegionListPtr& input) {
    return input->flags;
  }

  static decltype(::viz::mojom::blink::HitTestRegionList::async_hit_test_reasons) async_hit_test_reasons(
      const ::viz::mojom::blink::HitTestRegionListPtr& input) {
    return input->async_hit_test_reasons;
  }

  static const decltype(::viz::mojom::blink::HitTestRegionList::bounds)& bounds(
      const ::viz::mojom::blink::HitTestRegionListPtr& input) {
    return input->bounds;
  }

  static const decltype(::viz::mojom::blink::HitTestRegionList::transform)& transform(
      const ::viz::mojom::blink::HitTestRegionListPtr& input) {
    return input->transform;
  }

  static const decltype(::viz::mojom::blink::HitTestRegionList::regions)& regions(
      const ::viz::mojom::blink::HitTestRegionListPtr& input) {
    return input->regions;
  }

  static bool Read(::viz::mojom::blink::HitTestRegionList::DataView input, ::viz::mojom::blink::HitTestRegionListPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_BLINK_H_