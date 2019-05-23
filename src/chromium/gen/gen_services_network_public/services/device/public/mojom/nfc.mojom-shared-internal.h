// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_

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
class NFCError_Data;
class NDEFRecord_Data;
class NDEFMessage_Data;
class NFCPushOptions_Data;
class NDEFRecordTypeFilter_Data;
class NFCWatchOptions_Data;

struct NFCErrorType_Data {
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

struct NDEFRecordType_Data {
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

struct NFCPushTarget_Data {
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

struct NFCWatchMode_Data {
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
class  NFCError_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCError_Data));
      new (data()) NFCError_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCError_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCError_Data>(index_);
    }
    NFCError_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error_type;
  uint8_t padfinal_[4];

 private:
  NFCError_Data();
  ~NFCError_Data() = delete;
};
static_assert(sizeof(NFCError_Data) == 16,
              "Bad sizeof(NFCError_Data)");
// Used by NFCError::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCError_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCError_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCError_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCError_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCError_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NDEFRecord_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NDEFRecord_Data));
      new (data()) NDEFRecord_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NDEFRecord_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NDEFRecord_Data>(index_);
    }
    NDEFRecord_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t record_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> media_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  NDEFRecord_Data();
  ~NDEFRecord_Data() = delete;
};
static_assert(sizeof(NDEFRecord_Data) == 32,
              "Bad sizeof(NDEFRecord_Data)");
// Used by NDEFRecord::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NDEFRecord_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NDEFRecord_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NDEFRecord_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NDEFRecord_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NDEFRecord_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NDEFMessage_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NDEFMessage_Data));
      new (data()) NDEFMessage_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NDEFMessage_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NDEFMessage_Data>(index_);
    }
    NDEFMessage_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::NDEFRecord_Data>>> data;
  mojo::internal::Pointer<mojo::internal::String_Data> url;

 private:
  NDEFMessage_Data();
  ~NDEFMessage_Data() = delete;
};
static_assert(sizeof(NDEFMessage_Data) == 24,
              "Bad sizeof(NDEFMessage_Data)");
// Used by NDEFMessage::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NDEFMessage_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NDEFMessage_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NDEFMessage_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NDEFMessage_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NDEFMessage_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCPushOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCPushOptions_Data));
      new (data()) NFCPushOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCPushOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCPushOptions_Data>(index_);
    }
    NFCPushOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t target;
  uint8_t ignore_read : 1;
  uint8_t pad1_[3];
  double timeout;

 private:
  NFCPushOptions_Data();
  ~NFCPushOptions_Data() = delete;
};
static_assert(sizeof(NFCPushOptions_Data) == 24,
              "Bad sizeof(NFCPushOptions_Data)");
// Used by NFCPushOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCPushOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCPushOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCPushOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCPushOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCPushOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NDEFRecordTypeFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NDEFRecordTypeFilter_Data));
      new (data()) NDEFRecordTypeFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NDEFRecordTypeFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NDEFRecordTypeFilter_Data>(index_);
    }
    NDEFRecordTypeFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t record_type;
  uint8_t padfinal_[4];

 private:
  NDEFRecordTypeFilter_Data();
  ~NDEFRecordTypeFilter_Data() = delete;
};
static_assert(sizeof(NDEFRecordTypeFilter_Data) == 16,
              "Bad sizeof(NDEFRecordTypeFilter_Data)");
// Used by NDEFRecordTypeFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NDEFRecordTypeFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NDEFRecordTypeFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NDEFRecordTypeFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NDEFRecordTypeFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NDEFRecordTypeFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NFCWatchOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NFCWatchOptions_Data));
      new (data()) NFCWatchOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NFCWatchOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NFCWatchOptions_Data>(index_);
    }
    NFCWatchOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> url;
  mojo::internal::Pointer<internal::NDEFRecordTypeFilter_Data> record_filter;
  mojo::internal::Pointer<mojo::internal::String_Data> media_type;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  NFCWatchOptions_Data();
  ~NFCWatchOptions_Data() = delete;
};
static_assert(sizeof(NFCWatchOptions_Data) == 40,
              "Bad sizeof(NFCWatchOptions_Data)");
// Used by NFCWatchOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NFCWatchOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NFCWatchOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NFCWatchOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NFCWatchOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NFCWatchOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_NFC_MOJOM_SHARED_INTERNAL_H_