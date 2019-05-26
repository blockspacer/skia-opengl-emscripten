// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CT_LOG_INFO_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CT_LOG_INFO_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/ct_log_info.mojom-shared.h"
#include "services/network/public/mojom/ct_log_info.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT CTLogInfo {
 public:
  using DataView = CTLogInfoDataView;
  using Data_ = internal::CTLogInfo_Data;

  template <typename... Args>
  static CTLogInfoPtr New(Args&&... args) {
    return CTLogInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CTLogInfoPtr From(const U& u) {
    return mojo::TypeConverter<CTLogInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CTLogInfo>::Convert(*this);
  }


  CTLogInfo();

  CTLogInfo(
      const WTF::String& public_key,
      const WTF::String& name,
      const WTF::String& dns_api_endpoint);

  ~CTLogInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CTLogInfoPtr>
  CTLogInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CTLogInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CTLogInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CTLogInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CTLogInfo_UnserializedMessageContext<
            UserType, CTLogInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CTLogInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CTLogInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CTLogInfo_UnserializedMessageContext<
            UserType, CTLogInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CTLogInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String public_key;
  
  WTF::String name;
  
  WTF::String dns_api_endpoint;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
CTLogInfoPtr CTLogInfo::Clone() const {
  return New(
      mojo::Clone(public_key),
      mojo::Clone(name),
      mojo::Clone(dns_api_endpoint)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CTLogInfo>::value>::type*>
bool CTLogInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->public_key, other_struct.public_key))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->dns_api_endpoint, other_struct.dns_api_endpoint))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CTLogInfo::DataView,
                                         ::network::mojom::blink::CTLogInfoPtr> {
  static bool IsNull(const ::network::mojom::blink::CTLogInfoPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CTLogInfoPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::CTLogInfo::public_key)& public_key(
      const ::network::mojom::blink::CTLogInfoPtr& input) {
    return input->public_key;
  }

  static const decltype(::network::mojom::blink::CTLogInfo::name)& name(
      const ::network::mojom::blink::CTLogInfoPtr& input) {
    return input->name;
  }

  static const decltype(::network::mojom::blink::CTLogInfo::dns_api_endpoint)& dns_api_endpoint(
      const ::network::mojom::blink::CTLogInfoPtr& input) {
    return input->dns_api_endpoint;
  }

  static bool Read(::network::mojom::blink::CTLogInfo::DataView input, ::network::mojom::blink::CTLogInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CT_LOG_INFO_MOJOM_BLINK_H_