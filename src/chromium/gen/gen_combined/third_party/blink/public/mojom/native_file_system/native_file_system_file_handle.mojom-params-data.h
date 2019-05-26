// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_AsBlob_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_AsBlob_Params_Data));
      new (data()) NativeFileSystemFileHandle_AsBlob_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_AsBlob_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_AsBlob_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_AsBlob_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeFileSystemFileHandle_AsBlob_Params_Data();
  ~NativeFileSystemFileHandle_AsBlob_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_AsBlob_Params_Data) == 8,
              "Bad sizeof(NativeFileSystemFileHandle_AsBlob_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_AsBlob_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_AsBlob_ResponseParams_Data));
      new (data()) NativeFileSystemFileHandle_AsBlob_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_AsBlob_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_AsBlob_ResponseParams_Data>(index_);
    }
    NativeFileSystemFileHandle_AsBlob_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  mojo::internal::Pointer<::blink::mojom::internal::SerializedBlob_Data> blob;

 private:
  NativeFileSystemFileHandle_AsBlob_ResponseParams_Data();
  ~NativeFileSystemFileHandle_AsBlob_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_AsBlob_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemFileHandle_AsBlob_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Remove_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Remove_Params_Data));
      new (data()) NativeFileSystemFileHandle_Remove_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Remove_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Remove_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_Remove_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  NativeFileSystemFileHandle_Remove_Params_Data();
  ~NativeFileSystemFileHandle_Remove_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Remove_Params_Data) == 8,
              "Bad sizeof(NativeFileSystemFileHandle_Remove_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Remove_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Remove_ResponseParams_Data));
      new (data()) NativeFileSystemFileHandle_Remove_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Remove_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Remove_ResponseParams_Data>(index_);
    }
    NativeFileSystemFileHandle_Remove_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;

 private:
  NativeFileSystemFileHandle_Remove_ResponseParams_Data();
  ~NativeFileSystemFileHandle_Remove_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Remove_ResponseParams_Data) == 16,
              "Bad sizeof(NativeFileSystemFileHandle_Remove_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Write_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Write_Params_Data));
      new (data()) NativeFileSystemFileHandle_Write_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Write_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Write_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_Write_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t offset;
  mojo::internal::Interface_Data data;

 private:
  NativeFileSystemFileHandle_Write_Params_Data();
  ~NativeFileSystemFileHandle_Write_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Write_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemFileHandle_Write_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Write_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Write_ResponseParams_Data));
      new (data()) NativeFileSystemFileHandle_Write_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Write_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Write_ResponseParams_Data>(index_);
    }
    NativeFileSystemFileHandle_Write_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  uint64_t bytes_written;

 private:
  NativeFileSystemFileHandle_Write_ResponseParams_Data();
  ~NativeFileSystemFileHandle_Write_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Write_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemFileHandle_Write_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_WriteStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_WriteStream_Params_Data));
      new (data()) NativeFileSystemFileHandle_WriteStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_WriteStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_WriteStream_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_WriteStream_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t offset;
  mojo::internal::Handle_Data stream;
  uint8_t padfinal_[4];

 private:
  NativeFileSystemFileHandle_WriteStream_Params_Data();
  ~NativeFileSystemFileHandle_WriteStream_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_WriteStream_Params_Data) == 24,
              "Bad sizeof(NativeFileSystemFileHandle_WriteStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_WriteStream_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_WriteStream_ResponseParams_Data));
      new (data()) NativeFileSystemFileHandle_WriteStream_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_WriteStream_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_WriteStream_ResponseParams_Data>(index_);
    }
    NativeFileSystemFileHandle_WriteStream_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;
  uint64_t bytes_written;

 private:
  NativeFileSystemFileHandle_WriteStream_ResponseParams_Data();
  ~NativeFileSystemFileHandle_WriteStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_WriteStream_ResponseParams_Data) == 24,
              "Bad sizeof(NativeFileSystemFileHandle_WriteStream_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Truncate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Truncate_Params_Data));
      new (data()) NativeFileSystemFileHandle_Truncate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Truncate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Truncate_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_Truncate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t length;

 private:
  NativeFileSystemFileHandle_Truncate_Params_Data();
  ~NativeFileSystemFileHandle_Truncate_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Truncate_Params_Data) == 16,
              "Bad sizeof(NativeFileSystemFileHandle_Truncate_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Truncate_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Truncate_ResponseParams_Data));
      new (data()) NativeFileSystemFileHandle_Truncate_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Truncate_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Truncate_ResponseParams_Data>(index_);
    }
    NativeFileSystemFileHandle_Truncate_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::blink::mojom::internal::NativeFileSystemError_Data> result;

 private:
  NativeFileSystemFileHandle_Truncate_ResponseParams_Data();
  ~NativeFileSystemFileHandle_Truncate_ResponseParams_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Truncate_ResponseParams_Data) == 16,
              "Bad sizeof(NativeFileSystemFileHandle_Truncate_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) NativeFileSystemFileHandle_Transfer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(NativeFileSystemFileHandle_Transfer_Params_Data));
      new (data()) NativeFileSystemFileHandle_Transfer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    NativeFileSystemFileHandle_Transfer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<NativeFileSystemFileHandle_Transfer_Params_Data>(index_);
    }
    NativeFileSystemFileHandle_Transfer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data token;
  uint8_t padfinal_[4];

 private:
  NativeFileSystemFileHandle_Transfer_Params_Data();
  ~NativeFileSystemFileHandle_Transfer_Params_Data() = delete;
};
static_assert(sizeof(NativeFileSystemFileHandle_Transfer_Params_Data) == 16,
              "Bad sizeof(NativeFileSystemFileHandle_Transfer_Params_Data)");

}  // namespace internal
class NativeFileSystemFileHandle_AsBlob_ParamsDataView {
 public:
  NativeFileSystemFileHandle_AsBlob_ParamsDataView() {}

  NativeFileSystemFileHandle_AsBlob_ParamsDataView(
      internal::NativeFileSystemFileHandle_AsBlob_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeFileSystemFileHandle_AsBlob_Params_Data* data_ = nullptr;
};

class NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView {
 public:
  NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView() {}

  NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView(
      internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  inline void GetBlobDataView(
      ::blink::mojom::SerializedBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::blink::mojom::SerializedBlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemFileHandle_AsBlob_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_Remove_ParamsDataView {
 public:
  NativeFileSystemFileHandle_Remove_ParamsDataView() {}

  NativeFileSystemFileHandle_Remove_ParamsDataView(
      internal::NativeFileSystemFileHandle_Remove_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::NativeFileSystemFileHandle_Remove_Params_Data* data_ = nullptr;
};

class NativeFileSystemFileHandle_Remove_ResponseParamsDataView {
 public:
  NativeFileSystemFileHandle_Remove_ResponseParamsDataView() {}

  NativeFileSystemFileHandle_Remove_ResponseParamsDataView(
      internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemFileHandle_Remove_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_Write_ParamsDataView {
 public:
  NativeFileSystemFileHandle_Write_ParamsDataView() {}

  NativeFileSystemFileHandle_Write_ParamsDataView(
      internal::NativeFileSystemFileHandle_Write_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t offset() const {
    return data_->offset;
  }
  template <typename UserType>
  UserType TakeData() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->data, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemFileHandle_Write_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_Write_ResponseParamsDataView {
 public:
  NativeFileSystemFileHandle_Write_ResponseParamsDataView() {}

  NativeFileSystemFileHandle_Write_ResponseParamsDataView(
      internal::NativeFileSystemFileHandle_Write_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  uint64_t bytes_written() const {
    return data_->bytes_written;
  }
 private:
  internal::NativeFileSystemFileHandle_Write_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_WriteStream_ParamsDataView {
 public:
  NativeFileSystemFileHandle_WriteStream_ParamsDataView() {}

  NativeFileSystemFileHandle_WriteStream_ParamsDataView(
      internal::NativeFileSystemFileHandle_WriteStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t offset() const {
    return data_->offset;
  }
  mojo::ScopedDataPipeConsumerHandle TakeStream() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemFileHandle_WriteStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_WriteStream_ResponseParamsDataView {
 public:
  NativeFileSystemFileHandle_WriteStream_ResponseParamsDataView() {}

  NativeFileSystemFileHandle_WriteStream_ResponseParamsDataView(
      internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
  uint64_t bytes_written() const {
    return data_->bytes_written;
  }
 private:
  internal::NativeFileSystemFileHandle_WriteStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_Truncate_ParamsDataView {
 public:
  NativeFileSystemFileHandle_Truncate_ParamsDataView() {}

  NativeFileSystemFileHandle_Truncate_ParamsDataView(
      internal::NativeFileSystemFileHandle_Truncate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t length() const {
    return data_->length;
  }
 private:
  internal::NativeFileSystemFileHandle_Truncate_Params_Data* data_ = nullptr;
};

class NativeFileSystemFileHandle_Truncate_ResponseParamsDataView {
 public:
  NativeFileSystemFileHandle_Truncate_ResponseParamsDataView() {}

  NativeFileSystemFileHandle_Truncate_ResponseParamsDataView(
      internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::blink::mojom::NativeFileSystemErrorDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemErrorDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemFileHandle_Truncate_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemFileHandle_Transfer_ParamsDataView {
 public:
  NativeFileSystemFileHandle_Transfer_ParamsDataView() {}

  NativeFileSystemFileHandle_Transfer_ParamsDataView(
      internal::NativeFileSystemFileHandle_Transfer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeToken() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemTransferTokenRequestDataView>(
            &data_->token, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativeFileSystemFileHandle_Transfer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}
inline void NativeFileSystemFileHandle_AsBlob_ResponseParamsDataView::GetBlobDataView(
    ::blink::mojom::SerializedBlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = ::blink::mojom::SerializedBlobDataView(pointer, context_);
}




inline void NativeFileSystemFileHandle_Remove_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}




inline void NativeFileSystemFileHandle_Write_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}




inline void NativeFileSystemFileHandle_WriteStream_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}




inline void NativeFileSystemFileHandle_Truncate_ResponseParamsDataView::GetResultDataView(
    ::blink::mojom::NativeFileSystemErrorDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::blink::mojom::NativeFileSystemErrorDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_PARAMS_DATA_H_