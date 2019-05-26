// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace content_settings {
namespace mojom {
namespace internal {
class PatternParts_Data;
class ContentSettingsPattern_Data;
class ContentSettingPatternSource_Data;
class RendererContentSettingRules_Data;

struct ContentSetting_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
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
class  PatternParts_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PatternParts_Data));
      new (data()) PatternParts_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PatternParts_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PatternParts_Data>(index_);
    }
    PatternParts_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> scheme;
  uint8_t is_scheme_wildcard : 1;
  uint8_t has_domain_wildcard : 1;
  uint8_t is_port_wildcard : 1;
  uint8_t is_path_wildcard : 1;
  uint8_t pad4_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  mojo::internal::Pointer<mojo::internal::String_Data> port;
  mojo::internal::Pointer<mojo::internal::String_Data> path;

 private:
  PatternParts_Data();
  ~PatternParts_Data() = delete;
};
static_assert(sizeof(PatternParts_Data) == 48,
              "Bad sizeof(PatternParts_Data)");
// Used by PatternParts::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PatternParts_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PatternParts_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PatternParts_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    PatternParts_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PatternParts_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContentSettingsPattern_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentSettingsPattern_Data));
      new (data()) ContentSettingsPattern_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentSettingsPattern_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentSettingsPattern_Data>(index_);
    }
    ContentSettingsPattern_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PatternParts_Data> parts;
  uint8_t is_valid : 1;
  uint8_t padfinal_[7];

 private:
  ContentSettingsPattern_Data();
  ~ContentSettingsPattern_Data() = delete;
};
static_assert(sizeof(ContentSettingsPattern_Data) == 24,
              "Bad sizeof(ContentSettingsPattern_Data)");
// Used by ContentSettingsPattern::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContentSettingsPattern_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContentSettingsPattern_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContentSettingsPattern_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContentSettingsPattern_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContentSettingsPattern_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ContentSettingPatternSource_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ContentSettingPatternSource_Data));
      new (data()) ContentSettingPatternSource_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ContentSettingPatternSource_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ContentSettingPatternSource_Data>(index_);
    }
    ContentSettingPatternSource_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ContentSettingsPattern_Data> primary_pattern;
  mojo::internal::Pointer<internal::ContentSettingsPattern_Data> secondary_pattern;
  ::mojo_base::mojom::internal::Value_Data setting_value;
  mojo::internal::Pointer<mojo::internal::String_Data> source;
  uint8_t incognito : 1;
  uint8_t padfinal_[7];

 private:
  ContentSettingPatternSource_Data();
  ~ContentSettingPatternSource_Data() = delete;
};
static_assert(sizeof(ContentSettingPatternSource_Data) == 56,
              "Bad sizeof(ContentSettingPatternSource_Data)");
// Used by ContentSettingPatternSource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ContentSettingPatternSource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ContentSettingPatternSource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ContentSettingPatternSource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ContentSettingPatternSource_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ContentSettingPatternSource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RendererContentSettingRules_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererContentSettingRules_Data));
      new (data()) RendererContentSettingRules_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererContentSettingRules_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererContentSettingRules_Data>(index_);
    }
    RendererContentSettingRules_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContentSettingPatternSource_Data>>> image_rules;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContentSettingPatternSource_Data>>> script_rules;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContentSettingPatternSource_Data>>> autoplay_rules;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContentSettingPatternSource_Data>>> client_hints_rules;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::ContentSettingPatternSource_Data>>> popup_redirect_rules;

 private:
  RendererContentSettingRules_Data();
  ~RendererContentSettingRules_Data() = delete;
};
static_assert(sizeof(RendererContentSettingRules_Data) == 48,
              "Bad sizeof(RendererContentSettingRules_Data)");
// Used by RendererContentSettingRules::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RendererContentSettingRules_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RendererContentSettingRules_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RendererContentSettingRules_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RendererContentSettingRules_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RendererContentSettingRules_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace content_settings

#endif  // COMPONENTS_CONTENT_SETTINGS_CORE_COMMON_CONTENT_SETTINGS_MOJOM_SHARED_INTERNAL_H_