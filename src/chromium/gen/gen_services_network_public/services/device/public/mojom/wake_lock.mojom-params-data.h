// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_PARAMS_DATA_H_

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
namespace device {
namespace mojom {
namespace internal {
class  WakeLock_RequestWakeLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_RequestWakeLock_Params_Data));
      new (data()) WakeLock_RequestWakeLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_RequestWakeLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_RequestWakeLock_Params_Data>(index_);
    }
    WakeLock_RequestWakeLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_RequestWakeLock_Params_Data();
  ~WakeLock_RequestWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_RequestWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLock_RequestWakeLock_Params_Data)");
class  WakeLock_CancelWakeLock_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_CancelWakeLock_Params_Data));
      new (data()) WakeLock_CancelWakeLock_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_CancelWakeLock_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_CancelWakeLock_Params_Data>(index_);
    }
    WakeLock_CancelWakeLock_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_CancelWakeLock_Params_Data();
  ~WakeLock_CancelWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_CancelWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLock_CancelWakeLock_Params_Data)");
class  WakeLock_AddClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_AddClient_Params_Data));
      new (data()) WakeLock_AddClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_AddClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_AddClient_Params_Data>(index_);
    }
    WakeLock_AddClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data wake_lock;
  uint8_t padfinal_[4];

 private:
  WakeLock_AddClient_Params_Data();
  ~WakeLock_AddClient_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_AddClient_Params_Data) == 16,
              "Bad sizeof(WakeLock_AddClient_Params_Data)");
class  WakeLock_ChangeType_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_ChangeType_Params_Data));
      new (data()) WakeLock_ChangeType_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_ChangeType_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_ChangeType_Params_Data>(index_);
    }
    WakeLock_ChangeType_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  WakeLock_ChangeType_Params_Data();
  ~WakeLock_ChangeType_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_ChangeType_Params_Data) == 16,
              "Bad sizeof(WakeLock_ChangeType_Params_Data)");
class  WakeLock_ChangeType_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_ChangeType_ResponseParams_Data));
      new (data()) WakeLock_ChangeType_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_ChangeType_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_ChangeType_ResponseParams_Data>(index_);
    }
    WakeLock_ChangeType_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WakeLock_ChangeType_ResponseParams_Data();
  ~WakeLock_ChangeType_ResponseParams_Data() = delete;
};
static_assert(sizeof(WakeLock_ChangeType_ResponseParams_Data) == 16,
              "Bad sizeof(WakeLock_ChangeType_ResponseParams_Data)");
class  WakeLock_HasWakeLockForTests_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_HasWakeLockForTests_Params_Data));
      new (data()) WakeLock_HasWakeLockForTests_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_HasWakeLockForTests_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_HasWakeLockForTests_Params_Data>(index_);
    }
    WakeLock_HasWakeLockForTests_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WakeLock_HasWakeLockForTests_Params_Data();
  ~WakeLock_HasWakeLockForTests_Params_Data() = delete;
};
static_assert(sizeof(WakeLock_HasWakeLockForTests_Params_Data) == 8,
              "Bad sizeof(WakeLock_HasWakeLockForTests_Params_Data)");
class  WakeLock_HasWakeLockForTests_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data));
      new (data()) WakeLock_HasWakeLockForTests_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WakeLock_HasWakeLockForTests_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WakeLock_HasWakeLockForTests_ResponseParams_Data>(index_);
    }
    WakeLock_HasWakeLockForTests_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  WakeLock_HasWakeLockForTests_ResponseParams_Data();
  ~WakeLock_HasWakeLockForTests_ResponseParams_Data() = delete;
};
static_assert(sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data) == 16,
              "Bad sizeof(WakeLock_HasWakeLockForTests_ResponseParams_Data)");

}  // namespace internal
class WakeLock_RequestWakeLock_ParamsDataView {
 public:
  WakeLock_RequestWakeLock_ParamsDataView() {}

  WakeLock_RequestWakeLock_ParamsDataView(
      internal::WakeLock_RequestWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_RequestWakeLock_Params_Data* data_ = nullptr;
};

class WakeLock_CancelWakeLock_ParamsDataView {
 public:
  WakeLock_CancelWakeLock_ParamsDataView() {}

  WakeLock_CancelWakeLock_ParamsDataView(
      internal::WakeLock_CancelWakeLock_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_CancelWakeLock_Params_Data* data_ = nullptr;
};

class WakeLock_AddClient_ParamsDataView {
 public:
  WakeLock_AddClient_ParamsDataView() {}

  WakeLock_AddClient_ParamsDataView(
      internal::WakeLock_AddClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeWakeLock() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::WakeLockRequestDataView>(
            &data_->wake_lock, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLock_AddClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WakeLock_ChangeType_ParamsDataView {
 public:
  WakeLock_ChangeType_ParamsDataView() {}

  WakeLock_ChangeType_ParamsDataView(
      internal::WakeLock_ChangeType_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }

  WakeLockType type() const {
    return static_cast<WakeLockType>(data_->type);
  }
 private:
  internal::WakeLock_ChangeType_Params_Data* data_ = nullptr;
};

class WakeLock_ChangeType_ResponseParamsDataView {
 public:
  WakeLock_ChangeType_ResponseParamsDataView() {}

  WakeLock_ChangeType_ResponseParamsDataView(
      internal::WakeLock_ChangeType_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WakeLock_ChangeType_ResponseParams_Data* data_ = nullptr;
};

class WakeLock_HasWakeLockForTests_ParamsDataView {
 public:
  WakeLock_HasWakeLockForTests_ParamsDataView() {}

  WakeLock_HasWakeLockForTests_ParamsDataView(
      internal::WakeLock_HasWakeLockForTests_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WakeLock_HasWakeLockForTests_Params_Data* data_ = nullptr;
};

class WakeLock_HasWakeLockForTests_ResponseParamsDataView {
 public:
  WakeLock_HasWakeLockForTests_ResponseParamsDataView() {}

  WakeLock_HasWakeLockForTests_ResponseParamsDataView(
      internal::WakeLock_HasWakeLockForTests_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::WakeLock_HasWakeLockForTests_ResponseParams_Data* data_ = nullptr;
};















}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_PARAMS_DATA_H_