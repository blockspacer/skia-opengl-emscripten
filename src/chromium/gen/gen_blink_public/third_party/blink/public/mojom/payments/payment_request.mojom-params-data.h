// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPaymentMethodChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnPaymentMethodChange_Params_Data));
      new (data()) PaymentRequestClient_OnPaymentMethodChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnPaymentMethodChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnPaymentMethodChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnPaymentMethodChange_Params_Data* operator->() { return data(); }

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
  PaymentRequestClient_OnPaymentMethodChange_Params_Data();
  ~PaymentRequestClient_OnPaymentMethodChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPaymentMethodChange_Params_Data) == 24,
              "Bad sizeof(PaymentRequestClient_OnPaymentMethodChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnShippingAddressChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data));
      new (data()) PaymentRequestClient_OnShippingAddressChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnShippingAddressChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnShippingAddressChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnShippingAddressChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentAddress_Data> address;

 private:
  PaymentRequestClient_OnShippingAddressChange_Params_Data();
  ~PaymentRequestClient_OnShippingAddressChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnShippingOptionChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data));
      new (data()) PaymentRequestClient_OnShippingOptionChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnShippingOptionChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnShippingOptionChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnShippingOptionChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> shipping_option_id;

 private:
  PaymentRequestClient_OnShippingOptionChange_Params_Data();
  ~PaymentRequestClient_OnShippingOptionChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPayerDetailChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnPayerDetailChange_Params_Data));
      new (data()) PaymentRequestClient_OnPayerDetailChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnPayerDetailChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnPayerDetailChange_Params_Data>(index_);
    }
    PaymentRequestClient_OnPayerDetailChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PayerDetail_Data> detail;

 private:
  PaymentRequestClient_OnPayerDetailChange_Params_Data();
  ~PaymentRequestClient_OnPayerDetailChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPayerDetailChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnPayerDetailChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPaymentResponse_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data));
      new (data()) PaymentRequestClient_OnPaymentResponse_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnPaymentResponse_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnPaymentResponse_Params_Data>(index_);
    }
    PaymentRequestClient_OnPaymentResponse_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentResponse_Data> response;

 private:
  PaymentRequestClient_OnPaymentResponse_Params_Data();
  ~PaymentRequestClient_OnPaymentResponse_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnError_Params_Data));
      new (data()) PaymentRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnError_Params_Data>(index_);
    }
    PaymentRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  PaymentRequestClient_OnError_Params_Data();
  ~PaymentRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnError_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnError_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnComplete_Params_Data));
      new (data()) PaymentRequestClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnComplete_Params_Data>(index_);
    }
    PaymentRequestClient_OnComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequestClient_OnComplete_Params_Data();
  ~PaymentRequestClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnComplete_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_OnComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnAbort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnAbort_Params_Data));
      new (data()) PaymentRequestClient_OnAbort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnAbort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnAbort_Params_Data>(index_);
    }
    PaymentRequestClient_OnAbort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t aborted_successfully : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequestClient_OnAbort_Params_Data();
  ~PaymentRequestClient_OnAbort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnAbort_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnAbort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnCanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data));
      new (data()) PaymentRequestClient_OnCanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnCanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnCanMakePayment_Params_Data>(index_);
    }
    PaymentRequestClient_OnCanMakePayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  PaymentRequestClient_OnCanMakePayment_Params_Data();
  ~PaymentRequestClient_OnCanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnHasEnrolledInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_OnHasEnrolledInstrument_Params_Data));
      new (data()) PaymentRequestClient_OnHasEnrolledInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_OnHasEnrolledInstrument_Params_Data>(index_);
    }
    PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  PaymentRequestClient_OnHasEnrolledInstrument_Params_Data();
  ~PaymentRequestClient_OnHasEnrolledInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnHasEnrolledInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnHasEnrolledInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_WarnNoFavicon_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data));
      new (data()) PaymentRequestClient_WarnNoFavicon_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequestClient_WarnNoFavicon_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequestClient_WarnNoFavicon_Params_Data>(index_);
    }
    PaymentRequestClient_WarnNoFavicon_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequestClient_WarnNoFavicon_Params_Data();
  ~PaymentRequestClient_WarnNoFavicon_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Init_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Init_Params_Data));
      new (data()) PaymentRequest_Init_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Init_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Init_Params_Data>(index_);
    }
    PaymentRequest_Init_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;
  mojo::internal::Pointer<internal::PaymentOptions_Data> options;

 private:
  PaymentRequest_Init_Params_Data();
  ~PaymentRequest_Init_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Init_Params_Data) == 40,
              "Bad sizeof(PaymentRequest_Init_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Show_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Show_Params_Data));
      new (data()) PaymentRequest_Show_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Show_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Show_Params_Data>(index_);
    }
    PaymentRequest_Show_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_user_gesture : 1;
  uint8_t wait_for_updated_details : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequest_Show_Params_Data();
  ~PaymentRequest_Show_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Show_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Show_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_UpdateWith_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_UpdateWith_Params_Data));
      new (data()) PaymentRequest_UpdateWith_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_UpdateWith_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_UpdateWith_Params_Data>(index_);
    }
    PaymentRequest_UpdateWith_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;

 private:
  PaymentRequest_UpdateWith_Params_Data();
  ~PaymentRequest_UpdateWith_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_UpdateWith_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_UpdateWith_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_NoUpdatedPaymentDetails_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data));
      new (data()) PaymentRequest_NoUpdatedPaymentDetails_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_NoUpdatedPaymentDetails_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_NoUpdatedPaymentDetails_Params_Data>(index_);
    }
    PaymentRequest_NoUpdatedPaymentDetails_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequest_NoUpdatedPaymentDetails_Params_Data();
  ~PaymentRequest_NoUpdatedPaymentDetails_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_NoUpdatedPaymentDetails_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Abort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Abort_Params_Data));
      new (data()) PaymentRequest_Abort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Abort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Abort_Params_Data>(index_);
    }
    PaymentRequest_Abort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PaymentRequest_Abort_Params_Data();
  ~PaymentRequest_Abort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Abort_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Complete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Complete_Params_Data));
      new (data()) PaymentRequest_Complete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Complete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Complete_Params_Data>(index_);
    }
    PaymentRequest_Complete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  PaymentRequest_Complete_Params_Data();
  ~PaymentRequest_Complete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Complete_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Retry_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_Retry_Params_Data));
      new (data()) PaymentRequest_Retry_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_Retry_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_Retry_Params_Data>(index_);
    }
    PaymentRequest_Retry_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentValidationErrors_Data> errors;

 private:
  PaymentRequest_Retry_Params_Data();
  ~PaymentRequest_Retry_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Retry_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Retry_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_CanMakePayment_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_CanMakePayment_Params_Data));
      new (data()) PaymentRequest_CanMakePayment_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_CanMakePayment_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_CanMakePayment_Params_Data>(index_);
    }
    PaymentRequest_CanMakePayment_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t legacy_mode : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequest_CanMakePayment_Params_Data();
  ~PaymentRequest_CanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_CanMakePayment_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_CanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_HasEnrolledInstrument_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentRequest_HasEnrolledInstrument_Params_Data));
      new (data()) PaymentRequest_HasEnrolledInstrument_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentRequest_HasEnrolledInstrument_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentRequest_HasEnrolledInstrument_Params_Data>(index_);
    }
    PaymentRequest_HasEnrolledInstrument_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t per_method_quota : 1;
  uint8_t padfinal_[7];

 private:
  PaymentRequest_HasEnrolledInstrument_Params_Data();
  ~PaymentRequest_HasEnrolledInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_HasEnrolledInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_HasEnrolledInstrument_Params_Data)");

}  // namespace internal
class PaymentRequestClient_OnPaymentMethodChange_ParamsDataView {
 public:
  PaymentRequestClient_OnPaymentMethodChange_ParamsDataView() {}

  PaymentRequestClient_OnPaymentMethodChange_ParamsDataView(
      internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodName(UserType* output) {
    auto* pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetStringifiedDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStringifiedDetails(UserType* output) {
    auto* pointer = data_->stringified_details.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestClient_OnShippingAddressChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingAddressChange_ParamsDataView() {}

  PaymentRequestClient_OnShippingAddressChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::payments::mojom::PaymentAddressDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAddress(UserType* output) {
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentAddressDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestClient_OnShippingOptionChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingOptionChange_ParamsDataView() {}

  PaymentRequestClient_OnShippingOptionChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetShippingOptionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadShippingOptionId(UserType* output) {
    auto* pointer = data_->shipping_option_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestClient_OnPayerDetailChange_ParamsDataView {
 public:
  PaymentRequestClient_OnPayerDetailChange_ParamsDataView() {}

  PaymentRequestClient_OnPayerDetailChange_ParamsDataView(
      internal::PaymentRequestClient_OnPayerDetailChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDetailDataView(
      PayerDetailDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetail(UserType* output) {
    auto* pointer = data_->detail.Get();
    return mojo::internal::Deserialize<::payments::mojom::PayerDetailDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnPayerDetailChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestClient_OnPaymentResponse_ParamsDataView {
 public:
  PaymentRequestClient_OnPaymentResponse_ParamsDataView() {}

  PaymentRequestClient_OnPaymentResponse_ParamsDataView(
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      PaymentResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponse(UserType* output) {
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequestClient_OnError_ParamsDataView {
 public:
  PaymentRequestClient_OnError_ParamsDataView() {}

  PaymentRequestClient_OnError_ParamsDataView(
      internal::PaymentRequestClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::payments::mojom::PaymentErrorReason>(
        data_value, output);
  }

  PaymentErrorReason error() const {
    return static_cast<PaymentErrorReason>(data_->error);
  }
 private:
  internal::PaymentRequestClient_OnError_Params_Data* data_ = nullptr;
};

class PaymentRequestClient_OnComplete_ParamsDataView {
 public:
  PaymentRequestClient_OnComplete_ParamsDataView() {}

  PaymentRequestClient_OnComplete_ParamsDataView(
      internal::PaymentRequestClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequestClient_OnComplete_Params_Data* data_ = nullptr;
};

class PaymentRequestClient_OnAbort_ParamsDataView {
 public:
  PaymentRequestClient_OnAbort_ParamsDataView() {}

  PaymentRequestClient_OnAbort_ParamsDataView(
      internal::PaymentRequestClient_OnAbort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool aborted_successfully() const {
    return data_->aborted_successfully;
  }
 private:
  internal::PaymentRequestClient_OnAbort_Params_Data* data_ = nullptr;
};

class PaymentRequestClient_OnCanMakePayment_ParamsDataView {
 public:
  PaymentRequestClient_OnCanMakePayment_ParamsDataView() {}

  PaymentRequestClient_OnCanMakePayment_ParamsDataView(
      internal::PaymentRequestClient_OnCanMakePayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::CanMakePaymentQueryResult>(
        data_value, output);
  }

  CanMakePaymentQueryResult result() const {
    return static_cast<CanMakePaymentQueryResult>(data_->result);
  }
 private:
  internal::PaymentRequestClient_OnCanMakePayment_Params_Data* data_ = nullptr;
};

class PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView {
 public:
  PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView() {}

  PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView(
      internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::HasEnrolledInstrumentQueryResult>(
        data_value, output);
  }

  HasEnrolledInstrumentQueryResult result() const {
    return static_cast<HasEnrolledInstrumentQueryResult>(data_->result);
  }
 private:
  internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* data_ = nullptr;
};

class PaymentRequestClient_WarnNoFavicon_ParamsDataView {
 public:
  PaymentRequestClient_WarnNoFavicon_ParamsDataView() {}

  PaymentRequestClient_WarnNoFavicon_ParamsDataView(
      internal::PaymentRequestClient_WarnNoFavicon_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequestClient_WarnNoFavicon_Params_Data* data_ = nullptr;
};

class PaymentRequest_Init_ParamsDataView {
 public:
  PaymentRequest_Init_ParamsDataView() {}

  PaymentRequest_Init_ParamsDataView(
      internal::PaymentRequest_Init_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::payments::mojom::PaymentRequestClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<PaymentMethodDataDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, context_);
  }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentDetailsDataView>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PaymentOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequest_Init_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequest_Show_ParamsDataView {
 public:
  PaymentRequest_Show_ParamsDataView() {}

  PaymentRequest_Show_ParamsDataView(
      internal::PaymentRequest_Show_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_user_gesture() const {
    return data_->is_user_gesture;
  }
  bool wait_for_updated_details() const {
    return data_->wait_for_updated_details;
  }
 private:
  internal::PaymentRequest_Show_Params_Data* data_ = nullptr;
};

class PaymentRequest_UpdateWith_ParamsDataView {
 public:
  PaymentRequest_UpdateWith_ParamsDataView() {}

  PaymentRequest_UpdateWith_ParamsDataView(
      internal::PaymentRequest_UpdateWith_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentDetailsDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequest_UpdateWith_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequest_NoUpdatedPaymentDetails_ParamsDataView {
 public:
  PaymentRequest_NoUpdatedPaymentDetails_ParamsDataView() {}

  PaymentRequest_NoUpdatedPaymentDetails_ParamsDataView(
      internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_NoUpdatedPaymentDetails_Params_Data* data_ = nullptr;
};

class PaymentRequest_Abort_ParamsDataView {
 public:
  PaymentRequest_Abort_ParamsDataView() {}

  PaymentRequest_Abort_ParamsDataView(
      internal::PaymentRequest_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_Abort_Params_Data* data_ = nullptr;
};

class PaymentRequest_Complete_ParamsDataView {
 public:
  PaymentRequest_Complete_ParamsDataView() {}

  PaymentRequest_Complete_ParamsDataView(
      internal::PaymentRequest_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::PaymentComplete>(
        data_value, output);
  }

  PaymentComplete result() const {
    return static_cast<PaymentComplete>(data_->result);
  }
 private:
  internal::PaymentRequest_Complete_Params_Data* data_ = nullptr;
};

class PaymentRequest_Retry_ParamsDataView {
 public:
  PaymentRequest_Retry_ParamsDataView() {}

  PaymentRequest_Retry_ParamsDataView(
      internal::PaymentRequest_Retry_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorsDataView(
      ::payments::mojom::PaymentValidationErrorsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadErrors(UserType* output) {
    auto* pointer = data_->errors.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentValidationErrorsDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequest_Retry_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentRequest_CanMakePayment_ParamsDataView {
 public:
  PaymentRequest_CanMakePayment_ParamsDataView() {}

  PaymentRequest_CanMakePayment_ParamsDataView(
      internal::PaymentRequest_CanMakePayment_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool legacy_mode() const {
    return data_->legacy_mode;
  }
 private:
  internal::PaymentRequest_CanMakePayment_Params_Data* data_ = nullptr;
};

class PaymentRequest_HasEnrolledInstrument_ParamsDataView {
 public:
  PaymentRequest_HasEnrolledInstrument_ParamsDataView() {}

  PaymentRequest_HasEnrolledInstrument_ParamsDataView(
      internal::PaymentRequest_HasEnrolledInstrument_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool per_method_quota() const {
    return data_->per_method_quota;
  }
 private:
  internal::PaymentRequest_HasEnrolledInstrument_Params_Data* data_ = nullptr;
};


inline void PaymentRequestClient_OnPaymentMethodChange_ParamsDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentRequestClient_OnPaymentMethodChange_ParamsDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentRequestClient_OnShippingAddressChange_ParamsDataView::GetAddressDataView(
    ::payments::mojom::PaymentAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::payments::mojom::PaymentAddressDataView(pointer, context_);
}


inline void PaymentRequestClient_OnShippingOptionChange_ParamsDataView::GetShippingOptionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->shipping_option_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void PaymentRequestClient_OnPayerDetailChange_ParamsDataView::GetDetailDataView(
    PayerDetailDataView* output) {
  auto pointer = data_->detail.Get();
  *output = PayerDetailDataView(pointer, context_);
}


inline void PaymentRequestClient_OnPaymentResponse_ParamsDataView::GetResponseDataView(
    PaymentResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = PaymentResponseDataView(pointer, context_);
}














inline void PaymentRequest_Init_ParamsDataView::GetMethodDataDataView(
    mojo::ArrayDataView<PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<PaymentMethodDataDataView>(pointer, context_);
}
inline void PaymentRequest_Init_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, context_);
}
inline void PaymentRequest_Init_ParamsDataView::GetOptionsDataView(
    PaymentOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PaymentOptionsDataView(pointer, context_);
}




inline void PaymentRequest_UpdateWith_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, context_);
}








inline void PaymentRequest_Retry_ParamsDataView::GetErrorsDataView(
    ::payments::mojom::PaymentValidationErrorsDataView* output) {
  auto pointer = data_->errors.Get();
  *output = ::payments::mojom::PaymentValidationErrorsDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_