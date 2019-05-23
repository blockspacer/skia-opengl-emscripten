// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace media {
namespace mojom {
namespace internal {
class  KeySystemSupport_IsKeySystemSupported_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data));
      new (data()) KeySystemSupport_IsKeySystemSupported_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeySystemSupport_IsKeySystemSupported_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeySystemSupport_IsKeySystemSupported_Params_Data>(index_);
    }
    KeySystemSupport_IsKeySystemSupported_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_system;

 private:
  KeySystemSupport_IsKeySystemSupported_Params_Data();
  ~KeySystemSupport_IsKeySystemSupported_Params_Data() = delete;
};
static_assert(sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data) == 16,
              "Bad sizeof(KeySystemSupport_IsKeySystemSupported_Params_Data)");
class  KeySystemSupport_IsKeySystemSupported_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data));
      new (data()) KeySystemSupport_IsKeySystemSupported_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeySystemSupport_IsKeySystemSupported_ResponseParams_Data>(index_);
    }
    KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_supported : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<internal::KeySystemCapability_Data> key_system_capability;

 private:
  KeySystemSupport_IsKeySystemSupported_ResponseParams_Data();
  ~KeySystemSupport_IsKeySystemSupported_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data) == 24,
              "Bad sizeof(KeySystemSupport_IsKeySystemSupported_ResponseParams_Data)");

}  // namespace internal
class KeySystemSupport_IsKeySystemSupported_ParamsDataView {
 public:
  KeySystemSupport_IsKeySystemSupported_ParamsDataView() {}

  KeySystemSupport_IsKeySystemSupported_ParamsDataView(
      internal::KeySystemSupport_IsKeySystemSupported_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeySystemDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystem(UserType* output) {
    auto* pointer = data_->key_system.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeySystemSupport_IsKeySystemSupported_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView {
 public:
  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView() {}

  KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView(
      internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool is_supported() const {
    return data_->is_supported;
  }
  inline void GetKeySystemCapabilityDataView(
      KeySystemCapabilityDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeySystemCapability(UserType* output) {
    auto* pointer = data_->key_system_capability.Get();
    return mojo::internal::Deserialize<::media::mojom::KeySystemCapabilityDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeySystemSupport_IsKeySystemSupported_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void KeySystemSupport_IsKeySystemSupported_ParamsDataView::GetKeySystemDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_system.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void KeySystemSupport_IsKeySystemSupported_ResponseParamsDataView::GetKeySystemCapabilityDataView(
    KeySystemCapabilityDataView* output) {
  auto pointer = data_->key_system_capability.Get();
  *output = KeySystemCapabilityDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_PARAMS_DATA_H_