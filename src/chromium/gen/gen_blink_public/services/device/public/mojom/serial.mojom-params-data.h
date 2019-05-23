// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_PARAMS_DATA_H_

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
class  SerialPortManager_GetDevices_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortManager_GetDevices_Params_Data));
      new (data()) SerialPortManager_GetDevices_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortManager_GetDevices_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortManager_GetDevices_Params_Data>(index_);
    }
    SerialPortManager_GetDevices_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPortManager_GetDevices_Params_Data();
  ~SerialPortManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(SerialPortManager_GetDevices_Params_Data) == 8,
              "Bad sizeof(SerialPortManager_GetDevices_Params_Data)");
class  SerialPortManager_GetDevices_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortManager_GetDevices_ResponseParams_Data));
      new (data()) SerialPortManager_GetDevices_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortManager_GetDevices_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortManager_GetDevices_ResponseParams_Data>(index_);
    }
    SerialPortManager_GetDevices_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::SerialPortInfo_Data>>> devices;

 private:
  SerialPortManager_GetDevices_ResponseParams_Data();
  ~SerialPortManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPortManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPortManager_GetDevices_ResponseParams_Data)");
class  SerialPortManager_GetPort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortManager_GetPort_Params_Data));
      new (data()) SerialPortManager_GetPort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortManager_GetPort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortManager_GetPort_Params_Data>(index_);
    }
    SerialPortManager_GetPort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Handle_Data port_request;
  mojo::internal::Interface_Data watcher;
  uint8_t padfinal_[4];

 private:
  SerialPortManager_GetPort_Params_Data();
  ~SerialPortManager_GetPort_Params_Data() = delete;
};
static_assert(sizeof(SerialPortManager_GetPort_Params_Data) == 32,
              "Bad sizeof(SerialPortManager_GetPort_Params_Data)");
class  SerialPort_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_Open_Params_Data));
      new (data()) SerialPort_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_Open_Params_Data>(index_);
    }
    SerialPort_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialConnectionOptions_Data> options;
  mojo::internal::Handle_Data in_stream;
  mojo::internal::Handle_Data out_stream;
  mojo::internal::AssociatedInterface_Data client;

 private:
  SerialPort_Open_Params_Data();
  ~SerialPort_Open_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_Open_Params_Data) == 32,
              "Bad sizeof(SerialPort_Open_Params_Data)");
class  SerialPort_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_Open_ResponseParams_Data));
      new (data()) SerialPort_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_Open_ResponseParams_Data>(index_);
    }
    SerialPort_Open_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_Open_ResponseParams_Data();
  ~SerialPort_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_Open_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_Open_ResponseParams_Data)");
class  SerialPort_ClearSendError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ClearSendError_Params_Data));
      new (data()) SerialPort_ClearSendError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ClearSendError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ClearSendError_Params_Data>(index_);
    }
    SerialPort_ClearSendError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data consumer;
  uint8_t padfinal_[4];

 private:
  SerialPort_ClearSendError_Params_Data();
  ~SerialPort_ClearSendError_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_ClearSendError_Params_Data) == 16,
              "Bad sizeof(SerialPort_ClearSendError_Params_Data)");
class  SerialPort_ClearReadError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ClearReadError_Params_Data));
      new (data()) SerialPort_ClearReadError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ClearReadError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ClearReadError_Params_Data>(index_);
    }
    SerialPort_ClearReadError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data producer;
  uint8_t padfinal_[4];

 private:
  SerialPort_ClearReadError_Params_Data();
  ~SerialPort_ClearReadError_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_ClearReadError_Params_Data) == 16,
              "Bad sizeof(SerialPort_ClearReadError_Params_Data)");
class  SerialPort_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_Flush_Params_Data));
      new (data()) SerialPort_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_Flush_Params_Data>(index_);
    }
    SerialPort_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPort_Flush_Params_Data();
  ~SerialPort_Flush_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_Flush_Params_Data) == 8,
              "Bad sizeof(SerialPort_Flush_Params_Data)");
class  SerialPort_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_Flush_ResponseParams_Data));
      new (data()) SerialPort_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_Flush_ResponseParams_Data>(index_);
    }
    SerialPort_Flush_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_Flush_ResponseParams_Data();
  ~SerialPort_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_Flush_ResponseParams_Data)");
class  SerialPort_GetControlSignals_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_GetControlSignals_Params_Data));
      new (data()) SerialPort_GetControlSignals_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_GetControlSignals_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_GetControlSignals_Params_Data>(index_);
    }
    SerialPort_GetControlSignals_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPort_GetControlSignals_Params_Data();
  ~SerialPort_GetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_GetControlSignals_Params_Data) == 8,
              "Bad sizeof(SerialPort_GetControlSignals_Params_Data)");
class  SerialPort_GetControlSignals_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_GetControlSignals_ResponseParams_Data));
      new (data()) SerialPort_GetControlSignals_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_GetControlSignals_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_GetControlSignals_ResponseParams_Data>(index_);
    }
    SerialPort_GetControlSignals_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialPortControlSignals_Data> signals;

 private:
  SerialPort_GetControlSignals_ResponseParams_Data();
  ~SerialPort_GetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_GetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_GetControlSignals_ResponseParams_Data)");
class  SerialPort_SetControlSignals_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_SetControlSignals_Params_Data));
      new (data()) SerialPort_SetControlSignals_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_SetControlSignals_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_SetControlSignals_Params_Data>(index_);
    }
    SerialPort_SetControlSignals_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialHostControlSignals_Data> signals;

 private:
  SerialPort_SetControlSignals_Params_Data();
  ~SerialPort_SetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_SetControlSignals_Params_Data) == 16,
              "Bad sizeof(SerialPort_SetControlSignals_Params_Data)");
class  SerialPort_SetControlSignals_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_SetControlSignals_ResponseParams_Data));
      new (data()) SerialPort_SetControlSignals_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_SetControlSignals_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_SetControlSignals_ResponseParams_Data>(index_);
    }
    SerialPort_SetControlSignals_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_SetControlSignals_ResponseParams_Data();
  ~SerialPort_SetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_SetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_SetControlSignals_ResponseParams_Data)");
class  SerialPort_ConfigurePort_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ConfigurePort_Params_Data));
      new (data()) SerialPort_ConfigurePort_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ConfigurePort_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ConfigurePort_Params_Data>(index_);
    }
    SerialPort_ConfigurePort_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialConnectionOptions_Data> options;

 private:
  SerialPort_ConfigurePort_Params_Data();
  ~SerialPort_ConfigurePort_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_ConfigurePort_Params_Data) == 16,
              "Bad sizeof(SerialPort_ConfigurePort_Params_Data)");
class  SerialPort_ConfigurePort_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ConfigurePort_ResponseParams_Data));
      new (data()) SerialPort_ConfigurePort_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ConfigurePort_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ConfigurePort_ResponseParams_Data>(index_);
    }
    SerialPort_ConfigurePort_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_ConfigurePort_ResponseParams_Data();
  ~SerialPort_ConfigurePort_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_ConfigurePort_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_ConfigurePort_ResponseParams_Data)");
class  SerialPort_GetPortInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_GetPortInfo_Params_Data));
      new (data()) SerialPort_GetPortInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_GetPortInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_GetPortInfo_Params_Data>(index_);
    }
    SerialPort_GetPortInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPort_GetPortInfo_Params_Data();
  ~SerialPort_GetPortInfo_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_GetPortInfo_Params_Data) == 8,
              "Bad sizeof(SerialPort_GetPortInfo_Params_Data)");
class  SerialPort_GetPortInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_GetPortInfo_ResponseParams_Data));
      new (data()) SerialPort_GetPortInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_GetPortInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_GetPortInfo_ResponseParams_Data>(index_);
    }
    SerialPort_GetPortInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SerialConnectionInfo_Data> info;

 private:
  SerialPort_GetPortInfo_ResponseParams_Data();
  ~SerialPort_GetPortInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_GetPortInfo_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_GetPortInfo_ResponseParams_Data)");
class  SerialPort_SetBreak_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_SetBreak_Params_Data));
      new (data()) SerialPort_SetBreak_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_SetBreak_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_SetBreak_Params_Data>(index_);
    }
    SerialPort_SetBreak_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPort_SetBreak_Params_Data();
  ~SerialPort_SetBreak_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_SetBreak_Params_Data) == 8,
              "Bad sizeof(SerialPort_SetBreak_Params_Data)");
class  SerialPort_SetBreak_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_SetBreak_ResponseParams_Data));
      new (data()) SerialPort_SetBreak_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_SetBreak_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_SetBreak_ResponseParams_Data>(index_);
    }
    SerialPort_SetBreak_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_SetBreak_ResponseParams_Data();
  ~SerialPort_SetBreak_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_SetBreak_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_SetBreak_ResponseParams_Data)");
class  SerialPort_ClearBreak_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ClearBreak_Params_Data));
      new (data()) SerialPort_ClearBreak_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ClearBreak_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ClearBreak_Params_Data>(index_);
    }
    SerialPort_ClearBreak_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  SerialPort_ClearBreak_Params_Data();
  ~SerialPort_ClearBreak_Params_Data() = delete;
};
static_assert(sizeof(SerialPort_ClearBreak_Params_Data) == 8,
              "Bad sizeof(SerialPort_ClearBreak_Params_Data)");
class  SerialPort_ClearBreak_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPort_ClearBreak_ResponseParams_Data));
      new (data()) SerialPort_ClearBreak_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPort_ClearBreak_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPort_ClearBreak_ResponseParams_Data>(index_);
    }
    SerialPort_ClearBreak_ResponseParams_Data* operator->() { return data(); }

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
  SerialPort_ClearBreak_ResponseParams_Data();
  ~SerialPort_ClearBreak_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialPort_ClearBreak_ResponseParams_Data) == 16,
              "Bad sizeof(SerialPort_ClearBreak_ResponseParams_Data)");
class  SerialPortClient_OnReadError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortClient_OnReadError_Params_Data));
      new (data()) SerialPortClient_OnReadError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortClient_OnReadError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortClient_OnReadError_Params_Data>(index_);
    }
    SerialPortClient_OnReadError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  SerialPortClient_OnReadError_Params_Data();
  ~SerialPortClient_OnReadError_Params_Data() = delete;
};
static_assert(sizeof(SerialPortClient_OnReadError_Params_Data) == 16,
              "Bad sizeof(SerialPortClient_OnReadError_Params_Data)");
class  SerialPortClient_OnSendError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortClient_OnSendError_Params_Data));
      new (data()) SerialPortClient_OnSendError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortClient_OnSendError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortClient_OnSendError_Params_Data>(index_);
    }
    SerialPortClient_OnSendError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  SerialPortClient_OnSendError_Params_Data();
  ~SerialPortClient_OnSendError_Params_Data() = delete;
};
static_assert(sizeof(SerialPortClient_OnSendError_Params_Data) == 16,
              "Bad sizeof(SerialPortClient_OnSendError_Params_Data)");

}  // namespace internal
class SerialPortManager_GetDevices_ParamsDataView {
 public:
  SerialPortManager_GetDevices_ParamsDataView() {}

  SerialPortManager_GetDevices_ParamsDataView(
      internal::SerialPortManager_GetDevices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPortManager_GetDevices_Params_Data* data_ = nullptr;
};

class SerialPortManager_GetDevices_ResponseParamsDataView {
 public:
  SerialPortManager_GetDevices_ResponseParamsDataView() {}

  SerialPortManager_GetDevices_ResponseParamsDataView(
      internal::SerialPortManager_GetDevices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDevicesDataView(
      mojo::ArrayDataView<SerialPortInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDevices(UserType* output) {
    auto* pointer = data_->devices.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::SerialPortInfoDataView>>(
        pointer, output, context_);
  }
 private:
  internal::SerialPortManager_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPortManager_GetPort_ParamsDataView {
 public:
  SerialPortManager_GetPort_ParamsDataView() {}

  SerialPortManager_GetPort_ParamsDataView(
      internal::SerialPortManager_GetPort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadToken(UserType* output) {
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakePortRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SerialPortRequestDataView>(
            &data_->port_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeWatcher() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SerialPortConnectionWatcherPtrDataView>(
            &data_->watcher, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerialPortManager_GetPort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_Open_ParamsDataView {
 public:
  SerialPort_Open_ParamsDataView() {}

  SerialPort_Open_ParamsDataView(
      internal::SerialPort_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      SerialConnectionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionOptionsDataView>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeConsumerHandle TakeInStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->in_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeProducerHandle TakeOutStream() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->out_stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::SerialPortClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerialPort_Open_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_Open_ResponseParamsDataView {
 public:
  SerialPort_Open_ResponseParamsDataView() {}

  SerialPort_Open_ResponseParamsDataView(
      internal::SerialPort_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_Open_ResponseParams_Data* data_ = nullptr;
};

class SerialPort_ClearSendError_ParamsDataView {
 public:
  SerialPort_ClearSendError_ParamsDataView() {}

  SerialPort_ClearSendError_ParamsDataView(
      internal::SerialPort_ClearSendError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeConsumer() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->consumer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerialPort_ClearSendError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_ClearReadError_ParamsDataView {
 public:
  SerialPort_ClearReadError_ParamsDataView() {}

  SerialPort_ClearReadError_ParamsDataView(
      internal::SerialPort_ClearReadError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakeProducer() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->producer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerialPort_ClearReadError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_Flush_ParamsDataView {
 public:
  SerialPort_Flush_ParamsDataView() {}

  SerialPort_Flush_ParamsDataView(
      internal::SerialPort_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPort_Flush_Params_Data* data_ = nullptr;
};

class SerialPort_Flush_ResponseParamsDataView {
 public:
  SerialPort_Flush_ResponseParamsDataView() {}

  SerialPort_Flush_ResponseParamsDataView(
      internal::SerialPort_Flush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_Flush_ResponseParams_Data* data_ = nullptr;
};

class SerialPort_GetControlSignals_ParamsDataView {
 public:
  SerialPort_GetControlSignals_ParamsDataView() {}

  SerialPort_GetControlSignals_ParamsDataView(
      internal::SerialPort_GetControlSignals_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPort_GetControlSignals_Params_Data* data_ = nullptr;
};

class SerialPort_GetControlSignals_ResponseParamsDataView {
 public:
  SerialPort_GetControlSignals_ResponseParamsDataView() {}

  SerialPort_GetControlSignals_ResponseParamsDataView(
      internal::SerialPort_GetControlSignals_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignalsDataView(
      SerialPortControlSignalsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignals(UserType* output) {
    auto* pointer = data_->signals.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialPortControlSignalsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialPort_GetControlSignals_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_SetControlSignals_ParamsDataView {
 public:
  SerialPort_SetControlSignals_ParamsDataView() {}

  SerialPort_SetControlSignals_ParamsDataView(
      internal::SerialPort_SetControlSignals_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSignalsDataView(
      SerialHostControlSignalsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSignals(UserType* output) {
    auto* pointer = data_->signals.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialHostControlSignalsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialPort_SetControlSignals_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_SetControlSignals_ResponseParamsDataView {
 public:
  SerialPort_SetControlSignals_ResponseParamsDataView() {}

  SerialPort_SetControlSignals_ResponseParamsDataView(
      internal::SerialPort_SetControlSignals_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_SetControlSignals_ResponseParams_Data* data_ = nullptr;
};

class SerialPort_ConfigurePort_ParamsDataView {
 public:
  SerialPort_ConfigurePort_ParamsDataView() {}

  SerialPort_ConfigurePort_ParamsDataView(
      internal::SerialPort_ConfigurePort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      SerialConnectionOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialPort_ConfigurePort_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_ConfigurePort_ResponseParamsDataView {
 public:
  SerialPort_ConfigurePort_ResponseParamsDataView() {}

  SerialPort_ConfigurePort_ResponseParamsDataView(
      internal::SerialPort_ConfigurePort_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_ConfigurePort_ResponseParams_Data* data_ = nullptr;
};

class SerialPort_GetPortInfo_ParamsDataView {
 public:
  SerialPort_GetPortInfo_ParamsDataView() {}

  SerialPort_GetPortInfo_ParamsDataView(
      internal::SerialPort_GetPortInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPort_GetPortInfo_Params_Data* data_ = nullptr;
};

class SerialPort_GetPortInfo_ResponseParamsDataView {
 public:
  SerialPort_GetPortInfo_ResponseParamsDataView() {}

  SerialPort_GetPortInfo_ResponseParamsDataView(
      internal::SerialPort_GetPortInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      SerialConnectionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::device::mojom::SerialConnectionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::SerialPort_GetPortInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class SerialPort_SetBreak_ParamsDataView {
 public:
  SerialPort_SetBreak_ParamsDataView() {}

  SerialPort_SetBreak_ParamsDataView(
      internal::SerialPort_SetBreak_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPort_SetBreak_Params_Data* data_ = nullptr;
};

class SerialPort_SetBreak_ResponseParamsDataView {
 public:
  SerialPort_SetBreak_ResponseParamsDataView() {}

  SerialPort_SetBreak_ResponseParamsDataView(
      internal::SerialPort_SetBreak_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_SetBreak_ResponseParams_Data* data_ = nullptr;
};

class SerialPort_ClearBreak_ParamsDataView {
 public:
  SerialPort_ClearBreak_ParamsDataView() {}

  SerialPort_ClearBreak_ParamsDataView(
      internal::SerialPort_ClearBreak_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SerialPort_ClearBreak_Params_Data* data_ = nullptr;
};

class SerialPort_ClearBreak_ResponseParamsDataView {
 public:
  SerialPort_ClearBreak_ResponseParamsDataView() {}

  SerialPort_ClearBreak_ResponseParamsDataView(
      internal::SerialPort_ClearBreak_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::SerialPort_ClearBreak_ResponseParams_Data* data_ = nullptr;
};

class SerialPortClient_OnReadError_ParamsDataView {
 public:
  SerialPortClient_OnReadError_ParamsDataView() {}

  SerialPortClient_OnReadError_ParamsDataView(
      internal::SerialPortClient_OnReadError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::SerialReceiveError>(
        data_value, output);
  }

  SerialReceiveError error() const {
    return static_cast<SerialReceiveError>(data_->error);
  }
 private:
  internal::SerialPortClient_OnReadError_Params_Data* data_ = nullptr;
};

class SerialPortClient_OnSendError_ParamsDataView {
 public:
  SerialPortClient_OnSendError_ParamsDataView() {}

  SerialPortClient_OnSendError_ParamsDataView(
      internal::SerialPortClient_OnSendError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::SerialSendError>(
        data_value, output);
  }

  SerialSendError error() const {
    return static_cast<SerialSendError>(data_->error);
  }
 private:
  internal::SerialPortClient_OnSendError_Params_Data* data_ = nullptr;
};




inline void SerialPortManager_GetDevices_ResponseParamsDataView::GetDevicesDataView(
    mojo::ArrayDataView<SerialPortInfoDataView>* output) {
  auto pointer = data_->devices.Get();
  *output = mojo::ArrayDataView<SerialPortInfoDataView>(pointer, context_);
}


inline void SerialPortManager_GetPort_ParamsDataView::GetTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void SerialPort_Open_ParamsDataView::GetOptionsDataView(
    SerialConnectionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SerialConnectionOptionsDataView(pointer, context_);
}














inline void SerialPort_GetControlSignals_ResponseParamsDataView::GetSignalsDataView(
    SerialPortControlSignalsDataView* output) {
  auto pointer = data_->signals.Get();
  *output = SerialPortControlSignalsDataView(pointer, context_);
}


inline void SerialPort_SetControlSignals_ParamsDataView::GetSignalsDataView(
    SerialHostControlSignalsDataView* output) {
  auto pointer = data_->signals.Get();
  *output = SerialHostControlSignalsDataView(pointer, context_);
}




inline void SerialPort_ConfigurePort_ParamsDataView::GetOptionsDataView(
    SerialConnectionOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = SerialConnectionOptionsDataView(pointer, context_);
}






inline void SerialPort_GetPortInfo_ResponseParamsDataView::GetInfoDataView(
    SerialConnectionInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = SerialConnectionInfoDataView(pointer, context_);
}













}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_PARAMS_DATA_H_