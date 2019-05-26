// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_PARAMS_DATA_H_

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
class  VideoDecodePerfHistory_GetPerfInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data));
      new (data()) VideoDecodePerfHistory_GetPerfInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodePerfHistory_GetPerfInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodePerfHistory_GetPerfInfo_Params_Data>(index_);
    }
    VideoDecodePerfHistory_GetPerfInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PredictionFeatures_Data> features;

 private:
  VideoDecodePerfHistory_GetPerfInfo_Params_Data();
  ~VideoDecodePerfHistory_GetPerfInfo_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data) == 16,
              "Bad sizeof(VideoDecodePerfHistory_GetPerfInfo_Params_Data)");
class  VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data));
      new (data()) VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data>(index_);
    }
    VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_smooth : 1;
  uint8_t is_power_efficient : 1;
  uint8_t padfinal_[7];

 private:
  VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data();
  ~VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data) == 16,
              "Bad sizeof(VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data)");

}  // namespace internal
class VideoDecodePerfHistory_GetPerfInfo_ParamsDataView {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ParamsDataView() {}

  VideoDecodePerfHistory_GetPerfInfo_ParamsDataView(
      internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      ::media::mojom::PredictionFeaturesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFeatures(UserType* output) {
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionFeaturesDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodePerfHistory_GetPerfInfo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView {
 public:
  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView() {}

  VideoDecodePerfHistory_GetPerfInfo_ResponseParamsDataView(
      internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool is_smooth() const {
    return data_->is_smooth;
  }
  bool is_power_efficient() const {
    return data_->is_power_efficient;
  }
 private:
  internal::VideoDecodePerfHistory_GetPerfInfo_ResponseParams_Data* data_ = nullptr;
};


inline void VideoDecodePerfHistory_GetPerfInfo_ParamsDataView::GetFeaturesDataView(
    ::media::mojom::PredictionFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::media::mojom::PredictionFeaturesDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_PERF_HISTORY_MOJOM_PARAMS_DATA_H_