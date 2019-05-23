// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_IP_ENDPOINT_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_IP_ENDPOINT_MOJOM_H_

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
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom.h"
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
#include "net/base/ip_endpoint.h"




namespace network {
namespace mojom {








class  IPEndPoint {
 public:
  using DataView = IPEndPointDataView;
  using Data_ = internal::IPEndPoint_Data;

  template <typename... Args>
  static IPEndPointPtr New(Args&&... args) {
    return IPEndPointPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IPEndPointPtr From(const U& u) {
    return mojo::TypeConverter<IPEndPointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IPEndPoint>::Convert(*this);
  }


  IPEndPoint();

  IPEndPoint(
      const net::IPAddress& address,
      uint16_t port);

  ~IPEndPoint();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IPEndPointPtr>
  IPEndPointPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IPEndPoint>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IPEndPoint::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IPEndPoint::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IPEndPoint_UnserializedMessageContext<
            UserType, IPEndPoint::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IPEndPoint::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IPEndPoint::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IPEndPoint_UnserializedMessageContext<
            UserType, IPEndPoint::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IPEndPoint::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  net::IPAddress address;
  
  uint16_t port;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
IPEndPointPtr IPEndPoint::Clone() const {
  return New(
      mojo::Clone(address),
      mojo::Clone(port)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IPEndPoint>::value>::type*>
bool IPEndPoint::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address, other_struct.address))
    return false;
  if (!mojo::Equals(this->port, other_struct.port))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::IPEndPoint::DataView,
                                         ::network::mojom::IPEndPointPtr> {
  static bool IsNull(const ::network::mojom::IPEndPointPtr& input) { return !input; }
  static void SetToNull(::network::mojom::IPEndPointPtr* output) { output->reset(); }

  static const decltype(::network::mojom::IPEndPoint::address)& address(
      const ::network::mojom::IPEndPointPtr& input) {
    return input->address;
  }

  static decltype(::network::mojom::IPEndPoint::port) port(
      const ::network::mojom::IPEndPointPtr& input) {
    return input->port;
  }

  static bool Read(::network::mojom::IPEndPoint::DataView input, ::network::mojom::IPEndPointPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_IP_ENDPOINT_MOJOM_H_