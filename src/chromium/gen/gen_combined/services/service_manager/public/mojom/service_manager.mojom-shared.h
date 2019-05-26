// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/service_manager.mojom-shared-internal.h"
#include "services/service_manager/public/mojom/connector.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class RunningServiceInfoDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::RunningServiceInfoDataView> {
  using Data = ::service_manager::mojom::internal::RunningServiceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {


enum class InstanceState : int32_t {
  
  kCreated,
  
  kStarted,
  
  kUnreachable,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, InstanceState value);
inline bool IsKnownEnumValue(InstanceState value) {
  return internal::InstanceState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceManagerListenerInterfaceBase {};

using ServiceManagerListenerPtrDataView =
    mojo::InterfacePtrDataView<ServiceManagerListenerInterfaceBase>;
using ServiceManagerListenerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceManagerListenerInterfaceBase>;
using ServiceManagerListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceManagerListenerInterfaceBase>;
using ServiceManagerListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceManagerListenerInterfaceBase>;
class ServiceManagerInterfaceBase {};

using ServiceManagerPtrDataView =
    mojo::InterfacePtrDataView<ServiceManagerInterfaceBase>;
using ServiceManagerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceManagerInterfaceBase>;
using ServiceManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceManagerInterfaceBase>;
using ServiceManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceManagerInterfaceBase>;
class RunningServiceInfoDataView {
 public:
  RunningServiceInfoDataView() {}

  RunningServiceInfoDataView(
      internal::RunningServiceInfo_Data* data,
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
  uint32_t pid() const {
    return data_->pid;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::service_manager::mojom::InstanceState>(
        data_value, output);
  }

  InstanceState state() const {
    return static_cast<InstanceState>(data_->state);
  }
 private:
  internal::RunningServiceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

template <>
struct hash<::service_manager::mojom::InstanceState>
    : public mojo::internal::EnumHashImpl<::service_manager::mojom::InstanceState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::service_manager::mojom::InstanceState, ::service_manager::mojom::InstanceState> {
  static ::service_manager::mojom::InstanceState ToMojom(::service_manager::mojom::InstanceState input) { return input; }
  static bool FromMojom(::service_manager::mojom::InstanceState input, ::service_manager::mojom::InstanceState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::InstanceState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::service_manager::mojom::InstanceState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::service_manager::mojom::InstanceState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::RunningServiceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::RunningServiceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::RunningServiceInfo_Data::BufferWriter* output,
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
        "null identity in RunningServiceInfo struct");
    (*output)->pid = Traits::pid(input);
    mojo::internal::Serialize<::service_manager::mojom::InstanceState>(
        Traits::state(input), &(*output)->state);
  }

  static bool Deserialize(::service_manager::mojom::internal::RunningServiceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::RunningServiceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void RunningServiceInfoDataView::GetIdentityDataView(
    ::service_manager::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::service_manager::mojom::IdentityDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_MANAGER_MOJOM_SHARED_H_