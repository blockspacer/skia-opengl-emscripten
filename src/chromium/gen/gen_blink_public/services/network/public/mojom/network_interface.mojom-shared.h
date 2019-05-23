// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/network_interface.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class NetworkInterfaceDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::NetworkInterfaceDataView> {
  using Data = ::network::mojom::internal::NetworkInterface_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
class NetworkInterfaceDataView {
 public:
  NetworkInterfaceDataView() {}

  NetworkInterfaceDataView(
      internal::NetworkInterface_Data* data,
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
  inline void GetFriendlyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFriendlyName(UserType* output) {
    auto* pointer = data_->friendly_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t interface_index() const {
    return data_->interface_index;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::ConnectionType>(
        data_value, output);
  }

  ::network::mojom::ConnectionType type() const {
    return static_cast<::network::mojom::ConnectionType>(data_->type);
  }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, context_);
  }
  uint32_t prefix_length() const {
    return data_->prefix_length;
  }
  int32_t ip_address_attributes() const {
    return data_->ip_address_attributes;
  }
 private:
  internal::NetworkInterface_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::NetworkInterfaceDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::NetworkInterfaceDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::NetworkInterface_Data::BufferWriter* output,
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
        "null name in NetworkInterface struct");
    decltype(Traits::friendly_name(input)) in_friendly_name = Traits::friendly_name(input);
    typename decltype((*output)->friendly_name)::BaseType::BufferWriter
        friendly_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_friendly_name, buffer, &friendly_name_writer, context);
    (*output)->friendly_name.Set(
        friendly_name_writer.is_null() ? nullptr : friendly_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->friendly_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null friendly_name in NetworkInterface struct");
    (*output)->interface_index = Traits::interface_index(input);
    mojo::internal::Serialize<::network::mojom::ConnectionType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::address(input)) in_address = Traits::address(input);
    typename decltype((*output)->address)::BaseType::BufferWriter
        address_writer;
    mojo::internal::Serialize<::network::mojom::IPAddressDataView>(
        in_address, buffer, &address_writer, context);
    (*output)->address.Set(
        address_writer.is_null() ? nullptr : address_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in NetworkInterface struct");
    (*output)->prefix_length = Traits::prefix_length(input);
    (*output)->ip_address_attributes = Traits::ip_address_attributes(input);
  }

  static bool Deserialize(::network::mojom::internal::NetworkInterface_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::NetworkInterfaceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void NetworkInterfaceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkInterfaceDataView::GetFriendlyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->friendly_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void NetworkInterfaceDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_SHARED_H_