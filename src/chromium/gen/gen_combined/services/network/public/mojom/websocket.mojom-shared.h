// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/websocket.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class HttpHeaderDataView;

class WebSocketHandshakeRequestDataView;

class WebSocketHandshakeResponseDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::HttpHeaderDataView> {
  using Data = ::network::mojom::internal::HttpHeader_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::WebSocketHandshakeRequestDataView> {
  using Data = ::network::mojom::internal::WebSocketHandshakeRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::WebSocketHandshakeResponseDataView> {
  using Data = ::network::mojom::internal::WebSocketHandshakeResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class WebSocketMessageType : int32_t {
  
  CONTINUATION,
  
  TEXT,
  
  BINARY,
  
  LAST = WebSocketMessageType::BINARY,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, WebSocketMessageType value);
inline bool IsKnownEnumValue(WebSocketMessageType value) {
  return internal::WebSocketMessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class AuthenticationHandlerInterfaceBase {};

using AuthenticationHandlerPtrDataView =
    mojo::InterfacePtrDataView<AuthenticationHandlerInterfaceBase>;
using AuthenticationHandlerRequestDataView =
    mojo::InterfaceRequestDataView<AuthenticationHandlerInterfaceBase>;
using AuthenticationHandlerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AuthenticationHandlerInterfaceBase>;
using AuthenticationHandlerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AuthenticationHandlerInterfaceBase>;
class WebSocketClientInterfaceBase {};

using WebSocketClientPtrDataView =
    mojo::InterfacePtrDataView<WebSocketClientInterfaceBase>;
using WebSocketClientRequestDataView =
    mojo::InterfaceRequestDataView<WebSocketClientInterfaceBase>;
using WebSocketClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebSocketClientInterfaceBase>;
using WebSocketClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebSocketClientInterfaceBase>;
class WebSocketInterfaceBase {};

using WebSocketPtrDataView =
    mojo::InterfacePtrDataView<WebSocketInterfaceBase>;
using WebSocketRequestDataView =
    mojo::InterfaceRequestDataView<WebSocketInterfaceBase>;
using WebSocketAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<WebSocketInterfaceBase>;
using WebSocketAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<WebSocketInterfaceBase>;
class HttpHeaderDataView {
 public:
  HttpHeaderDataView() {}

  HttpHeaderDataView(
      internal::HttpHeader_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::HttpHeader_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketHandshakeRequestDataView {
 public:
  WebSocketHandshakeRequestDataView() {}

  WebSocketHandshakeRequestDataView(
      internal::WebSocketHandshakeRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpHeaderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
        pointer, output, context_);
  }
  inline void GetHeadersTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeadersText(UserType* output) {
    auto* pointer = data_->headers_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketHandshakeRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebSocketHandshakeResponseDataView {
 public:
  WebSocketHandshakeResponseDataView() {}

  WebSocketHandshakeResponseDataView(
      internal::WebSocketHandshakeResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetHttpVersionDataView(
      ::network::mojom::HttpVersionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHttpVersion(UserType* output) {
    auto* pointer = data_->http_version.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpVersionDataView>(
        pointer, output, context_);
  }
  int32_t status_code() const {
    return data_->status_code;
  }
  inline void GetStatusTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatusText(UserType* output) {
    auto* pointer = data_->status_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRemoteEndpointDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRemoteEndpoint(UserType* output) {
    auto* pointer = data_->remote_endpoint.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpHeaderDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
        pointer, output, context_);
  }
  inline void GetHeadersTextDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeadersText(UserType* output) {
    auto* pointer = data_->headers_text.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebSocketHandshakeResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::WebSocketMessageType>
    : public mojo::internal::EnumHashImpl<::network::mojom::WebSocketMessageType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::WebSocketMessageType, ::network::mojom::WebSocketMessageType> {
  static ::network::mojom::WebSocketMessageType ToMojom(::network::mojom::WebSocketMessageType input) { return input; }
  static bool FromMojom(::network::mojom::WebSocketMessageType input, ::network::mojom::WebSocketMessageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::WebSocketMessageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::WebSocketMessageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::WebSocketMessageType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpHeaderDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpHeaderDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::HttpHeader_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in HttpHeader struct");
    decltype(Traits::value(input)) in_value = Traits::value(input);
    typename decltype((*output)->value)::BaseType::BufferWriter
        value_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_value, buffer, &value_writer, context);
    (*output)->value.Set(
        value_writer.is_null() ? nullptr : value_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->value.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null value in HttpHeader struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpHeader_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpHeaderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::WebSocketHandshakeRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::WebSocketHandshakeRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::WebSocketHandshakeRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in WebSocketHandshakeRequest struct");
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in WebSocketHandshakeRequest struct");
    decltype(Traits::headers_text(input)) in_headers_text = Traits::headers_text(input);
    typename decltype((*output)->headers_text)::BaseType::BufferWriter
        headers_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_headers_text, buffer, &headers_text_writer, context);
    (*output)->headers_text.Set(
        headers_text_writer.is_null() ? nullptr : headers_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers_text in WebSocketHandshakeRequest struct");
  }

  static bool Deserialize(::network::mojom::internal::WebSocketHandshakeRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::WebSocketHandshakeRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::WebSocketHandshakeResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::WebSocketHandshakeResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::WebSocketHandshakeResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in WebSocketHandshakeResponse struct");
    decltype(Traits::http_version(input)) in_http_version = Traits::http_version(input);
    typename decltype((*output)->http_version)::BaseType::BufferWriter
        http_version_writer;
    mojo::internal::Serialize<::network::mojom::HttpVersionDataView>(
        in_http_version, buffer, &http_version_writer, context);
    (*output)->http_version.Set(
        http_version_writer.is_null() ? nullptr : http_version_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->http_version.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null http_version in WebSocketHandshakeResponse struct");
    (*output)->status_code = Traits::status_code(input);
    decltype(Traits::status_text(input)) in_status_text = Traits::status_text(input);
    typename decltype((*output)->status_text)::BaseType::BufferWriter
        status_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_status_text, buffer, &status_text_writer, context);
    (*output)->status_text.Set(
        status_text_writer.is_null() ? nullptr : status_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->status_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null status_text in WebSocketHandshakeResponse struct");
    decltype(Traits::remote_endpoint(input)) in_remote_endpoint = Traits::remote_endpoint(input);
    typename decltype((*output)->remote_endpoint)::BaseType::BufferWriter
        remote_endpoint_writer;
    mojo::internal::Serialize<::network::mojom::IPEndPointDataView>(
        in_remote_endpoint, buffer, &remote_endpoint_writer, context);
    (*output)->remote_endpoint.Set(
        remote_endpoint_writer.is_null() ? nullptr : remote_endpoint_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->remote_endpoint.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null remote_endpoint in WebSocketHandshakeResponse struct");
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HttpHeaderDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in WebSocketHandshakeResponse struct");
    decltype(Traits::headers_text(input)) in_headers_text = Traits::headers_text(input);
    typename decltype((*output)->headers_text)::BaseType::BufferWriter
        headers_text_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_headers_text, buffer, &headers_text_writer, context);
    (*output)->headers_text.Set(
        headers_text_writer.is_null() ? nullptr : headers_text_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers_text.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers_text in WebSocketHandshakeResponse struct");
  }

  static bool Deserialize(::network::mojom::internal::WebSocketHandshakeResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::WebSocketHandshakeResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void HttpHeaderDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HttpHeaderDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebSocketHandshakeRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocketHandshakeRequestDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpHeaderDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpHeaderDataView>(pointer, context_);
}
inline void WebSocketHandshakeRequestDataView::GetHeadersTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebSocketHandshakeResponseDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetHttpVersionDataView(
    ::network::mojom::HttpVersionDataView* output) {
  auto pointer = data_->http_version.Get();
  *output = ::network::mojom::HttpVersionDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetStatusTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->status_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetRemoteEndpointDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->remote_endpoint.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpHeaderDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpHeaderDataView>(pointer, context_);
}
inline void WebSocketHandshakeResponseDataView::GetHeadersTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->headers_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEBSOCKET_MOJOM_SHARED_H_