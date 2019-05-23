// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/network/public/mojom/network_interface.mojom-shared.h"
#include "services/network/public/mojom/network_interface.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "services/network/public/mojom/network_change_manager.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "net/base/network_interfaces.h"




namespace network {
namespace mojom {








class  NetworkInterface {
 public:
  using DataView = NetworkInterfaceDataView;
  using Data_ = internal::NetworkInterface_Data;

  template <typename... Args>
  static NetworkInterfacePtr New(Args&&... args) {
    return NetworkInterfacePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NetworkInterfacePtr From(const U& u) {
    return mojo::TypeConverter<NetworkInterfacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkInterface>::Convert(*this);
  }


  NetworkInterface();

  NetworkInterface(
      const std::string& name,
      const std::string& friendly_name,
      uint32_t interface_index,
      ::network::mojom::ConnectionType type,
      const net::IPAddress& address,
      uint32_t prefix_length,
      int32_t ip_address_attributes);

  ~NetworkInterface();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NetworkInterfacePtr>
  NetworkInterfacePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NetworkInterface>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NetworkInterface::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NetworkInterface::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NetworkInterface_UnserializedMessageContext<
            UserType, NetworkInterface::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NetworkInterface::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NetworkInterface::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NetworkInterface_UnserializedMessageContext<
            UserType, NetworkInterface::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NetworkInterface::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  std::string friendly_name;
  
  uint32_t interface_index;
  
  ::network::mojom::ConnectionType type;
  
  net::IPAddress address;
  
  uint32_t prefix_length;
  
  int32_t ip_address_attributes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
NetworkInterfacePtr NetworkInterface::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(friendly_name),
      mojo::Clone(interface_index),
      mojo::Clone(type),
      mojo::Clone(address),
      mojo::Clone(prefix_length),
      mojo::Clone(ip_address_attributes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NetworkInterface>::value>::type*>
bool NetworkInterface::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->friendly_name, other_struct.friendly_name))
    return false;
  if (!mojo::Equals(this->interface_index, other_struct.interface_index))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->prefix_length, other_struct.prefix_length))
    return false;
  if (!mojo::Equals(this->ip_address_attributes, other_struct.ip_address_attributes))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::NetworkInterface::DataView,
                                         ::network::mojom::NetworkInterfacePtr> {
  static bool IsNull(const ::network::mojom::NetworkInterfacePtr& input) { return !input; }
  static void SetToNull(::network::mojom::NetworkInterfacePtr* output) { output->reset(); }

  static const decltype(::network::mojom::NetworkInterface::name)& name(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::NetworkInterface::friendly_name)& friendly_name(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->friendly_name;
  }

  static decltype(::network::mojom::NetworkInterface::interface_index) interface_index(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->interface_index;
  }

  static decltype(::network::mojom::NetworkInterface::type) type(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::NetworkInterface::address)& address(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->address;
  }

  static decltype(::network::mojom::NetworkInterface::prefix_length) prefix_length(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->prefix_length;
  }

  static decltype(::network::mojom::NetworkInterface::ip_address_attributes) ip_address_attributes(
      const ::network::mojom::NetworkInterfacePtr& input) {
    return input->ip_address_attributes;
  }

  static bool Read(::network::mojom::NetworkInterface::DataView input, ::network::mojom::NetworkInterfacePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_INTERFACE_MOJOM_H_