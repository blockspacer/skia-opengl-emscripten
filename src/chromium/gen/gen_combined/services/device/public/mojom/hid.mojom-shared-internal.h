// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
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
class HidUsageAndPage_Data;
class HidReportItem_Data;
class HidReportDescription_Data;
class HidCollectionInfo_Data;
class HidDeviceInfo_Data;

struct HidBusType_Data {
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

#pragma pack(push, 1)
class  HidUsageAndPage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidUsageAndPage_Data));
      new (data()) HidUsageAndPage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidUsageAndPage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidUsageAndPage_Data>(index_);
    }
    HidUsageAndPage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint16_t usage;
  uint16_t usage_page;
  uint8_t padfinal_[4];

 private:
  HidUsageAndPage_Data();
  ~HidUsageAndPage_Data() = delete;
};
static_assert(sizeof(HidUsageAndPage_Data) == 16,
              "Bad sizeof(HidUsageAndPage_Data)");
// Used by HidUsageAndPage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidUsageAndPage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidUsageAndPage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidUsageAndPage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidUsageAndPage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidUsageAndPage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidReportItem_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidReportItem_Data));
      new (data()) HidReportItem_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidReportItem_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidReportItem_Data>(index_);
    }
    HidReportItem_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_range : 1;
  uint8_t is_constant : 1;
  uint8_t is_variable : 1;
  uint8_t is_relative : 1;
  uint8_t wrap : 1;
  uint8_t is_non_linear : 1;
  uint8_t no_preferred_state : 1;
  uint8_t has_null_position : 1;
  uint8_t is_volatile : 1;
  uint8_t is_buffered_bytes : 1;
  uint8_t pad9_[2];
  uint32_t designator_minimum;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidUsageAndPage_Data>>> usages;
  mojo::internal::Pointer<internal::HidUsageAndPage_Data> usage_minimum;
  mojo::internal::Pointer<internal::HidUsageAndPage_Data> usage_maximum;
  uint32_t designator_maximum;
  uint32_t string_minimum;
  uint32_t string_maximum;
  int32_t logical_minimum;
  int32_t logical_maximum;
  int32_t physical_minimum;
  int32_t physical_maximum;
  uint32_t unit_exponent;
  uint32_t unit;
  uint32_t report_size;
  uint32_t report_count;
  uint8_t padfinal_[4];

 private:
  HidReportItem_Data();
  ~HidReportItem_Data() = delete;
};
static_assert(sizeof(HidReportItem_Data) == 88,
              "Bad sizeof(HidReportItem_Data)");
// Used by HidReportItem::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidReportItem_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidReportItem_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidReportItem_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidReportItem_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidReportItem_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidReportDescription_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidReportDescription_Data));
      new (data()) HidReportDescription_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidReportDescription_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidReportDescription_Data>(index_);
    }
    HidReportDescription_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidReportItem_Data>>> items;

 private:
  HidReportDescription_Data();
  ~HidReportDescription_Data() = delete;
};
static_assert(sizeof(HidReportDescription_Data) == 24,
              "Bad sizeof(HidReportDescription_Data)");
// Used by HidReportDescription::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidReportDescription_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidReportDescription_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidReportDescription_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidReportDescription_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidReportDescription_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidCollectionInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidCollectionInfo_Data));
      new (data()) HidCollectionInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidCollectionInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidCollectionInfo_Data>(index_);
    }
    HidCollectionInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::HidUsageAndPage_Data> usage;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> report_ids;
  uint32_t collection_type;
  uint8_t pad2_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidReportDescription_Data>>> input_reports;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidReportDescription_Data>>> output_reports;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidReportDescription_Data>>> feature_reports;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidCollectionInfo_Data>>> children;

 private:
  HidCollectionInfo_Data();
  ~HidCollectionInfo_Data() = delete;
};
static_assert(sizeof(HidCollectionInfo_Data) == 64,
              "Bad sizeof(HidCollectionInfo_Data)");
// Used by HidCollectionInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidCollectionInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidCollectionInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidCollectionInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidCollectionInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidCollectionInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HidDeviceInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HidDeviceInfo_Data));
      new (data()) HidDeviceInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HidDeviceInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HidDeviceInfo_Data>(index_);
    }
    HidDeviceInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  uint16_t vendor_id;
  uint16_t product_id;
  int32_t bus_type;
  mojo::internal::Pointer<mojo::internal::String_Data> product_name;
  mojo::internal::Pointer<mojo::internal::String_Data> serial_number;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> report_descriptor;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::HidCollectionInfo_Data>>> collections;
  uint8_t has_report_id : 1;
  uint8_t pad8_[7];
  uint64_t max_input_report_size;
  uint64_t max_output_report_size;
  uint64_t max_feature_report_size;
  mojo::internal::Pointer<mojo::internal::String_Data> device_node;

 private:
  HidDeviceInfo_Data();
  ~HidDeviceInfo_Data() = delete;
};
static_assert(sizeof(HidDeviceInfo_Data) == 96,
              "Bad sizeof(HidDeviceInfo_Data)");
// Used by HidDeviceInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HidDeviceInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HidDeviceInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HidDeviceInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HidDeviceInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HidDeviceInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_HID_MOJOM_SHARED_INTERNAL_H_