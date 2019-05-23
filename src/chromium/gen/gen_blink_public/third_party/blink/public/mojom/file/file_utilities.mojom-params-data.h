// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileUtilitiesHost_GetFileInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileUtilitiesHost_GetFileInfo_Params_Data));
      new (data()) FileUtilitiesHost_GetFileInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileUtilitiesHost_GetFileInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileUtilitiesHost_GetFileInfo_Params_Data>(index_);
    }
    FileUtilitiesHost_GetFileInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;

 private:
  FileUtilitiesHost_GetFileInfo_Params_Data();
  ~FileUtilitiesHost_GetFileInfo_Params_Data() = delete;
};
static_assert(sizeof(FileUtilitiesHost_GetFileInfo_Params_Data) == 16,
              "Bad sizeof(FileUtilitiesHost_GetFileInfo_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileUtilitiesHost_GetFileInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileUtilitiesHost_GetFileInfo_ResponseParams_Data));
      new (data()) FileUtilitiesHost_GetFileInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileUtilitiesHost_GetFileInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileUtilitiesHost_GetFileInfo_ResponseParams_Data>(index_);
    }
    FileUtilitiesHost_GetFileInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FileInfo_Data> result;

 private:
  FileUtilitiesHost_GetFileInfo_ResponseParams_Data();
  ~FileUtilitiesHost_GetFileInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileUtilitiesHost_GetFileInfo_ResponseParams_Data) == 16,
              "Bad sizeof(FileUtilitiesHost_GetFileInfo_ResponseParams_Data)");

}  // namespace internal
class FileUtilitiesHost_GetFileInfo_ParamsDataView {
 public:
  FileUtilitiesHost_GetFileInfo_ParamsDataView() {}

  FileUtilitiesHost_GetFileInfo_ParamsDataView(
      internal::FileUtilitiesHost_GetFileInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileUtilitiesHost_GetFileInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileUtilitiesHost_GetFileInfo_ResponseParamsDataView {
 public:
  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView() {}

  FileUtilitiesHost_GetFileInfo_ResponseParamsDataView(
      internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::mojo_base::mojom::FileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileUtilitiesHost_GetFileInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FileUtilitiesHost_GetFileInfo_ParamsDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileUtilitiesHost_GetFileInfo_ResponseParamsDataView::GetResultDataView(
    ::mojo_base::mojom::FileInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::mojo_base::mojom::FileInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_PARAMS_DATA_H_