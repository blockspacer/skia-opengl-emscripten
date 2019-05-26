// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_H_

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
#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-shared.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging.mojom-forward.h"
#include "third_party/blink/public/mojom/push_messaging/push_messaging_status.mojom.h"
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
#include "third_party/blink/public/common/push_messaging/web_push_subscription_options.h"
#include "third_party/blink/public/platform/modules/push_messaging/web_push_error.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class PushMessagingProxy;

template <typename ImplRefTraits>
class PushMessagingStub;

class PushMessagingRequestValidator;
class PushMessagingResponseValidator;


class BLINK_COMMON_EXPORT PushMessaging
    : public PushMessagingInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PushMessagingInterfaceBase;
  using Proxy_ = PushMessagingProxy;

  template <typename ImplRefTraits>
  using Stub_ = PushMessagingStub<ImplRefTraits>;

  using RequestValidator_ = PushMessagingRequestValidator;
  using ResponseValidator_ = PushMessagingResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSubscribeMinVersion = 0,
    kUnsubscribeMinVersion = 0,
    kGetSubscriptionMinVersion = 0,
  };
  virtual ~PushMessaging() {}


  using SubscribeCallback = base::OnceCallback<void(::blink::mojom::PushRegistrationStatus, const base::Optional<GURL>&, const base::Optional<blink::WebPushSubscriptionOptions>&, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, const blink::WebPushSubscriptionOptions& options, bool user_gesture, SubscribeCallback callback) = 0;


  using UnsubscribeCallback = base::OnceCallback<void(blink::WebPushError::ErrorType, bool, const base::Optional<std::string>&)>;
  
  virtual void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) = 0;


  using GetSubscriptionCallback = base::OnceCallback<void(::blink::mojom::PushGetRegistrationStatus, const base::Optional<GURL>&, const base::Optional<blink::WebPushSubscriptionOptions>&, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) = 0;
};

class BLINK_COMMON_EXPORT PushMessagingProxy
    : public PushMessaging {
 public:
  using InterfaceType = PushMessaging;

  explicit PushMessagingProxy(mojo::MessageReceiverWithResponder* receiver);
  void Subscribe(int32_t render_frame_id, int64_t service_worker_registration_id, const blink::WebPushSubscriptionOptions& options, bool user_gesture, SubscribeCallback callback) final;
  void Unsubscribe(int64_t service_worker_registration_id, UnsubscribeCallback callback) final;
  void GetSubscription(int64_t service_worker_registration_id, GetSubscriptionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PushMessagingStubDispatch {
 public:
  static bool Accept(PushMessaging* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PushMessaging* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PushMessaging>>
class PushMessagingStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PushMessagingStub() {}
  ~PushMessagingStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PushMessagingStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PushMessagingStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PushMessagingRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PushMessagingResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT PushSubscriptionOptions {
 public:
  using DataView = PushSubscriptionOptionsDataView;
  using Data_ = internal::PushSubscriptionOptions_Data;

  template <typename... Args>
  static PushSubscriptionOptionsPtr New(Args&&... args) {
    return PushSubscriptionOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PushSubscriptionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PushSubscriptionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PushSubscriptionOptions>::Convert(*this);
  }


  PushSubscriptionOptions();

  PushSubscriptionOptions(
      bool user_visible_only,
      const std::string& application_server_key);

  ~PushSubscriptionOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PushSubscriptionOptionsPtr>
  PushSubscriptionOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PushSubscriptionOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PushSubscriptionOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PushSubscriptionOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PushSubscriptionOptions_UnserializedMessageContext<
            UserType, PushSubscriptionOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PushSubscriptionOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PushSubscriptionOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PushSubscriptionOptions_UnserializedMessageContext<
            UserType, PushSubscriptionOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PushSubscriptionOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool user_visible_only;
  
  std::string application_server_key;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
PushSubscriptionOptionsPtr PushSubscriptionOptions::Clone() const {
  return New(
      mojo::Clone(user_visible_only),
      mojo::Clone(application_server_key)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PushSubscriptionOptions>::value>::type*>
bool PushSubscriptionOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->user_visible_only, other_struct.user_visible_only))
    return false;
  if (!mojo::Equals(this->application_server_key, other_struct.application_server_key))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::PushSubscriptionOptions::DataView,
                                         ::blink::mojom::PushSubscriptionOptionsPtr> {
  static bool IsNull(const ::blink::mojom::PushSubscriptionOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::PushSubscriptionOptionsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::PushSubscriptionOptions::user_visible_only) user_visible_only(
      const ::blink::mojom::PushSubscriptionOptionsPtr& input) {
    return input->user_visible_only;
  }

  static const decltype(::blink::mojom::PushSubscriptionOptions::application_server_key)& application_server_key(
      const ::blink::mojom::PushSubscriptionOptionsPtr& input) {
    return input->application_server_key;
  }

  static bool Read(::blink::mojom::PushSubscriptionOptions::DataView input, ::blink::mojom::PushSubscriptionOptionsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PUSH_MESSAGING_PUSH_MESSAGING_MOJOM_H_