// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_PARAMS_DATA_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_PARAMS_DATA_H_

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
class  MediaControllerManager_CreateMediaControllerForSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerManager_CreateMediaControllerForSession_Params_Data));
      new (data()) MediaControllerManager_CreateMediaControllerForSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerManager_CreateMediaControllerForSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerManager_CreateMediaControllerForSession_Params_Data>(index_);
    }
    MediaControllerManager_CreateMediaControllerForSession_Params_Data* operator->() { return data(); }

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
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> request_id;

 private:
  MediaControllerManager_CreateMediaControllerForSession_Params_Data();
  ~MediaControllerManager_CreateMediaControllerForSession_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerManager_CreateMediaControllerForSession_Params_Data) == 24,
              "Bad sizeof(MediaControllerManager_CreateMediaControllerForSession_Params_Data)");
class  MediaControllerManager_CreateActiveMediaController_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerManager_CreateActiveMediaController_Params_Data));
      new (data()) MediaControllerManager_CreateActiveMediaController_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerManager_CreateActiveMediaController_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerManager_CreateActiveMediaController_Params_Data>(index_);
    }
    MediaControllerManager_CreateActiveMediaController_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data request;
  uint8_t padfinal_[4];

 private:
  MediaControllerManager_CreateActiveMediaController_Params_Data();
  ~MediaControllerManager_CreateActiveMediaController_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerManager_CreateActiveMediaController_Params_Data) == 16,
              "Bad sizeof(MediaControllerManager_CreateActiveMediaController_Params_Data)");
class  MediaControllerManager_SuspendAllSessions_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerManager_SuspendAllSessions_Params_Data));
      new (data()) MediaControllerManager_SuspendAllSessions_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerManager_SuspendAllSessions_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerManager_SuspendAllSessions_Params_Data>(index_);
    }
    MediaControllerManager_SuspendAllSessions_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaControllerManager_SuspendAllSessions_Params_Data();
  ~MediaControllerManager_SuspendAllSessions_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerManager_SuspendAllSessions_Params_Data) == 8,
              "Bad sizeof(MediaControllerManager_SuspendAllSessions_Params_Data)");
class  MediaController_Suspend_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Suspend_Params_Data));
      new (data()) MediaController_Suspend_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Suspend_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Suspend_Params_Data>(index_);
    }
    MediaController_Suspend_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_Suspend_Params_Data();
  ~MediaController_Suspend_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Suspend_Params_Data) == 8,
              "Bad sizeof(MediaController_Suspend_Params_Data)");
class  MediaController_Resume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Resume_Params_Data));
      new (data()) MediaController_Resume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Resume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Resume_Params_Data>(index_);
    }
    MediaController_Resume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_Resume_Params_Data();
  ~MediaController_Resume_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Resume_Params_Data) == 8,
              "Bad sizeof(MediaController_Resume_Params_Data)");
class  MediaController_Stop_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Stop_Params_Data));
      new (data()) MediaController_Stop_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Stop_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Stop_Params_Data>(index_);
    }
    MediaController_Stop_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_Stop_Params_Data();
  ~MediaController_Stop_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Stop_Params_Data) == 8,
              "Bad sizeof(MediaController_Stop_Params_Data)");
class  MediaController_ToggleSuspendResume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_ToggleSuspendResume_Params_Data));
      new (data()) MediaController_ToggleSuspendResume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_ToggleSuspendResume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_ToggleSuspendResume_Params_Data>(index_);
    }
    MediaController_ToggleSuspendResume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_ToggleSuspendResume_Params_Data();
  ~MediaController_ToggleSuspendResume_Params_Data() = delete;
};
static_assert(sizeof(MediaController_ToggleSuspendResume_Params_Data) == 8,
              "Bad sizeof(MediaController_ToggleSuspendResume_Params_Data)");
class  MediaController_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_AddObserver_Params_Data));
      new (data()) MediaController_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_AddObserver_Params_Data>(index_);
    }
    MediaController_AddObserver_Params_Data* operator->() { return data(); }

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
  MediaController_AddObserver_Params_Data();
  ~MediaController_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(MediaController_AddObserver_Params_Data) == 16,
              "Bad sizeof(MediaController_AddObserver_Params_Data)");
class  MediaController_PreviousTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_PreviousTrack_Params_Data));
      new (data()) MediaController_PreviousTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_PreviousTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_PreviousTrack_Params_Data>(index_);
    }
    MediaController_PreviousTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_PreviousTrack_Params_Data();
  ~MediaController_PreviousTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaController_PreviousTrack_Params_Data) == 8,
              "Bad sizeof(MediaController_PreviousTrack_Params_Data)");
class  MediaController_NextTrack_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_NextTrack_Params_Data));
      new (data()) MediaController_NextTrack_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_NextTrack_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_NextTrack_Params_Data>(index_);
    }
    MediaController_NextTrack_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  MediaController_NextTrack_Params_Data();
  ~MediaController_NextTrack_Params_Data() = delete;
};
static_assert(sizeof(MediaController_NextTrack_Params_Data) == 8,
              "Bad sizeof(MediaController_NextTrack_Params_Data)");
class  MediaController_Seek_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_Seek_Params_Data));
      new (data()) MediaController_Seek_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_Seek_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_Seek_Params_Data>(index_);
    }
    MediaController_Seek_Params_Data* operator->() { return data(); }

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
  MediaController_Seek_Params_Data();
  ~MediaController_Seek_Params_Data() = delete;
};
static_assert(sizeof(MediaController_Seek_Params_Data) == 16,
              "Bad sizeof(MediaController_Seek_Params_Data)");
class  MediaController_ObserveImages_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaController_ObserveImages_Params_Data));
      new (data()) MediaController_ObserveImages_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaController_ObserveImages_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaController_ObserveImages_Params_Data>(index_);
    }
    MediaController_ObserveImages_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t minimum_size_px;
  int32_t desired_size_px;
  mojo::internal::Interface_Data observer;
  uint8_t padfinal_[4];

 private:
  MediaController_ObserveImages_Params_Data();
  ~MediaController_ObserveImages_Params_Data() = delete;
};
static_assert(sizeof(MediaController_ObserveImages_Params_Data) == 32,
              "Bad sizeof(MediaController_ObserveImages_Params_Data)");
class  MediaControllerObserver_MediaSessionInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerObserver_MediaSessionInfoChanged_Params_Data));
      new (data()) MediaControllerObserver_MediaSessionInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerObserver_MediaSessionInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerObserver_MediaSessionInfoChanged_Params_Data>(index_);
    }
    MediaControllerObserver_MediaSessionInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionInfo_Data> info;

 private:
  MediaControllerObserver_MediaSessionInfoChanged_Params_Data();
  ~MediaControllerObserver_MediaSessionInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerObserver_MediaSessionInfoChanged_Params_Data) == 16,
              "Bad sizeof(MediaControllerObserver_MediaSessionInfoChanged_Params_Data)");
class  MediaControllerObserver_MediaSessionMetadataChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerObserver_MediaSessionMetadataChanged_Params_Data));
      new (data()) MediaControllerObserver_MediaSessionMetadataChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerObserver_MediaSessionMetadataChanged_Params_Data>(index_);
    }
    MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaMetadata_Data> metadata;

 private:
  MediaControllerObserver_MediaSessionMetadataChanged_Params_Data();
  ~MediaControllerObserver_MediaSessionMetadataChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerObserver_MediaSessionMetadataChanged_Params_Data) == 16,
              "Bad sizeof(MediaControllerObserver_MediaSessionMetadataChanged_Params_Data)");
class  MediaControllerObserver_MediaSessionActionsChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerObserver_MediaSessionActionsChanged_Params_Data));
      new (data()) MediaControllerObserver_MediaSessionActionsChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerObserver_MediaSessionActionsChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerObserver_MediaSessionActionsChanged_Params_Data>(index_);
    }
    MediaControllerObserver_MediaSessionActionsChanged_Params_Data* operator->() { return data(); }

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
  MediaControllerObserver_MediaSessionActionsChanged_Params_Data();
  ~MediaControllerObserver_MediaSessionActionsChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerObserver_MediaSessionActionsChanged_Params_Data) == 16,
              "Bad sizeof(MediaControllerObserver_MediaSessionActionsChanged_Params_Data)");
class  MediaControllerObserver_MediaSessionChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerObserver_MediaSessionChanged_Params_Data));
      new (data()) MediaControllerObserver_MediaSessionChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerObserver_MediaSessionChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerObserver_MediaSessionChanged_Params_Data>(index_);
    }
    MediaControllerObserver_MediaSessionChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> request_id;

 private:
  MediaControllerObserver_MediaSessionChanged_Params_Data();
  ~MediaControllerObserver_MediaSessionChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerObserver_MediaSessionChanged_Params_Data) == 16,
              "Bad sizeof(MediaControllerObserver_MediaSessionChanged_Params_Data)");
class  MediaControllerImageObserver_MediaControllerImageChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaControllerImageObserver_MediaControllerImageChanged_Params_Data));
      new (data()) MediaControllerImageObserver_MediaControllerImageChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaControllerImageObserver_MediaControllerImageChanged_Params_Data>(index_);
    }
    MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::media_session::mojom::internal::MediaImageBitmap_Data> bitmap;

 private:
  MediaControllerImageObserver_MediaControllerImageChanged_Params_Data();
  ~MediaControllerImageObserver_MediaControllerImageChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaControllerImageObserver_MediaControllerImageChanged_Params_Data) == 24,
              "Bad sizeof(MediaControllerImageObserver_MediaControllerImageChanged_Params_Data)");

}  // namespace internal
class MediaControllerManager_CreateMediaControllerForSession_ParamsDataView {
 public:
  MediaControllerManager_CreateMediaControllerForSession_ParamsDataView() {}

  MediaControllerManager_CreateMediaControllerForSession_ParamsDataView(
      internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaControllerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetRequestIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestId(UserType* output) {
    auto* pointer = data_->request_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerManager_CreateMediaControllerForSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerManager_CreateActiveMediaController_ParamsDataView {
 public:
  MediaControllerManager_CreateActiveMediaController_ParamsDataView() {}

  MediaControllerManager_CreateActiveMediaController_ParamsDataView(
      internal::MediaControllerManager_CreateActiveMediaController_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaControllerRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaControllerManager_CreateActiveMediaController_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerManager_SuspendAllSessions_ParamsDataView {
 public:
  MediaControllerManager_SuspendAllSessions_ParamsDataView() {}

  MediaControllerManager_SuspendAllSessions_ParamsDataView(
      internal::MediaControllerManager_SuspendAllSessions_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaControllerManager_SuspendAllSessions_Params_Data* data_ = nullptr;
};

class MediaController_Suspend_ParamsDataView {
 public:
  MediaController_Suspend_ParamsDataView() {}

  MediaController_Suspend_ParamsDataView(
      internal::MediaController_Suspend_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_Suspend_Params_Data* data_ = nullptr;
};

class MediaController_Resume_ParamsDataView {
 public:
  MediaController_Resume_ParamsDataView() {}

  MediaController_Resume_ParamsDataView(
      internal::MediaController_Resume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_Resume_Params_Data* data_ = nullptr;
};

class MediaController_Stop_ParamsDataView {
 public:
  MediaController_Stop_ParamsDataView() {}

  MediaController_Stop_ParamsDataView(
      internal::MediaController_Stop_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_Stop_Params_Data* data_ = nullptr;
};

class MediaController_ToggleSuspendResume_ParamsDataView {
 public:
  MediaController_ToggleSuspendResume_ParamsDataView() {}

  MediaController_ToggleSuspendResume_ParamsDataView(
      internal::MediaController_ToggleSuspendResume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_ToggleSuspendResume_Params_Data* data_ = nullptr;
};

class MediaController_AddObserver_ParamsDataView {
 public:
  MediaController_AddObserver_ParamsDataView() {}

  MediaController_AddObserver_ParamsDataView(
      internal::MediaController_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaControllerObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaController_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaController_PreviousTrack_ParamsDataView {
 public:
  MediaController_PreviousTrack_ParamsDataView() {}

  MediaController_PreviousTrack_ParamsDataView(
      internal::MediaController_PreviousTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_PreviousTrack_Params_Data* data_ = nullptr;
};

class MediaController_NextTrack_ParamsDataView {
 public:
  MediaController_NextTrack_ParamsDataView() {}

  MediaController_NextTrack_ParamsDataView(
      internal::MediaController_NextTrack_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaController_NextTrack_Params_Data* data_ = nullptr;
};

class MediaController_Seek_ParamsDataView {
 public:
  MediaController_Seek_ParamsDataView() {}

  MediaController_Seek_ParamsDataView(
      internal::MediaController_Seek_Params_Data* data,
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
  internal::MediaController_Seek_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaController_ObserveImages_ParamsDataView {
 public:
  MediaController_ObserveImages_ParamsDataView() {}

  MediaController_ObserveImages_ParamsDataView(
      internal::MediaController_ObserveImages_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionImageType>(
        data_value, output);
  }

  ::media_session::mojom::MediaSessionImageType type() const {
    return static_cast<::media_session::mojom::MediaSessionImageType>(data_->type);
  }
  int32_t minimum_size_px() const {
    return data_->minimum_size_px;
  }
  int32_t desired_size_px() const {
    return data_->desired_size_px;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaControllerImageObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaController_ObserveImages_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerObserver_MediaSessionInfoChanged_ParamsDataView {
 public:
  MediaControllerObserver_MediaSessionInfoChanged_ParamsDataView() {}

  MediaControllerObserver_MediaSessionInfoChanged_ParamsDataView(
      internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInfo(UserType* output) {
    auto* pointer = data_->info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerObserver_MediaSessionInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerObserver_MediaSessionMetadataChanged_ParamsDataView {
 public:
  MediaControllerObserver_MediaSessionMetadataChanged_ParamsDataView() {}

  MediaControllerObserver_MediaSessionMetadataChanged_ParamsDataView(
      internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      ::media_session::mojom::MediaMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerObserver_MediaSessionActionsChanged_ParamsDataView {
 public:
  MediaControllerObserver_MediaSessionActionsChanged_ParamsDataView() {}

  MediaControllerObserver_MediaSessionActionsChanged_ParamsDataView(
      internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetActionDataView(
      mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) {
    auto* pointer = data_->action.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerObserver_MediaSessionActionsChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerObserver_MediaSessionChanged_ParamsDataView {
 public:
  MediaControllerObserver_MediaSessionChanged_ParamsDataView() {}

  MediaControllerObserver_MediaSessionChanged_ParamsDataView(
      internal::MediaControllerObserver_MediaSessionChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestId(UserType* output) {
    auto* pointer = data_->request_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerObserver_MediaSessionChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaControllerImageObserver_MediaControllerImageChanged_ParamsDataView {
 public:
  MediaControllerImageObserver_MediaControllerImageChanged_ParamsDataView() {}

  MediaControllerImageObserver_MediaControllerImageChanged_ParamsDataView(
      internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionImageType>(
        data_value, output);
  }

  ::media_session::mojom::MediaSessionImageType type() const {
    return static_cast<::media_session::mojom::MediaSessionImageType>(data_->type);
  }
  inline void GetBitmapDataView(
      ::media_session::mojom::MediaImageBitmapDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBitmap(UserType* output) {
    auto* pointer = data_->bitmap.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaImageBitmapDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void MediaControllerManager_CreateMediaControllerForSession_ParamsDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}




















inline void MediaController_Seek_ParamsDataView::GetSeekTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}




inline void MediaControllerObserver_MediaSessionInfoChanged_ParamsDataView::GetInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}


inline void MediaControllerObserver_MediaSessionMetadataChanged_ParamsDataView::GetMetadataDataView(
    ::media_session::mojom::MediaMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = ::media_session::mojom::MediaMetadataDataView(pointer, context_);
}


inline void MediaControllerObserver_MediaSessionActionsChanged_ParamsDataView::GetActionDataView(
    mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>* output) {
  auto pointer = data_->action.Get();
  *output = mojo::ArrayDataView<::media_session::mojom::MediaSessionAction>(pointer, context_);
}


inline void MediaControllerObserver_MediaSessionChanged_ParamsDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void MediaControllerImageObserver_MediaControllerImageChanged_ParamsDataView::GetBitmapDataView(
    ::media_session::mojom::MediaImageBitmapDataView* output) {
  auto pointer = data_->bitmap.Get();
  *output = ::media_session::mojom::MediaImageBitmapDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_PARAMS_DATA_H_