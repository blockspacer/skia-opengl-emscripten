// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_PARAMS_DATA_H_

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
namespace download {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_COMPONENTS_DOWNLOAD_EXPORT) DownloadStreamClient_OnStreamCompleted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DownloadStreamClient_OnStreamCompleted_Params_Data));
      new (data()) DownloadStreamClient_OnStreamCompleted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DownloadStreamClient_OnStreamCompleted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DownloadStreamClient_OnStreamCompleted_Params_Data>(index_);
    }
    DownloadStreamClient_OnStreamCompleted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  DownloadStreamClient_OnStreamCompleted_Params_Data();
  ~DownloadStreamClient_OnStreamCompleted_Params_Data() = delete;
};
static_assert(sizeof(DownloadStreamClient_OnStreamCompleted_Params_Data) == 16,
              "Bad sizeof(DownloadStreamClient_OnStreamCompleted_Params_Data)");

}  // namespace internal
#if defined(ENABLE_GNET)
class DownloadStreamClient_OnStreamCompleted_ParamsDataView {
 public:
  DownloadStreamClient_OnStreamCompleted_ParamsDataView() {}

  DownloadStreamClient_OnStreamCompleted_ParamsDataView(
      internal::DownloadStreamClient_OnStreamCompleted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
#if defined(ENABLE_GNET)
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::download::mojom::NetworkRequestStatus>(
        data_value, output);
  }

  NetworkRequestStatus status() const {
    return static_cast<NetworkRequestStatus>(data_->status);
  }
#endif // ENABLE_GNET
 private:
  internal::DownloadStreamClient_OnStreamCompleted_Params_Data* data_ = nullptr;
};
#endif // ENABLE_GNET



}  // namespace mojom
}  // namespace download

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_PARAMS_DATA_H_
