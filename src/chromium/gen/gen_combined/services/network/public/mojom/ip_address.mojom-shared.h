// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_IP_ADDRESS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_IP_ADDRESS_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/ip_address.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class IPAddressDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::IPAddressDataView> {
  using Data = ::network::mojom::internal::IPAddress_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
class IPAddressDataView {
 public:
  IPAddressDataView() {}

  IPAddressDataView(
      internal::IPAddress_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressBytesDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddressBytes(UserType* output) {
    auto* pointer = data_->address_bytes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::IPAddress_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::IPAddressDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::IPAddressDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::IPAddress_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::address_bytes(input)) in_address_bytes = Traits::address_bytes(input);
    typename decltype((*output)->address_bytes)::BaseType::BufferWriter
        address_bytes_writer;
    const mojo::internal::ContainerValidateParams address_bytes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_address_bytes, buffer, &address_bytes_writer, &address_bytes_validate_params,
        context);
    (*output)->address_bytes.Set(
        address_bytes_writer.is_null() ? nullptr : address_bytes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->address_bytes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address_bytes in IPAddress struct");
  }

  static bool Deserialize(::network::mojom::internal::IPAddress_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::IPAddressDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void IPAddressDataView::GetAddressBytesDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->address_bytes.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_IP_ADDRESS_MOJOM_SHARED_H_