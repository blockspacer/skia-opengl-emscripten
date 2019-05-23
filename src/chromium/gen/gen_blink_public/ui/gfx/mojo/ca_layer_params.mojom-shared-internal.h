// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_INTERNAL_H_
#define UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gfx {
namespace mojom {
namespace internal {
class CALayerParams_Data;
class CALayerContent_Data;

#pragma pack(push, 1)


class  CALayerContent_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  CALayerContent_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~CALayerContent_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CALayerContent_Data));
      new (data()) CALayerContent_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) CALayerContent_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CALayerContent_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CALayerContent_Data>(index_);
    }
    CALayerContent_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<CALayerContent_Tag>(0);
    data.unknown = 0U;
  }

  enum class CALayerContent_Tag : uint32_t {

    
    CA_CONTEXT_ID,
    
    IO_SURFACE_MACH_PORT,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    uint32_t f_ca_context_id;
    mojo::internal::Handle_Data f_io_surface_mach_port;
    uint64_t unknown;
  };

  uint32_t size;
  CALayerContent_Tag tag;
  Union_ data;
};
static_assert(sizeof(CALayerContent_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(CALayerContent_Data)");
class  CALayerParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CALayerParams_Data));
      new (data()) CALayerParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CALayerParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CALayerParams_Data>(index_);
    }
    CALayerParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_empty : 1;
  uint8_t pad0_[3];
  float scale_factor;
  internal::CALayerContent_Data content;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> pixel_size;

 private:
  CALayerParams_Data();
  ~CALayerParams_Data() = delete;
};
static_assert(sizeof(CALayerParams_Data) == 40,
              "Bad sizeof(CALayerParams_Data)");
// Used by CALayerParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CALayerParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CALayerParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CALayerParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CALayerParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CALayerParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_CA_LAYER_PARAMS_MOJOM_SHARED_INTERNAL_H_