// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) KeyboardLockService_RequestKeyboardLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data));
      new (data()) KeyboardLockService_RequestKeyboardLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_RequestKeyboardLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_RequestKeyboardLock_Params_Data>(index_);
    }
    KeyboardLockService_RequestKeyboardLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> key_codes;

 private:
  KeyboardLockService_RequestKeyboardLock_Params_Data();
  ~KeyboardLockService_RequestKeyboardLock_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data) == 16,
              "Bad sizeof(KeyboardLockService_RequestKeyboardLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) KeyboardLockService_RequestKeyboardLock_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data));
      new (data()) KeyboardLockService_RequestKeyboardLock_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_RequestKeyboardLock_ResponseParams_Data>(index_);
    }
    KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  KeyboardLockService_RequestKeyboardLock_ResponseParams_Data();
  ~KeyboardLockService_RequestKeyboardLock_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data) == 16,
              "Bad sizeof(KeyboardLockService_RequestKeyboardLock_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) KeyboardLockService_CancelKeyboardLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data));
      new (data()) KeyboardLockService_CancelKeyboardLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_CancelKeyboardLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_CancelKeyboardLock_Params_Data>(index_);
    }
    KeyboardLockService_CancelKeyboardLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  KeyboardLockService_CancelKeyboardLock_Params_Data();
  ~KeyboardLockService_CancelKeyboardLock_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data) == 8,
              "Bad sizeof(KeyboardLockService_CancelKeyboardLock_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) KeyboardLockService_GetKeyboardLayoutMap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data));
      new (data()) KeyboardLockService_GetKeyboardLayoutMap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_GetKeyboardLayoutMap_Params_Data>(index_);
    }
    KeyboardLockService_GetKeyboardLayoutMap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  KeyboardLockService_GetKeyboardLayoutMap_Params_Data();
  ~KeyboardLockService_GetKeyboardLayoutMap_Params_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data) == 8,
              "Bad sizeof(KeyboardLockService_GetKeyboardLayoutMap_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data));
      new (data()) KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data>(index_);
    }
    KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::GetKeyboardLayoutMapResult_Data> result;

 private:
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data();
  ~KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data() = delete;
};
static_assert(sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data) == 16,
              "Bad sizeof(KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data)");

}  // namespace internal
class KeyboardLockService_RequestKeyboardLock_ParamsDataView {
 public:
  KeyboardLockService_RequestKeyboardLock_ParamsDataView() {}

  KeyboardLockService_RequestKeyboardLock_ParamsDataView(
      internal::KeyboardLockService_RequestKeyboardLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyCodesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadKeyCodes(UserType* output) {
    auto* pointer = data_->key_codes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::KeyboardLockService_RequestKeyboardLock_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView {
 public:
  KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView() {}

  KeyboardLockService_RequestKeyboardLock_ResponseParamsDataView(
      internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::KeyboardLockRequestResult>(
        data_value, output);
  }

  KeyboardLockRequestResult result() const {
    return static_cast<KeyboardLockRequestResult>(data_->result);
  }
 private:
  internal::KeyboardLockService_RequestKeyboardLock_ResponseParams_Data* data_ = nullptr;
};

class KeyboardLockService_CancelKeyboardLock_ParamsDataView {
 public:
  KeyboardLockService_CancelKeyboardLock_ParamsDataView() {}

  KeyboardLockService_CancelKeyboardLock_ParamsDataView(
      internal::KeyboardLockService_CancelKeyboardLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::KeyboardLockService_CancelKeyboardLock_Params_Data* data_ = nullptr;
};

class KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView {
 public:
  KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView() {}

  KeyboardLockService_GetKeyboardLayoutMap_ParamsDataView(
      internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::KeyboardLockService_GetKeyboardLayoutMap_Params_Data* data_ = nullptr;
};

class KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView {
 public:
  KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView() {}

  KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView(
      internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      GetKeyboardLayoutMapResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::GetKeyboardLayoutMapResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::KeyboardLockService_GetKeyboardLayoutMap_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void KeyboardLockService_RequestKeyboardLock_ParamsDataView::GetKeyCodesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->key_codes.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}








inline void KeyboardLockService_GetKeyboardLayoutMap_ResponseParamsDataView::GetResultDataView(
    GetKeyboardLayoutMapResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = GetKeyboardLayoutMapResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_PARAMS_DATA_H_