// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class SpellCheckSuggestion_Data;
class TextSuggestion_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SpellCheckSuggestion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SpellCheckSuggestion_Data));
      new (data()) SpellCheckSuggestion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SpellCheckSuggestion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SpellCheckSuggestion_Data>(index_);
    }
    SpellCheckSuggestion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;

 private:
  SpellCheckSuggestion_Data();
  ~SpellCheckSuggestion_Data() = delete;
};
static_assert(sizeof(SpellCheckSuggestion_Data) == 16,
              "Bad sizeof(SpellCheckSuggestion_Data)");
// Used by SpellCheckSuggestion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SpellCheckSuggestion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SpellCheckSuggestion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SpellCheckSuggestion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SpellCheckSuggestion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SpellCheckSuggestion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TextSuggestion_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextSuggestion_Data));
      new (data()) TextSuggestion_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextSuggestion_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextSuggestion_Data>(index_);
    }
    TextSuggestion_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t marker_tag;
  int32_t suggestion_index;
  mojo::internal::Pointer<mojo::internal::String_Data> prefix;
  mojo::internal::Pointer<mojo::internal::String_Data> suggestion;
  mojo::internal::Pointer<mojo::internal::String_Data> suffix;

 private:
  TextSuggestion_Data();
  ~TextSuggestion_Data() = delete;
};
static_assert(sizeof(TextSuggestion_Data) == 40,
              "Bad sizeof(TextSuggestion_Data)");
// Used by TextSuggestion::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TextSuggestion_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TextSuggestion_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TextSuggestion_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TextSuggestion_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TextSuggestion_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_SHARED_INTERNAL_H_