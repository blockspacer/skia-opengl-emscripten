// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/appcache/appcache.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-blink.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#endif // ENABLE_GNET

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_AppCacheEventID_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AppCacheEventID& value) {
    using utype = std::underlying_type<::blink::mojom::AppCacheEventID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AppCacheEventID& left, const ::blink::mojom::AppCacheEventID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AppCacheEventID>
    : public GenericHashTraits<::blink::mojom::AppCacheEventID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AppCacheEventID& value) {
    return value == static_cast<::blink::mojom::AppCacheEventID>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AppCacheEventID& slot, bool) {
    slot = static_cast<::blink::mojom::AppCacheEventID>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AppCacheEventID& value) {
    return value == static_cast<::blink::mojom::AppCacheEventID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_AppCacheErrorReason_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AppCacheErrorReason& value) {
    using utype = std::underlying_type<::blink::mojom::AppCacheErrorReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AppCacheErrorReason& left, const ::blink::mojom::AppCacheErrorReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AppCacheErrorReason>
    : public GenericHashTraits<::blink::mojom::AppCacheErrorReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AppCacheErrorReason& value) {
    return value == static_cast<::blink::mojom::AppCacheErrorReason>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AppCacheErrorReason& slot, bool) {
    slot = static_cast<::blink::mojom::AppCacheErrorReason>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AppCacheErrorReason& value) {
    return value == static_cast<::blink::mojom::AppCacheErrorReason>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class AppCacheBackendProxy;

template <typename ImplRefTraits>
class AppCacheBackendStub;

class AppCacheBackendRequestValidator;


class PLATFORM_EXPORT AppCacheBackend
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


class PLATFORM_EXPORT AppCacheHost
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

  
  virtual void SelectCache(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from, const ::blink::KURL& opt_manifest_url) = 0;

  
  virtual void SelectCacheForSharedWorker(int64_t appcache_id) = 0;

  
  virtual void MarkAsForeignEntry(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetStatus(::blink::mojom::blink::AppCacheStatus* out_status);

  using GetStatusCallback = base::OnceCallback<void(::blink::mojom::blink::AppCacheStatus)>;
  
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
  
  virtual bool GetResourceList(WTF::Vector<AppCacheResourceInfoPtr>* out_resources);

  using GetResourceListCallback = base::OnceCallback<void(WTF::Vector<AppCacheResourceInfoPtr>)>;
  
  virtual void GetResourceList(GetResourceListCallback callback) = 0;
};

class AppCacheFrontendProxy;

template <typename ImplRefTraits>
class AppCacheFrontendStub;

class AppCacheFrontendRequestValidator;


class PLATFORM_EXPORT AppCacheFrontend
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

  
  virtual void CacheSelected(::blink::mojom::blink::AppCacheInfoPtr info) = 0;

  
  virtual void EventRaised(AppCacheEventID event_id) = 0;

  
  virtual void ProgressEventRaised(const ::blink::KURL& url, int32_t total, int32_t complete) = 0;

  
  virtual void ErrorEventRaised(AppCacheErrorDetailsPtr error_details) = 0;

  
  virtual void LogMessage(::blink::mojom::blink::ConsoleMessageLevel log_level, const WTF::String& message) = 0;

#if defined(ENABLE_GNET)
  virtual void SetSubresourceFactory(::network::mojom::blink::URLLoaderFactoryPtr url_loader_factory) = 0;
#endif // ENABLE_GNET
};

class PLATFORM_EXPORT AppCacheBackendProxy
    : public AppCacheBackend {
 public:
  using InterfaceType = AppCacheBackend;

  explicit AppCacheBackendProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterHost(AppCacheHostRequest host_request, AppCacheFrontendPtr frontend, int32_t host_id, int32_t render_frame_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT AppCacheHostProxy
    : public AppCacheHost {
 public:
  using InterfaceType = AppCacheHost;

  explicit AppCacheHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSpawningHostId(int32_t spawning_host_id) final;
  void SelectCache(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from, const ::blink::KURL& opt_manifest_url) final;
  void SelectCacheForSharedWorker(int64_t appcache_id) final;
  void MarkAsForeignEntry(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from) final;
  bool GetStatus(::blink::mojom::blink::AppCacheStatus* out_status) final;
  void GetStatus(GetStatusCallback callback) final;
  bool StartUpdate(bool* out_success) final;
  void StartUpdate(StartUpdateCallback callback) final;
  bool SwapCache(bool* out_success) final;
  void SwapCache(SwapCacheCallback callback) final;
  bool GetResourceList(WTF::Vector<AppCacheResourceInfoPtr>* out_resources) final;
  void GetResourceList(GetResourceListCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT AppCacheFrontendProxy
    : public AppCacheFrontend {
 public:
  using InterfaceType = AppCacheFrontend;

  explicit AppCacheFrontendProxy(mojo::MessageReceiverWithResponder* receiver);
  void CacheSelected(::blink::mojom::blink::AppCacheInfoPtr info) final;
  void EventRaised(AppCacheEventID event_id) final;
  void ProgressEventRaised(const ::blink::KURL& url, int32_t total, int32_t complete) final;
  void ErrorEventRaised(AppCacheErrorDetailsPtr error_details) final;
  void LogMessage(::blink::mojom::blink::ConsoleMessageLevel log_level, const WTF::String& message) final;
#if defined(ENABLE_GNET)
  void SetSubresourceFactory(::network::mojom::blink::URLLoaderFactoryPtr url_loader_factory) final;
#endif // ENABLE_GNET

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT AppCacheBackendStubDispatch {
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
class PLATFORM_EXPORT AppCacheHostStubDispatch {
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
class PLATFORM_EXPORT AppCacheFrontendStubDispatch {
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
class PLATFORM_EXPORT AppCacheBackendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppCacheHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppCacheFrontendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppCacheHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class PLATFORM_EXPORT AppCacheResourceInfo {
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
      const ::blink::KURL& url,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheResourceInfo::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  ::blink::KURL url;
  
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





class PLATFORM_EXPORT AppCacheErrorDetails {
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
      const WTF::String& message,
      AppCacheErrorReason reason,
      const ::blink::KURL& url,
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
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppCacheErrorDetails::DataView, WTF::Vector<uint8_t>>(input);
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
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
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

  
  WTF::String message;
  
  AppCacheErrorReason reason;
  
  ::blink::KURL url;
  
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


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::AppCacheResourceInfo::DataView,
                                         ::blink::mojom::blink::AppCacheResourceInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AppCacheResourceInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::AppCacheResourceInfo::url)& url(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::response_size) response_size(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->response_size;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::padding_size) padding_size(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->padding_size;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_master) is_master(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_master;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_manifest) is_manifest(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_manifest;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_intercept) is_intercept(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_intercept;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_fallback) is_fallback(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_fallback;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_foreign) is_foreign(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_foreign;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::is_explicit) is_explicit(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->is_explicit;
  }

  static decltype(::blink::mojom::blink::AppCacheResourceInfo::response_id) response_id(
      const ::blink::mojom::blink::AppCacheResourceInfoPtr& input) {
    return input->response_id;
  }

  static bool Read(::blink::mojom::blink::AppCacheResourceInfo::DataView input, ::blink::mojom::blink::AppCacheResourceInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::AppCacheErrorDetails::DataView,
                                         ::blink::mojom::blink::AppCacheErrorDetailsPtr> {
  static bool IsNull(const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AppCacheErrorDetailsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::AppCacheErrorDetails::message)& message(
      const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) {
    return input->message;
  }

  static decltype(::blink::mojom::blink::AppCacheErrorDetails::reason) reason(
      const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) {
    return input->reason;
  }

  static const decltype(::blink::mojom::blink::AppCacheErrorDetails::url)& url(
      const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::AppCacheErrorDetails::status) status(
      const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) {
    return input->status;
  }

  static decltype(::blink::mojom::blink::AppCacheErrorDetails::is_cross_origin) is_cross_origin(
      const ::blink::mojom::blink::AppCacheErrorDetailsPtr& input) {
    return input->is_cross_origin;
  }

  static bool Read(::blink::mojom::blink::AppCacheErrorDetails::DataView input, ::blink::mojom::blink::AppCacheErrorDetailsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_H_
