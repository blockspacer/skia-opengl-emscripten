// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SmsManager_GetNextMessage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SmsManager_GetNextMessage_Params_Data));
      new (data()) SmsManager_GetNextMessage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SmsManager_GetNextMessage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SmsManager_GetNextMessage_Params_Data>(index_);
    }
    SmsManager_GetNextMessage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;

 private:
  SmsManager_GetNextMessage_Params_Data();
  ~SmsManager_GetNextMessage_Params_Data() = delete;
};
static_assert(sizeof(SmsManager_GetNextMessage_Params_Data) == 16,
              "Bad sizeof(SmsManager_GetNextMessage_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SmsManager_GetNextMessage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SmsManager_GetNextMessage_ResponseParams_Data));
      new (data()) SmsManager_GetNextMessage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SmsManager_GetNextMessage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SmsManager_GetNextMessage_ResponseParams_Data>(index_);
    }
    SmsManager_GetNextMessage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SmsMessage_Data> sms;

 private:
  SmsManager_GetNextMessage_ResponseParams_Data();
  ~SmsManager_GetNextMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(SmsManager_GetNextMessage_ResponseParams_Data) == 16,
              "Bad sizeof(SmsManager_GetNextMessage_ResponseParams_Data)");

}  // namespace internal
class SmsManager_GetNextMessage_ParamsDataView {
 public:
  SmsManager_GetNextMessage_ParamsDataView() {}

  SmsManager_GetNextMessage_ParamsDataView(
      internal::SmsManager_GetNextMessage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeoutDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeout(UserType* output) {
    auto* pointer = data_->timeout.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::SmsManager_GetNextMessage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SmsManager_GetNextMessage_ResponseParamsDataView {
 public:
  SmsManager_GetNextMessage_ResponseParamsDataView() {}

  SmsManager_GetNextMessage_ResponseParamsDataView(
      internal::SmsManager_GetNextMessage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSmsDataView(
      SmsMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSms(UserType* output) {
    auto* pointer = data_->sms.Get();
    return mojo::internal::Deserialize<::blink::mojom::SmsMessageDataView>(
        pointer, output, context_);
  }
 private:
  internal::SmsManager_GetNextMessage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SmsManager_GetNextMessage_ParamsDataView::GetTimeoutDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timeout.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}


inline void SmsManager_GetNextMessage_ResponseParamsDataView::GetSmsDataView(
    SmsMessageDataView* output) {
  auto pointer = data_->sms.Get();
  *output = SmsMessageDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SMS_SMS_MANAGER_MOJOM_PARAMS_DATA_H_