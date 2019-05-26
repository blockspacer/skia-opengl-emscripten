// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace payments {
namespace mojom {
namespace internal {
class PaymentAddress_Data;
class PaymentCurrencyAmount_Data;
class PaymentValidationErrors_Data;
class PayerErrors_Data;
class AddressErrors_Data;

#pragma pack(push, 1)
class  PaymentAddress_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentAddress_Data));
      new (data()) PaymentAddress_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentAddress_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentAddress_Data>(index_);
    }
    PaymentAddress_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> country;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> address_line;
  mojo::internal::Pointer<mojo::internal::String_Data> region;
  mojo::internal::Pointer<mojo::internal::String_Data> city;
  mojo::internal::Pointer<mojo::internal::String_Data> dependent_locality;
  mojo::internal::Pointer<mojo::internal::String_Data> postal_code;
  mojo::internal::Pointer<mojo::internal::String_Data> sorting_code;
  mojo::internal::Pointer<mojo::internal::String_Data> organization;
  mojo::internal::Pointer<mojo::internal::String_Data> recipient;
  mojo::internal::Pointer<mojo::internal::String_Data> phone;

 private:
  PaymentAddress_Data();
  ~PaymentAddress_Data() = delete;
};
static_assert(sizeof(PaymentAddress_Data) == 88,
              "Bad sizeof(PaymentAddress_Data)");
// Used by PaymentAddress::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentAddress_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentAddress_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentAddress_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentAddress_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentAddress_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PaymentCurrencyAmount_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentCurrencyAmount_Data));
      new (data()) PaymentCurrencyAmount_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentCurrencyAmount_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentCurrencyAmount_Data>(index_);
    }
    PaymentCurrencyAmount_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> currency;
  mojo::internal::Pointer<mojo::internal::String_Data> value;

 private:
  PaymentCurrencyAmount_Data();
  ~PaymentCurrencyAmount_Data() = delete;
};
static_assert(sizeof(PaymentCurrencyAmount_Data) == 24,
              "Bad sizeof(PaymentCurrencyAmount_Data)");
// Used by PaymentCurrencyAmount::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentCurrencyAmount_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentCurrencyAmount_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentCurrencyAmount_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentCurrencyAmount_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentCurrencyAmount_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PaymentValidationErrors_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentValidationErrors_Data));
      new (data()) PaymentValidationErrors_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentValidationErrors_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentValidationErrors_Data>(index_);
    }
    PaymentValidationErrors_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;
  mojo::internal::Pointer<internal::PayerErrors_Data> payer;
  mojo::internal::Pointer<internal::AddressErrors_Data> shipping_address;

 private:
  PaymentValidationErrors_Data();
  ~PaymentValidationErrors_Data() = delete;
};
static_assert(sizeof(PaymentValidationErrors_Data) == 32,
              "Bad sizeof(PaymentValidationErrors_Data)");
// Used by PaymentValidationErrors::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PaymentValidationErrors_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PaymentValidationErrors_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PaymentValidationErrors_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PaymentValidationErrors_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PaymentValidationErrors_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PayerErrors_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PayerErrors_Data));
      new (data()) PayerErrors_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PayerErrors_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PayerErrors_Data>(index_);
    }
    PayerErrors_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> email;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> phone;

 private:
  PayerErrors_Data();
  ~PayerErrors_Data() = delete;
};
static_assert(sizeof(PayerErrors_Data) == 32,
              "Bad sizeof(PayerErrors_Data)");
// Used by PayerErrors::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PayerErrors_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PayerErrors_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PayerErrors_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PayerErrors_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PayerErrors_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AddressErrors_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AddressErrors_Data));
      new (data()) AddressErrors_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AddressErrors_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AddressErrors_Data>(index_);
    }
    AddressErrors_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> address_line;
  mojo::internal::Pointer<mojo::internal::String_Data> city;
  mojo::internal::Pointer<mojo::internal::String_Data> country;
  mojo::internal::Pointer<mojo::internal::String_Data> dependent_locality;
  mojo::internal::Pointer<mojo::internal::String_Data> organization;
  mojo::internal::Pointer<mojo::internal::String_Data> phone;
  mojo::internal::Pointer<mojo::internal::String_Data> postal_code;
  mojo::internal::Pointer<mojo::internal::String_Data> recipient;
  mojo::internal::Pointer<mojo::internal::String_Data> region;
  mojo::internal::Pointer<mojo::internal::String_Data> sorting_code;

 private:
  AddressErrors_Data();
  ~AddressErrors_Data() = delete;
};
static_assert(sizeof(AddressErrors_Data) == 88,
              "Bad sizeof(AddressErrors_Data)");
// Used by AddressErrors::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AddressErrors_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AddressErrors_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AddressErrors_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    AddressErrors_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AddressErrors_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace payments

#endif  // COMPONENTS_PAYMENTS_MOJOM_PAYMENT_REQUEST_DATA_MOJOM_SHARED_INTERNAL_H_