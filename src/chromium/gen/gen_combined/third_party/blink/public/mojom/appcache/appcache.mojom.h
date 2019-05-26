// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_H_

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
#include "third_party/blink/public/mojom/appcache/appcache.mojom-shared.h"
#include "third_party/blink/public/mojom/appcache/appcache.mojom-forward.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom.h"
#include "url/mojom/url.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class AppCacheBackendProxy;

template <typename ImplRefTraits>
class AppCacheBackendStub;

class AppCacheBackendRequestValidator;


class BLINK_COMMON_EXPORT AppCacheBackend
    : public AppCacheBackendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AppCacheBackendInterfaceBase;
  using Proxy_ = AppCacheBackendProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppCacheBackendStub<ImplRefTraits>;

  using RequestValidator_ = AppCacheBackendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterHostMinVersion = 0,
  };
  virtual ~AppCacheBackend() {}

  
  virtual void RegisterHost(AppCacheHostRequest host_request, AppCacheFrontendPtr frontend, int32_t host_id, int32_t render_frame_id) = 0;
};

class AppCacheHostProxy;

template <typename ImplRefTraits>
class AppCacheHostStub;

class AppCacheHostRequestValidator;
class AppCacheHostResponseValidator;


class BLINK_COMMON_EXPORT AppCacheHost
    : public AppCacheHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = AppCacheHostInterfaceBase;
  using Proxy_ = AppCacheHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppCacheHostStub<ImplRefTraits>;

  using RequestValidator_ = AppCacheHostRequestValidator;
  using ResponseValidator_ = AppCacheHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSetSpawningHostIdMinVersion = 0,
    kSelectCacheMinVersion = 0,
    kSelectCacheForSharedWorkerMinVersion = 0,
    kMarkAsForeignEntryMinVersion = 0,
    kGetStatusMinVersion = 0,
    kStartUpdateMinVersion = 0,
    kSwapCacheMinVersion = 0,
    kGetResourceListMinVersion = 0,
  };
  virtual ~AppCacheHost() {}

  
  virtual void SetSpawningHostId(int32_t spawning_host_id) = 0;

  
  virtual void SelectCache(const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) = 0;

  
  virtual void SelectCacheForSharedWorker(int64_t appcache_id) = 0;

  
  virtual void MarkAsForeignEntry(const GURL& document_url, int64_t appcache_document_was_loaded_from) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetStatus(::blink::mojom::AppCacheStatus* out_status);

  using GetStatusCallback = base::OnceCallback<void(::blink::mojom::AppCacheStatus)>;
  
  virtual void GetStatus(GetStatusCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool StartUpdate(bool* out_success);

  using StartUpdateCallback = base::OnceCallback<void(bool)>;
  
  virtual void StartUpdate(StartUpdateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool SwapCache(bool* out_success);

  using SwapCacheCallback = base::OnceCallback<void(bool)>;
  
  virtual void SwapCache(SwapCacheCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetResourceList(std::vector<AppCacheResourceInfoPtr>* out_resources);

  using GetResourceListCallback = base::OnceCallback<void(std::vector<AppCacheResourceInfoPtr>)>;
  
  virtual void GetResourceList(GetResourceListCallback callback) = 0;
};

class AppCacheFrontendProxy;

template <typename ImplRefTraits>
class AppCacheFrontendStub;

class AppCacheFrontendRequestValidator;


class BLINK_COMMON_EXPORT AppCacheFrontend
    : public AppCacheFrontendInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AppCacheFrontendInterfaceBase;
  using Proxy_ = AppCacheFrontendProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppCacheFrontendStub<ImplRefTraits>;

  using RequestValidator_ = AppCacheFrontendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCacheSelectedMinVersion = 0,
    kEventRaisedMinVersion = 0,
    kProgressEventRaisedMinVersion = 0,
    kErrorEventRaisedMinVersion = 0,
    kLogMessageMinVersion = 0,
    kSetSubresourceFactoryMinVersion = 0,
  };
  virtual ~AppCacheFrontend() {}

  
  virtual void CacheSelected(::blink::mojom::AppCacheInfoPtr info) = 0;

  
  virtual void EventRaised(AppCacheEventID event_id) = 0;

  
  virtual void ProgressEventRaised(const GURL& url, int32_t total, int32_t complete) = 0;

  
  virtual void ErrorEventRaised(AppCacheErrorDetailsPtr error_details) = 0;

  
  virtual void LogMessage(::blink::mojom::ConsoleMessageLevel log_level, const std::string& message) = 0;

  
  virtual void SetSubresourceFactory(::network::mojom::URLLoaderFactoryPtr url_loader_factory) = 0;
};

class BLINK_COMMON_EXPORT AppCacheBackendProxy
    : public AppCacheBackend {
 public:
  using InterfaceType = AppCacheBackend;

  explicit AppCacheBackendProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterHost(AppCacheHostRequest host_request, AppCacheFrontendPtr frontend, int32_t host_id, int32_t render_frame_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT AppCacheHostProxy
    : public AppCacheHost {
 public:
  using InterfaceType = AppCacheHost;

  explicit AppCacheHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSpawningHostId(int32_t spawning_host_id) final;
  void SelectCache(const GURL& document_url, int64_t appcache_document_was_loaded_from, const GURL& opt_manifest_url) final;
  void SelectCacheForSharedWorker(int64_t appcache_id) final;
  void MarkAsForeignEntry(const GURL& document_url, int64_t appcache_document_was_loaded_from) final;
  bool GetStatus(::blink::mojom::AppCacheStatus* out_status) final;
  void GetStatus(GetStatusCallback callback) final;
  bool StartUpdate(bool* out_success) final;
  void StartUpdate(StartUpdateCallback callback) final;
  bool SwapCache(bool* out_success) final;
  void SwapCache(SwapCacheCallback callback) final;
  bool GetResourceList(std::vector<AppCacheResourceInfoPtr>* out_resources) final;
  void GetResourceList(GetResourceListCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT AppCacheFrontendProxy
    : public AppCacheFrontend {
 public:
  using InterfaceType = AppCacheFrontend;

  explicit AppCacheFrontendProxy(mojo::MessageReceiverWithResponder* receiver);
  void CacheSelected(::blink::mojom::AppCacheInfoPtr info) final;
  void EventRaised(AppCacheEventID event_id) final;
  void ProgressEventRaised(const GURL& url, int32_t total, int32_t complete) final;
  void ErrorEventRaised(AppCacheErrorDetailsPtr error_details) final;
  void LogMessage(::blink::mojom::ConsoleMessageLevel log_level, const std::string& message) final;
  void SetSubresourceFactory(::network::mojom::URLLoaderFactoryPtr url_loader_factory) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT AppCacheBackendStubDispatch {
 public:
  static bool Accept(AppCacheBackend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppCacheBackend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppCacheBackend>>
class AppCacheBackendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppCacheBackendStub() {}
  ~AppCacheBackendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheBackendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheBackendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT AppCacheHostStubDispatch {
 public:
  static bool Accept(AppCacheHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppCacheHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppCacheHost>>
class AppCacheHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppCacheHostStub() {}
  ~AppCacheHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT AppCacheFrontendStubDispatch {
 public:
  static bool Accept(AppCacheFrontend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppCacheFrontend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppCacheFrontend>>
class AppCacheFrontendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppCacheFrontendStub() {}
  ~AppCacheFrontendStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheFrontendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppCacheFrontendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT AppCacheBackendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT AppCacheHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT AppCacheFrontendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT AppCacheHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_COMMON_EXPORT AppCacheResourceInfo {
 public:
  using DataView = AppCacheResourceInfoDataView;
  using Data_ = internal::AppCacheResourceInfo_Data;

  template <typename... Args>
  static AppCacheResourceInfoPtr New(Args&&... args) {
    return AppCacheResourceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheResourceInfoPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheResourceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheResourceInfo>::Convert(*this);
  }


  AppCacheResourceInfo();

  AppCacheResourceInfo(
      const GURL& url,
      int64_t response_size,
      int64_t padding_size,
      bool is_master,
      bool is_manifest,
      bool is_intercept,
      bool is_fallback,
      bool is_foreign,
      bool is_explicit,
      int64_t response_id);

  ~AppCacheResourceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheResourceInfoPtr>
  AppCacheResourceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheResourceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheResourceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheResourceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheResourceInfo_UnserializedMessageContext<
            UserType, AppCacheResourceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheResourceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheResourceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheResourceInfo_UnserializedMessageContext<
            UserType, AppCacheResourceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheResourceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL url;
  
  int64_t response_size;
  
  int64_t padding_size;
  
  bool is_master;
  
  bool is_manifest;
  
  bool is_intercept;
  
  bool is_fallback;
  
  bool is_foreign;
  
  bool is_explicit;
  
  int64_t response_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT AppCacheErrorDetails {
 public:
  using DataView = AppCacheErrorDetailsDataView;
  using Data_ = internal::AppCacheErrorDetails_Data;

  template <typename... Args>
  static AppCacheErrorDetailsPtr New(Args&&... args) {
    return AppCacheErrorDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppCacheErrorDetailsPtr From(const U& u) {
    return mojo::TypeConverter<AppCacheErrorDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppCacheErrorDetails>::Convert(*this);
  }


  AppCacheErrorDetails();

  AppCacheErrorDetails(
      const std::string& message,
      AppCacheErrorReason reason,
      const GURL& url,
      int32_t status,
      bool is_cross_origin);

  ~AppCacheErrorDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppCacheErrorDetailsPtr>
  AppCacheErrorDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AppCacheErrorDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheErrorDetails::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppCacheErrorDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppCacheErrorDetails_UnserializedMessageContext<
            UserType, AppCacheErrorDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AppCacheErrorDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppCacheErrorDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppCacheErrorDetails_UnserializedMessageContext<
            UserType, AppCacheErrorDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppCacheErrorDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string message;
  
  AppCacheErrorReason reason;
  
  GURL url;
  
  int32_t status;
  
  bool is_cross_origin;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
AppCacheResourceInfoPtr AppCacheResourceInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(response_size),
      mojo::Clone(padding_size),
      mojo::Clone(is_master),
      mojo::Clone(is_manifest),
      mojo::Clone(is_intercept),
      mojo::Clone(is_fallback),
      mojo::Clone(is_foreign),
      mojo::Clone(is_explicit),
      mojo::Clone(response_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheResourceInfo>::value>::type*>
bool AppCacheResourceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->response_size, other_struct.response_size))
    return false;
  if (!mojo::Equals(this->padding_size, other_struct.padding_size))
    return false;
  if (!mojo::Equals(this->is_master, other_struct.is_master))
    return false;
  if (!mojo::Equals(this->is_manifest, other_struct.is_manifest))
    return false;
  if (!mojo::Equals(this->is_intercept, other_struct.is_intercept))
    return false;
  if (!mojo::Equals(this->is_fallback, other_struct.is_fallback))
    return false;
  if (!mojo::Equals(this->is_foreign, other_struct.is_foreign))
    return false;
  if (!mojo::Equals(this->is_explicit, other_struct.is_explicit))
    return false;
  if (!mojo::Equals(this->response_id, other_struct.response_id))
    return false;
  return true;
}
template <typename StructPtrType>
AppCacheErrorDetailsPtr AppCacheErrorDetails::Clone() const {
  return New(
      mojo::Clone(message),
      mojo::Clone(reason),
      mojo::Clone(url),
      mojo::Clone(status),
      mojo::Clone(is_cross_origin)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AppCacheErrorDetails>::value>::type*>
bool AppCacheErrorDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->message, other_struct.message))
    return false;
  if (!mojo::Equals(this->reason, other_struct.reason))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->is_cross_origin, other_struct.is_cross_origin))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::AppCacheResourceInfo::DataView,
                                         ::blink::mojom::AppCacheResourceInfoPtr> {
  static bool IsNull(const ::blink::mojom::AppCacheResourceInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::AppCacheResourceInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::AppCacheResourceInfo::url)& url(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::response_size) response_size(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->response_size;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::padding_size) padding_size(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->padding_size;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_master) is_master(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_master;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_manifest) is_manifest(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_manifest;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_intercept) is_intercept(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_intercept;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_fallback) is_fallback(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_fallback;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_foreign) is_foreign(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_foreign;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::is_explicit) is_explicit(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->is_explicit;
  }

  static decltype(::blink::mojom::AppCacheResourceInfo::response_id) response_id(
      const ::blink::mojom::AppCacheResourceInfoPtr& input) {
    return input->response_id;
  }

  static bool Read(::blink::mojom::AppCacheResourceInfo::DataView input, ::blink::mojom::AppCacheResourceInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::AppCacheErrorDetails::DataView,
                                         ::blink::mojom::AppCacheErrorDetailsPtr> {
  static bool IsNull(const ::blink::mojom::AppCacheErrorDetailsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::AppCacheErrorDetailsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::AppCacheErrorDetails::message)& message(
      const ::blink::mojom::AppCacheErrorDetailsPtr& input) {
    return input->message;
  }

  static decltype(::blink::mojom::AppCacheErrorDetails::reason) reason(
      const ::blink::mojom::AppCacheErrorDetailsPtr& input) {
    return input->reason;
  }

  static const decltype(::blink::mojom::AppCacheErrorDetails::url)& url(
      const ::blink::mojom::AppCacheErrorDetailsPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::AppCacheErrorDetails::status) status(
      const ::blink::mojom::AppCacheErrorDetailsPtr& input) {
    return input->status;
  }

  static decltype(::blink::mojom::AppCacheErrorDetails::is_cross_origin) is_cross_origin(
      const ::blink::mojom::AppCacheErrorDetailsPtr& input) {
    return input->is_cross_origin;
  }

  static bool Read(::blink::mojom::AppCacheErrorDetails::DataView input, ::blink::mojom::AppCacheErrorDetailsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_H_