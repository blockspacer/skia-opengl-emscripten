// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_PARAMS_DATA_H_

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
class  BluetoothSystemFactory_Create_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystemFactory_Create_Params_Data));
      new (data()) BluetoothSystemFactory_Create_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystemFactory_Create_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystemFactory_Create_Params_Data>(index_);
    }
    BluetoothSystemFactory_Create_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data system;
  mojo::internal::Interface_Data system_client;
  uint8_t padfinal_[4];

 private:
  BluetoothSystemFactory_Create_Params_Data();
  ~BluetoothSystemFactory_Create_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystemFactory_Create_Params_Data) == 24,
              "Bad sizeof(BluetoothSystemFactory_Create_Params_Data)");
class  BluetoothSystem_GetState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetState_Params_Data));
      new (data()) BluetoothSystem_GetState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetState_Params_Data>(index_);
    }
    BluetoothSystem_GetState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothSystem_GetState_Params_Data();
  ~BluetoothSystem_GetState_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetState_Params_Data) == 8,
              "Bad sizeof(BluetoothSystem_GetState_Params_Data)");
class  BluetoothSystem_GetState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetState_ResponseParams_Data));
      new (data()) BluetoothSystem_GetState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetState_ResponseParams_Data>(index_);
    }
    BluetoothSystem_GetState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  BluetoothSystem_GetState_ResponseParams_Data();
  ~BluetoothSystem_GetState_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetState_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_GetState_ResponseParams_Data)");
class  BluetoothSystem_SetPowered_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_SetPowered_Params_Data));
      new (data()) BluetoothSystem_SetPowered_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_SetPowered_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_SetPowered_Params_Data>(index_);
    }
    BluetoothSystem_SetPowered_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t powered : 1;
  uint8_t padfinal_[7];

 private:
  BluetoothSystem_SetPowered_Params_Data();
  ~BluetoothSystem_SetPowered_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_SetPowered_Params_Data) == 16,
              "Bad sizeof(BluetoothSystem_SetPowered_Params_Data)");
class  BluetoothSystem_SetPowered_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_SetPowered_ResponseParams_Data));
      new (data()) BluetoothSystem_SetPowered_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_SetPowered_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_SetPowered_ResponseParams_Data>(index_);
    }
    BluetoothSystem_SetPowered_ResponseParams_Data* operator->() { return data(); }

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
  BluetoothSystem_SetPowered_ResponseParams_Data();
  ~BluetoothSystem_SetPowered_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_SetPowered_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_SetPowered_ResponseParams_Data)");
class  BluetoothSystem_GetScanState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetScanState_Params_Data));
      new (data()) BluetoothSystem_GetScanState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetScanState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetScanState_Params_Data>(index_);
    }
    BluetoothSystem_GetScanState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothSystem_GetScanState_Params_Data();
  ~BluetoothSystem_GetScanState_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetScanState_Params_Data) == 8,
              "Bad sizeof(BluetoothSystem_GetScanState_Params_Data)");
class  BluetoothSystem_GetScanState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetScanState_ResponseParams_Data));
      new (data()) BluetoothSystem_GetScanState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetScanState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetScanState_ResponseParams_Data>(index_);
    }
    BluetoothSystem_GetScanState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t scan_state;
  uint8_t padfinal_[4];

 private:
  BluetoothSystem_GetScanState_ResponseParams_Data();
  ~BluetoothSystem_GetScanState_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetScanState_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_GetScanState_ResponseParams_Data)");
class  BluetoothSystem_StartScan_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_StartScan_Params_Data));
      new (data()) BluetoothSystem_StartScan_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_StartScan_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_StartScan_Params_Data>(index_);
    }
    BluetoothSystem_StartScan_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothSystem_StartScan_Params_Data();
  ~BluetoothSystem_StartScan_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_StartScan_Params_Data) == 8,
              "Bad sizeof(BluetoothSystem_StartScan_Params_Data)");
class  BluetoothSystem_StartScan_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_StartScan_ResponseParams_Data));
      new (data()) BluetoothSystem_StartScan_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_StartScan_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_StartScan_ResponseParams_Data>(index_);
    }
    BluetoothSystem_StartScan_ResponseParams_Data* operator->() { return data(); }

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
  BluetoothSystem_StartScan_ResponseParams_Data();
  ~BluetoothSystem_StartScan_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_StartScan_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_StartScan_ResponseParams_Data)");
class  BluetoothSystem_StopScan_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_StopScan_Params_Data));
      new (data()) BluetoothSystem_StopScan_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_StopScan_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_StopScan_Params_Data>(index_);
    }
    BluetoothSystem_StopScan_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothSystem_StopScan_Params_Data();
  ~BluetoothSystem_StopScan_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_StopScan_Params_Data) == 8,
              "Bad sizeof(BluetoothSystem_StopScan_Params_Data)");
class  BluetoothSystem_StopScan_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_StopScan_ResponseParams_Data));
      new (data()) BluetoothSystem_StopScan_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_StopScan_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_StopScan_ResponseParams_Data>(index_);
    }
    BluetoothSystem_StopScan_ResponseParams_Data* operator->() { return data(); }

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
  BluetoothSystem_StopScan_ResponseParams_Data();
  ~BluetoothSystem_StopScan_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_StopScan_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_StopScan_ResponseParams_Data)");
class  BluetoothSystem_GetAvailableDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetAvailableDevices_Params_Data));
      new (data()) BluetoothSystem_GetAvailableDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetAvailableDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetAvailableDevices_Params_Data>(index_);
    }
    BluetoothSystem_GetAvailableDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BluetoothSystem_GetAvailableDevices_Params_Data();
  ~BluetoothSystem_GetAvailableDevices_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetAvailableDevices_Params_Data) == 8,
              "Bad sizeof(BluetoothSystem_GetAvailableDevices_Params_Data)");
class  BluetoothSystem_GetAvailableDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystem_GetAvailableDevices_ResponseParams_Data));
      new (data()) BluetoothSystem_GetAvailableDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystem_GetAvailableDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystem_GetAvailableDevices_ResponseParams_Data>(index_);
    }
    BluetoothSystem_GetAvailableDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::BluetoothDeviceInfo_Data>>> devices;

 private:
  BluetoothSystem_GetAvailableDevices_ResponseParams_Data();
  ~BluetoothSystem_GetAvailableDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(BluetoothSystem_GetAvailableDevices_ResponseParams_Data) == 16,
              "Bad sizeof(BluetoothSystem_GetAvailableDevices_ResponseParams_Data)");
class  BluetoothSystemClient_OnStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystemClient_OnStateChanged_Params_Data));
      new (data()) BluetoothSystemClient_OnStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystemClient_OnStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystemClient_OnStateChanged_Params_Data>(index_);
    }
    BluetoothSystemClient_OnStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t new_state;
  uint8_t padfinal_[4];

 private:
  BluetoothSystemClient_OnStateChanged_Params_Data();
  ~BluetoothSystemClient_OnStateChanged_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystemClient_OnStateChanged_Params_Data) == 16,
              "Bad sizeof(BluetoothSystemClient_OnStateChanged_Params_Data)");
class  BluetoothSystemClient_OnScanStateChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BluetoothSystemClient_OnScanStateChanged_Params_Data));
      new (data()) BluetoothSystemClient_OnScanStateChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BluetoothSystemClient_OnScanStateChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BluetoothSystemClient_OnScanStateChanged_Params_Data>(index_);
    }
    BluetoothSystemClient_OnScanStateChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t new_state;
  uint8_t padfinal_[4];

 private:
  BluetoothSystemClient_OnScanStateChanged_Params_Data();
  ~BluetoothSystemClient_OnScanStateChanged_Params_Data() = delete;
};
static_assert(sizeof(BluetoothSystemClient_OnScanStateChanged_Params_Data) == 16,
              "Bad sizeof(BluetoothSystemClient_OnScanStateChanged_Params_Data)");

}  // namespace internal
class BluetoothSystemFactory_Create_ParamsDataView {
 public:
  BluetoothSystemFactory_Create_ParamsDataView() {}

  BluetoothSystemFactory_Create_ParamsDataView(
      internal::BluetoothSystemFactory_Create_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeSystem() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::BluetoothSystemRequestDataView>(
            &data_->system, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSystemClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::BluetoothSystemClientPtrDataView>(
            &data_->system_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::BluetoothSystemFactory_Create_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BluetoothSystem_GetState_ParamsDataView {
 public:
  BluetoothSystem_GetState_ParamsDataView() {}

  BluetoothSystem_GetState_ParamsDataView(
      internal::BluetoothSystem_GetState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothSystem_GetState_Params_Data* data_ = nullptr;
};

class BluetoothSystem_GetState_ResponseParamsDataView {
 public:
  BluetoothSystem_GetState_ResponseParamsDataView() {}

  BluetoothSystem_GetState_ResponseParamsDataView(
      internal::BluetoothSystem_GetState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_State>(
        data_value, output);
  }

  BluetoothSystem_State state() const {
    return static_cast<BluetoothSystem_State>(data_->state);
  }
 private:
  internal::BluetoothSystem_GetState_ResponseParams_Data* data_ = nullptr;
};

class BluetoothSystem_SetPowered_ParamsDataView {
 public:
  BluetoothSystem_SetPowered_ParamsDataView() {}

  BluetoothSystem_SetPowered_ParamsDataView(
      internal::BluetoothSystem_SetPowered_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool powered() const {
    return data_->powered;
  }
 private:
  internal::BluetoothSystem_SetPowered_Params_Data* data_ = nullptr;
};

class BluetoothSystem_SetPowered_ResponseParamsDataView {
 public:
  BluetoothSystem_SetPowered_ResponseParamsDataView() {}

  BluetoothSystem_SetPowered_ResponseParamsDataView(
      internal::BluetoothSystem_SetPowered_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_SetPoweredResult>(
        data_value, output);
  }

  BluetoothSystem_SetPoweredResult result() const {
    return static_cast<BluetoothSystem_SetPoweredResult>(data_->result);
  }
 private:
  internal::BluetoothSystem_SetPowered_ResponseParams_Data* data_ = nullptr;
};

class BluetoothSystem_GetScanState_ParamsDataView {
 public:
  BluetoothSystem_GetScanState_ParamsDataView() {}

  BluetoothSystem_GetScanState_ParamsDataView(
      internal::BluetoothSystem_GetScanState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothSystem_GetScanState_Params_Data* data_ = nullptr;
};

class BluetoothSystem_GetScanState_ResponseParamsDataView {
 public:
  BluetoothSystem_GetScanState_ResponseParamsDataView() {}

  BluetoothSystem_GetScanState_ResponseParamsDataView(
      internal::BluetoothSystem_GetScanState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScanState(UserType* output) const {
    auto data_value = data_->scan_state;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_ScanState>(
        data_value, output);
  }

  BluetoothSystem_ScanState scan_state() const {
    return static_cast<BluetoothSystem_ScanState>(data_->scan_state);
  }
 private:
  internal::BluetoothSystem_GetScanState_ResponseParams_Data* data_ = nullptr;
};

class BluetoothSystem_StartScan_ParamsDataView {
 public:
  BluetoothSystem_StartScan_ParamsDataView() {}

  BluetoothSystem_StartScan_ParamsDataView(
      internal::BluetoothSystem_StartScan_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothSystem_StartScan_Params_Data* data_ = nullptr;
};

class BluetoothSystem_StartScan_ResponseParamsDataView {
 public:
  BluetoothSystem_StartScan_ResponseParamsDataView() {}

  BluetoothSystem_StartScan_ResponseParamsDataView(
      internal::BluetoothSystem_StartScan_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_StartScanResult>(
        data_value, output);
  }

  BluetoothSystem_StartScanResult result() const {
    return static_cast<BluetoothSystem_StartScanResult>(data_->result);
  }
 private:
  internal::BluetoothSystem_StartScan_ResponseParams_Data* data_ = nullptr;
};

class BluetoothSystem_StopScan_ParamsDataView {
 public:
  BluetoothSystem_StopScan_ParamsDataView() {}

  BluetoothSystem_StopScan_ParamsDataView(
      internal::BluetoothSystem_StopScan_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothSystem_StopScan_Params_Data* data_ = nullptr;
};

class BluetoothSystem_StopScan_ResponseParamsDataView {
 public:
  BluetoothSystem_StopScan_ResponseParamsDataView() {}

  BluetoothSystem_StopScan_ResponseParamsDataView(
      internal::BluetoothSystem_StopScan_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_StopScanResult>(
        data_value, output);
  }

  BluetoothSystem_StopScanResult result() const {
    return static_cast<BluetoothSystem_StopScanResult>(data_->result);
  }
 private:
  internal::BluetoothSystem_StopScan_ResponseParams_Data* data_ = nullptr;
};

class BluetoothSystem_GetAvailableDevices_ParamsDataView {
 public:
  BluetoothSystem_GetAvailableDevices_ParamsDataView() {}

  BluetoothSystem_GetAvailableDevices_ParamsDataView(
      internal::BluetoothSystem_GetAvailableDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BluetoothSystem_GetAvailableDevices_Params_Data* data_ = nullptr;
};

class BluetoothSystem_GetAvailableDevices_ResponseParamsDataView {
 public:
  BluetoothSystem_GetAvailableDevices_ResponseParamsDataView() {}

  BluetoothSystem_GetAvailableDevices_ResponseParamsDataView(
      internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<BluetoothDeviceInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::BluetoothDeviceInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::BluetoothSystem_GetAvailableDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BluetoothSystemClient_OnStateChanged_ParamsDataView {
 public:
  BluetoothSystemClient_OnStateChanged_ParamsDataView() {}

  BluetoothSystemClient_OnStateChanged_ParamsDataView(
      internal::BluetoothSystemClient_OnStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewState(UserType* output) const {
    auto data_value = data_->new_state;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_State>(
        data_value, output);
  }

  BluetoothSystem_State new_state() const {
    return static_cast<BluetoothSystem_State>(data_->new_state);
  }
 private:
  internal::BluetoothSystemClient_OnStateChanged_Params_Data* data_ = nullptr;
};

class BluetoothSystemClient_OnScanStateChanged_ParamsDataView {
 public:
  BluetoothSystemClient_OnScanStateChanged_ParamsDataView() {}

  BluetoothSystemClient_OnScanStateChanged_ParamsDataView(
      internal::BluetoothSystemClient_OnScanStateChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNewState(UserType* output) const {
    auto data_value = data_->new_state;
    return mojo::internal::Deserialize<::device::mojom::BluetoothSystem_ScanState>(
        data_value, output);
  }

  BluetoothSystem_ScanState new_state() const {
    return static_cast<BluetoothSystem_ScanState>(data_->new_state);
  }
 private:
  internal::BluetoothSystemClient_OnScanStateChanged_Params_Data* data_ = nullptr;
};


























inline void BluetoothSystem_GetAvailableDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<BluetoothDeviceInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<BluetoothDeviceInfoDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_BLUETOOTH_SYSTEM_MOJOM_PARAMS_DATA_H_