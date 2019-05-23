// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_

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
class  TimeZoneMonitor_AddClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TimeZoneMonitor_AddClient_Params_Data));
      new (data()) TimeZoneMonitor_AddClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TimeZoneMonitor_AddClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TimeZoneMonitor_AddClient_Params_Data>(index_);
    }
    TimeZoneMonitor_AddClient_Params_Data* operator->() { return data(); }

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
  TimeZoneMonitor_AddClient_Params_Data();
  ~TimeZoneMonitor_AddClient_Params_Data() = delete;
};
static_assert(sizeof(TimeZoneMonitor_AddClient_Params_Data) == 16,
              "Bad sizeof(TimeZoneMonitor_AddClient_Params_Data)");
class  TimeZoneMonitorClient_OnTimeZoneChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TimeZoneMonitorClient_OnTimeZoneChange_Params_Data));
      new (data()) TimeZoneMonitorClient_OnTimeZoneChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TimeZoneMonitorClient_OnTimeZoneChange_Params_Data>(index_);
    }
    TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> tz_info;

 private:
  TimeZoneMonitorClient_OnTimeZoneChange_Params_Data();
  ~TimeZoneMonitorClient_OnTimeZoneChange_Params_Data() = delete;
};
static_assert(sizeof(TimeZoneMonitorClient_OnTimeZoneChange_Params_Data) == 16,
              "Bad sizeof(TimeZoneMonitorClient_OnTimeZoneChange_Params_Data)");

}  // namespace internal
class TimeZoneMonitor_AddClient_ParamsDataView {
 public:
  TimeZoneMonitor_AddClient_ParamsDataView() {}

  TimeZoneMonitor_AddClient_ParamsDataView(
      internal::TimeZoneMonitor_AddClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::TimeZoneMonitorClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TimeZoneMonitor_AddClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView {
 public:
  TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView() {}

  TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView(
      internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTzInfoDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTzInfo(UserType* output) {
    auto* pointer = data_->tz_info.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView::GetTzInfoDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tz_info.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_