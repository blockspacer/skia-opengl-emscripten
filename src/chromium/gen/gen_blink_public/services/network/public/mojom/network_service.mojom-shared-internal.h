// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/file.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/memory_pressure_level.mojom-shared-internal.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/host_resolver.mojom-shared-internal.h"
#include "services/network/public/mojom/net_log.mojom-shared-internal.h"
#include "services/network/public/mojom/network_change_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/network_context.mojom-shared-internal.h"
#include "services/network/public/mojom/network_interface.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/network_quality_estimator_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "services/network/public/mojom/signed_tree_head.mojom-shared-internal.h"
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
class LoadInfo_Data;
class HttpAuthStaticParams_Data;
class HttpAuthDynamicParams_Data;
class CryptConfig_Data;
class EnvironmentVariable_Data;
class NetworkServiceParams_Data;

#pragma pack(push, 1)
class  LoadInfo_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(LoadInfo_Data));
      new (data()) LoadInfo_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    LoadInfo_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<LoadInfo_Data>(index_);
    }
    LoadInfo_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t process_id;
  uint32_t routing_id;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  uint32_t load_state;
  uint8_t pad3_[4];
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> state_param;
  uint64_t upload_position;
  uint64_t upload_size;

 private:
  LoadInfo_Data();
  ~LoadInfo_Data() = delete;
};
static_assert(sizeof(LoadInfo_Data) == 56,
              "Bad sizeof(LoadInfo_Data)");
// Used by LoadInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct LoadInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  LoadInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~LoadInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    LoadInfo_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    LoadInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HttpAuthStaticParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HttpAuthStaticParams_Data));
      new (data()) HttpAuthStaticParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HttpAuthStaticParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HttpAuthStaticParams_Data>(index_);
    }
    HttpAuthStaticParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> supported_schemes;
  mojo::internal::Pointer<mojo::internal::String_Data> gssapi_library_name;
  uint8_t allow_gssapi_library_load : 1;
  uint8_t padfinal_[7];

 private:
  HttpAuthStaticParams_Data();
  ~HttpAuthStaticParams_Data() = delete;
};
static_assert(sizeof(HttpAuthStaticParams_Data) == 32,
              "Bad sizeof(HttpAuthStaticParams_Data)");
// Used by HttpAuthStaticParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HttpAuthStaticParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HttpAuthStaticParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HttpAuthStaticParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HttpAuthStaticParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HttpAuthStaticParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  HttpAuthDynamicParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HttpAuthDynamicParams_Data));
      new (data()) HttpAuthDynamicParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HttpAuthDynamicParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HttpAuthDynamicParams_Data>(index_);
    }
    HttpAuthDynamicParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> server_whitelist;
  mojo::internal::Pointer<mojo::internal::String_Data> delegate_whitelist;
  uint8_t delegate_by_kdc_policy : 1;
  uint8_t negotiate_disable_cname_lookup : 1;
  uint8_t enable_negotiate_port : 1;
  uint8_t ntlm_v2_enabled : 1;
  uint8_t pad5_[7];
  mojo::internal::Pointer<mojo::internal::String_Data> android_negotiate_account_type;

 private:
  HttpAuthDynamicParams_Data();
  ~HttpAuthDynamicParams_Data() = delete;
};
static_assert(sizeof(HttpAuthDynamicParams_Data) == 40,
              "Bad sizeof(HttpAuthDynamicParams_Data)");
// Used by HttpAuthDynamicParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct HttpAuthDynamicParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  HttpAuthDynamicParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~HttpAuthDynamicParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    HttpAuthDynamicParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    HttpAuthDynamicParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CryptConfig_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CryptConfig_Data));
      new (data()) CryptConfig_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CryptConfig_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CryptConfig_Data>(index_);
    }
    CryptConfig_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> store;
  mojo::internal::Pointer<mojo::internal::String_Data> product_name;
  uint8_t should_use_preference : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> user_data_path;

 private:
  CryptConfig_Data();
  ~CryptConfig_Data() = delete;
};
static_assert(sizeof(CryptConfig_Data) == 40,
              "Bad sizeof(CryptConfig_Data)");
// Used by CryptConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CryptConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CryptConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CryptConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    CryptConfig_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CryptConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  EnvironmentVariable_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EnvironmentVariable_Data));
      new (data()) EnvironmentVariable_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EnvironmentVariable_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EnvironmentVariable_Data>(index_);
    }
    EnvironmentVariable_Data* operator->() { return data(); }

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

 private:
  EnvironmentVariable_Data();
  ~EnvironmentVariable_Data() = delete;
};
static_assert(sizeof(EnvironmentVariable_Data) == 24,
              "Bad sizeof(EnvironmentVariable_Data)");
// Used by EnvironmentVariable::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EnvironmentVariable_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EnvironmentVariable_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EnvironmentVariable_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    EnvironmentVariable_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EnvironmentVariable_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetworkServiceParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NetworkServiceParams_Data));
      new (data()) NetworkServiceParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NetworkServiceParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NetworkServiceParams_Data>(index_);
    }
    NetworkServiceParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t initial_connection_type;
  int32_t initial_connection_subtype;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::EnvironmentVariable_Data>>> environment;

 private:
  NetworkServiceParams_Data();
  ~NetworkServiceParams_Data() = delete;
};
static_assert(sizeof(NetworkServiceParams_Data) == 24,
              "Bad sizeof(NetworkServiceParams_Data)");
// Used by NetworkServiceParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetworkServiceParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetworkServiceParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetworkServiceParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    NetworkServiceParams_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetworkServiceParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_SERVICE_MOJOM_SHARED_INTERNAL_H_