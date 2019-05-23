// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/udp_socket.mojom-shared-internal.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared.h"
#include "services/network/public/mojom/ip_address.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class UDPSocketOptionsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::UDPSocketOptionsDataView> {
  using Data = ::network::mojom::internal::UDPSocketOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UDPSocketInterfaceBase {};

using UDPSocketPtrDataView =
    mojo::InterfacePtrDataView<UDPSocketInterfaceBase>;
using UDPSocketRequestDataView =
    mojo::InterfaceRequestDataView<UDPSocketInterfaceBase>;
using UDPSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UDPSocketInterfaceBase>;
using UDPSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UDPSocketInterfaceBase>;
class UDPSocketReceiverInterfaceBase {};

using UDPSocketReceiverPtrDataView =
    mojo::InterfacePtrDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverRequestDataView =
    mojo::InterfaceRequestDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UDPSocketReceiverInterfaceBase>;
using UDPSocketReceiverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UDPSocketReceiverInterfaceBase>;
class UDPSocketOptionsDataView {
 public:
  UDPSocketOptionsDataView() {}

  UDPSocketOptionsDataView(
      internal::UDPSocketOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allow_address_reuse() const {
    return data_->allow_address_reuse;
  }
  bool allow_broadcast() const {
    return data_->allow_broadcast;
  }
  bool allow_address_sharing_for_multicast() const {
    return data_->allow_address_sharing_for_multicast;
  }
  uint32_t multicast_interface() const {
    return data_->multicast_interface;
  }
  uint32_t multicast_time_to_live() const {
    return data_->multicast_time_to_live;
  }
  bool multicast_loopback_mode() const {
    return data_->multicast_loopback_mode;
  }
  int32_t send_buffer_size() const {
    return data_->send_buffer_size;
  }
  int32_t receive_buffer_size() const {
    return data_->receive_buffer_size;
  }
 private:
  internal::UDPSocketOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::UDPSocketOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::UDPSocketOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::UDPSocketOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->allow_address_reuse = Traits::allow_address_reuse(input);
    (*output)->allow_broadcast = Traits::allow_broadcast(input);
    (*output)->allow_address_sharing_for_multicast = Traits::allow_address_sharing_for_multicast(input);
    (*output)->multicast_interface = Traits::multicast_interface(input);
    (*output)->multicast_time_to_live = Traits::multicast_time_to_live(input);
    (*output)->multicast_loopback_mode = Traits::multicast_loopback_mode(input);
    (*output)->send_buffer_size = Traits::send_buffer_size(input);
    (*output)->receive_buffer_size = Traits::receive_buffer_size(input);
  }

  static bool Deserialize(::network::mojom::internal::UDPSocketOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::UDPSocketOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_UDP_SOCKET_MOJOM_SHARED_H_