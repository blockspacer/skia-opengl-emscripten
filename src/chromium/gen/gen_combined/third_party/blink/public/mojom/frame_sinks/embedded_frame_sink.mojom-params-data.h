// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) SurfaceEmbedder_SetLocalSurfaceId_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SurfaceEmbedder_SetLocalSurfaceId_Params_Data));
      new (data()) SurfaceEmbedder_SetLocalSurfaceId_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SurfaceEmbedder_SetLocalSurfaceId_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SurfaceEmbedder_SetLocalSurfaceId_Params_Data>(index_);
    }
    SurfaceEmbedder_SetLocalSurfaceId_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;

 private:
  SurfaceEmbedder_SetLocalSurfaceId_Params_Data();
  ~SurfaceEmbedder_SetLocalSurfaceId_Params_Data() = delete;
};
static_assert(sizeof(SurfaceEmbedder_SetLocalSurfaceId_Params_Data) == 16,
              "Bad sizeof(SurfaceEmbedder_SetLocalSurfaceId_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data));
      new (data()) EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data>(index_);
    }
    EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceInfo_Data> surface_info;

 private:
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data();
  ~EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data) == 16,
              "Bad sizeof(EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data));
      new (data()) EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data>(index_);
    }
    EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data embedder;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data();
  ~EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data) == 16,
              "Bad sizeof(EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data client;

 private:
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data) == 32,
              "Bad sizeof(EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data sink;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data) == 32,
              "Bad sizeof(EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> parent_frame_sink_id;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Interface_Data surface_client;
  mojo::internal::Interface_Data client;
  mojo::internal::Handle_Data sink;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data();
  ~EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data) == 48,
              "Bad sizeof(EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data));
      new (data()) EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data>(index_);
    }
    EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::FrameSinkId_Data> frame_sink_id;
  mojo::internal::Handle_Data embedder;
  uint8_t padfinal_[4];

 private:
  EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data();
  ~EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data() = delete;
};
static_assert(sizeof(EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data) == 24,
              "Bad sizeof(EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data)");

}  // namespace internal
class SurfaceEmbedder_SetLocalSurfaceId_ParamsDataView {
 public:
  SurfaceEmbedder_SetLocalSurfaceId_ParamsDataView() {}

  SurfaceEmbedder_SetLocalSurfaceId_ParamsDataView(
      internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLocalSurfaceIdDataView(
      ::viz::mojom::LocalSurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLocalSurfaceId(UserType* output) {
    auto* pointer = data_->local_surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::LocalSurfaceIdDataView>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceEmbedder_SetLocalSurfaceId_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView {
 public:
  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView() {}

  EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView(
      internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceInfoDataView(
      ::viz::mojom::SurfaceInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceInfo(UserType* output) {
    auto* pointer = data_->surface_info.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::EmbeddedFrameSinkClient_OnFirstSurfaceActivation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkClient_BindSurfaceEmbedder_ParamsDataView {
 public:
  EmbeddedFrameSinkClient_BindSurfaceEmbedder_ParamsDataView() {}

  EmbeddedFrameSinkClient_BindSurfaceEmbedder_ParamsDataView(
      internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeEmbedder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SurfaceEmbedderRequestDataView>(
            &data_->embedder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkClient_BindSurfaceEmbedder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->sink, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_CreateCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView() {}

  EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetParentFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadParentFrameSinkId(UserType* output) {
    auto* pointer = data_->parent_frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeSurfaceClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::EmbeddedFrameSinkClientPtrDataView>(
            &data_->surface_client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkClientPtrDataView>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeSink() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::viz::mojom::CompositorFrameSinkRequestDataView>(
            &data_->sink, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class EmbeddedFrameSinkProvider_ConnectToEmbedder_ParamsDataView {
 public:
  EmbeddedFrameSinkProvider_ConnectToEmbedder_ParamsDataView() {}

  EmbeddedFrameSinkProvider_ConnectToEmbedder_ParamsDataView(
      internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameSinkIdDataView(
      ::viz::mojom::FrameSinkIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameSinkId(UserType* output) {
    auto* pointer = data_->frame_sink_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::FrameSinkIdDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeEmbedder() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::SurfaceEmbedderRequestDataView>(
            &data_->embedder, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::EmbeddedFrameSinkProvider_ConnectToEmbedder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SurfaceEmbedder_SetLocalSurfaceId_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkClient_OnFirstSurfaceActivation_ParamsDataView::GetSurfaceInfoDataView(
    ::viz::mojom::SurfaceInfoDataView* output) {
  auto pointer = data_->surface_info.Get();
  *output = ::viz::mojom::SurfaceInfoDataView(pointer, context_);
}




inline void EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void EmbeddedFrameSinkProvider_RegisterEmbeddedFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_CreateCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView::GetParentFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->parent_frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}
inline void EmbeddedFrameSinkProvider_CreateSimpleCompositorFrameSink_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}


inline void EmbeddedFrameSinkProvider_ConnectToEmbedder_ParamsDataView::GetFrameSinkIdDataView(
    ::viz::mojom::FrameSinkIdDataView* output) {
  auto pointer = data_->frame_sink_id.Get();
  *output = ::viz::mojom::FrameSinkIdDataView(pointer, context_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_PARAMS_DATA_H_