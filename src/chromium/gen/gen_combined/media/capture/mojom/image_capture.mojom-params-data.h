// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_PARAMS_DATA_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_PARAMS_DATA_H_

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
namespace media {
namespace mojom {
namespace internal {
class  ImageCapture_GetPhotoState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_GetPhotoState_Params_Data));
      new (data()) ImageCapture_GetPhotoState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_GetPhotoState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_GetPhotoState_Params_Data>(index_);
    }
    ImageCapture_GetPhotoState_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;

 private:
  ImageCapture_GetPhotoState_Params_Data();
  ~ImageCapture_GetPhotoState_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_GetPhotoState_Params_Data) == 16,
              "Bad sizeof(ImageCapture_GetPhotoState_Params_Data)");
class  ImageCapture_GetPhotoState_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_GetPhotoState_ResponseParams_Data));
      new (data()) ImageCapture_GetPhotoState_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_GetPhotoState_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_GetPhotoState_ResponseParams_Data>(index_);
    }
    ImageCapture_GetPhotoState_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PhotoState_Data> state;

 private:
  ImageCapture_GetPhotoState_ResponseParams_Data();
  ~ImageCapture_GetPhotoState_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_GetPhotoState_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_GetPhotoState_ResponseParams_Data)");
class  ImageCapture_SetOptions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_SetOptions_Params_Data));
      new (data()) ImageCapture_SetOptions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_SetOptions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_SetOptions_Params_Data>(index_);
    }
    ImageCapture_SetOptions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;
  mojo::internal::Pointer<internal::PhotoSettings_Data> settings;

 private:
  ImageCapture_SetOptions_Params_Data();
  ~ImageCapture_SetOptions_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_SetOptions_Params_Data) == 24,
              "Bad sizeof(ImageCapture_SetOptions_Params_Data)");
class  ImageCapture_SetOptions_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_SetOptions_ResponseParams_Data));
      new (data()) ImageCapture_SetOptions_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_SetOptions_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_SetOptions_ResponseParams_Data>(index_);
    }
    ImageCapture_SetOptions_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  ImageCapture_SetOptions_ResponseParams_Data();
  ~ImageCapture_SetOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_SetOptions_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_SetOptions_ResponseParams_Data)");
class  ImageCapture_TakePhoto_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_TakePhoto_Params_Data));
      new (data()) ImageCapture_TakePhoto_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_TakePhoto_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_TakePhoto_Params_Data>(index_);
    }
    ImageCapture_TakePhoto_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> source_id;

 private:
  ImageCapture_TakePhoto_Params_Data();
  ~ImageCapture_TakePhoto_Params_Data() = delete;
};
static_assert(sizeof(ImageCapture_TakePhoto_Params_Data) == 16,
              "Bad sizeof(ImageCapture_TakePhoto_Params_Data)");
class  ImageCapture_TakePhoto_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(ImageCapture_TakePhoto_ResponseParams_Data));
      new (data()) ImageCapture_TakePhoto_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    ImageCapture_TakePhoto_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<ImageCapture_TakePhoto_ResponseParams_Data>(index_);
    }
    ImageCapture_TakePhoto_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::Blob_Data> blob;

 private:
  ImageCapture_TakePhoto_ResponseParams_Data();
  ~ImageCapture_TakePhoto_ResponseParams_Data() = delete;
};
static_assert(sizeof(ImageCapture_TakePhoto_ResponseParams_Data) == 16,
              "Bad sizeof(ImageCapture_TakePhoto_ResponseParams_Data)");

}  // namespace internal
class ImageCapture_GetPhotoState_ParamsDataView {
 public:
  ImageCapture_GetPhotoState_ParamsDataView() {}

  ImageCapture_GetPhotoState_ParamsDataView(
      internal::ImageCapture_GetPhotoState_Params_Data* data,
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
 private:
  internal::ImageCapture_GetPhotoState_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageCapture_GetPhotoState_ResponseParamsDataView {
 public:
  ImageCapture_GetPhotoState_ResponseParamsDataView() {}

  ImageCapture_GetPhotoState_ResponseParamsDataView(
      internal::ImageCapture_GetPhotoState_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      PhotoStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_GetPhotoState_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageCapture_SetOptions_ParamsDataView {
 public:
  ImageCapture_SetOptions_ParamsDataView() {}

  ImageCapture_SetOptions_ParamsDataView(
      internal::ImageCapture_SetOptions_Params_Data* data,
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
  inline void GetSettingsDataView(
      PhotoSettingsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSettings(UserType* output) {
    auto* pointer = data_->settings.Get();
    return mojo::internal::Deserialize<::media::mojom::PhotoSettingsDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_SetOptions_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageCapture_SetOptions_ResponseParamsDataView {
 public:
  ImageCapture_SetOptions_ResponseParamsDataView() {}

  ImageCapture_SetOptions_ResponseParamsDataView(
      internal::ImageCapture_SetOptions_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::ImageCapture_SetOptions_ResponseParams_Data* data_ = nullptr;
};

class ImageCapture_TakePhoto_ParamsDataView {
 public:
  ImageCapture_TakePhoto_ParamsDataView() {}

  ImageCapture_TakePhoto_ParamsDataView(
      internal::ImageCapture_TakePhoto_Params_Data* data,
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
 private:
  internal::ImageCapture_TakePhoto_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ImageCapture_TakePhoto_ResponseParamsDataView {
 public:
  ImageCapture_TakePhoto_ResponseParamsDataView() {}

  ImageCapture_TakePhoto_ResponseParamsDataView(
      internal::ImageCapture_TakePhoto_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBlobDataView(
      BlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    auto* pointer = data_->blob.Get();
    return mojo::internal::Deserialize<::media::mojom::BlobDataView>(
        pointer, output, context_);
  }
 private:
  internal::ImageCapture_TakePhoto_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ImageCapture_GetPhotoState_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ImageCapture_GetPhotoState_ResponseParamsDataView::GetStateDataView(
    PhotoStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = PhotoStateDataView(pointer, context_);
}


inline void ImageCapture_SetOptions_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ImageCapture_SetOptions_ParamsDataView::GetSettingsDataView(
    PhotoSettingsDataView* output) {
  auto pointer = data_->settings.Get();
  *output = PhotoSettingsDataView(pointer, context_);
}




inline void ImageCapture_TakePhoto_ParamsDataView::GetSourceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->source_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void ImageCapture_TakePhoto_ResponseParamsDataView::GetBlobDataView(
    BlobDataView* output) {
  auto pointer = data_->blob.Get();
  *output = BlobDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_PARAMS_DATA_H_