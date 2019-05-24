// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_PARAMS_DATA_H_

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
class  SensorProvider_GetSensor_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorProvider_GetSensor_Params_Data));
      new (data()) SensorProvider_GetSensor_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorProvider_GetSensor_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorProvider_GetSensor_Params_Data>(index_);
    }
    SensorProvider_GetSensor_Params_Data* operator->() { return data(); }

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
  SensorProvider_GetSensor_Params_Data();
  ~SensorProvider_GetSensor_Params_Data() = delete;
};
static_assert(sizeof(SensorProvider_GetSensor_Params_Data) == 16,
              "Bad sizeof(SensorProvider_GetSensor_Params_Data)");
class  SensorProvider_GetSensor_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SensorProvider_GetSensor_ResponseParams_Data));
      new (data()) SensorProvider_GetSensor_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SensorProvider_GetSensor_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SensorProvider_GetSensor_ResponseParams_Data>(index_);
    }
    SensorProvider_GetSensor_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::SensorInitParams_Data> init_params;

 private:
  SensorProvider_GetSensor_ResponseParams_Data();
  ~SensorProvider_GetSensor_ResponseParams_Data() = delete;
};
static_assert(sizeof(SensorProvider_GetSensor_ResponseParams_Data) == 24,
              "Bad sizeof(SensorProvider_GetSensor_ResponseParams_Data)");

}  // namespace internal
class SensorProvider_GetSensor_ParamsDataView {
 public:
  SensorProvider_GetSensor_ParamsDataView() {}

  SensorProvider_GetSensor_ParamsDataView(
      internal::SensorProvider_GetSensor_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::SensorType>(
        data_value, output);
  }

  ::device::mojom::SensorType type() const {
    return static_cast<::device::mojom::SensorType>(data_->type);
  }
 private:
  internal::SensorProvider_GetSensor_Params_Data* data_ = nullptr;
};

class SensorProvider_GetSensor_ResponseParamsDataView {
 public:
  SensorProvider_GetSensor_ResponseParamsDataView() {}

  SensorProvider_GetSensor_ResponseParamsDataView(
      internal::SensorProvider_GetSensor_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::SensorCreationResult>(
        data_value, output);
  }

  SensorCreationResult result() const {
    return static_cast<SensorCreationResult>(data_->result);
  }
  inline void GetInitParamsDataView(
      SensorInitParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInitParams(UserType* output) {
    auto* pointer = data_->init_params.Get();
    return mojo::internal::Deserialize<::device::mojom::SensorInitParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SensorProvider_GetSensor_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void SensorProvider_GetSensor_ResponseParamsDataView::GetInitParamsDataView(
    SensorInitParamsDataView* output) {
  auto pointer = data_->init_params.Get();
  *output = SensorInitParamsDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SENSOR_PROVIDER_MOJOM_PARAMS_DATA_H_