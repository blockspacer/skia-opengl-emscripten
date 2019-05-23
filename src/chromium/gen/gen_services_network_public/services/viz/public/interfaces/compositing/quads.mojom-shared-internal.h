// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom-shared-internal.h"
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared-internal.h"
#include "ui/gfx/mojo/color_space.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class DebugBorderQuadState_Data;
class RenderPassQuadState_Data;
class SolidColorQuadState_Data;
class StreamVideoQuadState_Data;
class SurfaceQuadState_Data;
class TextureQuadState_Data;
class TileQuadState_Data;
class YUVVideoQuadState_Data;
class VideoHoleQuadState_Data;
class DrawQuad_Data;
class DrawQuadState_Data;

struct ProtectedVideoState_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  DrawQuadState_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  DrawQuadState_Data() {}
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~DrawQuadState_Data() {}

  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DrawQuadState_Data));
      new (data()) DrawQuadState_Data();
    }

    void AllocateInline(mojo::internal::Buffer* serialization_buffer,
                        void* ptr) {
      const char* start = static_cast<const char*>(
          serialization_buffer->data());
      const char* slot = static_cast<const char*>(ptr);
      DCHECK_GT(slot, start);
      serialization_buffer_ = serialization_buffer;
      index_ = slot - start;
      new (data()) DrawQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DrawQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DrawQuadState_Data>(index_);
    }
    DrawQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<DrawQuadState_Tag>(0);
    data.unknown = 0U;
  }

  enum class DrawQuadState_Tag : uint32_t {

    
    DEBUG_BORDER_QUAD_STATE,
    
    RENDER_PASS_QUAD_STATE,
    
    SOLID_COLOR_QUAD_STATE,
    
    STREAM_VIDEO_QUAD_STATE,
    
    SURFACE_QUAD_STATE,
    
    TEXTURE_QUAD_STATE,
    
    TILE_QUAD_STATE,
    
    YUV_VIDEO_QUAD_STATE,
    
    VIDEO_HOLE_QUAD_STATE,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DebugBorderQuadState_Data> f_debug_border_quad_state;
    mojo::internal::Pointer<internal::RenderPassQuadState_Data> f_render_pass_quad_state;
    mojo::internal::Pointer<internal::SolidColorQuadState_Data> f_solid_color_quad_state;
    mojo::internal::Pointer<internal::StreamVideoQuadState_Data> f_stream_video_quad_state;
    mojo::internal::Pointer<internal::SurfaceQuadState_Data> f_surface_quad_state;
    mojo::internal::Pointer<internal::TextureQuadState_Data> f_texture_quad_state;
    mojo::internal::Pointer<internal::TileQuadState_Data> f_tile_quad_state;
    mojo::internal::Pointer<internal::YUVVideoQuadState_Data> f_yuv_video_quad_state;
    mojo::internal::Pointer<internal::VideoHoleQuadState_Data> f_video_hole_quad_state;
    uint64_t unknown;
  };

  uint32_t size;
  DrawQuadState_Tag tag;
  Union_ data;
};
static_assert(sizeof(DrawQuadState_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(DrawQuadState_Data)");
class  DebugBorderQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DebugBorderQuadState_Data));
      new (data()) DebugBorderQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DebugBorderQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DebugBorderQuadState_Data>(index_);
    }
    DebugBorderQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  int32_t width;

 private:
  DebugBorderQuadState_Data();
  ~DebugBorderQuadState_Data() = delete;
};
static_assert(sizeof(DebugBorderQuadState_Data) == 16,
              "Bad sizeof(DebugBorderQuadState_Data)");
// Used by DebugBorderQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DebugBorderQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DebugBorderQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DebugBorderQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DebugBorderQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DebugBorderQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  RenderPassQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(RenderPassQuadState_Data));
      new (data()) RenderPassQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    RenderPassQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<RenderPassQuadState_Data>(index_);
    }
    RenderPassQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t render_pass_id;
  uint32_t mask_resource_id;
  uint8_t force_anti_aliasing_off : 1;
  uint8_t pad2_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> mask_uv_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> mask_texture_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Vector2dF_Data> filters_scale;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> filters_origin;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> tex_coord_rect;
  float backdrop_filter_quality;
  uint8_t padfinal_[4];

 private:
  RenderPassQuadState_Data();
  ~RenderPassQuadState_Data() = delete;
};
static_assert(sizeof(RenderPassQuadState_Data) == 72,
              "Bad sizeof(RenderPassQuadState_Data)");
// Used by RenderPassQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct RenderPassQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  RenderPassQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~RenderPassQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    RenderPassQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    RenderPassQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SolidColorQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SolidColorQuadState_Data));
      new (data()) SolidColorQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SolidColorQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SolidColorQuadState_Data>(index_);
    }
    SolidColorQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t color;
  uint8_t force_anti_aliasing_off : 1;
  uint8_t padfinal_[3];

 private:
  SolidColorQuadState_Data();
  ~SolidColorQuadState_Data() = delete;
};
static_assert(sizeof(SolidColorQuadState_Data) == 16,
              "Bad sizeof(SolidColorQuadState_Data)");
// Used by SolidColorQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SolidColorQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SolidColorQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SolidColorQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SolidColorQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SolidColorQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  StreamVideoQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(StreamVideoQuadState_Data));
      new (data()) StreamVideoQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    StreamVideoQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<StreamVideoQuadState_Data>(index_);
    }
    StreamVideoQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t resource_id;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> resource_size_in_pixels;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> uv_top_left;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> uv_bottom_right;

 private:
  StreamVideoQuadState_Data();
  ~StreamVideoQuadState_Data() = delete;
};
static_assert(sizeof(StreamVideoQuadState_Data) == 40,
              "Bad sizeof(StreamVideoQuadState_Data)");
// Used by StreamVideoQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct StreamVideoQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  StreamVideoQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~StreamVideoQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    StreamVideoQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    StreamVideoQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  SurfaceQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(SurfaceQuadState_Data));
      new (data()) SurfaceQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    SurfaceQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<SurfaceQuadState_Data>(index_);
    }
    SurfaceQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::SurfaceRange_Data> surface_range;
  uint32_t default_background_color;
  uint8_t stretch_content_to_fill_bounds : 1;
  uint8_t padfinal_[3];

 private:
  SurfaceQuadState_Data();
  ~SurfaceQuadState_Data() = delete;
};
static_assert(sizeof(SurfaceQuadState_Data) == 24,
              "Bad sizeof(SurfaceQuadState_Data)");
// Used by SurfaceQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct SurfaceQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  SurfaceQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~SurfaceQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    SurfaceQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    SurfaceQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TextureQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TextureQuadState_Data));
      new (data()) TextureQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TextureQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TextureQuadState_Data>(index_);
    }
    TextureQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t resource_id;
  uint8_t premultiplied_alpha : 1;
  uint8_t y_flipped : 1;
  uint8_t nearest_neighbor : 1;
  uint8_t secure_output_only : 1;
  uint8_t pad4_[3];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> resource_size_in_pixels;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> uv_top_left;
  mojo::internal::Pointer<::gfx::mojom::internal::PointF_Data> uv_bottom_right;
  uint32_t background_color;
  int32_t protected_video_type;
  mojo::internal::Pointer<mojo::internal::Array_Data<float>> vertex_opacity;

 private:
  TextureQuadState_Data();
  ~TextureQuadState_Data() = delete;
};
static_assert(sizeof(TextureQuadState_Data) == 56,
              "Bad sizeof(TextureQuadState_Data)");
// Used by TextureQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TextureQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TextureQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TextureQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TextureQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TextureQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  TileQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(TileQuadState_Data));
      new (data()) TileQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    TileQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<TileQuadState_Data>(index_);
    }
    TileQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> tex_coord_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> texture_size;
  uint8_t is_premultiplied : 1;
  uint8_t nearest_neighbor : 1;
  uint8_t force_anti_aliasing_off : 1;
  uint8_t pad4_[3];
  uint32_t resource_id;

 private:
  TileQuadState_Data();
  ~TileQuadState_Data() = delete;
};
static_assert(sizeof(TileQuadState_Data) == 32,
              "Bad sizeof(TileQuadState_Data)");
// Used by TileQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TileQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TileQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TileQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    TileQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TileQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  YUVVideoQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(YUVVideoQuadState_Data));
      new (data()) YUVVideoQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    YUVVideoQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<YUVVideoQuadState_Data>(index_);
    }
    YUVVideoQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> ya_tex_coord_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::RectF_Data> uv_tex_coord_rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> ya_tex_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> uv_tex_size;
  uint32_t y_plane_resource_id;
  uint32_t u_plane_resource_id;
  uint32_t v_plane_resource_id;
  uint32_t a_plane_resource_id;
  float resource_offset;
  float resource_multiplier;
  uint32_t bits_per_channel;
  int32_t protected_video_type;
  mojo::internal::Pointer<::gfx::mojom::internal::ColorSpace_Data> video_color_space;

 private:
  YUVVideoQuadState_Data();
  ~YUVVideoQuadState_Data() = delete;
};
static_assert(sizeof(YUVVideoQuadState_Data) == 80,
              "Bad sizeof(YUVVideoQuadState_Data)");
// Used by YUVVideoQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct YUVVideoQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  YUVVideoQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~YUVVideoQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    YUVVideoQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    YUVVideoQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  VideoHoleQuadState_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(VideoHoleQuadState_Data));
      new (data()) VideoHoleQuadState_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    VideoHoleQuadState_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<VideoHoleQuadState_Data>(index_);
    }
    VideoHoleQuadState_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> overlay_plane_id;

 private:
  VideoHoleQuadState_Data();
  ~VideoHoleQuadState_Data() = delete;
};
static_assert(sizeof(VideoHoleQuadState_Data) == 16,
              "Bad sizeof(VideoHoleQuadState_Data)");
// Used by VideoHoleQuadState::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct VideoHoleQuadState_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  VideoHoleQuadState_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~VideoHoleQuadState_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    VideoHoleQuadState_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    VideoHoleQuadState_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DrawQuad_Data {
 public:
  class BufferWriter {
   public:
    BufferWriter() = default;

    void Allocate(mojo::internal::Buffer* serialization_buffer) {
      serialization_buffer_ = serialization_buffer;
      index_ = serialization_buffer_->Allocate(sizeof(DrawQuad_Data));
      new (data()) DrawQuad_Data();
    }

    bool is_null() const { return !serialization_buffer_; }
    DrawQuad_Data* data() {
      DCHECK(!is_null());
      return serialization_buffer_->Get<DrawQuad_Data>(index_);
    }
    DrawQuad_Data* operator->() { return data(); }

   private:
    mojo::internal::Buffer* serialization_buffer_ = nullptr;
    size_t index_ = 0;

    DISALLOW_COPY_AND_ASSIGN(BufferWriter);
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> rect;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> visible_rect;
  uint8_t needs_blending : 1;
  uint8_t pad2_[7];
  mojo::internal::Pointer<::viz::mojom::internal::SharedQuadState_Data> sqs;
  internal::DrawQuadState_Data draw_quad_state;

 private:
  DrawQuad_Data();
  ~DrawQuad_Data() = delete;
};
static_assert(sizeof(DrawQuad_Data) == 56,
              "Bad sizeof(DrawQuad_Data)");
// Used by DrawQuad::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DrawQuad_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DrawQuad_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DrawQuad_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::internal::SerializationContext* context,
                 mojo::internal::Buffer* buffer) override {
    DrawQuad_Data::BufferWriter writer;
    mojo::internal::Serialize<DataView>(user_data_, buffer, &writer, context);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DrawQuad_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_SHARED_INTERNAL_H_