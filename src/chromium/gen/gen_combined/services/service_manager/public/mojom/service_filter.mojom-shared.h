// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_SHARED_H_

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
#include "services/service_manager/public/mojom/service_filter.mojom-shared-internal.h"
#include "mojo/public/mojom/base/token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class ServiceFilterDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::ServiceFilterDataView> {
  using Data = ::service_manager::mojom::internal::ServiceFilter_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {
class ServiceFilterDataView {
 public:
  ServiceFilterDataView() {}

  ServiceFilterDataView(
      internal::ServiceFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceName(UserType* output) {
    auto* pointer = data_->service_name.Get();
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
  internal::ServiceFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::ServiceFilterDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::ServiceFilterDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::service_manager::mojom::internal::ServiceFilter_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::service_name(input)) in_service_name = Traits::service_name(input);
    typename decltype((*output)->service_name)::BaseType::BufferWriter
        service_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_service_name, buffer, &service_name_writer, context);
    (*output)->service_name.Set(
        service_name_writer.is_null() ? nullptr : service_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->service_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null service_name in ServiceFilter struct");
    decltype(Traits::instance_group(input)) in_instance_group = Traits::instance_group(input);
    typename decltype((*output)->instance_group)::BaseType::BufferWriter
        instance_group_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_instance_group, buffer, &instance_group_writer, context);
    (*output)->instance_group.Set(
        instance_group_writer.is_null() ? nullptr : instance_group_writer.data());
    decltype(Traits::instance_id(input)) in_instance_id = Traits::instance_id(input);
    typename decltype((*output)->instance_id)::BaseType::BufferWriter
        instance_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_instance_id, buffer, &instance_id_writer, context);
    (*output)->instance_id.Set(
        instance_id_writer.is_null() ? nullptr : instance_id_writer.data());
    decltype(Traits::globally_unique_id(input)) in_globally_unique_id = Traits::globally_unique_id(input);
    typename decltype((*output)->globally_unique_id)::BaseType::BufferWriter
        globally_unique_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TokenDataView>(
        in_globally_unique_id, buffer, &globally_unique_id_writer, context);
    (*output)->globally_unique_id.Set(
        globally_unique_id_writer.is_null() ? nullptr : globally_unique_id_writer.data());
  }

  static bool Deserialize(::service_manager::mojom::internal::ServiceFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::ServiceFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void ServiceFilterDataView::GetServiceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceFilterDataView::GetInstanceGroupDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->instance_group.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}
inline void ServiceFilterDataView::GetInstanceIdDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}
inline void ServiceFilterDataView::GetGloballyUniqueIdDataView(
    ::mojo_base::mojom::TokenDataView* output) {
  auto pointer = data_->globally_unique_id.Get();
  *output = ::mojo_base::mojom::TokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_SERVICE_FILTER_MOJOM_SHARED_H_