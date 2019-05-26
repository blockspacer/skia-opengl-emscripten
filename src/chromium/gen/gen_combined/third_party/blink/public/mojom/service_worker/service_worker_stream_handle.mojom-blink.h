// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-blink-forward.h"

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




namespace blink {
namespace mojom {
namespace blink {

class ServiceWorkerStreamCallbackProxy;

template <typename ImplRefTraits>
class ServiceWorkerStreamCallbackStub;

class ServiceWorkerStreamCallbackRequestValidator;


class PLATFORM_EXPORT ServiceWorkerStreamCallback
    : public ServiceWorkerStreamCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerStreamCallbackInterfaceBase;
  using Proxy_ = ServiceWorkerStreamCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerStreamCallbackStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerStreamCallbackRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCompletedMinVersion = 0,
    kOnAbortedMinVersion = 0,
  };
  virtual ~ServiceWorkerStreamCallback() {}

  
  virtual void OnCompleted() = 0;

  
  virtual void OnAborted() = 0;
};

class PLATFORM_EXPORT ServiceWorkerStreamCallbackProxy
    : public ServiceWorkerStreamCallback {
 public:
  using InterfaceType = ServiceWorkerStreamCallback;

  explicit ServiceWorkerStreamCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCompleted() final;
  void OnAborted() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ServiceWorkerStreamCallbackStubDispatch {
 public:
  static bool Accept(ServiceWorkerStreamCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerStreamCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerStreamCallback>>
class ServiceWorkerStreamCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerStreamCallbackStub() {}
  ~ServiceWorkerStreamCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerStreamCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerStreamCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ServiceWorkerStreamCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT ServiceWorkerStreamHandle {
 public:
  using DataView = ServiceWorkerStreamHandleDataView;
  using Data_ = internal::ServiceWorkerStreamHandle_Data;

  template <typename... Args>
  static ServiceWorkerStreamHandlePtr New(Args&&... args) {
    return ServiceWorkerStreamHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerStreamHandlePtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerStreamHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerStreamHandle>::Convert(*this);
  }


  ServiceWorkerStreamHandle();

  ServiceWorkerStreamHandle(
      mojo::ScopedDataPipeConsumerHandle stream,
      ServiceWorkerStreamCallbackRequest callback_request);

  ~ServiceWorkerStreamHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerStreamHandlePtr>
  ServiceWorkerStreamHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerStreamHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerStreamHandle::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerStreamHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerStreamHandle_UnserializedMessageContext<
            UserType, ServiceWorkerStreamHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerStreamHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerStreamHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerStreamHandle_UnserializedMessageContext<
            UserType, ServiceWorkerStreamHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerStreamHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedDataPipeConsumerHandle stream;
  
  ServiceWorkerStreamCallbackRequest callback_request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerStreamHandle);
};

template <typename StructPtrType>
ServiceWorkerStreamHandlePtr ServiceWorkerStreamHandle::Clone() const {
  return New(
      mojo::Clone(stream),
      mojo::Clone(callback_request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerStreamHandle>::value>::type*>
bool ServiceWorkerStreamHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stream, other_struct.stream))
    return false;
  if (!mojo::Equals(this->callback_request, other_struct.callback_request))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerStreamHandle::DataView,
                                         ::blink::mojom::blink::ServiceWorkerStreamHandlePtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerStreamHandlePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerStreamHandlePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::blink::ServiceWorkerStreamHandle::stream)& stream(
       ::blink::mojom::blink::ServiceWorkerStreamHandlePtr& input) {
    return input->stream;
  }

  static  decltype(::blink::mojom::blink::ServiceWorkerStreamHandle::callback_request)& callback_request(
       ::blink::mojom::blink::ServiceWorkerStreamHandlePtr& input) {
    return input->callback_request;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerStreamHandle::DataView input, ::blink::mojom::blink::ServiceWorkerStreamHandlePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_STREAM_HANDLE_MOJOM_BLINK_H_