// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_

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
namespace ws {
namespace mojom {
namespace internal {
class  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data));
      new (data()) GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data>(index_);
    }
    GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  int32_t format;
  int32_t usage;

 private:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data();
  ~GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data) == 32,
              "Bad sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data)");
class  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data));
      new (data()) GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data>(index_);
    }
    GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferHandle_Data> buffer_handle;

 private:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data();
  ~GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data)");
class  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data));
      new (data()) GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data>(index_);
    }
    GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data();
  ~GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data) == 24,
              "Bad sizeof(GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data)");
class  Gpu_CreateGpuMemoryBufferFactory_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateGpuMemoryBufferFactory_Params_Data));
      new (data()) Gpu_CreateGpuMemoryBufferFactory_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateGpuMemoryBufferFactory_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateGpuMemoryBufferFactory_Params_Data>(index_);
    }
    Gpu_CreateGpuMemoryBufferFactory_Params_Data* operator->() { return data(); }

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
  Gpu_CreateGpuMemoryBufferFactory_Params_Data();
  ~Gpu_CreateGpuMemoryBufferFactory_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateGpuMemoryBufferFactory_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateGpuMemoryBufferFactory_Params_Data)");
class  Gpu_EstablishGpuChannel_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_EstablishGpuChannel_Params_Data));
      new (data()) Gpu_EstablishGpuChannel_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_EstablishGpuChannel_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_EstablishGpuChannel_Params_Data>(index_);
    }
    Gpu_EstablishGpuChannel_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  Gpu_EstablishGpuChannel_Params_Data();
  ~Gpu_EstablishGpuChannel_Params_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_Params_Data) == 8,
              "Bad sizeof(Gpu_EstablishGpuChannel_Params_Data)");
class  Gpu_EstablishGpuChannel_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data));
      new (data()) Gpu_EstablishGpuChannel_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_EstablishGpuChannel_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_EstablishGpuChannel_ResponseParams_Data>(index_);
    }
    Gpu_EstablishGpuChannel_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  mojo::internal::Handle_Data channel_handle;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuFeatureInfo_Data> gpu_feature_info;

 private:
  Gpu_EstablishGpuChannel_ResponseParams_Data();
  ~Gpu_EstablishGpuChannel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data) == 32,
              "Bad sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data)");
class  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data));
      new (data()) Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data>(index_);
    }
    Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data vea_provider;
  uint8_t padfinal_[4];

 private:
  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data();
  ~Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data)");

}  // namespace internal
class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView {
 public:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView() {}

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView(
      internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, context_);
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSize(UserType* output) {
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::gfx::mojom::BufferFormat>(
        data_value, output);
  }

  ::gfx::mojom::BufferFormat format() const {
    return static_cast<::gfx::mojom::BufferFormat>(data_->format);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsage(UserType* output) const {
    auto data_value = data_->usage;
    return mojo::internal::Deserialize<::gfx::mojom::BufferUsage>(
        data_value, output);
  }

  ::gfx::mojom::BufferUsage usage() const {
    return static_cast<::gfx::mojom::BufferUsage>(data_->usage);
  }
 private:
  internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView {
 public:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView() {}

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView(
      internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferHandleDataView(
      ::gfx::mojom::GpuMemoryBufferHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBufferHandle(UserType* output) {
    auto* pointer = data_->buffer_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView {
 public:
  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView() {}

  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView(
      internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, context_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSyncToken(UserType* output) {
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Gpu_CreateGpuMemoryBufferFactory_ParamsDataView {
 public:
  Gpu_CreateGpuMemoryBufferFactory_ParamsDataView() {}

  Gpu_CreateGpuMemoryBufferFactory_ParamsDataView(
      internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::ws::mojom::GpuMemoryBufferFactoryRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Gpu_EstablishGpuChannel_ParamsDataView {
 public:
  Gpu_EstablishGpuChannel_ParamsDataView() {}

  Gpu_EstablishGpuChannel_ParamsDataView(
      internal::Gpu_EstablishGpuChannel_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Gpu_EstablishGpuChannel_Params_Data* data_ = nullptr;
};

class Gpu_EstablishGpuChannel_ResponseParamsDataView {
 public:
  Gpu_EstablishGpuChannel_ResponseParamsDataView() {}

  Gpu_EstablishGpuChannel_ResponseParamsDataView(
      internal::Gpu_EstablishGpuChannel_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t client_id() const {
    return data_->client_id;
  }
  mojo::ScopedMessagePipeHandle TakeChannelHandle() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->channel_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetGpuInfoDataView(
      ::gpu::mojom::GpuInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuInfo(UserType* output) {
    auto* pointer = data_->gpu_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuInfoDataView>(
        pointer, output, context_);
  }
  inline void GetGpuFeatureInfoDataView(
      ::gpu::mojom::GpuFeatureInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadGpuFeatureInfo(UserType* output) {
    auto* pointer = data_->gpu_feature_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuFeatureInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::Gpu_EstablishGpuChannel_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView {
 public:
  Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView() {}

  Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView(
      internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVeaProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoEncodeAcceleratorProviderRequestDataView>(
            &data_->vea_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView::GetBufferHandleDataView(
    ::gfx::mojom::GpuMemoryBufferHandleDataView* output) {
  auto pointer = data_->buffer_handle.Get();
  *output = ::gfx::mojom::GpuMemoryBufferHandleDataView(pointer, context_);
}


inline void GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}






inline void Gpu_EstablishGpuChannel_ResponseParamsDataView::GetGpuInfoDataView(
    ::gpu::mojom::GpuInfoDataView* output) {
  auto pointer = data_->gpu_info.Get();
  *output = ::gpu::mojom::GpuInfoDataView(pointer, context_);
}
inline void Gpu_EstablishGpuChannel_ResponseParamsDataView::GetGpuFeatureInfoDataView(
    ::gpu::mojom::GpuFeatureInfoDataView* output) {
  auto pointer = data_->gpu_feature_info.Get();
  *output = ::gpu::mojom::GpuFeatureInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ws

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_