// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_SHARED_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "services/device/public/mojom/battery_status.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace device {
namespace mojom {
class BatteryStatusDataView;



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::device::mojom::BatteryStatusDataView> {
  using Data = ::device::mojom::internal::BatteryStatus_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace device {
namespace mojom {
class BatteryStatusDataView {
 public:
  BatteryStatusDataView() {}

  BatteryStatusDataView(
      internal::BatteryStatus_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool charging() const {
    return data_->charging;
  }
  double charging_time() const {
    return data_->charging_time;
  }
  double discharging_time() const {
    return data_->discharging_time;
  }
  double level() const {
    return data_->level;
  }
 private:
  internal::BatteryStatus_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BatteryStatusDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::BatteryStatusDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::BatteryStatus_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->charging = Traits::charging(input);
    (*output)->charging_time = Traits::charging_time(input);
    (*output)->discharging_time = Traits::discharging_time(input);
    (*output)->level = Traits::level(input);
  }

  static bool Deserialize(::device::mojom::internal::BatteryStatus_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::BatteryStatusDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace device {
namespace mojom {




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_STATUS_MOJOM_SHARED_H_