// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/proxy_resolving_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-shared.h"
#include "services/network/public/mojom/tcp_socket.mojom-shared.h"
#include "services/network/public/mojom/tls_socket.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class ProxyResolvingSocketOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::ProxyResolvingSocketOptionsDataView> {
  using Data = ::network::mojom::internal::ProxyResolvingSocketOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ProxyResolvingSocketInterfaceBase {};

using ProxyResolvingSocketPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolvingSocketInterfaceBase>;
using ProxyResolvingSocketRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolvingSocketInterfaceBase>;
using ProxyResolvingSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolvingSocketInterfaceBase>;
using ProxyResolvingSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolvingSocketInterfaceBase>;
class ProxyResolvingSocketFactoryInterfaceBase {};

using ProxyResolvingSocketFactoryPtrDataView =
    mojo::InterfacePtrDataView<ProxyResolvingSocketFactoryInterfaceBase>;
using ProxyResolvingSocketFactoryRequestDataView =
    mojo::InterfaceRequestDataView<ProxyResolvingSocketFactoryInterfaceBase>;
using ProxyResolvingSocketFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProxyResolvingSocketFactoryInterfaceBase>;
using ProxyResolvingSocketFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProxyResolvingSocketFactoryInterfaceBase>;
class ProxyResolvingSocketOptionsDataView {
 public:
  ProxyResolvingSocketOptionsDataView() {}

  ProxyResolvingSocketOptionsDataView(
      internal::ProxyResolvingSocketOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool use_tls() const {
    return data_->use_tls;
  }
  bool fake_tls_handshake() const {
    return data_->fake_tls_handshake;
  }
 private:
  internal::ProxyResolvingSocketOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::ProxyResolvingSocketOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::ProxyResolvingSocketOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::ProxyResolvingSocketOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->use_tls = Traits::use_tls(input);
    (*output)->fake_tls_handshake = Traits::fake_tls_handshake(input);
  }

  static bool Deserialize(::network::mojom::internal::ProxyResolvingSocketOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::ProxyResolvingSocketOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_SHARED_H_