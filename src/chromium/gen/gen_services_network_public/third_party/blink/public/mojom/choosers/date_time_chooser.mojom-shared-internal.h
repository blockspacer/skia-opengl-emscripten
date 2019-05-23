// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class DateTimeSuggestion_Data;
class DateTimeDialogValue_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DateTimeSuggestion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DateTimeSuggestion_Data));
      new (data()) DateTimeSuggestion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DateTimeSuggestion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DateTimeSuggestion_Data>(index_);
    }
    DateTimeSuggestion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> localized_value;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> label;

 private:
  DateTimeSuggestion_Data();
  ~DateTimeSuggestion_Data() = delete;
};
static_assert(sizeof(DateTimeSuggestion_Data) == 32,
              "Bad sizeof(DateTimeSuggestion_Data)");
// Used by DateTimeSuggestion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DateTimeSuggestion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DateTimeSuggestion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DateTimeSuggestion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DateTimeSuggestion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DateTimeSuggestion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) DateTimeDialogValue_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DateTimeDialogValue_Data));
      new (data()) DateTimeDialogValue_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DateTimeDialogValue_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DateTimeDialogValue_Data>(index_);
    }
    DateTimeDialogValue_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t dialog_type;
  uint8_t pad0_[4];
  double dialog_value;
  double minimum;
  double maximum;
  double step;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DateTimeSuggestion_Data>>> suggestions;

 private:
  DateTimeDialogValue_Data();
  ~DateTimeDialogValue_Data() = delete;
};
static_assert(sizeof(DateTimeDialogValue_Data) == 56,
              "Bad sizeof(DateTimeDialogValue_Data)");
// Used by DateTimeDialogValue::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DateTimeDialogValue_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DateTimeDialogValue_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DateTimeDialogValue_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DateTimeDialogValue_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DateTimeDialogValue_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_SHARED_INTERNAL_H_