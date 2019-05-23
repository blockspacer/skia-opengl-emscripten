// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_PARAMS_DATA_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_PARAMS_DATA_H_

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
class  UsbDevice_Open_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Open_Params_Data));
      new (data()) UsbDevice_Open_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Open_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Open_Params_Data>(index_);
    }
    UsbDevice_Open_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDevice_Open_Params_Data();
  ~UsbDevice_Open_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_Open_Params_Data) == 8,
              "Bad sizeof(UsbDevice_Open_Params_Data)");
class  UsbDevice_Open_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Open_ResponseParams_Data));
      new (data()) UsbDevice_Open_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Open_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Open_ResponseParams_Data>(index_);
    }
    UsbDevice_Open_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_Open_ResponseParams_Data();
  ~UsbDevice_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_Open_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_Open_ResponseParams_Data)");
class  UsbDevice_Close_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Close_Params_Data));
      new (data()) UsbDevice_Close_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Close_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Close_Params_Data>(index_);
    }
    UsbDevice_Close_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDevice_Close_Params_Data();
  ~UsbDevice_Close_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_Close_Params_Data) == 8,
              "Bad sizeof(UsbDevice_Close_Params_Data)");
class  UsbDevice_Close_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Close_ResponseParams_Data));
      new (data()) UsbDevice_Close_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Close_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Close_ResponseParams_Data>(index_);
    }
    UsbDevice_Close_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDevice_Close_ResponseParams_Data();
  ~UsbDevice_Close_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_Close_ResponseParams_Data) == 8,
              "Bad sizeof(UsbDevice_Close_ResponseParams_Data)");
class  UsbDevice_SetConfiguration_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_SetConfiguration_Params_Data));
      new (data()) UsbDevice_SetConfiguration_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_SetConfiguration_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_SetConfiguration_Params_Data>(index_);
    }
    UsbDevice_SetConfiguration_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t value;
  uint8_t padfinal_[7];

 private:
  UsbDevice_SetConfiguration_Params_Data();
  ~UsbDevice_SetConfiguration_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_SetConfiguration_Params_Data) == 16,
              "Bad sizeof(UsbDevice_SetConfiguration_Params_Data)");
class  UsbDevice_SetConfiguration_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_SetConfiguration_ResponseParams_Data));
      new (data()) UsbDevice_SetConfiguration_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_SetConfiguration_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_SetConfiguration_ResponseParams_Data>(index_);
    }
    UsbDevice_SetConfiguration_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_SetConfiguration_ResponseParams_Data();
  ~UsbDevice_SetConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_SetConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_SetConfiguration_ResponseParams_Data)");
class  UsbDevice_ClaimInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ClaimInterface_Params_Data));
      new (data()) UsbDevice_ClaimInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ClaimInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ClaimInterface_Params_Data>(index_);
    }
    UsbDevice_ClaimInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t padfinal_[7];

 private:
  UsbDevice_ClaimInterface_Params_Data();
  ~UsbDevice_ClaimInterface_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_ClaimInterface_Params_Data) == 16,
              "Bad sizeof(UsbDevice_ClaimInterface_Params_Data)");
class  UsbDevice_ClaimInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ClaimInterface_ResponseParams_Data));
      new (data()) UsbDevice_ClaimInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ClaimInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ClaimInterface_ResponseParams_Data>(index_);
    }
    UsbDevice_ClaimInterface_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_ClaimInterface_ResponseParams_Data();
  ~UsbDevice_ClaimInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_ClaimInterface_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_ClaimInterface_ResponseParams_Data)");
class  UsbDevice_ReleaseInterface_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ReleaseInterface_Params_Data));
      new (data()) UsbDevice_ReleaseInterface_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ReleaseInterface_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ReleaseInterface_Params_Data>(index_);
    }
    UsbDevice_ReleaseInterface_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t padfinal_[7];

 private:
  UsbDevice_ReleaseInterface_Params_Data();
  ~UsbDevice_ReleaseInterface_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_ReleaseInterface_Params_Data) == 16,
              "Bad sizeof(UsbDevice_ReleaseInterface_Params_Data)");
class  UsbDevice_ReleaseInterface_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ReleaseInterface_ResponseParams_Data));
      new (data()) UsbDevice_ReleaseInterface_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ReleaseInterface_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ReleaseInterface_ResponseParams_Data>(index_);
    }
    UsbDevice_ReleaseInterface_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_ReleaseInterface_ResponseParams_Data();
  ~UsbDevice_ReleaseInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_ReleaseInterface_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_ReleaseInterface_ResponseParams_Data)");
class  UsbDevice_SetInterfaceAlternateSetting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_SetInterfaceAlternateSetting_Params_Data));
      new (data()) UsbDevice_SetInterfaceAlternateSetting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_SetInterfaceAlternateSetting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_SetInterfaceAlternateSetting_Params_Data>(index_);
    }
    UsbDevice_SetInterfaceAlternateSetting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t alternate_setting;
  uint8_t padfinal_[6];

 private:
  UsbDevice_SetInterfaceAlternateSetting_Params_Data();
  ~UsbDevice_SetInterfaceAlternateSetting_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_SetInterfaceAlternateSetting_Params_Data) == 16,
              "Bad sizeof(UsbDevice_SetInterfaceAlternateSetting_Params_Data)");
class  UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data));
      new (data()) UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data>(index_);
    }
    UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data();
  ~UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data)");
class  UsbDevice_Reset_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Reset_Params_Data));
      new (data()) UsbDevice_Reset_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Reset_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Reset_Params_Data>(index_);
    }
    UsbDevice_Reset_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDevice_Reset_Params_Data();
  ~UsbDevice_Reset_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_Reset_Params_Data) == 8,
              "Bad sizeof(UsbDevice_Reset_Params_Data)");
class  UsbDevice_Reset_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_Reset_ResponseParams_Data));
      new (data()) UsbDevice_Reset_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_Reset_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_Reset_ResponseParams_Data>(index_);
    }
    UsbDevice_Reset_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_Reset_ResponseParams_Data();
  ~UsbDevice_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_Reset_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_Reset_ResponseParams_Data)");
class  UsbDevice_ClearHalt_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ClearHalt_Params_Data));
      new (data()) UsbDevice_ClearHalt_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ClearHalt_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ClearHalt_Params_Data>(index_);
    }
    UsbDevice_ClearHalt_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint;
  uint8_t padfinal_[7];

 private:
  UsbDevice_ClearHalt_Params_Data();
  ~UsbDevice_ClearHalt_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_ClearHalt_Params_Data) == 16,
              "Bad sizeof(UsbDevice_ClearHalt_Params_Data)");
class  UsbDevice_ClearHalt_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ClearHalt_ResponseParams_Data));
      new (data()) UsbDevice_ClearHalt_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ClearHalt_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ClearHalt_ResponseParams_Data>(index_);
    }
    UsbDevice_ClearHalt_ResponseParams_Data* operator->() { return data(); }

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
  UsbDevice_ClearHalt_ResponseParams_Data();
  ~UsbDevice_ClearHalt_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_ClearHalt_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_ClearHalt_ResponseParams_Data)");
class  UsbDevice_ControlTransferIn_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ControlTransferIn_Params_Data));
      new (data()) UsbDevice_ControlTransferIn_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ControlTransferIn_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ControlTransferIn_Params_Data>(index_);
    }
    UsbDevice_ControlTransferIn_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UsbControlTransferParams_Data> params;
  uint32_t length;
  uint32_t timeout;

 private:
  UsbDevice_ControlTransferIn_Params_Data();
  ~UsbDevice_ControlTransferIn_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_ControlTransferIn_Params_Data) == 24,
              "Bad sizeof(UsbDevice_ControlTransferIn_Params_Data)");
class  UsbDevice_ControlTransferIn_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ControlTransferIn_ResponseParams_Data));
      new (data()) UsbDevice_ControlTransferIn_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ControlTransferIn_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ControlTransferIn_ResponseParams_Data>(index_);
    }
    UsbDevice_ControlTransferIn_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  UsbDevice_ControlTransferIn_ResponseParams_Data();
  ~UsbDevice_ControlTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_ControlTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(UsbDevice_ControlTransferIn_ResponseParams_Data)");
class  UsbDevice_ControlTransferOut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ControlTransferOut_Params_Data));
      new (data()) UsbDevice_ControlTransferOut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ControlTransferOut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ControlTransferOut_Params_Data>(index_);
    }
    UsbDevice_ControlTransferOut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::UsbControlTransferParams_Data> params;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  uint32_t timeout;
  uint8_t padfinal_[4];

 private:
  UsbDevice_ControlTransferOut_Params_Data();
  ~UsbDevice_ControlTransferOut_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_ControlTransferOut_Params_Data) == 32,
              "Bad sizeof(UsbDevice_ControlTransferOut_Params_Data)");
class  UsbDevice_ControlTransferOut_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_ControlTransferOut_ResponseParams_Data));
      new (data()) UsbDevice_ControlTransferOut_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_ControlTransferOut_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_ControlTransferOut_ResponseParams_Data>(index_);
    }
    UsbDevice_ControlTransferOut_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  UsbDevice_ControlTransferOut_ResponseParams_Data();
  ~UsbDevice_ControlTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_ControlTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_ControlTransferOut_ResponseParams_Data)");
class  UsbDevice_GenericTransferIn_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_GenericTransferIn_Params_Data));
      new (data()) UsbDevice_GenericTransferIn_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_GenericTransferIn_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_GenericTransferIn_Params_Data>(index_);
    }
    UsbDevice_GenericTransferIn_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t length;
  uint32_t timeout;
  uint8_t padfinal_[4];

 private:
  UsbDevice_GenericTransferIn_Params_Data();
  ~UsbDevice_GenericTransferIn_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_GenericTransferIn_Params_Data) == 24,
              "Bad sizeof(UsbDevice_GenericTransferIn_Params_Data)");
class  UsbDevice_GenericTransferIn_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_GenericTransferIn_ResponseParams_Data));
      new (data()) UsbDevice_GenericTransferIn_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_GenericTransferIn_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_GenericTransferIn_ResponseParams_Data>(index_);
    }
    UsbDevice_GenericTransferIn_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  UsbDevice_GenericTransferIn_ResponseParams_Data();
  ~UsbDevice_GenericTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_GenericTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(UsbDevice_GenericTransferIn_ResponseParams_Data)");
class  UsbDevice_GenericTransferOut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_GenericTransferOut_Params_Data));
      new (data()) UsbDevice_GenericTransferOut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_GenericTransferOut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_GenericTransferOut_Params_Data>(index_);
    }
    UsbDevice_GenericTransferOut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  UsbDevice_GenericTransferOut_Params_Data();
  ~UsbDevice_GenericTransferOut_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_GenericTransferOut_Params_Data) == 24,
              "Bad sizeof(UsbDevice_GenericTransferOut_Params_Data)");
class  UsbDevice_GenericTransferOut_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_GenericTransferOut_ResponseParams_Data));
      new (data()) UsbDevice_GenericTransferOut_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_GenericTransferOut_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_GenericTransferOut_ResponseParams_Data>(index_);
    }
    UsbDevice_GenericTransferOut_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  UsbDevice_GenericTransferOut_ResponseParams_Data();
  ~UsbDevice_GenericTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_GenericTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_GenericTransferOut_ResponseParams_Data)");
class  UsbDevice_IsochronousTransferIn_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_IsochronousTransferIn_Params_Data));
      new (data()) UsbDevice_IsochronousTransferIn_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_IsochronousTransferIn_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_IsochronousTransferIn_Params_Data>(index_);
    }
    UsbDevice_IsochronousTransferIn_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> packet_lengths;

 private:
  UsbDevice_IsochronousTransferIn_Params_Data();
  ~UsbDevice_IsochronousTransferIn_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_IsochronousTransferIn_Params_Data) == 24,
              "Bad sizeof(UsbDevice_IsochronousTransferIn_Params_Data)");
class  UsbDevice_IsochronousTransferIn_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_IsochronousTransferIn_ResponseParams_Data));
      new (data()) UsbDevice_IsochronousTransferIn_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_IsochronousTransferIn_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_IsochronousTransferIn_ResponseParams_Data>(index_);
    }
    UsbDevice_IsochronousTransferIn_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbIsochronousPacket_Data>>> packets;

 private:
  UsbDevice_IsochronousTransferIn_ResponseParams_Data();
  ~UsbDevice_IsochronousTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_IsochronousTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(UsbDevice_IsochronousTransferIn_ResponseParams_Data)");
class  UsbDevice_IsochronousTransferOut_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_IsochronousTransferOut_Params_Data));
      new (data()) UsbDevice_IsochronousTransferOut_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_IsochronousTransferOut_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_IsochronousTransferOut_Params_Data>(index_);
    }
    UsbDevice_IsochronousTransferOut_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> packet_lengths;

 private:
  UsbDevice_IsochronousTransferOut_Params_Data();
  ~UsbDevice_IsochronousTransferOut_Params_Data() = delete;
};
static_assert(sizeof(UsbDevice_IsochronousTransferOut_Params_Data) == 32,
              "Bad sizeof(UsbDevice_IsochronousTransferOut_Params_Data)");
class  UsbDevice_IsochronousTransferOut_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDevice_IsochronousTransferOut_ResponseParams_Data));
      new (data()) UsbDevice_IsochronousTransferOut_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDevice_IsochronousTransferOut_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDevice_IsochronousTransferOut_ResponseParams_Data>(index_);
    }
    UsbDevice_IsochronousTransferOut_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbIsochronousPacket_Data>>> packets;

 private:
  UsbDevice_IsochronousTransferOut_ResponseParams_Data();
  ~UsbDevice_IsochronousTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(UsbDevice_IsochronousTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(UsbDevice_IsochronousTransferOut_ResponseParams_Data)");
class  UsbDeviceClient_OnDeviceOpened_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceClient_OnDeviceOpened_Params_Data));
      new (data()) UsbDeviceClient_OnDeviceOpened_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceClient_OnDeviceOpened_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceClient_OnDeviceOpened_Params_Data>(index_);
    }
    UsbDeviceClient_OnDeviceOpened_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDeviceClient_OnDeviceOpened_Params_Data();
  ~UsbDeviceClient_OnDeviceOpened_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceClient_OnDeviceOpened_Params_Data) == 8,
              "Bad sizeof(UsbDeviceClient_OnDeviceOpened_Params_Data)");
class  UsbDeviceClient_OnDeviceClosed_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceClient_OnDeviceClosed_Params_Data));
      new (data()) UsbDeviceClient_OnDeviceClosed_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceClient_OnDeviceClosed_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceClient_OnDeviceClosed_Params_Data>(index_);
    }
    UsbDeviceClient_OnDeviceClosed_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  UsbDeviceClient_OnDeviceClosed_Params_Data();
  ~UsbDeviceClient_OnDeviceClosed_Params_Data() = delete;
};
static_assert(sizeof(UsbDeviceClient_OnDeviceClosed_Params_Data) == 8,
              "Bad sizeof(UsbDeviceClient_OnDeviceClosed_Params_Data)");

}  // namespace internal
class UsbDevice_Open_ParamsDataView {
 public:
  UsbDevice_Open_ParamsDataView() {}

  UsbDevice_Open_ParamsDataView(
      internal::UsbDevice_Open_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Open_Params_Data* data_ = nullptr;
};

class UsbDevice_Open_ResponseParamsDataView {
 public:
  UsbDevice_Open_ResponseParamsDataView() {}

  UsbDevice_Open_ResponseParamsDataView(
      internal::UsbDevice_Open_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::device::mojom::UsbOpenDeviceError>(
        data_value, output);
  }

  UsbOpenDeviceError error() const {
    return static_cast<UsbOpenDeviceError>(data_->error);
  }
 private:
  internal::UsbDevice_Open_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_Close_ParamsDataView {
 public:
  UsbDevice_Close_ParamsDataView() {}

  UsbDevice_Close_ParamsDataView(
      internal::UsbDevice_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Close_Params_Data* data_ = nullptr;
};

class UsbDevice_Close_ResponseParamsDataView {
 public:
  UsbDevice_Close_ResponseParamsDataView() {}

  UsbDevice_Close_ResponseParamsDataView(
      internal::UsbDevice_Close_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Close_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_SetConfiguration_ParamsDataView {
 public:
  UsbDevice_SetConfiguration_ParamsDataView() {}

  UsbDevice_SetConfiguration_ParamsDataView(
      internal::UsbDevice_SetConfiguration_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t value() const {
    return data_->value;
  }
 private:
  internal::UsbDevice_SetConfiguration_Params_Data* data_ = nullptr;
};

class UsbDevice_SetConfiguration_ResponseParamsDataView {
 public:
  UsbDevice_SetConfiguration_ResponseParamsDataView() {}

  UsbDevice_SetConfiguration_ResponseParamsDataView(
      internal::UsbDevice_SetConfiguration_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_SetConfiguration_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ClaimInterface_ParamsDataView {
 public:
  UsbDevice_ClaimInterface_ParamsDataView() {}

  UsbDevice_ClaimInterface_ParamsDataView(
      internal::UsbDevice_ClaimInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
 private:
  internal::UsbDevice_ClaimInterface_Params_Data* data_ = nullptr;
};

class UsbDevice_ClaimInterface_ResponseParamsDataView {
 public:
  UsbDevice_ClaimInterface_ResponseParamsDataView() {}

  UsbDevice_ClaimInterface_ResponseParamsDataView(
      internal::UsbDevice_ClaimInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ClaimInterface_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ReleaseInterface_ParamsDataView {
 public:
  UsbDevice_ReleaseInterface_ParamsDataView() {}

  UsbDevice_ReleaseInterface_ParamsDataView(
      internal::UsbDevice_ReleaseInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
 private:
  internal::UsbDevice_ReleaseInterface_Params_Data* data_ = nullptr;
};

class UsbDevice_ReleaseInterface_ResponseParamsDataView {
 public:
  UsbDevice_ReleaseInterface_ResponseParamsDataView() {}

  UsbDevice_ReleaseInterface_ResponseParamsDataView(
      internal::UsbDevice_ReleaseInterface_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ReleaseInterface_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_SetInterfaceAlternateSetting_ParamsDataView {
 public:
  UsbDevice_SetInterfaceAlternateSetting_ParamsDataView() {}

  UsbDevice_SetInterfaceAlternateSetting_ParamsDataView(
      internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
  uint8_t alternate_setting() const {
    return data_->alternate_setting;
  }
 private:
  internal::UsbDevice_SetInterfaceAlternateSetting_Params_Data* data_ = nullptr;
};

class UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView {
 public:
  UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView() {}

  UsbDevice_SetInterfaceAlternateSetting_ResponseParamsDataView(
      internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_SetInterfaceAlternateSetting_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_Reset_ParamsDataView {
 public:
  UsbDevice_Reset_ParamsDataView() {}

  UsbDevice_Reset_ParamsDataView(
      internal::UsbDevice_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDevice_Reset_Params_Data* data_ = nullptr;
};

class UsbDevice_Reset_ResponseParamsDataView {
 public:
  UsbDevice_Reset_ResponseParamsDataView() {}

  UsbDevice_Reset_ResponseParamsDataView(
      internal::UsbDevice_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_Reset_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ClearHalt_ParamsDataView {
 public:
  UsbDevice_ClearHalt_ParamsDataView() {}

  UsbDevice_ClearHalt_ParamsDataView(
      internal::UsbDevice_ClearHalt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint() const {
    return data_->endpoint;
  }
 private:
  internal::UsbDevice_ClearHalt_Params_Data* data_ = nullptr;
};

class UsbDevice_ClearHalt_ResponseParamsDataView {
 public:
  UsbDevice_ClearHalt_ResponseParamsDataView() {}

  UsbDevice_ClearHalt_ResponseParamsDataView(
      internal::UsbDevice_ClearHalt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::UsbDevice_ClearHalt_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_ControlTransferIn_ParamsDataView {
 public:
  UsbDevice_ControlTransferIn_ParamsDataView() {}

  UsbDevice_ControlTransferIn_ParamsDataView(
      internal::UsbDevice_ControlTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      UsbControlTransferParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferParamsDataView>(
        pointer, output, context_);
  }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_ControlTransferIn_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_ControlTransferIn_ResponseParamsDataView() {}

  UsbDevice_ControlTransferIn_ResponseParamsDataView(
      internal::UsbDevice_ControlTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_ControlTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferOut_ParamsDataView {
 public:
  UsbDevice_ControlTransferOut_ParamsDataView() {}

  UsbDevice_ControlTransferOut_ParamsDataView(
      internal::UsbDevice_ControlTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      UsbControlTransferParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbControlTransferParamsDataView>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_ControlTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_ControlTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_ControlTransferOut_ResponseParamsDataView() {}

  UsbDevice_ControlTransferOut_ResponseParamsDataView(
      internal::UsbDevice_ControlTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbDevice_ControlTransferOut_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_GenericTransferIn_ParamsDataView {
 public:
  UsbDevice_GenericTransferIn_ParamsDataView() {}

  UsbDevice_GenericTransferIn_ParamsDataView(
      internal::UsbDevice_GenericTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_GenericTransferIn_Params_Data* data_ = nullptr;
};

class UsbDevice_GenericTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_GenericTransferIn_ResponseParamsDataView() {}

  UsbDevice_GenericTransferIn_ResponseParamsDataView(
      internal::UsbDevice_GenericTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_GenericTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_GenericTransferOut_ParamsDataView {
 public:
  UsbDevice_GenericTransferOut_ParamsDataView() {}

  UsbDevice_GenericTransferOut_ParamsDataView(
      internal::UsbDevice_GenericTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_GenericTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_GenericTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_GenericTransferOut_ResponseParamsDataView() {}

  UsbDevice_GenericTransferOut_ResponseParamsDataView(
      internal::UsbDevice_GenericTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::mojom::UsbTransferStatus>(
        data_value, output);
  }

  UsbTransferStatus status() const {
    return static_cast<UsbTransferStatus>(data_->status);
  }
 private:
  internal::UsbDevice_GenericTransferOut_ResponseParams_Data* data_ = nullptr;
};

class UsbDevice_IsochronousTransferIn_ParamsDataView {
 public:
  UsbDevice_IsochronousTransferIn_ParamsDataView() {}

  UsbDevice_IsochronousTransferIn_ParamsDataView(
      internal::UsbDevice_IsochronousTransferIn_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetPacketLengthsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketLengths(UserType* output) {
    auto* pointer = data_->packet_lengths.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_IsochronousTransferIn_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferIn_ResponseParamsDataView {
 public:
  UsbDevice_IsochronousTransferIn_ResponseParamsDataView() {}

  UsbDevice_IsochronousTransferIn_ResponseParamsDataView(
      internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPacketsDataView(
      mojo::ArrayDataView<UsbIsochronousPacketDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPackets(UserType* output) {
    auto* pointer = data_->packets.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_IsochronousTransferIn_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferOut_ParamsDataView {
 public:
  UsbDevice_IsochronousTransferOut_ParamsDataView() {}

  UsbDevice_IsochronousTransferOut_ParamsDataView(
      internal::UsbDevice_IsochronousTransferOut_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetPacketLengthsDataView(
      mojo::ArrayDataView<uint32_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacketLengths(UserType* output) {
    auto* pointer = data_->packet_lengths.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint32_t>>(
        pointer, output, context_);
  }
  uint32_t timeout() const {
    return data_->timeout;
  }
 private:
  internal::UsbDevice_IsochronousTransferOut_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDevice_IsochronousTransferOut_ResponseParamsDataView {
 public:
  UsbDevice_IsochronousTransferOut_ResponseParamsDataView() {}

  UsbDevice_IsochronousTransferOut_ResponseParamsDataView(
      internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPacketsDataView(
      mojo::ArrayDataView<UsbIsochronousPacketDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPackets(UserType* output) {
    auto* pointer = data_->packets.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbIsochronousPacketDataView>>(
        pointer, output, context_);
  }
 private:
  internal::UsbDevice_IsochronousTransferOut_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class UsbDeviceClient_OnDeviceOpened_ParamsDataView {
 public:
  UsbDeviceClient_OnDeviceOpened_ParamsDataView() {}

  UsbDeviceClient_OnDeviceOpened_ParamsDataView(
      internal::UsbDeviceClient_OnDeviceOpened_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDeviceClient_OnDeviceOpened_Params_Data* data_ = nullptr;
};

class UsbDeviceClient_OnDeviceClosed_ParamsDataView {
 public:
  UsbDeviceClient_OnDeviceClosed_ParamsDataView() {}

  UsbDeviceClient_OnDeviceClosed_ParamsDataView(
      internal::UsbDeviceClient_OnDeviceClosed_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UsbDeviceClient_OnDeviceClosed_Params_Data* data_ = nullptr;
};


































inline void UsbDevice_ControlTransferIn_ParamsDataView::GetParamsDataView(
    UsbControlTransferParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = UsbControlTransferParamsDataView(pointer, context_);
}


inline void UsbDevice_ControlTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbDevice_ControlTransferOut_ParamsDataView::GetParamsDataView(
    UsbControlTransferParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = UsbControlTransferParamsDataView(pointer, context_);
}
inline void UsbDevice_ControlTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}






inline void UsbDevice_GenericTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void UsbDevice_GenericTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void UsbDevice_IsochronousTransferIn_ParamsDataView::GetPacketLengthsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->packet_lengths.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferIn_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void UsbDevice_IsochronousTransferIn_ResponseParamsDataView::GetPacketsDataView(
    mojo::ArrayDataView<UsbIsochronousPacketDataView>* output) {
  auto pointer = data_->packets.Get();
  *output = mojo::ArrayDataView<UsbIsochronousPacketDataView>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferOut_ParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void UsbDevice_IsochronousTransferOut_ParamsDataView::GetPacketLengthsDataView(
    mojo::ArrayDataView<uint32_t>* output) {
  auto pointer = data_->packet_lengths.Get();
  *output = mojo::ArrayDataView<uint32_t>(pointer, context_);
}


inline void UsbDevice_IsochronousTransferOut_ResponseParamsDataView::GetPacketsDataView(
    mojo::ArrayDataView<UsbIsochronousPacketDataView>* output) {
  auto pointer = data_->packets.Get();
  *output = mojo::ArrayDataView<UsbIsochronousPacketDataView>(pointer, context_);
}





}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_PARAMS_DATA_H_