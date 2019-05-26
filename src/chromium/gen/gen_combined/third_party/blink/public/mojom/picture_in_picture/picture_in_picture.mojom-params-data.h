// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data));
      new (data()) PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data>(index_);
    }
    PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data* operator->() { return data(); }

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
  PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data();
  ~PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data() = delete;
};
static_assert(sizeof(PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data) == 16,
              "Bad sizeof(PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_StartSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_StartSession_Params_Data));
      new (data()) PictureInPictureService_StartSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_StartSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_StartSession_Params_Data>(index_);
    }
    PictureInPictureService_StartSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t player_id;
  uint8_t show_play_pause_button : 1;
  uint8_t show_mute_button : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;

 private:
  PictureInPictureService_StartSession_Params_Data();
  ~PictureInPictureService_StartSession_Params_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_StartSession_Params_Data) == 32,
              "Bad sizeof(PictureInPictureService_StartSession_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_StartSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_StartSession_ResponseParams_Data));
      new (data()) PictureInPictureService_StartSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_StartSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_StartSession_ResponseParams_Data>(index_);
    }
    PictureInPictureService_StartSession_ResponseParams_Data* operator->() { return data(); }

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
  PictureInPictureService_StartSession_ResponseParams_Data();
  ~PictureInPictureService_StartSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_StartSession_ResponseParams_Data) == 16,
              "Bad sizeof(PictureInPictureService_StartSession_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_EndSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_EndSession_Params_Data));
      new (data()) PictureInPictureService_EndSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_EndSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_EndSession_Params_Data>(index_);
    }
    PictureInPictureService_EndSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PictureInPictureService_EndSession_Params_Data();
  ~PictureInPictureService_EndSession_Params_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_EndSession_Params_Data) == 8,
              "Bad sizeof(PictureInPictureService_EndSession_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_EndSession_ResponseParams_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_EndSession_ResponseParams_Data));
      new (data()) PictureInPictureService_EndSession_ResponseParams_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_EndSession_ResponseParams_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_EndSession_ResponseParams_Data>(index_);
    }
    PictureInPictureService_EndSession_ResponseParams_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  PictureInPictureService_EndSession_ResponseParams_Data();
  ~PictureInPictureService_EndSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_EndSession_ResponseParams_Data) == 8,
              "Bad sizeof(PictureInPictureService_EndSession_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_UpdateSession_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_UpdateSession_Params_Data));
      new (data()) PictureInPictureService_UpdateSession_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_UpdateSession_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_UpdateSession_Params_Data>(index_);
    }
    PictureInPictureService_UpdateSession_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t player_id;
  uint8_t show_play_pause_button : 1;
  uint8_t show_mute_button : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceId_Data> surface_id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> natural_size;

 private:
  PictureInPictureService_UpdateSession_Params_Data();
  ~PictureInPictureService_UpdateSession_Params_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_UpdateSession_Params_Data) == 32,
              "Bad sizeof(PictureInPictureService_UpdateSession_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PictureInPictureService_SetDelegate_Params_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(PictureInPictureService_SetDelegate_Params_Data));
      new (data()) PictureInPictureService_SetDelegate_Params_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    PictureInPictureService_SetDelegate_Params_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<PictureInPictureService_SetDelegate_Params_Data>(index_);
    }
    PictureInPictureService_SetDelegate_Params_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data delegate;

 private:
  PictureInPictureService_SetDelegate_Params_Data();
  ~PictureInPictureService_SetDelegate_Params_Data() = delete;
};
static_assert(sizeof(PictureInPictureService_SetDelegate_Params_Data) == 16,
              "Bad sizeof(PictureInPictureService_SetDelegate_Params_Data)");

}  // namespace internal
class PictureInPictureDelegate_PictureInPictureWindowSizeChanged_ParamsDataView {
 public:
  PictureInPictureDelegate_PictureInPictureWindowSizeChanged_ParamsDataView() {}

  PictureInPictureDelegate_PictureInPictureWindowSizeChanged_ParamsDataView(
      internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data* data,
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
  internal::PictureInPictureDelegate_PictureInPictureWindowSizeChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureInPictureService_StartSession_ParamsDataView {
 public:
  PictureInPictureService_StartSession_ParamsDataView() {}

  PictureInPictureService_StartSession_ParamsDataView(
      internal::PictureInPictureService_StartSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t player_id() const {
    return data_->player_id;
  }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool show_play_pause_button() const {
    return data_->show_play_pause_button;
  }
  bool show_mute_button() const {
    return data_->show_mute_button;
  }
 private:
  internal::PictureInPictureService_StartSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureInPictureService_StartSession_ResponseParamsDataView {
 public:
  PictureInPictureService_StartSession_ResponseParamsDataView() {}

  PictureInPictureService_StartSession_ResponseParamsDataView(
      internal::PictureInPictureService_StartSession_ResponseParams_Data* data,
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
  internal::PictureInPictureService_StartSession_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureInPictureService_EndSession_ParamsDataView {
 public:
  PictureInPictureService_EndSession_ParamsDataView() {}

  PictureInPictureService_EndSession_ParamsDataView(
      internal::PictureInPictureService_EndSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PictureInPictureService_EndSession_Params_Data* data_ = nullptr;
};

class PictureInPictureService_EndSession_ResponseParamsDataView {
 public:
  PictureInPictureService_EndSession_ResponseParamsDataView() {}

  PictureInPictureService_EndSession_ResponseParamsDataView(
      internal::PictureInPictureService_EndSession_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PictureInPictureService_EndSession_ResponseParams_Data* data_ = nullptr;
};

class PictureInPictureService_UpdateSession_ParamsDataView {
 public:
  PictureInPictureService_UpdateSession_ParamsDataView() {}

  PictureInPictureService_UpdateSession_ParamsDataView(
      internal::PictureInPictureService_UpdateSession_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t player_id() const {
    return data_->player_id;
  }
  inline void GetSurfaceIdDataView(
      ::viz::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSurfaceId(UserType* output) {
    auto* pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::viz::mojom::SurfaceIdDataView>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNaturalSize(UserType* output) {
    auto* pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, context_);
  }
  bool show_play_pause_button() const {
    return data_->show_play_pause_button;
  }
  bool show_mute_button() const {
    return data_->show_mute_button;
  }
 private:
  internal::PictureInPictureService_UpdateSession_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PictureInPictureService_SetDelegate_ParamsDataView {
 public:
  PictureInPictureService_SetDelegate_ParamsDataView() {}

  PictureInPictureService_SetDelegate_ParamsDataView(
      internal::PictureInPictureService_SetDelegate_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeDelegate() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::PictureInPictureDelegatePtrDataView>(
            &data_->delegate, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PictureInPictureService_SetDelegate_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PictureInPictureDelegate_PictureInPictureWindowSizeChanged_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void PictureInPictureService_StartSession_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void PictureInPictureService_StartSession_ParamsDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}


inline void PictureInPictureService_StartSession_ResponseParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}






inline void PictureInPictureService_UpdateSession_ParamsDataView::GetSurfaceIdDataView(
    ::viz::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::viz::mojom::SurfaceIdDataView(pointer, context_);
}
inline void PictureInPictureService_UpdateSession_ParamsDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_PARAMS_DATA_H_