// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_

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
class  ChunkedDataPipeGetter_GetSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunkedDataPipeGetter_GetSize_Params_Data));
      new (data()) ChunkedDataPipeGetter_GetSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunkedDataPipeGetter_GetSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunkedDataPipeGetter_GetSize_Params_Data>(index_);
    }
    ChunkedDataPipeGetter_GetSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ChunkedDataPipeGetter_GetSize_Params_Data();
  ~ChunkedDataPipeGetter_GetSize_Params_Data() = delete;
};
static_assert(sizeof(ChunkedDataPipeGetter_GetSize_Params_Data) == 8,
              "Bad sizeof(ChunkedDataPipeGetter_GetSize_Params_Data)");
class  ChunkedDataPipeGetter_GetSize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunkedDataPipeGetter_GetSize_ResponseParams_Data));
      new (data()) ChunkedDataPipeGetter_GetSize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunkedDataPipeGetter_GetSize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunkedDataPipeGetter_GetSize_ResponseParams_Data>(index_);
    }
    ChunkedDataPipeGetter_GetSize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  uint64_t size;

 private:
  ChunkedDataPipeGetter_GetSize_ResponseParams_Data();
  ~ChunkedDataPipeGetter_GetSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChunkedDataPipeGetter_GetSize_ResponseParams_Data) == 24,
              "Bad sizeof(ChunkedDataPipeGetter_GetSize_ResponseParams_Data)");
class  ChunkedDataPipeGetter_StartReading_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ChunkedDataPipeGetter_StartReading_Params_Data));
      new (data()) ChunkedDataPipeGetter_StartReading_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ChunkedDataPipeGetter_StartReading_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ChunkedDataPipeGetter_StartReading_Params_Data>(index_);
    }
    ChunkedDataPipeGetter_StartReading_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data pipe;
  uint8_t padfinal_[4];

 private:
  ChunkedDataPipeGetter_StartReading_Params_Data();
  ~ChunkedDataPipeGetter_StartReading_Params_Data() = delete;
};
static_assert(sizeof(ChunkedDataPipeGetter_StartReading_Params_Data) == 16,
              "Bad sizeof(ChunkedDataPipeGetter_StartReading_Params_Data)");

}  // namespace internal
class ChunkedDataPipeGetter_GetSize_ParamsDataView {
 public:
  ChunkedDataPipeGetter_GetSize_ParamsDataView() {}

  ChunkedDataPipeGetter_GetSize_ParamsDataView(
      internal::ChunkedDataPipeGetter_GetSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChunkedDataPipeGetter_GetSize_Params_Data* data_ = nullptr;
};

class ChunkedDataPipeGetter_GetSize_ResponseParamsDataView {
 public:
  ChunkedDataPipeGetter_GetSize_ResponseParamsDataView() {}

  ChunkedDataPipeGetter_GetSize_ResponseParamsDataView(
      internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
  uint64_t size() const {
    return data_->size;
  }
 private:
  internal::ChunkedDataPipeGetter_GetSize_ResponseParams_Data* data_ = nullptr;
};

class ChunkedDataPipeGetter_StartReading_ParamsDataView {
 public:
  ChunkedDataPipeGetter_StartReading_ParamsDataView() {}

  ChunkedDataPipeGetter_StartReading_ParamsDataView(
      internal::ChunkedDataPipeGetter_StartReading_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ChunkedDataPipeGetter_StartReading_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};







}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_