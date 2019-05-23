// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobReaderClient_OnCalculatedSize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobReaderClient_OnCalculatedSize_Params_Data));
      new (data()) BlobReaderClient_OnCalculatedSize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobReaderClient_OnCalculatedSize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobReaderClient_OnCalculatedSize_Params_Data>(index_);
    }
    BlobReaderClient_OnCalculatedSize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t total_size;
  uint64_t expected_content_size;

 private:
  BlobReaderClient_OnCalculatedSize_Params_Data();
  ~BlobReaderClient_OnCalculatedSize_Params_Data() = delete;
};
static_assert(sizeof(BlobReaderClient_OnCalculatedSize_Params_Data) == 24,
              "Bad sizeof(BlobReaderClient_OnCalculatedSize_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BlobReaderClient_OnComplete_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BlobReaderClient_OnComplete_Params_Data));
      new (data()) BlobReaderClient_OnComplete_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BlobReaderClient_OnComplete_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BlobReaderClient_OnComplete_Params_Data>(index_);
    }
    BlobReaderClient_OnComplete_Params_Data* operator->() { return data(); }

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
  uint64_t data_length;

 private:
  BlobReaderClient_OnComplete_Params_Data();
  ~BlobReaderClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(BlobReaderClient_OnComplete_Params_Data) == 24,
              "Bad sizeof(BlobReaderClient_OnComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_Clone_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_Clone_Params_Data));
      new (data()) Blob_Clone_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_Clone_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_Clone_Params_Data>(index_);
    }
    Blob_Clone_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data blob;
  uint8_t padfinal_[4];

 private:
  Blob_Clone_Params_Data();
  ~Blob_Clone_Params_Data() = delete;
};
static_assert(sizeof(Blob_Clone_Params_Data) == 16,
              "Bad sizeof(Blob_Clone_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_AsDataPipeGetter_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_AsDataPipeGetter_Params_Data));
      new (data()) Blob_AsDataPipeGetter_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_AsDataPipeGetter_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_AsDataPipeGetter_Params_Data>(index_);
    }
    Blob_AsDataPipeGetter_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data data_pipe_getter;
  uint8_t padfinal_[4];

 private:
  Blob_AsDataPipeGetter_Params_Data();
  ~Blob_AsDataPipeGetter_Params_Data() = delete;
};
static_assert(sizeof(Blob_AsDataPipeGetter_Params_Data) == 16,
              "Bad sizeof(Blob_AsDataPipeGetter_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadAll_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadAll_Params_Data));
      new (data()) Blob_ReadAll_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadAll_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadAll_Params_Data>(index_);
    }
    Blob_ReadAll_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  Blob_ReadAll_Params_Data();
  ~Blob_ReadAll_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadAll_Params_Data) == 24,
              "Bad sizeof(Blob_ReadAll_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadRange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadRange_Params_Data));
      new (data()) Blob_ReadRange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadRange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadRange_Params_Data>(index_);
    }
    Blob_ReadRange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Handle_Data pipe;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  Blob_ReadRange_Params_Data();
  ~Blob_ReadRange_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadRange_Params_Data) == 40,
              "Bad sizeof(Blob_ReadRange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadSideData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadSideData_Params_Data));
      new (data()) Blob_ReadSideData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadSideData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadSideData_Params_Data>(index_);
    }
    Blob_ReadSideData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Blob_ReadSideData_Params_Data();
  ~Blob_ReadSideData_Params_Data() = delete;
};
static_assert(sizeof(Blob_ReadSideData_Params_Data) == 8,
              "Bad sizeof(Blob_ReadSideData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_ReadSideData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_ReadSideData_ResponseParams_Data));
      new (data()) Blob_ReadSideData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_ReadSideData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_ReadSideData_ResponseParams_Data>(index_);
    }
    Blob_ReadSideData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  Blob_ReadSideData_ResponseParams_Data();
  ~Blob_ReadSideData_ResponseParams_Data() = delete;
};
static_assert(sizeof(Blob_ReadSideData_ResponseParams_Data) == 24,
              "Bad sizeof(Blob_ReadSideData_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_GetInternalUUID_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_GetInternalUUID_Params_Data));
      new (data()) Blob_GetInternalUUID_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_GetInternalUUID_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_GetInternalUUID_Params_Data>(index_);
    }
    Blob_GetInternalUUID_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Blob_GetInternalUUID_Params_Data();
  ~Blob_GetInternalUUID_Params_Data() = delete;
};
static_assert(sizeof(Blob_GetInternalUUID_Params_Data) == 8,
              "Bad sizeof(Blob_GetInternalUUID_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) Blob_GetInternalUUID_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Blob_GetInternalUUID_ResponseParams_Data));
      new (data()) Blob_GetInternalUUID_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Blob_GetInternalUUID_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Blob_GetInternalUUID_ResponseParams_Data>(index_);
    }
    Blob_GetInternalUUID_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> uuid;

 private:
  Blob_GetInternalUUID_ResponseParams_Data();
  ~Blob_GetInternalUUID_ResponseParams_Data() = delete;
};
static_assert(sizeof(Blob_GetInternalUUID_ResponseParams_Data) == 16,
              "Bad sizeof(Blob_GetInternalUUID_ResponseParams_Data)");

}  // namespace internal
class BlobReaderClient_OnCalculatedSize_ParamsDataView {
 public:
  BlobReaderClient_OnCalculatedSize_ParamsDataView() {}

  BlobReaderClient_OnCalculatedSize_ParamsDataView(
      internal::BlobReaderClient_OnCalculatedSize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t total_size() const {
    return data_->total_size;
  }
  uint64_t expected_content_size() const {
    return data_->expected_content_size;
  }
 private:
  internal::BlobReaderClient_OnCalculatedSize_Params_Data* data_ = nullptr;
};

class BlobReaderClient_OnComplete_ParamsDataView {
 public:
  BlobReaderClient_OnComplete_ParamsDataView() {}

  BlobReaderClient_OnComplete_ParamsDataView(
      internal::BlobReaderClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
  uint64_t data_length() const {
    return data_->data_length;
  }
 private:
  internal::BlobReaderClient_OnComplete_Params_Data* data_ = nullptr;
};

class Blob_Clone_ParamsDataView {
 public:
  Blob_Clone_ParamsDataView() {}

  Blob_Clone_ParamsDataView(
      internal::Blob_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobRequestDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_AsDataPipeGetter_ParamsDataView {
 public:
  Blob_AsDataPipeGetter_ParamsDataView() {}

  Blob_AsDataPipeGetter_ParamsDataView(
      internal::Blob_AsDataPipeGetter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDataPipeGetter() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::DataPipeGetterRequestDataView>(
            &data_->data_pipe_getter, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_AsDataPipeGetter_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadAll_ParamsDataView {
 public:
  Blob_ReadAll_ParamsDataView() {}

  Blob_ReadAll_ParamsDataView(
      internal::Blob_ReadAll_Params_Data* data,
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
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobReaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_ReadAll_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadRange_ParamsDataView {
 public:
  Blob_ReadRange_ParamsDataView() {}

  Blob_ReadRange_ParamsDataView(
      internal::Blob_ReadRange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobReaderClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Blob_ReadRange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_ReadSideData_ParamsDataView {
 public:
  Blob_ReadSideData_ParamsDataView() {}

  Blob_ReadSideData_ParamsDataView(
      internal::Blob_ReadSideData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Blob_ReadSideData_Params_Data* data_ = nullptr;
};

class Blob_ReadSideData_ResponseParamsDataView {
 public:
  Blob_ReadSideData_ResponseParamsDataView() {}

  Blob_ReadSideData_ResponseParamsDataView(
      internal::Blob_ReadSideData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
 private:
  internal::Blob_ReadSideData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Blob_GetInternalUUID_ParamsDataView {
 public:
  Blob_GetInternalUUID_ParamsDataView() {}

  Blob_GetInternalUUID_ParamsDataView(
      internal::Blob_GetInternalUUID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Blob_GetInternalUUID_Params_Data* data_ = nullptr;
};

class Blob_GetInternalUUID_ResponseParamsDataView {
 public:
  Blob_GetInternalUUID_ResponseParamsDataView() {}

  Blob_GetInternalUUID_ResponseParamsDataView(
      internal::Blob_GetInternalUUID_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::Blob_GetInternalUUID_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};
















inline void Blob_ReadSideData_ResponseParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}




inline void Blob_GetInternalUUID_ResponseParamsDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_PARAMS_DATA_H_