// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
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
class SerialPortInfo_Data;
class SerialConnectionOptions_Data;
class SerialConnectionInfo_Data;
class SerialHostControlSignals_Data;
class SerialPortControlSignals_Data;

struct SerialSendError_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
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

struct SerialReceiveError_Data {
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
      case 9:
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

struct SerialDataBits_Data {
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

struct SerialParityBit_Data {
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

struct SerialStopBits_Data {
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

#pragma pack(push, 1)
class  SerialPortInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortInfo_Data));
      new (data()) SerialPortInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortInfo_Data>(index_);
    }
    SerialPortInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  uint16_t vendor_id;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t pad4_[1];
  uint16_t product_id;
  uint8_t pad5_[2];
  mojo::internal::Pointer<mojo::internal::String_Data> display_name;

 private:
  SerialPortInfo_Data();
  ~SerialPortInfo_Data() = delete;
};
static_assert(sizeof(SerialPortInfo_Data) == 40,
              "Bad sizeof(SerialPortInfo_Data)");
// Used by SerialPortInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialPortInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialPortInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialPortInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialPortInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialPortInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialConnectionOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialConnectionOptions_Data));
      new (data()) SerialConnectionOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialConnectionOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialConnectionOptions_Data>(index_);
    }
    SerialConnectionOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  int32_t data_bits;
  int32_t parity_bit;
  int32_t stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t has_cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  SerialConnectionOptions_Data();
  ~SerialConnectionOptions_Data() = delete;
};
static_assert(sizeof(SerialConnectionOptions_Data) == 32,
              "Bad sizeof(SerialConnectionOptions_Data)");
// Used by SerialConnectionOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialConnectionOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialConnectionOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialConnectionOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialConnectionOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialConnectionOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialConnectionInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialConnectionInfo_Data));
      new (data()) SerialConnectionInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialConnectionInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialConnectionInfo_Data>(index_);
    }
    SerialConnectionInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  int32_t data_bits;
  int32_t parity_bit;
  int32_t stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  SerialConnectionInfo_Data();
  ~SerialConnectionInfo_Data() = delete;
};
static_assert(sizeof(SerialConnectionInfo_Data) == 32,
              "Bad sizeof(SerialConnectionInfo_Data)");
// Used by SerialConnectionInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialConnectionInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialConnectionInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialConnectionInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialConnectionInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialConnectionInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialHostControlSignals_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialHostControlSignals_Data));
      new (data()) SerialHostControlSignals_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialHostControlSignals_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialHostControlSignals_Data>(index_);
    }
    SerialHostControlSignals_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t dtr : 1;
  uint8_t has_dtr : 1;
  uint8_t rts : 1;
  uint8_t has_rts : 1;
  uint8_t padfinal_[7];

 private:
  SerialHostControlSignals_Data();
  ~SerialHostControlSignals_Data() = delete;
};
static_assert(sizeof(SerialHostControlSignals_Data) == 16,
              "Bad sizeof(SerialHostControlSignals_Data)");
// Used by SerialHostControlSignals::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialHostControlSignals_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialHostControlSignals_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialHostControlSignals_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialHostControlSignals_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialHostControlSignals_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SerialPortControlSignals_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SerialPortControlSignals_Data));
      new (data()) SerialPortControlSignals_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SerialPortControlSignals_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SerialPortControlSignals_Data>(index_);
    }
    SerialPortControlSignals_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t dcd : 1;
  uint8_t cts : 1;
  uint8_t ri : 1;
  uint8_t dsr : 1;
  uint8_t padfinal_[7];

 private:
  SerialPortControlSignals_Data();
  ~SerialPortControlSignals_Data() = delete;
};
static_assert(sizeof(SerialPortControlSignals_Data) == 16,
              "Bad sizeof(SerialPortControlSignals_Data)");
// Used by SerialPortControlSignals::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SerialPortControlSignals_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SerialPortControlSignals_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SerialPortControlSignals_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SerialPortControlSignals_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SerialPortControlSignals_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_SERIAL_MOJOM_SHARED_INTERNAL_H_