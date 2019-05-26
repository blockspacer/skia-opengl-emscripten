// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_PARAMS_DATA_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_PARAMS_DATA_H_

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
namespace shape_detection {
namespace mojom {
namespace internal {
class  FaceDetection_Detect_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FaceDetection_Detect_Params_Data));
      new (data()) FaceDetection_Detect_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FaceDetection_Detect_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FaceDetection_Detect_Params_Data>(index_);
    }
    FaceDetection_Detect_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::skia::mojom::internal::Bitmap_Data> bitmap_data;

 private:
  FaceDetection_Detect_Params_Data();
  ~FaceDetection_Detect_Params_Data() = delete;
};
static_assert(sizeof(FaceDetection_Detect_Params_Data) == 16,
              "Bad sizeof(FaceDetection_Detect_Params_Data)");
class  FaceDetection_Detect_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FaceDetection_Detect_ResponseParams_Data));
      new (data()) FaceDetection_Detect_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FaceDetection_Detect_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FaceDetection_Detect_ResponseParams_Data>(index_);
    }
    FaceDetection_Detect_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FaceDetectionResult_Data>>> results;

 private:
  FaceDetection_Detect_ResponseParams_Data();
  ~FaceDetection_Detect_ResponseParams_Data() = delete;
};
static_assert(sizeof(FaceDetection_Detect_ResponseParams_Data) == 16,
              "Bad sizeof(FaceDetection_Detect_ResponseParams_Data)");

}  // namespace internal
class FaceDetection_Detect_ParamsDataView {
 public:
  FaceDetection_Detect_ParamsDataView() {}

  FaceDetection_Detect_ParamsDataView(
      internal::FaceDetection_Detect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBitmapDataDataView(
      ::skia::mojom::BitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmapData(UserType* output) {
    auto* pointer = data_->bitmap_data.Get();
    return mojo::internal::Deserialize<::skia::mojom::BitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::FaceDetection_Detect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FaceDetection_Detect_ResponseParamsDataView {
 public:
  FaceDetection_Detect_ResponseParamsDataView() {}

  FaceDetection_Detect_ResponseParamsDataView(
      internal::FaceDetection_Detect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<FaceDetectionResultDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResults(UserType* output) {
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::shape_detection::mojom::FaceDetectionResultDataView>>(
        pointer, output, context_);
  }
 private:
  internal::FaceDetection_Detect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FaceDetection_Detect_ParamsDataView::GetBitmapDataDataView(
    ::skia::mojom::BitmapDataView* output) {
  auto pointer = data_->bitmap_data.Get();
  *output = ::skia::mojom::BitmapDataView(pointer, context_);
}


inline void FaceDetection_Detect_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<FaceDetectionResultDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<FaceDetectionResultDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_MOJOM_PARAMS_DATA_H_