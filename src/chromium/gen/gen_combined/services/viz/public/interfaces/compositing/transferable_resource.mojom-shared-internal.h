// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class TransferableResource_Data;

struct ResourceFormat_Data {
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
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
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
class  TransferableResource_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TransferableResource_Data));
      new (data()) TransferableResource_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TransferableResource_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TransferableResource_Data>(index_);
    }
    TransferableResource_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t id;
  int32_t format;
  uint32_t filter;
  uint8_t read_lock_fences_enabled : 1;
  uint8_t is_software : 1;
  uint8_t is_overlay_candidate : 1;
  uint8_t is_backed_by_surface_texture : 1;
  uint8_t wants_promotion_hint : 1;
  uint8_t pad7_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  mojo::internal::Pointer<::gpu::mojom::internal::MailboxHolder_Data> mailbox_holder;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> color_space;

 private:
  TransferableResource_Data();
  ~TransferableResource_Data() = delete;
};
static_assert(sizeof(TransferableResource_Data) == 48,
              "Bad sizeof(TransferableResource_Data)");
// Used by TransferableResource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TransferableResource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TransferableResource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TransferableResource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TransferableResource_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TransferableResource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_TRANSFERABLE_RESOURCE_MOJOM_SHARED_INTERNAL_H_