// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_PARAMS_DATA_H_

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
class  ScreenOrientation_LockOrientation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_LockOrientation_Params_Data));
      new (data()) ScreenOrientation_LockOrientation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_LockOrientation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_LockOrientation_Params_Data>(index_);
    }
    ScreenOrientation_LockOrientation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t orientation;
  uint8_t padfinal_[4];

 private:
  ScreenOrientation_LockOrientation_Params_Data();
  ~ScreenOrientation_LockOrientation_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_LockOrientation_Params_Data) == 16,
              "Bad sizeof(ScreenOrientation_LockOrientation_Params_Data)");
class  ScreenOrientation_LockOrientation_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data));
      new (data()) ScreenOrientation_LockOrientation_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_LockOrientation_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_LockOrientation_ResponseParams_Data>(index_);
    }
    ScreenOrientation_LockOrientation_ResponseParams_Data* operator->() { return data(); }

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
  ScreenOrientation_LockOrientation_ResponseParams_Data();
  ~ScreenOrientation_LockOrientation_ResponseParams_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data) == 16,
              "Bad sizeof(ScreenOrientation_LockOrientation_ResponseParams_Data)");
class  ScreenOrientation_UnlockOrientation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientation_UnlockOrientation_Params_Data));
      new (data()) ScreenOrientation_UnlockOrientation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientation_UnlockOrientation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientation_UnlockOrientation_Params_Data>(index_);
    }
    ScreenOrientation_UnlockOrientation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientation_UnlockOrientation_Params_Data();
  ~ScreenOrientation_UnlockOrientation_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientation_UnlockOrientation_Params_Data) == 8,
              "Bad sizeof(ScreenOrientation_UnlockOrientation_Params_Data)");
class  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data));
      new (data()) ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data>(index_);
    }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data();
  ~ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data) == 8,
              "Bad sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data)");
class  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data));
      new (data()) ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data>(index_);
    }
    ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data();
  ~ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data() = delete;
};
static_assert(sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data) == 16,
              "Bad sizeof(ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data)");

}  // namespace internal
class ScreenOrientation_LockOrientation_ParamsDataView {
 public:
  ScreenOrientation_LockOrientation_ParamsDataView() {}

  ScreenOrientation_LockOrientation_ParamsDataView(
      internal::ScreenOrientation_LockOrientation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOrientation(UserType* output) const {
    auto data_value = data_->orientation;
    return mojo::internal::Deserialize<::device::mojom::ScreenOrientationLockType>(
        data_value, output);
  }

  ::device::mojom::ScreenOrientationLockType orientation() const {
    return static_cast<::device::mojom::ScreenOrientationLockType>(data_->orientation);
  }
 private:
  internal::ScreenOrientation_LockOrientation_Params_Data* data_ = nullptr;
};

class ScreenOrientation_LockOrientation_ResponseParamsDataView {
 public:
  ScreenOrientation_LockOrientation_ResponseParamsDataView() {}

  ScreenOrientation_LockOrientation_ResponseParamsDataView(
      internal::ScreenOrientation_LockOrientation_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::ScreenOrientationLockResult>(
        data_value, output);
  }

  ::device::mojom::ScreenOrientationLockResult result() const {
    return static_cast<::device::mojom::ScreenOrientationLockResult>(data_->result);
  }
 private:
  internal::ScreenOrientation_LockOrientation_ResponseParams_Data* data_ = nullptr;
};

class ScreenOrientation_UnlockOrientation_ParamsDataView {
 public:
  ScreenOrientation_UnlockOrientation_ParamsDataView() {}

  ScreenOrientation_UnlockOrientation_ParamsDataView(
      internal::ScreenOrientation_UnlockOrientation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ScreenOrientation_UnlockOrientation_Params_Data* data_ = nullptr;
};

class ScreenOrientationListener_IsAutoRotateEnabledByUser_ParamsDataView {
 public:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ParamsDataView() {}

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ParamsDataView(
      internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_Params_Data* data_ = nullptr;
};

class ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParamsDataView {
 public:
  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParamsDataView() {}

  ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParamsDataView(
      internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::ScreenOrientationListener_IsAutoRotateEnabledByUser_ResponseParams_Data* data_ = nullptr;
};











}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SCREEN_ORIENTATION_MOJOM_PARAMS_DATA_H_