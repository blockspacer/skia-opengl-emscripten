// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_PARAMS_DATA_H_

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
class  BatteryMonitor_QueryNextStatus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BatteryMonitor_QueryNextStatus_Params_Data));
      new (data()) BatteryMonitor_QueryNextStatus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BatteryMonitor_QueryNextStatus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BatteryMonitor_QueryNextStatus_Params_Data>(index_);
    }
    BatteryMonitor_QueryNextStatus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BatteryMonitor_QueryNextStatus_Params_Data();
  ~BatteryMonitor_QueryNextStatus_Params_Data() = delete;
};
static_assert(sizeof(BatteryMonitor_QueryNextStatus_Params_Data) == 8,
              "Bad sizeof(BatteryMonitor_QueryNextStatus_Params_Data)");
class  BatteryMonitor_QueryNextStatus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data));
      new (data()) BatteryMonitor_QueryNextStatus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BatteryMonitor_QueryNextStatus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BatteryMonitor_QueryNextStatus_ResponseParams_Data>(index_);
    }
    BatteryMonitor_QueryNextStatus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::BatteryStatus_Data> status;

 private:
  BatteryMonitor_QueryNextStatus_ResponseParams_Data();
  ~BatteryMonitor_QueryNextStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data) == 16,
              "Bad sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data)");

}  // namespace internal
class BatteryMonitor_QueryNextStatus_ParamsDataView {
 public:
  BatteryMonitor_QueryNextStatus_ParamsDataView() {}

  BatteryMonitor_QueryNextStatus_ParamsDataView(
      internal::BatteryMonitor_QueryNextStatus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BatteryMonitor_QueryNextStatus_Params_Data* data_ = nullptr;
};

class BatteryMonitor_QueryNextStatus_ResponseParamsDataView {
 public:
  BatteryMonitor_QueryNextStatus_ResponseParamsDataView() {}

  BatteryMonitor_QueryNextStatus_ResponseParamsDataView(
      internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatusDataView(
      ::device::mojom::BatteryStatusDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) {
    auto* pointer = data_->status.Get();
    return mojo::internal::Deserialize<::device::mojom::BatteryStatusDataView>(
        pointer, output, context_);
  }
 private:
  internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void BatteryMonitor_QueryNextStatus_ResponseParamsDataView::GetStatusDataView(
    ::device::mojom::BatteryStatusDataView* output) {
  auto pointer = data_->status.Get();
  *output = ::device::mojom::BatteryStatusDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BATTERY_MONITOR_MOJOM_PARAMS_DATA_H_