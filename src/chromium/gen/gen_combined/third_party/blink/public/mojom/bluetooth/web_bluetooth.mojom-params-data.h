// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestDevice_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestDevice_Params_Data));
      new (data()) WebBluetoothService_RequestDevice_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestDevice_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestDevice_Params_Data>(index_);
    }
    WebBluetoothService_RequestDevice_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothRequestDeviceOptions_Data> options;

 private:
  WebBluetoothService_RequestDevice_Params_Data();
  ~WebBluetoothService_RequestDevice_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestDevice_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RequestDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestDevice_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data));
      new (data()) WebBluetoothService_RequestDevice_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestDevice_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestDevice_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RequestDevice_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<internal::WebBluetoothDevice_Data> device;

 private:
  WebBluetoothService_RequestDevice_ResponseParams_Data();
  ~WebBluetoothService_RequestDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RequestDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerConnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerConnect_Params_Data));
      new (data()) WebBluetoothService_RemoteServerConnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerConnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerConnect_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerConnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;
  mojo::internal::AssociatedInterface_Data client;

 private:
  WebBluetoothService_RemoteServerConnect_Params_Data();
  ~WebBluetoothService_RemoteServerConnect_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerConnect_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServerConnect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerConnect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServerConnect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerConnect_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServerConnect_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteServerConnect_ResponseParams_Data();
  ~WebBluetoothService_RemoteServerConnect_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteServerConnect_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerDisconnect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data));
      new (data()) WebBluetoothService_RemoteServerDisconnect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerDisconnect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerDisconnect_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerDisconnect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;

 private:
  WebBluetoothService_RemoteServerDisconnect_Params_Data();
  ~WebBluetoothService_RemoteServerDisconnect_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteServerDisconnect_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data));
      new (data()) WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothDeviceId_Data> device_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> services_uuid;

 private:
  WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data();
  ~WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTService_Data>>> services;

 private:
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data();
  ~WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data));
      new (data()) WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data>(index_);
    }
    WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> service_instance_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> characteristics_uuid;

 private:
  WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data();
  ~WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTCharacteristic_Data>>> characteristics;

 private:
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data();
  ~WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicReadValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicReadValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicReadValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;

 private:
  WebBluetoothService_RemoteCharacteristicReadValue_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicReadValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicReadValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;
  mojo::internal::AssociatedInterface_Data client;

 private:
  WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristic_instance_id;

 private:
  WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data) == 8,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> characteristics_instance_id;
  int32_t quantity;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::bluetooth::mojom::internal::UUID_Data> descriptor_uuid;

 private:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data();
  ~WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data) == 32,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebBluetoothRemoteGATTDescriptor_Data>>> descriptors;

 private:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data();
  ~WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorReadValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data));
      new (data()) WebBluetoothService_RemoteDescriptorReadValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorReadValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorReadValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_instance_id;

 private:
  WebBluetoothService_RemoteDescriptorReadValue_Params_Data();
  ~WebBluetoothService_RemoteDescriptorReadValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorReadValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorWriteValue_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data));
      new (data()) WebBluetoothService_RemoteDescriptorWriteValue_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorWriteValue_Params_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> descriptor_instance_id;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothService_RemoteDescriptorWriteValue_Params_Data();
  ~WebBluetoothService_RemoteDescriptorWriteValue_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorWriteValue_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data));
      new (data()) WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* operator->() { return data(); }

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
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data();
  ~WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data) == 16,
              "Bad sizeof(WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestScanningStart_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestScanningStart_Params_Data));
      new (data()) WebBluetoothService_RequestScanningStart_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestScanningStart_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestScanningStart_Params_Data>(index_);
    }
    WebBluetoothService_RequestScanningStart_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;
  mojo::internal::Pointer<internal::WebBluetoothRequestLEScanOptions_Data> options;

 private:
  WebBluetoothService_RequestScanningStart_Params_Data();
  ~WebBluetoothService_RequestScanningStart_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestScanningStart_Params_Data) == 24,
              "Bad sizeof(WebBluetoothService_RequestScanningStart_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothService_RequestScanningStart_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothService_RequestScanningStart_ResponseParams_Data));
      new (data()) WebBluetoothService_RequestScanningStart_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothService_RequestScanningStart_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothService_RequestScanningStart_ResponseParams_Data>(index_);
    }
    WebBluetoothService_RequestScanningStart_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::RequestScanningStartResult_Data result;

 private:
  WebBluetoothService_RequestScanningStart_ResponseParams_Data();
  ~WebBluetoothService_RequestScanningStart_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebBluetoothService_RequestScanningStart_ResponseParams_Data) == 24,
              "Bad sizeof(WebBluetoothService_RequestScanningStart_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothServerClient_GATTServerDisconnected_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data));
      new (data()) WebBluetoothServerClient_GATTServerDisconnected_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothServerClient_GATTServerDisconnected_Params_Data>(index_);
    }
    WebBluetoothServerClient_GATTServerDisconnected_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  WebBluetoothServerClient_GATTServerDisconnected_Params_Data();
  ~WebBluetoothServerClient_GATTServerDisconnected_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data) == 8,
              "Bad sizeof(WebBluetoothServerClient_GATTServerDisconnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data));
      new (data()) WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data>(index_);
    }
    WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> value;

 private:
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data();
  ~WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data) == 16,
              "Bad sizeof(WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebBluetoothScanClient_ScanEvent_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(WebBluetoothScanClient_ScanEvent_Params_Data));
      new (data()) WebBluetoothScanClient_ScanEvent_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    WebBluetoothScanClient_ScanEvent_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<WebBluetoothScanClient_ScanEvent_Params_Data>(index_);
    }
    WebBluetoothScanClient_ScanEvent_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::WebBluetoothScanResult_Data> result;

 private:
  WebBluetoothScanClient_ScanEvent_Params_Data();
  ~WebBluetoothScanClient_ScanEvent_Params_Data() = delete;
};
static_assert(sizeof(WebBluetoothScanClient_ScanEvent_Params_Data) == 16,
              "Bad sizeof(WebBluetoothScanClient_ScanEvent_Params_Data)");

}  // namespace internal
class WebBluetoothService_RequestDevice_ParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ParamsDataView() {}

  WebBluetoothService_RequestDevice_ParamsDataView(
      internal::WebBluetoothService_RequestDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      WebBluetoothRequestDeviceOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RequestDevice_ResponseParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ResponseParamsDataView() {}

  WebBluetoothService_RequestDevice_ResponseParamsDataView(
      internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetDeviceDataView(
      WebBluetoothDeviceDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevice(UserType* output) {
    auto* pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerConnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WebBluetoothServerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerConnect_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteServerDisconnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerDisconnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerDisconnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDeviceId(UserType* output) {
    auto* pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetServicesUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServicesUuid(UserType* output) {
    auto* pointer = data_->services_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetServicesDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServices(UserType* output) {
    auto* pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTServiceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadServiceInstanceId(UserType* output) {
    auto* pointer = data_->service_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetCharacteristicsUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicsUuid(UserType* output) {
    auto* pointer = data_->characteristics_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetCharacteristicsDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristics(UserType* output) {
    auto* pointer = data_->characteristics.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WebBluetoothCharacteristicClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicInstanceId(UserType* output) {
    auto* pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicsInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCharacteristicsInstanceId(UserType* output) {
    auto* pointer = data_->characteristics_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetDescriptorUuidDataView(
      ::bluetooth::mojom::UUIDDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorUuid(UserType* output) {
    auto* pointer = data_->descriptor_uuid.Get();
    return mojo::internal::Deserialize<::bluetooth::mojom::UUIDDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetDescriptorsDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptors(UserType* output) {
    auto* pointer = data_->descriptors.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebBluetoothRemoteGATTDescriptorDataView>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView() {}

  WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorInstanceId(UserType* output) {
    auto* pointer = data_->descriptor_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorReadValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorReadValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView() {}

  WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptorInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptorInstanceId(UserType* output) {
    auto* pointer = data_->descriptor_instance_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorWriteValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteDescriptorWriteValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothResult>(
        data_value, output);
  }

  WebBluetoothResult result() const {
    return static_cast<WebBluetoothResult>(data_->result);
  }
 private:
  internal::WebBluetoothService_RemoteDescriptorWriteValue_ResponseParams_Data* data_ = nullptr;
};

class WebBluetoothService_RequestScanningStart_ParamsDataView {
 public:
  WebBluetoothService_RequestScanningStart_ParamsDataView() {}

  WebBluetoothService_RequestScanningStart_ParamsDataView(
      internal::WebBluetoothService_RequestScanningStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::WebBluetoothScanClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOptionsDataView(
      WebBluetoothRequestLEScanOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothRequestLEScanOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestScanningStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothService_RequestScanningStart_ResponseParamsDataView {
 public:
  WebBluetoothService_RequestScanningStart_ResponseParamsDataView() {}

  WebBluetoothService_RequestScanningStart_ResponseParamsDataView(
      internal::WebBluetoothService_RequestScanningStart_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      RequestScanningStartResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::RequestScanningStartResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestScanningStart_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView {
 public:
  WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView() {}

  WebBluetoothServerClient_GATTServerDisconnected_ParamsDataView(
      internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebBluetoothServerClient_GATTServerDisconnected_Params_Data* data_ = nullptr;
};

class WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView {
 public:
  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView() {}

  WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView(
      internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadValue(UserType* output) {
    auto* pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class WebBluetoothScanClient_ScanEvent_ParamsDataView {
 public:
  WebBluetoothScanClient_ScanEvent_ParamsDataView() {}

  WebBluetoothScanClient_ScanEvent_ParamsDataView(
      internal::WebBluetoothScanClient_ScanEvent_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      WebBluetoothScanResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothScanResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothScanClient_ScanEvent_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RequestDevice_ParamsDataView::GetOptionsDataView(
    WebBluetoothRequestDeviceOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = WebBluetoothRequestDeviceOptionsDataView(pointer, context_);
}


inline void WebBluetoothService_RequestDevice_ResponseParamsDataView::GetDeviceDataView(
    WebBluetoothDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = WebBluetoothDeviceDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerConnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteServerDisconnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetServicesUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->services_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView::GetServicesDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetServiceInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetCharacteristicsUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->characteristics_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView::GetCharacteristicsDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output) {
  auto pointer = data_->characteristics.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView::GetCharacteristicsInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristics_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ParamsDataView::GetDescriptorUuidDataView(
    ::bluetooth::mojom::UUIDDataView* output) {
  auto pointer = data_->descriptor_uuid.Get();
  *output = ::bluetooth::mojom::UUIDDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteCharacteristicGetDescriptors_ResponseParamsDataView::GetDescriptorsDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>* output) {
  auto pointer = data_->descriptors.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTDescriptorDataView>(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorReadValue_ParamsDataView::GetDescriptorInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorReadValue_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView::GetDescriptorInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->descriptor_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteDescriptorWriteValue_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void WebBluetoothService_RequestScanningStart_ParamsDataView::GetOptionsDataView(
    WebBluetoothRequestLEScanOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = WebBluetoothRequestLEScanOptionsDataView(pointer, context_);
}


inline void WebBluetoothService_RequestScanningStart_ResponseParamsDataView::GetResultDataView(
    RequestScanningStartResultDataView* output) {
  auto pointer = &data_->result;
  *output = RequestScanningStartResultDataView(pointer, context_);
}




inline void WebBluetoothCharacteristicClient_RemoteCharacteristicValueChanged_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void WebBluetoothScanClient_ScanEvent_ParamsDataView::GetResultDataView(
    WebBluetoothScanResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = WebBluetoothScanResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLUETOOTH_WEB_BLUETOOTH_MOJOM_PARAMS_DATA_H_