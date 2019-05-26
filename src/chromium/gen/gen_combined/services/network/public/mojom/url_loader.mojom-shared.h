// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_

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
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#include "services/network/public/mojom/cors.mojom-shared.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/fetch_api.mojom-shared.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared.h"
#include "services/network/public/mojom/network_param.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace network {
namespace mojom {
using URLResponseHeadDataView = mojo::native::NativeStructDataView;

using URLRequestRedirectInfoDataView = mojo::native::NativeStructDataView;

using CorsErrorStatusDataView = mojo::native::NativeStructDataView;

using URLLoaderCompletionStatusDataView = mojo::native::NativeStructDataView;

class URLRequestDataView;

class URLRequestBodyDataView;

class DataElementDataView;

class URLLoaderClientEndpointsDataView;



}  // namespace mojom
}  // namespace network

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::network::mojom::URLRequestDataView> {
  using Data = ::network::mojom::internal::URLRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::URLRequestBodyDataView> {
  using Data = ::network::mojom::internal::URLRequestBody_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::DataElementDataView> {
  using Data = ::network::mojom::internal::DataElement_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::network::mojom::URLLoaderClientEndpointsDataView> {
  using Data = ::network::mojom::internal::URLLoaderClientEndpoints_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace network {
namespace mojom {


enum class RequestPriority : int32_t {
  
  kThrottled = 0,
  
  kIdle,
  
  kLowest,
  
  kLow,
  
  kMedium,
  
  kHighest,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, RequestPriority value);
inline bool IsKnownEnumValue(RequestPriority value) {
  return internal::RequestPriority_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class URLRequestReferrerPolicy : int32_t {
  
  kClearReferrerOnTransitionFromSecureToInsecure,
  
  kReduceReferrerGranularityOnTransitionCrossOrigin,
  
  kOriginOnlyOnTransitionCrossOrigin,
  
  kNeverClearReferrer,
  
  kOrigin,
  
  kClearReferrerOnTransitionCrossOrigin,
  
  kOriginClearOnTransitionFromSecureToInsecure,
  
  kNoReferrer,
  kMinValue = 0,
  kMaxValue = 7,
};

 std::ostream& operator<<(std::ostream& os, URLRequestReferrerPolicy value);
inline bool IsKnownEnumValue(URLRequestReferrerPolicy value) {
  return internal::URLRequestReferrerPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DataElementType : int32_t {
  
  kUnknown = -1,
  
  kDataPipe,
  
  kChunkedDataPipe,
  
  kRawFile,
  
  kBlob,
  
  kFile,
  
  kBytes,
  kMinValue = -1,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, DataElementType value);
inline bool IsKnownEnumValue(DataElementType value) {
  return internal::DataElementType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class URLLoaderInterfaceBase {};

using URLLoaderPtrDataView =
    mojo::InterfacePtrDataView<URLLoaderInterfaceBase>;
using URLLoaderRequestDataView =
    mojo::InterfaceRequestDataView<URLLoaderInterfaceBase>;
using URLLoaderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<URLLoaderInterfaceBase>;
using URLLoaderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<URLLoaderInterfaceBase>;
class URLLoaderClientInterfaceBase {};

using URLLoaderClientPtrDataView =
    mojo::InterfacePtrDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientRequestDataView =
    mojo::InterfaceRequestDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<URLLoaderClientInterfaceBase>;
using URLLoaderClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<URLLoaderClientInterfaceBase>;
class URLRequestDataView {
 public:
  URLRequestDataView() {}

  URLRequestDataView(
      internal::URLRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethod(UserType* output) {
    auto* pointer = data_->method.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetSiteForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSiteForCookies(UserType* output) {
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetTopFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTopFrameOrigin(UserType* output) {
    auto* pointer = data_->top_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  bool attach_same_site_cookies() const {
    return data_->attach_same_site_cookies;
  }
  bool update_first_party_url_on_redirect() const {
    return data_->update_first_party_url_on_redirect;
  }
  inline void GetRequestInitiatorDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestInitiator(UserType* output) {
    auto* pointer = data_->request_initiator.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetReferrerDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrer(UserType* output) {
    auto* pointer = data_->referrer.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReferrerPolicy(UserType* output) const {
    auto data_value = data_->referrer_policy;
    return mojo::internal::Deserialize<::network::mojom::URLRequestReferrerPolicy>(
        data_value, output);
  }

  URLRequestReferrerPolicy referrer_policy() const {
    return static_cast<URLRequestReferrerPolicy>(data_->referrer_policy);
  }
  bool is_prerendering() const {
    return data_->is_prerendering;
  }
  inline void GetHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetCorsExemptHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorsExemptHeaders(UserType* output) {
    auto* pointer = data_->cors_exempt_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  int32_t load_flags() const {
    return data_->load_flags;
  }
  bool allow_credentials() const {
    return data_->allow_credentials;
  }
  int32_t plugin_child_id() const {
    return data_->plugin_child_id;
  }
  int32_t resource_type() const {
    return data_->resource_type;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPriority(UserType* output) const {
    auto data_value = data_->priority;
    return mojo::internal::Deserialize<::network::mojom::RequestPriority>(
        data_value, output);
  }

  RequestPriority priority() const {
    return static_cast<RequestPriority>(data_->priority);
  }
  int32_t appcache_host_id() const {
    return data_->appcache_host_id;
  }
  bool should_reset_appcache() const {
    return data_->should_reset_appcache;
  }
  bool is_external_request() const {
    return data_->is_external_request;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCorsPreflightPolicy(UserType* output) const {
    auto data_value = data_->cors_preflight_policy;
    return mojo::internal::Deserialize<::network::mojom::CorsPreflightPolicy>(
        data_value, output);
  }

  ::network::mojom::CorsPreflightPolicy cors_preflight_policy() const {
    return static_cast<::network::mojom::CorsPreflightPolicy>(data_->cors_preflight_policy);
  }
  bool originated_from_service_worker() const {
    return data_->originated_from_service_worker;
  }
  bool skip_service_worker() const {
    return data_->skip_service_worker;
  }
  bool corb_detachable() const {
    return data_->corb_detachable;
  }
  bool corb_excluded() const {
    return data_->corb_excluded;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchRequestMode(UserType* output) const {
    auto data_value = data_->fetch_request_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRequestMode>(
        data_value, output);
  }

  ::network::mojom::FetchRequestMode fetch_request_mode() const {
    return static_cast<::network::mojom::FetchRequestMode>(data_->fetch_request_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchCredentialsMode(UserType* output) const {
    auto data_value = data_->fetch_credentials_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchCredentialsMode>(
        data_value, output);
  }

  ::network::mojom::FetchCredentialsMode fetch_credentials_mode() const {
    return static_cast<::network::mojom::FetchCredentialsMode>(data_->fetch_credentials_mode);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchRedirectMode(UserType* output) const {
    auto data_value = data_->fetch_redirect_mode;
    return mojo::internal::Deserialize<::network::mojom::FetchRedirectMode>(
        data_value, output);
  }

  ::network::mojom::FetchRedirectMode fetch_redirect_mode() const {
    return static_cast<::network::mojom::FetchRedirectMode>(data_->fetch_redirect_mode);
  }
  inline void GetFetchIntegrityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchIntegrity(UserType* output) {
    auto* pointer = data_->fetch_integrity.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  int32_t fetch_request_context_type() const {
    return data_->fetch_request_context_type;
  }
  inline void GetRequestBodyDataView(
      URLRequestBodyDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestBody(UserType* output) {
    auto* pointer = data_->request_body.Get();
    return mojo::internal::Deserialize<::network::mojom::URLRequestBodyDataView>(
        pointer, output, context_);
  }
  bool keepalive() const {
    return data_->keepalive;
  }
  bool has_user_gesture() const {
    return data_->has_user_gesture;
  }
  bool enable_load_timing() const {
    return data_->enable_load_timing;
  }
  bool enable_upload_progress() const {
    return data_->enable_upload_progress;
  }
  bool do_not_prompt_for_login() const {
    return data_->do_not_prompt_for_login;
  }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  bool is_main_frame() const {
    return data_->is_main_frame;
  }
  int32_t transition_type() const {
    return data_->transition_type;
  }
  bool allow_download() const {
    return data_->allow_download;
  }
  bool report_raw_headers() const {
    return data_->report_raw_headers;
  }
  int32_t previews_state() const {
    return data_->previews_state;
  }
  bool initiated_in_secure_context() const {
    return data_->initiated_in_secure_context;
  }
  bool upgrade_if_insecure() const {
    return data_->upgrade_if_insecure;
  }
  bool is_revalidating() const {
    return data_->is_revalidating;
  }
  inline void GetThrottlingProfileIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadThrottlingProfileId(UserType* output) {
    auto* pointer = data_->throttling_profile_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetCustomProxyPreCacheHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCustomProxyPreCacheHeaders(UserType* output) {
    auto* pointer = data_->custom_proxy_pre_cache_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetCustomProxyPostCacheHeadersDataView(
      ::network::mojom::HttpRequestHeadersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCustomProxyPostCacheHeaders(UserType* output) {
    auto* pointer = data_->custom_proxy_post_cache_headers.Get();
    return mojo::internal::Deserialize<::network::mojom::HttpRequestHeadersDataView>(
        pointer, output, context_);
  }
  inline void GetFetchWindowIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchWindowId(UserType* output) {
    auto* pointer = data_->fetch_window_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetDevtoolsRequestIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevtoolsRequestId(UserType* output) {
    auto* pointer = data_->devtools_request_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::URLRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLRequestBodyDataView {
 public:
  URLRequestBodyDataView() {}

  URLRequestBodyDataView(
      internal::URLRequestBody_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetElementsDataView(
      mojo::ArrayDataView<DataElementDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadElements(UserType* output) {
    auto* pointer = data_->elements.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::DataElementDataView>>(
        pointer, output, context_);
  }
  uint64_t identifier() const {
    return data_->identifier;
  }
  bool contains_sensitive_info() const {
    return data_->contains_sensitive_info;
  }
 private:
  internal::URLRequestBody_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataElementDataView {
 public:
  DataElementDataView() {}

  DataElementDataView(
      internal::DataElement_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::network::mojom::DataElementType>(
        data_value, output);
  }

  DataElementType type() const {
    return static_cast<DataElementType>(data_->type);
  }
  inline void GetBufDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuf(UserType* output) {
    auto* pointer = data_->buf.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  inline void GetBlobUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlobUuid(UserType* output) {
    auto* pointer = data_->blob_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeDataPipeGetter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DataPipeGetterPtrDataView>(
            &data_->data_pipe_getter, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeChunkedDataPipeGetter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ChunkedDataPipeGetterPtrDataView>(
            &data_->chunked_data_pipe_getter, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetExpectedModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedModificationTime(UserType* output) {
    auto* pointer = data_->expected_modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::DataElement_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class URLLoaderClientEndpointsDataView {
 public:
  URLLoaderClientEndpointsDataView() {}

  URLLoaderClientEndpointsDataView(
      internal::URLLoaderClientEndpoints_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderPtrDataView>(
            &data_->url_loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeUrlLoaderClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientRequestDataView>(
            &data_->url_loader_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::URLLoaderClientEndpoints_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace network

namespace std {

template <>
struct hash<::network::mojom::RequestPriority>
    : public mojo::internal::EnumHashImpl<::network::mojom::RequestPriority> {};

template <>
struct hash<::network::mojom::URLRequestReferrerPolicy>
    : public mojo::internal::EnumHashImpl<::network::mojom::URLRequestReferrerPolicy> {};

template <>
struct hash<::network::mojom::DataElementType>
    : public mojo::internal::EnumHashImpl<::network::mojom::DataElementType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::network::mojom::RequestPriority, ::network::mojom::RequestPriority> {
  static ::network::mojom::RequestPriority ToMojom(::network::mojom::RequestPriority input) { return input; }
  static bool FromMojom(::network::mojom::RequestPriority input, ::network::mojom::RequestPriority* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::RequestPriority, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::RequestPriority, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::RequestPriority>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::URLRequestReferrerPolicy, ::network::mojom::URLRequestReferrerPolicy> {
  static ::network::mojom::URLRequestReferrerPolicy ToMojom(::network::mojom::URLRequestReferrerPolicy input) { return input; }
  static bool FromMojom(::network::mojom::URLRequestReferrerPolicy input, ::network::mojom::URLRequestReferrerPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLRequestReferrerPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::URLRequestReferrerPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::URLRequestReferrerPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::network::mojom::DataElementType, ::network::mojom::DataElementType> {
  static ::network::mojom::DataElementType ToMojom(::network::mojom::DataElementType input) { return input; }
  static bool FromMojom(::network::mojom::DataElementType input, ::network::mojom::DataElementType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DataElementType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::network::mojom::DataElementType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::network::mojom::DataElementType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null method in URLRequest struct");
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
        "null url in URLRequest struct");
    decltype(Traits::site_for_cookies(input)) in_site_for_cookies = Traits::site_for_cookies(input);
    typename decltype((*output)->site_for_cookies)::BaseType::BufferWriter
        site_for_cookies_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_site_for_cookies, buffer, &site_for_cookies_writer, context);
    (*output)->site_for_cookies.Set(
        site_for_cookies_writer.is_null() ? nullptr : site_for_cookies_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->site_for_cookies.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null site_for_cookies in URLRequest struct");
    decltype(Traits::top_frame_origin(input)) in_top_frame_origin = Traits::top_frame_origin(input);
    typename decltype((*output)->top_frame_origin)::BaseType::BufferWriter
        top_frame_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_top_frame_origin, buffer, &top_frame_origin_writer, context);
    (*output)->top_frame_origin.Set(
        top_frame_origin_writer.is_null() ? nullptr : top_frame_origin_writer.data());
    (*output)->attach_same_site_cookies = Traits::attach_same_site_cookies(input);
    (*output)->update_first_party_url_on_redirect = Traits::update_first_party_url_on_redirect(input);
    decltype(Traits::request_initiator(input)) in_request_initiator = Traits::request_initiator(input);
    typename decltype((*output)->request_initiator)::BaseType::BufferWriter
        request_initiator_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_request_initiator, buffer, &request_initiator_writer, context);
    (*output)->request_initiator.Set(
        request_initiator_writer.is_null() ? nullptr : request_initiator_writer.data());
    decltype(Traits::referrer(input)) in_referrer = Traits::referrer(input);
    typename decltype((*output)->referrer)::BaseType::BufferWriter
        referrer_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_referrer, buffer, &referrer_writer, context);
    (*output)->referrer.Set(
        referrer_writer.is_null() ? nullptr : referrer_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->referrer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null referrer in URLRequest struct");
    mojo::internal::Serialize<::network::mojom::URLRequestReferrerPolicy>(
        Traits::referrer_policy(input), &(*output)->referrer_policy);
    (*output)->is_prerendering = Traits::is_prerendering(input);
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_headers, buffer, &headers_writer, context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in URLRequest struct");
    decltype(Traits::cors_exempt_headers(input)) in_cors_exempt_headers = Traits::cors_exempt_headers(input);
    typename decltype((*output)->cors_exempt_headers)::BaseType::BufferWriter
        cors_exempt_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_cors_exempt_headers, buffer, &cors_exempt_headers_writer, context);
    (*output)->cors_exempt_headers.Set(
        cors_exempt_headers_writer.is_null() ? nullptr : cors_exempt_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->cors_exempt_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null cors_exempt_headers in URLRequest struct");
    (*output)->load_flags = Traits::load_flags(input);
    (*output)->allow_credentials = Traits::allow_credentials(input);
    (*output)->plugin_child_id = Traits::plugin_child_id(input);
    (*output)->resource_type = Traits::resource_type(input);
    mojo::internal::Serialize<::network::mojom::RequestPriority>(
        Traits::priority(input), &(*output)->priority);
    (*output)->appcache_host_id = Traits::appcache_host_id(input);
    (*output)->should_reset_appcache = Traits::should_reset_appcache(input);
    (*output)->is_external_request = Traits::is_external_request(input);
    mojo::internal::Serialize<::network::mojom::CorsPreflightPolicy>(
        Traits::cors_preflight_policy(input), &(*output)->cors_preflight_policy);
    (*output)->originated_from_service_worker = Traits::originated_from_service_worker(input);
    (*output)->skip_service_worker = Traits::skip_service_worker(input);
    (*output)->corb_detachable = Traits::corb_detachable(input);
    (*output)->corb_excluded = Traits::corb_excluded(input);
    mojo::internal::Serialize<::network::mojom::FetchRequestMode>(
        Traits::fetch_request_mode(input), &(*output)->fetch_request_mode);
    mojo::internal::Serialize<::network::mojom::FetchCredentialsMode>(
        Traits::fetch_credentials_mode(input), &(*output)->fetch_credentials_mode);
    mojo::internal::Serialize<::network::mojom::FetchRedirectMode>(
        Traits::fetch_redirect_mode(input), &(*output)->fetch_redirect_mode);
    decltype(Traits::fetch_integrity(input)) in_fetch_integrity = Traits::fetch_integrity(input);
    typename decltype((*output)->fetch_integrity)::BaseType::BufferWriter
        fetch_integrity_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_fetch_integrity, buffer, &fetch_integrity_writer, context);
    (*output)->fetch_integrity.Set(
        fetch_integrity_writer.is_null() ? nullptr : fetch_integrity_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->fetch_integrity.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null fetch_integrity in URLRequest struct");
    (*output)->fetch_request_context_type = Traits::fetch_request_context_type(input);
    decltype(Traits::request_body(input)) in_request_body = Traits::request_body(input);
    typename decltype((*output)->request_body)::BaseType::BufferWriter
        request_body_writer;
    mojo::internal::Serialize<::network::mojom::URLRequestBodyDataView>(
        in_request_body, buffer, &request_body_writer, context);
    (*output)->request_body.Set(
        request_body_writer.is_null() ? nullptr : request_body_writer.data());
    (*output)->keepalive = Traits::keepalive(input);
    (*output)->has_user_gesture = Traits::has_user_gesture(input);
    (*output)->enable_load_timing = Traits::enable_load_timing(input);
    (*output)->enable_upload_progress = Traits::enable_upload_progress(input);
    (*output)->do_not_prompt_for_login = Traits::do_not_prompt_for_login(input);
    (*output)->render_frame_id = Traits::render_frame_id(input);
    (*output)->is_main_frame = Traits::is_main_frame(input);
    (*output)->transition_type = Traits::transition_type(input);
    (*output)->allow_download = Traits::allow_download(input);
    (*output)->report_raw_headers = Traits::report_raw_headers(input);
    (*output)->previews_state = Traits::previews_state(input);
    (*output)->initiated_in_secure_context = Traits::initiated_in_secure_context(input);
    (*output)->upgrade_if_insecure = Traits::upgrade_if_insecure(input);
    (*output)->is_revalidating = Traits::is_revalidating(input);
    decltype(Traits::throttling_profile_id(input)) in_throttling_profile_id = Traits::throttling_profile_id(input);
    typename decltype((*output)->throttling_profile_id)::BaseType::BufferWriter
        throttling_profile_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_throttling_profile_id, buffer, &throttling_profile_id_writer, context);
    (*output)->throttling_profile_id.Set(
        throttling_profile_id_writer.is_null() ? nullptr : throttling_profile_id_writer.data());
    decltype(Traits::custom_proxy_pre_cache_headers(input)) in_custom_proxy_pre_cache_headers = Traits::custom_proxy_pre_cache_headers(input);
    typename decltype((*output)->custom_proxy_pre_cache_headers)::BaseType::BufferWriter
        custom_proxy_pre_cache_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_custom_proxy_pre_cache_headers, buffer, &custom_proxy_pre_cache_headers_writer, context);
    (*output)->custom_proxy_pre_cache_headers.Set(
        custom_proxy_pre_cache_headers_writer.is_null() ? nullptr : custom_proxy_pre_cache_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->custom_proxy_pre_cache_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null custom_proxy_pre_cache_headers in URLRequest struct");
    decltype(Traits::custom_proxy_post_cache_headers(input)) in_custom_proxy_post_cache_headers = Traits::custom_proxy_post_cache_headers(input);
    typename decltype((*output)->custom_proxy_post_cache_headers)::BaseType::BufferWriter
        custom_proxy_post_cache_headers_writer;
    mojo::internal::Serialize<::network::mojom::HttpRequestHeadersDataView>(
        in_custom_proxy_post_cache_headers, buffer, &custom_proxy_post_cache_headers_writer, context);
    (*output)->custom_proxy_post_cache_headers.Set(
        custom_proxy_post_cache_headers_writer.is_null() ? nullptr : custom_proxy_post_cache_headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->custom_proxy_post_cache_headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null custom_proxy_post_cache_headers in URLRequest struct");
    decltype(Traits::fetch_window_id(input)) in_fetch_window_id = Traits::fetch_window_id(input);
    typename decltype((*output)->fetch_window_id)::BaseType::BufferWriter
        fetch_window_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_fetch_window_id, buffer, &fetch_window_id_writer, context);
    (*output)->fetch_window_id.Set(
        fetch_window_id_writer.is_null() ? nullptr : fetch_window_id_writer.data());
    decltype(Traits::devtools_request_id(input)) in_devtools_request_id = Traits::devtools_request_id(input);
    typename decltype((*output)->devtools_request_id)::BaseType::BufferWriter
        devtools_request_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_devtools_request_id, buffer, &devtools_request_id_writer, context);
    (*output)->devtools_request_id.Set(
        devtools_request_id_writer.is_null() ? nullptr : devtools_request_id_writer.data());
  }

  static bool Deserialize(::network::mojom::internal::URLRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLRequestBodyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLRequestBodyDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLRequestBody_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::elements(input)) in_elements = Traits::elements(input);
    typename decltype((*output)->elements)::BaseType::BufferWriter
        elements_writer;
    const mojo::internal::ContainerValidateParams elements_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::DataElementDataView>>(
        in_elements, buffer, &elements_writer, &elements_validate_params,
        context);
    (*output)->elements.Set(
        elements_writer.is_null() ? nullptr : elements_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->elements.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null elements in URLRequestBody struct");
    (*output)->identifier = Traits::identifier(input);
    (*output)->contains_sensitive_info = Traits::contains_sensitive_info(input);
  }

  static bool Deserialize(::network::mojom::internal::URLRequestBody_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLRequestBodyDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::DataElementDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::DataElementDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::DataElement_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::network::mojom::DataElementType>(
        Traits::type(input), &(*output)->type);
    decltype(Traits::buf(input)) in_buf = Traits::buf(input);
    typename decltype((*output)->buf)::BaseType::BufferWriter
        buf_writer;
    const mojo::internal::ContainerValidateParams buf_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_buf, buffer, &buf_writer, &buf_validate_params,
        context);
    (*output)->buf.Set(
        buf_writer.is_null() ? nullptr : buf_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buf.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buf in DataElement struct");
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in DataElement struct");
    decltype(Traits::file(input)) in_file = Traits::file(input);
    typename decltype((*output)->file)::BaseType::BufferWriter
        file_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
        in_file, buffer, &file_writer, context);
    (*output)->file.Set(
        file_writer.is_null() ? nullptr : file_writer.data());
    decltype(Traits::blob_uuid(input)) in_blob_uuid = Traits::blob_uuid(input);
    typename decltype((*output)->blob_uuid)::BaseType::BufferWriter
        blob_uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_blob_uuid, buffer, &blob_uuid_writer, context);
    (*output)->blob_uuid.Set(
        blob_uuid_writer.is_null() ? nullptr : blob_uuid_writer.data());
    decltype(Traits::data_pipe_getter(input)) in_data_pipe_getter = Traits::data_pipe_getter(input);
    mojo::internal::Serialize<::network::mojom::DataPipeGetterPtrDataView>(
        in_data_pipe_getter, &(*output)->data_pipe_getter, context);
    decltype(Traits::chunked_data_pipe_getter(input)) in_chunked_data_pipe_getter = Traits::chunked_data_pipe_getter(input);
    mojo::internal::Serialize<::network::mojom::ChunkedDataPipeGetterPtrDataView>(
        in_chunked_data_pipe_getter, &(*output)->chunked_data_pipe_getter, context);
    (*output)->offset = Traits::offset(input);
    (*output)->length = Traits::length(input);
    decltype(Traits::expected_modification_time(input)) in_expected_modification_time = Traits::expected_modification_time(input);
    typename decltype((*output)->expected_modification_time)::BaseType::BufferWriter
        expected_modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_expected_modification_time, buffer, &expected_modification_time_writer, context);
    (*output)->expected_modification_time.Set(
        expected_modification_time_writer.is_null() ? nullptr : expected_modification_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->expected_modification_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null expected_modification_time in DataElement struct");
  }

  static bool Deserialize(::network::mojom::internal::DataElement_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::DataElementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::network::mojom::URLLoaderClientEndpointsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::network::mojom::URLLoaderClientEndpointsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::network::mojom::internal::URLLoaderClientEndpoints_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url_loader(input)) in_url_loader = Traits::url_loader(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderPtrDataView>(
        in_url_loader, &(*output)->url_loader, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader in URLLoaderClientEndpoints struct");
    decltype(Traits::url_loader_client(input)) in_url_loader_client = Traits::url_loader_client(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderClientRequestDataView>(
        in_url_loader_client, &(*output)->url_loader_client, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader_client),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader_client in URLLoaderClientEndpoints struct");
  }

  static bool Deserialize(::network::mojom::internal::URLLoaderClientEndpoints_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::network::mojom::URLLoaderClientEndpointsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace network {
namespace mojom {

inline void URLRequestDataView::GetMethodDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void URLRequestDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void URLRequestDataView::GetSiteForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void URLRequestDataView::GetTopFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->top_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void URLRequestDataView::GetRequestInitiatorDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->request_initiator.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void URLRequestDataView::GetReferrerDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->referrer.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void URLRequestDataView::GetHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void URLRequestDataView::GetCorsExemptHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->cors_exempt_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void URLRequestDataView::GetFetchIntegrityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->fetch_integrity.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void URLRequestDataView::GetRequestBodyDataView(
    URLRequestBodyDataView* output) {
  auto pointer = data_->request_body.Get();
  *output = URLRequestBodyDataView(pointer, context_);
}
inline void URLRequestDataView::GetThrottlingProfileIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->throttling_profile_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void URLRequestDataView::GetCustomProxyPreCacheHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->custom_proxy_pre_cache_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void URLRequestDataView::GetCustomProxyPostCacheHeadersDataView(
    ::network::mojom::HttpRequestHeadersDataView* output) {
  auto pointer = data_->custom_proxy_post_cache_headers.Get();
  *output = ::network::mojom::HttpRequestHeadersDataView(pointer, context_);
}
inline void URLRequestDataView::GetFetchWindowIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->fetch_window_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void URLRequestDataView::GetDevtoolsRequestIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->devtools_request_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void URLRequestBodyDataView::GetElementsDataView(
    mojo::ArrayDataView<DataElementDataView>* output) {
  auto pointer = data_->elements.Get();
  *output = mojo::ArrayDataView<DataElementDataView>(pointer, context_);
}


inline void DataElementDataView::GetBufDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buf.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void DataElementDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void DataElementDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}
inline void DataElementDataView::GetBlobUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->blob_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DataElementDataView::GetExpectedModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_SHARED_H_