// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom-blink.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-blink.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-blink.h"

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

class ControllerServiceWorkerProxy;

template <typename ImplRefTraits>
class ControllerServiceWorkerStub;

class ControllerServiceWorkerRequestValidator;
class ControllerServiceWorkerResponseValidator;


class CORE_EXPORT ControllerServiceWorker
    : public ControllerServiceWorkerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ControllerServiceWorkerInterfaceBase;
  using Proxy_ = ControllerServiceWorkerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ControllerServiceWorkerStub<ImplRefTraits>;

  using RequestValidator_ = ControllerServiceWorkerRequestValidator;
  using ResponseValidator_ = ControllerServiceWorkerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kDispatchFetchEventMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~ControllerServiceWorker() {}


  using DispatchFetchEventCallback = base::OnceCallback<void(::blink::mojom::blink::ServiceWorkerEventStatus)>;
  
  virtual void DispatchFetchEvent(::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) = 0;

  
  virtual void Clone(ControllerServiceWorkerRequest controller) = 0;
};

class ControllerServiceWorkerConnectorProxy;

template <typename ImplRefTraits>
class ControllerServiceWorkerConnectorStub;

class ControllerServiceWorkerConnectorRequestValidator;


class CORE_EXPORT ControllerServiceWorkerConnector
    : public ControllerServiceWorkerConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ControllerServiceWorkerConnectorInterfaceBase;
  using Proxy_ = ControllerServiceWorkerConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = ControllerServiceWorkerConnectorStub<ImplRefTraits>;

  using RequestValidator_ = ControllerServiceWorkerConnectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kUpdateControllerMinVersion = 0,
  };
  virtual ~ControllerServiceWorkerConnector() {}

  
  virtual void UpdateController(ControllerServiceWorkerPtr controller) = 0;
};

class CORE_EXPORT ControllerServiceWorkerProxy
    : public ControllerServiceWorker {
 public:
  using InterfaceType = ControllerServiceWorker;

  explicit ControllerServiceWorkerProxy(mojo::MessageReceiverWithResponder* receiver);
  void DispatchFetchEvent(::blink::mojom::blink::DispatchFetchEventParamsPtr params, ::blink::mojom::blink::ServiceWorkerFetchResponseCallbackPtr response_callback, DispatchFetchEventCallback callback) final;
  void Clone(ControllerServiceWorkerRequest controller) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CORE_EXPORT ControllerServiceWorkerConnectorProxy
    : public ControllerServiceWorkerConnector {
 public:
  using InterfaceType = ControllerServiceWorkerConnector;

  explicit ControllerServiceWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpdateController(ControllerServiceWorkerPtr controller) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT ControllerServiceWorkerStubDispatch {
 public:
  static bool Accept(ControllerServiceWorker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ControllerServiceWorker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ControllerServiceWorker>>
class ControllerServiceWorkerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ControllerServiceWorkerStub() {}
  ~ControllerServiceWorkerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ControllerServiceWorkerConnectorStubDispatch {
 public:
  static bool Accept(ControllerServiceWorkerConnector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ControllerServiceWorkerConnector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ControllerServiceWorkerConnector>>
class ControllerServiceWorkerConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ControllerServiceWorkerConnectorStub() {}
  ~ControllerServiceWorkerConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ControllerServiceWorkerConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ControllerServiceWorkerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ControllerServiceWorkerConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CORE_EXPORT ControllerServiceWorkerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class CORE_EXPORT ControllerServiceWorkerInfo {
 public:
  using DataView = ControllerServiceWorkerInfoDataView;
  using Data_ = internal::ControllerServiceWorkerInfo_Data;

  template <typename... Args>
  static ControllerServiceWorkerInfoPtr New(Args&&... args) {
    return ControllerServiceWorkerInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ControllerServiceWorkerInfoPtr From(const U& u) {
    return mojo::TypeConverter<ControllerServiceWorkerInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ControllerServiceWorkerInfo>::Convert(*this);
  }


  ControllerServiceWorkerInfo();

  ControllerServiceWorkerInfo(
      ::blink::mojom::blink::ControllerServiceWorkerMode mode,
      ControllerServiceWorkerPtrInfo endpoint,
      const WTF::String& client_id,
      const base::Optional<base::UnguessableToken>& fetch_request_window_id,
      ::blink::mojom::blink::ServiceWorkerObjectInfoPtr object_info,
      const WTF::Vector<::blink::mojom::blink::WebFeature>& used_features);

  ~ControllerServiceWorkerInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ControllerServiceWorkerInfoPtr>
  ControllerServiceWorkerInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ControllerServiceWorkerInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ControllerServiceWorkerInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ControllerServiceWorkerInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ControllerServiceWorkerInfo_UnserializedMessageContext<
            UserType, ControllerServiceWorkerInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ControllerServiceWorkerInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ControllerServiceWorkerInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ControllerServiceWorkerInfo_UnserializedMessageContext<
            UserType, ControllerServiceWorkerInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ControllerServiceWorkerInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::blink::ControllerServiceWorkerMode mode;
  
  ControllerServiceWorkerPtrInfo endpoint;
  
  WTF::String client_id;
  
  base::Optional<base::UnguessableToken> fetch_request_window_id;
  
  ::blink::mojom::blink::ServiceWorkerObjectInfoPtr object_info;
  
  WTF::Vector<::blink::mojom::blink::WebFeature> used_features;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ControllerServiceWorkerInfo);
};

template <typename StructPtrType>
ControllerServiceWorkerInfoPtr ControllerServiceWorkerInfo::Clone() const {
  return New(
      mojo::Clone(mode),
      mojo::Clone(endpoint),
      mojo::Clone(client_id),
      mojo::Clone(fetch_request_window_id),
      mojo::Clone(object_info),
      mojo::Clone(used_features)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ControllerServiceWorkerInfo>::value>::type*>
bool ControllerServiceWorkerInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->endpoint, other_struct.endpoint))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  if (!mojo::Equals(this->fetch_request_window_id, other_struct.fetch_request_window_id))
    return false;
  if (!mojo::Equals(this->object_info, other_struct.object_info))
    return false;
  if (!mojo::Equals(this->used_features, other_struct.used_features))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ControllerServiceWorkerInfo::DataView,
                                         ::blink::mojom::blink::ControllerServiceWorkerInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ControllerServiceWorkerInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::mode) mode(
      const ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->mode;
  }

  static  decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::endpoint)& endpoint(
       ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->endpoint;
  }

  static const decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::client_id)& client_id(
      const ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->client_id;
  }

  static const decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::fetch_request_window_id)& fetch_request_window_id(
      const ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->fetch_request_window_id;
  }

  static  decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::object_info)& object_info(
       ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->object_info;
  }

  static const decltype(::blink::mojom::blink::ControllerServiceWorkerInfo::used_features)& used_features(
      const ::blink::mojom::blink::ControllerServiceWorkerInfoPtr& input) {
    return input->used_features;
  }

  static bool Read(::blink::mojom::blink::ControllerServiceWorkerInfo::DataView input, ::blink::mojom::blink::ControllerServiceWorkerInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_BLINK_H_
