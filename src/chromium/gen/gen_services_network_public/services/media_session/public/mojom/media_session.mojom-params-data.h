// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_

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
namespace media_session {
namespace mojom {
namespace internal {
class  MediaSessionObserver_MediaSessionInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionObserver_MediaSessionInfoChanged_Params_Data));
      new (data()) MediaSessionObserver_MediaSessionInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionObserver_MediaSessionInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionObserver_MediaSessionInfoChanged_Params_Data>(index_);
    }
    MediaSessionObserver_MediaSessionInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaSessionInfo_Data> info;

 private:
  MediaSessionObserver_MediaSessionInfoChanged_Params_Data();
  ~MediaSessionObserver_MediaSessionInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionObserver_MediaSessionInfoChanged_Params_Data) == 16,
              "Bad sizeof(MediaSessionObserver_MediaSessionInfoChanged_Params_Data)");
class  MediaSessionObserver_MediaSessionMetadataChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionObserver_MediaSessionMetadataChanged_Params_Data));
      new (data()) MediaSessionObserver_MediaSessionMetadataChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionObserver_MediaSessionMetadataChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionObserver_MediaSessionMetadataChanged_Params_Data>(index_);
    }
    MediaSessionObserver_MediaSessionMetadataChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaMetadata_Data> metadata;

 private:
  MediaSessionObserver_MediaSessionMetadataChanged_Params_Data();
  ~MediaSessionObserver_MediaSessionMetadataChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionObserver_MediaSessionMetadataChanged_Params_Data) == 16,
              "Bad sizeof(MediaSessionObserver_MediaSessionMetadataChanged_Params_Data)");
class  MediaSessionObserver_MediaSessionActionsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionObserver_MediaSessionActionsChanged_Params_Data));
      new (data()) MediaSessionObserver_MediaSessionActionsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionObserver_MediaSessionActionsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionObserver_MediaSessionActionsChanged_Params_Data>(index_);
    }
    MediaSessionObserver_MediaSessionActionsChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> action;

 private:
  MediaSessionObserver_MediaSessionActionsChanged_Params_Data();
  ~MediaSessionObserver_MediaSessionActionsChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionObserver_MediaSessionActionsChanged_Params_Data) == 16,
              "Bad sizeof(MediaSessionObserver_MediaSessionActionsChanged_Params_Data)");
class  MediaSessionObserver_MediaSessionImagesChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionObserver_MediaSessionImagesChanged_Params_Data));
      new (data()) MediaSessionObserver_MediaSessionImagesChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionObserver_MediaSessionImagesChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionObserver_MediaSessionImagesChanged_Params_Data>(index_);
    }
    MediaSessionObserver_MediaSessionImagesChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Map_Data<int32_t, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::MediaImage_Data>>>>> images;

 private:
  MediaSessionObserver_MediaSessionImagesChanged_Params_Data();
  ~MediaSessionObserver_MediaSessionImagesChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionObserver_MediaSessionImagesChanged_Params_Data) == 16,
              "Bad sizeof(MediaSessionObserver_MediaSessionImagesChanged_Params_Data)");
class  MediaSession_GetMediaSessionInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetMediaSessionInfo_Params_Data));
      new (data()) MediaSession_GetMediaSessionInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetMediaSessionInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetMediaSessionInfo_Params_Data>(index_);
    }
    MediaSession_GetMediaSessionInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_GetMediaSessionInfo_Params_Data();
  ~MediaSession_GetMediaSessionInfo_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_GetMediaSessionInfo_Params_Data) == 8,
              "Bad sizeof(MediaSession_GetMediaSessionInfo_Params_Data)");
class  MediaSession_GetMediaSessionInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetMediaSessionInfo_ResponseParams_Data));
      new (data()) MediaSession_GetMediaSessionInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetMediaSessionInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetMediaSessionInfo_ResponseParams_Data>(index_);
    }
    MediaSession_GetMediaSessionInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaSessionInfo_Data> info;

 private:
  MediaSession_GetMediaSessionInfo_ResponseParams_Data();
  ~MediaSession_GetMediaSessionInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaSession_GetMediaSessionInfo_ResponseParams_Data) == 16,
              "Bad sizeof(MediaSession_GetMediaSessionInfo_ResponseParams_Data)");
class  MediaSession_GetDebugInfo_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetDebugInfo_Params_Data));
      new (data()) MediaSession_GetDebugInfo_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetDebugInfo_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetDebugInfo_Params_Data>(index_);
    }
    MediaSession_GetDebugInfo_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_GetDebugInfo_Params_Data();
  ~MediaSession_GetDebugInfo_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_GetDebugInfo_Params_Data) == 8,
              "Bad sizeof(MediaSession_GetDebugInfo_Params_Data)");
class  MediaSession_GetDebugInfo_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetDebugInfo_ResponseParams_Data));
      new (data()) MediaSession_GetDebugInfo_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetDebugInfo_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetDebugInfo_ResponseParams_Data>(index_);
    }
    MediaSession_GetDebugInfo_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaSessionDebugInfo_Data> info;

 private:
  MediaSession_GetDebugInfo_ResponseParams_Data();
  ~MediaSession_GetDebugInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaSession_GetDebugInfo_ResponseParams_Data) == 16,
              "Bad sizeof(MediaSession_GetDebugInfo_ResponseParams_Data)");
class  MediaSession_StartDucking_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_StartDucking_Params_Data));
      new (data()) MediaSession_StartDucking_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_StartDucking_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_StartDucking_Params_Data>(index_);
    }
    MediaSession_StartDucking_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_StartDucking_Params_Data();
  ~MediaSession_StartDucking_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_StartDucking_Params_Data) == 8,
              "Bad sizeof(MediaSession_StartDucking_Params_Data)");
class  MediaSession_StopDucking_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_StopDucking_Params_Data));
      new (data()) MediaSession_StopDucking_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_StopDucking_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_StopDucking_Params_Data>(index_);
    }
    MediaSession_StopDucking_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_StopDucking_Params_Data();
  ~MediaSession_StopDucking_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_StopDucking_Params_Data) == 8,
              "Bad sizeof(MediaSession_StopDucking_Params_Data)");
class  MediaSession_Suspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_Suspend_Params_Data));
      new (data()) MediaSession_Suspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_Suspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_Suspend_Params_Data>(index_);
    }
    MediaSession_Suspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t suspend_type;
  uint8_t padfinal_[4];

 private:
  MediaSession_Suspend_Params_Data();
  ~MediaSession_Suspend_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_Suspend_Params_Data) == 16,
              "Bad sizeof(MediaSession_Suspend_Params_Data)");
class  MediaSession_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_Resume_Params_Data));
      new (data()) MediaSession_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_Resume_Params_Data>(index_);
    }
    MediaSession_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t suspend_type;
  uint8_t padfinal_[4];

 private:
  MediaSession_Resume_Params_Data();
  ~MediaSession_Resume_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_Resume_Params_Data) == 16,
              "Bad sizeof(MediaSession_Resume_Params_Data)");
class  MediaSession_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_AddObserver_Params_Data));
      new (data()) MediaSession_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_AddObserver_Params_Data>(index_);
    }
    MediaSession_AddObserver_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data observer;

 private:
  MediaSession_AddObserver_Params_Data();
  ~MediaSession_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_AddObserver_Params_Data) == 16,
              "Bad sizeof(MediaSession_AddObserver_Params_Data)");
class  MediaSession_PreviousTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_PreviousTrack_Params_Data));
      new (data()) MediaSession_PreviousTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_PreviousTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_PreviousTrack_Params_Data>(index_);
    }
    MediaSession_PreviousTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_PreviousTrack_Params_Data();
  ~MediaSession_PreviousTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_PreviousTrack_Params_Data) == 8,
              "Bad sizeof(MediaSession_PreviousTrack_Params_Data)");
class  MediaSession_NextTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_NextTrack_Params_Data));
      new (data()) MediaSession_NextTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_NextTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_NextTrack_Params_Data>(index_);
    }
    MediaSession_NextTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_NextTrack_Params_Data();
  ~MediaSession_NextTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_NextTrack_Params_Data) == 8,
              "Bad sizeof(MediaSession_NextTrack_Params_Data)");
class  MediaSession_Seek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_Seek_Params_Data));
      new (data()) MediaSession_Seek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_Seek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_Seek_Params_Data>(index_);
    }
    MediaSession_Seek_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> seek_time;

 private:
  MediaSession_Seek_Params_Data();
  ~MediaSession_Seek_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_Seek_Params_Data) == 16,
              "Bad sizeof(MediaSession_Seek_Params_Data)");
class  MediaSession_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_Stop_Params_Data));
      new (data()) MediaSession_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_Stop_Params_Data>(index_);
    }
    MediaSession_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t suspend_type;
  uint8_t padfinal_[4];

 private:
  MediaSession_Stop_Params_Data();
  ~MediaSession_Stop_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_Stop_Params_Data) == 16,
              "Bad sizeof(MediaSession_Stop_Params_Data)");
class  MediaSession_SkipAd_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_SkipAd_Params_Data));
      new (data()) MediaSession_SkipAd_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_SkipAd_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_SkipAd_Params_Data>(index_);
    }
    MediaSession_SkipAd_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaSession_SkipAd_Params_Data();
  ~MediaSession_SkipAd_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_SkipAd_Params_Data) == 8,
              "Bad sizeof(MediaSession_SkipAd_Params_Data)");
class  MediaSession_GetMediaImageBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetMediaImageBitmap_Params_Data));
      new (data()) MediaSession_GetMediaImageBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetMediaImageBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetMediaImageBitmap_Params_Data>(index_);
    }
    MediaSession_GetMediaImageBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaImage_Data> image;
  int32_t minimum_size_px;
  int32_t desired_size_px;

 private:
  MediaSession_GetMediaImageBitmap_Params_Data();
  ~MediaSession_GetMediaImageBitmap_Params_Data() = delete;
};
static_assert(sizeof(MediaSession_GetMediaImageBitmap_Params_Data) == 24,
              "Bad sizeof(MediaSession_GetMediaImageBitmap_Params_Data)");
class  MediaSession_GetMediaImageBitmap_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSession_GetMediaImageBitmap_ResponseParams_Data));
      new (data()) MediaSession_GetMediaImageBitmap_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSession_GetMediaImageBitmap_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSession_GetMediaImageBitmap_ResponseParams_Data>(index_);
    }
    MediaSession_GetMediaImageBitmap_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::MediaImageBitmap_Data> image;

 private:
  MediaSession_GetMediaImageBitmap_ResponseParams_Data();
  ~MediaSession_GetMediaImageBitmap_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaSession_GetMediaImageBitmap_ResponseParams_Data) == 16,
              "Bad sizeof(MediaSession_GetMediaImageBitmap_ResponseParams_Data)");

}  // namespace internal
class MediaSessionObserver_MediaSessionInfoChanged_ParamsDataView {
 public:
  MediaSessionObserver_MediaSessionInfoChanged_ParamsDataView() {}

  MediaSessionObserver_MediaSessionInfoChanged_ParamsDataView(
      internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionObserver_MediaSessionInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionObserver_MediaSessionMetadataChanged_ParamsDataView {
 public:
  MediaSessionObserver_MediaSessionMetadataChanged_ParamsDataView() {}

  MediaSessionObserver_MediaSessionMetadataChanged_ParamsDataView(
      internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      MediaMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionObserver_MediaSessionMetadataChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionObserver_MediaSessionActionsChanged_ParamsDataView {
 public:
  MediaSessionObserver_MediaSessionActionsChanged_ParamsDataView() {}

  MediaSessionObserver_MediaSessionActionsChanged_ParamsDataView(
      internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetActionDataView(
      mojo::ArrayDataView<MediaSessionAction>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionObserver_MediaSessionActionsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionObserver_MediaSessionImagesChanged_ParamsDataView {
 public:
  MediaSessionObserver_MediaSessionImagesChanged_ParamsDataView() {}

  MediaSessionObserver_MediaSessionImagesChanged_ParamsDataView(
      internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImagesDataView(
      mojo::MapDataView<MediaSessionImageType, mojo::ArrayDataView<MediaImageDataView>>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImages(UserType* output) {
    auto* pointer = data_->images.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::media_session::mojom::MediaSessionImageType, mojo::ArrayDataView<::media_session::mojom::MediaImageDataView>>>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionObserver_MediaSessionImagesChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_GetMediaSessionInfo_ParamsDataView {
 public:
  MediaSession_GetMediaSessionInfo_ParamsDataView() {}

  MediaSession_GetMediaSessionInfo_ParamsDataView(
      internal::MediaSession_GetMediaSessionInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_GetMediaSessionInfo_Params_Data* data_ = nullptr;
};

class MediaSession_GetMediaSessionInfo_ResponseParamsDataView {
 public:
  MediaSession_GetMediaSessionInfo_ResponseParamsDataView() {}

  MediaSession_GetMediaSessionInfo_ResponseParamsDataView(
      internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSession_GetMediaSessionInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_GetDebugInfo_ParamsDataView {
 public:
  MediaSession_GetDebugInfo_ParamsDataView() {}

  MediaSession_GetDebugInfo_ParamsDataView(
      internal::MediaSession_GetDebugInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_GetDebugInfo_Params_Data* data_ = nullptr;
};

class MediaSession_GetDebugInfo_ResponseParamsDataView {
 public:
  MediaSession_GetDebugInfo_ResponseParamsDataView() {}

  MediaSession_GetDebugInfo_ResponseParamsDataView(
      internal::MediaSession_GetDebugInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      MediaSessionDebugInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionDebugInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSession_GetDebugInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_StartDucking_ParamsDataView {
 public:
  MediaSession_StartDucking_ParamsDataView() {}

  MediaSession_StartDucking_ParamsDataView(
      internal::MediaSession_StartDucking_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_StartDucking_Params_Data* data_ = nullptr;
};

class MediaSession_StopDucking_ParamsDataView {
 public:
  MediaSession_StopDucking_ParamsDataView() {}

  MediaSession_StopDucking_ParamsDataView(
      internal::MediaSession_StopDucking_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_StopDucking_Params_Data* data_ = nullptr;
};

class MediaSession_Suspend_ParamsDataView {
 public:
  MediaSession_Suspend_ParamsDataView() {}

  MediaSession_Suspend_ParamsDataView(
      internal::MediaSession_Suspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuspendType(UserType* output) const {
    auto data_value = data_->suspend_type;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSession_SuspendType>(
        data_value, output);
  }

  MediaSession_SuspendType suspend_type() const {
    return static_cast<MediaSession_SuspendType>(data_->suspend_type);
  }
 private:
  internal::MediaSession_Suspend_Params_Data* data_ = nullptr;
};

class MediaSession_Resume_ParamsDataView {
 public:
  MediaSession_Resume_ParamsDataView() {}

  MediaSession_Resume_ParamsDataView(
      internal::MediaSession_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuspendType(UserType* output) const {
    auto data_value = data_->suspend_type;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSession_SuspendType>(
        data_value, output);
  }

  MediaSession_SuspendType suspend_type() const {
    return static_cast<MediaSession_SuspendType>(data_->suspend_type);
  }
 private:
  internal::MediaSession_Resume_Params_Data* data_ = nullptr;
};

class MediaSession_AddObserver_ParamsDataView {
 public:
  MediaSession_AddObserver_ParamsDataView() {}

  MediaSession_AddObserver_ParamsDataView(
      internal::MediaSession_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaSessionObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaSession_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_PreviousTrack_ParamsDataView {
 public:
  MediaSession_PreviousTrack_ParamsDataView() {}

  MediaSession_PreviousTrack_ParamsDataView(
      internal::MediaSession_PreviousTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_PreviousTrack_Params_Data* data_ = nullptr;
};

class MediaSession_NextTrack_ParamsDataView {
 public:
  MediaSession_NextTrack_ParamsDataView() {}

  MediaSession_NextTrack_ParamsDataView(
      internal::MediaSession_NextTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_NextTrack_Params_Data* data_ = nullptr;
};

class MediaSession_Seek_ParamsDataView {
 public:
  MediaSession_Seek_ParamsDataView() {}

  MediaSession_Seek_ParamsDataView(
      internal::MediaSession_Seek_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSeekTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSeekTime(UserType* output) {
    auto* pointer = data_->seek_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSession_Seek_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_Stop_ParamsDataView {
 public:
  MediaSession_Stop_ParamsDataView() {}

  MediaSession_Stop_ParamsDataView(
      internal::MediaSession_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSuspendType(UserType* output) const {
    auto data_value = data_->suspend_type;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSession_SuspendType>(
        data_value, output);
  }

  MediaSession_SuspendType suspend_type() const {
    return static_cast<MediaSession_SuspendType>(data_->suspend_type);
  }
 private:
  internal::MediaSession_Stop_Params_Data* data_ = nullptr;
};

class MediaSession_SkipAd_ParamsDataView {
 public:
  MediaSession_SkipAd_ParamsDataView() {}

  MediaSession_SkipAd_ParamsDataView(
      internal::MediaSession_SkipAd_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaSession_SkipAd_Params_Data* data_ = nullptr;
};

class MediaSession_GetMediaImageBitmap_ParamsDataView {
 public:
  MediaSession_GetMediaImageBitmap_ParamsDataView() {}

  MediaSession_GetMediaImageBitmap_ParamsDataView(
      internal::MediaSession_GetMediaImageBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      MediaImageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaImageDataView>(
        pointer, output, context_);
  }
  int32_t minimum_size_px() const {
    return data_->minimum_size_px;
  }
  int32_t desired_size_px() const {
    return data_->desired_size_px;
  }
 private:
  internal::MediaSession_GetMediaImageBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSession_GetMediaImageBitmap_ResponseParamsDataView {
 public:
  MediaSession_GetMediaImageBitmap_ResponseParamsDataView() {}

  MediaSession_GetMediaImageBitmap_ResponseParamsDataView(
      internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImageDataView(
      MediaImageBitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImage(UserType* output) {
    auto* pointer = data_->image.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaImageBitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSession_GetMediaImageBitmap_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MediaSessionObserver_MediaSessionInfoChanged_ParamsDataView::GetInfoDataView(
    MediaSessionInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = MediaSessionInfoDataView(pointer, context_);
}


inline void MediaSessionObserver_MediaSessionMetadataChanged_ParamsDataView::GetMetadataDataView(
    MediaMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = MediaMetadataDataView(pointer, context_);
}


inline void MediaSessionObserver_MediaSessionActionsChanged_ParamsDataView::GetActionDataView(
    mojo::ArrayDataView<MediaSessionAction>* output) {
  auto pointer = data_->action.Get();
  *output = mojo::ArrayDataView<MediaSessionAction>(pointer, context_);
}


inline void MediaSessionObserver_MediaSessionImagesChanged_ParamsDataView::GetImagesDataView(
    mojo::MapDataView<MediaSessionImageType, mojo::ArrayDataView<MediaImageDataView>>* output) {
  auto pointer = data_->images.Get();
  *output = mojo::MapDataView<MediaSessionImageType, mojo::ArrayDataView<MediaImageDataView>>(pointer, context_);
}




inline void MediaSession_GetMediaSessionInfo_ResponseParamsDataView::GetInfoDataView(
    MediaSessionInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = MediaSessionInfoDataView(pointer, context_);
}




inline void MediaSession_GetDebugInfo_ResponseParamsDataView::GetInfoDataView(
    MediaSessionDebugInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = MediaSessionDebugInfoDataView(pointer, context_);
}
















inline void MediaSession_Seek_ParamsDataView::GetSeekTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}






inline void MediaSession_GetMediaImageBitmap_ParamsDataView::GetImageDataView(
    MediaImageDataView* output) {
  auto pointer = data_->image.Get();
  *output = MediaImageDataView(pointer, context_);
}


inline void MediaSession_GetMediaImageBitmap_ResponseParamsDataView::GetImageDataView(
    MediaImageBitmapDataView* output) {
  auto pointer = data_->image.Get();
  *output = MediaImageBitmapDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_