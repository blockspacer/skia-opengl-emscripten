// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_H_

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
#include "third_party/blink/public/mojom/sms/sms_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/sms/sms_manager.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
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

class SmsManagerProxy;

template <typename ImplRefTraits>
class SmsManagerStub;

class SmsManagerRequestValidator;
class SmsManagerResponseValidator;


class BLINK_COMMON_EXPORT SmsManager
    : public SmsManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SmsManagerInterfaceBase;
  using Proxy_ = SmsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = SmsManagerStub<ImplRefTraits>;

  using RequestValidator_ = SmsManagerRequestValidator;
  using ResponseValidator_ = SmsManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetNextMessageMinVersion = 0,
  };
  virtual ~SmsManager() {}


  using GetNextMessageCallback = base::OnceCallback<void(SmsMessagePtr)>;
  
  virtual void GetNextMessage(base::TimeDelta timeout, GetNextMessageCallback callback) = 0;
};

class BLINK_COMMON_EXPORT SmsManagerProxy
    : public SmsManager {
 public:
  using InterfaceType = SmsManager;

  explicit SmsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetNextMessage(base::TimeDelta timeout, GetNextMessageCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SmsManagerStubDispatch {
 public:
  static bool Accept(SmsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SmsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SmsManager>>
class SmsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SmsManagerStub() {}
  ~SmsManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SmsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SmsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SmsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT SmsManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT SmsMessage {
 public:
  using DataView = SmsMessageDataView;
  using Data_ = internal::SmsMessage_Data;

  template <typename... Args>
  static SmsMessagePtr New(Args&&... args) {
    return SmsMessagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SmsMessagePtr From(const U& u) {
    return mojo::TypeConverter<SmsMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SmsMessage>::Convert(*this);
  }


  SmsMessage();

  SmsMessage(
      SmsStatus status,
      const base::Optional<std::string>& content);

  ~SmsMessage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SmsMessagePtr>
  SmsMessagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SmsMessage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SmsMessage::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SmsMessage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SmsMessage_UnserializedMessageContext<
            UserType, SmsMessage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SmsMessage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SmsMessage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SmsMessage_UnserializedMessageContext<
            UserType, SmsMessage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SmsMessage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  SmsStatus status;
  
  base::Optional<std::string> content;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
SmsMessagePtr SmsMessage::Clone() const {
  return New(
      mojo::Clone(status),
      mojo::Clone(content)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SmsMessage>::value>::type*>
bool SmsMessage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->status, other_struct.status))
    return false;
  if (!mojo::Equals(this->content, other_struct.content))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SmsMessage::DataView,
                                         ::blink::mojom::SmsMessagePtr> {
  static bool IsNull(const ::blink::mojom::SmsMessagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SmsMessagePtr* output) { output->reset(); }

  static decltype(::blink::mojom::SmsMessage::status) status(
      const ::blink::mojom::SmsMessagePtr& input) {
    return input->status;
  }

  static const decltype(::blink::mojom::SmsMessage::content)& content(
      const ::blink::mojom::SmsMessagePtr& input) {
    return input->content;
  }

  static bool Read(::blink::mojom::SmsMessage::DataView input, ::blink::mojom::SmsMessagePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_H_