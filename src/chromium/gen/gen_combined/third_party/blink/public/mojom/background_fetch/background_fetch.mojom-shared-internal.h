// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "skia/public/interfaces/bitmap.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace blink {
namespace mojom {
namespace internal {
class BackgroundFetchSettledFetch_Data;
class BackgroundFetchOptions_Data;
class BackgroundFetchRegistrationData_Data;
class BackgroundFetchRegistration_Data;
class BackgroundFetchUkmData_Data;

struct BackgroundFetchError_Data {
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

struct BackgroundFetchResult_Data {
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

struct BackgroundFetchFailureReason_Data {
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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchSettledFetch_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchSettledFetch_Data));
      new (data()) BackgroundFetchSettledFetch_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchSettledFetch_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchSettledFetch_Data>(index_);
    }
    BackgroundFetchSettledFetch_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIRequest_Data> request;
  mojo::internal::Pointer<::blink::mojom::internal::FetchAPIResponse_Data> response;

 private:
  BackgroundFetchSettledFetch_Data();
  ~BackgroundFetchSettledFetch_Data() = delete;
};
static_assert(sizeof(BackgroundFetchSettledFetch_Data) == 24,
              "Bad sizeof(BackgroundFetchSettledFetch_Data)");
// Used by BackgroundFetchSettledFetch::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchSettledFetch_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchSettledFetch_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchSettledFetch_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchSettledFetch_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchSettledFetch_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchOptions_Data));
      new (data()) BackgroundFetchOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchOptions_Data>(index_);
    }
    BackgroundFetchOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::blink::mojom::internal::ManifestImageResource_Data>>> icons;
  uint64_t download_total;
  mojo::internal::Pointer<mojo::internal::String_Data> title;

 private:
  BackgroundFetchOptions_Data();
  ~BackgroundFetchOptions_Data() = delete;
};
static_assert(sizeof(BackgroundFetchOptions_Data) == 32,
              "Bad sizeof(BackgroundFetchOptions_Data)");
// Used by BackgroundFetchOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistrationData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistrationData_Data));
      new (data()) BackgroundFetchRegistrationData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistrationData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistrationData_Data>(index_);
    }
    BackgroundFetchRegistrationData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> developer_id;
  uint64_t upload_total;
  uint64_t uploaded;
  uint64_t download_total;
  uint64_t downloaded;
  int32_t result;
  int32_t failure_reason;

 private:
  BackgroundFetchRegistrationData_Data();
  ~BackgroundFetchRegistrationData_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistrationData_Data) == 56,
              "Bad sizeof(BackgroundFetchRegistrationData_Data)");
// Used by BackgroundFetchRegistrationData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchRegistrationData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchRegistrationData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchRegistrationData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchRegistrationData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchRegistrationData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchRegistration_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchRegistration_Data));
      new (data()) BackgroundFetchRegistration_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchRegistration_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchRegistration_Data>(index_);
    }
    BackgroundFetchRegistration_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::BackgroundFetchRegistrationData_Data> registration_data;
  mojo::internal::Interface_Data registration_interface;

 private:
  BackgroundFetchRegistration_Data();
  ~BackgroundFetchRegistration_Data() = delete;
};
static_assert(sizeof(BackgroundFetchRegistration_Data) == 24,
              "Bad sizeof(BackgroundFetchRegistration_Data)");
// Used by BackgroundFetchRegistration::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchRegistration_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchRegistration_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchRegistration_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchRegistration_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchRegistration_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BackgroundFetchUkmData_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BackgroundFetchUkmData_Data));
      new (data()) BackgroundFetchUkmData_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BackgroundFetchUkmData_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BackgroundFetchUkmData_Data>(index_);
    }
    BackgroundFetchUkmData_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t ideal_to_chosen_icon_size;

 private:
  BackgroundFetchUkmData_Data();
  ~BackgroundFetchUkmData_Data() = delete;
};
static_assert(sizeof(BackgroundFetchUkmData_Data) == 16,
              "Bad sizeof(BackgroundFetchUkmData_Data)");
// Used by BackgroundFetchUkmData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct BackgroundFetchUkmData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  BackgroundFetchUkmData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~BackgroundFetchUkmData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    BackgroundFetchUkmData_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    BackgroundFetchUkmData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BACKGROUND_FETCH_BACKGROUND_FETCH_MOJOM_SHARED_INTERNAL_H_