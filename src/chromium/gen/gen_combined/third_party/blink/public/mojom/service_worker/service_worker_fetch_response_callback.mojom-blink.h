// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-blink.h"

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

class ServiceWorkerFetchResponseCallbackProxy;

template <typename ImplRefTraits>
class ServiceWorkerFetchResponseCallbackStub;

class ServiceWorkerFetchResponseCallbackRequestValidator;


class PLATFORM_EXPORT ServiceWorkerFetchResponseCallback
    : public ServiceWorkerFetchResponseCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ServiceWorkerFetchResponseCallbackInterfaceBase;
  using Proxy_ = ServiceWorkerFetchResponseCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = ServiceWorkerFetchResponseCallbackStub<ImplRefTraits>;

  using RequestValidator_ = ServiceWorkerFetchResponseCallbackRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnResponseMinVersion = 0,
    kOnResponseStreamMinVersion = 0,
    kOnFallbackMinVersion = 0,
  };
  virtual ~ServiceWorkerFetchResponseCallback() {}

  
  virtual void OnResponse(::blink::mojom::blink::FetchAPIResponsePtr response, ServiceWorkerFetchEventTimingPtr timing) = 0;

  
  virtual void OnResponseStream(::blink::mojom::blink::FetchAPIResponsePtr response, ::blink::mojom::blink::ServiceWorkerStreamHandlePtr body_as_stream, ServiceWorkerFetchEventTimingPtr timing) = 0;

  
  virtual void OnFallback(ServiceWorkerFetchEventTimingPtr timing) = 0;
};

class PLATFORM_EXPORT ServiceWorkerFetchResponseCallbackProxy
    : public ServiceWorkerFetchResponseCallback {
 public:
  using InterfaceType = ServiceWorkerFetchResponseCallback;

  explicit ServiceWorkerFetchResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnResponse(::blink::mojom::blink::FetchAPIResponsePtr response, ServiceWorkerFetchEventTimingPtr timing) final;
  void OnResponseStream(::blink::mojom::blink::FetchAPIResponsePtr response, ::blink::mojom::blink::ServiceWorkerStreamHandlePtr body_as_stream, ServiceWorkerFetchEventTimingPtr timing) final;
  void OnFallback(ServiceWorkerFetchEventTimingPtr timing) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ServiceWorkerFetchResponseCallbackStubDispatch {
 public:
  static bool Accept(ServiceWorkerFetchResponseCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ServiceWorkerFetchResponseCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ServiceWorkerFetchResponseCallback>>
class ServiceWorkerFetchResponseCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ServiceWorkerFetchResponseCallbackStub() {}
  ~ServiceWorkerFetchResponseCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerFetchResponseCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ServiceWorkerFetchResponseCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ServiceWorkerFetchResponseCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT ServiceWorkerFetchEventTiming {
 public:
  using DataView = ServiceWorkerFetchEventTimingDataView;
  using Data_ = internal::ServiceWorkerFetchEventTiming_Data;

  template <typename... Args>
  static ServiceWorkerFetchEventTimingPtr New(Args&&... args) {
    return ServiceWorkerFetchEventTimingPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerFetchEventTimingPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerFetchEventTimingPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerFetchEventTiming>::Convert(*this);
  }


  ServiceWorkerFetchEventTiming();

  ServiceWorkerFetchEventTiming(
      base::TimeTicks dispatch_event_time,
      base::TimeTicks respond_with_settled_time);

  ~ServiceWorkerFetchEventTiming();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerFetchEventTimingPtr>
  ServiceWorkerFetchEventTimingPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerFetchEventTiming>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerFetchEventTiming::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerFetchEventTiming::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerFetchEventTiming_UnserializedMessageContext<
            UserType, ServiceWorkerFetchEventTiming::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerFetchEventTiming::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerFetchEventTiming::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerFetchEventTiming_UnserializedMessageContext<
            UserType, ServiceWorkerFetchEventTiming::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerFetchEventTiming::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::TimeTicks dispatch_event_time;
  
  base::TimeTicks respond_with_settled_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ServiceWorkerFetchEventTimingPtr ServiceWorkerFetchEventTiming::Clone() const {
  return New(
      mojo::Clone(dispatch_event_time),
      mojo::Clone(respond_with_settled_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerFetchEventTiming>::value>::type*>
bool ServiceWorkerFetchEventTiming::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->dispatch_event_time, other_struct.dispatch_event_time))
    return false;
  if (!mojo::Equals(this->respond_with_settled_time, other_struct.respond_with_settled_time))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerFetchEventTiming::DataView,
                                         ::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ServiceWorkerFetchEventTiming::dispatch_event_time)& dispatch_event_time(
      const ::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr& input) {
    return input->dispatch_event_time;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerFetchEventTiming::respond_with_settled_time)& respond_with_settled_time(
      const ::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr& input) {
    return input->respond_with_settled_time;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerFetchEventTiming::DataView input, ::blink::mojom::blink::ServiceWorkerFetchEventTimingPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_BLINK_H_