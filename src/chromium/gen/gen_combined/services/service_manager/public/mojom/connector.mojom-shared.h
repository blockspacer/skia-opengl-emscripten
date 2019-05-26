// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/connector.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/token.mojom-shared.h"
#include "services/service_manager/public/mojom/constants.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "services/service_manager/public/mojom/service_filter.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class IdentityDataView;

class ServiceInfoDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::IdentityDataView> {
  using Data = ::service_manager::mojom::internal::Identity_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::service_manager::mojom::ServiceInfoDataView> {
  using Data = ::service_manager::mojom::internal::ServiceInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {


enum class ConnectResult : int32_t {
  
  SUCCEEDED,
  
  INVALID_ARGUMENT,
  
  ACCESS_DENIED,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, ConnectResult value);
inline bool IsKnownEnumValue(ConnectResult value) {
  return internal::ConnectResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BindInterfacePriority : int32_t {
  
  kImportant,
  
  kBestEffort,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(SERVICE_MANAGER_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, BindInterfacePriority value);
inline bool IsKnownEnumValue(BindInterfacePriority value) {
  return internal::BindInterfacePriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ProcessMetadataInterfaceBase {};

using ProcessMetadataPtrDataView =
    mojo::InterfacePtrDataView<ProcessMetadataInterfaceBase>;
using ProcessMetadataRequestDataView =
    mojo::InterfaceRequestDataView<ProcessMetadataInterfaceBase>;
using ProcessMetadataAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProcessMetadataInterfaceBase>;
using ProcessMetadataAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProcessMetadataInterfaceBase>;
class ConnectorInterfaceBase {};

using ConnectorPtrDataView =
    mojo::InterfacePtrDataView<ConnectorInterfaceBase>;
using ConnectorRequestDataView =
    mojo::InterfaceRequestDataView<ConnectorInterfaceBase>;
using ConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ConnectorInterfaceBase>;
using ConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ConnectorInterfaceBase>;
class IdentityDataView {
 public:
  IdentityDataView() {}

  IdentityDataView(
      internal::Identity_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInstanceGroupDataView(
      ::mojo_base::mojom::TokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceGroup(UserType* output) {
    auto* pointer = data_->instance_group.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TokenDataView>(
        pointer, output, context_);
  }
  inline void GetInstanceIdDataView(
      ::mojo_base::mojom::TokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstanceId(UserType* output) {
    auto* pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TokenDataView>(
        pointer, output, context_);
  }
  inline void GetGloballyUniqueIdDataView(
      ::mojo_base::mojom::TokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGloballyUniqueId(UserType* output) {
    auto* pointer = data_->globally_unique_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::Identity_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceInfoDataView {
 public:
  ServiceInfoDataView() {}

  ServiceInfoDataView(
      internal::ServiceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSandboxTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSandboxType(UserType* output) {
    auto* pointer = data_->sandbox_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

template <>
struct hash<::service_manager::mojom::ConnectResult>
    : public mojo::internal::EnumHashImpl<::service_manager::mojom::ConnectResult> {};

template <>
struct hash<::service_manager::mojom::BindInterfacePriority>
    : public mojo::internal::EnumHashImpl<::service_manager::mojom::BindInterfacePriority> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::service_manager::mojom::ConnectResult, ::service_manager::mojom::ConnectResult> {
  static ::service_manager::mojom::ConnectResult ToMojom(::service_manager::mojom::ConnectResult input) { return input; }
  static bool FromMojom(::service_manager::mojom::ConnectResult input, ::service_manager::mojom::ConnectResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::ConnectResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::service_manager::mojom::ConnectResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::service_manager::mojom::ConnectResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::service_manager::mojom::BindInterfacePriority, ::service_manager::mojom::BindInterfacePriority> {
  static ::service_manager::mojom::BindInterfacePriority ToMojom(::service_manager::mojom::BindInterfacePriority input) { return input; }
  static bool FromMojom(::service_manager::mojom::BindInterfacePriority input, ::service_manager::mojom::BindInterfacePriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::BindInterfacePriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::service_manager::mojom::BindInterfacePriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::service_manager::mojom::BindInterfacePriority>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::IdentityDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::IdentityDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::Identity_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in Identity struct");
    decltype(Traits::instance_group(input)) in_instance_group = Traits::instance_group(input);
    typename decltype((*output)->instance_group)::BaseType::BufferWriter
        instance_group_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_instance_group, buffer, &instance_group_writer, context);
    (*output)->instance_group.Set(
        instance_group_writer.is_null() ? nullptr : instance_group_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_group.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_group in Identity struct");
    decltype(Traits::instance_id(input)) in_instance_id = Traits::instance_id(input);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->instance_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null instance_id in Identity struct");
    decltype(Traits::globally_unique_id(input)) in_globally_unique_id = Traits::globally_unique_id(input);
    typename decltype((*output)->globally_unique_id)::BaseType::BufferWriter
        globally_unique_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_globally_unique_id, buffer, &globally_unique_id_writer, context);
    (*output)->globally_unique_id.Set(
        globally_unique_id_writer.is_null() ? nullptr : globally_unique_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->globally_unique_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null globally_unique_id in Identity struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::Identity_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::IdentityDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::ServiceInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::ServiceInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::ServiceInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::sandbox_type(input)) in_sandbox_type = Traits::sandbox_type(input);
    typename decltype((*output)->sandbox_type)::BaseType::BufferWriter
        sandbox_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_sandbox_type, buffer, &sandbox_type_writer, context);
    (*output)->sandbox_type.Set(
        sandbox_type_writer.is_null() ? nullptr : sandbox_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->sandbox_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sandbox_type in ServiceInfo struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::ServiceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::ServiceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void IdentityDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void IdentityDataView::GetInstanceGroupDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->instance_group.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}
inline void IdentityDataView::GetInstanceIdDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}
inline void IdentityDataView::GetGloballyUniqueIdDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->globally_unique_id.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}


inline void ServiceInfoDataView::GetSandboxTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sandbox_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_SHARED_H_