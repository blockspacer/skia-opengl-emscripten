// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_H_

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
#include "components/payments/mojom/payment_request_data.mojom-shared.h"
#include "components/payments/mojom/payment_request_data.mojom-blink-forward.h"

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




namespace payments {
namespace mojom {
namespace blink {






class  PaymentCurrencyAmount {
 public:
  using DataView = PaymentCurrencyAmountDataView;
  using Data_ = internal::PaymentCurrencyAmount_Data;

  template <typename... Args>
  static PaymentCurrencyAmountPtr New(Args&&... args) {
    return PaymentCurrencyAmountPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentCurrencyAmountPtr From(const U& u) {
    return mojo::TypeConverter<PaymentCurrencyAmountPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentCurrencyAmount>::Convert(*this);
  }


  PaymentCurrencyAmount();

  PaymentCurrencyAmount(
      const WTF::String& currency,
      const WTF::String& value);

  ~PaymentCurrencyAmount();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentCurrencyAmountPtr>
  PaymentCurrencyAmountPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentCurrencyAmount>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentCurrencyAmount::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentCurrencyAmount::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentCurrencyAmount_UnserializedMessageContext<
            UserType, PaymentCurrencyAmount::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentCurrencyAmount::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentCurrencyAmount::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentCurrencyAmount_UnserializedMessageContext<
            UserType, PaymentCurrencyAmount::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentCurrencyAmount::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String currency;
  
  WTF::String value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  PayerErrors {
 public:
  using DataView = PayerErrorsDataView;
  using Data_ = internal::PayerErrors_Data;

  template <typename... Args>
  static PayerErrorsPtr New(Args&&... args) {
    return PayerErrorsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PayerErrorsPtr From(const U& u) {
    return mojo::TypeConverter<PayerErrorsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PayerErrors>::Convert(*this);
  }


  PayerErrors();

  PayerErrors(
      const WTF::String& email,
      const WTF::String& name,
      const WTF::String& phone);

  ~PayerErrors();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PayerErrorsPtr>
  PayerErrorsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PayerErrors>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PayerErrors::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PayerErrors::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PayerErrors_UnserializedMessageContext<
            UserType, PayerErrors::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PayerErrors::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PayerErrors::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PayerErrors_UnserializedMessageContext<
            UserType, PayerErrors::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PayerErrors::DataView>(
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








class  PaymentAddress {
 public:
  using DataView = PaymentAddressDataView;
  using Data_ = internal::PaymentAddress_Data;

  template <typename... Args>
  static PaymentAddressPtr New(Args&&... args) {
    return PaymentAddressPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentAddressPtr From(const U& u) {
    return mojo::TypeConverter<PaymentAddressPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentAddress>::Convert(*this);
  }


  PaymentAddress();

  PaymentAddress(
      const WTF::String& country,
      const WTF::Vector<WTF::String>& address_line,
      const WTF::String& region,
      const WTF::String& city,
      const WTF::String& dependent_locality,
      const WTF::String& postal_code,
      const WTF::String& sorting_code,
      const WTF::String& organization,
      const WTF::String& recipient,
      const WTF::String& phone);

  ~PaymentAddress();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentAddressPtr>
  PaymentAddressPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentAddress>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentAddress::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentAddress::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentAddress_UnserializedMessageContext<
            UserType, PaymentAddress::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentAddress::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentAddress::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentAddress_UnserializedMessageContext<
            UserType, PaymentAddress::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentAddress::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String country;
  
  WTF::Vector<WTF::String> address_line;
  
  WTF::String region;
  
  WTF::String city;
  
  WTF::String dependent_locality;
  
  WTF::String postal_code;
  
  WTF::String sorting_code;
  
  WTF::String organization;
  
  WTF::String recipient;
  
  WTF::String phone;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  PaymentValidationErrors {
 public:
  using DataView = PaymentValidationErrorsDataView;
  using Data_ = internal::PaymentValidationErrors_Data;

  template <typename... Args>
  static PaymentValidationErrorsPtr New(Args&&... args) {
    return PaymentValidationErrorsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PaymentValidationErrorsPtr From(const U& u) {
    return mojo::TypeConverter<PaymentValidationErrorsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentValidationErrors>::Convert(*this);
  }


  PaymentValidationErrors();

  PaymentValidationErrors(
      const WTF::String& error,
      PayerErrorsPtr payer,
      AddressErrorsPtr shipping_address);

  ~PaymentValidationErrors();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentValidationErrorsPtr>
  PaymentValidationErrorsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentValidationErrors>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentValidationErrors::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PaymentValidationErrors::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PaymentValidationErrors_UnserializedMessageContext<
            UserType, PaymentValidationErrors::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PaymentValidationErrors::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PaymentValidationErrors::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PaymentValidationErrors_UnserializedMessageContext<
            UserType, PaymentValidationErrors::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PaymentValidationErrors::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String error;
  
  PayerErrorsPtr payer;
  
  AddressErrorsPtr shipping_address;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PaymentValidationErrors);
};






class  AddressErrors {
 public:
  using DataView = AddressErrorsDataView;
  using Data_ = internal::AddressErrors_Data;

  template <typename... Args>
  static AddressErrorsPtr New(Args&&... args) {
    return AddressErrorsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AddressErrorsPtr From(const U& u) {
    return mojo::TypeConverter<AddressErrorsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AddressErrors>::Convert(*this);
  }


  AddressErrors();

  AddressErrors(
      const WTF::String& address_line,
      const WTF::String& city,
      const WTF::String& country,
      const WTF::String& dependent_locality,
      const WTF::String& organization,
      const WTF::String& phone,
      const WTF::String& postal_code,
      const WTF::String& recipient,
      const WTF::String& region,
      const WTF::String& sorting_code);

  ~AddressErrors();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AddressErrorsPtr>
  AddressErrorsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AddressErrors>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AddressErrors::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AddressErrors::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AddressErrors_UnserializedMessageContext<
            UserType, AddressErrors::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AddressErrors::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AddressErrors::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AddressErrors_UnserializedMessageContext<
            UserType, AddressErrors::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AddressErrors::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String address_line;
  
  WTF::String city;
  
  WTF::String country;
  
  WTF::String dependent_locality;
  
  WTF::String organization;
  
  WTF::String phone;
  
  WTF::String postal_code;
  
  WTF::String recipient;
  
  WTF::String region;
  
  WTF::String sorting_code;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PaymentAddressPtr PaymentAddress::Clone() const {
  return New(
      mojo::Clone(country),
      mojo::Clone(address_line),
      mojo::Clone(region),
      mojo::Clone(city),
      mojo::Clone(dependent_locality),
      mojo::Clone(postal_code),
      mojo::Clone(sorting_code),
      mojo::Clone(organization),
      mojo::Clone(recipient),
      mojo::Clone(phone)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentAddress>::value>::type*>
bool PaymentAddress::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->country, other_struct.country))
    return false;
  if (!mojo::Equals(this->address_line, other_struct.address_line))
    return false;
  if (!mojo::Equals(this->region, other_struct.region))
    return false;
  if (!mojo::Equals(this->city, other_struct.city))
    return false;
  if (!mojo::Equals(this->dependent_locality, other_struct.dependent_locality))
    return false;
  if (!mojo::Equals(this->postal_code, other_struct.postal_code))
    return false;
  if (!mojo::Equals(this->sorting_code, other_struct.sorting_code))
    return false;
  if (!mojo::Equals(this->organization, other_struct.organization))
    return false;
  if (!mojo::Equals(this->recipient, other_struct.recipient))
    return false;
  if (!mojo::Equals(this->phone, other_struct.phone))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentCurrencyAmountPtr PaymentCurrencyAmount::Clone() const {
  return New(
      mojo::Clone(currency),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentCurrencyAmount>::value>::type*>
bool PaymentCurrencyAmount::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->currency, other_struct.currency))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
PaymentValidationErrorsPtr PaymentValidationErrors::Clone() const {
  return New(
      mojo::Clone(error),
      mojo::Clone(payer),
      mojo::Clone(shipping_address)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentValidationErrors>::value>::type*>
bool PaymentValidationErrors::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->payer, other_struct.payer))
    return false;
  if (!mojo::Equals(this->shipping_address, other_struct.shipping_address))
    return false;
  return true;
}
template <typename StructPtrType>
PayerErrorsPtr PayerErrors::Clone() const {
  return New(
      mojo::Clone(email),
      mojo::Clone(name),
      mojo::Clone(phone)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PayerErrors>::value>::type*>
bool PayerErrors::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->email, other_struct.email))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->phone, other_struct.phone))
    return false;
  return true;
}
template <typename StructPtrType>
AddressErrorsPtr AddressErrors::Clone() const {
  return New(
      mojo::Clone(address_line),
      mojo::Clone(city),
      mojo::Clone(country),
      mojo::Clone(dependent_locality),
      mojo::Clone(organization),
      mojo::Clone(phone),
      mojo::Clone(postal_code),
      mojo::Clone(recipient),
      mojo::Clone(region),
      mojo::Clone(sorting_code)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AddressErrors>::value>::type*>
bool AddressErrors::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->address_line, other_struct.address_line))
    return false;
  if (!mojo::Equals(this->city, other_struct.city))
    return false;
  if (!mojo::Equals(this->country, other_struct.country))
    return false;
  if (!mojo::Equals(this->dependent_locality, other_struct.dependent_locality))
    return false;
  if (!mojo::Equals(this->organization, other_struct.organization))
    return false;
  if (!mojo::Equals(this->phone, other_struct.phone))
    return false;
  if (!mojo::Equals(this->postal_code, other_struct.postal_code))
    return false;
  if (!mojo::Equals(this->recipient, other_struct.recipient))
    return false;
  if (!mojo::Equals(this->region, other_struct.region))
    return false;
  if (!mojo::Equals(this->sorting_code, other_struct.sorting_code))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct  StructTraits<::payments::mojom::blink::PaymentAddress::DataView,
                                         ::payments::mojom::blink::PaymentAddressPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentAddressPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentAddressPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentAddress::country)& country(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->country;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::address_line)& address_line(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->address_line;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::region)& region(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->region;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::city)& city(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->city;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::dependent_locality)& dependent_locality(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->dependent_locality;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::postal_code)& postal_code(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->postal_code;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::sorting_code)& sorting_code(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->sorting_code;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::organization)& organization(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->organization;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::recipient)& recipient(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->recipient;
  }

  static const decltype(::payments::mojom::blink::PaymentAddress::phone)& phone(
      const ::payments::mojom::blink::PaymentAddressPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::blink::PaymentAddress::DataView input, ::payments::mojom::blink::PaymentAddressPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::blink::PaymentCurrencyAmount::DataView,
                                         ::payments::mojom::blink::PaymentCurrencyAmountPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentCurrencyAmountPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentCurrencyAmountPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentCurrencyAmount::currency)& currency(
      const ::payments::mojom::blink::PaymentCurrencyAmountPtr& input) {
    return input->currency;
  }

  static const decltype(::payments::mojom::blink::PaymentCurrencyAmount::value)& value(
      const ::payments::mojom::blink::PaymentCurrencyAmountPtr& input) {
    return input->value;
  }

  static bool Read(::payments::mojom::blink::PaymentCurrencyAmount::DataView input, ::payments::mojom::blink::PaymentCurrencyAmountPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::blink::PaymentValidationErrors::DataView,
                                         ::payments::mojom::blink::PaymentValidationErrorsPtr> {
  static bool IsNull(const ::payments::mojom::blink::PaymentValidationErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PaymentValidationErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PaymentValidationErrors::error)& error(
      const ::payments::mojom::blink::PaymentValidationErrorsPtr& input) {
    return input->error;
  }

  static const decltype(::payments::mojom::blink::PaymentValidationErrors::payer)& payer(
      const ::payments::mojom::blink::PaymentValidationErrorsPtr& input) {
    return input->payer;
  }

  static const decltype(::payments::mojom::blink::PaymentValidationErrors::shipping_address)& shipping_address(
      const ::payments::mojom::blink::PaymentValidationErrorsPtr& input) {
    return input->shipping_address;
  }

  static bool Read(::payments::mojom::blink::PaymentValidationErrors::DataView input, ::payments::mojom::blink::PaymentValidationErrorsPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::blink::PayerErrors::DataView,
                                         ::payments::mojom::blink::PayerErrorsPtr> {
  static bool IsNull(const ::payments::mojom::blink::PayerErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PayerErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PayerErrors::email)& email(
      const ::payments::mojom::blink::PayerErrorsPtr& input) {
    return input->email;
  }

  static const decltype(::payments::mojom::blink::PayerErrors::name)& name(
      const ::payments::mojom::blink::PayerErrorsPtr& input) {
    return input->name;
  }

  static const decltype(::payments::mojom::blink::PayerErrors::phone)& phone(
      const ::payments::mojom::blink::PayerErrorsPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::blink::PayerErrors::DataView input, ::payments::mojom::blink::PayerErrorsPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::blink::AddressErrors::DataView,
                                         ::payments::mojom::blink::AddressErrorsPtr> {
  static bool IsNull(const ::payments::mojom::blink::AddressErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::AddressErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::AddressErrors::address_line)& address_line(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->address_line;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::city)& city(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->city;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::country)& country(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->country;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::dependent_locality)& dependent_locality(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->dependent_locality;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::organization)& organization(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->organization;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::phone)& phone(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->phone;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::postal_code)& postal_code(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->postal_code;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::recipient)& recipient(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->recipient;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::region)& region(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->region;
  }

  static const decltype(::payments::mojom::blink::AddressErrors::sorting_code)& sorting_code(
      const ::payments::mojom::blink::AddressErrorsPtr& input) {
    return input->sorting_code;
  }

  static bool Read(::payments::mojom::blink::AddressErrors::DataView input, ::payments::mojom::blink::AddressErrorsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_BLINK_H_