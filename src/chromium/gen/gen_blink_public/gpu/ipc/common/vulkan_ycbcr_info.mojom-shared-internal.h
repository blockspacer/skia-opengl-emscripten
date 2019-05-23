// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gpu {
namespace mojom {
namespace internal {
class VulkanYCbCrInfo_Data;

#pragma pack(push, 1)
class  VulkanYCbCrInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VulkanYCbCrInfo_Data));
      new (data()) VulkanYCbCrInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VulkanYCbCrInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VulkanYCbCrInfo_Data>(index_);
    }
    VulkanYCbCrInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t suggested_ycbcr_model;
  uint32_t suggested_ycbcr_range;
  uint32_t suggested_xchroma_offset;
  uint32_t suggested_ychroma_offset;
  uint64_t external_format;
  uint32_t format_features;
  uint8_t padfinal_[4];

 private:
  VulkanYCbCrInfo_Data();
  ~VulkanYCbCrInfo_Data() = delete;
};
static_assert(sizeof(VulkanYCbCrInfo_Data) == 40,
              "Bad sizeof(VulkanYCbCrInfo_Data)");
// Used by VulkanYCbCrInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VulkanYCbCrInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VulkanYCbCrInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VulkanYCbCrInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VulkanYCbCrInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VulkanYCbCrInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_VULKAN_YCBCR_INFO_MOJOM_SHARED_INTERNAL_H_