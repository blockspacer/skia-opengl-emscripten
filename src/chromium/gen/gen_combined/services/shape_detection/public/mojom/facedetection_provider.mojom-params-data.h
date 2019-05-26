// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_

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
class  FaceDetectionProvider_CreateFaceDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data));
      new (data()) FaceDetectionProvider_CreateFaceDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FaceDetectionProvider_CreateFaceDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FaceDetectionProvider_CreateFaceDetection_Params_Data>(index_);
    }
    FaceDetectionProvider_CreateFaceDetection_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::shape_detection::mojom::internal::FaceDetectorOptions_Data> options;

 private:
  FaceDetectionProvider_CreateFaceDetection_Params_Data();
  ~FaceDetectionProvider_CreateFaceDetection_Params_Data() = delete;
};
static_assert(sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data) == 24,
              "Bad sizeof(FaceDetectionProvider_CreateFaceDetection_Params_Data)");

}  // namespace internal
class FaceDetectionProvider_CreateFaceDetection_ParamsDataView {
 public:
  FaceDetectionProvider_CreateFaceDetection_ParamsDataView() {}

  FaceDetectionProvider_CreateFaceDetection_ParamsDataView(
      internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::shape_detection::mojom::FaceDetectionRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOptionsDataView(
      ::shape_detection::mojom::FaceDetectorOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::shape_detection::mojom::FaceDetectorOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void FaceDetectionProvider_CreateFaceDetection_ParamsDataView::GetOptionsDataView(
    ::shape_detection::mojom::FaceDetectorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = ::shape_detection::mojom::FaceDetectorOptionsDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_