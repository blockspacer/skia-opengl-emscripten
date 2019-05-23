// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_H_

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
#include "third_party/blink/public/mojom/payments/payment_request.mojom-forward.h"
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

class PaymentRequestClientProxy;

template <typename ImplRefTraits>
class PaymentRequestClientStub;

class PaymentRequestClientRequestValidator;


class BLINK_COMMON_EXPORT PaymentRequestClient
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

  
  virtual void OnPaymentMethodChange(const std::string& method_name, const std::string& stringified_details) = 0;

  
  virtual void OnShippingAddressChange(::payments::mojom::PaymentAddressPtr address) = 0;

  
  virtual void OnShippingOptionChange(const std::string& shipping_option_id) = 0;

  
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


class BLINK_COMMON_EXPORT PaymentRequest
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

  
  virtual void Init(PaymentRequestClientPtr client, std::vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) = 0;

  
  virtual void Show(bool is_user_gesture, bool wait_for_updated_details) = 0;

  
  virtual void UpdateWith(PaymentDetailsPtr details) = 0;

  
  virtual void NoUpdatedPaymentDetails() = 0;

  
  virtual void Abort() = 0;

  
  virtual void Complete(PaymentComplete result) = 0;

  
  virtual void Retry(::payments::mojom::PaymentValidationErrorsPtr errors) = 0;

  
  virtual void CanMakePayment(bool legacy_mode) = 0;

  
  virtual void HasEnrolledInstrument(bool per_method_quota) = 0;
};

class BLINK_COMMON_EXPORT PaymentRequestClientProxy
    : public PaymentRequestClient {
 public:
  using InterfaceType = PaymentRequestClient;

  explicit PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnPaymentMethodChange(const std::string& method_name, const std::string& stringified_details) final;
  void OnShippingAddressChange(::payments::mojom::PaymentAddressPtr address) final;
  void OnShippingOptionChange(const std::string& shipping_option_id) final;
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

class BLINK_COMMON_EXPORT PaymentRequestProxy
    : public PaymentRequest {
 public:
  using InterfaceType = PaymentRequest;

  explicit PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver);
  void Init(PaymentRequestClientPtr client, std::vector<PaymentMethodDataPtr> method_data, PaymentDetailsPtr details, PaymentOptionsPtr options) final;
  void Show(bool is_user_gesture, bool wait_for_updated_details) final;
  void UpdateWith(PaymentDetailsPtr details) final;
  void NoUpdatedPaymentDetails() final;
  void Abort() final;
  void Complete(PaymentComplete result) final;
  void Retry(::payments::mojom::PaymentValidationErrorsPtr errors) final;
  void CanMakePayment(bool legacy_mode) final;
  void HasEnrolledInstrument(bool per_method_quota) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PaymentRequestClientStubDispatch {
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
class BLINK_COMMON_EXPORT PaymentRequestStubDispatch {
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
class BLINK_COMMON_EXPORT PaymentRequestClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PaymentRequestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_COMMON_EXPORT PayerDetail {
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
      const base::Optional<std::string>& email,
      const base::Optional<std::string>& name,
      const base::Optional<std::string>& phone);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PayerDetail::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  base::Optional<std::string> email;
  
  base::Optional<std::string> name;
  
  base::Optional<std::string> phone;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};













class BLINK_COMMON_EXPORT PaymentResponse {
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
      const std::string& method_name,
      const std::string& stringified_details,
      ::payments::mojom::PaymentAddressPtr shipping_address,
      const base::Optional<std::string>& shipping_option,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentResponse::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string method_name;
  
  std::string stringified_details;
  
  ::payments::mojom::PaymentAddressPtr shipping_address;
  
  base::Optional<std::string> shipping_option;
  
  PayerDetailPtr payer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentResponse);
};






class BLINK_COMMON_EXPORT PaymentItem {
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
      const std::string& label,
      ::payments::mojom::PaymentCurrencyAmountPtr amount,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentItem::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string label;
  
  ::payments::mojom::PaymentCurrencyAmountPtr amount;
  
  bool pending;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentItem);
};





class BLINK_COMMON_EXPORT PaymentShippingOption {
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
      const std::string& id,
      const std::string& label,
      ::payments::mojom::PaymentCurrencyAmountPtr amount,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentShippingOption::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string id;
  
  std::string label;
  
  ::payments::mojom::PaymentCurrencyAmountPtr amount;
  
  bool selected;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentShippingOption);
};





class BLINK_COMMON_EXPORT PaymentMethodData {
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
      const std::string& supported_method,
      const std::string& stringified_data,
      AndroidPayEnvironment environment,
      int32_t min_google_play_services_version,
      int32_t api_version,
      const std::vector<BasicCardNetwork>& supported_networks,
      const std::vector<BasicCardType>& supported_types);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentMethodData::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string supported_method;
  
  std::string stringified_data;
  
  AndroidPayEnvironment environment;
  
  int32_t min_google_play_services_version;
  
  int32_t api_version;
  
  std::vector<BasicCardNetwork> supported_networks;
  
  std::vector<BasicCardType> supported_types;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT PaymentDetailsModifier {
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
      std::vector<PaymentItemPtr> additional_display_items,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentDetailsModifier::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  std::vector<PaymentItemPtr> additional_display_items;
  
  PaymentMethodDataPtr method_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentDetailsModifier);
};





class BLINK_COMMON_EXPORT PaymentDetails {
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
      base::Optional<std::vector<PaymentItemPtr>> display_items,
      base::Optional<std::vector<PaymentShippingOptionPtr>> shipping_options,
      base::Optional<std::vector<PaymentDetailsModifierPtr>> modifiers,
      const std::string& error,
      ::payments::mojom::AddressErrorsPtr shipping_address_errors,
      const base::Optional<std::string>& id,
      const base::Optional<std::string>& stringified_payment_method_errors);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentDetails::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  base::Optional<std::vector<PaymentItemPtr>> display_items;
  
  base::Optional<std::vector<PaymentShippingOptionPtr>> shipping_options;
  
  base::Optional<std::vector<PaymentDetailsModifierPtr>> modifiers;
  
  std::string error;
  
  ::payments::mojom::AddressErrorsPtr shipping_address_errors;
  
  base::Optional<std::string> id;
  
  base::Optional<std::string> stringified_payment_method_errors;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentDetails);
};





class BLINK_COMMON_EXPORT PaymentOptions {
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentOptions::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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


}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentResponse::DataView,
                                         ::payments::mojom::PaymentResponsePtr> {
  static bool IsNull(const ::payments::mojom::PaymentResponsePtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentResponsePtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentResponse::method_name)& method_name(
      const ::payments::mojom::PaymentResponsePtr& input) {
    return input->method_name;
  }

  static const decltype(::payments::mojom::PaymentResponse::stringified_details)& stringified_details(
      const ::payments::mojom::PaymentResponsePtr& input) {
    return input->stringified_details;
  }

  static const decltype(::payments::mojom::PaymentResponse::shipping_address)& shipping_address(
      const ::payments::mojom::PaymentResponsePtr& input) {
    return input->shipping_address;
  }

  static const decltype(::payments::mojom::PaymentResponse::shipping_option)& shipping_option(
      const ::payments::mojom::PaymentResponsePtr& input) {
    return input->shipping_option;
  }

  static const decltype(::payments::mojom::PaymentResponse::payer)& payer(
      const ::payments::mojom::PaymentResponsePtr& input) {
    return input->payer;
  }

  static bool Read(::payments::mojom::PaymentResponse::DataView input, ::payments::mojom::PaymentResponsePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PayerDetail::DataView,
                                         ::payments::mojom::PayerDetailPtr> {
  static bool IsNull(const ::payments::mojom::PayerDetailPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PayerDetailPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PayerDetail::email)& email(
      const ::payments::mojom::PayerDetailPtr& input) {
    return input->email;
  }

  static const decltype(::payments::mojom::PayerDetail::name)& name(
      const ::payments::mojom::PayerDetailPtr& input) {
    return input->name;
  }

  static const decltype(::payments::mojom::PayerDetail::phone)& phone(
      const ::payments::mojom::PayerDetailPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::PayerDetail::DataView input, ::payments::mojom::PayerDetailPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentItem::DataView,
                                         ::payments::mojom::PaymentItemPtr> {
  static bool IsNull(const ::payments::mojom::PaymentItemPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentItemPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentItem::label)& label(
      const ::payments::mojom::PaymentItemPtr& input) {
    return input->label;
  }

  static const decltype(::payments::mojom::PaymentItem::amount)& amount(
      const ::payments::mojom::PaymentItemPtr& input) {
    return input->amount;
  }

  static decltype(::payments::mojom::PaymentItem::pending) pending(
      const ::payments::mojom::PaymentItemPtr& input) {
    return input->pending;
  }

  static bool Read(::payments::mojom::PaymentItem::DataView input, ::payments::mojom::PaymentItemPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentShippingOption::DataView,
                                         ::payments::mojom::PaymentShippingOptionPtr> {
  static bool IsNull(const ::payments::mojom::PaymentShippingOptionPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentShippingOptionPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentShippingOption::id)& id(
      const ::payments::mojom::PaymentShippingOptionPtr& input) {
    return input->id;
  }

  static const decltype(::payments::mojom::PaymentShippingOption::label)& label(
      const ::payments::mojom::PaymentShippingOptionPtr& input) {
    return input->label;
  }

  static const decltype(::payments::mojom::PaymentShippingOption::amount)& amount(
      const ::payments::mojom::PaymentShippingOptionPtr& input) {
    return input->amount;
  }

  static decltype(::payments::mojom::PaymentShippingOption::selected) selected(
      const ::payments::mojom::PaymentShippingOptionPtr& input) {
    return input->selected;
  }

  static bool Read(::payments::mojom::PaymentShippingOption::DataView input, ::payments::mojom::PaymentShippingOptionPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentMethodData::DataView,
                                         ::payments::mojom::PaymentMethodDataPtr> {
  static bool IsNull(const ::payments::mojom::PaymentMethodDataPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentMethodDataPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentMethodData::supported_method)& supported_method(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->supported_method;
  }

  static const decltype(::payments::mojom::PaymentMethodData::stringified_data)& stringified_data(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->stringified_data;
  }

  static decltype(::payments::mojom::PaymentMethodData::environment) environment(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->environment;
  }

  static decltype(::payments::mojom::PaymentMethodData::min_google_play_services_version) min_google_play_services_version(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->min_google_play_services_version;
  }

  static decltype(::payments::mojom::PaymentMethodData::api_version) api_version(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->api_version;
  }

  static const decltype(::payments::mojom::PaymentMethodData::supported_networks)& supported_networks(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->supported_networks;
  }

  static const decltype(::payments::mojom::PaymentMethodData::supported_types)& supported_types(
      const ::payments::mojom::PaymentMethodDataPtr& input) {
    return input->supported_types;
  }

  static bool Read(::payments::mojom::PaymentMethodData::DataView input, ::payments::mojom::PaymentMethodDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentDetailsModifier::DataView,
                                         ::payments::mojom::PaymentDetailsModifierPtr> {
  static bool IsNull(const ::payments::mojom::PaymentDetailsModifierPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentDetailsModifierPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentDetailsModifier::total)& total(
      const ::payments::mojom::PaymentDetailsModifierPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::PaymentDetailsModifier::additional_display_items)& additional_display_items(
      const ::payments::mojom::PaymentDetailsModifierPtr& input) {
    return input->additional_display_items;
  }

  static const decltype(::payments::mojom::PaymentDetailsModifier::method_data)& method_data(
      const ::payments::mojom::PaymentDetailsModifierPtr& input) {
    return input->method_data;
  }

  static bool Read(::payments::mojom::PaymentDetailsModifier::DataView input, ::payments::mojom::PaymentDetailsModifierPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentDetails::DataView,
                                         ::payments::mojom::PaymentDetailsPtr> {
  static bool IsNull(const ::payments::mojom::PaymentDetailsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentDetailsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentDetails::total)& total(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::PaymentDetails::display_items)& display_items(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->display_items;
  }

  static const decltype(::payments::mojom::PaymentDetails::shipping_options)& shipping_options(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->shipping_options;
  }

  static const decltype(::payments::mojom::PaymentDetails::modifiers)& modifiers(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->modifiers;
  }

  static const decltype(::payments::mojom::PaymentDetails::error)& error(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->error;
  }

  static const decltype(::payments::mojom::PaymentDetails::shipping_address_errors)& shipping_address_errors(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->shipping_address_errors;
  }

  static const decltype(::payments::mojom::PaymentDetails::id)& id(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->id;
  }

  static const decltype(::payments::mojom::PaymentDetails::stringified_payment_method_errors)& stringified_payment_method_errors(
      const ::payments::mojom::PaymentDetailsPtr& input) {
    return input->stringified_payment_method_errors;
  }

  static bool Read(::payments::mojom::PaymentDetails::DataView input, ::payments::mojom::PaymentDetailsPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentOptions::DataView,
                                         ::payments::mojom::PaymentOptionsPtr> {
  static bool IsNull(const ::payments::mojom::PaymentOptionsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentOptionsPtr* output) { output->reset(); }

  static decltype(::payments::mojom::PaymentOptions::request_payer_name) request_payer_name(
      const ::payments::mojom::PaymentOptionsPtr& input) {
    return input->request_payer_name;
  }

  static decltype(::payments::mojom::PaymentOptions::request_payer_email) request_payer_email(
      const ::payments::mojom::PaymentOptionsPtr& input) {
    return input->request_payer_email;
  }

  static decltype(::payments::mojom::PaymentOptions::request_payer_phone) request_payer_phone(
      const ::payments::mojom::PaymentOptionsPtr& input) {
    return input->request_payer_phone;
  }

  static decltype(::payments::mojom::PaymentOptions::request_shipping) request_shipping(
      const ::payments::mojom::PaymentOptionsPtr& input) {
    return input->request_shipping;
  }

  static decltype(::payments::mojom::PaymentOptions::shipping_type) shipping_type(
      const ::payments::mojom::PaymentOptionsPtr& input) {
    return input->shipping_type;
  }

  static bool Read(::payments::mojom::PaymentOptions::DataView input, ::payments::mojom::PaymentOptionsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_H_