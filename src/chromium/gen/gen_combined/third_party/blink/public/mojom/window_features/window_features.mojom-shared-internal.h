// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_INTERNAL_H_

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
class WindowFeatures_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WindowFeatures_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WindowFeatures_Data));
      new (data()) WindowFeatures_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WindowFeatures_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WindowFeatures_Data>(index_);
    }
    WindowFeatures_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float x;
  uint8_t has_x : 1;
  uint8_t has_y : 1;
  uint8_t has_width : 1;
  uint8_t has_height : 1;
  uint8_t menu_bar_visible : 1;
  uint8_t status_bar_visible : 1;
  uint8_t tool_bar_visible : 1;
  uint8_t scrollbars_visible : 1;
  uint8_t pad8_[3];
  float y;
  float width;
  float height;
  uint8_t padfinal_[4];

 private:
  WindowFeatures_Data();
  ~WindowFeatures_Data() = delete;
};
static_assert(sizeof(WindowFeatures_Data) == 32,
              "Bad sizeof(WindowFeatures_Data)");
// Used by WindowFeatures::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WindowFeatures_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WindowFeatures_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WindowFeatures_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    WindowFeatures_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WindowFeatures_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WINDOW_FEATURES_WINDOW_FEATURES_MOJOM_SHARED_INTERNAL_H_