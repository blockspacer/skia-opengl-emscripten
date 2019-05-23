// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace payments {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_Init_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_Init_Params_Data));
      new (data()) PaymentManager_Init_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_Init_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_Init_Params_Data>(index_);
    }
    PaymentManager_Init_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> context_url;
  mojo::internal::Pointer<mojo::internal::String_Data> service_worker_scope;

 private:
  PaymentManager_Init_Params_Data();
  ~PaymentManager_Init_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_Init_Params_Data) == 24,
              "Bad sizeof(PaymentManager_Init_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_DeletePaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_DeletePaymentInstrument_Params_Data));
      new (data()) PaymentManager_DeletePaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_DeletePaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_DeletePaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_DeletePaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_DeletePaymentInstrument_Params_Data();
  ~PaymentManager_DeletePaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_DeletePaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_DeletePaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_DeletePaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_DeletePaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_DeletePaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_DeletePaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_DeletePaymentInstrument_ResponseParams_Data();
  ~PaymentManager_DeletePaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_DeletePaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_GetPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_GetPaymentInstrument_Params_Data));
      new (data()) PaymentManager_GetPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_GetPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_GetPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_GetPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_GetPaymentInstrument_Params_Data();
  ~PaymentManager_GetPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_GetPaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_GetPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_GetPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_GetPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_GetPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_GetPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_GetPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentInstrument_Data> instrument;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_GetPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_GetPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data) == 24,
              "Bad sizeof(PaymentManager_GetPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_KeysOfPaymentInstruments_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data));
      new (data()) PaymentManager_KeysOfPaymentInstruments_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_KeysOfPaymentInstruments_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_KeysOfPaymentInstruments_Params_Data>(index_);
    }
    PaymentManager_KeysOfPaymentInstruments_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentManager_KeysOfPaymentInstruments_Params_Data();
  ~PaymentManager_KeysOfPaymentInstruments_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data) == 8,
              "Bad sizeof(PaymentManager_KeysOfPaymentInstruments_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data));
      new (data()) PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data>(index_);
    }
    PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> keys;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data();
  ~PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data) == 24,
              "Bad sizeof(PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_HasPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_HasPaymentInstrument_Params_Data));
      new (data()) PaymentManager_HasPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_HasPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_HasPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_HasPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;

 private:
  PaymentManager_HasPaymentInstrument_Params_Data();
  ~PaymentManager_HasPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_HasPaymentInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentManager_HasPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_HasPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_HasPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_HasPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_HasPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_HasPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_HasPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_HasPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_HasPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_SetPaymentInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetPaymentInstrument_Params_Data));
      new (data()) PaymentManager_SetPaymentInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetPaymentInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetPaymentInstrument_Params_Data>(index_);
    }
    PaymentManager_SetPaymentInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> instrument_key;
  mojo::internal::Pointer<internal::PaymentInstrument_Data> instrument;

 private:
  PaymentManager_SetPaymentInstrument_Params_Data();
  ~PaymentManager_SetPaymentInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetPaymentInstrument_Params_Data) == 24,
              "Bad sizeof(PaymentManager_SetPaymentInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_SetPaymentInstrument_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data));
      new (data()) PaymentManager_SetPaymentInstrument_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetPaymentInstrument_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetPaymentInstrument_ResponseParams_Data>(index_);
    }
    PaymentManager_SetPaymentInstrument_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_SetPaymentInstrument_ResponseParams_Data();
  ~PaymentManager_SetPaymentInstrument_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_SetPaymentInstrument_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_ClearPaymentInstruments_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_ClearPaymentInstruments_Params_Data));
      new (data()) PaymentManager_ClearPaymentInstruments_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_ClearPaymentInstruments_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_ClearPaymentInstruments_Params_Data>(index_);
    }
    PaymentManager_ClearPaymentInstruments_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentManager_ClearPaymentInstruments_Params_Data();
  ~PaymentManager_ClearPaymentInstruments_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_ClearPaymentInstruments_Params_Data) == 8,
              "Bad sizeof(PaymentManager_ClearPaymentInstruments_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_ClearPaymentInstruments_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data));
      new (data()) PaymentManager_ClearPaymentInstruments_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_ClearPaymentInstruments_ResponseParams_Data>(index_);
    }
    PaymentManager_ClearPaymentInstruments_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  PaymentManager_ClearPaymentInstruments_ResponseParams_Data();
  ~PaymentManager_ClearPaymentInstruments_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentManager_ClearPaymentInstruments_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentManager_SetUserHint_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentManager_SetUserHint_Params_Data));
      new (data()) PaymentManager_SetUserHint_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentManager_SetUserHint_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentManager_SetUserHint_Params_Data>(index_);
    }
    PaymentManager_SetUserHint_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> user_hint;

 private:
  PaymentManager_SetUserHint_Params_Data();
  ~PaymentManager_SetUserHint_Params_Data() = delete;
};
static_assert(sizeof(PaymentManager_SetUserHint_Params_Data) == 16,
              "Bad sizeof(PaymentManager_SetUserHint_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t payment_aborted : 1;
  uint8_t padfinal_[7];

 private:
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data) == 16,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t can_make_payment : 1;
  uint8_t padfinal_[7];

 private:
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data) == 16,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data));
      new (data()) PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data>(index_);
    }
    PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentHandlerResponse_Data> response;

 private:
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data();
  ~PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data) == 16,
              "Bad sizeof(PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data)");

}  // namespace internal
class PaymentManager_Init_ParamsDataView {
 public:
  PaymentManager_Init_ParamsDataView() {}

  PaymentManager_Init_ParamsDataView(
      internal::PaymentManager_Init_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetContextUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContextUrl(UserType* output) {
    auto* pointer = data_->context_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetServiceWorkerScopeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceWorkerScope(UserType* output) {
    auto* pointer = data_->service_worker_scope.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_Init_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_DeletePaymentInstrument_ParamsDataView {
 public:
  PaymentManager_DeletePaymentInstrument_ParamsDataView() {}

  PaymentManager_DeletePaymentInstrument_ParamsDataView(
      internal::PaymentManager_DeletePaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_DeletePaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_DeletePaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_DeletePaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_DeletePaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_DeletePaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_GetPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_GetPaymentInstrument_ParamsDataView() {}

  PaymentManager_GetPaymentInstrument_ParamsDataView(
      internal::PaymentManager_GetPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_GetPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_GetPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_GetPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_GetPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentDataView(
      PaymentInstrumentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrument(UserType* output) {
    auto* pointer = data_->instrument.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentInstrumentDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_GetPaymentInstrument_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_KeysOfPaymentInstruments_ParamsDataView {
 public:
  PaymentManager_KeysOfPaymentInstruments_ParamsDataView() {}

  PaymentManager_KeysOfPaymentInstruments_ParamsDataView(
      internal::PaymentManager_KeysOfPaymentInstruments_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentManager_KeysOfPaymentInstruments_Params_Data* data_ = nullptr;
};

class PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView {
 public:
  PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView() {}

  PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView(
      internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeysDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeys(UserType* output) {
    auto* pointer = data_->keys.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_KeysOfPaymentInstruments_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_HasPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_HasPaymentInstrument_ParamsDataView() {}

  PaymentManager_HasPaymentInstrument_ParamsDataView(
      internal::PaymentManager_HasPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_HasPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_HasPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_HasPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_HasPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_HasPaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_SetPaymentInstrument_ParamsDataView {
 public:
  PaymentManager_SetPaymentInstrument_ParamsDataView() {}

  PaymentManager_SetPaymentInstrument_ParamsDataView(
      internal::PaymentManager_SetPaymentInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstrumentKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrumentKey(UserType* output) {
    auto* pointer = data_->instrument_key.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetInstrumentDataView(
      PaymentInstrumentDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstrument(UserType* output) {
    auto* pointer = data_->instrument.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentInstrumentDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_SetPaymentInstrument_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentManager_SetPaymentInstrument_ResponseParamsDataView {
 public:
  PaymentManager_SetPaymentInstrument_ResponseParamsDataView() {}

  PaymentManager_SetPaymentInstrument_ResponseParamsDataView(
      internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_SetPaymentInstrument_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_ClearPaymentInstruments_ParamsDataView {
 public:
  PaymentManager_ClearPaymentInstruments_ParamsDataView() {}

  PaymentManager_ClearPaymentInstruments_ParamsDataView(
      internal::PaymentManager_ClearPaymentInstruments_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentManager_ClearPaymentInstruments_Params_Data* data_ = nullptr;
};

class PaymentManager_ClearPaymentInstruments_ResponseParamsDataView {
 public:
  PaymentManager_ClearPaymentInstruments_ResponseParamsDataView() {}

  PaymentManager_ClearPaymentInstruments_ResponseParamsDataView(
      internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerStatus>(
        data_value, output);
  }

  PaymentHandlerStatus status() const {
    return static_cast<PaymentHandlerStatus>(data_->status);
  }
 private:
  internal::PaymentManager_ClearPaymentInstruments_ResponseParams_Data* data_ = nullptr;
};

class PaymentManager_SetUserHint_ParamsDataView {
 public:
  PaymentManager_SetUserHint_ParamsDataView() {}

  PaymentManager_SetUserHint_ParamsDataView(
      internal::PaymentManager_SetUserHint_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUserHintDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserHint(UserType* output) {
    auto* pointer = data_->user_hint.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentManager_SetUserHint_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForAbortPayment_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool payment_aborted() const {
    return data_->payment_aborted;
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForAbortPayment_Params_Data* data_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForCanMakePayment_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool can_make_payment() const {
    return data_->can_make_payment;
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForCanMakePayment_Params_Data* data_ = nullptr;
};

class PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView {
 public:
  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView() {}

  PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView(
      internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      PaymentHandlerResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerResponseCallback_OnResponseForPaymentRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentManager_Init_ParamsDataView::GetContextUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->context_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void PaymentManager_Init_ParamsDataView::GetServiceWorkerScopeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_worker_scope.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentManager_DeletePaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PaymentManager_GetPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentManager_GetPaymentInstrument_ResponseParamsDataView::GetInstrumentDataView(
    PaymentInstrumentDataView* output) {
  auto pointer = data_->instrument.Get();
  *output = PaymentInstrumentDataView(pointer, context_);
}




inline void PaymentManager_KeysOfPaymentInstruments_ResponseParamsDataView::GetKeysDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->keys.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void PaymentManager_HasPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void PaymentManager_SetPaymentInstrument_ParamsDataView::GetInstrumentKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instrument_key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentManager_SetPaymentInstrument_ParamsDataView::GetInstrumentDataView(
    PaymentInstrumentDataView* output) {
  auto pointer = data_->instrument.Get();
  *output = PaymentInstrumentDataView(pointer, context_);
}








inline void PaymentManager_SetUserHint_ParamsDataView::GetUserHintDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_hint.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void PaymentHandlerResponseCallback_OnResponseForPaymentRequest_ParamsDataView::GetResponseDataView(
    PaymentHandlerResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = PaymentHandlerResponseDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_PARAMS_DATA_H_