// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace font_service {
namespace mojom {
namespace internal {
class TypefaceStyle_Data;
class FontIdentity_Data;
class FontRenderStyle_Data;

struct TypefaceSlant_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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

struct RenderStyleSwitch_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
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
class  TypefaceStyle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TypefaceStyle_Data));
      new (data()) TypefaceStyle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TypefaceStyle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TypefaceStyle_Data>(index_);
    }
    TypefaceStyle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t weight;
  uint8_t width;
  uint8_t pad1_[1];
  int32_t slant;

 private:
  TypefaceStyle_Data();
  ~TypefaceStyle_Data() = delete;
};
static_assert(sizeof(TypefaceStyle_Data) == 16,
              "Bad sizeof(TypefaceStyle_Data)");
// Used by TypefaceStyle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TypefaceStyle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TypefaceStyle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TypefaceStyle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TypefaceStyle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TypefaceStyle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FontIdentity_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontIdentity_Data));
      new (data()) FontIdentity_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontIdentity_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontIdentity_Data>(index_);
    }
    FontIdentity_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  int32_t ttc_index;
  mojo::internal::Pointer<mojo::internal::String_Data> str_representation;

 private:
  FontIdentity_Data();
  ~FontIdentity_Data() = delete;
};
static_assert(sizeof(FontIdentity_Data) == 24,
              "Bad sizeof(FontIdentity_Data)");
// Used by FontIdentity::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FontIdentity_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FontIdentity_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FontIdentity_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FontIdentity_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FontIdentity_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  FontRenderStyle_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FontRenderStyle_Data));
      new (data()) FontRenderStyle_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FontRenderStyle_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FontRenderStyle_Data>(index_);
    }
    FontRenderStyle_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t use_bitmaps;
  int32_t use_autohint;
  int32_t use_hinting;
  uint8_t hint_style;
  uint8_t pad3_[3];
  int32_t use_antialias;
  int32_t use_subpixel_rendering;
  int32_t use_subpixel_positioning;
  uint8_t padfinal_[4];

 private:
  FontRenderStyle_Data();
  ~FontRenderStyle_Data() = delete;
};
static_assert(sizeof(FontRenderStyle_Data) == 40,
              "Bad sizeof(FontRenderStyle_Data)");
// Used by FontRenderStyle::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FontRenderStyle_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FontRenderStyle_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FontRenderStyle_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    FontRenderStyle_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FontRenderStyle_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace font_service

#endif  // COMPONENTS_SERVICES_FONT_PUBLIC_INTERFACES_FONT_SERVICE_MOJOM_SHARED_INTERNAL_H_