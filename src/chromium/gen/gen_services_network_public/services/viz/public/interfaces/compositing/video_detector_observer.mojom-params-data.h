// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_PARAMS_DATA_H_

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
namespace viz {
namespace mojom {
namespace internal {
class  VideoDetectorObserver_OnVideoActivityStarted_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDetectorObserver_OnVideoActivityStarted_Params_Data));
      new (data()) VideoDetectorObserver_OnVideoActivityStarted_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDetectorObserver_OnVideoActivityStarted_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDetectorObserver_OnVideoActivityStarted_Params_Data>(index_);
    }
    VideoDetectorObserver_OnVideoActivityStarted_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDetectorObserver_OnVideoActivityStarted_Params_Data();
  ~VideoDetectorObserver_OnVideoActivityStarted_Params_Data() = delete;
};
static_assert(sizeof(VideoDetectorObserver_OnVideoActivityStarted_Params_Data) == 8,
              "Bad sizeof(VideoDetectorObserver_OnVideoActivityStarted_Params_Data)");
class  VideoDetectorObserver_OnVideoActivityEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoDetectorObserver_OnVideoActivityEnded_Params_Data));
      new (data()) VideoDetectorObserver_OnVideoActivityEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoDetectorObserver_OnVideoActivityEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoDetectorObserver_OnVideoActivityEnded_Params_Data>(index_);
    }
    VideoDetectorObserver_OnVideoActivityEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  VideoDetectorObserver_OnVideoActivityEnded_Params_Data();
  ~VideoDetectorObserver_OnVideoActivityEnded_Params_Data() = delete;
};
static_assert(sizeof(VideoDetectorObserver_OnVideoActivityEnded_Params_Data) == 8,
              "Bad sizeof(VideoDetectorObserver_OnVideoActivityEnded_Params_Data)");

}  // namespace internal
class VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView {
 public:
  VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView() {}

  VideoDetectorObserver_OnVideoActivityStarted_ParamsDataView(
      internal::VideoDetectorObserver_OnVideoActivityStarted_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDetectorObserver_OnVideoActivityStarted_Params_Data* data_ = nullptr;
};

class VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView {
 public:
  VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView() {}

  VideoDetectorObserver_OnVideoActivityEnded_ParamsDataView(
      internal::VideoDetectorObserver_OnVideoActivityEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDetectorObserver_OnVideoActivityEnded_Params_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_VIDEO_DETECTOR_OBSERVER_MOJOM_PARAMS_DATA_H_