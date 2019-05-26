// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/fetch_api.mojom-shared.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "third_party/blink/public/mojom/referrer.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FetchAPIRequestHeadersDataView;

class FetchAPIRequestDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FetchAPIRequestHeadersDataView> {
  using Data = ::blink::mojom::internal::FetchAPIRequestHeaders_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::FetchAPIRequestDataView> {
  using Data = ::blink::mojom::internal::FetchAPIRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class RequestContextType : int32_t {
  
  UNSPECIFIED,
  
  AUDIO,
  
  BEACON,
  
  CSP_REPORT,
  
  DOWNLOAD,
  
  EMBED,
  
  EVENT_SOURCE,
  
  FAVICON,
  
  FETCH,
  
  FONT,
  
  FORM,
  
  FRAME,
  
  HYPERLINK,
  
  IFRAME,
  
  IMAGE,
  
  IMAGE_SET,
  
  IMPORT,
  
  INTERNAL,
  
  LOCATION,
  
  MANIFEST,
  
  OBJECT,
  
  PING,
  
  PLUGIN,
  
  PREFETCH,
  
  SCRIPT,
  
  SERVICE_WORKER,
  
  SHARED_WORKER,
  
  SUBRESOURCE,
  
  STYLE,
  
  TRACK,
  
  VIDEO,
  
  WORKER,
  
  XML_HTTP_REQUEST,
  
  XSLT,
  kMinValue = 0,
  kMaxValue = 33,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, RequestContextType value);
inline bool IsKnownEnumValue(RequestContextType value) {
  return internal::RequestContextType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FetchCacheMode : int32_t {
  
  kDefault,
  
  kNoStore,
  
  kBypassCache,
  
  kValidateCache,
  
  kForceCache,
  
  kOnlyIfCached,
  
  kUnspecifiedOnlyIfCachedStrict,
  
  kUnspecifiedForceCacheMiss,
  kMinValue = 0,
  kMaxValue = 7,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FetchCacheMode value);
inline bool IsKnownEnumValue(FetchCacheMode value) {
  return internal::FetchCacheMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FetchImportanceMode : int32_t {
  
  kImportanceLow,
  
  kImportanceAuto,
  
  kImportanceHigh,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FetchImportanceMode value);
inline bool IsKnownEnumValue(FetchImportanceMode value) {
  return internal::FetchImportanceMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class FetchAPIRequestHeadersDataView {
 public:
  FetchAPIRequestHeadersDataView() {}

  FetchAPIRequestHeadersDataView(
      internal::FetchAPIRequestHeaders_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHeadersDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FetchAPIRequestHeaders_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FetchAPIRequestDataView {
 public:
  FetchAPIRequestDataView() {}

  FetchAPIRequestDataView(
      internal::FetchAPIRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRequestMode>(
        data_value, output);
  }

  ::network::mojom::FetchRequestMode mode() const {
    return static_cast<::network::mojom::FetchRequestMode>(data_->mode);
  }
  bool is_main_resource_load() const {
    return data_->is_main_resource_load;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestContextType(UserType* output) const {
    auto data_value = data_->request_context_type;
    return mojo::internal::Deserialize<::blink::mojom::RequestContextType>(
        data_value, output);
  }

  RequestContextType request_context_type() const {
    return static_cast<RequestContextType>(data_->request_context_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameType(UserType* output) const {
    auto data_value = data_->frame_type;
    return mojo::internal::Deserialize<::network::mojom::RequestContextFrameType>(
        data_value, output);
  }

  ::network::mojom::RequestContextFrameType frame_type() const {
    return static_cast<::network::mojom::RequestContextFrameType>(data_->frame_type);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      FetchAPIRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestHeadersDataView>(
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
  inline void GetBodyDataView(
      ::network::mojom::URLRequestBodyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBody(UserType* output) {
    auto* pointer = data_->body.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestBodyDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::blink::mojom::ReferrerDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::blink::mojom::ReferrerDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCredentialsMode(UserType* output) const {
    auto data_value = data_->credentials_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchCredentialsMode>(
        data_value, output);
  }

  ::network::mojom::FetchCredentialsMode credentials_mode() const {
    return static_cast<::network::mojom::FetchCredentialsMode>(data_->credentials_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCacheMode(UserType* output) const {
    auto data_value = data_->cache_mode;
    return mojo::internal::Deserialize<::blink::mojom::FetchCacheMode>(
        data_value, output);
  }

  FetchCacheMode cache_mode() const {
    return static_cast<FetchCacheMode>(data_->cache_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRedirectMode(UserType* output) const {
    auto data_value = data_->redirect_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRedirectMode>(
        data_value, output);
  }

  ::network::mojom::FetchRedirectMode redirect_mode() const {
    return static_cast<::network::mojom::FetchRedirectMode>(data_->redirect_mode);
  }
  inline void GetIntegrityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadIntegrity(UserType* output) {
    auto* pointer = data_->integrity.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  ::network::mojom::RequestPriority priority() const {
    return static_cast<::network::mojom::RequestPriority>(data_->priority);
  }
  inline void GetFetchWindowIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchWindowId(UserType* output) {
    auto* pointer = data_->fetch_window_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  bool keepalive() const {
    return data_->keepalive;
  }
  bool is_reload() const {
    return data_->is_reload;
  }
  bool is_history_navigation() const {
    return data_->is_history_navigation;
  }
 private:
  internal::FetchAPIRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::RequestContextType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::RequestContextType> {};

template <>
struct hash<::blink::mojom::FetchCacheMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FetchCacheMode> {};

template <>
struct hash<::blink::mojom::FetchImportanceMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FetchImportanceMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::RequestContextType, ::blink::mojom::RequestContextType> {
  static ::blink::mojom::RequestContextType ToMojom(::blink::mojom::RequestContextType input) { return input; }
  static bool FromMojom(::blink::mojom::RequestContextType input, ::blink::mojom::RequestContextType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::RequestContextType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::RequestContextType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::RequestContextType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FetchCacheMode, ::blink::mojom::FetchCacheMode> {
  static ::blink::mojom::FetchCacheMode ToMojom(::blink::mojom::FetchCacheMode input) { return input; }
  static bool FromMojom(::blink::mojom::FetchCacheMode input, ::blink::mojom::FetchCacheMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchCacheMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FetchCacheMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FetchCacheMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FetchImportanceMode, ::blink::mojom::FetchImportanceMode> {
  static ::blink::mojom::FetchImportanceMode ToMojom(::blink::mojom::FetchImportanceMode input) { return input; }
  static bool FromMojom(::blink::mojom::FetchImportanceMode input, ::blink::mojom::FetchImportanceMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchImportanceMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FetchImportanceMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FetchImportanceMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchAPIRequestHeadersDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FetchAPIRequestHeadersDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FetchAPIRequestHeaders_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null headers in FetchAPIRequestHeaders struct");
  }

  static bool Deserialize(::blink::mojom::internal::FetchAPIRequestHeaders_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FetchAPIRequestHeadersDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchAPIRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FetchAPIRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FetchAPIRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::FetchRequestMode>(
        Traits::mode(input), &(*output)->mode);
    (*output)->is_main_resource_load = Traits::is_main_resource_load(input);
    mojo::internal::Serialize<::blink::mojom::RequestContextType>(
        Traits::request_context_type(input), &(*output)->request_context_type);
    mojo::internal::Serialize<::network::mojom::RequestContextFrameType>(
        Traits::frame_type(input), &(*output)->frame_type);
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
        "null url in FetchAPIRequest struct");
    decltype(Traits::method(input)) in_method = Traits::method(input);
    typename decltype((*output)->method)::BaseType::BufferWriter
        method_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method, buffer, &method_writer, context);
    (*output)->method.Set(
        method_writer.is_null() ? nullptr : method_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->method.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in FetchAPIRequest struct");
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIRequestHeadersDataView>(
        in_headers, buffer, &headers_writer, context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in FetchAPIRequest struct");
    decltype(Traits::blob(input)) in_blob = Traits::blob(input);
    typename decltype((*output)->blob)::BaseType::BufferWriter
        blob_writer;
    mojo::internal::Serialize<::blink::mojom::SerializedBlobDataView>(
        in_blob, buffer, &blob_writer, context);
    (*output)->blob.Set(
        blob_writer.is_null() ? nullptr : blob_writer.data());
    decltype(Traits::body(input)) in_body = Traits::body(input);
    typename decltype((*output)->body)::BaseType::BufferWriter
        body_writer;
    mojo::internal::Serialize<::network::mojom::URLRequestBodyDataView>(
        in_body, buffer, &body_writer, context);
    (*output)->body.Set(
        body_writer.is_null() ? nullptr : body_writer.data());
    decltype(Traits::referrer(input)) in_referrer = Traits::referrer(input);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::blink::mojom::ReferrerDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    mojo::internal::Serialize<::network::mojom::FetchCredentialsMode>(
        Traits::credentials_mode(input), &(*output)->credentials_mode);
    mojo::internal::Serialize<::blink::mojom::FetchCacheMode>(
        Traits::cache_mode(input), &(*output)->cache_mode);
    mojo::internal::Serialize<::network::mojom::FetchRedirectMode>(
        Traits::redirect_mode(input), &(*output)->redirect_mode);
    decltype(Traits::integrity(input)) in_integrity = Traits::integrity(input);
    typename decltype((*output)->integrity)::BaseType::BufferWriter
        integrity_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_integrity, buffer, &integrity_writer, context);
    (*output)->integrity.Set(
        integrity_writer.is_null() ? nullptr : integrity_writer.data());
    mojo::internal::Serialize<::network::mojom::RequestPriority>(
        Traits::priority(input), &(*output)->priority);
    decltype(Traits::fetch_window_id(input)) in_fetch_window_id = Traits::fetch_window_id(input);
    typename decltype((*output)->fetch_window_id)::BaseType::BufferWriter
        fetch_window_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_fetch_window_id, buffer, &fetch_window_id_writer, context);
    (*output)->fetch_window_id.Set(
        fetch_window_id_writer.is_null() ? nullptr : fetch_window_id_writer.data());
    (*output)->keepalive = Traits::keepalive(input);
    (*output)->is_reload = Traits::is_reload(input);
    (*output)->is_history_navigation = Traits::is_history_navigation(input);
  }

  static bool Deserialize(::blink::mojom::internal::FetchAPIRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FetchAPIRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FetchAPIRequestHeadersDataView::GetHeadersDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}


inline void FetchAPIRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetHeadersDataView(
    FetchAPIRequestHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = FetchAPIRequestHeadersDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetBodyDataView(
    ::network::mojom::URLRequestBodyDataView* output) {
  auto pointer = data_->body.Get();
  *output = ::network::mojom::URLRequestBodyDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetReferrerDataView(
    ::blink::mojom::ReferrerDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::blink::mojom::ReferrerDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetIntegrityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->integrity.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FetchAPIRequestDataView::GetFetchWindowIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->fetch_window_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_SHARED_H_