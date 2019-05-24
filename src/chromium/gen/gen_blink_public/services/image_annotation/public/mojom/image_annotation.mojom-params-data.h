// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_PARAMS_DATA_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_PARAMS_DATA_H_

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
namespace image_annotation {
namespace mojom {
namespace internal {
class  ImageProcessor_GetJpgImageData_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageProcessor_GetJpgImageData_Params_Data));
      new (data()) ImageProcessor_GetJpgImageData_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageProcessor_GetJpgImageData_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageProcessor_GetJpgImageData_Params_Data>(index_);
    }
    ImageProcessor_GetJpgImageData_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  ImageProcessor_GetJpgImageData_Params_Data();
  ~ImageProcessor_GetJpgImageData_Params_Data() = delete;
};
static_assert(sizeof(ImageProcessor_GetJpgImageData_Params_Data) == 8,
              "Bad sizeof(ImageProcessor_GetJpgImageData_Params_Data)");
class  ImageProcessor_GetJpgImageData_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageProcessor_GetJpgImageData_ResponseParams_Data));
      new (data()) ImageProcessor_GetJpgImageData_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageProcessor_GetJpgImageData_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageProcessor_GetJpgImageData_ResponseParams_Data>(index_);
    }
    ImageProcessor_GetJpgImageData_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint8_t>> bytes;
  int32_t width;
  int32_t height;

 private:
  ImageProcessor_GetJpgImageData_ResponseParams_Data();
  ~ImageProcessor_GetJpgImageData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageProcessor_GetJpgImageData_ResponseParams_Data) == 24,
              "Bad sizeof(ImageProcessor_GetJpgImageData_ResponseParams_Data)");
class  Annotator_AnnotateImage_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Annotator_AnnotateImage_Params_Data));
      new (data()) Annotator_AnnotateImage_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Annotator_AnnotateImage_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Annotator_AnnotateImage_Params_Data>(index_);
    }
    Annotator_AnnotateImage_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;
  mojo::internal::Pointer<mojo::internal::String_Data> description_language_tag;
  mojo::internal::Interface_Data image_processor;

 private:
  Annotator_AnnotateImage_Params_Data();
  ~Annotator_AnnotateImage_Params_Data() = delete;
};
static_assert(sizeof(Annotator_AnnotateImage_Params_Data) == 32,
              "Bad sizeof(Annotator_AnnotateImage_Params_Data)");
class  Annotator_AnnotateImage_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Annotator_AnnotateImage_ResponseParams_Data));
      new (data()) Annotator_AnnotateImage_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Annotator_AnnotateImage_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Annotator_AnnotateImage_ResponseParams_Data>(index_);
    }
    Annotator_AnnotateImage_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::AnnotateImageResult_Data result;

 private:
  Annotator_AnnotateImage_ResponseParams_Data();
  ~Annotator_AnnotateImage_ResponseParams_Data() = delete;
};
static_assert(sizeof(Annotator_AnnotateImage_ResponseParams_Data) == 24,
              "Bad sizeof(Annotator_AnnotateImage_ResponseParams_Data)");

}  // namespace internal
class ImageProcessor_GetJpgImageData_ParamsDataView {
 public:
  ImageProcessor_GetJpgImageData_ParamsDataView() {}

  ImageProcessor_GetJpgImageData_ParamsDataView(
      internal::ImageProcessor_GetJpgImageData_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ImageProcessor_GetJpgImageData_Params_Data* data_ = nullptr;
};

class ImageProcessor_GetJpgImageData_ResponseParamsDataView {
 public:
  ImageProcessor_GetJpgImageData_ResponseParamsDataView() {}

  ImageProcessor_GetJpgImageData_ResponseParamsDataView(
      internal::ImageProcessor_GetJpgImageData_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBytesDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytes(UserType* output) {
    auto* pointer = data_->bytes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  int32_t width() const {
    return data_->width;
  }
  int32_t height() const {
    return data_->height;
  }
 private:
  internal::ImageProcessor_GetJpgImageData_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Annotator_AnnotateImage_ParamsDataView {
 public:
  Annotator_AnnotateImage_ParamsDataView() {}

  Annotator_AnnotateImage_ParamsDataView(
      internal::Annotator_AnnotateImage_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceId(UserType* output) {
    auto* pointer = data_->source_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionLanguageTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescriptionLanguageTag(UserType* output) {
    auto* pointer = data_->description_language_tag.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeImageProcessor() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::image_annotation::mojom::ImageProcessorPtrDataView>(
            &data_->image_processor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Annotator_AnnotateImage_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Annotator_AnnotateImage_ResponseParamsDataView {
 public:
  Annotator_AnnotateImage_ResponseParamsDataView() {}

  Annotator_AnnotateImage_ResponseParamsDataView(
      internal::Annotator_AnnotateImage_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      AnnotateImageResultDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResult(UserType* output) {
    auto* pointer = !data_->result.is_null() ? &data_->result : nullptr;
    return mojo::internal::Deserialize<::image_annotation::mojom::AnnotateImageResultDataView>(
        pointer, output, context_);
  }
 private:
  internal::Annotator_AnnotateImage_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




inline void ImageProcessor_GetJpgImageData_ResponseParamsDataView::GetBytesDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->bytes.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void Annotator_AnnotateImage_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void Annotator_AnnotateImage_ParamsDataView::GetDescriptionLanguageTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description_language_tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void Annotator_AnnotateImage_ResponseParamsDataView::GetResultDataView(
    AnnotateImageResultDataView* output) {
  auto pointer = &data_->result;
  *output = AnnotateImageResultDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace image_annotation

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_PARAMS_DATA_H_