// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_PARAMS_DATA_H_
#define SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_PARAMS_DATA_H_

#include "base/logging.h"
#include "base/macros.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif
namespace proxy_resolver {
namespace mojom {
namespace internal {
class  HostResolverRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolverRequestClient_ReportResult_Params_Data));
      new (data()) HostResolverRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolverRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolverRequestClient_ReportResult_Params_Data>(index_);
    }
    HostResolverRequestClient_ReportResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data>>> result;

 private:
  HostResolverRequestClient_ReportResult_Params_Data();
  ~HostResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(HostResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(HostResolverRequestClient_ReportResult_Params_Data)");
class  ProxyResolver_GetProxyForUrl_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolver_GetProxyForUrl_Params_Data));
      new (data()) ProxyResolver_GetProxyForUrl_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolver_GetProxyForUrl_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolver_GetProxyForUrl_Params_Data>(index_);
    }
    ProxyResolver_GetProxyForUrl_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolver_GetProxyForUrl_Params_Data();
  ~ProxyResolver_GetProxyForUrl_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolver_GetProxyForUrl_Params_Data) == 24,
              "Bad sizeof(ProxyResolver_GetProxyForUrl_Params_Data)");
class  ProxyResolverRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data));
      new (data()) ProxyResolverRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_ReportResult_Params_Data>(index_);
    }
    ProxyResolverRequestClient_ReportResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<internal::ProxyInfo_Data> proxy_info;

 private:
  ProxyResolverRequestClient_ReportResult_Params_Data();
  ~ProxyResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_ReportResult_Params_Data)");
class  ProxyResolverRequestClient_Alert_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_Alert_Params_Data));
      new (data()) ProxyResolverRequestClient_Alert_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_Alert_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_Alert_Params_Data>(index_);
    }
    ProxyResolverRequestClient_Alert_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverRequestClient_Alert_Params_Data();
  ~ProxyResolverRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverRequestClient_Alert_Params_Data)");
class  ProxyResolverRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_OnError_Params_Data));
      new (data()) ProxyResolverRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_OnError_Params_Data>(index_);
    }
    ProxyResolverRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverRequestClient_OnError_Params_Data();
  ~ProxyResolverRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_OnError_Params_Data)");
class  ProxyResolverRequestClient_ResolveDns_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data));
      new (data()) ProxyResolverRequestClient_ResolveDns_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverRequestClient_ResolveDns_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverRequestClient_ResolveDns_Params_Data>(index_);
    }
    ProxyResolverRequestClient_ResolveDns_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  int32_t operation;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ProxyResolverRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data) == 32,
              "Bad sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data)");
class  ProxyResolverFactory_CreateResolver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactory_CreateResolver_Params_Data));
      new (data()) ProxyResolverFactory_CreateResolver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactory_CreateResolver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactory_CreateResolver_Params_Data>(index_);
    }
    ProxyResolverFactory_CreateResolver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> pac_script;
  mojo::internal::Handle_Data resolver;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactory_CreateResolver_Params_Data();
  ~ProxyResolverFactory_CreateResolver_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactory_CreateResolver_Params_Data) == 32,
              "Bad sizeof(ProxyResolverFactory_CreateResolver_Params_Data)");
class  ProxyResolverFactoryRequestClient_ReportResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_ReportResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_ReportResult_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_ReportResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
  ~ProxyResolverFactoryRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data)");
class  ProxyResolverFactoryRequestClient_Alert_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_Alert_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_Alert_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_Alert_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_Alert_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverFactoryRequestClient_Alert_Params_Data();
  ~ProxyResolverFactoryRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data)");
class  ProxyResolverFactoryRequestClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_OnError_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error;

 private:
  ProxyResolverFactoryRequestClient_OnError_Params_Data();
  ~ProxyResolverFactoryRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data)");
class  ProxyResolverFactoryRequestClient_ResolveDns_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data));
      new (data()) ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyResolverFactoryRequestClient_ResolveDns_Params_Data>(index_);
    }
    ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> host;
  int32_t operation;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverFactoryRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data) == 32,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data)");

}  // namespace internal
class HostResolverRequestClient_ReportResult_ParamsDataView {
 public:
  HostResolverRequestClient_ReportResult_ParamsDataView() {}

  HostResolverRequestClient_ReportResult_ParamsDataView(
      internal::HostResolverRequestClient_ReportResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t error() const {
    return data_->error;
  }
  inline void GetResultDataView(
      mojo::ArrayDataView<::network::mojom::IPAddressDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::IPAddressDataView>>(
        pointer, output, context_);
  }
 private:
  internal::HostResolverRequestClient_ReportResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolver_GetProxyForUrl_ParamsDataView {
 public:
  ProxyResolver_GetProxyForUrl_ParamsDataView() {}

  ProxyResolver_GetProxyForUrl_ParamsDataView(
      internal::ProxyResolver_GetProxyForUrl_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyResolverRequestClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolver_GetProxyForUrl_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverRequestClient_ReportResult_ParamsDataView {
 public:
  ProxyResolverRequestClient_ReportResult_ParamsDataView() {}

  ProxyResolverRequestClient_ReportResult_ParamsDataView(
      internal::ProxyResolverRequestClient_ReportResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t error() const {
    return data_->error;
  }
  inline void GetProxyInfoDataView(
      ProxyInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyInfo(UserType* output) {
    auto* pointer = data_->proxy_info.Get();
    return mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyResolverRequestClient_ReportResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverRequestClient_Alert_ParamsDataView {
 public:
  ProxyResolverRequestClient_Alert_ParamsDataView() {}

  ProxyResolverRequestClient_Alert_ParamsDataView(
      internal::ProxyResolverRequestClient_Alert_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyResolverRequestClient_Alert_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverRequestClient_OnError_ParamsDataView {
 public:
  ProxyResolverRequestClient_OnError_ParamsDataView() {}

  ProxyResolverRequestClient_OnError_ParamsDataView(
      internal::ProxyResolverRequestClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t line_number() const {
    return data_->line_number;
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyResolverRequestClient_OnError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverRequestClient_ResolveDns_ParamsDataView {
 public:
  ProxyResolverRequestClient_ResolveDns_ParamsDataView() {}

  ProxyResolverRequestClient_ResolveDns_ParamsDataView(
      internal::ProxyResolverRequestClient_ResolveDns_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperation(UserType* output) const {
    auto data_value = data_->operation;
    return mojo::internal::Deserialize<::proxy_resolver::mojom::HostResolveOperation>(
        data_value, output);
  }

  HostResolveOperation operation() const {
    return static_cast<HostResolveOperation>(data_->operation);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::HostResolverRequestClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolverRequestClient_ResolveDns_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverFactory_CreateResolver_ParamsDataView {
 public:
  ProxyResolverFactory_CreateResolver_ParamsDataView() {}

  ProxyResolverFactory_CreateResolver_ParamsDataView(
      internal::ProxyResolverFactory_CreateResolver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPacScriptDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPacScript(UserType* output) {
    auto* pointer = data_->pac_script.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResolver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyResolverRequestDataView>(
            &data_->resolver, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyResolverFactoryRequestClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolverFactory_CreateResolver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverFactoryRequestClient_ReportResult_ParamsDataView {
 public:
  ProxyResolverFactoryRequestClient_ReportResult_ParamsDataView() {}

  ProxyResolverFactoryRequestClient_ReportResult_ParamsDataView(
      internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t error() const {
    return data_->error;
  }
 private:
  internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* data_ = nullptr;
};

class ProxyResolverFactoryRequestClient_Alert_ParamsDataView {
 public:
  ProxyResolverFactoryRequestClient_Alert_ParamsDataView() {}

  ProxyResolverFactoryRequestClient_Alert_ParamsDataView(
      internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverFactoryRequestClient_OnError_ParamsDataView {
 public:
  ProxyResolverFactoryRequestClient_OnError_ParamsDataView() {}

  ProxyResolverFactoryRequestClient_OnError_ParamsDataView(
      internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t line_number() const {
    return data_->line_number;
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) {
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView {
 public:
  ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView() {}

  ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView(
      internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOperation(UserType* output) const {
    auto data_value = data_->operation;
    return mojo::internal::Deserialize<::proxy_resolver::mojom::HostResolveOperation>(
        data_value, output);
  }

  HostResolveOperation operation() const {
    return static_cast<HostResolveOperation>(data_->operation);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::proxy_resolver::mojom::HostResolverRequestClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void HostResolverRequestClient_ReportResult_ParamsDataView::GetResultDataView(
    mojo::ArrayDataView<::network::mojom::IPAddressDataView>* output) {
  auto pointer = data_->result.Get();
  *output = mojo::ArrayDataView<::network::mojom::IPAddressDataView>(pointer, context_);
}


inline void ProxyResolver_GetProxyForUrl_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ProxyResolverRequestClient_ReportResult_ParamsDataView::GetProxyInfoDataView(
    ProxyInfoDataView* output) {
  auto pointer = data_->proxy_info.Get();
  *output = ProxyInfoDataView(pointer, context_);
}


inline void ProxyResolverRequestClient_Alert_ParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyResolverRequestClient_OnError_ParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyResolverRequestClient_ResolveDns_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyResolverFactory_CreateResolver_ParamsDataView::GetPacScriptDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->pac_script.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void ProxyResolverFactoryRequestClient_Alert_ParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyResolverFactoryRequestClient_OnError_ParamsDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ProxyResolverFactoryRequestClient_ResolveDns_ParamsDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace proxy_resolver

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_PROXY_RESOLVER_PUBLIC_MOJOM_PROXY_RESOLVER_MOJOM_PARAMS_DATA_H_