// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DateTimeChooser_OpenDateTimeDialog_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DateTimeChooser_OpenDateTimeDialog_Params_Data));
      new (data()) DateTimeChooser_OpenDateTimeDialog_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DateTimeChooser_OpenDateTimeDialog_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DateTimeChooser_OpenDateTimeDialog_Params_Data>(index_);
    }
    DateTimeChooser_OpenDateTimeDialog_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DateTimeDialogValue_Data> value;

 private:
  DateTimeChooser_OpenDateTimeDialog_Params_Data();
  ~DateTimeChooser_OpenDateTimeDialog_Params_Data() = delete;
};
static_assert(sizeof(DateTimeChooser_OpenDateTimeDialog_Params_Data) == 16,
              "Bad sizeof(DateTimeChooser_OpenDateTimeDialog_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data));
      new (data()) DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data>(index_);
    }
    DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  double dialog_value;

 private:
  DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data();
  ~DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data() = delete;
};
static_assert(sizeof(DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data) == 24,
              "Bad sizeof(DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data)");

}  // namespace internal
class DateTimeChooser_OpenDateTimeDialog_ParamsDataView {
 public:
  DateTimeChooser_OpenDateTimeDialog_ParamsDataView() {}

  DateTimeChooser_OpenDateTimeDialog_ParamsDataView(
      internal::DateTimeChooser_OpenDateTimeDialog_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      DateTimeDialogValueDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<::blink::mojom::DateTimeDialogValueDataView>(
        pointer, output, context_);
  }
 private:
  internal::DateTimeChooser_OpenDateTimeDialog_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DateTimeChooser_OpenDateTimeDialog_ResponseParamsDataView {
 public:
  DateTimeChooser_OpenDateTimeDialog_ResponseParamsDataView() {}

  DateTimeChooser_OpenDateTimeDialog_ResponseParamsDataView(
      internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  double dialog_value() const {
    return data_->dialog_value;
  }
 private:
  internal::DateTimeChooser_OpenDateTimeDialog_ResponseParams_Data* data_ = nullptr;
};


inline void DateTimeChooser_OpenDateTimeDialog_ParamsDataView::GetValueDataView(
    DateTimeDialogValueDataView* output) {
  auto pointer = data_->value.Get();
  *output = DateTimeDialogValueDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_PARAMS_DATA_H_