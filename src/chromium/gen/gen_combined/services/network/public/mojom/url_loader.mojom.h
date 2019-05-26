// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_H_

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
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#include "services/network/public/mojom/url_loader.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/cors.mojom.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom.h"
#include "services/network/public/mojom/data_pipe_getter.mojom.h"
#include "services/network/public/mojom/fetch_api.mojom.h"
#include "services/network/public/mojom/http_request_headers.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
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
#include "base/memory/scoped_refptr.h"
#include "net/url_request/redirect_info.h"
#include "services/network/public/cpp/cors/cors_error_status.h"
#include "services/network/public/cpp/data_element.h"
#include "services/network/public/cpp/resource_request.h"
#include "services/network/public/cpp/resource_request_body.h"
#include "services/network/public/cpp/resource_response.h"
#include "services/network/public/cpp/url_loader_completion_status.h"




namespace network {
namespace mojom {

class URLLoaderProxy;

template <typename ImplRefTraits>
class URLLoaderStub;

class URLLoaderRequestValidator;


class  URLLoader
    : public URLLoaderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = URLLoaderInterfaceBase;
  using Proxy_ = URLLoaderProxy;

  template <typename ImplRefTraits>
  using Stub_ = URLLoaderStub<ImplRefTraits>;

  using RequestValidator_ = URLLoaderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFollowRedirectMinVersion = 0,
    kProceedWithResponseMinVersion = 0,
    kSetPriorityMinVersion = 0,
    kPauseReadingBodyFromNetMinVersion = 0,
    kResumeReadingBodyFromNetMinVersion = 0,
  };
  
  static constexpr uint32_t kClientDisconnectReason = 1U;
  virtual ~URLLoader() {}

  
  virtual void FollowRedirect(const std::vector<std::string>& removed_headers, const net::HttpRequestHeaders& modified_headers, const base::Optional<GURL>& new_url) = 0;

  
  virtual void ProceedWithResponse() = 0;

  
  virtual void SetPriority(net::RequestPriority priority, int32_t intra_priority_value) = 0;

  
  virtual void PauseReadingBodyFromNet() = 0;

  
  virtual void ResumeReadingBodyFromNet() = 0;
};

class URLLoaderClientProxy;

template <typename ImplRefTraits>
class URLLoaderClientStub;

class URLLoaderClientRequestValidator;
class URLLoaderClientResponseValidator;


class  URLLoaderClient
    : public URLLoaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = URLLoaderClientInterfaceBase;
  using Proxy_ = URLLoaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = URLLoaderClientStub<ImplRefTraits>;

  using RequestValidator_ = URLLoaderClientRequestValidator;
  using ResponseValidator_ = URLLoaderClientResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOnReceiveResponseMinVersion = 0,
    kOnReceiveRedirectMinVersion = 0,
    kOnUploadProgressMinVersion = 0,
    kOnReceiveCachedMetadataMinVersion = 0,
    kOnTransferSizeUpdatedMinVersion = 0,
    kOnStartLoadingResponseBodyMinVersion = 0,
    kOnCompleteMinVersion = 0,
  };
  virtual ~URLLoaderClient() {}

  
  virtual void OnReceiveResponse(const network::ResourceResponseHead& head) = 0;

  
  virtual void OnReceiveRedirect(const net::RedirectInfo& redirect_info, const network::ResourceResponseHead& head) = 0;


  using OnUploadProgressCallback = base::OnceCallback<void()>;
  
  virtual void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) = 0;

  
  virtual void OnReceiveCachedMetadata(mojo_base::BigBuffer data) = 0;

  
  virtual void OnTransferSizeUpdated(int32_t transfer_size_diff) = 0;

  
  virtual void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) = 0;

  
  virtual void OnComplete(const network::URLLoaderCompletionStatus& status) = 0;
};

class  URLLoaderProxy
    : public URLLoader {
 public:
  using InterfaceType = URLLoader;

  explicit URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void FollowRedirect(const std::vector<std::string>& removed_headers, const net::HttpRequestHeaders& modified_headers, const base::Optional<GURL>& new_url) final;
  void ProceedWithResponse() final;
  void SetPriority(net::RequestPriority priority, int32_t intra_priority_value) final;
  void PauseReadingBodyFromNet() final;
  void ResumeReadingBodyFromNet() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  URLLoaderClientProxy
    : public URLLoaderClient {
 public:
  using InterfaceType = URLLoaderClient;

  explicit URLLoaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceiveResponse(const network::ResourceResponseHead& head) final;
  void OnReceiveRedirect(const net::RedirectInfo& redirect_info, const network::ResourceResponseHead& head) final;
  void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) final;
  void OnReceiveCachedMetadata(mojo_base::BigBuffer data) final;
  void OnTransferSizeUpdated(int32_t transfer_size_diff) final;
  void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) final;
  void OnComplete(const network::URLLoaderCompletionStatus& status) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  URLLoaderStubDispatch {
 public:
  static bool Accept(URLLoader* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      URLLoader* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<URLLoader>>
class URLLoaderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  URLLoaderStub() {}
  ~URLLoaderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  URLLoaderClientStubDispatch {
 public:
  static bool Accept(URLLoaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      URLLoaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<URLLoaderClient>>
class URLLoaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  URLLoaderClientStub() {}
  ~URLLoaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return URLLoaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  URLLoaderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  URLLoaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  URLLoaderClientResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};



















class  URLRequest {
 public:
  using DataView = URLRequestDataView;
  using Data_ = internal::URLRequest_Data;

  template <typename... Args>
  static URLRequestPtr New(Args&&... args) {
    return URLRequestPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLRequestPtr From(const U& u) {
    return mojo::TypeConverter<URLRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLRequest>::Convert(*this);
  }


  URLRequest();

  URLRequest(
      const std::string& method,
      const GURL& url,
      const GURL& site_for_cookies,
      const base::Optional<url::Origin>& top_frame_origin,
      bool attach_same_site_cookies,
      bool update_first_party_url_on_redirect,
      const base::Optional<url::Origin>& request_initiator,
      const GURL& referrer,
      net::URLRequest::ReferrerPolicy referrer_policy,
      bool is_prerendering,
      const net::HttpRequestHeaders& headers,
      const net::HttpRequestHeaders& cors_exempt_headers,
      int32_t load_flags,
      bool allow_credentials,
      int32_t plugin_child_id,
      int32_t resource_type,
      net::RequestPriority priority,
      int32_t appcache_host_id,
      bool should_reset_appcache,
      bool is_external_request,
      ::network::mojom::CorsPreflightPolicy cors_preflight_policy,
      bool originated_from_service_worker,
      bool skip_service_worker,
      bool corb_detachable,
      bool corb_excluded,
      ::network::mojom::FetchRequestMode fetch_request_mode,
      ::network::mojom::FetchCredentialsMode fetch_credentials_mode,
      ::network::mojom::FetchRedirectMode fetch_redirect_mode,
      const std::string& fetch_integrity,
      int32_t fetch_request_context_type,
      scoped_refptr<network::ResourceRequestBody> request_body,
      bool keepalive,
      bool has_user_gesture,
      bool enable_load_timing,
      bool enable_upload_progress,
      bool do_not_prompt_for_login,
      int32_t render_frame_id,
      bool is_main_frame,
      int32_t transition_type,
      bool allow_download,
      bool report_raw_headers,
      int32_t previews_state,
      bool initiated_in_secure_context,
      bool upgrade_if_insecure,
      bool is_revalidating,
      const base::Optional<base::UnguessableToken>& throttling_profile_id,
      const net::HttpRequestHeaders& custom_proxy_pre_cache_headers,
      const net::HttpRequestHeaders& custom_proxy_post_cache_headers,
      const base::Optional<base::UnguessableToken>& fetch_window_id,
      const base::Optional<std::string>& devtools_request_id);

  ~URLRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLRequestPtr>
  URLRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLRequest>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLRequest::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLRequest_UnserializedMessageContext<
            UserType, URLRequest::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLRequest::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLRequest_UnserializedMessageContext<
            UserType, URLRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLRequest::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string method;
  
  GURL url;
  
  GURL site_for_cookies;
  
  base::Optional<url::Origin> top_frame_origin;
  
  bool attach_same_site_cookies;
  
  bool update_first_party_url_on_redirect;
  
  base::Optional<url::Origin> request_initiator;
  
  GURL referrer;
  
  net::URLRequest::ReferrerPolicy referrer_policy;
  
  bool is_prerendering;
  
  net::HttpRequestHeaders headers;
  
  net::HttpRequestHeaders cors_exempt_headers;
  
  int32_t load_flags;
  
  bool allow_credentials;
  
  int32_t plugin_child_id;
  
  int32_t resource_type;
  
  net::RequestPriority priority;
  
  int32_t appcache_host_id;
  
  bool should_reset_appcache;
  
  bool is_external_request;
  
  ::network::mojom::CorsPreflightPolicy cors_preflight_policy;
  
  bool originated_from_service_worker;
  
  bool skip_service_worker;
  
  bool corb_detachable;
  
  bool corb_excluded;
  
  ::network::mojom::FetchRequestMode fetch_request_mode;
  
  ::network::mojom::FetchCredentialsMode fetch_credentials_mode;
  
  ::network::mojom::FetchRedirectMode fetch_redirect_mode;
  
  std::string fetch_integrity;
  
  int32_t fetch_request_context_type;
  
  scoped_refptr<network::ResourceRequestBody> request_body;
  
  bool keepalive;
  
  bool has_user_gesture;
  
  bool enable_load_timing;
  
  bool enable_upload_progress;
  
  bool do_not_prompt_for_login;
  
  int32_t render_frame_id;
  
  bool is_main_frame;
  
  int32_t transition_type;
  
  bool allow_download;
  
  bool report_raw_headers;
  
  int32_t previews_state;
  
  bool initiated_in_secure_context;
  
  bool upgrade_if_insecure;
  
  bool is_revalidating;
  
  base::Optional<base::UnguessableToken> throttling_profile_id;
  
  net::HttpRequestHeaders custom_proxy_pre_cache_headers;
  
  net::HttpRequestHeaders custom_proxy_post_cache_headers;
  
  base::Optional<base::UnguessableToken> fetch_window_id;
  
  base::Optional<std::string> devtools_request_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  URLRequestBody {
 public:
  using DataView = URLRequestBodyDataView;
  using Data_ = internal::URLRequestBody_Data;

  template <typename... Args>
  static URLRequestBodyPtr New(Args&&... args) {
    return URLRequestBodyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLRequestBodyPtr From(const U& u) {
    return mojo::TypeConverter<URLRequestBodyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLRequestBody>::Convert(*this);
  }


  URLRequestBody();

  URLRequestBody(
      std::vector<network::DataElement> elements,
      uint64_t identifier,
      bool contains_sensitive_info);

  ~URLRequestBody();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLRequestBodyPtr>
  URLRequestBodyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLRequestBody>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLRequestBody::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLRequestBody::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLRequestBody_UnserializedMessageContext<
            UserType, URLRequestBody::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLRequestBody::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLRequestBody::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLRequestBody_UnserializedMessageContext<
            UserType, URLRequestBody::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLRequestBody::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<network::DataElement> elements;
  
  uint64_t identifier;
  
  bool contains_sensitive_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(URLRequestBody);
};





class  DataElement {
 public:
  using DataView = DataElementDataView;
  using Data_ = internal::DataElement_Data;

  template <typename... Args>
  static DataElementPtr New(Args&&... args) {
    return DataElementPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DataElementPtr From(const U& u) {
    return mojo::TypeConverter<DataElementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DataElement>::Convert(*this);
  }


  DataElement();

  DataElement(
      DataElementType type,
      const std::vector<uint8_t>& buf,
      const base::FilePath& path,
      base::File file,
      const base::Optional<std::string>& blob_uuid,
      ::network::mojom::DataPipeGetterPtrInfo data_pipe_getter,
      ::network::mojom::ChunkedDataPipeGetterPtrInfo chunked_data_pipe_getter,
      uint64_t offset,
      uint64_t length,
      base::Time expected_modification_time);

  ~DataElement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DataElementPtr>
  DataElementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DataElement>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DataElement::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DataElement::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DataElement_UnserializedMessageContext<
            UserType, DataElement::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DataElement::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DataElement::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DataElement_UnserializedMessageContext<
            UserType, DataElement::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DataElement::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  DataElementType type;
  
  std::vector<uint8_t> buf;
  
  base::FilePath path;
  
  base::File file;
  
  base::Optional<std::string> blob_uuid;
  
  ::network::mojom::DataPipeGetterPtrInfo data_pipe_getter;
  
  ::network::mojom::ChunkedDataPipeGetterPtrInfo chunked_data_pipe_getter;
  
  uint64_t offset;
  
  uint64_t length;
  
  base::Time expected_modification_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DataElement);
};





class  URLLoaderClientEndpoints {
 public:
  using DataView = URLLoaderClientEndpointsDataView;
  using Data_ = internal::URLLoaderClientEndpoints_Data;

  template <typename... Args>
  static URLLoaderClientEndpointsPtr New(Args&&... args) {
    return URLLoaderClientEndpointsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLLoaderClientEndpointsPtr From(const U& u) {
    return mojo::TypeConverter<URLLoaderClientEndpointsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLLoaderClientEndpoints>::Convert(*this);
  }


  URLLoaderClientEndpoints();

  URLLoaderClientEndpoints(
      URLLoaderPtrInfo url_loader,
      URLLoaderClientRequest url_loader_client);

  ~URLLoaderClientEndpoints();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLLoaderClientEndpointsPtr>
  URLLoaderClientEndpointsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, URLLoaderClientEndpoints>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLLoaderClientEndpoints::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLLoaderClientEndpoints::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLLoaderClientEndpoints_UnserializedMessageContext<
            UserType, URLLoaderClientEndpoints::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<URLLoaderClientEndpoints::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return URLLoaderClientEndpoints::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLLoaderClientEndpoints_UnserializedMessageContext<
            UserType, URLLoaderClientEndpoints::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLLoaderClientEndpoints::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  URLLoaderPtrInfo url_loader;
  
  URLLoaderClientRequest url_loader_client;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientEndpoints);
};

template <typename StructPtrType>
URLRequestPtr URLRequest::Clone() const {
  return New(
      mojo::Clone(method),
      mojo::Clone(url),
      mojo::Clone(site_for_cookies),
      mojo::Clone(top_frame_origin),
      mojo::Clone(attach_same_site_cookies),
      mojo::Clone(update_first_party_url_on_redirect),
      mojo::Clone(request_initiator),
      mojo::Clone(referrer),
      mojo::Clone(referrer_policy),
      mojo::Clone(is_prerendering),
      mojo::Clone(headers),
      mojo::Clone(cors_exempt_headers),
      mojo::Clone(load_flags),
      mojo::Clone(allow_credentials),
      mojo::Clone(plugin_child_id),
      mojo::Clone(resource_type),
      mojo::Clone(priority),
      mojo::Clone(appcache_host_id),
      mojo::Clone(should_reset_appcache),
      mojo::Clone(is_external_request),
      mojo::Clone(cors_preflight_policy),
      mojo::Clone(originated_from_service_worker),
      mojo::Clone(skip_service_worker),
      mojo::Clone(corb_detachable),
      mojo::Clone(corb_excluded),
      mojo::Clone(fetch_request_mode),
      mojo::Clone(fetch_credentials_mode),
      mojo::Clone(fetch_redirect_mode),
      mojo::Clone(fetch_integrity),
      mojo::Clone(fetch_request_context_type),
      mojo::Clone(request_body),
      mojo::Clone(keepalive),
      mojo::Clone(has_user_gesture),
      mojo::Clone(enable_load_timing),
      mojo::Clone(enable_upload_progress),
      mojo::Clone(do_not_prompt_for_login),
      mojo::Clone(render_frame_id),
      mojo::Clone(is_main_frame),
      mojo::Clone(transition_type),
      mojo::Clone(allow_download),
      mojo::Clone(report_raw_headers),
      mojo::Clone(previews_state),
      mojo::Clone(initiated_in_secure_context),
      mojo::Clone(upgrade_if_insecure),
      mojo::Clone(is_revalidating),
      mojo::Clone(throttling_profile_id),
      mojo::Clone(custom_proxy_pre_cache_headers),
      mojo::Clone(custom_proxy_post_cache_headers),
      mojo::Clone(fetch_window_id),
      mojo::Clone(devtools_request_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLRequest>::value>::type*>
bool URLRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->site_for_cookies, other_struct.site_for_cookies))
    return false;
  if (!mojo::Equals(this->top_frame_origin, other_struct.top_frame_origin))
    return false;
  if (!mojo::Equals(this->attach_same_site_cookies, other_struct.attach_same_site_cookies))
    return false;
  if (!mojo::Equals(this->update_first_party_url_on_redirect, other_struct.update_first_party_url_on_redirect))
    return false;
  if (!mojo::Equals(this->request_initiator, other_struct.request_initiator))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->referrer_policy, other_struct.referrer_policy))
    return false;
  if (!mojo::Equals(this->is_prerendering, other_struct.is_prerendering))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->cors_exempt_headers, other_struct.cors_exempt_headers))
    return false;
  if (!mojo::Equals(this->load_flags, other_struct.load_flags))
    return false;
  if (!mojo::Equals(this->allow_credentials, other_struct.allow_credentials))
    return false;
  if (!mojo::Equals(this->plugin_child_id, other_struct.plugin_child_id))
    return false;
  if (!mojo::Equals(this->resource_type, other_struct.resource_type))
    return false;
  if (!mojo::Equals(this->priority, other_struct.priority))
    return false;
  if (!mojo::Equals(this->appcache_host_id, other_struct.appcache_host_id))
    return false;
  if (!mojo::Equals(this->should_reset_appcache, other_struct.should_reset_appcache))
    return false;
  if (!mojo::Equals(this->is_external_request, other_struct.is_external_request))
    return false;
  if (!mojo::Equals(this->cors_preflight_policy, other_struct.cors_preflight_policy))
    return false;
  if (!mojo::Equals(this->originated_from_service_worker, other_struct.originated_from_service_worker))
    return false;
  if (!mojo::Equals(this->skip_service_worker, other_struct.skip_service_worker))
    return false;
  if (!mojo::Equals(this->corb_detachable, other_struct.corb_detachable))
    return false;
  if (!mojo::Equals(this->corb_excluded, other_struct.corb_excluded))
    return false;
  if (!mojo::Equals(this->fetch_request_mode, other_struct.fetch_request_mode))
    return false;
  if (!mojo::Equals(this->fetch_credentials_mode, other_struct.fetch_credentials_mode))
    return false;
  if (!mojo::Equals(this->fetch_redirect_mode, other_struct.fetch_redirect_mode))
    return false;
  if (!mojo::Equals(this->fetch_integrity, other_struct.fetch_integrity))
    return false;
  if (!mojo::Equals(this->fetch_request_context_type, other_struct.fetch_request_context_type))
    return false;
  if (!mojo::Equals(this->request_body, other_struct.request_body))
    return false;
  if (!mojo::Equals(this->keepalive, other_struct.keepalive))
    return false;
  if (!mojo::Equals(this->has_user_gesture, other_struct.has_user_gesture))
    return false;
  if (!mojo::Equals(this->enable_load_timing, other_struct.enable_load_timing))
    return false;
  if (!mojo::Equals(this->enable_upload_progress, other_struct.enable_upload_progress))
    return false;
  if (!mojo::Equals(this->do_not_prompt_for_login, other_struct.do_not_prompt_for_login))
    return false;
  if (!mojo::Equals(this->render_frame_id, other_struct.render_frame_id))
    return false;
  if (!mojo::Equals(this->is_main_frame, other_struct.is_main_frame))
    return false;
  if (!mojo::Equals(this->transition_type, other_struct.transition_type))
    return false;
  if (!mojo::Equals(this->allow_download, other_struct.allow_download))
    return false;
  if (!mojo::Equals(this->report_raw_headers, other_struct.report_raw_headers))
    return false;
  if (!mojo::Equals(this->previews_state, other_struct.previews_state))
    return false;
  if (!mojo::Equals(this->initiated_in_secure_context, other_struct.initiated_in_secure_context))
    return false;
  if (!mojo::Equals(this->upgrade_if_insecure, other_struct.upgrade_if_insecure))
    return false;
  if (!mojo::Equals(this->is_revalidating, other_struct.is_revalidating))
    return false;
  if (!mojo::Equals(this->throttling_profile_id, other_struct.throttling_profile_id))
    return false;
  if (!mojo::Equals(this->custom_proxy_pre_cache_headers, other_struct.custom_proxy_pre_cache_headers))
    return false;
  if (!mojo::Equals(this->custom_proxy_post_cache_headers, other_struct.custom_proxy_post_cache_headers))
    return false;
  if (!mojo::Equals(this->fetch_window_id, other_struct.fetch_window_id))
    return false;
  if (!mojo::Equals(this->devtools_request_id, other_struct.devtools_request_id))
    return false;
  return true;
}
template <typename StructPtrType>
URLRequestBodyPtr URLRequestBody::Clone() const {
  return New(
      mojo::Clone(elements),
      mojo::Clone(identifier),
      mojo::Clone(contains_sensitive_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLRequestBody>::value>::type*>
bool URLRequestBody::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->elements, other_struct.elements))
    return false;
  if (!mojo::Equals(this->identifier, other_struct.identifier))
    return false;
  if (!mojo::Equals(this->contains_sensitive_info, other_struct.contains_sensitive_info))
    return false;
  return true;
}
template <typename StructPtrType>
DataElementPtr DataElement::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(buf),
      mojo::Clone(path),
      mojo::Clone(file),
      mojo::Clone(blob_uuid),
      mojo::Clone(data_pipe_getter),
      mojo::Clone(chunked_data_pipe_getter),
      mojo::Clone(offset),
      mojo::Clone(length),
      mojo::Clone(expected_modification_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DataElement>::value>::type*>
bool DataElement::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->buf, other_struct.buf))
    return false;
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->file, other_struct.file))
    return false;
  if (!mojo::Equals(this->blob_uuid, other_struct.blob_uuid))
    return false;
  if (!mojo::Equals(this->data_pipe_getter, other_struct.data_pipe_getter))
    return false;
  if (!mojo::Equals(this->chunked_data_pipe_getter, other_struct.chunked_data_pipe_getter))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->length, other_struct.length))
    return false;
  if (!mojo::Equals(this->expected_modification_time, other_struct.expected_modification_time))
    return false;
  return true;
}
template <typename StructPtrType>
URLLoaderClientEndpointsPtr URLLoaderClientEndpoints::Clone() const {
  return New(
      mojo::Clone(url_loader),
      mojo::Clone(url_loader_client)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, URLLoaderClientEndpoints>::value>::type*>
bool URLLoaderClientEndpoints::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_loader, other_struct.url_loader))
    return false;
  if (!mojo::Equals(this->url_loader_client, other_struct.url_loader_client))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::URLRequest::DataView,
                                         ::network::mojom::URLRequestPtr> {
  static bool IsNull(const ::network::mojom::URLRequestPtr& input) { return !input; }
  static void SetToNull(::network::mojom::URLRequestPtr* output) { output->reset(); }

  static const decltype(::network::mojom::URLRequest::method)& method(
      const ::network::mojom::URLRequestPtr& input) {
    return input->method;
  }

  static const decltype(::network::mojom::URLRequest::url)& url(
      const ::network::mojom::URLRequestPtr& input) {
    return input->url;
  }

  static const decltype(::network::mojom::URLRequest::site_for_cookies)& site_for_cookies(
      const ::network::mojom::URLRequestPtr& input) {
    return input->site_for_cookies;
  }

  static const decltype(::network::mojom::URLRequest::top_frame_origin)& top_frame_origin(
      const ::network::mojom::URLRequestPtr& input) {
    return input->top_frame_origin;
  }

  static decltype(::network::mojom::URLRequest::attach_same_site_cookies) attach_same_site_cookies(
      const ::network::mojom::URLRequestPtr& input) {
    return input->attach_same_site_cookies;
  }

  static decltype(::network::mojom::URLRequest::update_first_party_url_on_redirect) update_first_party_url_on_redirect(
      const ::network::mojom::URLRequestPtr& input) {
    return input->update_first_party_url_on_redirect;
  }

  static const decltype(::network::mojom::URLRequest::request_initiator)& request_initiator(
      const ::network::mojom::URLRequestPtr& input) {
    return input->request_initiator;
  }

  static const decltype(::network::mojom::URLRequest::referrer)& referrer(
      const ::network::mojom::URLRequestPtr& input) {
    return input->referrer;
  }

  static decltype(::network::mojom::URLRequest::referrer_policy) referrer_policy(
      const ::network::mojom::URLRequestPtr& input) {
    return input->referrer_policy;
  }

  static decltype(::network::mojom::URLRequest::is_prerendering) is_prerendering(
      const ::network::mojom::URLRequestPtr& input) {
    return input->is_prerendering;
  }

  static const decltype(::network::mojom::URLRequest::headers)& headers(
      const ::network::mojom::URLRequestPtr& input) {
    return input->headers;
  }

  static const decltype(::network::mojom::URLRequest::cors_exempt_headers)& cors_exempt_headers(
      const ::network::mojom::URLRequestPtr& input) {
    return input->cors_exempt_headers;
  }

  static decltype(::network::mojom::URLRequest::load_flags) load_flags(
      const ::network::mojom::URLRequestPtr& input) {
    return input->load_flags;
  }

  static decltype(::network::mojom::URLRequest::allow_credentials) allow_credentials(
      const ::network::mojom::URLRequestPtr& input) {
    return input->allow_credentials;
  }

  static decltype(::network::mojom::URLRequest::plugin_child_id) plugin_child_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->plugin_child_id;
  }

  static decltype(::network::mojom::URLRequest::resource_type) resource_type(
      const ::network::mojom::URLRequestPtr& input) {
    return input->resource_type;
  }

  static decltype(::network::mojom::URLRequest::priority) priority(
      const ::network::mojom::URLRequestPtr& input) {
    return input->priority;
  }

  static decltype(::network::mojom::URLRequest::appcache_host_id) appcache_host_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->appcache_host_id;
  }

  static decltype(::network::mojom::URLRequest::should_reset_appcache) should_reset_appcache(
      const ::network::mojom::URLRequestPtr& input) {
    return input->should_reset_appcache;
  }

  static decltype(::network::mojom::URLRequest::is_external_request) is_external_request(
      const ::network::mojom::URLRequestPtr& input) {
    return input->is_external_request;
  }

  static decltype(::network::mojom::URLRequest::cors_preflight_policy) cors_preflight_policy(
      const ::network::mojom::URLRequestPtr& input) {
    return input->cors_preflight_policy;
  }

  static decltype(::network::mojom::URLRequest::originated_from_service_worker) originated_from_service_worker(
      const ::network::mojom::URLRequestPtr& input) {
    return input->originated_from_service_worker;
  }

  static decltype(::network::mojom::URLRequest::skip_service_worker) skip_service_worker(
      const ::network::mojom::URLRequestPtr& input) {
    return input->skip_service_worker;
  }

  static decltype(::network::mojom::URLRequest::corb_detachable) corb_detachable(
      const ::network::mojom::URLRequestPtr& input) {
    return input->corb_detachable;
  }

  static decltype(::network::mojom::URLRequest::corb_excluded) corb_excluded(
      const ::network::mojom::URLRequestPtr& input) {
    return input->corb_excluded;
  }

  static decltype(::network::mojom::URLRequest::fetch_request_mode) fetch_request_mode(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_request_mode;
  }

  static decltype(::network::mojom::URLRequest::fetch_credentials_mode) fetch_credentials_mode(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_credentials_mode;
  }

  static decltype(::network::mojom::URLRequest::fetch_redirect_mode) fetch_redirect_mode(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_redirect_mode;
  }

  static const decltype(::network::mojom::URLRequest::fetch_integrity)& fetch_integrity(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_integrity;
  }

  static decltype(::network::mojom::URLRequest::fetch_request_context_type) fetch_request_context_type(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_request_context_type;
  }

  static  decltype(::network::mojom::URLRequest::request_body)& request_body(
       ::network::mojom::URLRequestPtr& input) {
    return input->request_body;
  }

  static decltype(::network::mojom::URLRequest::keepalive) keepalive(
      const ::network::mojom::URLRequestPtr& input) {
    return input->keepalive;
  }

  static decltype(::network::mojom::URLRequest::has_user_gesture) has_user_gesture(
      const ::network::mojom::URLRequestPtr& input) {
    return input->has_user_gesture;
  }

  static decltype(::network::mojom::URLRequest::enable_load_timing) enable_load_timing(
      const ::network::mojom::URLRequestPtr& input) {
    return input->enable_load_timing;
  }

  static decltype(::network::mojom::URLRequest::enable_upload_progress) enable_upload_progress(
      const ::network::mojom::URLRequestPtr& input) {
    return input->enable_upload_progress;
  }

  static decltype(::network::mojom::URLRequest::do_not_prompt_for_login) do_not_prompt_for_login(
      const ::network::mojom::URLRequestPtr& input) {
    return input->do_not_prompt_for_login;
  }

  static decltype(::network::mojom::URLRequest::render_frame_id) render_frame_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->render_frame_id;
  }

  static decltype(::network::mojom::URLRequest::is_main_frame) is_main_frame(
      const ::network::mojom::URLRequestPtr& input) {
    return input->is_main_frame;
  }

  static decltype(::network::mojom::URLRequest::transition_type) transition_type(
      const ::network::mojom::URLRequestPtr& input) {
    return input->transition_type;
  }

  static decltype(::network::mojom::URLRequest::allow_download) allow_download(
      const ::network::mojom::URLRequestPtr& input) {
    return input->allow_download;
  }

  static decltype(::network::mojom::URLRequest::report_raw_headers) report_raw_headers(
      const ::network::mojom::URLRequestPtr& input) {
    return input->report_raw_headers;
  }

  static decltype(::network::mojom::URLRequest::previews_state) previews_state(
      const ::network::mojom::URLRequestPtr& input) {
    return input->previews_state;
  }

  static decltype(::network::mojom::URLRequest::initiated_in_secure_context) initiated_in_secure_context(
      const ::network::mojom::URLRequestPtr& input) {
    return input->initiated_in_secure_context;
  }

  static decltype(::network::mojom::URLRequest::upgrade_if_insecure) upgrade_if_insecure(
      const ::network::mojom::URLRequestPtr& input) {
    return input->upgrade_if_insecure;
  }

  static decltype(::network::mojom::URLRequest::is_revalidating) is_revalidating(
      const ::network::mojom::URLRequestPtr& input) {
    return input->is_revalidating;
  }

  static const decltype(::network::mojom::URLRequest::throttling_profile_id)& throttling_profile_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->throttling_profile_id;
  }

  static const decltype(::network::mojom::URLRequest::custom_proxy_pre_cache_headers)& custom_proxy_pre_cache_headers(
      const ::network::mojom::URLRequestPtr& input) {
    return input->custom_proxy_pre_cache_headers;
  }

  static const decltype(::network::mojom::URLRequest::custom_proxy_post_cache_headers)& custom_proxy_post_cache_headers(
      const ::network::mojom::URLRequestPtr& input) {
    return input->custom_proxy_post_cache_headers;
  }

  static const decltype(::network::mojom::URLRequest::fetch_window_id)& fetch_window_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->fetch_window_id;
  }

  static const decltype(::network::mojom::URLRequest::devtools_request_id)& devtools_request_id(
      const ::network::mojom::URLRequestPtr& input) {
    return input->devtools_request_id;
  }

  static bool Read(::network::mojom::URLRequest::DataView input, ::network::mojom::URLRequestPtr* output);
};


template <>
struct  StructTraits<::network::mojom::URLRequestBody::DataView,
                                         ::network::mojom::URLRequestBodyPtr> {
  static bool IsNull(const ::network::mojom::URLRequestBodyPtr& input) { return !input; }
  static void SetToNull(::network::mojom::URLRequestBodyPtr* output) { output->reset(); }

  static  decltype(::network::mojom::URLRequestBody::elements)& elements(
       ::network::mojom::URLRequestBodyPtr& input) {
    return input->elements;
  }

  static decltype(::network::mojom::URLRequestBody::identifier) identifier(
      const ::network::mojom::URLRequestBodyPtr& input) {
    return input->identifier;
  }

  static decltype(::network::mojom::URLRequestBody::contains_sensitive_info) contains_sensitive_info(
      const ::network::mojom::URLRequestBodyPtr& input) {
    return input->contains_sensitive_info;
  }

  static bool Read(::network::mojom::URLRequestBody::DataView input, ::network::mojom::URLRequestBodyPtr* output);
};


template <>
struct  StructTraits<::network::mojom::DataElement::DataView,
                                         ::network::mojom::DataElementPtr> {
  static bool IsNull(const ::network::mojom::DataElementPtr& input) { return !input; }
  static void SetToNull(::network::mojom::DataElementPtr* output) { output->reset(); }

  static decltype(::network::mojom::DataElement::type) type(
      const ::network::mojom::DataElementPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::DataElement::buf)& buf(
      const ::network::mojom::DataElementPtr& input) {
    return input->buf;
  }

  static const decltype(::network::mojom::DataElement::path)& path(
      const ::network::mojom::DataElementPtr& input) {
    return input->path;
  }

  static  decltype(::network::mojom::DataElement::file)& file(
       ::network::mojom::DataElementPtr& input) {
    return input->file;
  }

  static const decltype(::network::mojom::DataElement::blob_uuid)& blob_uuid(
      const ::network::mojom::DataElementPtr& input) {
    return input->blob_uuid;
  }

  static  decltype(::network::mojom::DataElement::data_pipe_getter)& data_pipe_getter(
       ::network::mojom::DataElementPtr& input) {
    return input->data_pipe_getter;
  }

  static  decltype(::network::mojom::DataElement::chunked_data_pipe_getter)& chunked_data_pipe_getter(
       ::network::mojom::DataElementPtr& input) {
    return input->chunked_data_pipe_getter;
  }

  static decltype(::network::mojom::DataElement::offset) offset(
      const ::network::mojom::DataElementPtr& input) {
    return input->offset;
  }

  static decltype(::network::mojom::DataElement::length) length(
      const ::network::mojom::DataElementPtr& input) {
    return input->length;
  }

  static const decltype(::network::mojom::DataElement::expected_modification_time)& expected_modification_time(
      const ::network::mojom::DataElementPtr& input) {
    return input->expected_modification_time;
  }

  static bool Read(::network::mojom::DataElement::DataView input, ::network::mojom::DataElementPtr* output);
};


template <>
struct  StructTraits<::network::mojom::URLLoaderClientEndpoints::DataView,
                                         ::network::mojom::URLLoaderClientEndpointsPtr> {
  static bool IsNull(const ::network::mojom::URLLoaderClientEndpointsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::URLLoaderClientEndpointsPtr* output) { output->reset(); }

  static  decltype(::network::mojom::URLLoaderClientEndpoints::url_loader)& url_loader(
       ::network::mojom::URLLoaderClientEndpointsPtr& input) {
    return input->url_loader;
  }

  static  decltype(::network::mojom::URLLoaderClientEndpoints::url_loader_client)& url_loader_client(
       ::network::mojom::URLLoaderClientEndpointsPtr& input) {
    return input->url_loader_client;
  }

  static bool Read(::network::mojom::URLLoaderClientEndpoints::DataView input, ::network::mojom::URLLoaderClientEndpointsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_H_