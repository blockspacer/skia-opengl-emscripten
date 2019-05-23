// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_PARAMS_DATA_H_

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
class  VibrationManager_Vibrate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Vibrate_Params_Data));
      new (data()) VibrationManager_Vibrate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Vibrate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Vibrate_Params_Data>(index_);
    }
    VibrationManager_Vibrate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t milliseconds;

 private:
  VibrationManager_Vibrate_Params_Data();
  ~VibrationManager_Vibrate_Params_Data() = delete;
};
static_assert(sizeof(VibrationManager_Vibrate_Params_Data) == 16,
              "Bad sizeof(VibrationManager_Vibrate_Params_Data)");
class  VibrationManager_Vibrate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Vibrate_ResponseParams_Data));
      new (data()) VibrationManager_Vibrate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Vibrate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Vibrate_ResponseParams_Data>(index_);
    }
    VibrationManager_Vibrate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Vibrate_ResponseParams_Data();
  ~VibrationManager_Vibrate_ResponseParams_Data() = delete;
};
static_assert(sizeof(VibrationManager_Vibrate_ResponseParams_Data) == 8,
              "Bad sizeof(VibrationManager_Vibrate_ResponseParams_Data)");
class  VibrationManager_Cancel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Cancel_Params_Data));
      new (data()) VibrationManager_Cancel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Cancel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Cancel_Params_Data>(index_);
    }
    VibrationManager_Cancel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Cancel_Params_Data();
  ~VibrationManager_Cancel_Params_Data() = delete;
};
static_assert(sizeof(VibrationManager_Cancel_Params_Data) == 8,
              "Bad sizeof(VibrationManager_Cancel_Params_Data)");
class  VibrationManager_Cancel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VibrationManager_Cancel_ResponseParams_Data));
      new (data()) VibrationManager_Cancel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VibrationManager_Cancel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VibrationManager_Cancel_ResponseParams_Data>(index_);
    }
    VibrationManager_Cancel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VibrationManager_Cancel_ResponseParams_Data();
  ~VibrationManager_Cancel_ResponseParams_Data() = delete;
};
static_assert(sizeof(VibrationManager_Cancel_ResponseParams_Data) == 8,
              "Bad sizeof(VibrationManager_Cancel_ResponseParams_Data)");

}  // namespace internal
class VibrationManager_Vibrate_ParamsDataView {
 public:
  VibrationManager_Vibrate_ParamsDataView() {}

  VibrationManager_Vibrate_ParamsDataView(
      internal::VibrationManager_Vibrate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t milliseconds() const {
    return data_->milliseconds;
  }
 private:
  internal::VibrationManager_Vibrate_Params_Data* data_ = nullptr;
};

class VibrationManager_Vibrate_ResponseParamsDataView {
 public:
  VibrationManager_Vibrate_ResponseParamsDataView() {}

  VibrationManager_Vibrate_ResponseParamsDataView(
      internal::VibrationManager_Vibrate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VibrationManager_Vibrate_ResponseParams_Data* data_ = nullptr;
};

class VibrationManager_Cancel_ParamsDataView {
 public:
  VibrationManager_Cancel_ParamsDataView() {}

  VibrationManager_Cancel_ParamsDataView(
      internal::VibrationManager_Cancel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VibrationManager_Cancel_Params_Data* data_ = nullptr;
};

class VibrationManager_Cancel_ResponseParamsDataView {
 public:
  VibrationManager_Cancel_ResponseParamsDataView() {}

  VibrationManager_Cancel_ResponseParamsDataView(
      internal::VibrationManager_Cancel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VibrationManager_Cancel_ResponseParams_Data* data_ = nullptr;
};









}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_PARAMS_DATA_H_