// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_PARAMS_DATA_H_

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
class  ProxyConfigClient_OnProxyConfigUpdated_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfigClient_OnProxyConfigUpdated_Params_Data));
      new (data()) ProxyConfigClient_OnProxyConfigUpdated_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfigClient_OnProxyConfigUpdated_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfigClient_OnProxyConfigUpdated_Params_Data>(index_);
    }
    ProxyConfigClient_OnProxyConfigUpdated_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::ProxyConfigWithAnnotation_Data> proxy_config;

 private:
  ProxyConfigClient_OnProxyConfigUpdated_Params_Data();
  ~ProxyConfigClient_OnProxyConfigUpdated_Params_Data() = delete;
};
static_assert(sizeof(ProxyConfigClient_OnProxyConfigUpdated_Params_Data) == 16,
              "Bad sizeof(ProxyConfigClient_OnProxyConfigUpdated_Params_Data)");
class  ProxyConfigClient_FlushProxyConfig_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfigClient_FlushProxyConfig_Params_Data));
      new (data()) ProxyConfigClient_FlushProxyConfig_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfigClient_FlushProxyConfig_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfigClient_FlushProxyConfig_Params_Data>(index_);
    }
    ProxyConfigClient_FlushProxyConfig_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProxyConfigClient_FlushProxyConfig_Params_Data();
  ~ProxyConfigClient_FlushProxyConfig_Params_Data() = delete;
};
static_assert(sizeof(ProxyConfigClient_FlushProxyConfig_Params_Data) == 8,
              "Bad sizeof(ProxyConfigClient_FlushProxyConfig_Params_Data)");
class  ProxyConfigClient_FlushProxyConfig_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfigClient_FlushProxyConfig_ResponseParams_Data));
      new (data()) ProxyConfigClient_FlushProxyConfig_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfigClient_FlushProxyConfig_ResponseParams_Data>(index_);
    }
    ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProxyConfigClient_FlushProxyConfig_ResponseParams_Data();
  ~ProxyConfigClient_FlushProxyConfig_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProxyConfigClient_FlushProxyConfig_ResponseParams_Data) == 8,
              "Bad sizeof(ProxyConfigClient_FlushProxyConfig_ResponseParams_Data)");
class  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data));
      new (data()) ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data>(index_);
    }
    ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data();
  ~ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data() = delete;
};
static_assert(sizeof(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data) == 8,
              "Bad sizeof(ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data)");
class  ProxyErrorClient_OnPACScriptError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyErrorClient_OnPACScriptError_Params_Data));
      new (data()) ProxyErrorClient_OnPACScriptError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyErrorClient_OnPACScriptError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyErrorClient_OnPACScriptError_Params_Data>(index_);
    }
    ProxyErrorClient_OnPACScriptError_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<mojo::internal::String_Data> details;

 private:
  ProxyErrorClient_OnPACScriptError_Params_Data();
  ~ProxyErrorClient_OnPACScriptError_Params_Data() = delete;
};
static_assert(sizeof(ProxyErrorClient_OnPACScriptError_Params_Data) == 24,
              "Bad sizeof(ProxyErrorClient_OnPACScriptError_Params_Data)");
class  ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data));
      new (data()) ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data>(index_);
    }
    ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t net_error;
  uint8_t padfinal_[4];

 private:
  ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data();
  ~ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data() = delete;
};
static_assert(sizeof(ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data) == 16,
              "Bad sizeof(ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data)");

}  // namespace internal
class ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView {
 public:
  ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView() {}

  ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView(
      internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProxyConfigDataView(
      ProxyConfigWithAnnotationDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadProxyConfig(UserType* output) {
    auto* pointer = data_->proxy_config.Get();
    return mojo::internal::Deserialize<::network::mojom::ProxyConfigWithAnnotationDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyConfigClient_OnProxyConfigUpdated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyConfigClient_FlushProxyConfig_ParamsDataView {
 public:
  ProxyConfigClient_FlushProxyConfig_ParamsDataView() {}

  ProxyConfigClient_FlushProxyConfig_ParamsDataView(
      internal::ProxyConfigClient_FlushProxyConfig_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProxyConfigClient_FlushProxyConfig_Params_Data* data_ = nullptr;
};

class ProxyConfigClient_FlushProxyConfig_ResponseParamsDataView {
 public:
  ProxyConfigClient_FlushProxyConfig_ResponseParamsDataView() {}

  ProxyConfigClient_FlushProxyConfig_ResponseParamsDataView(
      internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProxyConfigClient_FlushProxyConfig_ResponseParams_Data* data_ = nullptr;
};

class ProxyConfigPollerClient_OnLazyProxyConfigPoll_ParamsDataView {
 public:
  ProxyConfigPollerClient_OnLazyProxyConfigPoll_ParamsDataView() {}

  ProxyConfigPollerClient_OnLazyProxyConfigPoll_ParamsDataView(
      internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ProxyConfigPollerClient_OnLazyProxyConfigPoll_Params_Data* data_ = nullptr;
};

class ProxyErrorClient_OnPACScriptError_ParamsDataView {
 public:
  ProxyErrorClient_OnPACScriptError_ParamsDataView() {}

  ProxyErrorClient_OnPACScriptError_ParamsDataView(
      internal::ProxyErrorClient_OnPACScriptError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t line_number() const {
    return data_->line_number;
  }
  inline void GetDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDetails(UserType* output) {
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::ProxyErrorClient_OnPACScriptError_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_ParamsDataView {
 public:
  ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_ParamsDataView() {}

  ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_ParamsDataView(
      internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t net_error() const {
    return data_->net_error;
  }
 private:
  internal::ProxyErrorClient_OnRequestMaybeFailedDueToProxySettings_Params_Data* data_ = nullptr;
};


inline void ProxyConfigClient_OnProxyConfigUpdated_ParamsDataView::GetProxyConfigDataView(
    ProxyConfigWithAnnotationDataView* output) {
  auto pointer = data_->proxy_config.Get();
  *output = ProxyConfigWithAnnotationDataView(pointer, context_);
}








inline void ProxyErrorClient_OnPACScriptError_ParamsDataView::GetDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->details.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_CONFIG_WITH_ANNOTATION_MOJOM_PARAMS_DATA_H_