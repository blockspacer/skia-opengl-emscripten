// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/address_list.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class AddressListDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::AddressListDataView> {
  using Data = ::network::mojom::internal::AddressList_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
class AddressListDataView {
 public:
  AddressListDataView() {}

  AddressListDataView(
      internal::AddressList_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressesDataView(
      mojo::ArrayDataView<::network::mojom::IPEndPointDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddresses(UserType* output) {
    auto* pointer = data_->addresses.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::IPEndPointDataView>>(
        pointer, output, context_);
  }
  inline void GetCanonicalNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCanonicalName(UserType* output) {
    auto* pointer = data_->canonical_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AddressList_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::AddressListDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::AddressListDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::AddressList_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::addresses(input)) in_addresses = Traits::addresses(input);
    typename decltype((*output)->addresses)::BaseType::BufferWriter
        addresses_writer;
    const mojo::internal::ContainerValidateParams addresses_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::IPEndPointDataView>>(
        in_addresses, buffer, &addresses_writer, &addresses_validate_params,
        context);
    (*output)->addresses.Set(
        addresses_writer.is_null() ? nullptr : addresses_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->addresses.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null addresses in AddressList struct");
    decltype(Traits::canonical_name(input)) in_canonical_name = Traits::canonical_name(input);
    typename decltype((*output)->canonical_name)::BaseType::BufferWriter
        canonical_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_canonical_name, buffer, &canonical_name_writer, context);
    (*output)->canonical_name.Set(
        canonical_name_writer.is_null() ? nullptr : canonical_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->canonical_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null canonical_name in AddressList struct");
  }

  static bool Deserialize(::network::mojom::internal::AddressList_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::AddressListDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void AddressListDataView::GetAddressesDataView(
    mojo::ArrayDataView<::network::mojom::IPEndPointDataView>* output) {
  auto pointer = data_->addresses.Get();
  *output = mojo::ArrayDataView<::network::mojom::IPEndPointDataView>(pointer, context_);
}
inline void AddressListDataView::GetCanonicalNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->canonical_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_SHARED_H_