// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/tls_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class TLSClientSocketOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::TLSClientSocketOptionsDataView> {
  using Data = ::network::mojom::internal::TLSClientSocketOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TLSClientSocketInterfaceBase {};

using TLSClientSocketPtrDataView =
    mojo::InterfacePtrDataView<TLSClientSocketInterfaceBase>;
using TLSClientSocketRequestDataView =
    mojo::InterfaceRequestDataView<TLSClientSocketInterfaceBase>;
using TLSClientSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TLSClientSocketInterfaceBase>;
using TLSClientSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TLSClientSocketInterfaceBase>;
class TLSClientSocketOptionsDataView {
 public:
  TLSClientSocketOptionsDataView() {}

  TLSClientSocketOptionsDataView(
      internal::TLSClientSocketOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMin(UserType* output) const {
    auto data_value = data_->version_min;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  ::network::mojom::SSLVersion version_min() const {
    return static_cast<::network::mojom::SSLVersion>(data_->version_min);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadVersionMax(UserType* output) const {
    auto data_value = data_->version_max;
    return mojo::internal::Deserialize<::network::mojom::SSLVersion>(
        data_value, output);
  }

  ::network::mojom::SSLVersion version_max() const {
    return static_cast<::network::mojom::SSLVersion>(data_->version_max);
  }
  bool send_ssl_info() const {
    return data_->send_ssl_info;
  }
  bool unsafely_skip_cert_verification() const {
    return data_->unsafely_skip_cert_verification;
  }
 private:
  internal::TLSClientSocketOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::TLSClientSocketOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::TLSClientSocketOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::TLSClientSocketOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_min(input), &(*output)->version_min);
    mojo::internal::Serialize<::network::mojom::SSLVersion>(
        Traits::version_max(input), &(*output)->version_max);
    (*output)->send_ssl_info = Traits::send_ssl_info(input);
    (*output)->unsafely_skip_cert_verification = Traits::unsafely_skip_cert_verification(input);
  }

  static bool Deserialize(::network::mojom::internal::TLSClientSocketOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::TLSClientSocketOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TLS_SOCKET_MOJOM_SHARED_H_