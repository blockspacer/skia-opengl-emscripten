// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_string.mojom-shared-internal.h"
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
class ProxyBypassRules_Data;
class ProxyList_Data;
class ProxyRules_Data;
class ProxyConfig_Data;

struct ProxyRulesType_Data {
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
class  ProxyBypassRules_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyBypassRules_Data));
      new (data()) ProxyBypassRules_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyBypassRules_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyBypassRules_Data>(index_);
    }
    ProxyBypassRules_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> rules;

 private:
  ProxyBypassRules_Data();
  ~ProxyBypassRules_Data() = delete;
};
static_assert(sizeof(ProxyBypassRules_Data) == 16,
              "Bad sizeof(ProxyBypassRules_Data)");
// Used by ProxyBypassRules::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyBypassRules_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyBypassRules_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyBypassRules_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyBypassRules_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyBypassRules_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProxyList_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyList_Data));
      new (data()) ProxyList_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyList_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyList_Data>(index_);
    }
    ProxyList_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> proxies;

 private:
  ProxyList_Data();
  ~ProxyList_Data() = delete;
};
static_assert(sizeof(ProxyList_Data) == 16,
              "Bad sizeof(ProxyList_Data)");
// Used by ProxyList::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyList_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyList_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyList_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyList_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyList_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProxyRules_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyRules_Data));
      new (data()) ProxyRules_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyRules_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyRules_Data>(index_);
    }
    ProxyRules_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ProxyBypassRules_Data> bypass_rules;
  uint8_t reverse_bypass : 1;
  uint8_t pad1_[3];
  int32_t type;
  mojo::internal::Pointer<internal::ProxyList_Data> single_proxies;
  mojo::internal::Pointer<internal::ProxyList_Data> proxies_for_http;
  mojo::internal::Pointer<internal::ProxyList_Data> proxies_for_https;
  mojo::internal::Pointer<internal::ProxyList_Data> proxies_for_ftp;
  mojo::internal::Pointer<internal::ProxyList_Data> fallback_proxies;

 private:
  ProxyRules_Data();
  ~ProxyRules_Data() = delete;
};
static_assert(sizeof(ProxyRules_Data) == 64,
              "Bad sizeof(ProxyRules_Data)");
// Used by ProxyRules::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyRules_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyRules_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyRules_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyRules_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyRules_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ProxyConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfig_Data));
      new (data()) ProxyConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfig_Data>(index_);
    }
    ProxyConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t auto_detect : 1;
  uint8_t pac_mandatory : 1;
  uint8_t pad1_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::BigString_Data> pac_url;
  mojo::internal::Pointer<internal::ProxyRules_Data> proxy_rules;

 private:
  ProxyConfig_Data();
  ~ProxyConfig_Data() = delete;
};
static_assert(sizeof(ProxyConfig_Data) == 32,
              "Bad sizeof(ProxyConfig_Data)");
// Used by ProxyConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ProxyConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ProxyConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ProxyConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ProxyConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ProxyConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_MOJOM_SHARED_INTERNAL_H_