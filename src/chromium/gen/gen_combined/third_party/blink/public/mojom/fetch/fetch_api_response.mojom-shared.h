// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/fetch_api.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FetchAPIResponseDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FetchAPIResponseDataView> {
  using Data = ::blink::mojom::internal::FetchAPIResponse_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class FetchAPIResponseDataView {
 public:
  FetchAPIResponseDataView() {}

  FetchAPIResponseDataView(
      internal::FetchAPIResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlListDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrlList(UserType* output) {
    auto* pointer = data_->url_list.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
  uint16_t status_code() const {
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
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseType(UserType* output) const {
    auto data_value = data_->response_type;
    return mojo::internal::Deserialize<::network::mojom::FetchResponseType>(
        data_value, output);
  }

  ::network::mojom::FetchResponseType response_type() const {
    return static_cast<::network::mojom::FetchResponseType>(data_->response_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseSource(UserType* output) const {
    auto data_value = data_->response_source;
    return mojo::internal::Deserialize<::network::mojom::FetchResponseSource>(
        data_value, output);
  }

  ::network::mojom::FetchResponseSource response_source() const {
    return static_cast<::network::mojom::FetchResponseSource>(data_->response_source);
  }
  inline void GetHeadersDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerResponseError>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerResponseError error() const {
    return static_cast<::blink::mojom::ServiceWorkerResponseError>(data_->error);
  }
  inline void GetResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseTime(UserType* output) {
    auto* pointer = data_->response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetCacheStorageCacheNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheStorageCacheName(UserType* output) {
    auto* pointer = data_->cache_storage_cache_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetCorsExposedHeaderNamesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorsExposedHeaderNames(UserType* output) {
    auto* pointer = data_->cors_exposed_header_names.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetSideDataBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSideDataBlob(UserType* output) {
    auto* pointer = data_->side_data_blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::FetchAPIResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchAPIResponseDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FetchAPIResponseDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FetchAPIResponse_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url_list(input)) in_url_list = Traits::url_list(input);
    typename decltype((*output)->url_list)::BaseType::BufferWriter
        url_list_writer;
    const mojo::internal::ContainerValidateParams url_list_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        in_url_list, buffer, &url_list_writer, &url_list_validate_params,
        context);
    (*output)->url_list.Set(
        url_list_writer.is_null() ? nullptr : url_list_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url_list.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url_list in FetchAPIResponse struct");
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
        "null status_text in FetchAPIResponse struct");
    mojo::internal::Serialize<::network::mojom::FetchResponseType>(
        Traits::response_type(input), &(*output)->response_type);
    mojo::internal::Serialize<::network::mojom::FetchResponseSource>(
        Traits::response_source(input), &(*output)->response_source);
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in FetchAPIResponse struct");
    decltype(Traits::blob(input)) in_blob = Traits::blob(input);
    typename decltype((*output)->blob)::BaseType::BufferWriter
        blob_writer;
    mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
        in_blob, buffer, &blob_writer, context);
    (*output)->blob.Set(
        blob_writer.is_null() ? nullptr : blob_writer.data());
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerResponseError>(
        Traits::error(input), &(*output)->error);
    decltype(Traits::response_time(input)) in_response_time = Traits::response_time(input);
    typename decltype((*output)->response_time)::BaseType::BufferWriter
        response_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_response_time, buffer, &response_time_writer, context);
    (*output)->response_time.Set(
        response_time_writer.is_null() ? nullptr : response_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->response_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null response_time in FetchAPIResponse struct");
    decltype(Traits::cache_storage_cache_name(input)) in_cache_storage_cache_name = Traits::cache_storage_cache_name(input);
    typename decltype((*output)->cache_storage_cache_name)::BaseType::BufferWriter
        cache_storage_cache_name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_cache_storage_cache_name, buffer, &cache_storage_cache_name_writer, context);
    (*output)->cache_storage_cache_name.Set(
        cache_storage_cache_name_writer.is_null() ? nullptr : cache_storage_cache_name_writer.data());
    decltype(Traits::cors_exposed_header_names(input)) in_cors_exposed_header_names = Traits::cors_exposed_header_names(input);
    typename decltype((*output)->cors_exposed_header_names)::BaseType::BufferWriter
        cors_exposed_header_names_writer;
    const mojo::internal::ContainerValidateParams cors_exposed_header_names_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_cors_exposed_header_names, buffer, &cors_exposed_header_names_writer, &cors_exposed_header_names_validate_params,
        context);
    (*output)->cors_exposed_header_names.Set(
        cors_exposed_header_names_writer.is_null() ? nullptr : cors_exposed_header_names_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cors_exposed_header_names.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cors_exposed_header_names in FetchAPIResponse struct");
    decltype(Traits::side_data_blob(input)) in_side_data_blob = Traits::side_data_blob(input);
    typename decltype((*output)->side_data_blob)::BaseType::BufferWriter
        side_data_blob_writer;
    mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
        in_side_data_blob, buffer, &side_data_blob_writer, context);
    (*output)->side_data_blob.Set(
        side_data_blob_writer.is_null() ? nullptr : side_data_blob_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::FetchAPIResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FetchAPIResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FetchAPIResponseDataView::GetUrlListDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->url_list.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}
inline void FetchAPIResponseDataView::GetStatusTextDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->status_text.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIResponseDataView::GetHeadersDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}
inline void FetchAPIResponseDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}
inline void FetchAPIResponseDataView::GetResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void FetchAPIResponseDataView::GetCacheStorageCacheNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cache_storage_cache_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIResponseDataView::GetCorsExposedHeaderNamesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->cors_exposed_header_names.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void FetchAPIResponseDataView::GetSideDataBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->side_data_blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_SHARED_H_
