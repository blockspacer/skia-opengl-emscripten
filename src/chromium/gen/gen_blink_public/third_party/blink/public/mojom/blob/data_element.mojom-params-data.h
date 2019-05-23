// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BytesProvider_RequestAsReply_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BytesProvider_RequestAsReply_Params_Data));
      new (data()) BytesProvider_RequestAsReply_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BytesProvider_RequestAsReply_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BytesProvider_RequestAsReply_Params_Data>(index_);
    }
    BytesProvider_RequestAsReply_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BytesProvider_RequestAsReply_Params_Data();
  ~BytesProvider_RequestAsReply_Params_Data() = delete;
};
static_assert(sizeof(BytesProvider_RequestAsReply_Params_Data) == 8,
              "Bad sizeof(BytesProvider_RequestAsReply_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BytesProvider_RequestAsReply_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BytesProvider_RequestAsReply_ResponseParams_Data));
      new (data()) BytesProvider_RequestAsReply_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BytesProvider_RequestAsReply_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BytesProvider_RequestAsReply_ResponseParams_Data>(index_);
    }
    BytesProvider_RequestAsReply_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> data;

 private:
  BytesProvider_RequestAsReply_ResponseParams_Data();
  ~BytesProvider_RequestAsReply_ResponseParams_Data() = delete;
};
static_assert(sizeof(BytesProvider_RequestAsReply_ResponseParams_Data) == 16,
              "Bad sizeof(BytesProvider_RequestAsReply_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BytesProvider_RequestAsStream_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BytesProvider_RequestAsStream_Params_Data));
      new (data()) BytesProvider_RequestAsStream_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BytesProvider_RequestAsStream_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BytesProvider_RequestAsStream_Params_Data>(index_);
    }
    BytesProvider_RequestAsStream_Params_Data* operator->() { return data(); }

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
  BytesProvider_RequestAsStream_Params_Data();
  ~BytesProvider_RequestAsStream_Params_Data() = delete;
};
static_assert(sizeof(BytesProvider_RequestAsStream_Params_Data) == 16,
              "Bad sizeof(BytesProvider_RequestAsStream_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BytesProvider_RequestAsFile_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BytesProvider_RequestAsFile_Params_Data));
      new (data()) BytesProvider_RequestAsFile_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BytesProvider_RequestAsFile_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BytesProvider_RequestAsFile_Params_Data>(index_);
    }
    BytesProvider_RequestAsFile_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t source_offset;
  uint64_t source_size;
  mojo::internal::Pointer<::mojo_base::mojom::internal::File_Data> file;
  uint64_t file_offset;

 private:
  BytesProvider_RequestAsFile_Params_Data();
  ~BytesProvider_RequestAsFile_Params_Data() = delete;
};
static_assert(sizeof(BytesProvider_RequestAsFile_Params_Data) == 40,
              "Bad sizeof(BytesProvider_RequestAsFile_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) BytesProvider_RequestAsFile_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BytesProvider_RequestAsFile_ResponseParams_Data));
      new (data()) BytesProvider_RequestAsFile_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BytesProvider_RequestAsFile_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BytesProvider_RequestAsFile_ResponseParams_Data>(index_);
    }
    BytesProvider_RequestAsFile_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> time_file_modified;

 private:
  BytesProvider_RequestAsFile_ResponseParams_Data();
  ~BytesProvider_RequestAsFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(BytesProvider_RequestAsFile_ResponseParams_Data) == 16,
              "Bad sizeof(BytesProvider_RequestAsFile_ResponseParams_Data)");

}  // namespace internal
class BytesProvider_RequestAsReply_ParamsDataView {
 public:
  BytesProvider_RequestAsReply_ParamsDataView() {}

  BytesProvider_RequestAsReply_ParamsDataView(
      internal::BytesProvider_RequestAsReply_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BytesProvider_RequestAsReply_Params_Data* data_ = nullptr;
};

class BytesProvider_RequestAsReply_ResponseParamsDataView {
 public:
  BytesProvider_RequestAsReply_ResponseParamsDataView() {}

  BytesProvider_RequestAsReply_ResponseParamsDataView(
      internal::BytesProvider_RequestAsReply_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::BytesProvider_RequestAsReply_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BytesProvider_RequestAsStream_ParamsDataView {
 public:
  BytesProvider_RequestAsStream_ParamsDataView() {}

  BytesProvider_RequestAsStream_ParamsDataView(
      internal::BytesProvider_RequestAsStream_Params_Data* data,
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
  internal::BytesProvider_RequestAsStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BytesProvider_RequestAsFile_ParamsDataView {
 public:
  BytesProvider_RequestAsFile_ParamsDataView() {}

  BytesProvider_RequestAsFile_ParamsDataView(
      internal::BytesProvider_RequestAsFile_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t source_offset() const {
    return data_->source_offset;
  }
  uint64_t source_size() const {
    return data_->source_size;
  }
  inline void GetFileDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    auto* pointer = data_->file.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
  uint64_t file_offset() const {
    return data_->file_offset;
  }
 private:
  internal::BytesProvider_RequestAsFile_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BytesProvider_RequestAsFile_ResponseParamsDataView {
 public:
  BytesProvider_RequestAsFile_ResponseParamsDataView() {}

  BytesProvider_RequestAsFile_ResponseParamsDataView(
      internal::BytesProvider_RequestAsFile_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeFileModifiedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTimeFileModified(UserType* output) {
    auto* pointer = data_->time_file_modified.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::BytesProvider_RequestAsFile_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void BytesProvider_RequestAsReply_ResponseParamsDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}




inline void BytesProvider_RequestAsFile_ParamsDataView::GetFileDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}


inline void BytesProvider_RequestAsFile_ResponseParamsDataView::GetTimeFileModifiedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->time_file_modified.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_PARAMS_DATA_H_