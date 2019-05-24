// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom-blink-forward.h"
#include "components/payments/mojom/payment_request_data.mojom-blink.h"

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
struct payments_mojom_internal_PaymentErrorReason_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::PaymentErrorReason& value) {
    using utype = std::underlying_type<::payments::mojom::PaymentErrorReason>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::PaymentErrorReason& left, const ::payments::mojom::PaymentErrorReason& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::PaymentErrorReason>
    : public GenericHashTraits<::payments::mojom::PaymentErrorReason> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::PaymentErrorReason& value) {
    return value == static_cast<::payments::mojom::PaymentErrorReason>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::PaymentErrorReason& slot, bool) {
    slot = static_cast<::payments::mojom::PaymentErrorReason>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::PaymentErrorReason& value) {
    return value == static_cast<::payments::mojom::PaymentErrorReason>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_CanMakePaymentQueryResult_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::CanMakePaymentQueryResult& value) {
    using utype = std::underlying_type<::payments::mojom::CanMakePaymentQueryResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::CanMakePaymentQueryResult& left, const ::payments::mojom::CanMakePaymentQueryResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::CanMakePaymentQueryResult>
    : public GenericHashTraits<::payments::mojom::CanMakePaymentQueryResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::CanMakePaymentQueryResult& value) {
    return value == static_cast<::payments::mojom::CanMakePaymentQueryResult>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::CanMakePaymentQueryResult& slot, bool) {
    slot = static_cast<::payments::mojom::CanMakePaymentQueryResult>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::CanMakePaymentQueryResult& value) {
    return value == static_cast<::payments::mojom::CanMakePaymentQueryResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_HasEnrolledInstrumentQueryResult_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::HasEnrolledInstrumentQueryResult& value) {
    using utype = std::underlying_type<::payments::mojom::HasEnrolledInstrumentQueryResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::HasEnrolledInstrumentQueryResult& left, const ::payments::mojom::HasEnrolledInstrumentQueryResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::HasEnrolledInstrumentQueryResult>
    : public GenericHashTraits<::payments::mojom::HasEnrolledInstrumentQueryResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::HasEnrolledInstrumentQueryResult& value) {
    return value == static_cast<::payments::mojom::HasEnrolledInstrumentQueryResult>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::HasEnrolledInstrumentQueryResult& slot, bool) {
    slot = static_cast<::payments::mojom::HasEnrolledInstrumentQueryResult>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::HasEnrolledInstrumentQueryResult& value) {
    return value == static_cast<::payments::mojom::HasEnrolledInstrumentQueryResult>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_AndroidPayEnvironment_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::AndroidPayEnvironment& value) {
    using utype = std::underlying_type<::payments::mojom::AndroidPayEnvironment>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::AndroidPayEnvironment& left, const ::payments::mojom::AndroidPayEnvironment& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::AndroidPayEnvironment>
    : public GenericHashTraits<::payments::mojom::AndroidPayEnvironment> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::AndroidPayEnvironment& value) {
    return value == static_cast<::payments::mojom::AndroidPayEnvironment>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::AndroidPayEnvironment& slot, bool) {
    slot = static_cast<::payments::mojom::AndroidPayEnvironment>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::AndroidPayEnvironment& value) {
    return value == static_cast<::payments::mojom::AndroidPayEnvironment>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_BasicCardNetwork_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::BasicCardNetwork& value) {
    using utype = std::underlying_type<::payments::mojom::BasicCardNetwork>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::BasicCardNetwork& left, const ::payments::mojom::BasicCardNetwork& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::BasicCardNetwork>
    : public GenericHashTraits<::payments::mojom::BasicCardNetwork> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::BasicCardNetwork& value) {
    return value == static_cast<::payments::mojom::BasicCardNetwork>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::BasicCardNetwork& slot, bool) {
    slot = static_cast<::payments::mojom::BasicCardNetwork>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::BasicCardNetwork& value) {
    return value == static_cast<::payments::mojom::BasicCardNetwork>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_BasicCardType_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::BasicCardType& value) {
    using utype = std::underlying_type<::payments::mojom::BasicCardType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::BasicCardType& left, const ::payments::mojom::BasicCardType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::BasicCardType>
    : public GenericHashTraits<::payments::mojom::BasicCardType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::BasicCardType& value) {
    return value == static_cast<::payments::mojom::BasicCardType>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::BasicCardType& slot, bool) {
    slot = static_cast<::payments::mojom::BasicCardType>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::BasicCardType& value) {
    return value == static_cast<::payments::mojom::BasicCardType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_PaymentShippingType_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::PaymentShippingType& value) {
    using utype = std::underlying_type<::payments::mojom::PaymentShippingType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::PaymentShippingType& left, const ::payments::mojom::PaymentShippingType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::PaymentShippingType>
    : public GenericHashTraits<::payments::mojom::PaymentShippingType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::PaymentShippingType& value) {
    return value == static_cast<::payments::mojom::PaymentShippingType>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::PaymentShippingType& slot, bool) {
    slot = static_cast<::payments::mojom::PaymentShippingType>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::PaymentShippingType& value) {
    return value == static_cast<::payments::mojom::PaymentShippingType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_PaymentComplete_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::PaymentComplete& value) {
    using utype = std::underlying_type<::payments::mojom::PaymentComplete>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::PaymentComplete& left, const ::payments::mojom::PaymentComplete& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::PaymentComplete>
    : public GenericHashTraits<::payments::mojom::PaymentComplete> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::payments::mojom::PaymentComplete& value) {
    return value == static_cast<::payments::mojom::PaymentComplete>(-1000000);
  }
  static void ConstructDeletedValue(::payments::mojom::PaymentComplete& slot, bool) {
    slot = static_cast<::payments::mojom::PaymentComplete>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::PaymentComplete& value) {
    return value == static_cast<::payments::mojom::PaymentComplete>(-1000001);
  }
};
}  // namespace WTF


namespace payments {
namespace mojom {
namespace blink {

class PaymentRequestClientProxy;

template <typename ImplRefTraits>
class PaymentRequestClientStub;

class PaymentRequestClientRequestValidator;


class PLATFORM_EXPORT PaymentRequestClient
    : public PaymentRequestClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PaymentRequestClientInterfaceBase;
  using Proxy_ = PaymentRequestClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = PaymentRequestClientStub<ImplRefTraits>;

  using RequestValidator_ = PaymentRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnPaymentMethodChangeMinVersion = 0,
    kOnShippingAddressChangeMinVersion = 0,
    kOnShippingOptionChangeMinVersion = 0,
    kOnPayerDetailChangeMinVersion = 0,
    kOnPaymentResponseMinVersion = 0,
    kOnErrorMinVersion = 0,
    kOnCompleteMinVersion = 0,
    kOnAbortMinVersion = 0,
    kOnCanMakePaymentMinVersion = 0,
    kOnHasEnrolledInstrumentMinVersion = 0,
    kWarnNoFaviconMinVersion = 0,
  };
  virtual ~PaymentRequestClient() {}

  
  virtual void OnPaymentMethodChange(const WTF::String& method_name, const WTF::String& stringified_details) = 0;

  
  virtual void OnShippingAddressChange(::payments::mojom::blink::PaymentAddressPtr address) = 0;

  
  virtual void OnShippingOptionChange(const WTF::String& shipping_option_id) = 0;

  
  virtual void OnPayerDetailChange(PayerDetailPtr detail) = 0;

  
  virtual void OnPaymentResponse(PaymentResponsePtr response) = 0;

  
  virtual void OnError(PaymentErrorReason error) = 0;

  
  virtual void OnComplete() = 0;

  
  virtual void OnAbort(bool aborted_successfully) = 0;

  
  virtual void OnCanMakePayment(CanMakePaymentQueryResult result) = 0;

  
  virtual void OnHasEnrolledInstrument(HasEnrolledInstrumentQueryResult result) = 0;

  
  virtual void WarnNoFavicon() = 0;
};

class PaymentRequestProxy;

template <typename ImplRefTraits>
class PaymentRequestStub;

class PaymentRequestRequestValidator;


class PLATFORM_EXPORT PaymentRequest
    : public PaymentRequestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PaymentRequestInterfaceBase;
  using Proxy_ = PaymentRequestProxy;

  template <typename ImplRefTraits>
  using Stub_ = PaymentRequestStub<ImplRefTraits>;

  using RequestValidator_ = PaymentRequestRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInitMinVersion = 0,
    kShowMinVersion = 0,
    kUpdateWithMinVersion = 0,
    kNoUpdatedPaymentDetailsMinVersion = 0,
    kAbortMinVersion = 0,
    kCompleteMinVersion = 0,
    kRetryMinVersion = 0,
    kCanMakePaymentMinVersion = 0,
    kHasEnrolledInstrumentMinVersion = 0,
  };
  virtual ~PaymentRequest() {}

  
  virtual void Init(PaymentRequestClientPtr client, WTF::Vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) = 0;

  
  virtual void Show(bool is_user_gesture, bool wait_for_updated_details) = 0;

  
  virtual void UpdateWith(PaymentDetailsPtr details) = 0;

  
  virtual void NoUpdatedPaymentDetails() = 0;

  
  virtual void Abort() = 0;

  
  virtual void Complete(PaymentComplete result) = 0;

  
  virtual void Retry(::payments::mojom::blink::PaymentValidationErrorsPtr errors) = 0;

  
  virtual void CanMakePayment(bool legacy_mode) = 0;

  
  virtual void HasEnrolledInstrument(bool per_method_quota) = 0;
};

class PLATFORM_EXPORT PaymentRequestClientProxy
    : public PaymentRequestClient {
 public:
  using InterfaceType = PaymentRequestClient;

  explicit PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPaymentMethodChange(const WTF::String& method_name, const WTF::String& stringified_details) final;
  void OnShippingAddressChange(::payments::mojom::blink::PaymentAddressPtr address) final;
  void OnShippingOptionChange(const WTF::String& shipping_option_id) final;
  void OnPayerDetailChange(PayerDetailPtr detail) final;
  void OnPaymentResponse(PaymentResponsePtr response) final;
  void OnError(PaymentErrorReason error) final;
  void OnComplete() final;
  void OnAbort(bool aborted_successfully) final;
  void OnCanMakePayment(CanMakePaymentQueryResult result) final;
  void OnHasEnrolledInstrument(HasEnrolledInstrumentQueryResult result) final;
  void WarnNoFavicon() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT PaymentRequestProxy
    : public PaymentRequest {
 public:
  using InterfaceType = PaymentRequest;

  explicit PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver);
  void Init(PaymentRequestClientPtr client, WTF::Vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) final;
  void Show(bool is_user_gesture, bool wait_for_updated_details) final;
  void UpdateWith(PaymentDetailsPtr details) final;
  void NoUpdatedPaymentDetails() final;
  void Abort() final;
  void Complete(PaymentComplete result) final;
  void Retry(::payments::mojom::blink::PaymentValidationErrorsPtr errors) final;
  void CanMakePayment(bool legacy_mode) final;
  void HasEnrolledInstrument(bool per_method_quota) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT PaymentRequestClientStubDispatch {
 public:
  static bool Accept(PaymentRequestClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PaymentRequestClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PaymentRequestClient>>
class PaymentRequestClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PaymentRequestClientStub() {}
  ~PaymentRequestClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentRequestClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentRequestClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PaymentRequestStubDispatch {
 public:
  static bool Accept(PaymentRequest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PaymentRequest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PaymentRequest>>
class PaymentRequestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PaymentRequestStub() {}
  ~PaymentRequestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentRequestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentRequestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PaymentRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PaymentRequestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class PLATFORM_EXPORT PayerDetail {
 public:
  using DataView = PayerDetailDataView;
  using Data_ = internal::PayerDetail_Data;

  template <typename... Args>
  static PayerDetailPtr New(Args&&... args) {
    return PayerDetailPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PayerDetailPtr From(const U& u) {
    return mojo::TypeConverter<PayerDetailPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PayerDetail>::Convert(*this);
  }


  PayerDetail();

  PayerDetail(
      const WTF::String& email,
      const WTF::String& name,
      const WTF::String& phone);

  ~PayerDetail();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PayerDetailPtr>
  PayerDetailPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PayerDetail>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PayerDetail::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PayerDetail::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PayerDetail_UnserializedMessageContext<
            UserType, PayerDetail::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PayerDetail::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PayerDetail::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PayerDetail_UnserializedMessageContext<
            UserType, PayerDetail::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PayerDetail::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String email;
  
  WTF::String name;
  
  WTF::String phone;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};













class PLATFORM_EXPORT PaymentResponse {
 public:
  using DataView = PaymentResponseDataView;
  using Data_ = internal::PaymentResponse_Data;

  template <typename... Args>
  static PaymentResponsePtr New(Args&&... args) {
    return PaymentResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentResponsePtr From(const U& u) {
    return mojo::TypeConverter<PaymentResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentResponse>::Convert(*this);
  }


  PaymentResponse();

  PaymentResponse(
      const WTF::String& method_name,
      const WTF::String& stringified_details,
      ::payments::mojom::blink::PaymentAddressPtr shipping_address,
      const WTF::String& shipping_option,
      PayerDetailPtr payer);

  ~PaymentResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentResponsePtr>
  PaymentResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentResponse::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentResponse_UnserializedMessageContext<
            UserType, PaymentResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentResponse_UnserializedMessageContext<
            UserType, PaymentResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String method_name;
  
  WTF::String stringified_details;
  
  ::payments::mojom::blink::PaymentAddressPtr shipping_address;
  
  WTF::String shipping_option;
  
  PayerDetailPtr payer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentResponse);
};






class PLATFORM_EXPORT PaymentItem {
 public:
  using DataView = PaymentItemDataView;
  using Data_ = internal::PaymentItem_Data;

  template <typename... Args>
  static PaymentItemPtr New(Args&&... args) {
    return PaymentItemPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentItemPtr From(const U& u) {
    return mojo::TypeConverter<PaymentItemPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentItem>::Convert(*this);
  }


  PaymentItem();

  PaymentItem(
      const WTF::String& label,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr amount,
      bool pending);

  ~PaymentItem();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentItemPtr>
  PaymentItemPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentItem>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentItem::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentItem::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentItem_UnserializedMessageContext<
            UserType, PaymentItem::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentItem::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentItem::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentItem_UnserializedMessageContext<
            UserType, PaymentItem::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentItem::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String label;
  
  ::payments::mojom::blink::PaymentCurrencyAmountPtr amount;
  
  bool pending;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentItem);
};





class PLATFORM_EXPORT PaymentShippingOption {
 public:
  using DataView = PaymentShippingOptionDataView;
  using Data_ = internal::PaymentShippingOption_Data;

  template <typename... Args>
  static PaymentShippingOptionPtr New(Args&&... args) {
    return PaymentShippingOptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentShippingOptionPtr From(const U& u) {
    return mojo::TypeConverter<PaymentShippingOptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentShippingOption>::Convert(*this);
  }


  PaymentShippingOption();

  PaymentShippingOption(
      const WTF::String& id,
      const WTF::String& label,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr amount,
      bool selected);

  ~PaymentShippingOption();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentShippingOptionPtr>
  PaymentShippingOptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentShippingOption>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentShippingOption::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentShippingOption::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentShippingOption_UnserializedMessageContext<
            UserType, PaymentShippingOption::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentShippingOption::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentShippingOption::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentShippingOption_UnserializedMessageContext<
            UserType, PaymentShippingOption::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentShippingOption::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String id;
  
  WTF::String label;
  
  ::payments::mojom::blink::PaymentCurrencyAmountPtr amount;
  
  bool selected;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentShippingOption);
};





class PLATFORM_EXPORT PaymentMethodData {
 public:
  using DataView = PaymentMethodDataDataView;
  using Data_ = internal::PaymentMethodData_Data;

  template <typename... Args>
  static PaymentMethodDataPtr New(Args&&... args) {
    return PaymentMethodDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentMethodDataPtr From(const U& u) {
    return mojo::TypeConverter<PaymentMethodDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentMethodData>::Convert(*this);
  }


  PaymentMethodData();

  PaymentMethodData(
      const WTF::String& supported_method,
      const WTF::String& stringified_data,
      AndroidPayEnvironment environment,
      int32_t min_google_play_services_version,
      int32_t api_version,
      const WTF::Vector<BasicCardNetwork>& supported_networks,
      const WTF::Vector<BasicCardType>& supported_types);

  ~PaymentMethodData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentMethodDataPtr>
  PaymentMethodDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentMethodData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentMethodData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentMethodData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentMethodData_UnserializedMessageContext<
            UserType, PaymentMethodData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentMethodData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentMethodData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentMethodData_UnserializedMessageContext<
            UserType, PaymentMethodData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentMethodData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String supported_method;
  
  WTF::String stringified_data;
  
  AndroidPayEnvironment environment;
  
  int32_t min_google_play_services_version;
  
  int32_t api_version;
  
  WTF::Vector<BasicCardNetwork> supported_networks;
  
  WTF::Vector<BasicCardType> supported_types;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT PaymentDetailsModifier {
 public:
  using DataView = PaymentDetailsModifierDataView;
  using Data_ = internal::PaymentDetailsModifier_Data;

  template <typename... Args>
  static PaymentDetailsModifierPtr New(Args&&... args) {
    return PaymentDetailsModifierPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentDetailsModifierPtr From(const U& u) {
    return mojo::TypeConverter<PaymentDetailsModifierPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentDetailsModifier>::Convert(*this);
  }


  PaymentDetailsModifier();

  PaymentDetailsModifier(
      PaymentItemPtr total,
      WTF::Vector<PaymentItemPtr> additional_display_items,
      PaymentMethodDataPtr method_data);

  ~PaymentDetailsModifier();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentDetailsModifierPtr>
  PaymentDetailsModifierPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentDetailsModifier>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentDetailsModifier::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentDetailsModifier::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentDetailsModifier_UnserializedMessageContext<
            UserType, PaymentDetailsModifier::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentDetailsModifier::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentDetailsModifier::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentDetailsModifier_UnserializedMessageContext<
            UserType, PaymentDetailsModifier::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentDetailsModifier::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PaymentItemPtr total;
  
  WTF::Vector<PaymentItemPtr> additional_display_items;
  
  PaymentMethodDataPtr method_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentDetailsModifier);
};





class PLATFORM_EXPORT PaymentDetails {
 public:
  using DataView = PaymentDetailsDataView;
  using Data_ = internal::PaymentDetails_Data;

  template <typename... Args>
  static PaymentDetailsPtr New(Args&&... args) {
    return PaymentDetailsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentDetailsPtr From(const U& u) {
    return mojo::TypeConverter<PaymentDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentDetails>::Convert(*this);
  }


  PaymentDetails();

  PaymentDetails(
      PaymentItemPtr total,
      base::Optional<WTF::Vector<PaymentItemPtr>> display_items,
      base::Optional<WTF::Vector<PaymentShippingOptionPtr>> shipping_options,
      base::Optional<WTF::Vector<PaymentDetailsModifierPtr>> modifiers,
      const WTF::String& error,
      ::payments::mojom::blink::AddressErrorsPtr shipping_address_errors,
      const WTF::String& id,
      const WTF::String& stringified_payment_method_errors);

  ~PaymentDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentDetailsPtr>
  PaymentDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentDetails::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentDetails_UnserializedMessageContext<
            UserType, PaymentDetails::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentDetails::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentDetails_UnserializedMessageContext<
            UserType, PaymentDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentDetails::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PaymentItemPtr total;
  
  base::Optional<WTF::Vector<PaymentItemPtr>> display_items;
  
  base::Optional<WTF::Vector<PaymentShippingOptionPtr>> shipping_options;
  
  base::Optional<WTF::Vector<PaymentDetailsModifierPtr>> modifiers;
  
  WTF::String error;
  
  ::payments::mojom::blink::AddressErrorsPtr shipping_address_errors;
  
  WTF::String id;
  
  WTF::String stringified_payment_method_errors;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentDetails);
};





class PLATFORM_EXPORT PaymentOptions {
 public:
  using DataView = PaymentOptionsDataView;
  using Data_ = internal::PaymentOptions_Data;

  template <typename... Args>
  static PaymentOptionsPtr New(Args&&... args) {
    return PaymentOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PaymentOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentOptions>::Convert(*this);
  }


  PaymentOptions();

  PaymentOptions(
      bool request_payer_name,
      bool request_payer_email,
      bool request_payer_phone,
      bool request_shipping,
      PaymentShippingType shipping_type);

  ~PaymentOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentOptionsPtr>
  PaymentOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentOptions_UnserializedMessageContext<
            UserType, PaymentOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentOptions_UnserializedMessageContext<
            UserType, PaymentOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool request_payer_name;
  
  bool request_payer_email;
  
  bool request_payer_phone;
  
  bool request_shipping;
  
  PaymentShippingType shipping_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PaymentResponsePtr PaymentResponse::Clone() const {
  return New(
      mojo::Clone(method_name),
      mojo::Clone(stringified_details),
      mojo::Clone(shipping_address),
      mojo::Clone(shipping_option),
      mojo::Clone(payer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentResponse>::value>::type*>
bool PaymentResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->method_name, other_struct.method_name))
    return false;
  if (!mojo::Equals(this->stringified_details, other_struct.stringified_details))
    return false;
  if (!mojo::Equals(this->shipping_address, other_struct.shipping_address))
    return false;
  if (!mojo::Equals(this->shipping_option, other_struct.shipping_option))
    return false;
  if (!mojo::Equals(this->payer, other_struct.payer))
    return false;
  return true;
}
template <typename StructPtrType>
PayerDetailPtr PayerDetail::Clone() const {
  return New(
      mojo::Clone(email),
      mojo::Clone(name),
      mojo::Clone(phone)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PayerDetail>::value>::type*>
bool PayerDetail::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->email, other_struct.email))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->phone, other_struct.phone))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentItemPtr PaymentItem::Clone() const {
  return New(
      mojo::Clone(label),
      mojo::Clone(amount),
      mojo::Clone(pending)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentItem>::value>::type*>
bool PaymentItem::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->amount, other_struct.amount))
    return false;
  if (!mojo::Equals(this->pending, other_struct.pending))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentShippingOptionPtr PaymentShippingOption::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(label),
      mojo::Clone(amount),
      mojo::Clone(selected)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentShippingOption>::value>::type*>
bool PaymentShippingOption::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->amount, other_struct.amount))
    return false;
  if (!mojo::Equals(this->selected, other_struct.selected))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentMethodDataPtr PaymentMethodData::Clone() const {
  return New(
      mojo::Clone(supported_method),
      mojo::Clone(stringified_data),
      mojo::Clone(environment),
      mojo::Clone(min_google_play_services_version),
      mojo::Clone(api_version),
      mojo::Clone(supported_networks),
      mojo::Clone(supported_types)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentMethodData>::value>::type*>
bool PaymentMethodData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->supported_method, other_struct.supported_method))
    return false;
  if (!mojo::Equals(this->stringified_data, other_struct.stringified_data))
    return false;
  if (!mojo::Equals(this->environment, other_struct.environment))
    return false;
  if (!mojo::Equals(this->min_google_play_services_version, other_struct.min_google_play_services_version))
    return false;
  if (!mojo::Equals(this->api_version, other_struct.api_version))
    return false;
  if (!mojo::Equals(this->supported_networks, other_struct.supported_networks))
    return false;
  if (!mojo::Equals(this->supported_types, other_struct.supported_types))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentDetailsModifierPtr PaymentDetailsModifier::Clone() const {
  return New(
      mojo::Clone(total),
      mojo::Clone(additional_display_items),
      mojo::Clone(method_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentDetailsModifier>::value>::type*>
bool PaymentDetailsModifier::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->total, other_struct.total))
    return false;
  if (!mojo::Equals(this->additional_display_items, other_struct.additional_display_items))
    return false;
  if (!mojo::Equals(this->method_data, other_struct.method_data))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentDetailsPtr PaymentDetails::Clone() const {
  return New(
      mojo::Clone(total),
      mojo::Clone(display_items),
      mojo::Clone(shipping_options),
      mojo::Clone(modifiers),
      mojo::Clone(error),
      mojo::Clone(shipping_address_errors),
      mojo::Clone(id),
      mojo::Clone(stringified_payment_method_errors)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentDetails>::value>::type*>
bool PaymentDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->total, other_struct.total))
    return false;
  if (!mojo::Equals(this->display_items, other_struct.display_items))
    return false;
  if (!mojo::Equals(this->shipping_options, other_struct.shipping_options))
    return false;
  if (!mojo::Equals(this->modifiers, other_struct.modifiers))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->shipping_address_errors, other_struct.shipping_address_errors))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->stringified_payment_method_errors, other_struct.stringified_payment_method_errors))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentOptionsPtr PaymentOptions::Clone() const {
  return New(
      mojo::Clone(request_payer_name),
      mojo::Clone(request_payer_email),
      mojo::Clone(request_payer_phone),
      mojo::Clone(request_shipping),
      mojo::Clone(shipping_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentOptions>::value>::type*>
bool PaymentOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request_payer_name, other_struct.request_payer_name))
    return false;
  if (!mojo::Equals(this->request_payer_email, other_struct.request_payer_email))
    return false;
  if (!mojo::Equals(this->request_payer_phone, other_struct.request_payer_phone))
    return false;
  if (!mojo::Equals(this->request_shipping, other_struct.request_shipping))
    return false;
  if (!mojo::Equals(this->shipping_type, other_struct.shipping_type))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentResponse::DataView,
                                         ::payments::mojom::blink::PaymentResponsePtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentResponsePtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentResponsePtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentResponse::method_name)& method_name(
      const ::payments::mojom::blink::PaymentResponsePtr& input) {
    return input->method_name;
  }

  static const decltype(::payments::mojom::blink::PaymentResponse::stringified_details)& stringified_details(
      const ::payments::mojom::blink::PaymentResponsePtr& input) {
    return input->stringified_details;
  }

  static const decltype(::payments::mojom::blink::PaymentResponse::shipping_address)& shipping_address(
      const ::payments::mojom::blink::PaymentResponsePtr& input) {
    return input->shipping_address;
  }

  static const decltype(::payments::mojom::blink::PaymentResponse::shipping_option)& shipping_option(
      const ::payments::mojom::blink::PaymentResponsePtr& input) {
    return input->shipping_option;
  }

  static const decltype(::payments::mojom::blink::PaymentResponse::payer)& payer(
      const ::payments::mojom::blink::PaymentResponsePtr& input) {
    return input->payer;
  }

  static bool Read(::payments::mojom::blink::PaymentResponse::DataView input, ::payments::mojom::blink::PaymentResponsePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PayerDetail::DataView,
                                         ::payments::mojom::blink::PayerDetailPtr> {
  static bool IsNull(const ::payments::mojom::blink::PayerDetailPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PayerDetailPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PayerDetail::email)& email(
      const ::payments::mojom::blink::PayerDetailPtr& input) {
    return input->email;
  }

  static const decltype(::payments::mojom::blink::PayerDetail::name)& name(
      const ::payments::mojom::blink::PayerDetailPtr& input) {
    return input->name;
  }

  static const decltype(::payments::mojom::blink::PayerDetail::phone)& phone(
      const ::payments::mojom::blink::PayerDetailPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::blink::PayerDetail::DataView input, ::payments::mojom::blink::PayerDetailPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentItem::DataView,
                                         ::payments::mojom::blink::PaymentItemPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentItemPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentItemPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentItem::label)& label(
      const ::payments::mojom::blink::PaymentItemPtr& input) {
    return input->label;
  }

  static const decltype(::payments::mojom::blink::PaymentItem::amount)& amount(
      const ::payments::mojom::blink::PaymentItemPtr& input) {
    return input->amount;
  }

  static decltype(::payments::mojom::blink::PaymentItem::pending) pending(
      const ::payments::mojom::blink::PaymentItemPtr& input) {
    return input->pending;
  }

  static bool Read(::payments::mojom::blink::PaymentItem::DataView input, ::payments::mojom::blink::PaymentItemPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentShippingOption::DataView,
                                         ::payments::mojom::blink::PaymentShippingOptionPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentShippingOptionPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentShippingOptionPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentShippingOption::id)& id(
      const ::payments::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->id;
  }

  static const decltype(::payments::mojom::blink::PaymentShippingOption::label)& label(
      const ::payments::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->label;
  }

  static const decltype(::payments::mojom::blink::PaymentShippingOption::amount)& amount(
      const ::payments::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->amount;
  }

  static decltype(::payments::mojom::blink::PaymentShippingOption::selected) selected(
      const ::payments::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->selected;
  }

  static bool Read(::payments::mojom::blink::PaymentShippingOption::DataView input, ::payments::mojom::blink::PaymentShippingOptionPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentMethodData::DataView,
                                         ::payments::mojom::blink::PaymentMethodDataPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentMethodDataPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentMethodDataPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentMethodData::supported_method)& supported_method(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->supported_method;
  }

  static const decltype(::payments::mojom::blink::PaymentMethodData::stringified_data)& stringified_data(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->stringified_data;
  }

  static decltype(::payments::mojom::blink::PaymentMethodData::environment) environment(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->environment;
  }

  static decltype(::payments::mojom::blink::PaymentMethodData::min_google_play_services_version) min_google_play_services_version(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->min_google_play_services_version;
  }

  static decltype(::payments::mojom::blink::PaymentMethodData::api_version) api_version(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->api_version;
  }

  static const decltype(::payments::mojom::blink::PaymentMethodData::supported_networks)& supported_networks(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->supported_networks;
  }

  static const decltype(::payments::mojom::blink::PaymentMethodData::supported_types)& supported_types(
      const ::payments::mojom::blink::PaymentMethodDataPtr& input) {
    return input->supported_types;
  }

  static bool Read(::payments::mojom::blink::PaymentMethodData::DataView input, ::payments::mojom::blink::PaymentMethodDataPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentDetailsModifier::DataView,
                                         ::payments::mojom::blink::PaymentDetailsModifierPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentDetailsModifierPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentDetailsModifierPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentDetailsModifier::total)& total(
      const ::payments::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::blink::PaymentDetailsModifier::additional_display_items)& additional_display_items(
      const ::payments::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->additional_display_items;
  }

  static const decltype(::payments::mojom::blink::PaymentDetailsModifier::method_data)& method_data(
      const ::payments::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->method_data;
  }

  static bool Read(::payments::mojom::blink::PaymentDetailsModifier::DataView input, ::payments::mojom::blink::PaymentDetailsModifierPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentDetails::DataView,
                                         ::payments::mojom::blink::PaymentDetailsPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentDetailsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentDetailsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentDetails::total)& total(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::display_items)& display_items(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->display_items;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::shipping_options)& shipping_options(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->shipping_options;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::modifiers)& modifiers(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->modifiers;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::error)& error(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->error;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::shipping_address_errors)& shipping_address_errors(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->shipping_address_errors;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::id)& id(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->id;
  }

  static const decltype(::payments::mojom::blink::PaymentDetails::stringified_payment_method_errors)& stringified_payment_method_errors(
      const ::payments::mojom::blink::PaymentDetailsPtr& input) {
    return input->stringified_payment_method_errors;
  }

  static bool Read(::payments::mojom::blink::PaymentDetails::DataView input, ::payments::mojom::blink::PaymentDetailsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PaymentOptions::DataView,
                                         ::payments::mojom::blink::PaymentOptionsPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentOptionsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentOptionsPtr* output) { output->reset(); }

  static decltype(::payments::mojom::blink::PaymentOptions::request_payer_name) request_payer_name(
      const ::payments::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_payer_name;
  }

  static decltype(::payments::mojom::blink::PaymentOptions::request_payer_email) request_payer_email(
      const ::payments::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_payer_email;
  }

  static decltype(::payments::mojom::blink::PaymentOptions::request_payer_phone) request_payer_phone(
      const ::payments::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_payer_phone;
  }

  static decltype(::payments::mojom::blink::PaymentOptions::request_shipping) request_shipping(
      const ::payments::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_shipping;
  }

  static decltype(::payments::mojom::blink::PaymentOptions::shipping_type) shipping_type(
      const ::payments::mojom::blink::PaymentOptionsPtr& input) {
    return input->shipping_type;
  }

  static bool Read(::payments::mojom::blink::PaymentOptions::DataView input, ::payments::mojom::blink::PaymentOptionsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_