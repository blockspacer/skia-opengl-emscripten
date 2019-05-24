// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/geoposition.mojom-shared.h"
#include "services/device/public/mojom/geoposition.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct device_mojom_internal_Geoposition_ErrorCode_DataHashFn {
  static unsigned GetHash(const ::device::mojom::Geoposition_ErrorCode& value) {
    using utype = std::underlying_type<::device::mojom::Geoposition_ErrorCode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::device::mojom::Geoposition_ErrorCode& left, const ::device::mojom::Geoposition_ErrorCode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::device::mojom::Geoposition_ErrorCode>
    : public GenericHashTraits<::device::mojom::Geoposition_ErrorCode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::device::mojom::Geoposition_ErrorCode& value) {
    return value == static_cast<::device::mojom::Geoposition_ErrorCode>(-1000000);
  }
  static void ConstructDeletedValue(::device::mojom::Geoposition_ErrorCode& slot, bool) {
    slot = static_cast<::device::mojom::Geoposition_ErrorCode>(-1000001);
  }
  static bool IsDeletedValue(const ::device::mojom::Geoposition_ErrorCode& value) {
    return value == static_cast<::device::mojom::Geoposition_ErrorCode>(-1000001);
  }
};
}  // namespace WTF


namespace device {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT Geoposition {
 public:
  using DataView = GeopositionDataView;
  using Data_ = internal::Geoposition_Data;
  using ErrorCode = Geoposition_ErrorCode;

  template <typename... Args>
  static GeopositionPtr New(Args&&... args) {
    return GeopositionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GeopositionPtr From(const U& u) {
    return mojo::TypeConverter<GeopositionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Geoposition>::Convert(*this);
  }


  Geoposition();

  Geoposition(
      bool valid,
      double latitude,
      double longitude,
      double altitude,
      double accuracy,
      double altitude_accuracy,
      double heading,
      double speed,
      base::Time timestamp,
      Geoposition::ErrorCode error_code,
      const WTF::String& error_message);

  ~Geoposition();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GeopositionPtr>
  GeopositionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Geoposition>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Geoposition::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Geoposition::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Geoposition_UnserializedMessageContext<
            UserType, Geoposition::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<Geoposition::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Geoposition::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Geoposition_UnserializedMessageContext<
            UserType, Geoposition::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Geoposition::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool valid;
  
  double latitude;
  
  double longitude;
  
  double altitude;
  
  double accuracy;
  
  double altitude_accuracy;
  
  double heading;
  
  double speed;
  
  base::Time timestamp;
  
  Geoposition::ErrorCode error_code;
  
  WTF::String error_message;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
GeopositionPtr Geoposition::Clone() const {
  return New(
      mojo::Clone(valid),
      mojo::Clone(latitude),
      mojo::Clone(longitude),
      mojo::Clone(altitude),
      mojo::Clone(accuracy),
      mojo::Clone(altitude_accuracy),
      mojo::Clone(heading),
      mojo::Clone(speed),
      mojo::Clone(timestamp),
      mojo::Clone(error_code),
      mojo::Clone(error_message)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Geoposition>::value>::type*>
bool Geoposition::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->valid, other_struct.valid))
    return false;
  if (!mojo::Equals(this->latitude, other_struct.latitude))
    return false;
  if (!mojo::Equals(this->longitude, other_struct.longitude))
    return false;
  if (!mojo::Equals(this->altitude, other_struct.altitude))
    return false;
  if (!mojo::Equals(this->accuracy, other_struct.accuracy))
    return false;
  if (!mojo::Equals(this->altitude_accuracy, other_struct.altitude_accuracy))
    return false;
  if (!mojo::Equals(this->heading, other_struct.heading))
    return false;
  if (!mojo::Equals(this->speed, other_struct.speed))
    return false;
  if (!mojo::Equals(this->timestamp, other_struct.timestamp))
    return false;
  if (!mojo::Equals(this->error_code, other_struct.error_code))
    return false;
  if (!mojo::Equals(this->error_message, other_struct.error_message))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::Geoposition::DataView,
                                         ::device::mojom::blink::GeopositionPtr> {
  static bool IsNull(const ::device::mojom::blink::GeopositionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::GeopositionPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::Geoposition::valid) valid(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->valid;
  }

  static decltype(::device::mojom::blink::Geoposition::latitude) latitude(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->latitude;
  }

  static decltype(::device::mojom::blink::Geoposition::longitude) longitude(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->longitude;
  }

  static decltype(::device::mojom::blink::Geoposition::altitude) altitude(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->altitude;
  }

  static decltype(::device::mojom::blink::Geoposition::accuracy) accuracy(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->accuracy;
  }

  static decltype(::device::mojom::blink::Geoposition::altitude_accuracy) altitude_accuracy(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->altitude_accuracy;
  }

  static decltype(::device::mojom::blink::Geoposition::heading) heading(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->heading;
  }

  static decltype(::device::mojom::blink::Geoposition::speed) speed(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->speed;
  }

  static const decltype(::device::mojom::blink::Geoposition::timestamp)& timestamp(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->timestamp;
  }

  static decltype(::device::mojom::blink::Geoposition::error_code) error_code(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->error_code;
  }

  static const decltype(::device::mojom::blink::Geoposition::error_message)& error_message(
      const ::device::mojom::blink::GeopositionPtr& input) {
    return input->error_message;
  }

  static bool Read(::device::mojom::blink::Geoposition::DataView input, ::device::mojom::blink::GeopositionPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_GEOPOSITION_MOJOM_BLINK_H_