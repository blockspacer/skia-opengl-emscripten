// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerHost_ChangePaymentMethod_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerHost_ChangePaymentMethod_Params_Data));
      new (data()) PaymentHandlerHost_ChangePaymentMethod_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerHost_ChangePaymentMethod_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerHost_ChangePaymentMethod_Params_Data>(index_);
    }
    PaymentHandlerHost_ChangePaymentMethod_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentHandlerMethodData_Data> method_data;

 private:
  PaymentHandlerHost_ChangePaymentMethod_Params_Data();
  ~PaymentHandlerHost_ChangePaymentMethod_Params_Data() = delete;
};
static_assert(sizeof(PaymentHandlerHost_ChangePaymentMethod_Params_Data) == 16,
              "Bad sizeof(PaymentHandlerHost_ChangePaymentMethod_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data));
      new (data()) PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data>(index_);
    }
    PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentMethodChangeResponse_Data> response_data;

 private:
  PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data();
  ~PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data() = delete;
};
static_assert(sizeof(PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data) == 16,
              "Bad sizeof(PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data)");

}  // namespace internal
class PaymentHandlerHost_ChangePaymentMethod_ParamsDataView {
 public:
  PaymentHandlerHost_ChangePaymentMethod_ParamsDataView() {}

  PaymentHandlerHost_ChangePaymentMethod_ParamsDataView(
      internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodDataDataView(
      PaymentHandlerMethodDataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMethodData(UserType* output) {
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerHost_ChangePaymentMethod_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PaymentHandlerHost_ChangePaymentMethod_ResponseParamsDataView {
 public:
  PaymentHandlerHost_ChangePaymentMethod_ResponseParamsDataView() {}

  PaymentHandlerHost_ChangePaymentMethod_ResponseParamsDataView(
      internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataDataView(
      PaymentMethodChangeResponseDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResponseData(UserType* output) {
    auto* pointer = data_->response_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentMethodChangeResponseDataView>(
        pointer, output, context_);
  }
 private:
  internal::PaymentHandlerHost_ChangePaymentMethod_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentHandlerHost_ChangePaymentMethod_ParamsDataView::GetMethodDataDataView(
    PaymentHandlerMethodDataDataView* output) {
  auto pointer = data_->method_data.Get();
  *output = PaymentHandlerMethodDataDataView(pointer, context_);
}


inline void PaymentHandlerHost_ChangePaymentMethod_ResponseParamsDataView::GetResponseDataDataView(
    PaymentMethodChangeResponseDataView* output) {
  auto pointer = data_->response_data.Get();
  *output = PaymentMethodChangeResponseDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_PARAMS_DATA_H_