// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_PARAMS_DATA_H_

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
class  Renderer_Initialize_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Initialize_Params_Data));
      new (data()) Renderer_Initialize_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Initialize_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Initialize_Params_Data>(index_);
    }
    Renderer_Initialize_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Interface_Data>> streams;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> media_url;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> first_party_for_cookies;
  uint8_t allow_credentials : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_Initialize_Params_Data();
  ~Renderer_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Renderer_Initialize_Params_Data) == 48,
              "Bad sizeof(Renderer_Initialize_Params_Data)");
class  Renderer_Initialize_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Initialize_ResponseParams_Data));
      new (data()) Renderer_Initialize_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Initialize_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Initialize_ResponseParams_Data>(index_);
    }
    Renderer_Initialize_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_Initialize_ResponseParams_Data();
  ~Renderer_Initialize_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_Initialize_ResponseParams_Data) == 16,
              "Bad sizeof(Renderer_Initialize_ResponseParams_Data)");
class  Renderer_Flush_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Flush_Params_Data));
      new (data()) Renderer_Flush_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Flush_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Flush_Params_Data>(index_);
    }
    Renderer_Flush_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_Flush_Params_Data();
  ~Renderer_Flush_Params_Data() = delete;
};
static_assert(sizeof(Renderer_Flush_Params_Data) == 8,
              "Bad sizeof(Renderer_Flush_Params_Data)");
class  Renderer_Flush_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_Flush_ResponseParams_Data));
      new (data()) Renderer_Flush_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_Flush_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_Flush_ResponseParams_Data>(index_);
    }
    Renderer_Flush_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Renderer_Flush_ResponseParams_Data();
  ~Renderer_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_Flush_ResponseParams_Data) == 8,
              "Bad sizeof(Renderer_Flush_ResponseParams_Data)");
class  Renderer_StartPlayingFrom_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_StartPlayingFrom_Params_Data));
      new (data()) Renderer_StartPlayingFrom_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_StartPlayingFrom_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_StartPlayingFrom_Params_Data>(index_);
    }
    Renderer_StartPlayingFrom_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;

 private:
  Renderer_StartPlayingFrom_Params_Data();
  ~Renderer_StartPlayingFrom_Params_Data() = delete;
};
static_assert(sizeof(Renderer_StartPlayingFrom_Params_Data) == 16,
              "Bad sizeof(Renderer_StartPlayingFrom_Params_Data)");
class  Renderer_SetPlaybackRate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetPlaybackRate_Params_Data));
      new (data()) Renderer_SetPlaybackRate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetPlaybackRate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetPlaybackRate_Params_Data>(index_);
    }
    Renderer_SetPlaybackRate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double playback_rate;

 private:
  Renderer_SetPlaybackRate_Params_Data();
  ~Renderer_SetPlaybackRate_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetPlaybackRate_Params_Data) == 16,
              "Bad sizeof(Renderer_SetPlaybackRate_Params_Data)");
class  Renderer_SetVolume_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetVolume_Params_Data));
      new (data()) Renderer_SetVolume_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetVolume_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetVolume_Params_Data>(index_);
    }
    Renderer_SetVolume_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  float volume;
  uint8_t padfinal_[4];

 private:
  Renderer_SetVolume_Params_Data();
  ~Renderer_SetVolume_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetVolume_Params_Data) == 16,
              "Bad sizeof(Renderer_SetVolume_Params_Data)");
class  Renderer_SetCdm_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetCdm_Params_Data));
      new (data()) Renderer_SetCdm_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetCdm_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetCdm_Params_Data>(index_);
    }
    Renderer_SetCdm_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cdm_id;
  uint8_t padfinal_[4];

 private:
  Renderer_SetCdm_Params_Data();
  ~Renderer_SetCdm_Params_Data() = delete;
};
static_assert(sizeof(Renderer_SetCdm_Params_Data) == 16,
              "Bad sizeof(Renderer_SetCdm_Params_Data)");
class  Renderer_SetCdm_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Renderer_SetCdm_ResponseParams_Data));
      new (data()) Renderer_SetCdm_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Renderer_SetCdm_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Renderer_SetCdm_ResponseParams_Data>(index_);
    }
    Renderer_SetCdm_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Renderer_SetCdm_ResponseParams_Data();
  ~Renderer_SetCdm_ResponseParams_Data() = delete;
};
static_assert(sizeof(Renderer_SetCdm_ResponseParams_Data) == 16,
              "Bad sizeof(Renderer_SetCdm_ResponseParams_Data)");
class  RendererClient_OnTimeUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnTimeUpdate_Params_Data));
      new (data()) RendererClient_OnTimeUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnTimeUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnTimeUpdate_Params_Data>(index_);
    }
    RendererClient_OnTimeUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> max_time;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> capture_time;

 private:
  RendererClient_OnTimeUpdate_Params_Data();
  ~RendererClient_OnTimeUpdate_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnTimeUpdate_Params_Data) == 32,
              "Bad sizeof(RendererClient_OnTimeUpdate_Params_Data)");
class  RendererClient_OnBufferingStateChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnBufferingStateChange_Params_Data));
      new (data()) RendererClient_OnBufferingStateChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnBufferingStateChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnBufferingStateChange_Params_Data>(index_);
    }
    RendererClient_OnBufferingStateChange_Params_Data* operator->() { return data(); }

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
  RendererClient_OnBufferingStateChange_Params_Data();
  ~RendererClient_OnBufferingStateChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnBufferingStateChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnBufferingStateChange_Params_Data)");
class  RendererClient_OnEnded_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnEnded_Params_Data));
      new (data()) RendererClient_OnEnded_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnEnded_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnEnded_Params_Data>(index_);
    }
    RendererClient_OnEnded_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererClient_OnEnded_Params_Data();
  ~RendererClient_OnEnded_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnEnded_Params_Data) == 8,
              "Bad sizeof(RendererClient_OnEnded_Params_Data)");
class  RendererClient_OnError_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnError_Params_Data));
      new (data()) RendererClient_OnError_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnError_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnError_Params_Data>(index_);
    }
    RendererClient_OnError_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  RendererClient_OnError_Params_Data();
  ~RendererClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnError_Params_Data) == 8,
              "Bad sizeof(RendererClient_OnError_Params_Data)");
class  RendererClient_OnAudioConfigChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnAudioConfigChange_Params_Data));
      new (data()) RendererClient_OnAudioConfigChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnAudioConfigChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnAudioConfigChange_Params_Data>(index_);
    }
    RendererClient_OnAudioConfigChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::AudioDecoderConfig_Data> config;

 private:
  RendererClient_OnAudioConfigChange_Params_Data();
  ~RendererClient_OnAudioConfigChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnAudioConfigChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnAudioConfigChange_Params_Data)");
class  RendererClient_OnVideoConfigChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoConfigChange_Params_Data));
      new (data()) RendererClient_OnVideoConfigChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoConfigChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoConfigChange_Params_Data>(index_);
    }
    RendererClient_OnVideoConfigChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::VideoDecoderConfig_Data> config;

 private:
  RendererClient_OnVideoConfigChange_Params_Data();
  ~RendererClient_OnVideoConfigChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoConfigChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoConfigChange_Params_Data)");
class  RendererClient_OnVideoNaturalSizeChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data));
      new (data()) RendererClient_OnVideoNaturalSizeChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoNaturalSizeChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoNaturalSizeChange_Params_Data>(index_);
    }
    RendererClient_OnVideoNaturalSizeChange_Params_Data* operator->() { return data(); }

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
  RendererClient_OnVideoNaturalSizeChange_Params_Data();
  ~RendererClient_OnVideoNaturalSizeChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoNaturalSizeChange_Params_Data)");
class  RendererClient_OnVideoOpacityChange_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnVideoOpacityChange_Params_Data));
      new (data()) RendererClient_OnVideoOpacityChange_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnVideoOpacityChange_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnVideoOpacityChange_Params_Data>(index_);
    }
    RendererClient_OnVideoOpacityChange_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t opaque : 1;
  uint8_t padfinal_[7];

 private:
  RendererClient_OnVideoOpacityChange_Params_Data();
  ~RendererClient_OnVideoOpacityChange_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnVideoOpacityChange_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnVideoOpacityChange_Params_Data)");
class  RendererClient_OnStatisticsUpdate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnStatisticsUpdate_Params_Data));
      new (data()) RendererClient_OnStatisticsUpdate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnStatisticsUpdate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnStatisticsUpdate_Params_Data>(index_);
    }
    RendererClient_OnStatisticsUpdate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PipelineStatistics_Data> stats;

 private:
  RendererClient_OnStatisticsUpdate_Params_Data();
  ~RendererClient_OnStatisticsUpdate_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnStatisticsUpdate_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnStatisticsUpdate_Params_Data)");
class  RendererClient_OnWaiting_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RendererClient_OnWaiting_Params_Data));
      new (data()) RendererClient_OnWaiting_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RendererClient_OnWaiting_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RendererClient_OnWaiting_Params_Data>(index_);
    }
    RendererClient_OnWaiting_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reason;
  uint8_t padfinal_[4];

 private:
  RendererClient_OnWaiting_Params_Data();
  ~RendererClient_OnWaiting_Params_Data() = delete;
};
static_assert(sizeof(RendererClient_OnWaiting_Params_Data) == 16,
              "Bad sizeof(RendererClient_OnWaiting_Params_Data)");

}  // namespace internal
class Renderer_Initialize_ParamsDataView {
 public:
  Renderer_Initialize_ParamsDataView() {}

  Renderer_Initialize_ParamsDataView(
      internal::Renderer_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::RendererClientAssociatedPtrInfoDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetStreamsDataView(
      mojo::ArrayDataView<::media::mojom::DemuxerStreamPtrDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreams(UserType* output) {
    auto* pointer = data_->streams.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::media::mojom::DemuxerStreamPtrDataView>>(
        pointer, output, context_);
  }
  inline void GetMediaUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMediaUrl(UserType* output) {
    auto* pointer = data_->media_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetFirstPartyForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFirstPartyForCookies(UserType* output) {
    auto* pointer = data_->first_party_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  bool allow_credentials() const {
    return data_->allow_credentials;
  }
 private:
  internal::Renderer_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_Initialize_ResponseParamsDataView {
 public:
  Renderer_Initialize_ResponseParamsDataView() {}

  Renderer_Initialize_ResponseParamsDataView(
      internal::Renderer_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Renderer_Initialize_ResponseParams_Data* data_ = nullptr;
};

class Renderer_Flush_ParamsDataView {
 public:
  Renderer_Flush_ParamsDataView() {}

  Renderer_Flush_ParamsDataView(
      internal::Renderer_Flush_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Renderer_Flush_Params_Data* data_ = nullptr;
};

class Renderer_Flush_ResponseParamsDataView {
 public:
  Renderer_Flush_ResponseParamsDataView() {}

  Renderer_Flush_ResponseParamsDataView(
      internal::Renderer_Flush_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Renderer_Flush_ResponseParams_Data* data_ = nullptr;
};

class Renderer_StartPlayingFrom_ParamsDataView {
 public:
  Renderer_StartPlayingFrom_ParamsDataView() {}

  Renderer_StartPlayingFrom_ParamsDataView(
      internal::Renderer_StartPlayingFrom_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
 private:
  internal::Renderer_StartPlayingFrom_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Renderer_SetPlaybackRate_ParamsDataView {
 public:
  Renderer_SetPlaybackRate_ParamsDataView() {}

  Renderer_SetPlaybackRate_ParamsDataView(
      internal::Renderer_SetPlaybackRate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double playback_rate() const {
    return data_->playback_rate;
  }
 private:
  internal::Renderer_SetPlaybackRate_Params_Data* data_ = nullptr;
};

class Renderer_SetVolume_ParamsDataView {
 public:
  Renderer_SetVolume_ParamsDataView() {}

  Renderer_SetVolume_ParamsDataView(
      internal::Renderer_SetVolume_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float volume() const {
    return data_->volume;
  }
 private:
  internal::Renderer_SetVolume_Params_Data* data_ = nullptr;
};

class Renderer_SetCdm_ParamsDataView {
 public:
  Renderer_SetCdm_ParamsDataView() {}

  Renderer_SetCdm_ParamsDataView(
      internal::Renderer_SetCdm_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::Renderer_SetCdm_Params_Data* data_ = nullptr;
};

class Renderer_SetCdm_ResponseParamsDataView {
 public:
  Renderer_SetCdm_ResponseParamsDataView() {}

  Renderer_SetCdm_ResponseParamsDataView(
      internal::Renderer_SetCdm_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Renderer_SetCdm_ResponseParams_Data* data_ = nullptr;
};

class RendererClient_OnTimeUpdate_ParamsDataView {
 public:
  RendererClient_OnTimeUpdate_ParamsDataView() {}

  RendererClient_OnTimeUpdate_ParamsDataView(
      internal::RendererClient_OnTimeUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTime(UserType* output) {
    auto* pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetMaxTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMaxTime(UserType* output) {
    auto* pointer = data_->max_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, context_);
  }
  inline void GetCaptureTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCaptureTime(UserType* output) {
    auto* pointer = data_->capture_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererClient_OnTimeUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererClient_OnBufferingStateChange_ParamsDataView {
 public:
  RendererClient_OnBufferingStateChange_ParamsDataView() {}

  RendererClient_OnBufferingStateChange_ParamsDataView(
      internal::RendererClient_OnBufferingStateChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::media::mojom::BufferingState>(
        data_value, output);
  }

  ::media::mojom::BufferingState state() const {
    return static_cast<::media::mojom::BufferingState>(data_->state);
  }
 private:
  internal::RendererClient_OnBufferingStateChange_Params_Data* data_ = nullptr;
};

class RendererClient_OnEnded_ParamsDataView {
 public:
  RendererClient_OnEnded_ParamsDataView() {}

  RendererClient_OnEnded_ParamsDataView(
      internal::RendererClient_OnEnded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RendererClient_OnEnded_Params_Data* data_ = nullptr;
};

class RendererClient_OnError_ParamsDataView {
 public:
  RendererClient_OnError_ParamsDataView() {}

  RendererClient_OnError_ParamsDataView(
      internal::RendererClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::RendererClient_OnError_Params_Data* data_ = nullptr;
};

class RendererClient_OnAudioConfigChange_ParamsDataView {
 public:
  RendererClient_OnAudioConfigChange_ParamsDataView() {}

  RendererClient_OnAudioConfigChange_ParamsDataView(
      internal::RendererClient_OnAudioConfigChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererClient_OnAudioConfigChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererClient_OnVideoConfigChange_ParamsDataView {
 public:
  RendererClient_OnVideoConfigChange_ParamsDataView() {}

  RendererClient_OnVideoConfigChange_ParamsDataView(
      internal::RendererClient_OnVideoConfigChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadConfig(UserType* output) {
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererClient_OnVideoConfigChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererClient_OnVideoNaturalSizeChange_ParamsDataView {
 public:
  RendererClient_OnVideoNaturalSizeChange_ParamsDataView() {}

  RendererClient_OnVideoNaturalSizeChange_ParamsDataView(
      internal::RendererClient_OnVideoNaturalSizeChange_Params_Data* data,
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
  internal::RendererClient_OnVideoNaturalSizeChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererClient_OnVideoOpacityChange_ParamsDataView {
 public:
  RendererClient_OnVideoOpacityChange_ParamsDataView() {}

  RendererClient_OnVideoOpacityChange_ParamsDataView(
      internal::RendererClient_OnVideoOpacityChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool opaque() const {
    return data_->opaque;
  }
 private:
  internal::RendererClient_OnVideoOpacityChange_Params_Data* data_ = nullptr;
};

class RendererClient_OnStatisticsUpdate_ParamsDataView {
 public:
  RendererClient_OnStatisticsUpdate_ParamsDataView() {}

  RendererClient_OnStatisticsUpdate_ParamsDataView(
      internal::RendererClient_OnStatisticsUpdate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetStatsDataView(
      ::media::mojom::PipelineStatisticsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStats(UserType* output) {
    auto* pointer = data_->stats.Get();
    return mojo::internal::Deserialize<::media::mojom::PipelineStatisticsDataView>(
        pointer, output, context_);
  }
 private:
  internal::RendererClient_OnStatisticsUpdate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class RendererClient_OnWaiting_ParamsDataView {
 public:
  RendererClient_OnWaiting_ParamsDataView() {}

  RendererClient_OnWaiting_ParamsDataView(
      internal::RendererClient_OnWaiting_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::media::mojom::WaitingReason>(
        data_value, output);
  }

  ::media::mojom::WaitingReason reason() const {
    return static_cast<::media::mojom::WaitingReason>(data_->reason);
  }
 private:
  internal::RendererClient_OnWaiting_Params_Data* data_ = nullptr;
};


inline void Renderer_Initialize_ParamsDataView::GetStreamsDataView(
    mojo::ArrayDataView<::media::mojom::DemuxerStreamPtrDataView>* output) {
  auto pointer = data_->streams.Get();
  *output = mojo::ArrayDataView<::media::mojom::DemuxerStreamPtrDataView>(pointer, context_);
}
inline void Renderer_Initialize_ParamsDataView::GetMediaUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->media_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void Renderer_Initialize_ParamsDataView::GetFirstPartyForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->first_party_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}








inline void Renderer_StartPlayingFrom_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}










inline void RendererClient_OnTimeUpdate_ParamsDataView::GetTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void RendererClient_OnTimeUpdate_ParamsDataView::GetMaxTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->max_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, context_);
}
inline void RendererClient_OnTimeUpdate_ParamsDataView::GetCaptureTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->capture_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}








inline void RendererClient_OnAudioConfigChange_ParamsDataView::GetConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}


inline void RendererClient_OnVideoConfigChange_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}


inline void RendererClient_OnVideoNaturalSizeChange_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}




inline void RendererClient_OnStatisticsUpdate_ParamsDataView::GetStatsDataView(
    ::media::mojom::PipelineStatisticsDataView* output) {
  auto pointer = data_->stats.Get();
  *output = ::media::mojom::PipelineStatisticsDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_PARAMS_DATA_H_