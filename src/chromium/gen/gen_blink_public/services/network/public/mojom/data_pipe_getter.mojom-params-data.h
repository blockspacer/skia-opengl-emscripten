// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_

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
class  DataPipeGetter_Read_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataPipeGetter_Read_Params_Data));
      new (data()) DataPipeGetter_Read_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataPipeGetter_Read_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataPipeGetter_Read_Params_Data>(index_);
    }
    DataPipeGetter_Read_Params_Data* operator->() { return data(); }

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
  DataPipeGetter_Read_Params_Data();
  ~DataPipeGetter_Read_Params_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Read_Params_Data) == 16,
              "Bad sizeof(DataPipeGetter_Read_Params_Data)");
class  DataPipeGetter_Read_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataPipeGetter_Read_ResponseParams_Data));
      new (data()) DataPipeGetter_Read_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataPipeGetter_Read_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataPipeGetter_Read_ResponseParams_Data>(index_);
    }
    DataPipeGetter_Read_ResponseParams_Data* operator->() { return data(); }

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
  DataPipeGetter_Read_ResponseParams_Data();
  ~DataPipeGetter_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Read_ResponseParams_Data) == 24,
              "Bad sizeof(DataPipeGetter_Read_ResponseParams_Data)");
class  DataPipeGetter_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DataPipeGetter_Clone_Params_Data));
      new (data()) DataPipeGetter_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DataPipeGetter_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DataPipeGetter_Clone_Params_Data>(index_);
    }
    DataPipeGetter_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  DataPipeGetter_Clone_Params_Data();
  ~DataPipeGetter_Clone_Params_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Clone_Params_Data) == 16,
              "Bad sizeof(DataPipeGetter_Clone_Params_Data)");

}  // namespace internal
class DataPipeGetter_Read_ParamsDataView {
 public:
  DataPipeGetter_Read_ParamsDataView() {}

  DataPipeGetter_Read_ParamsDataView(
      internal::DataPipeGetter_Read_Params_Data* data,
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
  internal::DataPipeGetter_Read_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataPipeGetter_Read_ResponseParamsDataView {
 public:
  DataPipeGetter_Read_ResponseParamsDataView() {}

  DataPipeGetter_Read_ResponseParamsDataView(
      internal::DataPipeGetter_Read_ResponseParams_Data* data,
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
  internal::DataPipeGetter_Read_ResponseParams_Data* data_ = nullptr;
};

class DataPipeGetter_Clone_ParamsDataView {
 public:
  DataPipeGetter_Clone_ParamsDataView() {}

  DataPipeGetter_Clone_ParamsDataView(
      internal::DataPipeGetter_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DataPipeGetterRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataPipeGetter_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};







}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_