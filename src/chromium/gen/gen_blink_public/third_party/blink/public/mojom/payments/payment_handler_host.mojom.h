// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_H_

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
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-forward.h"
#include "components/payments/mojom/payment_request_data.mojom.h"
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




namespace payments {
namespace mojom {

class PaymentHandlerHostProxy;

template <typename ImplRefTraits>
class PaymentHandlerHostStub;

class PaymentHandlerHostRequestValidator;
class PaymentHandlerHostResponseValidator;


class BLINK_COMMON_EXPORT PaymentHandlerHost
    : public PaymentHandlerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PaymentHandlerHostInterfaceBase;
  using Proxy_ = PaymentHandlerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = PaymentHandlerHostStub<ImplRefTraits>;

  using RequestValidator_ = PaymentHandlerHostRequestValidator;
  using ResponseValidator_ = PaymentHandlerHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kChangePaymentMethodMinVersion = 0,
  };
  virtual ~PaymentHandlerHost() {}


  using ChangePaymentMethodCallback = base::OnceCallback<void(PaymentMethodChangeResponsePtr)>;
  
  virtual void ChangePaymentMethod(PaymentHandlerMethodDataPtr method_data, ChangePaymentMethodCallback callback) = 0;
};

class BLINK_COMMON_EXPORT PaymentHandlerHostProxy
    : public PaymentHandlerHost {
 public:
  using InterfaceType = PaymentHandlerHost;

  explicit PaymentHandlerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void ChangePaymentMethod(PaymentHandlerMethodDataPtr method_data, ChangePaymentMethodCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PaymentHandlerHostStubDispatch {
 public:
  static bool Accept(PaymentHandlerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PaymentHandlerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PaymentHandlerHost>>
class PaymentHandlerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PaymentHandlerHostStub() {}
  ~PaymentHandlerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentHandlerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentHandlerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PaymentHandlerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PaymentHandlerHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_COMMON_EXPORT PaymentHandlerMethodData {
 public:
  using DataView = PaymentHandlerMethodDataDataView;
  using Data_ = internal::PaymentHandlerMethodData_Data;

  template <typename... Args>
  static PaymentHandlerMethodDataPtr New(Args&&... args) {
    return PaymentHandlerMethodDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentHandlerMethodDataPtr From(const U& u) {
    return mojo::TypeConverter<PaymentHandlerMethodDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentHandlerMethodData>::Convert(*this);
  }


  PaymentHandlerMethodData();

  PaymentHandlerMethodData(
      const std::string& method_name,
      const std::string& stringified_data);

  ~PaymentHandlerMethodData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentHandlerMethodDataPtr>
  PaymentHandlerMethodDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentHandlerMethodData>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentHandlerMethodData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentHandlerMethodData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentHandlerMethodData_UnserializedMessageContext<
            UserType, PaymentHandlerMethodData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentHandlerMethodData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentHandlerMethodData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentHandlerMethodData_UnserializedMessageContext<
            UserType, PaymentHandlerMethodData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentHandlerMethodData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string method_name;
  
  std::string stringified_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class BLINK_COMMON_EXPORT PaymentHandlerModifier {
 public:
  using DataView = PaymentHandlerModifierDataView;
  using Data_ = internal::PaymentHandlerModifier_Data;

  template <typename... Args>
  static PaymentHandlerModifierPtr New(Args&&... args) {
    return PaymentHandlerModifierPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentHandlerModifierPtr From(const U& u) {
    return mojo::TypeConverter<PaymentHandlerModifierPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentHandlerModifier>::Convert(*this);
  }


  PaymentHandlerModifier();

  PaymentHandlerModifier(
      ::payments::mojom::PaymentCurrencyAmountPtr total,
      PaymentHandlerMethodDataPtr method_data);

  ~PaymentHandlerModifier();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentHandlerModifierPtr>
  PaymentHandlerModifierPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentHandlerModifier>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentHandlerModifier::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentHandlerModifier::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentHandlerModifier_UnserializedMessageContext<
            UserType, PaymentHandlerModifier::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentHandlerModifier::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentHandlerModifier::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentHandlerModifier_UnserializedMessageContext<
            UserType, PaymentHandlerModifier::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentHandlerModifier::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::payments::mojom::PaymentCurrencyAmountPtr total;
  
  PaymentHandlerMethodDataPtr method_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentHandlerModifier);
};





class BLINK_COMMON_EXPORT PaymentMethodChangeResponse {
 public:
  using DataView = PaymentMethodChangeResponseDataView;
  using Data_ = internal::PaymentMethodChangeResponse_Data;

  template <typename... Args>
  static PaymentMethodChangeResponsePtr New(Args&&... args) {
    return PaymentMethodChangeResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentMethodChangeResponsePtr From(const U& u) {
    return mojo::TypeConverter<PaymentMethodChangeResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentMethodChangeResponse>::Convert(*this);
  }


  PaymentMethodChangeResponse();

  PaymentMethodChangeResponse(
      ::payments::mojom::PaymentCurrencyAmountPtr total,
      base::Optional<std::vector<PaymentHandlerModifierPtr>> modifiers,
      const std::string& error,
      const base::Optional<std::string>& stringified_payment_method_errors);

  ~PaymentMethodChangeResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentMethodChangeResponsePtr>
  PaymentMethodChangeResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentMethodChangeResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentMethodChangeResponse::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentMethodChangeResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentMethodChangeResponse_UnserializedMessageContext<
            UserType, PaymentMethodChangeResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentMethodChangeResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentMethodChangeResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentMethodChangeResponse_UnserializedMessageContext<
            UserType, PaymentMethodChangeResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentMethodChangeResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::payments::mojom::PaymentCurrencyAmountPtr total;
  
  base::Optional<std::vector<PaymentHandlerModifierPtr>> modifiers;
  
  std::string error;
  
  base::Optional<std::string> stringified_payment_method_errors;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentMethodChangeResponse);
};

template <typename StructPtrType>
PaymentHandlerMethodDataPtr PaymentHandlerMethodData::Clone() const {
  return New(
      mojo::Clone(method_name),
      mojo::Clone(stringified_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentHandlerMethodData>::value>::type*>
bool PaymentHandlerMethodData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->method_name, other_struct.method_name))
    return false;
  if (!mojo::Equals(this->stringified_data, other_struct.stringified_data))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentHandlerModifierPtr PaymentHandlerModifier::Clone() const {
  return New(
      mojo::Clone(total),
      mojo::Clone(method_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentHandlerModifier>::value>::type*>
bool PaymentHandlerModifier::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->total, other_struct.total))
    return false;
  if (!mojo::Equals(this->method_data, other_struct.method_data))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentMethodChangeResponsePtr PaymentMethodChangeResponse::Clone() const {
  return New(
      mojo::Clone(total),
      mojo::Clone(modifiers),
      mojo::Clone(error),
      mojo::Clone(stringified_payment_method_errors)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentMethodChangeResponse>::value>::type*>
bool PaymentMethodChangeResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->total, other_struct.total))
    return false;
  if (!mojo::Equals(this->modifiers, other_struct.modifiers))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->stringified_payment_method_errors, other_struct.stringified_payment_method_errors))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentHandlerMethodData::DataView,
                                         ::payments::mojom::PaymentHandlerMethodDataPtr> {
  static bool IsNull(const ::payments::mojom::PaymentHandlerMethodDataPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentHandlerMethodDataPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentHandlerMethodData::method_name)& method_name(
      const ::payments::mojom::PaymentHandlerMethodDataPtr& input) {
    return input->method_name;
  }

  static const decltype(::payments::mojom::PaymentHandlerMethodData::stringified_data)& stringified_data(
      const ::payments::mojom::PaymentHandlerMethodDataPtr& input) {
    return input->stringified_data;
  }

  static bool Read(::payments::mojom::PaymentHandlerMethodData::DataView input, ::payments::mojom::PaymentHandlerMethodDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentHandlerModifier::DataView,
                                         ::payments::mojom::PaymentHandlerModifierPtr> {
  static bool IsNull(const ::payments::mojom::PaymentHandlerModifierPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentHandlerModifierPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentHandlerModifier::total)& total(
      const ::payments::mojom::PaymentHandlerModifierPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::PaymentHandlerModifier::method_data)& method_data(
      const ::payments::mojom::PaymentHandlerModifierPtr& input) {
    return input->method_data;
  }

  static bool Read(::payments::mojom::PaymentHandlerModifier::DataView input, ::payments::mojom::PaymentHandlerModifierPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentMethodChangeResponse::DataView,
                                         ::payments::mojom::PaymentMethodChangeResponsePtr> {
  static bool IsNull(const ::payments::mojom::PaymentMethodChangeResponsePtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentMethodChangeResponsePtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentMethodChangeResponse::total)& total(
      const ::payments::mojom::PaymentMethodChangeResponsePtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::PaymentMethodChangeResponse::modifiers)& modifiers(
      const ::payments::mojom::PaymentMethodChangeResponsePtr& input) {
    return input->modifiers;
  }

  static const decltype(::payments::mojom::PaymentMethodChangeResponse::error)& error(
      const ::payments::mojom::PaymentMethodChangeResponsePtr& input) {
    return input->error;
  }

  static const decltype(::payments::mojom::PaymentMethodChangeResponse::stringified_payment_method_errors)& stringified_payment_method_errors(
      const ::payments::mojom::PaymentMethodChangeResponsePtr& input) {
    return input->stringified_payment_method_errors;
  }

  static bool Read(::payments::mojom::PaymentMethodChangeResponse::DataView input, ::payments::mojom::PaymentMethodChangeResponsePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_H_