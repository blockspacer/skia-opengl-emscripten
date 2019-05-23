// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_H_

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
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-forward.h"
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
#include "net/http/http_request_headers.h"




namespace network {
namespace mojom {





class  HttpRequestHeaderKeyValuePair {
 public:
  using DataView = HttpRequestHeaderKeyValuePairDataView;
  using Data_ = internal::HttpRequestHeaderKeyValuePair_Data;

  template <typename... Args>
  static HttpRequestHeaderKeyValuePairPtr New(Args&&... args) {
    return HttpRequestHeaderKeyValuePairPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpRequestHeaderKeyValuePairPtr From(const U& u) {
    return mojo::TypeConverter<HttpRequestHeaderKeyValuePairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpRequestHeaderKeyValuePair>::Convert(*this);
  }


  HttpRequestHeaderKeyValuePair();

  HttpRequestHeaderKeyValuePair(
      const std::string& key,
      const std::string& value);

  ~HttpRequestHeaderKeyValuePair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpRequestHeaderKeyValuePairPtr>
  HttpRequestHeaderKeyValuePairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpRequestHeaderKeyValuePair>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpRequestHeaderKeyValuePair::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpRequestHeaderKeyValuePair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpRequestHeaderKeyValuePair_UnserializedMessageContext<
            UserType, HttpRequestHeaderKeyValuePair::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpRequestHeaderKeyValuePair::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HttpRequestHeaderKeyValuePair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpRequestHeaderKeyValuePair_UnserializedMessageContext<
            UserType, HttpRequestHeaderKeyValuePair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpRequestHeaderKeyValuePair::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string key;
  
  std::string value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class  HttpRequestHeaders {
 public:
  using DataView = HttpRequestHeadersDataView;
  using Data_ = internal::HttpRequestHeaders_Data;

  template <typename... Args>
  static HttpRequestHeadersPtr New(Args&&... args) {
    return HttpRequestHeadersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static HttpRequestHeadersPtr From(const U& u) {
    return mojo::TypeConverter<HttpRequestHeadersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HttpRequestHeaders>::Convert(*this);
  }


  HttpRequestHeaders();

  explicit HttpRequestHeaders(
      std::vector<HttpRequestHeaderKeyValuePairPtr> headers);

  ~HttpRequestHeaders();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = HttpRequestHeadersPtr>
  HttpRequestHeadersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, HttpRequestHeaders>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        HttpRequestHeaders::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        HttpRequestHeaders::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::HttpRequestHeaders_UnserializedMessageContext<
            UserType, HttpRequestHeaders::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<HttpRequestHeaders::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return HttpRequestHeaders::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::HttpRequestHeaders_UnserializedMessageContext<
            UserType, HttpRequestHeaders::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<HttpRequestHeaders::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<HttpRequestHeaderKeyValuePairPtr> headers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(HttpRequestHeaders);
};

template <typename StructPtrType>
HttpRequestHeaderKeyValuePairPtr HttpRequestHeaderKeyValuePair::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpRequestHeaderKeyValuePair>::value>::type*>
bool HttpRequestHeaderKeyValuePair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
HttpRequestHeadersPtr HttpRequestHeaders::Clone() const {
  return New(
      mojo::Clone(headers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, HttpRequestHeaders>::value>::type*>
bool HttpRequestHeaders::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::HttpRequestHeaderKeyValuePair::DataView,
                                         ::network::mojom::HttpRequestHeaderKeyValuePairPtr> {
  static bool IsNull(const ::network::mojom::HttpRequestHeaderKeyValuePairPtr& input) { return !input; }
  static void SetToNull(::network::mojom::HttpRequestHeaderKeyValuePairPtr* output) { output->reset(); }

  static const decltype(::network::mojom::HttpRequestHeaderKeyValuePair::key)& key(
      const ::network::mojom::HttpRequestHeaderKeyValuePairPtr& input) {
    return input->key;
  }

  static const decltype(::network::mojom::HttpRequestHeaderKeyValuePair::value)& value(
      const ::network::mojom::HttpRequestHeaderKeyValuePairPtr& input) {
    return input->value;
  }

  static bool Read(::network::mojom::HttpRequestHeaderKeyValuePair::DataView input, ::network::mojom::HttpRequestHeaderKeyValuePairPtr* output);
};


template <>
struct  StructTraits<::network::mojom::HttpRequestHeaders::DataView,
                                         ::network::mojom::HttpRequestHeadersPtr> {
  static bool IsNull(const ::network::mojom::HttpRequestHeadersPtr& input) { return !input; }
  static void SetToNull(::network::mojom::HttpRequestHeadersPtr* output) { output->reset(); }

  static const decltype(::network::mojom::HttpRequestHeaders::headers)& headers(
      const ::network::mojom::HttpRequestHeadersPtr& input) {
    return input->headers;
  }

  static bool Read(::network::mojom::HttpRequestHeaders::DataView input, ::network::mojom::HttpRequestHeadersPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_H_