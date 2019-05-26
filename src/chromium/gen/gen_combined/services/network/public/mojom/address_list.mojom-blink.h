// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/address_list.mojom-shared.h"
#include "services/network/public/mojom/address_list.mojom-blink-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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




namespace network {
namespace mojom {
namespace blink {








class  AddressList {
 public:
  using DataView = AddressListDataView;
  using Data_ = internal::AddressList_Data;

  template <typename... Args>
  static AddressListPtr New(Args&&... args) {
    return AddressListPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AddressListPtr From(const U& u) {
    return mojo::TypeConverter<AddressListPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AddressList>::Convert(*this);
  }


  AddressList();

  AddressList(
      WTF::Vector<::network::mojom::blink::IPEndPointPtr> addresses,
      const WTF::String& canonical_name);

  ~AddressList();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AddressListPtr>
  AddressListPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AddressList>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AddressList::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AddressList::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AddressList_UnserializedMessageContext<
            UserType, AddressList::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AddressList::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AddressList::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AddressList_UnserializedMessageContext<
            UserType, AddressList::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AddressList::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::network::mojom::blink::IPEndPointPtr> addresses;
  
  WTF::String canonical_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AddressList);
};

template <typename StructPtrType>
AddressListPtr AddressList::Clone() const {
  return New(
      mojo::Clone(addresses),
      mojo::Clone(canonical_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AddressList>::value>::type*>
bool AddressList::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->addresses, other_struct.addresses))
    return false;
  if (!mojo::Equals(this->canonical_name, other_struct.canonical_name))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::blink::AddressList::DataView,
                                         ::network::mojom::blink::AddressListPtr> {
  static bool IsNull(const ::network::mojom::blink::AddressListPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::AddressListPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::AddressList::addresses)& addresses(
      const ::network::mojom::blink::AddressListPtr& input) {
    return input->addresses;
  }

  static const decltype(::network::mojom::blink::AddressList::canonical_name)& canonical_name(
      const ::network::mojom::blink::AddressListPtr& input) {
    return input->canonical_name;
  }

  static bool Read(::network::mojom::blink::AddressList::DataView input, ::network::mojom::blink::AddressListPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ADDRESS_LIST_MOJOM_BLINK_H_