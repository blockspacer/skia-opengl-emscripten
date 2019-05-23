// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_PARAMS_DATA_H_

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
class  HidManagerClient_DeviceAdded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManagerClient_DeviceAdded_Params_Data));
      new (data()) HidManagerClient_DeviceAdded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManagerClient_DeviceAdded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManagerClient_DeviceAdded_Params_Data>(index_);
    }
    HidManagerClient_DeviceAdded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidDeviceInfo_Data> device_info;

 private:
  HidManagerClient_DeviceAdded_Params_Data();
  ~HidManagerClient_DeviceAdded_Params_Data() = delete;
};
static_assert(sizeof(HidManagerClient_DeviceAdded_Params_Data) == 16,
              "Bad sizeof(HidManagerClient_DeviceAdded_Params_Data)");
class  HidManagerClient_DeviceRemoved_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManagerClient_DeviceRemoved_Params_Data));
      new (data()) HidManagerClient_DeviceRemoved_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManagerClient_DeviceRemoved_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManagerClient_DeviceRemoved_Params_Data>(index_);
    }
    HidManagerClient_DeviceRemoved_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidDeviceInfo_Data> device_info;

 private:
  HidManagerClient_DeviceRemoved_Params_Data();
  ~HidManagerClient_DeviceRemoved_Params_Data() = delete;
};
static_assert(sizeof(HidManagerClient_DeviceRemoved_Params_Data) == 16,
              "Bad sizeof(HidManagerClient_DeviceRemoved_Params_Data)");
class  HidManager_GetDevicesAndSetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevicesAndSetClient_Params_Data));
      new (data()) HidManager_GetDevicesAndSetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevicesAndSetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevicesAndSetClient_Params_Data>(index_);
    }
    HidManager_GetDevicesAndSetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  HidManager_GetDevicesAndSetClient_Params_Data();
  ~HidManager_GetDevicesAndSetClient_Params_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevicesAndSetClient_Params_Data) == 16,
              "Bad sizeof(HidManager_GetDevicesAndSetClient_Params_Data)");
class  HidManager_GetDevicesAndSetClient_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data));
      new (data()) HidManager_GetDevicesAndSetClient_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevicesAndSetClient_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevicesAndSetClient_ResponseParams_Data>(index_);
    }
    HidManager_GetDevicesAndSetClient_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidDeviceInfo_Data>>> devices;

 private:
  HidManager_GetDevicesAndSetClient_ResponseParams_Data();
  ~HidManager_GetDevicesAndSetClient_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_GetDevicesAndSetClient_ResponseParams_Data)");
class  HidManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevices_Params_Data));
      new (data()) HidManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevices_Params_Data>(index_);
    }
    HidManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  HidManager_GetDevices_Params_Data();
  ~HidManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevices_Params_Data) == 8,
              "Bad sizeof(HidManager_GetDevices_Params_Data)");
class  HidManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_GetDevices_ResponseParams_Data));
      new (data()) HidManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_GetDevices_ResponseParams_Data>(index_);
    }
    HidManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidDeviceInfo_Data>>> devices;

 private:
  HidManager_GetDevices_ResponseParams_Data();
  ~HidManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_GetDevices_ResponseParams_Data)");
class  HidManager_Connect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_Connect_Params_Data));
      new (data()) HidManager_Connect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_Connect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_Connect_Params_Data>(index_);
    }
    HidManager_Connect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> device_guid;
  mojo::internal::Interface_Data connection_client;

 private:
  HidManager_Connect_Params_Data();
  ~HidManager_Connect_Params_Data() = delete;
};
static_assert(sizeof(HidManager_Connect_Params_Data) == 24,
              "Bad sizeof(HidManager_Connect_Params_Data)");
class  HidManager_Connect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidManager_Connect_ResponseParams_Data));
      new (data()) HidManager_Connect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidManager_Connect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidManager_Connect_ResponseParams_Data>(index_);
    }
    HidManager_Connect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data connection;

 private:
  HidManager_Connect_ResponseParams_Data();
  ~HidManager_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidManager_Connect_ResponseParams_Data) == 16,
              "Bad sizeof(HidManager_Connect_ResponseParams_Data)");
class  HidConnection_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Read_Params_Data));
      new (data()) HidConnection_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Read_Params_Data>(index_);
    }
    HidConnection_Read_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  HidConnection_Read_Params_Data();
  ~HidConnection_Read_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_Read_Params_Data) == 8,
              "Bad sizeof(HidConnection_Read_Params_Data)");
class  HidConnection_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Read_ResponseParams_Data));
      new (data()) HidConnection_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Read_ResponseParams_Data>(index_);
    }
    HidConnection_Read_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t report_id;
  uint8_t pad1_[6];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_Read_ResponseParams_Data();
  ~HidConnection_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_Read_ResponseParams_Data) == 24,
              "Bad sizeof(HidConnection_Read_ResponseParams_Data)");
class  HidConnection_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Write_Params_Data));
      new (data()) HidConnection_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Write_Params_Data>(index_);
    }
    HidConnection_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_Write_Params_Data();
  ~HidConnection_Write_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_Write_Params_Data) == 24,
              "Bad sizeof(HidConnection_Write_Params_Data)");
class  HidConnection_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_Write_ResponseParams_Data));
      new (data()) HidConnection_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_Write_ResponseParams_Data>(index_);
    }
    HidConnection_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  HidConnection_Write_ResponseParams_Data();
  ~HidConnection_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_Write_ResponseParams_Data) == 16,
              "Bad sizeof(HidConnection_Write_ResponseParams_Data)");
class  HidConnection_GetFeatureReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_GetFeatureReport_Params_Data));
      new (data()) HidConnection_GetFeatureReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_GetFeatureReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_GetFeatureReport_Params_Data>(index_);
    }
    HidConnection_GetFeatureReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t padfinal_[7];

 private:
  HidConnection_GetFeatureReport_Params_Data();
  ~HidConnection_GetFeatureReport_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_GetFeatureReport_Params_Data) == 16,
              "Bad sizeof(HidConnection_GetFeatureReport_Params_Data)");
class  HidConnection_GetFeatureReport_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_GetFeatureReport_ResponseParams_Data));
      new (data()) HidConnection_GetFeatureReport_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_GetFeatureReport_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_GetFeatureReport_ResponseParams_Data>(index_);
    }
    HidConnection_GetFeatureReport_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_GetFeatureReport_ResponseParams_Data();
  ~HidConnection_GetFeatureReport_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_GetFeatureReport_ResponseParams_Data) == 24,
              "Bad sizeof(HidConnection_GetFeatureReport_ResponseParams_Data)");
class  HidConnection_SendFeatureReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_SendFeatureReport_Params_Data));
      new (data()) HidConnection_SendFeatureReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_SendFeatureReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_SendFeatureReport_Params_Data>(index_);
    }
    HidConnection_SendFeatureReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnection_SendFeatureReport_Params_Data();
  ~HidConnection_SendFeatureReport_Params_Data() = delete;
};
static_assert(sizeof(HidConnection_SendFeatureReport_Params_Data) == 24,
              "Bad sizeof(HidConnection_SendFeatureReport_Params_Data)");
class  HidConnection_SendFeatureReport_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnection_SendFeatureReport_ResponseParams_Data));
      new (data()) HidConnection_SendFeatureReport_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnection_SendFeatureReport_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnection_SendFeatureReport_ResponseParams_Data>(index_);
    }
    HidConnection_SendFeatureReport_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  HidConnection_SendFeatureReport_ResponseParams_Data();
  ~HidConnection_SendFeatureReport_ResponseParams_Data() = delete;
};
static_assert(sizeof(HidConnection_SendFeatureReport_ResponseParams_Data) == 16,
              "Bad sizeof(HidConnection_SendFeatureReport_ResponseParams_Data)");
class  HidConnectionClient_OnInputReport_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidConnectionClient_OnInputReport_Params_Data));
      new (data()) HidConnectionClient_OnInputReport_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidConnectionClient_OnInputReport_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidConnectionClient_OnInputReport_Params_Data>(index_);
    }
    HidConnectionClient_OnInputReport_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t report_id;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> buffer;

 private:
  HidConnectionClient_OnInputReport_Params_Data();
  ~HidConnectionClient_OnInputReport_Params_Data() = delete;
};
static_assert(sizeof(HidConnectionClient_OnInputReport_Params_Data) == 24,
              "Bad sizeof(HidConnectionClient_OnInputReport_Params_Data)");

}  // namespace internal
class HidManagerClient_DeviceAdded_ParamsDataView {
 public:
  HidManagerClient_DeviceAdded_ParamsDataView() {}

  HidManagerClient_DeviceAdded_ParamsDataView(
      internal::HidManagerClient_DeviceAdded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      HidDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::HidDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidManagerClient_DeviceAdded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManagerClient_DeviceRemoved_ParamsDataView {
 public:
  HidManagerClient_DeviceRemoved_ParamsDataView() {}

  HidManagerClient_DeviceRemoved_ParamsDataView(
      internal::HidManagerClient_DeviceRemoved_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceInfoDataView(
      HidDeviceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceInfo(UserType* output) {
    auto* pointer = data_->device_info.Get();
    return mojo::internal::Deserialize<::device::mojom::HidDeviceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::HidManagerClient_DeviceRemoved_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevicesAndSetClient_ParamsDataView {
 public:
  HidManager_GetDevicesAndSetClient_ParamsDataView() {}

  HidManager_GetDevicesAndSetClient_ParamsDataView(
      internal::HidManager_GetDevicesAndSetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::HidManagerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HidManager_GetDevicesAndSetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevicesAndSetClient_ResponseParamsDataView {
 public:
  HidManager_GetDevicesAndSetClient_ResponseParamsDataView() {}

  HidManager_GetDevicesAndSetClient_ResponseParamsDataView(
      internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<HidDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidManager_GetDevicesAndSetClient_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_GetDevices_ParamsDataView {
 public:
  HidManager_GetDevices_ParamsDataView() {}

  HidManager_GetDevices_ParamsDataView(
      internal::HidManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::HidManager_GetDevices_Params_Data* data_ = nullptr;
};

class HidManager_GetDevices_ResponseParamsDataView {
 public:
  HidManager_GetDevices_ResponseParamsDataView() {}

  HidManager_GetDevices_ResponseParamsDataView(
      internal::HidManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<HidDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::HidDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HidManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_Connect_ParamsDataView {
 public:
  HidManager_Connect_ParamsDataView() {}

  HidManager_Connect_ParamsDataView(
      internal::HidManager_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceGuid(UserType* output) {
    auto* pointer = data_->device_guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeConnectionClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::HidConnectionClientPtrDataView>(
            &data_->connection_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HidManager_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidManager_Connect_ResponseParamsDataView {
 public:
  HidManager_Connect_ResponseParamsDataView() {}

  HidManager_Connect_ResponseParamsDataView(
      internal::HidManager_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeConnection() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::HidConnectionPtrDataView>(
            &data_->connection, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HidManager_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Read_ParamsDataView {
 public:
  HidConnection_Read_ParamsDataView() {}

  HidConnection_Read_ParamsDataView(
      internal::HidConnection_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::HidConnection_Read_Params_Data* data_ = nullptr;
};

class HidConnection_Read_ResponseParamsDataView {
 public:
  HidConnection_Read_ResponseParamsDataView() {}

  HidConnection_Read_ResponseParamsDataView(
      internal::HidConnection_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Write_ParamsDataView {
 public:
  HidConnection_Write_ParamsDataView() {}

  HidConnection_Write_ParamsDataView(
      internal::HidConnection_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_Write_ResponseParamsDataView {
 public:
  HidConnection_Write_ResponseParamsDataView() {}

  HidConnection_Write_ResponseParamsDataView(
      internal::HidConnection_Write_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::HidConnection_Write_ResponseParams_Data* data_ = nullptr;
};

class HidConnection_GetFeatureReport_ParamsDataView {
 public:
  HidConnection_GetFeatureReport_ParamsDataView() {}

  HidConnection_GetFeatureReport_ParamsDataView(
      internal::HidConnection_GetFeatureReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
 private:
  internal::HidConnection_GetFeatureReport_Params_Data* data_ = nullptr;
};

class HidConnection_GetFeatureReport_ResponseParamsDataView {
 public:
  HidConnection_GetFeatureReport_ResponseParamsDataView() {}

  HidConnection_GetFeatureReport_ResponseParamsDataView(
      internal::HidConnection_GetFeatureReport_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_GetFeatureReport_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_SendFeatureReport_ParamsDataView {
 public:
  HidConnection_SendFeatureReport_ParamsDataView() {}

  HidConnection_SendFeatureReport_ParamsDataView(
      internal::HidConnection_SendFeatureReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnection_SendFeatureReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HidConnection_SendFeatureReport_ResponseParamsDataView {
 public:
  HidConnection_SendFeatureReport_ResponseParamsDataView() {}

  HidConnection_SendFeatureReport_ResponseParamsDataView(
      internal::HidConnection_SendFeatureReport_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::HidConnection_SendFeatureReport_ResponseParams_Data* data_ = nullptr;
};

class HidConnectionClient_OnInputReport_ParamsDataView {
 public:
  HidConnectionClient_OnInputReport_ParamsDataView() {}

  HidConnectionClient_OnInputReport_ParamsDataView(
      internal::HidConnectionClient_OnInputReport_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t report_id() const {
    return data_->report_id;
  }
  inline void GetBufferDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::HidConnectionClient_OnInputReport_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void HidManagerClient_DeviceAdded_ParamsDataView::GetDeviceInfoDataView(
    HidDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = HidDeviceInfoDataView(pointer, context_);
}


inline void HidManagerClient_DeviceRemoved_ParamsDataView::GetDeviceInfoDataView(
    HidDeviceInfoDataView* output) {
  auto pointer = data_->device_info.Get();
  *output = HidDeviceInfoDataView(pointer, context_);
}




inline void HidManager_GetDevicesAndSetClient_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<HidDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<HidDeviceInfoDataView>(pointer, context_);
}




inline void HidManager_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<HidDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<HidDeviceInfoDataView>(pointer, context_);
}


inline void HidManager_Connect_ParamsDataView::GetDeviceGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}






inline void HidConnection_Read_ResponseParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void HidConnection_Write_ParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void HidConnection_GetFeatureReport_ResponseParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void HidConnection_SendFeatureReport_ParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void HidConnectionClient_OnInputReport_ParamsDataView::GetBufferDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->buffer.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_PARAMS_DATA_H_