// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace shape_detection {
namespace mojom {
namespace internal {
class TextDetectionResult_Data;

#pragma pack(push, 1)
class  TextDetectionResult_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextDetectionResult_Data));
      new (data()) TextDetectionResult_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextDetectionResult_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextDetectionResult_Data>(index_);
    }
    TextDetectionResult_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> raw_value;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> bounding_box;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data>>> corner_points;

 private:
  TextDetectionResult_Data();
  ~TextDetectionResult_Data() = delete;
};
static_assert(sizeof(TextDetectionResult_Data) == 32,
              "Bad sizeof(TextDetectionResult_Data)");
// Used by TextDetectionResult::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TextDetectionResult_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TextDetectionResult_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TextDetectionResult_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TextDetectionResult_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TextDetectionResult_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace shape_detection

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_TEXTDETECTION_MOJOM_SHARED_INTERNAL_H_