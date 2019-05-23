// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/service.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "services/service_manager/public/mojom/connector.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared.h"
#include "services/service_manager/public/mojom/service_control.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class BindSourceInfoDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::BindSourceInfoDataView> {
  using Data = ::service_manager::mojom::internal::BindSourceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceInterfaceBase {};

using ServicePtrDataView =
    mojo::InterfacePtrDataView<ServiceInterfaceBase>;
using ServiceRequestDataView =
    mojo::InterfaceRequestDataView<ServiceInterfaceBase>;
using ServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceInterfaceBase>;
using ServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceInterfaceBase>;
class BindSourceInfoDataView {
 public:
  BindSourceInfoDataView() {}

  BindSourceInfoDataView(
      internal::BindSourceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::service_manager::mojom::IdentityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIdentity(UserType* output) {
    auto* pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::IdentityDataView>(
        pointer, output, context_);
  }
  inline void GetRequiredCapabilitiesDataView(
      ::service_manager::mojom::CapabilitySetDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequiredCapabilities(UserType* output) {
    auto* pointer = data_->required_capabilities.Get();
    return mojo::internal::Deserialize<::service_manager::mojom::CapabilitySetDataView>(
        pointer, output, context_);
  }
 private:
  internal::BindSourceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::BindSourceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::BindSourceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::BindSourceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::identity(input)) in_identity = Traits::identity(input);
    typename decltype((*output)->identity)::BaseType::BufferWriter
        identity_writer;
    mojo::internal::Serialize<::service_manager::mojom::IdentityDataView>(
        in_identity, buffer, &identity_writer, context);
    (*output)->identity.Set(
        identity_writer.is_null() ? nullptr : identity_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->identity.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null identity in BindSourceInfo struct");
    decltype(Traits::required_capabilities(input)) in_required_capabilities = Traits::required_capabilities(input);
    typename decltype((*output)->required_capabilities)::BaseType::BufferWriter
        required_capabilities_writer;
    mojo::internal::Serialize<::service_manager::mojom::CapabilitySetDataView>(
        in_required_capabilities, buffer, &required_capabilities_writer, context);
    (*output)->required_capabilities.Set(
        required_capabilities_writer.is_null() ? nullptr : required_capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->required_capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null required_capabilities in BindSourceInfo struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::BindSourceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::BindSourceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void BindSourceInfoDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}
inline void BindSourceInfoDataView::GetRequiredCapabilitiesDataView(
    ::service_manager::mojom::CapabilitySetDataView* output) {
  auto pointer = data_->required_capabilities.Get();
  *output = ::service_manager::mojom::CapabilitySetDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MOJOM_SHARED_H_