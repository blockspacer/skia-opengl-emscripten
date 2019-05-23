// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_PARAMS_DATA_H_

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
class  ProxyLookupClient_OnProxyLookupComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyLookupClient_OnProxyLookupComplete_Params_Data));
      new (data()) ProxyLookupClient_OnProxyLookupComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyLookupClient_OnProxyLookupComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyLookupClient_OnProxyLookupComplete_Params_Data>(index_);
    }
    ProxyLookupClient_OnProxyLookupComplete_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::proxy_resolver::mojom::internal::ProxyInfo_Data> proxy_info;

 private:
  ProxyLookupClient_OnProxyLookupComplete_Params_Data();
  ~ProxyLookupClient_OnProxyLookupComplete_Params_Data() = delete;
};
static_assert(sizeof(ProxyLookupClient_OnProxyLookupComplete_Params_Data) == 24,
              "Bad sizeof(ProxyLookupClient_OnProxyLookupComplete_Params_Data)");

}  // namespace internal
class ProxyLookupClient_OnProxyLookupComplete_ParamsDataView {
 public:
  ProxyLookupClient_OnProxyLookupComplete_ParamsDataView() {}

  ProxyLookupClient_OnProxyLookupComplete_ParamsDataView(
      internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
  inline void GetProxyInfoDataView(
      ::proxy_resolver::mojom::ProxyInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyInfo(UserType* output) {
    auto* pointer = data_->proxy_info.Get();
    return mojo::internal::Deserialize<::proxy_resolver::mojom::ProxyInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProxyLookupClient_OnProxyLookupComplete_ParamsDataView::GetProxyInfoDataView(
    ::proxy_resolver::mojom::ProxyInfoDataView* output) {
  auto pointer = data_->proxy_info.Get();
  *output = ::proxy_resolver::mojom::ProxyInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_PARAMS_DATA_H_