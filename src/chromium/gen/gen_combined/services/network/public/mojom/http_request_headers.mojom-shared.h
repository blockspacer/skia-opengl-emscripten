// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
class HttpRequestHeaderKeyValuePairDataView;

class HttpRequestHeadersDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::HttpRequestHeaderKeyValuePairDataView> {
  using Data = ::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::HttpRequestHeadersDataView> {
  using Data = ::network::mojom::internal::HttpRequestHeaders_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {
class HttpRequestHeaderKeyValuePairDataView {
 public:
  HttpRequestHeaderKeyValuePairDataView() {}

  HttpRequestHeaderKeyValuePairDataView(
      internal::HttpRequestHeaderKeyValuePair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKey(UserType* output) {
    auto* pointer = data_->key.Get();
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
  internal::HttpRequestHeaderKeyValuePair_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HttpRequestHeadersDataView {
 public:
  HttpRequestHeadersDataView() {}

  HttpRequestHeadersDataView(
      internal::HttpRequestHeaders_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HttpRequestHeaderKeyValuePairDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HttpRequestHeaders_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpRequestHeaderKeyValuePairDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpRequestHeaderKeyValuePairDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::key(input)) in_key = Traits::key(input);
    typename decltype((*output)->key)::BaseType::BufferWriter
        key_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_key, buffer, &key_writer, context);
    (*output)->key.Set(
        key_writer.is_null() ? nullptr : key_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->key.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null key in HttpRequestHeaderKeyValuePair struct");
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
        "null value in HttpRequestHeaderKeyValuePair struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpRequestHeaderKeyValuePair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpRequestHeaderKeyValuePairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::HttpRequestHeadersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::HttpRequestHeadersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::HttpRequestHeaders_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::HttpRequestHeaderKeyValuePairDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in HttpRequestHeaders struct");
  }

  static bool Deserialize(::network::mojom::internal::HttpRequestHeaders_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::HttpRequestHeadersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void HttpRequestHeaderKeyValuePairDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void HttpRequestHeaderKeyValuePairDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void HttpRequestHeadersDataView::GetHeadersDataView(
    mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::ArrayDataView<HttpRequestHeaderKeyValuePairDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HTTP_REQUEST_HEADERS_MOJOM_SHARED_H_