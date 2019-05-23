// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace payments {
namespace mojom {
namespace internal {
class PaymentInstrument_Data;
class CanMakePaymentEventData_Data;
class PaymentRequestEventData_Data;
class PaymentHandlerResponse_Data;

struct PaymentHandlerStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentInstrument_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentInstrument_Data));
      new (data()) PaymentInstrument_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentInstrument_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentInstrument_Data>(index_);
    }
    PaymentInstrument_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ManifestImageResource_Data>>> icons;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_capabilities;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_networks;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_types;

 private:
  PaymentInstrument_Data();
  ~PaymentInstrument_Data() = delete;
};
static_assert(sizeof(PaymentInstrument_Data) == 56,
              "Bad sizeof(PaymentInstrument_Data)");
// Used by PaymentInstrument::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentInstrument_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentInstrument_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentInstrument_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentInstrument_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentInstrument_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CanMakePaymentEventData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CanMakePaymentEventData_Data));
      new (data()) CanMakePaymentEventData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CanMakePaymentEventData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CanMakePaymentEventData_Data>(index_);
    }
    CanMakePaymentEventData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> top_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> payment_request_origin;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentDetailsModifier_Data>>> modifiers;

 private:
  CanMakePaymentEventData_Data();
  ~CanMakePaymentEventData_Data() = delete;
};
static_assert(sizeof(CanMakePaymentEventData_Data) == 40,
              "Bad sizeof(CanMakePaymentEventData_Data)");
// Used by CanMakePaymentEventData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CanMakePaymentEventData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CanMakePaymentEventData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CanMakePaymentEventData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CanMakePaymentEventData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CanMakePaymentEventData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestEventData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestEventData_Data));
      new (data()) PaymentRequestEventData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestEventData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestEventData_Data>(index_);
    }
    PaymentRequestEventData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> top_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> payment_request_origin;
  mojo::internal::Pointer<mojo::internal::String_Data> payment_request_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> total;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::payments::mojom::internal::PaymentDetailsModifier_Data>>> modifiers;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;
  mojo::internal::Interface_Data payment_handler_host;

 private:
  PaymentRequestEventData_Data();
  ~PaymentRequestEventData_Data() = delete;
};
static_assert(sizeof(PaymentRequestEventData_Data) == 72,
              "Bad sizeof(PaymentRequestEventData_Data)");
// Used by PaymentRequestEventData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentRequestEventData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentRequestEventData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentRequestEventData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentRequestEventData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentRequestEventData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponse_Data));
      new (data()) PaymentHandlerResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponse_Data>(index_);
    }
    PaymentHandlerResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method_name;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_details;

 private:
  PaymentHandlerResponse_Data();
  ~PaymentHandlerResponse_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponse_Data) == 24,
              "Bad sizeof(PaymentHandlerResponse_Data)");
// Used by PaymentHandlerResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentHandlerResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentHandlerResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentHandlerResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentHandlerResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentHandlerResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_SHARED_INTERNAL_H_