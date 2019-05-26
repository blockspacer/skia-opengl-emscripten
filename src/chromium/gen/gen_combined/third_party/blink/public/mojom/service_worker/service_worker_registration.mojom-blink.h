// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/renderer/core/core_export.h"




namespace WTF {
struct blink_mojom_internal_ServiceWorkerUpdateViaCache_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ServiceWorkerUpdateViaCache& value) {
    using utype = std::underlying_type<::blink::mojom::ServiceWorkerUpdateViaCache>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ServiceWorkerUpdateViaCache& left, const ::blink::mojom::ServiceWorkerUpdateViaCache& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ServiceWorkerUpdateViaCache>
    : public GenericHashTraits<::blink::mojom::ServiceWorkerUpdateViaCache> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ServiceWorkerUpdateViaCache& value) {
    return value == static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ServiceWorkerUpdateViaCache& slot, bool) {
    slot = static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ServiceWorkerUpdateViaCache& value) {
    return value == static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class ServiceWorkerRegistrationObjectHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerRegistrationObjectHostStub;

class ServiceWorkerRegistrationObjectHostRequestValidator;
class ServiceWorkerRegistrationObjectHostResponseValidator;


class CORE_EXPORT ServiceWorkerRegistrationObjectHost
    : public ServiceWorkerRegistrationObjectHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerRegistrationObjectHostInterfaceBase;
  using Proxy_ = ServiceWorkerRegistrationObjectHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerRegistrationObjectHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerRegistrationObjectHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerRegistrationObjectHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUpdateMinVersion = 0,
    kUnregisterMinVersion = 0,
    kEnableNavigationPreloadMinVersion = 0,
    kGetNavigationPreloadStateMinVersion = 0,
    kSetNavigationPreloadHeaderMinVersion = 0,
  };
  virtual ~ServiceWorkerRegistrationObjectHost() {}


  using UpdateCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&)>;
  
  virtual void Update(UpdateCallback callback) = 0;


  using UnregisterCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&)>;
  
  virtual void Unregister(UnregisterCallback callback) = 0;


  using EnableNavigationPreloadCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&)>;
  
  virtual void EnableNavigationPreload(bool enable, EnableNavigationPreloadCallback callback) = 0;


  using GetNavigationPreloadStateCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&, ::blink::mojom::blink::NavigationPreloadStatePtr)>;
  
  virtual void GetNavigationPreloadState(GetNavigationPreloadStateCallback callback) = 0;


  using SetNavigationPreloadHeaderCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerErrorType, const WTF::String&)>;
  
  virtual void SetNavigationPreloadHeader(const WTF::String& value, SetNavigationPreloadHeaderCallback callback) = 0;
};

class ServiceWorkerRegistrationObjectProxy;

template <typename ImplRefTraits>
class ServiceWorkerRegistrationObjectStub;

class ServiceWorkerRegistrationObjectRequestValidator;


class CORE_EXPORT ServiceWorkerRegistrationObject
    : public ServiceWorkerRegistrationObjectInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerRegistrationObjectInterfaceBase;
  using Proxy_ = ServiceWorkerRegistrationObjectProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerRegistrationObjectStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerRegistrationObjectRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetServiceWorkerObjectsMinVersion = 0,
    kSetUpdateViaCacheMinVersion = 0,
    kUpdateFoundMinVersion = 0,
  };
  virtual ~ServiceWorkerRegistrationObject() {}

  
  virtual void SetServiceWorkerObjects(ChangedServiceWorkerObjectsMaskPtr changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active) = 0;

  
  virtual void SetUpdateViaCache(ServiceWorkerUpdateViaCache update_via_cache) = 0;

  
  virtual void UpdateFound() = 0;
};

class CORE_EXPORT ServiceWorkerRegistrationObjectHostProxy
    : public ServiceWorkerRegistrationObjectHost {
 public:
  using InterfaceType = ServiceWorkerRegistrationObjectHost;

  explicit ServiceWorkerRegistrationObjectHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void Update(UpdateCallback callback) final;
  void Unregister(UnregisterCallback callback) final;
  void EnableNavigationPreload(bool enable, EnableNavigationPreloadCallback callback) final;
  void GetNavigationPreloadState(GetNavigationPreloadStateCallback callback) final;
  void SetNavigationPreloadHeader(const WTF::String& value, SetNavigationPreloadHeaderCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT ServiceWorkerRegistrationObjectProxy
    : public ServiceWorkerRegistrationObject {
 public:
  using InterfaceType = ServiceWorkerRegistrationObject;

  explicit ServiceWorkerRegistrationObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetServiceWorkerObjects(ChangedServiceWorkerObjectsMaskPtr changed_mask, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active) final;
  void SetUpdateViaCache(ServiceWorkerUpdateViaCache update_via_cache) final;
  void UpdateFound() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerRegistrationObjectHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerRegistrationObjectHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerRegistrationObjectHost>>
class ServiceWorkerRegistrationObjectHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerRegistrationObjectHostStub() {}
  ~ServiceWorkerRegistrationObjectHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerRegistrationObjectHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerRegistrationObjectHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectStubDispatch {
 public:
  static bool Accept(ServiceWorkerRegistrationObject* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerRegistrationObject* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerRegistrationObject>>
class ServiceWorkerRegistrationObjectStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerRegistrationObjectStub() {}
  ~ServiceWorkerRegistrationObjectStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerRegistrationObjectStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerRegistrationObjectStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerRegistrationObjectHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CORE_EXPORT ChangedServiceWorkerObjectsMask {
 public:
  using DataView = ChangedServiceWorkerObjectsMaskDataView;
  using Data_ = internal::ChangedServiceWorkerObjectsMask_Data;

  template <typename... Args>
  static ChangedServiceWorkerObjectsMaskPtr New(Args&&... args) {
    return ChangedServiceWorkerObjectsMaskPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ChangedServiceWorkerObjectsMaskPtr From(const U& u) {
    return mojo::TypeConverter<ChangedServiceWorkerObjectsMaskPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ChangedServiceWorkerObjectsMask>::Convert(*this);
  }


  ChangedServiceWorkerObjectsMask();

  ChangedServiceWorkerObjectsMask(
      bool installing,
      bool waiting,
      bool active);

  ~ChangedServiceWorkerObjectsMask();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ChangedServiceWorkerObjectsMaskPtr>
  ChangedServiceWorkerObjectsMaskPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ChangedServiceWorkerObjectsMask>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ChangedServiceWorkerObjectsMask::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ChangedServiceWorkerObjectsMask::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ChangedServiceWorkerObjectsMask_UnserializedMessageContext<
            UserType, ChangedServiceWorkerObjectsMask::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ChangedServiceWorkerObjectsMask::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ChangedServiceWorkerObjectsMask::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ChangedServiceWorkerObjectsMask_UnserializedMessageContext<
            UserType, ChangedServiceWorkerObjectsMask::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ChangedServiceWorkerObjectsMask::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool installing;
  
  bool waiting;
  
  bool active;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class CORE_EXPORT ServiceWorkerRegistrationOptions {
 public:
  using DataView = ServiceWorkerRegistrationOptionsDataView;
  using Data_ = internal::ServiceWorkerRegistrationOptions_Data;

  template <typename... Args>
  static ServiceWorkerRegistrationOptionsPtr New(Args&&... args) {
    return ServiceWorkerRegistrationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerRegistrationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerRegistrationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerRegistrationOptions>::Convert(*this);
  }


  ServiceWorkerRegistrationOptions();

  ServiceWorkerRegistrationOptions(
      const ::blink::KURL& scope,
      ::blink::mojom::blink::ScriptType type,
      ServiceWorkerUpdateViaCache update_via_cache);

  ~ServiceWorkerRegistrationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerRegistrationOptionsPtr>
  ServiceWorkerRegistrationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerRegistrationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerRegistrationOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerRegistrationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerRegistrationOptions_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerRegistrationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerRegistrationOptions_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL scope;
  
  ::blink::mojom::blink::ScriptType type;
  
  ServiceWorkerUpdateViaCache update_via_cache;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class CORE_EXPORT ServiceWorkerRegistrationObjectInfo {
 public:
  using DataView = ServiceWorkerRegistrationObjectInfoDataView;
  using Data_ = internal::ServiceWorkerRegistrationObjectInfo_Data;

  template <typename... Args>
  static ServiceWorkerRegistrationObjectInfoPtr New(Args&&... args) {
    return ServiceWorkerRegistrationObjectInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerRegistrationObjectInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerRegistrationObjectInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerRegistrationObjectInfo>::Convert(*this);
  }


  ServiceWorkerRegistrationObjectInfo();

  ServiceWorkerRegistrationObjectInfo(
      int64_t registration_id,
      const ::blink::KURL& scope,
      ServiceWorkerUpdateViaCache update_via_cache,
      ServiceWorkerRegistrationObjectHostAssociatedPtrInfo host_ptr_info,
      ServiceWorkerRegistrationObjectAssociatedRequest request,
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing,
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting,
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active);

  ~ServiceWorkerRegistrationObjectInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerRegistrationObjectInfoPtr>
  ServiceWorkerRegistrationObjectInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerRegistrationObjectInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerRegistrationObjectInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerRegistrationObjectInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationObjectInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationObjectInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerRegistrationObjectInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerRegistrationObjectInfo_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationObjectInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationObjectInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t registration_id;
  
  ::blink::KURL scope;
  
  ServiceWorkerUpdateViaCache update_via_cache;
  
  ServiceWorkerRegistrationObjectHostAssociatedPtrInfo host_ptr_info;
  
  ServiceWorkerRegistrationObjectAssociatedRequest request;
  
  ::blink::mojom::blink::ServiceWorkerObjectInfoPtr installing;
  
  ::blink::mojom::blink::ServiceWorkerObjectInfoPtr waiting;
  
  ::blink::mojom::blink::ServiceWorkerObjectInfoPtr active;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerRegistrationObjectInfo);
};

template <typename StructPtrType>
ChangedServiceWorkerObjectsMaskPtr ChangedServiceWorkerObjectsMask::Clone() const {
  return New(
      mojo::Clone(installing),
      mojo::Clone(waiting),
      mojo::Clone(active)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ChangedServiceWorkerObjectsMask>::value>::type*>
bool ChangedServiceWorkerObjectsMask::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->installing, other_struct.installing))
    return false;
  if (!mojo::Equals(this->waiting, other_struct.waiting))
    return false;
  if (!mojo::Equals(this->active, other_struct.active))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerRegistrationOptionsPtr ServiceWorkerRegistrationOptions::Clone() const {
  return New(
      mojo::Clone(scope),
      mojo::Clone(type),
      mojo::Clone(update_via_cache)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerRegistrationOptions>::value>::type*>
bool ServiceWorkerRegistrationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->update_via_cache, other_struct.update_via_cache))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerRegistrationObjectInfoPtr ServiceWorkerRegistrationObjectInfo::Clone() const {
  return New(
      mojo::Clone(registration_id),
      mojo::Clone(scope),
      mojo::Clone(update_via_cache),
      mojo::Clone(host_ptr_info),
      mojo::Clone(request),
      mojo::Clone(installing),
      mojo::Clone(waiting),
      mojo::Clone(active)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerRegistrationObjectInfo>::value>::type*>
bool ServiceWorkerRegistrationObjectInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->registration_id, other_struct.registration_id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  if (!mojo::Equals(this->update_via_cache, other_struct.update_via_cache))
    return false;
  if (!mojo::Equals(this->host_ptr_info, other_struct.host_ptr_info))
    return false;
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->installing, other_struct.installing))
    return false;
  if (!mojo::Equals(this->waiting, other_struct.waiting))
    return false;
  if (!mojo::Equals(this->active, other_struct.active))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ChangedServiceWorkerObjectsMask::DataView,
                                         ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr> {
  static bool IsNull(const ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ChangedServiceWorkerObjectsMask::installing) installing(
      const ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr& input) {
    return input->installing;
  }

  static decltype(::blink::mojom::blink::ChangedServiceWorkerObjectsMask::waiting) waiting(
      const ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr& input) {
    return input->waiting;
  }

  static decltype(::blink::mojom::blink::ChangedServiceWorkerObjectsMask::active) active(
      const ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr& input) {
    return input->active;
  }

  static bool Read(::blink::mojom::blink::ChangedServiceWorkerObjectsMask::DataView input, ::blink::mojom::blink::ChangedServiceWorkerObjectsMaskPtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView,
                                         ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::scope)& scope(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->scope;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::type) type(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->type;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::update_via_cache) update_via_cache(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->update_via_cache;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView input, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView,
                                         ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::registration_id) registration_id(
      const ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->registration_id;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::scope)& scope(
      const ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->scope;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::update_via_cache) update_via_cache(
      const ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->update_via_cache;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::host_ptr_info)& host_ptr_info(
       ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->host_ptr_info;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::request)& request(
       ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->request;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::installing)& installing(
       ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->installing;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::waiting)& waiting(
       ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->waiting;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::active)& active(
       ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr& input) {
    return input->active;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerRegistrationObjectInfo::DataView input, ::blink::mojom::blink::ServiceWorkerRegistrationObjectInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_BLINK_H_