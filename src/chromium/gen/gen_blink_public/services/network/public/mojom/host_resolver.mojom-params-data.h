// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_PARAMS_DATA_H_

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
namespace network {
namespace mojom {
namespace internal {
class  ResolveHostHandle_Cancel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResolveHostHandle_Cancel_Params_Data));
      new (data()) ResolveHostHandle_Cancel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResolveHostHandle_Cancel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResolveHostHandle_Cancel_Params_Data>(index_);
    }
    ResolveHostHandle_Cancel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  ResolveHostHandle_Cancel_Params_Data();
  ~ResolveHostHandle_Cancel_Params_Data() = delete;
};
static_assert(sizeof(ResolveHostHandle_Cancel_Params_Data) == 16,
              "Bad sizeof(ResolveHostHandle_Cancel_Params_Data)");
class  ResolveHostClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResolveHostClient_OnComplete_Params_Data));
      new (data()) ResolveHostClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResolveHostClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResolveHostClient_OnComplete_Params_Data>(index_);
    }
    ResolveHostClient_OnComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::network::mojom::internal::AddressList_Data> resolved_addresses;

 private:
  ResolveHostClient_OnComplete_Params_Data();
  ~ResolveHostClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(ResolveHostClient_OnComplete_Params_Data) == 24,
              "Bad sizeof(ResolveHostClient_OnComplete_Params_Data)");
class  ResolveHostClient_OnTextResults_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResolveHostClient_OnTextResults_Params_Data));
      new (data()) ResolveHostClient_OnTextResults_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResolveHostClient_OnTextResults_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResolveHostClient_OnTextResults_Params_Data>(index_);
    }
    ResolveHostClient_OnTextResults_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> text_results;

 private:
  ResolveHostClient_OnTextResults_Params_Data();
  ~ResolveHostClient_OnTextResults_Params_Data() = delete;
};
static_assert(sizeof(ResolveHostClient_OnTextResults_Params_Data) == 16,
              "Bad sizeof(ResolveHostClient_OnTextResults_Params_Data)");
class  ResolveHostClient_OnHostnameResults_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ResolveHostClient_OnHostnameResults_Params_Data));
      new (data()) ResolveHostClient_OnHostnameResults_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ResolveHostClient_OnHostnameResults_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ResolveHostClient_OnHostnameResults_Params_Data>(index_);
    }
    ResolveHostClient_OnHostnameResults_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data>>> hosts;

 private:
  ResolveHostClient_OnHostnameResults_Params_Data();
  ~ResolveHostClient_OnHostnameResults_Params_Data() = delete;
};
static_assert(sizeof(ResolveHostClient_OnHostnameResults_Params_Data) == 16,
              "Bad sizeof(ResolveHostClient_OnHostnameResults_Params_Data)");
class  MdnsListenClient_OnAddressResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsListenClient_OnAddressResult_Params_Data));
      new (data()) MdnsListenClient_OnAddressResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsListenClient_OnAddressResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsListenClient_OnAddressResult_Params_Data>(index_);
    }
    MdnsListenClient_OnAddressResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_type;
  int32_t query_type;
  mojo::internal::Pointer<::network::mojom::internal::IPEndPoint_Data> endpoint;

 private:
  MdnsListenClient_OnAddressResult_Params_Data();
  ~MdnsListenClient_OnAddressResult_Params_Data() = delete;
};
static_assert(sizeof(MdnsListenClient_OnAddressResult_Params_Data) == 24,
              "Bad sizeof(MdnsListenClient_OnAddressResult_Params_Data)");
class  MdnsListenClient_OnTextResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsListenClient_OnTextResult_Params_Data));
      new (data()) MdnsListenClient_OnTextResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsListenClient_OnTextResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsListenClient_OnTextResult_Params_Data>(index_);
    }
    MdnsListenClient_OnTextResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_type;
  int32_t query_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> text_records;

 private:
  MdnsListenClient_OnTextResult_Params_Data();
  ~MdnsListenClient_OnTextResult_Params_Data() = delete;
};
static_assert(sizeof(MdnsListenClient_OnTextResult_Params_Data) == 24,
              "Bad sizeof(MdnsListenClient_OnTextResult_Params_Data)");
class  MdnsListenClient_OnHostnameResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsListenClient_OnHostnameResult_Params_Data));
      new (data()) MdnsListenClient_OnHostnameResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsListenClient_OnHostnameResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsListenClient_OnHostnameResult_Params_Data>(index_);
    }
    MdnsListenClient_OnHostnameResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_type;
  int32_t query_type;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host;

 private:
  MdnsListenClient_OnHostnameResult_Params_Data();
  ~MdnsListenClient_OnHostnameResult_Params_Data() = delete;
};
static_assert(sizeof(MdnsListenClient_OnHostnameResult_Params_Data) == 24,
              "Bad sizeof(MdnsListenClient_OnHostnameResult_Params_Data)");
class  MdnsListenClient_OnUnhandledResult_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MdnsListenClient_OnUnhandledResult_Params_Data));
      new (data()) MdnsListenClient_OnUnhandledResult_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MdnsListenClient_OnUnhandledResult_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MdnsListenClient_OnUnhandledResult_Params_Data>(index_);
    }
    MdnsListenClient_OnUnhandledResult_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t update_type;
  int32_t query_type;

 private:
  MdnsListenClient_OnUnhandledResult_Params_Data();
  ~MdnsListenClient_OnUnhandledResult_Params_Data() = delete;
};
static_assert(sizeof(MdnsListenClient_OnUnhandledResult_Params_Data) == 16,
              "Bad sizeof(MdnsListenClient_OnUnhandledResult_Params_Data)");
class  HostResolver_ResolveHost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolver_ResolveHost_Params_Data));
      new (data()) HostResolver_ResolveHost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolver_ResolveHost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolver_ResolveHost_Params_Data>(index_);
    }
    HostResolver_ResolveHost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host;
  mojo::internal::Pointer<internal::ResolveHostParameters_Data> optional_parameters;
  mojo::internal::Interface_Data response_client;

 private:
  HostResolver_ResolveHost_Params_Data();
  ~HostResolver_ResolveHost_Params_Data() = delete;
};
static_assert(sizeof(HostResolver_ResolveHost_Params_Data) == 32,
              "Bad sizeof(HostResolver_ResolveHost_Params_Data)");
class  HostResolver_MdnsListen_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolver_MdnsListen_Params_Data));
      new (data()) HostResolver_MdnsListen_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolver_MdnsListen_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolver_MdnsListen_Params_Data>(index_);
    }
    HostResolver_MdnsListen_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::HostPortPair_Data> host;
  int32_t query_type;
  mojo::internal::Interface_Data response_client;
  uint8_t padfinal_[4];

 private:
  HostResolver_MdnsListen_Params_Data();
  ~HostResolver_MdnsListen_Params_Data() = delete;
};
static_assert(sizeof(HostResolver_MdnsListen_Params_Data) == 32,
              "Bad sizeof(HostResolver_MdnsListen_Params_Data)");
class  HostResolver_MdnsListen_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(HostResolver_MdnsListen_ResponseParams_Data));
      new (data()) HostResolver_MdnsListen_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    HostResolver_MdnsListen_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<HostResolver_MdnsListen_ResponseParams_Data>(index_);
    }
    HostResolver_MdnsListen_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  HostResolver_MdnsListen_ResponseParams_Data();
  ~HostResolver_MdnsListen_ResponseParams_Data() = delete;
};
static_assert(sizeof(HostResolver_MdnsListen_ResponseParams_Data) == 16,
              "Bad sizeof(HostResolver_MdnsListen_ResponseParams_Data)");
class  DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data));
      new (data()) DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data>(index_);
    }
    DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data();
  ~DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data() = delete;
};
static_assert(sizeof(DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data) == 8,
              "Bad sizeof(DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data)");
class  DnsConfigChangeManager_RequestNotifications_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DnsConfigChangeManager_RequestNotifications_Params_Data));
      new (data()) DnsConfigChangeManager_RequestNotifications_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DnsConfigChangeManager_RequestNotifications_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DnsConfigChangeManager_RequestNotifications_Params_Data>(index_);
    }
    DnsConfigChangeManager_RequestNotifications_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client_ptr;

 private:
  DnsConfigChangeManager_RequestNotifications_Params_Data();
  ~DnsConfigChangeManager_RequestNotifications_Params_Data() = delete;
};
static_assert(sizeof(DnsConfigChangeManager_RequestNotifications_Params_Data) == 16,
              "Bad sizeof(DnsConfigChangeManager_RequestNotifications_Params_Data)");

}  // namespace internal
class ResolveHostHandle_Cancel_ParamsDataView {
 public:
  ResolveHostHandle_Cancel_ParamsDataView() {}

  ResolveHostHandle_Cancel_ParamsDataView(
      internal::ResolveHostHandle_Cancel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::ResolveHostHandle_Cancel_Params_Data* data_ = nullptr;
};

class ResolveHostClient_OnComplete_ParamsDataView {
 public:
  ResolveHostClient_OnComplete_ParamsDataView() {}

  ResolveHostClient_OnComplete_ParamsDataView(
      internal::ResolveHostClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
  inline void GetResolvedAddressesDataView(
      ::network::mojom::AddressListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResolvedAddresses(UserType* output) {
    auto* pointer = data_->resolved_addresses.Get();
    return mojo::internal::Deserialize<::network::mojom::AddressListDataView>(
        pointer, output, context_);
  }
 private:
  internal::ResolveHostClient_OnComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResolveHostClient_OnTextResults_ParamsDataView {
 public:
  ResolveHostClient_OnTextResults_ParamsDataView() {}

  ResolveHostClient_OnTextResults_ParamsDataView(
      internal::ResolveHostClient_OnTextResults_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTextResultsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextResults(UserType* output) {
    auto* pointer = data_->text_results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ResolveHostClient_OnTextResults_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ResolveHostClient_OnHostnameResults_ParamsDataView {
 public:
  ResolveHostClient_OnHostnameResults_ParamsDataView() {}

  ResolveHostClient_OnHostnameResults_ParamsDataView(
      internal::ResolveHostClient_OnHostnameResults_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostsDataView(
      mojo::ArrayDataView<::network::mojom::HostPortPairDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHosts(UserType* output) {
    auto* pointer = data_->hosts.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::HostPortPairDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ResolveHostClient_OnHostnameResults_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsListenClient_OnAddressResult_ParamsDataView {
 public:
  MdnsListenClient_OnAddressResult_ParamsDataView() {}

  MdnsListenClient_OnAddressResult_ParamsDataView(
      internal::MdnsListenClient_OnAddressResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::network::mojom::MdnsListenClient_UpdateType>(
        data_value, output);
  }

  MdnsListenClient_UpdateType update_type() const {
    return static_cast<MdnsListenClient_UpdateType>(data_->update_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryType(UserType* output) const {
    auto data_value = data_->query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType query_type() const {
    return static_cast<DnsQueryType>(data_->query_type);
  }
  inline void GetEndpointDataView(
      ::network::mojom::IPEndPointDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEndpoint(UserType* output) {
    auto* pointer = data_->endpoint.Get();
    return mojo::internal::Deserialize<::network::mojom::IPEndPointDataView>(
        pointer, output, context_);
  }
 private:
  internal::MdnsListenClient_OnAddressResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsListenClient_OnTextResult_ParamsDataView {
 public:
  MdnsListenClient_OnTextResult_ParamsDataView() {}

  MdnsListenClient_OnTextResult_ParamsDataView(
      internal::MdnsListenClient_OnTextResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::network::mojom::MdnsListenClient_UpdateType>(
        data_value, output);
  }

  MdnsListenClient_UpdateType update_type() const {
    return static_cast<MdnsListenClient_UpdateType>(data_->update_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryType(UserType* output) const {
    auto data_value = data_->query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType query_type() const {
    return static_cast<DnsQueryType>(data_->query_type);
  }
  inline void GetTextRecordsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTextRecords(UserType* output) {
    auto* pointer = data_->text_records.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::MdnsListenClient_OnTextResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsListenClient_OnHostnameResult_ParamsDataView {
 public:
  MdnsListenClient_OnHostnameResult_ParamsDataView() {}

  MdnsListenClient_OnHostnameResult_ParamsDataView(
      internal::MdnsListenClient_OnHostnameResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::network::mojom::MdnsListenClient_UpdateType>(
        data_value, output);
  }

  MdnsListenClient_UpdateType update_type() const {
    return static_cast<MdnsListenClient_UpdateType>(data_->update_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryType(UserType* output) const {
    auto data_value = data_->query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType query_type() const {
    return static_cast<DnsQueryType>(data_->query_type);
  }
  inline void GetHostDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
 private:
  internal::MdnsListenClient_OnHostnameResult_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MdnsListenClient_OnUnhandledResult_ParamsDataView {
 public:
  MdnsListenClient_OnUnhandledResult_ParamsDataView() {}

  MdnsListenClient_OnUnhandledResult_ParamsDataView(
      internal::MdnsListenClient_OnUnhandledResult_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateType(UserType* output) const {
    auto data_value = data_->update_type;
    return mojo::internal::Deserialize<::network::mojom::MdnsListenClient_UpdateType>(
        data_value, output);
  }

  MdnsListenClient_UpdateType update_type() const {
    return static_cast<MdnsListenClient_UpdateType>(data_->update_type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryType(UserType* output) const {
    auto data_value = data_->query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType query_type() const {
    return static_cast<DnsQueryType>(data_->query_type);
  }
 private:
  internal::MdnsListenClient_OnUnhandledResult_Params_Data* data_ = nullptr;
};

class HostResolver_ResolveHost_ParamsDataView {
 public:
  HostResolver_ResolveHost_ParamsDataView() {}

  HostResolver_ResolveHost_ParamsDataView(
      internal::HostResolver_ResolveHost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
  inline void GetOptionalParametersDataView(
      ResolveHostParametersDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptionalParameters(UserType* output) {
    auto* pointer = data_->optional_parameters.Get();
    return mojo::internal::Deserialize<::network::mojom::ResolveHostParametersDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeResponseClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::ResolveHostClientPtrDataView>(
            &data_->response_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HostResolver_ResolveHost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HostResolver_MdnsListen_ParamsDataView {
 public:
  HostResolver_MdnsListen_ParamsDataView() {}

  HostResolver_MdnsListen_ParamsDataView(
      internal::HostResolver_MdnsListen_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetHostDataView(
      ::network::mojom::HostPortPairDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHost(UserType* output) {
    auto* pointer = data_->host.Get();
    return mojo::internal::Deserialize<::network::mojom::HostPortPairDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadQueryType(UserType* output) const {
    auto data_value = data_->query_type;
    return mojo::internal::Deserialize<::network::mojom::DnsQueryType>(
        data_value, output);
  }

  DnsQueryType query_type() const {
    return static_cast<DnsQueryType>(data_->query_type);
  }
  template <typename UserType>
  UserType TakeResponseClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::MdnsListenClientPtrDataView>(
            &data_->response_client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::HostResolver_MdnsListen_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class HostResolver_MdnsListen_ResponseParamsDataView {
 public:
  HostResolver_MdnsListen_ResponseParamsDataView() {}

  HostResolver_MdnsListen_ResponseParamsDataView(
      internal::HostResolver_MdnsListen_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t result() const {
    return data_->result;
  }
 private:
  internal::HostResolver_MdnsListen_ResponseParams_Data* data_ = nullptr;
};

class DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_ParamsDataView {
 public:
  DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_ParamsDataView() {}

  DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_ParamsDataView(
      internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DnsConfigChangeManagerClient_OnSystemDnsConfigChanged_Params_Data* data_ = nullptr;
};

class DnsConfigChangeManager_RequestNotifications_ParamsDataView {
 public:
  DnsConfigChangeManager_RequestNotifications_ParamsDataView() {}

  DnsConfigChangeManager_RequestNotifications_ParamsDataView(
      internal::DnsConfigChangeManager_RequestNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClientPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DnsConfigChangeManagerClientPtrDataView>(
            &data_->client_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DnsConfigChangeManager_RequestNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void ResolveHostClient_OnComplete_ParamsDataView::GetResolvedAddressesDataView(
    ::network::mojom::AddressListDataView* output) {
  auto pointer = data_->resolved_addresses.Get();
  *output = ::network::mojom::AddressListDataView(pointer, context_);
}


inline void ResolveHostClient_OnTextResults_ParamsDataView::GetTextResultsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->text_results.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void ResolveHostClient_OnHostnameResults_ParamsDataView::GetHostsDataView(
    mojo::ArrayDataView<::network::mojom::HostPortPairDataView>* output) {
  auto pointer = data_->hosts.Get();
  *output = mojo::ArrayDataView<::network::mojom::HostPortPairDataView>(pointer, context_);
}


inline void MdnsListenClient_OnAddressResult_ParamsDataView::GetEndpointDataView(
    ::network::mojom::IPEndPointDataView* output) {
  auto pointer = data_->endpoint.Get();
  *output = ::network::mojom::IPEndPointDataView(pointer, context_);
}


inline void MdnsListenClient_OnTextResult_ParamsDataView::GetTextRecordsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->text_records.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void MdnsListenClient_OnHostnameResult_ParamsDataView::GetHostDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}




inline void HostResolver_ResolveHost_ParamsDataView::GetHostDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}
inline void HostResolver_ResolveHost_ParamsDataView::GetOptionalParametersDataView(
    ResolveHostParametersDataView* output) {
  auto pointer = data_->optional_parameters.Get();
  *output = ResolveHostParametersDataView(pointer, context_);
}


inline void HostResolver_MdnsListen_ParamsDataView::GetHostDataView(
    ::network::mojom::HostPortPairDataView* output) {
  auto pointer = data_->host.Get();
  *output = ::network::mojom::HostPortPairDataView(pointer, context_);
}







}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_HOST_RESOLVER_MOJOM_PARAMS_DATA_H_