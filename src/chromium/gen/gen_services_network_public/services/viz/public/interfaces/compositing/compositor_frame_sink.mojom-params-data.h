// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_PARAMS_DATA_H_

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
class  CompositorFrameSink_SetNeedsBeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data));
      new (data()) CompositorFrameSink_SetNeedsBeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SetNeedsBeginFrame_Params_Data>(index_);
    }
    CompositorFrameSink_SetNeedsBeginFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t needs_begin_frame : 1;
  uint8_t padfinal_[7];

 private:
  CompositorFrameSink_SetNeedsBeginFrame_Params_Data();
  ~CompositorFrameSink_SetNeedsBeginFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_SetNeedsBeginFrame_Params_Data)");
class  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data));
      new (data()) CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data>(index_);
    }
    CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data();
  ~CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data) == 8,
              "Bad sizeof(CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrame_Params_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;
  mojo::internal::Pointer<::viz::mojom::internal::HitTestRegionList_Data> hit_test_region_list;
  uint64_t submit_time;

 private:
  CompositorFrameSink_SubmitCompositorFrame_Params_Data();
  ~CompositorFrameSink_SubmitCompositorFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data) == 40,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrame_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrameSync_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrameSync_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrameSync_Params_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::LocalSurfaceId_Data> local_surface_id;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorFrame_Data> frame;
  mojo::internal::Pointer<::viz::mojom::internal::HitTestRegionList_Data> hit_test_region_list;
  uint64_t submit_time;

 private:
  CompositorFrameSink_SubmitCompositorFrameSync_Params_Data();
  ~CompositorFrameSink_SubmitCompositorFrameSync_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data) == 40,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrameSync_Params_Data)");
class  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data));
      new (data()) CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data>(index_);
    }
    CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data();
  ~CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data) == 16,
              "Bad sizeof(CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data)");
class  CompositorFrameSink_DidNotProduceFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data));
      new (data()) CompositorFrameSink_DidNotProduceFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidNotProduceFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidNotProduceFrame_Params_Data>(index_);
    }
    CompositorFrameSink_DidNotProduceFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameAck_Data> ack;

 private:
  CompositorFrameSink_DidNotProduceFrame_Params_Data();
  ~CompositorFrameSink_DidNotProduceFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_DidNotProduceFrame_Params_Data)");
class  CompositorFrameSink_DidAllocateSharedBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data));
      new (data()) CompositorFrameSink_DidAllocateSharedBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidAllocateSharedBitmap_Params_Data>(index_);
    }
    CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data buffer;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gpu::mojom::internal::Mailbox_Data> id;

 private:
  CompositorFrameSink_DidAllocateSharedBitmap_Params_Data();
  ~CompositorFrameSink_DidAllocateSharedBitmap_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data) == 24,
              "Bad sizeof(CompositorFrameSink_DidAllocateSharedBitmap_Params_Data)");
class  CompositorFrameSink_DidDeleteSharedBitmap_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data));
      new (data()) CompositorFrameSink_DidDeleteSharedBitmap_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSink_DidDeleteSharedBitmap_Params_Data>(index_);
    }
    CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::Mailbox_Data> id;

 private:
  CompositorFrameSink_DidDeleteSharedBitmap_Params_Data();
  ~CompositorFrameSink_DidDeleteSharedBitmap_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSink_DidDeleteSharedBitmap_Params_Data)");
class  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data));
      new (data()) CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data>(index_);
    }
    CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data();
  ~CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data)");
class  CompositorFrameSinkClient_OnBeginFrame_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data));
      new (data()) CompositorFrameSinkClient_OnBeginFrame_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_OnBeginFrame_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_OnBeginFrame_Params_Data>(index_);
    }
    CompositorFrameSinkClient_OnBeginFrame_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::BeginFrameArgs_Data> args;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, mojo::internal::Pointer<::gfx::mojom::internal::PresentationFeedback_Data>>> presentations;

 private:
  CompositorFrameSinkClient_OnBeginFrame_Params_Data();
  ~CompositorFrameSinkClient_OnBeginFrame_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data) == 24,
              "Bad sizeof(CompositorFrameSinkClient_OnBeginFrame_Params_Data)");
class  CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data));
      new (data()) CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data>(index_);
    }
    CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t paused : 1;
  uint8_t padfinal_[7];

 private:
  CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data();
  ~CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data)");
class  CompositorFrameSinkClient_ReclaimResources_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data));
      new (data()) CompositorFrameSinkClient_ReclaimResources_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    CompositorFrameSinkClient_ReclaimResources_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<CompositorFrameSinkClient_ReclaimResources_Params_Data>(index_);
    }
    CompositorFrameSinkClient_ReclaimResources_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::viz::mojom::internal::ReturnedResource_Data>>> resources;

 private:
  CompositorFrameSinkClient_ReclaimResources_Params_Data();
  ~CompositorFrameSinkClient_ReclaimResources_Params_Data() = delete;
};
static_assert(sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data) == 16,
              "Bad sizeof(CompositorFrameSinkClient_ReclaimResources_Params_Data)");

}  // namespace internal
class CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView {
 public:
  CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView() {}

  CompositorFrameSink_SetNeedsBeginFrame_ParamsDataView(
      internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool needs_begin_frame() const {
    return data_->needs_begin_frame;
  }
 private:
  internal::CompositorFrameSink_SetNeedsBeginFrame_Params_Data* data_ = nullptr;
};

class CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView {
 public:
  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView() {}

  CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_ParamsDataView(
      internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CompositorFrameSink_SetWantsAnimateOnlyBeginFrames_Params_Data* data_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrame_ParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrame_ParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrame_ParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data* data,
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
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
  inline void GetHitTestRegionListDataView(
      ::viz::mojom::HitTestRegionListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTestRegionList(UserType* output) {
    auto* pointer = data_->hit_test_region_list.Get();
    return mojo::internal::Deserialize<::viz::mojom::HitTestRegionListDataView>(
        pointer, output, context_);
  }
  uint64_t submit_time() const {
    return data_->submit_time;
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data,
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
  inline void GetFrameDataView(
      ::viz::mojom::CompositorFrameDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrame(UserType* output) {
    auto* pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::viz::mojom::CompositorFrameDataView>(
        pointer, output, context_);
  }
  inline void GetHitTestRegionListDataView(
      ::viz::mojom::HitTestRegionListDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHitTestRegionList(UserType* output) {
    auto* pointer = data_->hit_test_region_list.Get();
    return mojo::internal::Deserialize<::viz::mojom::HitTestRegionListDataView>(
        pointer, output, context_);
  }
  uint64_t submit_time() const {
    return data_->submit_time;
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrameSync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView {
 public:
  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView() {}

  CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView(
      internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_SubmitCompositorFrameSync_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidNotProduceFrame_ParamsDataView {
 public:
  CompositorFrameSink_DidNotProduceFrame_ParamsDataView() {}

  CompositorFrameSink_DidNotProduceFrame_ParamsDataView(
      internal::CompositorFrameSink_DidNotProduceFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAckDataView(
      ::viz::mojom::BeginFrameAckDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAck(UserType* output) {
    auto* pointer = data_->ack.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameAckDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidNotProduceFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView {
 public:
  CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView() {}

  CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView(
      internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetIdDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidAllocateSharedBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView {
 public:
  CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView() {}

  CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView(
      internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gpu::mojom::MailboxDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxDataView>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSink_DidDeleteSharedBitmap_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView {
 public:
  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView() {}

  CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView(
      internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSinkClient_DidReceiveCompositorFrameAck_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_OnBeginFrame_ParamsDataView {
 public:
  CompositorFrameSinkClient_OnBeginFrame_ParamsDataView() {}

  CompositorFrameSinkClient_OnBeginFrame_ParamsDataView(
      internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetArgsDataView(
      ::viz::mojom::BeginFrameArgsDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArgs(UserType* output) {
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::viz::mojom::BeginFrameArgsDataView>(
        pointer, output, context_);
  }
  inline void GetPresentationsDataView(
      mojo::MapDataView<uint32_t, ::gfx::mojom::PresentationFeedbackDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPresentations(UserType* output) {
    auto* pointer = data_->presentations.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint32_t, ::gfx::mojom::PresentationFeedbackDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSinkClient_OnBeginFrame_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView {
 public:
  CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView() {}

  CompositorFrameSinkClient_OnBeginFramePausedChanged_ParamsDataView(
      internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool paused() const {
    return data_->paused;
  }
 private:
  internal::CompositorFrameSinkClient_OnBeginFramePausedChanged_Params_Data* data_ = nullptr;
};

class CompositorFrameSinkClient_ReclaimResources_ParamsDataView {
 public:
  CompositorFrameSinkClient_ReclaimResources_ParamsDataView() {}

  CompositorFrameSinkClient_ReclaimResources_ParamsDataView(
      internal::CompositorFrameSinkClient_ReclaimResources_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResourcesDataView(
      mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadResources(UserType* output) {
    auto* pointer = data_->resources.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>>(
        pointer, output, context_);
  }
 private:
  internal::CompositorFrameSinkClient_ReclaimResources_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};






inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrame_ParamsDataView::GetHitTestRegionListDataView(
    ::viz::mojom::HitTestRegionListDataView* output) {
  auto pointer = data_->hit_test_region_list.Get();
  *output = ::viz::mojom::HitTestRegionListDataView(pointer, context_);
}


inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetLocalSurfaceIdDataView(
    ::viz::mojom::LocalSurfaceIdDataView* output) {
  auto pointer = data_->local_surface_id.Get();
  *output = ::viz::mojom::LocalSurfaceIdDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetFrameDataView(
    ::viz::mojom::CompositorFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::viz::mojom::CompositorFrameDataView(pointer, context_);
}
inline void CompositorFrameSink_SubmitCompositorFrameSync_ParamsDataView::GetHitTestRegionListDataView(
    ::viz::mojom::HitTestRegionListDataView* output) {
  auto pointer = data_->hit_test_region_list.Get();
  *output = ::viz::mojom::HitTestRegionListDataView(pointer, context_);
}


inline void CompositorFrameSink_SubmitCompositorFrameSync_ResponseParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}


inline void CompositorFrameSink_DidNotProduceFrame_ParamsDataView::GetAckDataView(
    ::viz::mojom::BeginFrameAckDataView* output) {
  auto pointer = data_->ack.Get();
  *output = ::viz::mojom::BeginFrameAckDataView(pointer, context_);
}


inline void CompositorFrameSink_DidAllocateSharedBitmap_ParamsDataView::GetIdDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}


inline void CompositorFrameSink_DidDeleteSharedBitmap_ParamsDataView::GetIdDataView(
    ::gpu::mojom::MailboxDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gpu::mojom::MailboxDataView(pointer, context_);
}


inline void CompositorFrameSinkClient_DidReceiveCompositorFrameAck_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}


inline void CompositorFrameSinkClient_OnBeginFrame_ParamsDataView::GetArgsDataView(
    ::viz::mojom::BeginFrameArgsDataView* output) {
  auto pointer = data_->args.Get();
  *output = ::viz::mojom::BeginFrameArgsDataView(pointer, context_);
}
inline void CompositorFrameSinkClient_OnBeginFrame_ParamsDataView::GetPresentationsDataView(
    mojo::MapDataView<uint32_t, ::gfx::mojom::PresentationFeedbackDataView>* output) {
  auto pointer = data_->presentations.Get();
  *output = mojo::MapDataView<uint32_t, ::gfx::mojom::PresentationFeedbackDataView>(pointer, context_);
}




inline void CompositorFrameSinkClient_ReclaimResources_ParamsDataView::GetResourcesDataView(
    mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>* output) {
  auto pointer = data_->resources.Get();
  *output = mojo::ArrayDataView<::viz::mojom::ReturnedResourceDataView>(pointer, context_);
}

}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_COMPOSITOR_FRAME_SINK_MOJOM_PARAMS_DATA_H_