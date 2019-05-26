// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/constants.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class Constants_UnusedStruct_InternalDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::Constants_UnusedStruct_InternalDataView> {
  using Data = ::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
class Constants_UnusedStruct_InternalDataView {
 public:
  Constants_UnusedStruct_InternalDataView() {}

  Constants_UnusedStruct_InternalDataView(
      internal::Constants_UnusedStruct_Internal_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Constants_UnusedStruct_Internal_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::Constants_UnusedStruct_InternalDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::Constants_UnusedStruct_InternalDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
  }

  static bool Deserialize(::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::Constants_UnusedStruct_InternalDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {




}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_