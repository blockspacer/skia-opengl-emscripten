// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_

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
#include "components/payments/mojom/payment_request_data.mojom-forward.h"
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




namespace payments {
namespace mojom {






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
      const std::string& currency,
      const std::string& value);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentCurrencyAmount::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string currency;
  
  std::string value;

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
      const std::string& email,
      const std::string& name,
      const std::string& phone);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PayerErrors::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string email;
  
  std::string name;
  
  std::string phone;

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
      const std::string& country,
      const std::vector<std::string>& address_line,
      const std::string& region,
      const std::string& city,
      const std::string& dependent_locality,
      const std::string& postal_code,
      const std::string& sorting_code,
      const std::string& organization,
      const std::string& recipient,
      const std::string& phone);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentAddress::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string country;
  
  std::vector<std::string> address_line;
  
  std::string region;
  
  std::string city;
  
  std::string dependent_locality;
  
  std::string postal_code;
  
  std::string sorting_code;
  
  std::string organization;
  
  std::string recipient;
  
  std::string phone;

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
      const std::string& error,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PaymentValidationErrors::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string error;
  
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
      const std::string& address_line,
      const std::string& city,
      const std::string& country,
      const std::string& dependent_locality,
      const std::string& organization,
      const std::string& phone,
      const std::string& postal_code,
      const std::string& recipient,
      const std::string& region,
      const std::string& sorting_code);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AddressErrors::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  std::string address_line;
  
  std::string city;
  
  std::string country;
  
  std::string dependent_locality;
  
  std::string organization;
  
  std::string phone;
  
  std::string postal_code;
  
  std::string recipient;
  
  std::string region;
  
  std::string sorting_code;

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


}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct  StructTraits<::payments::mojom::PaymentAddress::DataView,
                                         ::payments::mojom::PaymentAddressPtr> {
  static bool IsNull(const ::payments::mojom::PaymentAddressPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentAddressPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentAddress::country)& country(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->country;
  }

  static const decltype(::payments::mojom::PaymentAddress::address_line)& address_line(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->address_line;
  }

  static const decltype(::payments::mojom::PaymentAddress::region)& region(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->region;
  }

  static const decltype(::payments::mojom::PaymentAddress::city)& city(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->city;
  }

  static const decltype(::payments::mojom::PaymentAddress::dependent_locality)& dependent_locality(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->dependent_locality;
  }

  static const decltype(::payments::mojom::PaymentAddress::postal_code)& postal_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->postal_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::sorting_code)& sorting_code(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->sorting_code;
  }

  static const decltype(::payments::mojom::PaymentAddress::organization)& organization(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->organization;
  }

  static const decltype(::payments::mojom::PaymentAddress::recipient)& recipient(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->recipient;
  }

  static const decltype(::payments::mojom::PaymentAddress::phone)& phone(
      const ::payments::mojom::PaymentAddressPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::PaymentAddress::DataView input, ::payments::mojom::PaymentAddressPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::PaymentCurrencyAmount::DataView,
                                         ::payments::mojom::PaymentCurrencyAmountPtr> {
  static bool IsNull(const ::payments::mojom::PaymentCurrencyAmountPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentCurrencyAmountPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentCurrencyAmount::currency)& currency(
      const ::payments::mojom::PaymentCurrencyAmountPtr& input) {
    return input->currency;
  }

  static const decltype(::payments::mojom::PaymentCurrencyAmount::value)& value(
      const ::payments::mojom::PaymentCurrencyAmountPtr& input) {
    return input->value;
  }

  static bool Read(::payments::mojom::PaymentCurrencyAmount::DataView input, ::payments::mojom::PaymentCurrencyAmountPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::PaymentValidationErrors::DataView,
                                         ::payments::mojom::PaymentValidationErrorsPtr> {
  static bool IsNull(const ::payments::mojom::PaymentValidationErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PaymentValidationErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PaymentValidationErrors::error)& error(
      const ::payments::mojom::PaymentValidationErrorsPtr& input) {
    return input->error;
  }

  static const decltype(::payments::mojom::PaymentValidationErrors::payer)& payer(
      const ::payments::mojom::PaymentValidationErrorsPtr& input) {
    return input->payer;
  }

  static const decltype(::payments::mojom::PaymentValidationErrors::shipping_address)& shipping_address(
      const ::payments::mojom::PaymentValidationErrorsPtr& input) {
    return input->shipping_address;
  }

  static bool Read(::payments::mojom::PaymentValidationErrors::DataView input, ::payments::mojom::PaymentValidationErrorsPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::PayerErrors::DataView,
                                         ::payments::mojom::PayerErrorsPtr> {
  static bool IsNull(const ::payments::mojom::PayerErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::PayerErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::PayerErrors::email)& email(
      const ::payments::mojom::PayerErrorsPtr& input) {
    return input->email;
  }

  static const decltype(::payments::mojom::PayerErrors::name)& name(
      const ::payments::mojom::PayerErrorsPtr& input) {
    return input->name;
  }

  static const decltype(::payments::mojom::PayerErrors::phone)& phone(
      const ::payments::mojom::PayerErrorsPtr& input) {
    return input->phone;
  }

  static bool Read(::payments::mojom::PayerErrors::DataView input, ::payments::mojom::PayerErrorsPtr* output);
};


template <>
struct  StructTraits<::payments::mojom::AddressErrors::DataView,
                                         ::payments::mojom::AddressErrorsPtr> {
  static bool IsNull(const ::payments::mojom::AddressErrorsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::AddressErrorsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::AddressErrors::address_line)& address_line(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->address_line;
  }

  static const decltype(::payments::mojom::AddressErrors::city)& city(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->city;
  }

  static const decltype(::payments::mojom::AddressErrors::country)& country(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->country;
  }

  static const decltype(::payments::mojom::AddressErrors::dependent_locality)& dependent_locality(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->dependent_locality;
  }

  static const decltype(::payments::mojom::AddressErrors::organization)& organization(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->organization;
  }

  static const decltype(::payments::mojom::AddressErrors::phone)& phone(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->phone;
  }

  static const decltype(::payments::mojom::AddressErrors::postal_code)& postal_code(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->postal_code;
  }

  static const decltype(::payments::mojom::AddressErrors::recipient)& recipient(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->recipient;
  }

  static const decltype(::payments::mojom::AddressErrors::region)& region(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->region;
  }

  static const decltype(::payments::mojom::AddressErrors::sorting_code)& sorting_code(
      const ::payments::mojom::AddressErrorsPtr& input) {
    return input->sorting_code;
  }

  static bool Read(::payments::mojom::AddressErrors::DataView input, ::payments::mojom::AddressErrorsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_H_