// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_BLINK_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_BLINK_H_

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
#include "services/device/public/mojom/battery_status.mojom-shared.h"
#include "services/device/public/mojom/battery_status.mojom-blink-forward.h"

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




namespace device {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT BatteryStatus {
 public:
  using DataView = BatteryStatusDataView;
  using Data_ = internal::BatteryStatus_Data;

  template <typename... Args>
  static BatteryStatusPtr New(Args&&... args) {
    return BatteryStatusPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BatteryStatusPtr From(const U& u) {
    return mojo::TypeConverter<BatteryStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatteryStatus>::Convert(*this);
  }


  BatteryStatus();

  BatteryStatus(
      bool charging,
      double charging_time,
      double discharging_time,
      double level);

  ~BatteryStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BatteryStatusPtr>
  BatteryStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BatteryStatus>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BatteryStatus::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BatteryStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BatteryStatus_UnserializedMessageContext<
            UserType, BatteryStatus::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BatteryStatus::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BatteryStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BatteryStatus_UnserializedMessageContext<
            UserType, BatteryStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BatteryStatus::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool charging;
  
  double charging_time;
  
  double discharging_time;
  
  double level;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
BatteryStatusPtr BatteryStatus::Clone() const {
  return New(
      mojo::Clone(charging),
      mojo::Clone(charging_time),
      mojo::Clone(discharging_time),
      mojo::Clone(level)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BatteryStatus>::value>::type*>
bool BatteryStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->charging, other_struct.charging))
    return false;
  if (!mojo::Equals(this->charging_time, other_struct.charging_time))
    return false;
  if (!mojo::Equals(this->discharging_time, other_struct.discharging_time))
    return false;
  if (!mojo::Equals(this->level, other_struct.level))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::device::mojom::blink::BatteryStatus::DataView,
                                         ::device::mojom::blink::BatteryStatusPtr> {
  static bool IsNull(const ::device::mojom::blink::BatteryStatusPtr& input) { return !input; }
  static void SetToNull(::device::mojom::blink::BatteryStatusPtr* output) { output->reset(); }

  static decltype(::device::mojom::blink::BatteryStatus::charging) charging(
      const ::device::mojom::blink::BatteryStatusPtr& input) {
    return input->charging;
  }

  static decltype(::device::mojom::blink::BatteryStatus::charging_time) charging_time(
      const ::device::mojom::blink::BatteryStatusPtr& input) {
    return input->charging_time;
  }

  static decltype(::device::mojom::blink::BatteryStatus::discharging_time) discharging_time(
      const ::device::mojom::blink::BatteryStatusPtr& input) {
    return input->discharging_time;
  }

  static decltype(::device::mojom::blink::BatteryStatus::level) level(
      const ::device::mojom::blink::BatteryStatusPtr& input) {
    return input->level;
  }

  static bool Read(::device::mojom::blink::BatteryStatus::DataView input, ::device::mojom::blink::BatteryStatusPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_BLINK_H_