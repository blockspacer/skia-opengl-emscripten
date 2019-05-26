// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileChooser_OpenFileChooser_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileChooser_OpenFileChooser_Params_Data));
      new (data()) FileChooser_OpenFileChooser_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileChooser_OpenFileChooser_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileChooser_OpenFileChooser_Params_Data>(index_);
    }
    FileChooser_OpenFileChooser_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FileChooserParams_Data> params;

 private:
  FileChooser_OpenFileChooser_Params_Data();
  ~FileChooser_OpenFileChooser_Params_Data() = delete;
};
static_assert(sizeof(FileChooser_OpenFileChooser_Params_Data) == 16,
              "Bad sizeof(FileChooser_OpenFileChooser_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileChooser_OpenFileChooser_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileChooser_OpenFileChooser_ResponseParams_Data));
      new (data()) FileChooser_OpenFileChooser_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileChooser_OpenFileChooser_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileChooser_OpenFileChooser_ResponseParams_Data>(index_);
    }
    FileChooser_OpenFileChooser_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FileChooserResult_Data> result;

 private:
  FileChooser_OpenFileChooser_ResponseParams_Data();
  ~FileChooser_OpenFileChooser_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileChooser_OpenFileChooser_ResponseParams_Data) == 16,
              "Bad sizeof(FileChooser_OpenFileChooser_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileChooser_EnumerateChosenDirectory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileChooser_EnumerateChosenDirectory_Params_Data));
      new (data()) FileChooser_EnumerateChosenDirectory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileChooser_EnumerateChosenDirectory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileChooser_EnumerateChosenDirectory_Params_Data>(index_);
    }
    FileChooser_EnumerateChosenDirectory_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> directory_path;

 private:
  FileChooser_EnumerateChosenDirectory_Params_Data();
  ~FileChooser_EnumerateChosenDirectory_Params_Data() = delete;
};
static_assert(sizeof(FileChooser_EnumerateChosenDirectory_Params_Data) == 16,
              "Bad sizeof(FileChooser_EnumerateChosenDirectory_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) FileChooser_EnumerateChosenDirectory_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FileChooser_EnumerateChosenDirectory_ResponseParams_Data));
      new (data()) FileChooser_EnumerateChosenDirectory_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FileChooser_EnumerateChosenDirectory_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FileChooser_EnumerateChosenDirectory_ResponseParams_Data>(index_);
    }
    FileChooser_EnumerateChosenDirectory_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::FileChooserResult_Data> result;

 private:
  FileChooser_EnumerateChosenDirectory_ResponseParams_Data();
  ~FileChooser_EnumerateChosenDirectory_ResponseParams_Data() = delete;
};
static_assert(sizeof(FileChooser_EnumerateChosenDirectory_ResponseParams_Data) == 16,
              "Bad sizeof(FileChooser_EnumerateChosenDirectory_ResponseParams_Data)");

}  // namespace internal
class FileChooser_OpenFileChooser_ParamsDataView {
 public:
  FileChooser_OpenFileChooser_ParamsDataView() {}

  FileChooser_OpenFileChooser_ParamsDataView(
      internal::FileChooser_OpenFileChooser_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParamsDataView(
      FileChooserParamsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParams(UserType* output) {
    auto* pointer = data_->params.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileChooserParamsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooser_OpenFileChooser_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileChooser_OpenFileChooser_ResponseParamsDataView {
 public:
  FileChooser_OpenFileChooser_ResponseParamsDataView() {}

  FileChooser_OpenFileChooser_ResponseParamsDataView(
      internal::FileChooser_OpenFileChooser_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      FileChooserResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileChooserResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooser_OpenFileChooser_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileChooser_EnumerateChosenDirectory_ParamsDataView {
 public:
  FileChooser_EnumerateChosenDirectory_ParamsDataView() {}

  FileChooser_EnumerateChosenDirectory_ParamsDataView(
      internal::FileChooser_EnumerateChosenDirectory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDirectoryPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDirectoryPath(UserType* output) {
    auto* pointer = data_->directory_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooser_EnumerateChosenDirectory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileChooser_EnumerateChosenDirectory_ResponseParamsDataView {
 public:
  FileChooser_EnumerateChosenDirectory_ResponseParamsDataView() {}

  FileChooser_EnumerateChosenDirectory_ResponseParamsDataView(
      internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      FileChooserResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::blink::mojom::FileChooserResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooser_EnumerateChosenDirectory_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FileChooser_OpenFileChooser_ParamsDataView::GetParamsDataView(
    FileChooserParamsDataView* output) {
  auto pointer = data_->params.Get();
  *output = FileChooserParamsDataView(pointer, context_);
}


inline void FileChooser_OpenFileChooser_ResponseParamsDataView::GetResultDataView(
    FileChooserResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = FileChooserResultDataView(pointer, context_);
}


inline void FileChooser_EnumerateChosenDirectory_ParamsDataView::GetDirectoryPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->directory_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileChooser_EnumerateChosenDirectory_ResponseParamsDataView::GetResultDataView(
    FileChooserResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = FileChooserResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_PARAMS_DATA_H_