// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_state.mojom-blink.h"
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




namespace blink {
namespace mojom {
namespace blink {

class ServiceWorkerObjectHostProxy;

template <typename ImplRefTraits>
class ServiceWorkerObjectHostStub;

class ServiceWorkerObjectHostRequestValidator;
class ServiceWorkerObjectHostResponseValidator;


class CORE_EXPORT ServiceWorkerObjectHost
    : public ServiceWorkerObjectHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerObjectHostInterfaceBase;
  using Proxy_ = ServiceWorkerObjectHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerObjectHostStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerObjectHostRequestValidator;
  using ResponseValidator_ = ServiceWorkerObjectHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPostMessageToServiceWorkerMinVersion = 0,
    kTerminateForTestingMinVersion = 0,
  };
  virtual ~ServiceWorkerObjectHost() {}

  
  virtual void PostMessageToServiceWorker(::blink::BlinkTransferableMessage message) = 0;


  using TerminateForTestingCallback = base::OnceCallback<void()>;
  
  virtual void TerminateForTesting(TerminateForTestingCallback callback) = 0;
};

class ServiceWorkerObjectProxy;

template <typename ImplRefTraits>
class ServiceWorkerObjectStub;

class ServiceWorkerObjectRequestValidator;


class CORE_EXPORT ServiceWorkerObject
    : public ServiceWorkerObjectInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerObjectInterfaceBase;
  using Proxy_ = ServiceWorkerObjectProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerObjectStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerObjectRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStateChangedMinVersion = 0,
  };
  virtual ~ServiceWorkerObject() {}

  
  virtual void StateChanged(::blink::mojom::blink::ServiceWorkerState state) = 0;
};

class CORE_EXPORT ServiceWorkerObjectHostProxy
    : public ServiceWorkerObjectHost {
 public:
  using InterfaceType = ServiceWorkerObjectHost;

  explicit ServiceWorkerObjectHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void PostMessageToServiceWorker(::blink::BlinkTransferableMessage message) final;
  void TerminateForTesting(TerminateForTestingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT ServiceWorkerObjectProxy
    : public ServiceWorkerObject {
 public:
  using InterfaceType = ServiceWorkerObject;

  explicit ServiceWorkerObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  void StateChanged(::blink::mojom::blink::ServiceWorkerState state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT ServiceWorkerObjectHostStubDispatch {
 public:
  static bool Accept(ServiceWorkerObjectHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerObjectHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerObjectHost>>
class ServiceWorkerObjectHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerObjectHostStub() {}
  ~ServiceWorkerObjectHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerObjectHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerObjectHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ServiceWorkerObjectStubDispatch {
 public:
  static bool Accept(ServiceWorkerObject* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerObject* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerObject>>
class ServiceWorkerObjectStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerObjectStub() {}
  ~ServiceWorkerObjectStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerObjectStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerObjectStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ServiceWorkerObjectHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerObjectRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ServiceWorkerObjectHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class CORE_EXPORT ServiceWorkerObjectInfo {
 public:
  using DataView = ServiceWorkerObjectInfoDataView;
  using Data_ = internal::ServiceWorkerObjectInfo_Data;

  template <typename... Args>
  static ServiceWorkerObjectInfoPtr New(Args&&... args) {
    return ServiceWorkerObjectInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerObjectInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerObjectInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerObjectInfo>::Convert(*this);
  }


  ServiceWorkerObjectInfo();

  ServiceWorkerObjectInfo(
      int64_t version_id,
      ::blink::mojom::blink::ServiceWorkerState state,
      const ::blink::KURL& url,
      ServiceWorkerObjectHostAssociatedPtrInfo host_ptr_info,
      ServiceWorkerObjectAssociatedRequest request);

  ~ServiceWorkerObjectInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerObjectInfoPtr>
  ServiceWorkerObjectInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerObjectInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerObjectInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerObjectInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerObjectInfo_UnserializedMessageContext<
            UserType, ServiceWorkerObjectInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerObjectInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerObjectInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerObjectInfo_UnserializedMessageContext<
            UserType, ServiceWorkerObjectInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerObjectInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t version_id;
  
  ::blink::mojom::blink::ServiceWorkerState state;
  
  ::blink::KURL url;
  
  ServiceWorkerObjectHostAssociatedPtrInfo host_ptr_info;
  
  ServiceWorkerObjectAssociatedRequest request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerObjectInfo);
};

template <typename StructPtrType>
ServiceWorkerObjectInfoPtr ServiceWorkerObjectInfo::Clone() const {
  return New(
      mojo::Clone(version_id),
      mojo::Clone(state),
      mojo::Clone(url),
      mojo::Clone(host_ptr_info),
      mojo::Clone(request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerObjectInfo>::value>::type*>
bool ServiceWorkerObjectInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version_id, other_struct.version_id))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->host_ptr_info, other_struct.host_ptr_info))
    return false;
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerObjectInfo::DataView,
                                         ::blink::mojom::blink::ServiceWorkerObjectInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerObjectInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ServiceWorkerObjectInfo::version_id) version_id(
      const ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) {
    return input->version_id;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerObjectInfo::state) state(
      const ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) {
    return input->state;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerObjectInfo::url)& url(
      const ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) {
    return input->url;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerObjectInfo::host_ptr_info)& host_ptr_info(
       ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) {
    return input->host_ptr_info;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerObjectInfo::request)& request(
       ::blink::mojom::blink::ServiceWorkerObjectInfoPtr& input) {
    return input->request;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerObjectInfo::DataView input, ::blink::mojom::blink::ServiceWorkerObjectInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_BLINK_H_