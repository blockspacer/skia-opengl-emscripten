// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/payments/mojom/payment_request_data.mojom-shared-internal.h"
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
class PaymentHandlerMethodData_Data;
class PaymentHandlerModifier_Data;
class PaymentMethodChangeResponse_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerMethodData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerMethodData_Data));
      new (data()) PaymentHandlerMethodData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerMethodData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerMethodData_Data>(index_);
    }
    PaymentHandlerMethodData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method_name;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_data;

 private:
  PaymentHandlerMethodData_Data();
  ~PaymentHandlerMethodData_Data() = delete;
};
static_assert(sizeof(PaymentHandlerMethodData_Data) == 24,
              "Bad sizeof(PaymentHandlerMethodData_Data)");
// Used by PaymentHandlerMethodData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentHandlerMethodData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentHandlerMethodData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentHandlerMethodData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentHandlerMethodData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentHandlerMethodData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerModifier_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerModifier_Data));
      new (data()) PaymentHandlerModifier_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerModifier_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerModifier_Data>(index_);
    }
    PaymentHandlerModifier_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> total;
  mojo::internal::Pointer<internal::PaymentHandlerMethodData_Data> method_data;

 private:
  PaymentHandlerModifier_Data();
  ~PaymentHandlerModifier_Data() = delete;
};
static_assert(sizeof(PaymentHandlerModifier_Data) == 24,
              "Bad sizeof(PaymentHandlerModifier_Data)");
// Used by PaymentHandlerModifier::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentHandlerModifier_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentHandlerModifier_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentHandlerModifier_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentHandlerModifier_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentHandlerModifier_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentMethodChangeResponse_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentMethodChangeResponse_Data));
      new (data()) PaymentMethodChangeResponse_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentMethodChangeResponse_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentMethodChangeResponse_Data>(index_);
    }
    PaymentMethodChangeResponse_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentCurrencyAmount_Data> total;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentHandlerModifier_Data>>> modifiers;
  mojo::internal::Pointer<mojo::internal::String_Data> error;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_payment_method_errors;

 private:
  PaymentMethodChangeResponse_Data();
  ~PaymentMethodChangeResponse_Data() = delete;
};
static_assert(sizeof(PaymentMethodChangeResponse_Data) == 40,
              "Bad sizeof(PaymentMethodChangeResponse_Data)");
// Used by PaymentMethodChangeResponse::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentMethodChangeResponse_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentMethodChangeResponse_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentMethodChangeResponse_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentMethodChangeResponse_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentMethodChangeResponse_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_INTERNAL_H_