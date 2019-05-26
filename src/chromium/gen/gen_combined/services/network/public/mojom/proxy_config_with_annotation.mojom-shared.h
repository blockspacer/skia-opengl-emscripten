// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/proxy_config_with_annotation.mojom-shared-internal.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/proxy_config.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class ProxyConfigWithAnnotationDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::ProxyConfigWithAnnotationDataView> {
  using Data = ::network::mojom::internal::ProxyConfigWithAnnotation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ProxyConfigClientInterfaceBase {};

using ProxyConfigClientPtrDataView =
    mojo::InterfacePtrDataView<ProxyConfigClientInterfaceBase>;
using ProxyConfigClientRequestDataView =
    mojo::InterfaceRequestDataView<ProxyConfigClientInterfaceBase>;
using ProxyConfigClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyConfigClientInterfaceBase>;
using ProxyConfigClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyConfigClientInterfaceBase>;
class ProxyConfigPollerClientInterfaceBase {};

using ProxyConfigPollerClientPtrDataView =
    mojo::InterfacePtrDataView<ProxyConfigPollerClientInterfaceBase>;
using ProxyConfigPollerClientRequestDataView =
    mojo::InterfaceRequestDataView<ProxyConfigPollerClientInterfaceBase>;
using ProxyConfigPollerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyConfigPollerClientInterfaceBase>;
using ProxyConfigPollerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyConfigPollerClientInterfaceBase>;
class ProxyErrorClientInterfaceBase {};

using ProxyErrorClientPtrDataView =
    mojo::InterfacePtrDataView<ProxyErrorClientInterfaceBase>;
using ProxyErrorClientRequestDataView =
    mojo::InterfaceRequestDataView<ProxyErrorClientInterfaceBase>;
using ProxyErrorClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyErrorClientInterfaceBase>;
using ProxyErrorClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyErrorClientInterfaceBase>;
class ProxyConfigWithAnnotationDataView {
 public:
  ProxyConfigWithAnnotationDataView() {}

  ProxyConfigWithAnnotationDataView(
      internal::ProxyConfigWithAnnotation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      ::network::mojom::ProxyConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyConfigDataView>(
        pointer, output, context_);
  }
  inline void GetTrafficAnnotationDataView(
      ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTrafficAnnotation(UserType* output) {
    auto* pointer = data_->traffic_annotation.Get();
    return mojo::internal::Deserialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyConfigWithAnnotation_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyConfigWithAnnotationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyConfigWithAnnotationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyConfigWithAnnotation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<::network::mojom::ProxyConfigDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in ProxyConfigWithAnnotation struct");
    decltype(Traits::traffic_annotation(input)) in_traffic_annotation = Traits::traffic_annotation(input);
    typename decltype((*output)->traffic_annotation)::BaseType::BufferWriter
        traffic_annotation_writer;
    mojo::internal::Serialize<::network::mojom::MutableNetworkTrafficAnnotationTagDataView>(
        in_traffic_annotation, buffer, &traffic_annotation_writer, context);
    (*output)->traffic_annotation.Set(
        traffic_annotation_writer.is_null() ? nullptr : traffic_annotation_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->traffic_annotation.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null traffic_annotation in ProxyConfigWithAnnotation struct");
  }

  static bool Deserialize(::network::mojom::internal::ProxyConfigWithAnnotation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyConfigWithAnnotationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void ProxyConfigWithAnnotationDataView::GetValueDataView(
    ::network::mojom::ProxyConfigDataView* output) {
  auto pointer = data_->value.Get();
  *output = ::network::mojom::ProxyConfigDataView(pointer, context_);
}
inline void ProxyConfigWithAnnotationDataView::GetTrafficAnnotationDataView(
    ::network::mojom::MutableNetworkTrafficAnnotationTagDataView* output) {
  auto pointer = data_->traffic_annotation.Get();
  *output = ::network::mojom::MutableNetworkTrafficAnnotationTagDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_SHARED_H_