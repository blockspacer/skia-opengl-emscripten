// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_

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
class  PowerMonitor_AddClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PowerMonitor_AddClient_Params_Data));
      new (data()) PowerMonitor_AddClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PowerMonitor_AddClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PowerMonitor_AddClient_Params_Data>(index_);
    }
    PowerMonitor_AddClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  PowerMonitor_AddClient_Params_Data();
  ~PowerMonitor_AddClient_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitor_AddClient_Params_Data) == 16,
              "Bad sizeof(PowerMonitor_AddClient_Params_Data)");
class  PowerMonitorClient_PowerStateChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PowerMonitorClient_PowerStateChange_Params_Data));
      new (data()) PowerMonitorClient_PowerStateChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PowerMonitorClient_PowerStateChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PowerMonitorClient_PowerStateChange_Params_Data>(index_);
    }
    PowerMonitorClient_PowerStateChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t on_battery_power : 1;
  uint8_t padfinal_[7];

 private:
  PowerMonitorClient_PowerStateChange_Params_Data();
  ~PowerMonitorClient_PowerStateChange_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_PowerStateChange_Params_Data) == 16,
              "Bad sizeof(PowerMonitorClient_PowerStateChange_Params_Data)");
class  PowerMonitorClient_Suspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PowerMonitorClient_Suspend_Params_Data));
      new (data()) PowerMonitorClient_Suspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PowerMonitorClient_Suspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PowerMonitorClient_Suspend_Params_Data>(index_);
    }
    PowerMonitorClient_Suspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PowerMonitorClient_Suspend_Params_Data();
  ~PowerMonitorClient_Suspend_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_Suspend_Params_Data) == 8,
              "Bad sizeof(PowerMonitorClient_Suspend_Params_Data)");
class  PowerMonitorClient_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PowerMonitorClient_Resume_Params_Data));
      new (data()) PowerMonitorClient_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PowerMonitorClient_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PowerMonitorClient_Resume_Params_Data>(index_);
    }
    PowerMonitorClient_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PowerMonitorClient_Resume_Params_Data();
  ~PowerMonitorClient_Resume_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_Resume_Params_Data) == 8,
              "Bad sizeof(PowerMonitorClient_Resume_Params_Data)");

}  // namespace internal
class PowerMonitor_AddClient_ParamsDataView {
 public:
  PowerMonitor_AddClient_ParamsDataView() {}

  PowerMonitor_AddClient_ParamsDataView(
      internal::PowerMonitor_AddClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::PowerMonitorClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PowerMonitor_AddClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PowerMonitorClient_PowerStateChange_ParamsDataView {
 public:
  PowerMonitorClient_PowerStateChange_ParamsDataView() {}

  PowerMonitorClient_PowerStateChange_ParamsDataView(
      internal::PowerMonitorClient_PowerStateChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool on_battery_power() const {
    return data_->on_battery_power;
  }
 private:
  internal::PowerMonitorClient_PowerStateChange_Params_Data* data_ = nullptr;
};

class PowerMonitorClient_Suspend_ParamsDataView {
 public:
  PowerMonitorClient_Suspend_ParamsDataView() {}

  PowerMonitorClient_Suspend_ParamsDataView(
      internal::PowerMonitorClient_Suspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PowerMonitorClient_Suspend_Params_Data* data_ = nullptr;
};

class PowerMonitorClient_Resume_ParamsDataView {
 public:
  PowerMonitorClient_Resume_ParamsDataView() {}

  PowerMonitorClient_Resume_ParamsDataView(
      internal::PowerMonitorClient_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PowerMonitorClient_Resume_Params_Data* data_ = nullptr;
};









}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_