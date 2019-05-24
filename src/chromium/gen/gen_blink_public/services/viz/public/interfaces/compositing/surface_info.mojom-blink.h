// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_H_

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
#include "services/viz/public/interfaces/compositing/surface_info.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink.h"
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
#include "components/viz/common/surfaces/surface_info.h"




namespace viz {
namespace mojom {
namespace blink {








class  SurfaceInfo {
 public:
  using DataView = SurfaceInfoDataView;
  using Data_ = internal::SurfaceInfo_Data;

  template <typename... Args>
  static SurfaceInfoPtr New(Args&&... args) {
    return SurfaceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<SurfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceInfo>::Convert(*this);
  }


  SurfaceInfo();

  SurfaceInfo(
      const viz::SurfaceId& surface_id,
      float device_scale_factor,
      const ::blink::WebSize& size_in_pixels);

  ~SurfaceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceInfoPtr>
  SurfaceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceInfo_UnserializedMessageContext<
            UserType, SurfaceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SurfaceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceInfo_UnserializedMessageContext<
            UserType, SurfaceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::SurfaceId surface_id;
  
  float device_scale_factor;
  
  ::blink::WebSize size_in_pixels;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SurfaceInfoPtr SurfaceInfo::Clone() const {
  return New(
      mojo::Clone(surface_id),
      mojo::Clone(device_scale_factor),
      mojo::Clone(size_in_pixels)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceInfo>::value>::type*>
bool SurfaceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->surface_id, other_struct.surface_id))
    return false;
  if (!mojo::Equals(this->device_scale_factor, other_struct.device_scale_factor))
    return false;
  if (!mojo::Equals(this->size_in_pixels, other_struct.size_in_pixels))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::blink::SurfaceInfo::DataView,
                                         ::viz::mojom::blink::SurfaceInfoPtr> {
  static bool IsNull(const ::viz::mojom::blink::SurfaceInfoPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::SurfaceInfoPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::SurfaceInfo::surface_id)& surface_id(
      const ::viz::mojom::blink::SurfaceInfoPtr& input) {
    return input->surface_id;
  }

  static decltype(::viz::mojom::blink::SurfaceInfo::device_scale_factor) device_scale_factor(
      const ::viz::mojom::blink::SurfaceInfoPtr& input) {
    return input->device_scale_factor;
  }

  static const decltype(::viz::mojom::blink::SurfaceInfo::size_in_pixels)& size_in_pixels(
      const ::viz::mojom::blink::SurfaceInfoPtr& input) {
    return input->size_in_pixels;
  }

  static bool Read(::viz::mojom::blink::SurfaceInfo::DataView input, ::viz::mojom::blink::SurfaceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_SURFACE_INFO_MOJOM_BLINK_H_