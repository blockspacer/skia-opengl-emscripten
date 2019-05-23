// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_H_

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
#include "third_party/blink/public/mojom/payments/payment_app.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_app.mojom-forward.h"
#include "components/payments/mojom/payment_request_data.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace payments {
namespace mojom {

class PaymentManagerProxy;

template <typename ImplRefTraits>
class PaymentManagerStub;

class PaymentManagerRequestValidator;
class PaymentManagerResponseValidator;


class BLINK_COMMON_EXPORT PaymentManager
    : public PaymentManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PaymentManagerInterfaceBase;
  using Proxy_ = PaymentManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PaymentManagerStub<ImplRefTraits>;

  using RequestValidator_ = PaymentManagerRequestValidator;
  using ResponseValidator_ = PaymentManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitMinVersion = 0,
    kDeletePaymentInstrumentMinVersion = 0,
    kGetPaymentInstrumentMinVersion = 0,
    kKeysOfPaymentInstrumentsMinVersion = 0,
    kHasPaymentInstrumentMinVersion = 0,
    kSetPaymentInstrumentMinVersion = 0,
    kClearPaymentInstrumentsMinVersion = 0,
    kSetUserHintMinVersion = 0,
  };
  virtual ~PaymentManager() {}

  
  virtual void Init(const GURL& context_url, const std::string& service_worker_scope) = 0;


  using DeletePaymentInstrumentCallback = base::OnceCallback<void(PaymentHandlerStatus)>;
  
  virtual void DeletePaymentInstrument(const std::string& instrument_key, DeletePaymentInstrumentCallback callback) = 0;


  using GetPaymentInstrumentCallback = base::OnceCallback<void(PaymentInstrumentPtr, PaymentHandlerStatus)>;
  
  virtual void GetPaymentInstrument(const std::string& instrument_key, GetPaymentInstrumentCallback callback) = 0;


  using KeysOfPaymentInstrumentsCallback = base::OnceCallback<void(const std::vector<std::string>&, PaymentHandlerStatus)>;
  
  virtual void KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) = 0;


  using HasPaymentInstrumentCallback = base::OnceCallback<void(PaymentHandlerStatus)>;
  
  virtual void HasPaymentInstrument(const std::string& instrument_key, HasPaymentInstrumentCallback callback) = 0;


  using SetPaymentInstrumentCallback = base::OnceCallback<void(PaymentHandlerStatus)>;
  
  virtual void SetPaymentInstrument(const std::string& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) = 0;


  using ClearPaymentInstrumentsCallback = base::OnceCallback<void(PaymentHandlerStatus)>;
  
  virtual void ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) = 0;

  
  virtual void SetUserHint(const std::string& user_hint) = 0;
};

class PaymentHandlerResponseCallbackProxy;

template <typename ImplRefTraits>
class PaymentHandlerResponseCallbackStub;

class PaymentHandlerResponseCallbackRequestValidator;


class BLINK_COMMON_EXPORT PaymentHandlerResponseCallback
    : public PaymentHandlerResponseCallbackInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PaymentHandlerResponseCallbackInterfaceBase;
  using Proxy_ = PaymentHandlerResponseCallbackProxy;

  template <typename ImplRefTraits>
  using Stub_ = PaymentHandlerResponseCallbackStub<ImplRefTraits>;

  using RequestValidator_ = PaymentHandlerResponseCallbackRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnResponseForAbortPaymentMinVersion = 0,
    kOnResponseForCanMakePaymentMinVersion = 0,
    kOnResponseForPaymentRequestMinVersion = 0,
  };
  virtual ~PaymentHandlerResponseCallback() {}

  
  virtual void OnResponseForAbortPayment(bool payment_aborted) = 0;

  
  virtual void OnResponseForCanMakePayment(bool can_make_payment) = 0;

  
  virtual void OnResponseForPaymentRequest(PaymentHandlerResponsePtr response) = 0;
};

class BLINK_COMMON_EXPORT PaymentManagerProxy
    : public PaymentManager {
 public:
  using InterfaceType = PaymentManager;

  explicit PaymentManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Init(const GURL& context_url, const std::string& service_worker_scope) final;
  void DeletePaymentInstrument(const std::string& instrument_key, DeletePaymentInstrumentCallback callback) final;
  void GetPaymentInstrument(const std::string& instrument_key, GetPaymentInstrumentCallback callback) final;
  void KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) final;
  void HasPaymentInstrument(const std::string& instrument_key, HasPaymentInstrumentCallback callback) final;
  void SetPaymentInstrument(const std::string& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) final;
  void ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) final;
  void SetUserHint(const std::string& user_hint) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT PaymentHandlerResponseCallbackProxy
    : public PaymentHandlerResponseCallback {
 public:
  using InterfaceType = PaymentHandlerResponseCallback;

  explicit PaymentHandlerResponseCallbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnResponseForAbortPayment(bool payment_aborted) final;
  void OnResponseForCanMakePayment(bool can_make_payment) final;
  void OnResponseForPaymentRequest(PaymentHandlerResponsePtr response) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT PaymentManagerStubDispatch {
 public:
  static bool Accept(PaymentManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PaymentManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PaymentManager>>
class PaymentManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PaymentManagerStub() {}
  ~PaymentManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PaymentHandlerResponseCallbackStubDispatch {
 public:
  static bool Accept(PaymentHandlerResponseCallback* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PaymentHandlerResponseCallback* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PaymentHandlerResponseCallback>>
class PaymentHandlerResponseCallbackStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PaymentHandlerResponseCallbackStub() {}
  ~PaymentHandlerResponseCallbackStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentHandlerResponseCallbackStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PaymentHandlerResponseCallbackStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT PaymentManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PaymentHandlerResponseCallbackRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT PaymentManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT PaymentHandlerResponse {
 public:
  using DataView = PaymentHandlerResponseDataView;
  using Data_ = internal::PaymentHandlerResponse_Data;

  template <typename... Args>
  static PaymentHandlerResponsePtr New(Args&&... args) {
    return PaymentHandlerResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentHandlerResponsePtr From(const U& u) {
    return mojo::TypeConverter<PaymentHandlerResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentHandlerResponse>::Convert(*this);
  }


  PaymentHandlerResponse();

  PaymentHandlerResponse(
      const std::string& method_name,
      const std::string& stringified_details);

  ~PaymentHandlerResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentHandlerResponsePtr>
  PaymentHandlerResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentHandlerResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentHandlerResponse::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentHandlerResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentHandlerResponse_UnserializedMessageContext<
            UserType, PaymentHandlerResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentHandlerResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentHandlerResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentHandlerResponse_UnserializedMessageContext<
            UserType, PaymentHandlerResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentHandlerResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string method_name;
  
  std::string stringified_details;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_COMMON_EXPORT PaymentInstrument {
 public:
  using DataView = PaymentInstrumentDataView;
  using Data_ = internal::PaymentInstrument_Data;

  template <typename... Args>
  static PaymentInstrumentPtr New(Args&&... args) {
    return PaymentInstrumentPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentInstrumentPtr From(const U& u) {
    return mojo::TypeConverter<PaymentInstrumentPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentInstrument>::Convert(*this);
  }


  PaymentInstrument();

  PaymentInstrument(
      const std::string& name,
      const std::vector<::blink::Manifest::ImageResource>& icons,
      const std::string& method,
      const std::string& stringified_capabilities,
      const std::vector<::payments::mojom::BasicCardNetwork>& supported_networks,
      const std::vector<::payments::mojom::BasicCardType>& supported_types);

  ~PaymentInstrument();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentInstrumentPtr>
  PaymentInstrumentPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentInstrument>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentInstrument::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentInstrument::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentInstrument_UnserializedMessageContext<
            UserType, PaymentInstrument::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentInstrument::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentInstrument::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentInstrument_UnserializedMessageContext<
            UserType, PaymentInstrument::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentInstrument::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::string name;
  
  std::vector<::blink::Manifest::ImageResource> icons;
  
  std::string method;
  
  std::string stringified_capabilities;
  
  std::vector<::payments::mojom::BasicCardNetwork> supported_networks;
  
  std::vector<::payments::mojom::BasicCardType> supported_types;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT CanMakePaymentEventData {
 public:
  using DataView = CanMakePaymentEventDataDataView;
  using Data_ = internal::CanMakePaymentEventData_Data;

  template <typename... Args>
  static CanMakePaymentEventDataPtr New(Args&&... args) {
    return CanMakePaymentEventDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CanMakePaymentEventDataPtr From(const U& u) {
    return mojo::TypeConverter<CanMakePaymentEventDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CanMakePaymentEventData>::Convert(*this);
  }


  CanMakePaymentEventData();

  CanMakePaymentEventData(
      const GURL& top_origin,
      const GURL& payment_request_origin,
      std::vector<::payments::mojom::PaymentMethodDataPtr> method_data,
      std::vector<::payments::mojom::PaymentDetailsModifierPtr> modifiers);

  ~CanMakePaymentEventData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CanMakePaymentEventDataPtr>
  CanMakePaymentEventDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CanMakePaymentEventData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CanMakePaymentEventData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CanMakePaymentEventData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CanMakePaymentEventData_UnserializedMessageContext<
            UserType, CanMakePaymentEventData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CanMakePaymentEventData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CanMakePaymentEventData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CanMakePaymentEventData_UnserializedMessageContext<
            UserType, CanMakePaymentEventData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CanMakePaymentEventData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL top_origin;
  
  GURL payment_request_origin;
  
  std::vector<::payments::mojom::PaymentMethodDataPtr> method_data;
  
  std::vector<::payments::mojom::PaymentDetailsModifierPtr> modifiers;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(CanMakePaymentEventData);
};





class BLINK_COMMON_EXPORT PaymentRequestEventData {
 public:
  using DataView = PaymentRequestEventDataDataView;
  using Data_ = internal::PaymentRequestEventData_Data;

  template <typename... Args>
  static PaymentRequestEventDataPtr New(Args&&... args) {
    return PaymentRequestEventDataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentRequestEventDataPtr From(const U& u) {
    return mojo::TypeConverter<PaymentRequestEventDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentRequestEventData>::Convert(*this);
  }


  PaymentRequestEventData();

  PaymentRequestEventData(
      const GURL& top_origin,
      const GURL& payment_request_origin,
      const std::string& payment_request_id,
      std::vector<::payments::mojom::PaymentMethodDataPtr> method_data,
      ::payments::mojom::PaymentCurrencyAmountPtr total,
      std::vector<::payments::mojom::PaymentDetailsModifierPtr> modifiers,
      const std::string& instrument_key,
      ::payments::mojom::PaymentHandlerHostPtrInfo payment_handler_host);

  ~PaymentRequestEventData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentRequestEventDataPtr>
  PaymentRequestEventDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentRequestEventData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentRequestEventData::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentRequestEventData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentRequestEventData_UnserializedMessageContext<
            UserType, PaymentRequestEventData::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentRequestEventData::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PaymentRequestEventData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentRequestEventData_UnserializedMessageContext<
            UserType, PaymentRequestEventData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentRequestEventData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL top_origin;
  
  GURL payment_request_origin;
  
  std::string payment_request_id;
  
  std::vector<::payments::mojom::PaymentMethodDataPtr> method_data;
  
  ::payments::mojom::PaymentCurrencyAmountPtr total;
  
  std::vector<::payments::mojom::PaymentDetailsModifierPtr> modifiers;
  
  std::string instrument_key;
  
  ::payments::mojom::PaymentHandlerHostPtrInfo payment_handler_host;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentRequestEventData);
};


template <typename StructPtrType>
PaymentInstrumentPtr PaymentInstrument::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(icons),
      mojo::Clone(method),
      mojo::Clone(stringified_capabilities),
      mojo::Clone(supported_networks),
      mojo::Clone(supported_types)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentInstrument>::value>::type*>
bool PaymentInstrument::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icons, other_struct.icons))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->stringified_capabilities, other_struct.stringified_capabilities))
    return false;
  if (!mojo::Equals(this->supported_networks, other_struct.supported_networks))
    return false;
  if (!mojo::Equals(this->supported_types, other_struct.supported_types))
    return false;
  return true;
}
template <typename StructPtrType>
CanMakePaymentEventDataPtr CanMakePaymentEventData::Clone() const {
  return New(
      mojo::Clone(top_origin),
      mojo::Clone(payment_request_origin),
      mojo::Clone(method_data),
      mojo::Clone(modifiers)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CanMakePaymentEventData>::value>::type*>
bool CanMakePaymentEventData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->top_origin, other_struct.top_origin))
    return false;
  if (!mojo::Equals(this->payment_request_origin, other_struct.payment_request_origin))
    return false;
  if (!mojo::Equals(this->method_data, other_struct.method_data))
    return false;
  if (!mojo::Equals(this->modifiers, other_struct.modifiers))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentRequestEventDataPtr PaymentRequestEventData::Clone() const {
  return New(
      mojo::Clone(top_origin),
      mojo::Clone(payment_request_origin),
      mojo::Clone(payment_request_id),
      mojo::Clone(method_data),
      mojo::Clone(total),
      mojo::Clone(modifiers),
      mojo::Clone(instrument_key),
      mojo::Clone(payment_handler_host)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentRequestEventData>::value>::type*>
bool PaymentRequestEventData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->top_origin, other_struct.top_origin))
    return false;
  if (!mojo::Equals(this->payment_request_origin, other_struct.payment_request_origin))
    return false;
  if (!mojo::Equals(this->payment_request_id, other_struct.payment_request_id))
    return false;
  if (!mojo::Equals(this->method_data, other_struct.method_data))
    return false;
  if (!mojo::Equals(this->total, other_struct.total))
    return false;
  if (!mojo::Equals(this->modifiers, other_struct.modifiers))
    return false;
  if (!mojo::Equals(this->instrument_key, other_struct.instrument_key))
    return false;
  if (!mojo::Equals(this->payment_handler_host, other_struct.payment_handler_host))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentHandlerResponsePtr PaymentHandlerResponse::Clone() const {
  return New(
      mojo::Clone(method_name),
      mojo::Clone(stringified_details)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentHandlerResponse>::value>::type*>
bool PaymentHandlerResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->method_name, other_struct.method_name))
    return false;
  if (!mojo::Equals(this->stringified_details, other_struct.stringified_details))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentInstrument::DataView,
                                         ::payments::mojom::PaymentInstrumentPtr> {
  static bool IsNull(const ::payments::mojom::PaymentInstrumentPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentInstrumentPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentInstrument::name)& name(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->name;
  }

  static const decltype(::payments::mojom::PaymentInstrument::icons)& icons(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->icons;
  }

  static const decltype(::payments::mojom::PaymentInstrument::method)& method(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->method;
  }

  static const decltype(::payments::mojom::PaymentInstrument::stringified_capabilities)& stringified_capabilities(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->stringified_capabilities;
  }

  static const decltype(::payments::mojom::PaymentInstrument::supported_networks)& supported_networks(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->supported_networks;
  }

  static const decltype(::payments::mojom::PaymentInstrument::supported_types)& supported_types(
      const ::payments::mojom::PaymentInstrumentPtr& input) {
    return input->supported_types;
  }

  static bool Read(::payments::mojom::PaymentInstrument::DataView input, ::payments::mojom::PaymentInstrumentPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::CanMakePaymentEventData::DataView,
                                         ::payments::mojom::CanMakePaymentEventDataPtr> {
  static bool IsNull(const ::payments::mojom::CanMakePaymentEventDataPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::CanMakePaymentEventDataPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::CanMakePaymentEventData::top_origin)& top_origin(
      const ::payments::mojom::CanMakePaymentEventDataPtr& input) {
    return input->top_origin;
  }

  static const decltype(::payments::mojom::CanMakePaymentEventData::payment_request_origin)& payment_request_origin(
      const ::payments::mojom::CanMakePaymentEventDataPtr& input) {
    return input->payment_request_origin;
  }

  static const decltype(::payments::mojom::CanMakePaymentEventData::method_data)& method_data(
      const ::payments::mojom::CanMakePaymentEventDataPtr& input) {
    return input->method_data;
  }

  static const decltype(::payments::mojom::CanMakePaymentEventData::modifiers)& modifiers(
      const ::payments::mojom::CanMakePaymentEventDataPtr& input) {
    return input->modifiers;
  }

  static bool Read(::payments::mojom::CanMakePaymentEventData::DataView input, ::payments::mojom::CanMakePaymentEventDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentRequestEventData::DataView,
                                         ::payments::mojom::PaymentRequestEventDataPtr> {
  static bool IsNull(const ::payments::mojom::PaymentRequestEventDataPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentRequestEventDataPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentRequestEventData::top_origin)& top_origin(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->top_origin;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::payment_request_origin)& payment_request_origin(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->payment_request_origin;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::payment_request_id)& payment_request_id(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->payment_request_id;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::method_data)& method_data(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->method_data;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::total)& total(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->total;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::modifiers)& modifiers(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->modifiers;
  }

  static const decltype(::payments::mojom::PaymentRequestEventData::instrument_key)& instrument_key(
      const ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->instrument_key;
  }

  static  decltype(::payments::mojom::PaymentRequestEventData::payment_handler_host)& payment_handler_host(
       ::payments::mojom::PaymentRequestEventDataPtr& input) {
    return input->payment_handler_host;
  }

  static bool Read(::payments::mojom::PaymentRequestEventData::DataView input, ::payments::mojom::PaymentRequestEventDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::payments::mojom::PaymentHandlerResponse::DataView,
                                         ::payments::mojom::PaymentHandlerResponsePtr> {
  static bool IsNull(const ::payments::mojom::PaymentHandlerResponsePtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentHandlerResponsePtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentHandlerResponse::method_name)& method_name(
      const ::payments::mojom::PaymentHandlerResponsePtr& input) {
    return input->method_name;
  }

  static const decltype(::payments::mojom::PaymentHandlerResponse::stringified_details)& stringified_details(
      const ::payments::mojom::PaymentHandlerResponsePtr& input) {
    return input->stringified_details;
  }

  static bool Read(::payments::mojom::PaymentHandlerResponse::DataView input, ::payments::mojom::PaymentHandlerResponsePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_H_