// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
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
class NotificationAction_Data;
class NotificationData_Data;
class NotificationResources_Data;

struct NotificationDirection_Data {
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

struct NotificationActionType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationAction_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationAction_Data));
      new (data()) NotificationAction_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationAction_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationAction_Data>(index_);
    }
    NotificationAction_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> action;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> placeholder;

 private:
  NotificationAction_Data();
  ~NotificationAction_Data() = delete;
};
static_assert(sizeof(NotificationAction_Data) == 48,
              "Bad sizeof(NotificationAction_Data)");
// Used by NotificationAction::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationAction_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationAction_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationAction_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NotificationAction_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationAction_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationData_Data));
      new (data()) NotificationData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationData_Data>(index_);
    }
    NotificationData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  int32_t direction;
  uint8_t renotify : 1;
  uint8_t silent : 1;
  uint8_t require_interaction : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<mojo::internal::String_Data> lang;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> body;
  mojo::internal::Pointer<mojo::internal::String_Data> tag;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> image;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> icon;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> badge;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> vibration_pattern;
  double timestamp;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NotificationAction_Data>>> actions;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> show_trigger_timestamp;

 private:
  NotificationData_Data();
  ~NotificationData_Data() = delete;
};
static_assert(sizeof(NotificationData_Data) == 112,
              "Bad sizeof(NotificationData_Data)");
// Used by NotificationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NotificationData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NotificationResources_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NotificationResources_Data));
      new (data()) NotificationResources_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NotificationResources_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NotificationResources_Data>(index_);
    }
    NotificationResources_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> image;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> icon;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> badge;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data>>> action_icons;

 private:
  NotificationResources_Data();
  ~NotificationResources_Data() = delete;
};
static_assert(sizeof(NotificationResources_Data) == 40,
              "Bad sizeof(NotificationResources_Data)");
// Used by NotificationResources::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NotificationResources_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NotificationResources_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NotificationResources_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NotificationResources_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NotificationResources_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_INTERNAL_H_