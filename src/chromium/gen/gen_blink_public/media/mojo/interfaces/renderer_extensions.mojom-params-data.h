// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_PARAMS_DATA_H_

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
class  MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data));
      new (data()) MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data>(index_);
    }
    MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;

 private:
  MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data();
  ~MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data) == 16,
              "Bad sizeof(MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data)");
class  MediaPlayerRendererClientExtension_OnDurationChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaPlayerRendererClientExtension_OnDurationChange_Params_Data));
      new (data()) MediaPlayerRendererClientExtension_OnDurationChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaPlayerRendererClientExtension_OnDurationChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaPlayerRendererClientExtension_OnDurationChange_Params_Data>(index_);
    }
    MediaPlayerRendererClientExtension_OnDurationChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;

 private:
  MediaPlayerRendererClientExtension_OnDurationChange_Params_Data();
  ~MediaPlayerRendererClientExtension_OnDurationChange_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerRendererClientExtension_OnDurationChange_Params_Data) == 16,
              "Bad sizeof(MediaPlayerRendererClientExtension_OnDurationChange_Params_Data)");
class  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data));
      new (data()) MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data>(index_);
    }
    MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data();
  ~MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data) == 8,
              "Bad sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data)");
class  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data));
      new (data()) MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data>(index_);
    }
    MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> request_token;

 private:
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data();
  ~MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data) == 16,
              "Bad sizeof(MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data)");
class  FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data));
      new (data()) FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data>(index_);
    }
    FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t state;
  uint8_t padfinal_[4];

 private:
  FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data();
  ~FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data() = delete;
};
static_assert(sizeof(FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data) == 16,
              "Bad sizeof(FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data)");

}  // namespace internal
class MediaPlayerRendererClientExtension_OnVideoSizeChange_ParamsDataView {
 public:
  MediaPlayerRendererClientExtension_OnVideoSizeChange_ParamsDataView() {}

  MediaPlayerRendererClientExtension_OnVideoSizeChange_ParamsDataView(
      internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaPlayerRendererClientExtension_OnVideoSizeChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaPlayerRendererClientExtension_OnDurationChange_ParamsDataView {
 public:
  MediaPlayerRendererClientExtension_OnDurationChange_ParamsDataView() {}

  MediaPlayerRendererClientExtension_OnDurationChange_ParamsDataView(
      internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDurationDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDuration(UserType* output) {
    auto* pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaPlayerRendererClientExtension_OnDurationChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ParamsDataView {
 public:
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ParamsDataView() {}

  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ParamsDataView(
      internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_Params_Data* data_ = nullptr;
};

class MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParamsDataView {
 public:
  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParamsDataView() {}

  MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParamsDataView(
      internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestTokenDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestToken(UserType* output) {
    auto* pointer = data_->request_token.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FlingingRendererClientExtension_OnRemotePlayStateChange_ParamsDataView {
 public:
  FlingingRendererClientExtension_OnRemotePlayStateChange_ParamsDataView() {}

  FlingingRendererClientExtension_OnRemotePlayStateChange_ParamsDataView(
      internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media::mojom::MediaStatusState>(
        data_value, output);
  }

  ::media::mojom::MediaStatusState state() const {
    return static_cast<::media::mojom::MediaStatusState>(data_->state);
  }
 private:
  internal::FlingingRendererClientExtension_OnRemotePlayStateChange_Params_Data* data_ = nullptr;
};


inline void MediaPlayerRendererClientExtension_OnVideoSizeChange_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void MediaPlayerRendererClientExtension_OnDurationChange_ParamsDataView::GetDurationDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void MediaPlayerRendererExtension_InitiateScopedSurfaceRequest_ResponseParamsDataView::GetRequestTokenDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_token.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_PARAMS_DATA_H_