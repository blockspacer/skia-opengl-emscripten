// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace device {
namespace mojom {
namespace internal {
class UsbEndpointInfo_Data;
class UsbAlternateInterfaceInfo_Data;
class UsbInterfaceInfo_Data;
class UsbConfigurationInfo_Data;
class UsbDeviceInfo_Data;
class UsbControlTransferParams_Data;
class UsbIsochronousPacket_Data;

struct UsbOpenDeviceError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbTransferDirection_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbControlTransferType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbControlTransferRecipient_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbTransferType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbSynchronizationType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbUsageType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct UsbTransferStatus_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  UsbEndpointInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbEndpointInfo_Data));
      new (data()) UsbEndpointInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbEndpointInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbEndpointInfo_Data>(index_);
    }
    UsbEndpointInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t polling_interval;
  uint8_t pad1_[2];
  int32_t direction;
  int32_t type;
  uint32_t packet_size;
  int32_t synchronization_type;
  int32_t usage_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> extra_data;

 private:
  UsbEndpointInfo_Data();
  ~UsbEndpointInfo_Data() = delete;
};
static_assert(sizeof(UsbEndpointInfo_Data) == 40,
              "Bad sizeof(UsbEndpointInfo_Data)");
// Used by UsbEndpointInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbEndpointInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbEndpointInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbEndpointInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbEndpointInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbEndpointInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbAlternateInterfaceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbAlternateInterfaceInfo_Data));
      new (data()) UsbAlternateInterfaceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbAlternateInterfaceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbAlternateInterfaceInfo_Data>(index_);
    }
    UsbAlternateInterfaceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t alternate_setting;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> interface_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbEndpointInfo_Data>>> endpoints;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> extra_data;

 private:
  UsbAlternateInterfaceInfo_Data();
  ~UsbAlternateInterfaceInfo_Data() = delete;
};
static_assert(sizeof(UsbAlternateInterfaceInfo_Data) == 40,
              "Bad sizeof(UsbAlternateInterfaceInfo_Data)");
// Used by UsbAlternateInterfaceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbAlternateInterfaceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbAlternateInterfaceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbAlternateInterfaceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbAlternateInterfaceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbAlternateInterfaceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbInterfaceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbInterfaceInfo_Data));
      new (data()) UsbInterfaceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbInterfaceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbInterfaceInfo_Data>(index_);
    }
    UsbInterfaceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t pad0_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbAlternateInterfaceInfo_Data>>> alternates;

 private:
  UsbInterfaceInfo_Data();
  ~UsbInterfaceInfo_Data() = delete;
};
static_assert(sizeof(UsbInterfaceInfo_Data) == 24,
              "Bad sizeof(UsbInterfaceInfo_Data)");
// Used by UsbInterfaceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbInterfaceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbInterfaceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbInterfaceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbInterfaceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbInterfaceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbConfigurationInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbConfigurationInfo_Data));
      new (data()) UsbConfigurationInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbConfigurationInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbConfigurationInfo_Data>(index_);
    }
    UsbConfigurationInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t configuration_value;
  uint8_t self_powered : 1;
  uint8_t remote_wakeup : 1;
  uint8_t maximum_power;
  uint8_t pad3_[5];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> configuration_name;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbInterfaceInfo_Data>>> interfaces;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> extra_data;

 private:
  UsbConfigurationInfo_Data();
  ~UsbConfigurationInfo_Data() = delete;
};
static_assert(sizeof(UsbConfigurationInfo_Data) == 40,
              "Bad sizeof(UsbConfigurationInfo_Data)");
// Used by UsbConfigurationInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbConfigurationInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbConfigurationInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbConfigurationInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbConfigurationInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbConfigurationInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceInfo_Data));
      new (data()) UsbDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceInfo_Data>(index_);
    }
    UsbDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  uint8_t usb_version_major;
  uint8_t usb_version_minor;
  uint8_t usb_version_subminor;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  uint16_t vendor_id;
  uint32_t bus_number;
  uint32_t port_number;
  uint16_t product_id;
  uint8_t device_version_major;
  uint8_t device_version_minor;
  uint8_t device_version_subminor;
  uint8_t active_configuration;
  uint8_t pad14_[2];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> manufacturer_name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> product_name;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> serial_number;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> webusb_landing_page;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbConfigurationInfo_Data>>> configurations;

 private:
  UsbDeviceInfo_Data();
  ~UsbDeviceInfo_Data() = delete;
};
static_assert(sizeof(UsbDeviceInfo_Data) == 80,
              "Bad sizeof(UsbDeviceInfo_Data)");
// Used by UsbDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbControlTransferParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbControlTransferParams_Data));
      new (data()) UsbControlTransferParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbControlTransferParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbControlTransferParams_Data>(index_);
    }
    UsbControlTransferParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t recipient;
  uint8_t request;
  uint8_t pad2_[1];
  uint16_t value;
  uint16_t index;
  uint8_t padfinal_[2];

 private:
  UsbControlTransferParams_Data();
  ~UsbControlTransferParams_Data() = delete;
};
static_assert(sizeof(UsbControlTransferParams_Data) == 24,
              "Bad sizeof(UsbControlTransferParams_Data)");
// Used by UsbControlTransferParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbControlTransferParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbControlTransferParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbControlTransferParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbControlTransferParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbControlTransferParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbIsochronousPacket_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbIsochronousPacket_Data));
      new (data()) UsbIsochronousPacket_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbIsochronousPacket_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbIsochronousPacket_Data>(index_);
    }
    UsbIsochronousPacket_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t length;
  uint32_t transferred_length;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  UsbIsochronousPacket_Data();
  ~UsbIsochronousPacket_Data() = delete;
};
static_assert(sizeof(UsbIsochronousPacket_Data) == 24,
              "Bad sizeof(UsbIsochronousPacket_Data)");
// Used by UsbIsochronousPacket::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbIsochronousPacket_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbIsochronousPacket_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbIsochronousPacket_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbIsochronousPacket_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbIsochronousPacket_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_MOJOM_SHARED_INTERNAL_H_