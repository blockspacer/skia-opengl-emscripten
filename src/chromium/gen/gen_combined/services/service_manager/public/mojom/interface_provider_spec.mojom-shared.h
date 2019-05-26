// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class InterfaceSetDataView;

class CapabilitySetDataView;

class InterfaceProviderSpecDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::InterfaceSetDataView> {
  using Data = ::service_manager::mojom::internal::InterfaceSet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::service_manager::mojom::CapabilitySetDataView> {
  using Data = ::service_manager::mojom::internal::CapabilitySet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::service_manager::mojom::InterfaceProviderSpecDataView> {
  using Data = ::service_manager::mojom::internal::InterfaceProviderSpec_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
class InterfaceSetDataView {
 public:
  InterfaceSetDataView() {}

  InterfaceSetDataView(
      internal::InterfaceSet_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInterfaces(UserType* output) {
    auto* pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InterfaceSet_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CapabilitySetDataView {
 public:
  CapabilitySetDataView() {}

  CapabilitySetDataView(
      internal::CapabilitySet_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCapabilitiesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCapabilities(UserType* output) {
    auto* pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CapabilitySet_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class InterfaceProviderSpecDataView {
 public:
  InterfaceProviderSpecDataView() {}

  InterfaceProviderSpecDataView(
      internal::InterfaceProviderSpec_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProvidesDataView(
      mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProvides(UserType* output) {
    auto* pointer = data_->provides.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::InterfaceSetDataView>>(
        pointer, output, context_);
  }
  inline void GetRequiresDataView(
      mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequires(UserType* output) {
    auto* pointer = data_->requires.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::CapabilitySetDataView>>(
        pointer, output, context_);
  }
 private:
  internal::InterfaceProviderSpec_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::InterfaceSetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::InterfaceSetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::InterfaceSet_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::interfaces(input)) in_interfaces = Traits::interfaces(input);
    typename decltype((*output)->interfaces)::BaseType::BufferWriter
        interfaces_writer;
    const mojo::internal::ContainerValidateParams interfaces_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_interfaces, buffer, &interfaces_writer, &interfaces_validate_params,
        context);
    (*output)->interfaces.Set(
        interfaces_writer.is_null() ? nullptr : interfaces_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->interfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interfaces in InterfaceSet struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::InterfaceSet_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::InterfaceSetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::CapabilitySetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::CapabilitySetDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::CapabilitySet_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::capabilities(input)) in_capabilities = Traits::capabilities(input);
    typename decltype((*output)->capabilities)::BaseType::BufferWriter
        capabilities_writer;
    const mojo::internal::ContainerValidateParams capabilities_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_capabilities, buffer, &capabilities_writer, &capabilities_validate_params,
        context);
    (*output)->capabilities.Set(
        capabilities_writer.is_null() ? nullptr : capabilities_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null capabilities in CapabilitySet struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::CapabilitySet_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::CapabilitySetDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::InterfaceProviderSpecDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::InterfaceProviderSpecDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::InterfaceProviderSpec_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::provides(input)) in_provides = Traits::provides(input);
    typename decltype((*output)->provides)::BaseType::BufferWriter
        provides_writer;
    const mojo::internal::ContainerValidateParams provides_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::InterfaceSetDataView>>(
        in_provides, buffer, &provides_writer, &provides_validate_params,
        context);
    (*output)->provides.Set(
        provides_writer.is_null() ? nullptr : provides_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->provides.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null provides in InterfaceProviderSpec struct");
    decltype(Traits::requires(input)) in_requires = Traits::requires(input);
    typename decltype((*output)->requires)::BaseType::BufferWriter
        requires_writer;
    const mojo::internal::ContainerValidateParams requires_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::CapabilitySetDataView>>(
        in_requires, buffer, &requires_writer, &requires_validate_params,
        context);
    (*output)->requires.Set(
        requires_writer.is_null() ? nullptr : requires_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->requires.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null requires in InterfaceProviderSpec struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::InterfaceProviderSpec_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::InterfaceProviderSpecDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void InterfaceSetDataView::GetInterfacesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void CapabilitySetDataView::GetCapabilitiesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->capabilities.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void InterfaceProviderSpecDataView::GetProvidesDataView(
    mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>* output) {
  auto pointer = data_->provides.Get();
  *output = mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>(pointer, context_);
}
inline void InterfaceProviderSpecDataView::GetRequiresDataView(
    mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>* output) {
  auto pointer = data_->requires.Get();
  *output = mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_