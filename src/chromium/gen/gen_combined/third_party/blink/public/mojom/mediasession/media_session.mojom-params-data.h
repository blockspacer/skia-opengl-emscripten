// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_

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
namespace blink {
namespace mojom {
namespace internal {
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionClient_DidReceiveAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionClient_DidReceiveAction_Params_Data));
      new (data()) MediaSessionClient_DidReceiveAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionClient_DidReceiveAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionClient_DidReceiveAction_Params_Data>(index_);
    }
    MediaSessionClient_DidReceiveAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionClient_DidReceiveAction_Params_Data();
  ~MediaSessionClient_DidReceiveAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionClient_DidReceiveAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionClient_DidReceiveAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionService_SetClient_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetClient_Params_Data));
      new (data()) MediaSessionService_SetClient_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetClient_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetClient_Params_Data>(index_);
    }
    MediaSessionService_SetClient_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  MediaSessionService_SetClient_Params_Data();
  ~MediaSessionService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetClient_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetClient_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionService_SetPlaybackState_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetPlaybackState_Params_Data));
      new (data()) MediaSessionService_SetPlaybackState_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetPlaybackState_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetPlaybackState_Params_Data>(index_);
    }
    MediaSessionService_SetPlaybackState_Params_Data* operator->() { return data(); }

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
  MediaSessionService_SetPlaybackState_Params_Data();
  ~MediaSessionService_SetPlaybackState_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetPlaybackState_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetPlaybackState_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionService_SetMetadata_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_SetMetadata_Params_Data));
      new (data()) MediaSessionService_SetMetadata_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_SetMetadata_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_SetMetadata_Params_Data>(index_);
    }
    MediaSessionService_SetMetadata_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::SpecMediaMetadata_Data> metadata;

 private:
  MediaSessionService_SetMetadata_Params_Data();
  ~MediaSessionService_SetMetadata_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_SetMetadata_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_SetMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionService_EnableAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_EnableAction_Params_Data));
      new (data()) MediaSessionService_EnableAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_EnableAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_EnableAction_Params_Data>(index_);
    }
    MediaSessionService_EnableAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionService_EnableAction_Params_Data();
  ~MediaSessionService_EnableAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_EnableAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_EnableAction_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) MediaSessionService_DisableAction_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(MediaSessionService_DisableAction_Params_Data));
      new (data()) MediaSessionService_DisableAction_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    MediaSessionService_DisableAction_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<MediaSessionService_DisableAction_Params_Data>(index_);
    }
    MediaSessionService_DisableAction_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  MediaSessionService_DisableAction_Params_Data();
  ~MediaSessionService_DisableAction_Params_Data() = delete;
};
static_assert(sizeof(MediaSessionService_DisableAction_Params_Data) == 16,
              "Bad sizeof(MediaSessionService_DisableAction_Params_Data)");

}  // namespace internal
class MediaSessionClient_DidReceiveAction_ParamsDataView {
 public:
  MediaSessionClient_DidReceiveAction_ParamsDataView() {}

  MediaSessionClient_DidReceiveAction_ParamsDataView(
      internal::MediaSessionClient_DidReceiveAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionAction>(
        data_value, output);
  }

  ::media_session::mojom::MediaSessionAction action() const {
    return static_cast<::media_session::mojom::MediaSessionAction>(data_->action);
  }
 private:
  internal::MediaSessionClient_DidReceiveAction_Params_Data* data_ = nullptr;
};

class MediaSessionService_SetClient_ParamsDataView {
 public:
  MediaSessionService_SetClient_ParamsDataView() {}

  MediaSessionService_SetClient_ParamsDataView(
      internal::MediaSessionService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::MediaSessionClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::MediaSessionService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionService_SetPlaybackState_ParamsDataView {
 public:
  MediaSessionService_SetPlaybackState_ParamsDataView() {}

  MediaSessionService_SetPlaybackState_ParamsDataView(
      internal::MediaSessionService_SetPlaybackState_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::blink::mojom::MediaSessionPlaybackState>(
        data_value, output);
  }

  MediaSessionPlaybackState state() const {
    return static_cast<MediaSessionPlaybackState>(data_->state);
  }
 private:
  internal::MediaSessionService_SetPlaybackState_Params_Data* data_ = nullptr;
};

class MediaSessionService_SetMetadata_ParamsDataView {
 public:
  MediaSessionService_SetMetadata_ParamsDataView() {}

  MediaSessionService_SetMetadata_ParamsDataView(
      internal::MediaSessionService_SetMetadata_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMetadataDataView(
      SpecMediaMetadataDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetadata(UserType* output) {
    auto* pointer = data_->metadata.Get();
    return mojo::internal::Deserialize<::blink::mojom::SpecMediaMetadataDataView>(
        pointer, output, context_);
  }
 private:
  internal::MediaSessionService_SetMetadata_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class MediaSessionService_EnableAction_ParamsDataView {
 public:
  MediaSessionService_EnableAction_ParamsDataView() {}

  MediaSessionService_EnableAction_ParamsDataView(
      internal::MediaSessionService_EnableAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionAction>(
        data_value, output);
  }

  ::media_session::mojom::MediaSessionAction action() const {
    return static_cast<::media_session::mojom::MediaSessionAction>(data_->action);
  }
 private:
  internal::MediaSessionService_EnableAction_Params_Data* data_ = nullptr;
};

class MediaSessionService_DisableAction_ParamsDataView {
 public:
  MediaSessionService_DisableAction_ParamsDataView() {}

  MediaSessionService_DisableAction_ParamsDataView(
      internal::MediaSessionService_DisableAction_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::media_session::mojom::MediaSessionAction>(
        data_value, output);
  }

  ::media_session::mojom::MediaSessionAction action() const {
    return static_cast<::media_session::mojom::MediaSessionAction>(data_->action);
  }
 private:
  internal::MediaSessionService_DisableAction_Params_Data* data_ = nullptr;
};








inline void MediaSessionService_SetMetadata_ParamsDataView::GetMetadataDataView(
    SpecMediaMetadataDataView* output) {
  auto pointer = data_->metadata.Get();
  *output = SpecMediaMetadataDataView(pointer, context_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_PARAMS_DATA_H_