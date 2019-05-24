// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-blink-forward.h"

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










class BLINK_PLATFORM_EXPORT HttpVersion {
 public:
  using DataView = HttpVersionDataView;
  using Data_ = internal::HttpVersion_Data;

  template <typename... Args>
  static HttpVersionPtr New(Args&&... args) {
    return HttpVersionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpVersionPtr From(const U& u) {
    return mojo::TypeConverter<HttpVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpVersion>::Convert(*this);
  }


  HttpVersion();

  HttpVersion(
      uint16_t major_value,
      uint16_t minor_value);

  ~HttpVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpVersionPtr>
  HttpVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpVersion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpVersion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpVersion_UnserializedMessageContext<
            UserType, HttpVersion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpVersion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return HttpVersion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpVersion_UnserializedMessageContext<
            UserType, HttpVersion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpVersion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint16_t major_value;
  
  uint16_t minor_value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

















template <typename StructPtrType>
HttpVersionPtr HttpVersion::Clone() const {
  return New(
      mojo::Clone(major_value),
      mojo::Clone(minor_value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpVersion>::value>::type*>
bool HttpVersion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->major_value, other_struct.major_value))
    return false;
  if (!mojo::Equals(this->minor_value, other_struct.minor_value))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::HttpVersion::DataView,
                                         ::network::mojom::blink::HttpVersionPtr> {
  static bool IsNull(const ::network::mojom::blink::HttpVersionPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::HttpVersionPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::HttpVersion::major_value) major_value(
      const ::network::mojom::blink::HttpVersionPtr& input) {
    return input->major_value;
  }

  static decltype(::network::mojom::blink::HttpVersion::minor_value) minor_value(
      const ::network::mojom::blink::HttpVersionPtr& input) {
    return input->minor_value;
  }

  static bool Read(::network::mojom::blink::HttpVersion::DataView input, ::network::mojom::blink::HttpVersionPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_PARAM_MOJOM_BLINK_H_