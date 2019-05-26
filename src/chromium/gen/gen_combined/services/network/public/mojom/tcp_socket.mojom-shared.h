// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/tcp_socket.mojom-shared-internal.h"
#include "services/network/public/mojom/address_list.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/ssl_config.mojom-shared.h"
#include "services/network/public/mojom/tls_socket.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class TCPConnectedSocketOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::TCPConnectedSocketOptionsDataView> {
  using Data = ::network::mojom::internal::TCPConnectedSocketOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TCPBoundSocketInterfaceBase {};

using TCPBoundSocketPtrDataView =
    mojo::InterfacePtrDataView<TCPBoundSocketInterfaceBase>;
using TCPBoundSocketRequestDataView =
    mojo::InterfaceRequestDataView<TCPBoundSocketInterfaceBase>;
using TCPBoundSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TCPBoundSocketInterfaceBase>;
using TCPBoundSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TCPBoundSocketInterfaceBase>;
class TCPConnectedSocketInterfaceBase {};

using TCPConnectedSocketPtrDataView =
    mojo::InterfacePtrDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketRequestDataView =
    mojo::InterfaceRequestDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TCPConnectedSocketInterfaceBase>;
using TCPConnectedSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TCPConnectedSocketInterfaceBase>;
class SocketObserverInterfaceBase {};

using SocketObserverPtrDataView =
    mojo::InterfacePtrDataView<SocketObserverInterfaceBase>;
using SocketObserverRequestDataView =
    mojo::InterfaceRequestDataView<SocketObserverInterfaceBase>;
using SocketObserverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SocketObserverInterfaceBase>;
using SocketObserverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SocketObserverInterfaceBase>;
class TCPServerSocketInterfaceBase {};

using TCPServerSocketPtrDataView =
    mojo::InterfacePtrDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketRequestDataView =
    mojo::InterfaceRequestDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TCPServerSocketInterfaceBase>;
using TCPServerSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TCPServerSocketInterfaceBase>;
class TCPConnectedSocketOptionsDataView {
 public:
  TCPConnectedSocketOptionsDataView() {}

  TCPConnectedSocketOptionsDataView(
      internal::TCPConnectedSocketOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t send_buffer_size() const {
    return data_->send_buffer_size;
  }
  int32_t receive_buffer_size() const {
    return data_->receive_buffer_size;
  }
  bool no_delay() const {
    return data_->no_delay;
  }
 private:
  internal::TCPConnectedSocketOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::TCPConnectedSocketOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::TCPConnectedSocketOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::TCPConnectedSocketOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->send_buffer_size = Traits::send_buffer_size(input);
    (*output)->receive_buffer_size = Traits::receive_buffer_size(input);
    (*output)->no_delay = Traits::no_delay(input);
  }

  static bool Deserialize(::network::mojom::internal::TCPConnectedSocketOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::TCPConnectedSocketOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TCP_SOCKET_MOJOM_SHARED_H_