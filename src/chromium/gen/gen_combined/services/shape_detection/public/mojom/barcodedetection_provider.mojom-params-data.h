// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_

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
class  BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data));
      new (data()) BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data>(index_);
    }
    BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<internal::BarcodeDetectorOptions_Data> options;

 private:
  BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data();
  ~BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data() = delete;
};
static_assert(sizeof(BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data) == 24,
              "Bad sizeof(BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data)");
class  BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data));
      new (data()) BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data>(index_);
    }
    BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data();
  ~BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data() = delete;
};
static_assert(sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data) == 8,
              "Bad sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data)");
class  BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data));
      new (data()) BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data>(index_);
    }
    BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> supported_formats;

 private:
  BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data();
  ~BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data() = delete;
};
static_assert(sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data) == 16,
              "Bad sizeof(BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data)");

}  // namespace internal
class BarcodeDetectionProvider_CreateBarcodeDetection_ParamsDataView {
 public:
  BarcodeDetectionProvider_CreateBarcodeDetection_ParamsDataView() {}

  BarcodeDetectionProvider_CreateBarcodeDetection_ParamsDataView(
      internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::shape_detection::mojom::BarcodeDetectionRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetOptionsDataView(
      BarcodeDetectorOptionsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadOptions(UserType* output) {
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::shape_detection::mojom::BarcodeDetectorOptionsDataView>(
        pointer, output, context_);
  }
 private:
  internal::BarcodeDetectionProvider_CreateBarcodeDetection_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BarcodeDetectionProvider_EnumerateSupportedFormats_ParamsDataView {
 public:
  BarcodeDetectionProvider_EnumerateSupportedFormats_ParamsDataView() {}

  BarcodeDetectionProvider_EnumerateSupportedFormats_ParamsDataView(
      internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::BarcodeDetectionProvider_EnumerateSupportedFormats_Params_Data* data_ = nullptr;
};

class BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParamsDataView {
 public:
  BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParamsDataView() {}

  BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParamsDataView(
      internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedFormatsDataView(
      mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSupportedFormats(UserType* output) {
    auto* pointer = data_->supported_formats.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>>(
        pointer, output, context_);
  }
 private:
  internal::BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BarcodeDetectionProvider_CreateBarcodeDetection_ParamsDataView::GetOptionsDataView(
    BarcodeDetectorOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = BarcodeDetectorOptionsDataView(pointer, context_);
}




inline void BarcodeDetectionProvider_EnumerateSupportedFormats_ResponseParamsDataView::GetSupportedFormatsDataView(
    mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>* output) {
  auto pointer = data_->supported_formats.Get();
  *output = mojo::ArrayDataView<::shape_detection::mojom::BarcodeFormat>(pointer, context_);
}

}  // namespace mojom
}  // namespace shape_detection

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_BARCODEDETECTION_PROVIDER_MOJOM_PARAMS_DATA_H_