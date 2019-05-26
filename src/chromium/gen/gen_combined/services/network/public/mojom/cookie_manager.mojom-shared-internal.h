// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "components/content_settings/core/common/content_settings.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class CookieManagerParams_Data;
class CookieOptions_Data;
class CanonicalCookie_Data;
class CookieWithStatus_Data;
class CookieDeletionFilter_Data;

struct CookiePriority_Data {
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

struct CookieSameSite_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case -1:
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

struct CookieSameSiteContext_Data {
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

struct CookieInclusionStatus_Data {
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
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
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

struct CookieChangeCause_Data {
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

struct CookieDeletionSessionControl_Data {
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
class  CookieManagerParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieManagerParams_Data));
      new (data()) CookieManagerParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieManagerParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieManagerParams_Data>(index_);
    }
    CookieManagerParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t block_third_party_cookies : 1;
  uint8_t allow_file_scheme_cookies : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::content_settings::mojom::internal::ContentSettingPatternSource_Data>>> settings;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> secure_origin_cookies_allowed_schemes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> matching_scheme_cookies_allowed_schemes;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> third_party_cookies_allowed_schemes;

 private:
  CookieManagerParams_Data();
  ~CookieManagerParams_Data() = delete;
};
static_assert(sizeof(CookieManagerParams_Data) == 48,
              "Bad sizeof(CookieManagerParams_Data)");
// Used by CookieManagerParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieManagerParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieManagerParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieManagerParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieManagerParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieManagerParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CookieOptions_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieOptions_Data));
      new (data()) CookieOptions_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieOptions_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieOptions_Data>(index_);
    }
    CookieOptions_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t exclude_httponly : 1;
  uint8_t update_access_time : 1;
  uint8_t return_excluded_cookies : 1;
  uint8_t pad2_[3];
  int32_t same_site_cookie_context;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> server_time;

 private:
  CookieOptions_Data();
  ~CookieOptions_Data() = delete;
};
static_assert(sizeof(CookieOptions_Data) == 24,
              "Bad sizeof(CookieOptions_Data)");
// Used by CookieOptions::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieOptions_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieOptions_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieOptions_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieOptions_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieOptions_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CanonicalCookie_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CanonicalCookie_Data));
      new (data()) CanonicalCookie_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CanonicalCookie_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CanonicalCookie_Data>(index_);
    }
    CanonicalCookie_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  mojo::internal::Pointer<mojo::internal::String_Data> value;
  mojo::internal::Pointer<mojo::internal::String_Data> domain;
  mojo::internal::Pointer<mojo::internal::String_Data> path;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> creation;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expiry;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> last_access;
  uint8_t secure : 1;
  uint8_t httponly : 1;
  uint8_t pad8_[3];
  int32_t site_restrictions;
  int32_t priority;
  uint8_t padfinal_[4];

 private:
  CanonicalCookie_Data();
  ~CanonicalCookie_Data() = delete;
};
static_assert(sizeof(CanonicalCookie_Data) == 80,
              "Bad sizeof(CanonicalCookie_Data)");
// Used by CanonicalCookie::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CanonicalCookie_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CanonicalCookie_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CanonicalCookie_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CanonicalCookie_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CanonicalCookie_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CookieWithStatus_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieWithStatus_Data));
      new (data()) CookieWithStatus_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieWithStatus_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieWithStatus_Data>(index_);
    }
    CookieWithStatus_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::CanonicalCookie_Data> cookie;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  CookieWithStatus_Data();
  ~CookieWithStatus_Data() = delete;
};
static_assert(sizeof(CookieWithStatus_Data) == 24,
              "Bad sizeof(CookieWithStatus_Data)");
// Used by CookieWithStatus::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieWithStatus_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieWithStatus_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieWithStatus_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieWithStatus_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieWithStatus_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CookieDeletionFilter_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CookieDeletionFilter_Data));
      new (data()) CookieDeletionFilter_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CookieDeletionFilter_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CookieDeletionFilter_Data>(index_);
    }
    CookieDeletionFilter_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> created_after_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> created_before_time;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> excluding_domains;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> including_domains;
  mojo::internal::Pointer<mojo::internal::String_Data> cookie_name;
  mojo::internal::Pointer<mojo::internal::String_Data> host_name;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  int32_t session_control;
  uint8_t padfinal_[4];

 private:
  CookieDeletionFilter_Data();
  ~CookieDeletionFilter_Data() = delete;
};
static_assert(sizeof(CookieDeletionFilter_Data) == 72,
              "Bad sizeof(CookieDeletionFilter_Data)");
// Used by CookieDeletionFilter::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CookieDeletionFilter_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CookieDeletionFilter_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CookieDeletionFilter_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CookieDeletionFilter_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CookieDeletionFilter_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_MANAGER_MOJOM_SHARED_INTERNAL_H_