// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_
#define DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
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
class UsbDeviceFilter_Data;
class UsbEnumerationOptions_Data;

#pragma pack(push, 1)
class  UsbDeviceFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbDeviceFilter_Data));
      new (data()) UsbDeviceFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbDeviceFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbDeviceFilter_Data>(index_);
    }
    UsbDeviceFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t has_class_code : 1;
  uint8_t has_subclass_code : 1;
  uint8_t has_protocol_code : 1;
  uint8_t class_code;
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t subclass_code;
  uint8_t protocol_code;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> serial_number;

 private:
  UsbDeviceFilter_Data();
  ~UsbDeviceFilter_Data() = delete;
};
static_assert(sizeof(UsbDeviceFilter_Data) == 24,
              "Bad sizeof(UsbDeviceFilter_Data)");
// Used by UsbDeviceFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbDeviceFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbDeviceFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbDeviceFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbDeviceFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbDeviceFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  UsbEnumerationOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(UsbEnumerationOptions_Data));
      new (data()) UsbEnumerationOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    UsbEnumerationOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<UsbEnumerationOptions_Data>(index_);
    }
    UsbEnumerationOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::UsbDeviceFilter_Data>>> filters;

 private:
  UsbEnumerationOptions_Data();
  ~UsbEnumerationOptions_Data() = delete;
};
static_assert(sizeof(UsbEnumerationOptions_Data) == 16,
              "Bad sizeof(UsbEnumerationOptions_Data)");
// Used by UsbEnumerationOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct UsbEnumerationOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  UsbEnumerationOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~UsbEnumerationOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    UsbEnumerationOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    UsbEnumerationOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // DEVICE_USB_PUBLIC_MOJOM_DEVICE_ENUMERATION_OPTIONS_MOJOM_SHARED_INTERNAL_H_