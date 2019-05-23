// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_H_

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
#include "services/viz/public/interfaces/hit_test/hit_test_region_list.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
#include "components/viz/common/hit_test/hit_test_region_list.h"




namespace viz {
namespace mojom {









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
      const gfx::Rect& rect,
      const gfx::Transform& transform);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HitTestRegion::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  gfx::Rect rect;
  
  gfx::Transform transform;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
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
      const gfx::Rect& bounds,
      const gfx::Transform& transform,
      const std::vector<viz::HitTestRegion>& regions);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HitTestRegionList::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  gfx::Rect bounds;
  
  gfx::Transform transform;
  
  std::vector<viz::HitTestRegion> regions;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
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


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::HitTestRegion::DataView,
                                         ::viz::mojom::HitTestRegionPtr> {
  static bool IsNull(const ::viz::mojom::HitTestRegionPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::HitTestRegionPtr* output) { output->reset(); }

  static decltype(::viz::mojom::HitTestRegion::flags) flags(
      const ::viz::mojom::HitTestRegionPtr& input) {
    return input->flags;
  }

  static decltype(::viz::mojom::HitTestRegion::async_hit_test_reasons) async_hit_test_reasons(
      const ::viz::mojom::HitTestRegionPtr& input) {
    return input->async_hit_test_reasons;
  }

  static const decltype(::viz::mojom::HitTestRegion::frame_sink_id)& frame_sink_id(
      const ::viz::mojom::HitTestRegionPtr& input) {
    return input->frame_sink_id;
  }

  static const decltype(::viz::mojom::HitTestRegion::rect)& rect(
      const ::viz::mojom::HitTestRegionPtr& input) {
    return input->rect;
  }

  static const decltype(::viz::mojom::HitTestRegion::transform)& transform(
      const ::viz::mojom::HitTestRegionPtr& input) {
    return input->transform;
  }

  static bool Read(::viz::mojom::HitTestRegion::DataView input, ::viz::mojom::HitTestRegionPtr* output);
};


template <>
struct  StructTraits<::viz::mojom::HitTestRegionList::DataView,
                                         ::viz::mojom::HitTestRegionListPtr> {
  static bool IsNull(const ::viz::mojom::HitTestRegionListPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::HitTestRegionListPtr* output) { output->reset(); }

  static decltype(::viz::mojom::HitTestRegionList::flags) flags(
      const ::viz::mojom::HitTestRegionListPtr& input) {
    return input->flags;
  }

  static decltype(::viz::mojom::HitTestRegionList::async_hit_test_reasons) async_hit_test_reasons(
      const ::viz::mojom::HitTestRegionListPtr& input) {
    return input->async_hit_test_reasons;
  }

  static const decltype(::viz::mojom::HitTestRegionList::bounds)& bounds(
      const ::viz::mojom::HitTestRegionListPtr& input) {
    return input->bounds;
  }

  static const decltype(::viz::mojom::HitTestRegionList::transform)& transform(
      const ::viz::mojom::HitTestRegionListPtr& input) {
    return input->transform;
  }

  static const decltype(::viz::mojom::HitTestRegionList::regions)& regions(
      const ::viz::mojom::HitTestRegionListPtr& input) {
    return input->regions;
  }

  static bool Read(::viz::mojom::HitTestRegionList::DataView input, ::viz::mojom::HitTestRegionListPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_HIT_TEST_HIT_TEST_REGION_LIST_MOJOM_H_