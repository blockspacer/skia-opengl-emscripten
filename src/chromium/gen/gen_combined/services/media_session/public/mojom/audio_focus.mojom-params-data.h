// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_PARAMS_DATA_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_PARAMS_DATA_H_

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
class  AudioFocusObserver_OnFocusGained_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusObserver_OnFocusGained_Params_Data));
      new (data()) AudioFocusObserver_OnFocusGained_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusObserver_OnFocusGained_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusObserver_OnFocusGained_Params_Data>(index_);
    }
    AudioFocusObserver_OnFocusGained_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AudioFocusRequestState_Data> state;

 private:
  AudioFocusObserver_OnFocusGained_Params_Data();
  ~AudioFocusObserver_OnFocusGained_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusObserver_OnFocusGained_Params_Data) == 16,
              "Bad sizeof(AudioFocusObserver_OnFocusGained_Params_Data)");
class  AudioFocusObserver_OnFocusLost_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusObserver_OnFocusLost_Params_Data));
      new (data()) AudioFocusObserver_OnFocusLost_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusObserver_OnFocusLost_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusObserver_OnFocusLost_Params_Data>(index_);
    }
    AudioFocusObserver_OnFocusLost_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::AudioFocusRequestState_Data> state;

 private:
  AudioFocusObserver_OnFocusLost_Params_Data();
  ~AudioFocusObserver_OnFocusLost_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusObserver_OnFocusLost_Params_Data) == 16,
              "Bad sizeof(AudioFocusObserver_OnFocusLost_Params_Data)");
class  AudioFocusRequestClient_RequestAudioFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusRequestClient_RequestAudioFocus_Params_Data));
      new (data()) AudioFocusRequestClient_RequestAudioFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusRequestClient_RequestAudioFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusRequestClient_RequestAudioFocus_Params_Data>(index_);
    }
    AudioFocusRequestClient_RequestAudioFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionInfo_Data> session_info;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  AudioFocusRequestClient_RequestAudioFocus_Params_Data();
  ~AudioFocusRequestClient_RequestAudioFocus_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusRequestClient_RequestAudioFocus_Params_Data) == 24,
              "Bad sizeof(AudioFocusRequestClient_RequestAudioFocus_Params_Data)");
class  AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data));
      new (data()) AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data>(index_);
    }
    AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data();
  ~AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data) == 8,
              "Bad sizeof(AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data)");
class  AudioFocusRequestClient_AbandonAudioFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusRequestClient_AbandonAudioFocus_Params_Data));
      new (data()) AudioFocusRequestClient_AbandonAudioFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusRequestClient_AbandonAudioFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusRequestClient_AbandonAudioFocus_Params_Data>(index_);
    }
    AudioFocusRequestClient_AbandonAudioFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioFocusRequestClient_AbandonAudioFocus_Params_Data();
  ~AudioFocusRequestClient_AbandonAudioFocus_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusRequestClient_AbandonAudioFocus_Params_Data) == 8,
              "Bad sizeof(AudioFocusRequestClient_AbandonAudioFocus_Params_Data)");
class  AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data));
      new (data()) AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data>(index_);
    }
    AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionInfo_Data> session_info;

 private:
  AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data();
  ~AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data) == 16,
              "Bad sizeof(AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data)");
class  AudioFocusManager_RequestAudioFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_RequestAudioFocus_Params_Data));
      new (data()) AudioFocusManager_RequestAudioFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_RequestAudioFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_RequestAudioFocus_Params_Data>(index_);
    }
    AudioFocusManager_RequestAudioFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data client;
  mojo::internal::Interface_Data media_session;
  int32_t type;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionInfo_Data> session_info;

 private:
  AudioFocusManager_RequestAudioFocus_Params_Data();
  ~AudioFocusManager_RequestAudioFocus_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_RequestAudioFocus_Params_Data) == 32,
              "Bad sizeof(AudioFocusManager_RequestAudioFocus_Params_Data)");
class  AudioFocusManager_RequestAudioFocus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_RequestAudioFocus_ResponseParams_Data));
      new (data()) AudioFocusManager_RequestAudioFocus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_RequestAudioFocus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_RequestAudioFocus_ResponseParams_Data>(index_);
    }
    AudioFocusManager_RequestAudioFocus_ResponseParams_Data* operator->() { return data(); }

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
  AudioFocusManager_RequestAudioFocus_ResponseParams_Data();
  ~AudioFocusManager_RequestAudioFocus_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_RequestAudioFocus_ResponseParams_Data) == 16,
              "Bad sizeof(AudioFocusManager_RequestAudioFocus_ResponseParams_Data)");
class  AudioFocusManager_RequestGroupedAudioFocus_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_RequestGroupedAudioFocus_Params_Data));
      new (data()) AudioFocusManager_RequestGroupedAudioFocus_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_RequestGroupedAudioFocus_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_RequestGroupedAudioFocus_Params_Data>(index_);
    }
    AudioFocusManager_RequestGroupedAudioFocus_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data client;
  mojo::internal::Interface_Data media_session;
  int32_t type;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionInfo_Data> session_info;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> group_id;

 private:
  AudioFocusManager_RequestGroupedAudioFocus_Params_Data();
  ~AudioFocusManager_RequestGroupedAudioFocus_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_RequestGroupedAudioFocus_Params_Data) == 40,
              "Bad sizeof(AudioFocusManager_RequestGroupedAudioFocus_Params_Data)");
class  AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data));
      new (data()) AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data>(index_);
    }
    AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data* operator->() { return data(); }

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
  AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data();
  ~AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data) == 16,
              "Bad sizeof(AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data)");
class  AudioFocusManager_GetFocusRequests_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_GetFocusRequests_Params_Data));
      new (data()) AudioFocusManager_GetFocusRequests_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_GetFocusRequests_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_GetFocusRequests_Params_Data>(index_);
    }
    AudioFocusManager_GetFocusRequests_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  AudioFocusManager_GetFocusRequests_Params_Data();
  ~AudioFocusManager_GetFocusRequests_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_GetFocusRequests_Params_Data) == 8,
              "Bad sizeof(AudioFocusManager_GetFocusRequests_Params_Data)");
class  AudioFocusManager_GetFocusRequests_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_GetFocusRequests_ResponseParams_Data));
      new (data()) AudioFocusManager_GetFocusRequests_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_GetFocusRequests_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_GetFocusRequests_ResponseParams_Data>(index_);
    }
    AudioFocusManager_GetFocusRequests_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AudioFocusRequestState_Data>>> requests;

 private:
  AudioFocusManager_GetFocusRequests_ResponseParams_Data();
  ~AudioFocusManager_GetFocusRequests_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_GetFocusRequests_ResponseParams_Data) == 16,
              "Bad sizeof(AudioFocusManager_GetFocusRequests_ResponseParams_Data)");
class  AudioFocusManager_AddObserver_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_AddObserver_Params_Data));
      new (data()) AudioFocusManager_AddObserver_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_AddObserver_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_AddObserver_Params_Data>(index_);
    }
    AudioFocusManager_AddObserver_Params_Data* operator->() { return data(); }

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
  AudioFocusManager_AddObserver_Params_Data();
  ~AudioFocusManager_AddObserver_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_AddObserver_Params_Data) == 16,
              "Bad sizeof(AudioFocusManager_AddObserver_Params_Data)");
class  AudioFocusManager_SetSourceName_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_SetSourceName_Params_Data));
      new (data()) AudioFocusManager_SetSourceName_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_SetSourceName_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_SetSourceName_Params_Data>(index_);
    }
    AudioFocusManager_SetSourceName_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;

 private:
  AudioFocusManager_SetSourceName_Params_Data();
  ~AudioFocusManager_SetSourceName_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_SetSourceName_Params_Data) == 16,
              "Bad sizeof(AudioFocusManager_SetSourceName_Params_Data)");
class  AudioFocusManager_SetEnforcementMode_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManager_SetEnforcementMode_Params_Data));
      new (data()) AudioFocusManager_SetEnforcementMode_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManager_SetEnforcementMode_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManager_SetEnforcementMode_Params_Data>(index_);
    }
    AudioFocusManager_SetEnforcementMode_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t mode;
  uint8_t padfinal_[4];

 private:
  AudioFocusManager_SetEnforcementMode_Params_Data();
  ~AudioFocusManager_SetEnforcementMode_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManager_SetEnforcementMode_Params_Data) == 16,
              "Bad sizeof(AudioFocusManager_SetEnforcementMode_Params_Data)");
class  AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data));
      new (data()) AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data>(index_);
    }
    AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data* operator->() { return data(); }

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
  AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data();
  ~AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data() = delete;
};
static_assert(sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data) == 16,
              "Bad sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data)");
class  AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data));
      new (data()) AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data>(index_);
    }
    AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaSessionDebugInfo_Data> debug_info;

 private:
  AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data();
  ~AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data) == 16,
              "Bad sizeof(AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data)");

}  // namespace internal
class AudioFocusObserver_OnFocusGained_ParamsDataView {
 public:
  AudioFocusObserver_OnFocusGained_ParamsDataView() {}

  AudioFocusObserver_OnFocusGained_ParamsDataView(
      internal::AudioFocusObserver_OnFocusGained_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      AudioFocusRequestStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusRequestStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusObserver_OnFocusGained_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusObserver_OnFocusLost_ParamsDataView {
 public:
  AudioFocusObserver_OnFocusLost_ParamsDataView() {}

  AudioFocusObserver_OnFocusLost_ParamsDataView(
      internal::AudioFocusObserver_OnFocusLost_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStateDataView(
      AudioFocusRequestStateDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) {
    auto* pointer = data_->state.Get();
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusRequestStateDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusObserver_OnFocusLost_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusRequestClient_RequestAudioFocus_ParamsDataView {
 public:
  AudioFocusRequestClient_RequestAudioFocus_ParamsDataView() {}

  AudioFocusRequestClient_RequestAudioFocus_ParamsDataView(
      internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionInfo(UserType* output) {
    auto* pointer = data_->session_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusType>(
        data_value, output);
  }

  AudioFocusType type() const {
    return static_cast<AudioFocusType>(data_->type);
  }
 private:
  internal::AudioFocusRequestClient_RequestAudioFocus_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusRequestClient_RequestAudioFocus_ResponseParamsDataView {
 public:
  AudioFocusRequestClient_RequestAudioFocus_ResponseParamsDataView() {}

  AudioFocusRequestClient_RequestAudioFocus_ResponseParamsDataView(
      internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioFocusRequestClient_RequestAudioFocus_ResponseParams_Data* data_ = nullptr;
};

class AudioFocusRequestClient_AbandonAudioFocus_ParamsDataView {
 public:
  AudioFocusRequestClient_AbandonAudioFocus_ParamsDataView() {}

  AudioFocusRequestClient_AbandonAudioFocus_ParamsDataView(
      internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioFocusRequestClient_AbandonAudioFocus_Params_Data* data_ = nullptr;
};

class AudioFocusRequestClient_MediaSessionInfoChanged_ParamsDataView {
 public:
  AudioFocusRequestClient_MediaSessionInfoChanged_ParamsDataView() {}

  AudioFocusRequestClient_MediaSessionInfoChanged_ParamsDataView(
      internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSessionInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionInfo(UserType* output) {
    auto* pointer = data_->session_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusRequestClient_MediaSessionInfoChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_RequestAudioFocus_ParamsDataView {
 public:
  AudioFocusManager_RequestAudioFocus_ParamsDataView() {}

  AudioFocusManager_RequestAudioFocus_ParamsDataView(
      internal::AudioFocusManager_RequestAudioFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::AudioFocusRequestClientRequestDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMediaSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaSessionPtrDataView>(
            &data_->media_session, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSessionInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionInfo(UserType* output) {
    auto* pointer = data_->session_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusType>(
        data_value, output);
  }

  AudioFocusType type() const {
    return static_cast<AudioFocusType>(data_->type);
  }
 private:
  internal::AudioFocusManager_RequestAudioFocus_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_RequestAudioFocus_ResponseParamsDataView {
 public:
  AudioFocusManager_RequestAudioFocus_ResponseParamsDataView() {}

  AudioFocusManager_RequestAudioFocus_ResponseParamsDataView(
      internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data* data,
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
  internal::AudioFocusManager_RequestAudioFocus_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView {
 public:
  AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView() {}

  AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView(
      internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::AudioFocusRequestClientRequestDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeMediaSession() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::MediaSessionPtrDataView>(
            &data_->media_session, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetSessionInfoDataView(
      ::media_session::mojom::MediaSessionInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSessionInfo(UserType* output) {
    auto* pointer = data_->session_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionInfoDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media_session::mojom::AudioFocusType>(
        data_value, output);
  }

  AudioFocusType type() const {
    return static_cast<AudioFocusType>(data_->type);
  }
  inline void GetGroupIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGroupId(UserType* output) {
    auto* pointer = data_->group_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusManager_RequestGroupedAudioFocus_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_RequestGroupedAudioFocus_ResponseParamsDataView {
 public:
  AudioFocusManager_RequestGroupedAudioFocus_ResponseParamsDataView() {}

  AudioFocusManager_RequestGroupedAudioFocus_ResponseParamsDataView(
      internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data* data,
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
  internal::AudioFocusManager_RequestGroupedAudioFocus_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_GetFocusRequests_ParamsDataView {
 public:
  AudioFocusManager_GetFocusRequests_ParamsDataView() {}

  AudioFocusManager_GetFocusRequests_ParamsDataView(
      internal::AudioFocusManager_GetFocusRequests_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioFocusManager_GetFocusRequests_Params_Data* data_ = nullptr;
};

class AudioFocusManager_GetFocusRequests_ResponseParamsDataView {
 public:
  AudioFocusManager_GetFocusRequests_ResponseParamsDataView() {}

  AudioFocusManager_GetFocusRequests_ResponseParamsDataView(
      internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestsDataView(
      mojo::ArrayDataView<AudioFocusRequestStateDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequests(UserType* output) {
    auto* pointer = data_->requests.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media_session::mojom::AudioFocusRequestStateDataView>>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusManager_GetFocusRequests_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_AddObserver_ParamsDataView {
 public:
  AudioFocusManager_AddObserver_ParamsDataView() {}

  AudioFocusManager_AddObserver_ParamsDataView(
      internal::AudioFocusManager_AddObserver_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media_session::mojom::AudioFocusObserverPtrDataView>(
            &data_->observer, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioFocusManager_AddObserver_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_SetSourceName_ParamsDataView {
 public:
  AudioFocusManager_SetSourceName_ParamsDataView() {}

  AudioFocusManager_SetSourceName_ParamsDataView(
      internal::AudioFocusManager_SetSourceName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusManager_SetSourceName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManager_SetEnforcementMode_ParamsDataView {
 public:
  AudioFocusManager_SetEnforcementMode_ParamsDataView() {}

  AudioFocusManager_SetEnforcementMode_ParamsDataView(
      internal::AudioFocusManager_SetEnforcementMode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::media_session::mojom::EnforcementMode>(
        data_value, output);
  }

  EnforcementMode mode() const {
    return static_cast<EnforcementMode>(data_->mode);
  }
 private:
  internal::AudioFocusManager_SetEnforcementMode_Params_Data* data_ = nullptr;
};

class AudioFocusManagerDebug_GetDebugInfoForRequest_ParamsDataView {
 public:
  AudioFocusManagerDebug_GetDebugInfoForRequest_ParamsDataView() {}

  AudioFocusManagerDebug_GetDebugInfoForRequest_ParamsDataView(
      internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data* data,
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
  internal::AudioFocusManagerDebug_GetDebugInfoForRequest_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParamsDataView {
 public:
  AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParamsDataView() {}

  AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParamsDataView(
      internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDebugInfoDataView(
      ::media_session::mojom::MediaSessionDebugInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDebugInfo(UserType* output) {
    auto* pointer = data_->debug_info.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionDebugInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioFocusObserver_OnFocusGained_ParamsDataView::GetStateDataView(
    AudioFocusRequestStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = AudioFocusRequestStateDataView(pointer, context_);
}


inline void AudioFocusObserver_OnFocusLost_ParamsDataView::GetStateDataView(
    AudioFocusRequestStateDataView* output) {
  auto pointer = data_->state.Get();
  *output = AudioFocusRequestStateDataView(pointer, context_);
}


inline void AudioFocusRequestClient_RequestAudioFocus_ParamsDataView::GetSessionInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->session_info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}






inline void AudioFocusRequestClient_MediaSessionInfoChanged_ParamsDataView::GetSessionInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->session_info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}


inline void AudioFocusManager_RequestAudioFocus_ParamsDataView::GetSessionInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->session_info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}


inline void AudioFocusManager_RequestAudioFocus_ResponseParamsDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView::GetSessionInfoDataView(
    ::media_session::mojom::MediaSessionInfoDataView* output) {
  auto pointer = data_->session_info.Get();
  *output = ::media_session::mojom::MediaSessionInfoDataView(pointer, context_);
}
inline void AudioFocusManager_RequestGroupedAudioFocus_ParamsDataView::GetGroupIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->group_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void AudioFocusManager_RequestGroupedAudioFocus_ResponseParamsDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}




inline void AudioFocusManager_GetFocusRequests_ResponseParamsDataView::GetRequestsDataView(
    mojo::ArrayDataView<AudioFocusRequestStateDataView>* output) {
  auto pointer = data_->requests.Get();
  *output = mojo::ArrayDataView<AudioFocusRequestStateDataView>(pointer, context_);
}




inline void AudioFocusManager_SetSourceName_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




inline void AudioFocusManagerDebug_GetDebugInfoForRequest_ParamsDataView::GetRequestIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->request_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}


inline void AudioFocusManagerDebug_GetDebugInfoForRequest_ResponseParamsDataView::GetDebugInfoDataView(
    ::media_session::mojom::MediaSessionDebugInfoDataView* output) {
  auto pointer = data_->debug_info.Get();
  *output = ::media_session::mojom::MediaSessionDebugInfoDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace media_session

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_PARAMS_DATA_H_