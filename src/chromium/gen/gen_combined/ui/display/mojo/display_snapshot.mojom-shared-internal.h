// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_
#define UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "ui/display/mojo/display_constants.mojom-shared-internal.h"
#include "ui/display/mojo/display_mode.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace display {
namespace mojom {
namespace internal {
class DisplaySnapshot_Data;

#pragma pack(push, 1)
class  DisplaySnapshot_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DisplaySnapshot_Data));
      new (data()) DisplaySnapshot_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DisplaySnapshot_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DisplaySnapshot_Data>(index_);
    }
    DisplaySnapshot_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t display_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> origin;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> physical_size;
  int32_t type;
  uint8_t is_aspect_preserving_scaling : 1;
  uint8_t has_overscan : 1;
  uint8_t has_color_correction_matrix : 1;
  uint8_t color_correction_in_linear_space : 1;
  uint8_t has_current_mode : 1;
  uint8_t has_native_mode : 1;
  uint8_t pad9_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> color_space;
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> sys_path;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::display::mojom::internal::DisplayMode_Data>>> modes;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> edid;
  uint64_t current_mode_index;
  uint64_t native_mode_index;
  int64_t product_code;
  int32_t year_of_manufacture;
  uint8_t pad18_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> maximum_cursor_size;

 private:
  DisplaySnapshot_Data();
  ~DisplaySnapshot_Data() = delete;
};
static_assert(sizeof(DisplaySnapshot_Data) == 120,
              "Bad sizeof(DisplaySnapshot_Data)");
// Used by DisplaySnapshot::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DisplaySnapshot_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DisplaySnapshot_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DisplaySnapshot_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DisplaySnapshot_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DisplaySnapshot_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace display

#endif  // UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_SHARED_INTERNAL_H_