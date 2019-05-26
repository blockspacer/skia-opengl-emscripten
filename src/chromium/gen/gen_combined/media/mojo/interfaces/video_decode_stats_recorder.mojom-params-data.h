// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_

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
class  VideoDecodeStatsRecorder_StartNewRecord_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeStatsRecorder_StartNewRecord_Params_Data));
      new (data()) VideoDecodeStatsRecorder_StartNewRecord_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeStatsRecorder_StartNewRecord_Params_Data>(index_);
    }
    VideoDecodeStatsRecorder_StartNewRecord_Params_Data* operator->() { return data(); }

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
  VideoDecodeStatsRecorder_StartNewRecord_Params_Data();
  ~VideoDecodeStatsRecorder_StartNewRecord_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeStatsRecorder_StartNewRecord_Params_Data) == 16,
              "Bad sizeof(VideoDecodeStatsRecorder_StartNewRecord_Params_Data)");
class  VideoDecodeStatsRecorder_UpdateRecord_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDecodeStatsRecorder_UpdateRecord_Params_Data));
      new (data()) VideoDecodeStatsRecorder_UpdateRecord_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDecodeStatsRecorder_UpdateRecord_Params_Data>(index_);
    }
    VideoDecodeStatsRecorder_UpdateRecord_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PredictionTargets_Data> targets;

 private:
  VideoDecodeStatsRecorder_UpdateRecord_Params_Data();
  ~VideoDecodeStatsRecorder_UpdateRecord_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeStatsRecorder_UpdateRecord_Params_Data) == 16,
              "Bad sizeof(VideoDecodeStatsRecorder_UpdateRecord_Params_Data)");

}  // namespace internal
class VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView() {}

  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data,
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
  internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView() {}

  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetsDataView(
      ::media::mojom::PredictionTargetsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTargets(UserType* output) {
    auto* pointer = data_->targets.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionTargetsDataView>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView::GetFeaturesDataView(
    ::media::mojom::PredictionFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::media::mojom::PredictionFeaturesDataView(pointer, context_);
}


inline void VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView::GetTargetsDataView(
    ::media::mojom::PredictionTargetsDataView* output) {
  auto pointer = data_->targets.Get();
  *output = ::media::mojom::PredictionTargetsDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_