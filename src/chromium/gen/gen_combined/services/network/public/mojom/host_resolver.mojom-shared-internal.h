// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/network/public/mojom/address_list.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_endpoint.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader.mojom-shared-internal.h"
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
class DnsHost_Data;
class DnsOverHttpsServer_Data;
class DnsConfigOverrides_Data;
class ResolveHostParameters_Data;

struct DnsQueryType_Data {
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

struct DnsConfigOverrides_Tristate_Data {
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

struct ResolveHostParameters_Source_Data {
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

struct MdnsListenClient_UpdateType_Data {
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
class  DnsHost_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DnsHost_Data));
      new (data()) DnsHost_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DnsHost_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DnsHost_Data>(index_);
    }
    DnsHost_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> hostname;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> address;

 private:
  DnsHost_Data();
  ~DnsHost_Data() = delete;
};
static_assert(sizeof(DnsHost_Data) == 24,
              "Bad sizeof(DnsHost_Data)");
// Used by DnsHost::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DnsHost_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DnsHost_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DnsHost_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DnsHost_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DnsHost_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DnsOverHttpsServer_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DnsOverHttpsServer_Data));
      new (data()) DnsOverHttpsServer_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DnsOverHttpsServer_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DnsOverHttpsServer_Data>(index_);
    }
    DnsOverHttpsServer_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> server_template;
  uint8_t use_post : 1;
  uint8_t padfinal_[7];

 private:
  DnsOverHttpsServer_Data();
  ~DnsOverHttpsServer_Data() = delete;
};
static_assert(sizeof(DnsOverHttpsServer_Data) == 24,
              "Bad sizeof(DnsOverHttpsServer_Data)");
// Used by DnsOverHttpsServer::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DnsOverHttpsServer_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DnsOverHttpsServer_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DnsOverHttpsServer_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DnsOverHttpsServer_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DnsOverHttpsServer_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DnsConfigOverrides_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DnsConfigOverrides_Data));
      new (data()) DnsConfigOverrides_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DnsConfigOverrides_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DnsConfigOverrides_Data>(index_);
    }
    DnsConfigOverrides_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data>>> nameservers;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> search;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DnsHost_Data>>> hosts;
  int32_t append_to_multi_label_name;
  int32_t randomize_ports;
  int8_t ndots;
  uint8_t pad5_[3];
  int32_t attempts;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> timeout;
  int32_t rotate;
  int32_t use_local_ipv6;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::DnsOverHttpsServer_Data>>> dns_over_https_servers;

 private:
  DnsConfigOverrides_Data();
  ~DnsConfigOverrides_Data() = delete;
};
static_assert(sizeof(DnsConfigOverrides_Data) == 72,
              "Bad sizeof(DnsConfigOverrides_Data)");
// Used by DnsConfigOverrides::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DnsConfigOverrides_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DnsConfigOverrides_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DnsConfigOverrides_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DnsConfigOverrides_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DnsConfigOverrides_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ResolveHostParameters_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResolveHostParameters_Data));
      new (data()) ResolveHostParameters_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResolveHostParameters_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResolveHostParameters_Data>(index_);
    }
    ResolveHostParameters_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t dns_query_type;
  int32_t initial_priority;
  int32_t source;
  uint8_t allow_cached_response : 1;
  uint8_t include_canonical_name : 1;
  uint8_t loopback_only : 1;
  uint8_t is_speculative : 1;
  uint8_t pad6_[3];
  mojo::internal::Handle_Data control_handle;
  uint8_t padfinal_[4];

 private:
  ResolveHostParameters_Data();
  ~ResolveHostParameters_Data() = delete;
};
static_assert(sizeof(ResolveHostParameters_Data) == 32,
              "Bad sizeof(ResolveHostParameters_Data)");
// Used by ResolveHostParameters::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ResolveHostParameters_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ResolveHostParameters_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ResolveHostParameters_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    ResolveHostParameters_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ResolveHostParameters_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_SHARED_INTERNAL_H_