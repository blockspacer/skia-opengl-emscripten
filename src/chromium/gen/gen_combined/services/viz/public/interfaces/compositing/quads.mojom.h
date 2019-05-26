// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "services/viz/public/interfaces/compositing/quads.mojom-shared.h"
#include "services/viz/public/interfaces/compositing/quads.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/viz/public/interfaces/compositing/surface_range.mojom.h"
#include "services/viz/public/interfaces/compositing/shared_quad_state.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/color_space.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace viz {
namespace mojom {





class  DebugBorderQuadState {
 public:
  using DataView = DebugBorderQuadStateDataView;
  using Data_ = internal::DebugBorderQuadState_Data;

  template <typename... Args>
  static DebugBorderQuadStatePtr New(Args&&... args) {
    return DebugBorderQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DebugBorderQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<DebugBorderQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DebugBorderQuadState>::Convert(*this);
  }


  DebugBorderQuadState();

  DebugBorderQuadState(
      uint32_t color,
      int32_t width);

  ~DebugBorderQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DebugBorderQuadStatePtr>
  DebugBorderQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DebugBorderQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DebugBorderQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DebugBorderQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DebugBorderQuadState_UnserializedMessageContext<
            UserType, DebugBorderQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DebugBorderQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DebugBorderQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DebugBorderQuadState_UnserializedMessageContext<
            UserType, DebugBorderQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DebugBorderQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t color;
  
  int32_t width;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  SolidColorQuadState {
 public:
  using DataView = SolidColorQuadStateDataView;
  using Data_ = internal::SolidColorQuadState_Data;

  template <typename... Args>
  static SolidColorQuadStatePtr New(Args&&... args) {
    return SolidColorQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SolidColorQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SolidColorQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SolidColorQuadState>::Convert(*this);
  }


  SolidColorQuadState();

  SolidColorQuadState(
      uint32_t color,
      bool force_anti_aliasing_off);

  ~SolidColorQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SolidColorQuadStatePtr>
  SolidColorQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SolidColorQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SolidColorQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SolidColorQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SolidColorQuadState_UnserializedMessageContext<
            UserType, SolidColorQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SolidColorQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SolidColorQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SolidColorQuadState_UnserializedMessageContext<
            UserType, SolidColorQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SolidColorQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t color;
  
  bool force_anti_aliasing_off;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};












class  DrawQuadState {
 public:
  using DataView = DrawQuadStateDataView;
  using Data_ = internal::DrawQuadState_Data;
  using Tag = Data_::DrawQuadState_Tag;

  static DrawQuadStatePtr New() {
    return DrawQuadStatePtr(base::in_place);
  }
  // Construct an instance holding |debug_border_quad_state|.
  static DrawQuadStatePtr
  NewDebugBorderQuadState(
      DebugBorderQuadStatePtr debug_border_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_debug_border_quad_state(std::move(debug_border_quad_state));
    return result;
  }
  // Construct an instance holding |render_pass_quad_state|.
  static DrawQuadStatePtr
  NewRenderPassQuadState(
      RenderPassQuadStatePtr render_pass_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_render_pass_quad_state(std::move(render_pass_quad_state));
    return result;
  }
  // Construct an instance holding |solid_color_quad_state|.
  static DrawQuadStatePtr
  NewSolidColorQuadState(
      SolidColorQuadStatePtr solid_color_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_solid_color_quad_state(std::move(solid_color_quad_state));
    return result;
  }
  // Construct an instance holding |stream_video_quad_state|.
  static DrawQuadStatePtr
  NewStreamVideoQuadState(
      StreamVideoQuadStatePtr stream_video_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_stream_video_quad_state(std::move(stream_video_quad_state));
    return result;
  }
  // Construct an instance holding |surface_quad_state|.
  static DrawQuadStatePtr
  NewSurfaceQuadState(
      SurfaceQuadStatePtr surface_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_surface_quad_state(std::move(surface_quad_state));
    return result;
  }
  // Construct an instance holding |texture_quad_state|.
  static DrawQuadStatePtr
  NewTextureQuadState(
      TextureQuadStatePtr texture_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_texture_quad_state(std::move(texture_quad_state));
    return result;
  }
  // Construct an instance holding |tile_quad_state|.
  static DrawQuadStatePtr
  NewTileQuadState(
      TileQuadStatePtr tile_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_tile_quad_state(std::move(tile_quad_state));
    return result;
  }
  // Construct an instance holding |yuv_video_quad_state|.
  static DrawQuadStatePtr
  NewYuvVideoQuadState(
      YUVVideoQuadStatePtr yuv_video_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_yuv_video_quad_state(std::move(yuv_video_quad_state));
    return result;
  }
  // Construct an instance holding |video_hole_quad_state|.
  static DrawQuadStatePtr
  NewVideoHoleQuadState(
      VideoHoleQuadStatePtr video_hole_quad_state) {
    auto result = DrawQuadStatePtr(base::in_place);
    result->set_video_hole_quad_state(std::move(video_hole_quad_state));
    return result;
  }

  template <typename U>
  static DrawQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<DrawQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DrawQuadState>::Convert(*this);
  }

  DrawQuadState();
  ~DrawQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = DrawQuadStatePtr>
  DrawQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DrawQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_debug_border_quad_state() const { return tag_ == Tag::DEBUG_BORDER_QUAD_STATE; }

  
  DebugBorderQuadStatePtr& get_debug_border_quad_state() const {
    DCHECK(tag_ == Tag::DEBUG_BORDER_QUAD_STATE);
    return *(data_.debug_border_quad_state);
  }

  
  void set_debug_border_quad_state(
      DebugBorderQuadStatePtr debug_border_quad_state);
  
  bool is_render_pass_quad_state() const { return tag_ == Tag::RENDER_PASS_QUAD_STATE; }

  
  RenderPassQuadStatePtr& get_render_pass_quad_state() const {
    DCHECK(tag_ == Tag::RENDER_PASS_QUAD_STATE);
    return *(data_.render_pass_quad_state);
  }

  
  void set_render_pass_quad_state(
      RenderPassQuadStatePtr render_pass_quad_state);
  
  bool is_solid_color_quad_state() const { return tag_ == Tag::SOLID_COLOR_QUAD_STATE; }

  
  SolidColorQuadStatePtr& get_solid_color_quad_state() const {
    DCHECK(tag_ == Tag::SOLID_COLOR_QUAD_STATE);
    return *(data_.solid_color_quad_state);
  }

  
  void set_solid_color_quad_state(
      SolidColorQuadStatePtr solid_color_quad_state);
  
  bool is_stream_video_quad_state() const { return tag_ == Tag::STREAM_VIDEO_QUAD_STATE; }

  
  StreamVideoQuadStatePtr& get_stream_video_quad_state() const {
    DCHECK(tag_ == Tag::STREAM_VIDEO_QUAD_STATE);
    return *(data_.stream_video_quad_state);
  }

  
  void set_stream_video_quad_state(
      StreamVideoQuadStatePtr stream_video_quad_state);
  
  bool is_surface_quad_state() const { return tag_ == Tag::SURFACE_QUAD_STATE; }

  
  SurfaceQuadStatePtr& get_surface_quad_state() const {
    DCHECK(tag_ == Tag::SURFACE_QUAD_STATE);
    return *(data_.surface_quad_state);
  }

  
  void set_surface_quad_state(
      SurfaceQuadStatePtr surface_quad_state);
  
  bool is_texture_quad_state() const { return tag_ == Tag::TEXTURE_QUAD_STATE; }

  
  TextureQuadStatePtr& get_texture_quad_state() const {
    DCHECK(tag_ == Tag::TEXTURE_QUAD_STATE);
    return *(data_.texture_quad_state);
  }

  
  void set_texture_quad_state(
      TextureQuadStatePtr texture_quad_state);
  
  bool is_tile_quad_state() const { return tag_ == Tag::TILE_QUAD_STATE; }

  
  TileQuadStatePtr& get_tile_quad_state() const {
    DCHECK(tag_ == Tag::TILE_QUAD_STATE);
    return *(data_.tile_quad_state);
  }

  
  void set_tile_quad_state(
      TileQuadStatePtr tile_quad_state);
  
  bool is_yuv_video_quad_state() const { return tag_ == Tag::YUV_VIDEO_QUAD_STATE; }

  
  YUVVideoQuadStatePtr& get_yuv_video_quad_state() const {
    DCHECK(tag_ == Tag::YUV_VIDEO_QUAD_STATE);
    return *(data_.yuv_video_quad_state);
  }

  
  void set_yuv_video_quad_state(
      YUVVideoQuadStatePtr yuv_video_quad_state);
  
  bool is_video_hole_quad_state() const { return tag_ == Tag::VIDEO_HOLE_QUAD_STATE; }

  
  VideoHoleQuadStatePtr& get_video_hole_quad_state() const {
    DCHECK(tag_ == Tag::VIDEO_HOLE_QUAD_STATE);
    return *(data_.video_hole_quad_state);
  }

  
  void set_video_hole_quad_state(
      VideoHoleQuadStatePtr video_hole_quad_state);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DrawQuadState::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<DrawQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    DebugBorderQuadStatePtr* debug_border_quad_state;
    RenderPassQuadStatePtr* render_pass_quad_state;
    SolidColorQuadStatePtr* solid_color_quad_state;
    StreamVideoQuadStatePtr* stream_video_quad_state;
    SurfaceQuadStatePtr* surface_quad_state;
    TextureQuadStatePtr* texture_quad_state;
    TileQuadStatePtr* tile_quad_state;
    YUVVideoQuadStatePtr* yuv_video_quad_state;
    VideoHoleQuadStatePtr* video_hole_quad_state;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};






class  RenderPassQuadState {
 public:
  using DataView = RenderPassQuadStateDataView;
  using Data_ = internal::RenderPassQuadState_Data;

  template <typename... Args>
  static RenderPassQuadStatePtr New(Args&&... args) {
    return RenderPassQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RenderPassQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<RenderPassQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderPassQuadState>::Convert(*this);
  }


  RenderPassQuadState();

  RenderPassQuadState(
      uint64_t render_pass_id,
      uint32_t mask_resource_id,
      const gfx::RectF& mask_uv_rect,
      const gfx::Size& mask_texture_size,
      const gfx::Vector2dF& filters_scale,
      const gfx::PointF& filters_origin,
      const gfx::RectF& tex_coord_rect,
      bool force_anti_aliasing_off,
      float backdrop_filter_quality);

  ~RenderPassQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderPassQuadStatePtr>
  RenderPassQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RenderPassQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RenderPassQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RenderPassQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RenderPassQuadState_UnserializedMessageContext<
            UserType, RenderPassQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<RenderPassQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RenderPassQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RenderPassQuadState_UnserializedMessageContext<
            UserType, RenderPassQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RenderPassQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t render_pass_id;
  
  uint32_t mask_resource_id;
  
  gfx::RectF mask_uv_rect;
  
  gfx::Size mask_texture_size;
  
  gfx::Vector2dF filters_scale;
  
  gfx::PointF filters_origin;
  
  gfx::RectF tex_coord_rect;
  
  bool force_anti_aliasing_off;
  
  float backdrop_filter_quality;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class  StreamVideoQuadState {
 public:
  using DataView = StreamVideoQuadStateDataView;
  using Data_ = internal::StreamVideoQuadState_Data;

  template <typename... Args>
  static StreamVideoQuadStatePtr New(Args&&... args) {
    return StreamVideoQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StreamVideoQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<StreamVideoQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamVideoQuadState>::Convert(*this);
  }


  StreamVideoQuadState();

  StreamVideoQuadState(
      uint32_t resource_id,
      const gfx::Size& resource_size_in_pixels,
      const gfx::PointF& uv_top_left,
      const gfx::PointF& uv_bottom_right);

  ~StreamVideoQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StreamVideoQuadStatePtr>
  StreamVideoQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StreamVideoQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StreamVideoQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StreamVideoQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StreamVideoQuadState_UnserializedMessageContext<
            UserType, StreamVideoQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StreamVideoQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return StreamVideoQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StreamVideoQuadState_UnserializedMessageContext<
            UserType, StreamVideoQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StreamVideoQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t resource_id;
  
  gfx::Size resource_size_in_pixels;
  
  gfx::PointF uv_top_left;
  
  gfx::PointF uv_bottom_right;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SurfaceQuadState {
 public:
  using DataView = SurfaceQuadStateDataView;
  using Data_ = internal::SurfaceQuadState_Data;

  template <typename... Args>
  static SurfaceQuadStatePtr New(Args&&... args) {
    return SurfaceQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceQuadState>::Convert(*this);
  }


  SurfaceQuadState();

  SurfaceQuadState(
      const viz::SurfaceRange& surface_range,
      uint32_t default_background_color,
      bool stretch_content_to_fill_bounds);

  ~SurfaceQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceQuadStatePtr>
  SurfaceQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceQuadState_UnserializedMessageContext<
            UserType, SurfaceQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SurfaceQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceQuadState_UnserializedMessageContext<
            UserType, SurfaceQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  viz::SurfaceRange surface_range;
  
  uint32_t default_background_color;
  
  bool stretch_content_to_fill_bounds;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  TextureQuadState {
 public:
  using DataView = TextureQuadStateDataView;
  using Data_ = internal::TextureQuadState_Data;

  template <typename... Args>
  static TextureQuadStatePtr New(Args&&... args) {
    return TextureQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TextureQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<TextureQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextureQuadState>::Convert(*this);
  }


  TextureQuadState();

  TextureQuadState(
      uint32_t resource_id,
      const gfx::Size& resource_size_in_pixels,
      bool premultiplied_alpha,
      const gfx::PointF& uv_top_left,
      const gfx::PointF& uv_bottom_right,
      uint32_t background_color,
      const std::vector<float>& vertex_opacity,
      bool y_flipped,
      bool nearest_neighbor,
      bool secure_output_only,
      ProtectedVideoState protected_video_type);

  ~TextureQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextureQuadStatePtr>
  TextureQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextureQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TextureQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TextureQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TextureQuadState_UnserializedMessageContext<
            UserType, TextureQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TextureQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TextureQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TextureQuadState_UnserializedMessageContext<
            UserType, TextureQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TextureQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t resource_id;
  
  gfx::Size resource_size_in_pixels;
  
  bool premultiplied_alpha;
  
  gfx::PointF uv_top_left;
  
  gfx::PointF uv_bottom_right;
  
  uint32_t background_color;
  
  std::vector<float> vertex_opacity;
  
  bool y_flipped;
  
  bool nearest_neighbor;
  
  bool secure_output_only;
  
  ProtectedVideoState protected_video_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  TileQuadState {
 public:
  using DataView = TileQuadStateDataView;
  using Data_ = internal::TileQuadState_Data;

  template <typename... Args>
  static TileQuadStatePtr New(Args&&... args) {
    return TileQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TileQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<TileQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TileQuadState>::Convert(*this);
  }


  TileQuadState();

  TileQuadState(
      const gfx::RectF& tex_coord_rect,
      const gfx::Size& texture_size,
      bool is_premultiplied,
      uint32_t resource_id,
      bool nearest_neighbor,
      bool force_anti_aliasing_off);

  ~TileQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TileQuadStatePtr>
  TileQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TileQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TileQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TileQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TileQuadState_UnserializedMessageContext<
            UserType, TileQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TileQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TileQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TileQuadState_UnserializedMessageContext<
            UserType, TileQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TileQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::RectF tex_coord_rect;
  
  gfx::Size texture_size;
  
  bool is_premultiplied;
  
  uint32_t resource_id;
  
  bool nearest_neighbor;
  
  bool force_anti_aliasing_off;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  YUVVideoQuadState {
 public:
  using DataView = YUVVideoQuadStateDataView;
  using Data_ = internal::YUVVideoQuadState_Data;

  template <typename... Args>
  static YUVVideoQuadStatePtr New(Args&&... args) {
    return YUVVideoQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static YUVVideoQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<YUVVideoQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, YUVVideoQuadState>::Convert(*this);
  }


  YUVVideoQuadState();

  YUVVideoQuadState(
      const gfx::RectF& ya_tex_coord_rect,
      const gfx::RectF& uv_tex_coord_rect,
      const gfx::Size& ya_tex_size,
      const gfx::Size& uv_tex_size,
      uint32_t y_plane_resource_id,
      uint32_t u_plane_resource_id,
      uint32_t v_plane_resource_id,
      uint32_t a_plane_resource_id,
      float resource_offset,
      float resource_multiplier,
      uint32_t bits_per_channel,
      const gfx::ColorSpace& video_color_space,
      ProtectedVideoState protected_video_type);

  ~YUVVideoQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = YUVVideoQuadStatePtr>
  YUVVideoQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, YUVVideoQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        YUVVideoQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        YUVVideoQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::YUVVideoQuadState_UnserializedMessageContext<
            UserType, YUVVideoQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<YUVVideoQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return YUVVideoQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::YUVVideoQuadState_UnserializedMessageContext<
            UserType, YUVVideoQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<YUVVideoQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::RectF ya_tex_coord_rect;
  
  gfx::RectF uv_tex_coord_rect;
  
  gfx::Size ya_tex_size;
  
  gfx::Size uv_tex_size;
  
  uint32_t y_plane_resource_id;
  
  uint32_t u_plane_resource_id;
  
  uint32_t v_plane_resource_id;
  
  uint32_t a_plane_resource_id;
  
  float resource_offset;
  
  float resource_multiplier;
  
  uint32_t bits_per_channel;
  
  gfx::ColorSpace video_color_space;
  
  ProtectedVideoState protected_video_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  VideoHoleQuadState {
 public:
  using DataView = VideoHoleQuadStateDataView;
  using Data_ = internal::VideoHoleQuadState_Data;

  template <typename... Args>
  static VideoHoleQuadStatePtr New(Args&&... args) {
    return VideoHoleQuadStatePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoHoleQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<VideoHoleQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoHoleQuadState>::Convert(*this);
  }


  VideoHoleQuadState();

  explicit VideoHoleQuadState(
      const base::UnguessableToken& overlay_plane_id);

  ~VideoHoleQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoHoleQuadStatePtr>
  VideoHoleQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoHoleQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoHoleQuadState::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoHoleQuadState::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoHoleQuadState_UnserializedMessageContext<
            UserType, VideoHoleQuadState::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoHoleQuadState::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return VideoHoleQuadState::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoHoleQuadState_UnserializedMessageContext<
            UserType, VideoHoleQuadState::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoHoleQuadState::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::UnguessableToken overlay_plane_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  DrawQuad {
 public:
  using DataView = DrawQuadDataView;
  using Data_ = internal::DrawQuad_Data;

  template <typename... Args>
  static DrawQuadPtr New(Args&&... args) {
    return DrawQuadPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DrawQuadPtr From(const U& u) {
    return mojo::TypeConverter<DrawQuadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DrawQuad>::Convert(*this);
  }


  DrawQuad();

  DrawQuad(
      const gfx::Rect& rect,
      const gfx::Rect& visible_rect,
      bool needs_blending,
      const base::Optional<viz::SharedQuadState>& sqs,
      DrawQuadStatePtr draw_quad_state);

  ~DrawQuad();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DrawQuadPtr>
  DrawQuadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DrawQuad>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DrawQuad::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DrawQuad::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DrawQuad_UnserializedMessageContext<
            UserType, DrawQuad::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DrawQuad::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DrawQuad::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DrawQuad_UnserializedMessageContext<
            UserType, DrawQuad::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DrawQuad::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::Rect rect;
  
  gfx::Rect visible_rect;
  
  bool needs_blending;
  
  base::Optional<viz::SharedQuadState> sqs;
  
  DrawQuadStatePtr draw_quad_state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DrawQuad);
};

template <typename UnionPtrType>
DrawQuadStatePtr DrawQuadState::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::DEBUG_BORDER_QUAD_STATE:
      rv->set_debug_border_quad_state(mojo::Clone(*data_.debug_border_quad_state));
      break;
    case Tag::RENDER_PASS_QUAD_STATE:
      rv->set_render_pass_quad_state(mojo::Clone(*data_.render_pass_quad_state));
      break;
    case Tag::SOLID_COLOR_QUAD_STATE:
      rv->set_solid_color_quad_state(mojo::Clone(*data_.solid_color_quad_state));
      break;
    case Tag::STREAM_VIDEO_QUAD_STATE:
      rv->set_stream_video_quad_state(mojo::Clone(*data_.stream_video_quad_state));
      break;
    case Tag::SURFACE_QUAD_STATE:
      rv->set_surface_quad_state(mojo::Clone(*data_.surface_quad_state));
      break;
    case Tag::TEXTURE_QUAD_STATE:
      rv->set_texture_quad_state(mojo::Clone(*data_.texture_quad_state));
      break;
    case Tag::TILE_QUAD_STATE:
      rv->set_tile_quad_state(mojo::Clone(*data_.tile_quad_state));
      break;
    case Tag::YUV_VIDEO_QUAD_STATE:
      rv->set_yuv_video_quad_state(mojo::Clone(*data_.yuv_video_quad_state));
      break;
    case Tag::VIDEO_HOLE_QUAD_STATE:
      rv->set_video_hole_quad_state(mojo::Clone(*data_.video_hole_quad_state));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DrawQuadState>::value>::type*>
bool DrawQuadState::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::DEBUG_BORDER_QUAD_STATE:
      return mojo::Equals(*(data_.debug_border_quad_state), *(other.data_.debug_border_quad_state));
    case Tag::RENDER_PASS_QUAD_STATE:
      return mojo::Equals(*(data_.render_pass_quad_state), *(other.data_.render_pass_quad_state));
    case Tag::SOLID_COLOR_QUAD_STATE:
      return mojo::Equals(*(data_.solid_color_quad_state), *(other.data_.solid_color_quad_state));
    case Tag::STREAM_VIDEO_QUAD_STATE:
      return mojo::Equals(*(data_.stream_video_quad_state), *(other.data_.stream_video_quad_state));
    case Tag::SURFACE_QUAD_STATE:
      return mojo::Equals(*(data_.surface_quad_state), *(other.data_.surface_quad_state));
    case Tag::TEXTURE_QUAD_STATE:
      return mojo::Equals(*(data_.texture_quad_state), *(other.data_.texture_quad_state));
    case Tag::TILE_QUAD_STATE:
      return mojo::Equals(*(data_.tile_quad_state), *(other.data_.tile_quad_state));
    case Tag::YUV_VIDEO_QUAD_STATE:
      return mojo::Equals(*(data_.yuv_video_quad_state), *(other.data_.yuv_video_quad_state));
    case Tag::VIDEO_HOLE_QUAD_STATE:
      return mojo::Equals(*(data_.video_hole_quad_state), *(other.data_.video_hole_quad_state));
  }

  return false;
}
template <typename StructPtrType>
DebugBorderQuadStatePtr DebugBorderQuadState::Clone() const {
  return New(
      mojo::Clone(color),
      mojo::Clone(width)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DebugBorderQuadState>::value>::type*>
bool DebugBorderQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->color, other_struct.color))
    return false;
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  return true;
}
template <typename StructPtrType>
RenderPassQuadStatePtr RenderPassQuadState::Clone() const {
  return New(
      mojo::Clone(render_pass_id),
      mojo::Clone(mask_resource_id),
      mojo::Clone(mask_uv_rect),
      mojo::Clone(mask_texture_size),
      mojo::Clone(filters_scale),
      mojo::Clone(filters_origin),
      mojo::Clone(tex_coord_rect),
      mojo::Clone(force_anti_aliasing_off),
      mojo::Clone(backdrop_filter_quality)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RenderPassQuadState>::value>::type*>
bool RenderPassQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->render_pass_id, other_struct.render_pass_id))
    return false;
  if (!mojo::Equals(this->mask_resource_id, other_struct.mask_resource_id))
    return false;
  if (!mojo::Equals(this->mask_uv_rect, other_struct.mask_uv_rect))
    return false;
  if (!mojo::Equals(this->mask_texture_size, other_struct.mask_texture_size))
    return false;
  if (!mojo::Equals(this->filters_scale, other_struct.filters_scale))
    return false;
  if (!mojo::Equals(this->filters_origin, other_struct.filters_origin))
    return false;
  if (!mojo::Equals(this->tex_coord_rect, other_struct.tex_coord_rect))
    return false;
  if (!mojo::Equals(this->force_anti_aliasing_off, other_struct.force_anti_aliasing_off))
    return false;
  if (!mojo::Equals(this->backdrop_filter_quality, other_struct.backdrop_filter_quality))
    return false;
  return true;
}
template <typename StructPtrType>
SolidColorQuadStatePtr SolidColorQuadState::Clone() const {
  return New(
      mojo::Clone(color),
      mojo::Clone(force_anti_aliasing_off)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SolidColorQuadState>::value>::type*>
bool SolidColorQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->color, other_struct.color))
    return false;
  if (!mojo::Equals(this->force_anti_aliasing_off, other_struct.force_anti_aliasing_off))
    return false;
  return true;
}
template <typename StructPtrType>
StreamVideoQuadStatePtr StreamVideoQuadState::Clone() const {
  return New(
      mojo::Clone(resource_id),
      mojo::Clone(resource_size_in_pixels),
      mojo::Clone(uv_top_left),
      mojo::Clone(uv_bottom_right)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StreamVideoQuadState>::value>::type*>
bool StreamVideoQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resource_id, other_struct.resource_id))
    return false;
  if (!mojo::Equals(this->resource_size_in_pixels, other_struct.resource_size_in_pixels))
    return false;
  if (!mojo::Equals(this->uv_top_left, other_struct.uv_top_left))
    return false;
  if (!mojo::Equals(this->uv_bottom_right, other_struct.uv_bottom_right))
    return false;
  return true;
}
template <typename StructPtrType>
SurfaceQuadStatePtr SurfaceQuadState::Clone() const {
  return New(
      mojo::Clone(surface_range),
      mojo::Clone(default_background_color),
      mojo::Clone(stretch_content_to_fill_bounds)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceQuadState>::value>::type*>
bool SurfaceQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->surface_range, other_struct.surface_range))
    return false;
  if (!mojo::Equals(this->default_background_color, other_struct.default_background_color))
    return false;
  if (!mojo::Equals(this->stretch_content_to_fill_bounds, other_struct.stretch_content_to_fill_bounds))
    return false;
  return true;
}
template <typename StructPtrType>
TextureQuadStatePtr TextureQuadState::Clone() const {
  return New(
      mojo::Clone(resource_id),
      mojo::Clone(resource_size_in_pixels),
      mojo::Clone(premultiplied_alpha),
      mojo::Clone(uv_top_left),
      mojo::Clone(uv_bottom_right),
      mojo::Clone(background_color),
      mojo::Clone(vertex_opacity),
      mojo::Clone(y_flipped),
      mojo::Clone(nearest_neighbor),
      mojo::Clone(secure_output_only),
      mojo::Clone(protected_video_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextureQuadState>::value>::type*>
bool TextureQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->resource_id, other_struct.resource_id))
    return false;
  if (!mojo::Equals(this->resource_size_in_pixels, other_struct.resource_size_in_pixels))
    return false;
  if (!mojo::Equals(this->premultiplied_alpha, other_struct.premultiplied_alpha))
    return false;
  if (!mojo::Equals(this->uv_top_left, other_struct.uv_top_left))
    return false;
  if (!mojo::Equals(this->uv_bottom_right, other_struct.uv_bottom_right))
    return false;
  if (!mojo::Equals(this->background_color, other_struct.background_color))
    return false;
  if (!mojo::Equals(this->vertex_opacity, other_struct.vertex_opacity))
    return false;
  if (!mojo::Equals(this->y_flipped, other_struct.y_flipped))
    return false;
  if (!mojo::Equals(this->nearest_neighbor, other_struct.nearest_neighbor))
    return false;
  if (!mojo::Equals(this->secure_output_only, other_struct.secure_output_only))
    return false;
  if (!mojo::Equals(this->protected_video_type, other_struct.protected_video_type))
    return false;
  return true;
}
template <typename StructPtrType>
TileQuadStatePtr TileQuadState::Clone() const {
  return New(
      mojo::Clone(tex_coord_rect),
      mojo::Clone(texture_size),
      mojo::Clone(is_premultiplied),
      mojo::Clone(resource_id),
      mojo::Clone(nearest_neighbor),
      mojo::Clone(force_anti_aliasing_off)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TileQuadState>::value>::type*>
bool TileQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->tex_coord_rect, other_struct.tex_coord_rect))
    return false;
  if (!mojo::Equals(this->texture_size, other_struct.texture_size))
    return false;
  if (!mojo::Equals(this->is_premultiplied, other_struct.is_premultiplied))
    return false;
  if (!mojo::Equals(this->resource_id, other_struct.resource_id))
    return false;
  if (!mojo::Equals(this->nearest_neighbor, other_struct.nearest_neighbor))
    return false;
  if (!mojo::Equals(this->force_anti_aliasing_off, other_struct.force_anti_aliasing_off))
    return false;
  return true;
}
template <typename StructPtrType>
YUVVideoQuadStatePtr YUVVideoQuadState::Clone() const {
  return New(
      mojo::Clone(ya_tex_coord_rect),
      mojo::Clone(uv_tex_coord_rect),
      mojo::Clone(ya_tex_size),
      mojo::Clone(uv_tex_size),
      mojo::Clone(y_plane_resource_id),
      mojo::Clone(u_plane_resource_id),
      mojo::Clone(v_plane_resource_id),
      mojo::Clone(a_plane_resource_id),
      mojo::Clone(resource_offset),
      mojo::Clone(resource_multiplier),
      mojo::Clone(bits_per_channel),
      mojo::Clone(video_color_space),
      mojo::Clone(protected_video_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, YUVVideoQuadState>::value>::type*>
bool YUVVideoQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->ya_tex_coord_rect, other_struct.ya_tex_coord_rect))
    return false;
  if (!mojo::Equals(this->uv_tex_coord_rect, other_struct.uv_tex_coord_rect))
    return false;
  if (!mojo::Equals(this->ya_tex_size, other_struct.ya_tex_size))
    return false;
  if (!mojo::Equals(this->uv_tex_size, other_struct.uv_tex_size))
    return false;
  if (!mojo::Equals(this->y_plane_resource_id, other_struct.y_plane_resource_id))
    return false;
  if (!mojo::Equals(this->u_plane_resource_id, other_struct.u_plane_resource_id))
    return false;
  if (!mojo::Equals(this->v_plane_resource_id, other_struct.v_plane_resource_id))
    return false;
  if (!mojo::Equals(this->a_plane_resource_id, other_struct.a_plane_resource_id))
    return false;
  if (!mojo::Equals(this->resource_offset, other_struct.resource_offset))
    return false;
  if (!mojo::Equals(this->resource_multiplier, other_struct.resource_multiplier))
    return false;
  if (!mojo::Equals(this->bits_per_channel, other_struct.bits_per_channel))
    return false;
  if (!mojo::Equals(this->video_color_space, other_struct.video_color_space))
    return false;
  if (!mojo::Equals(this->protected_video_type, other_struct.protected_video_type))
    return false;
  return true;
}
template <typename StructPtrType>
VideoHoleQuadStatePtr VideoHoleQuadState::Clone() const {
  return New(
      mojo::Clone(overlay_plane_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoHoleQuadState>::value>::type*>
bool VideoHoleQuadState::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->overlay_plane_id, other_struct.overlay_plane_id))
    return false;
  return true;
}
template <typename StructPtrType>
DrawQuadPtr DrawQuad::Clone() const {
  return New(
      mojo::Clone(rect),
      mojo::Clone(visible_rect),
      mojo::Clone(needs_blending),
      mojo::Clone(sqs),
      mojo::Clone(draw_quad_state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DrawQuad>::value>::type*>
bool DrawQuad::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->rect, other_struct.rect))
    return false;
  if (!mojo::Equals(this->visible_rect, other_struct.visible_rect))
    return false;
  if (!mojo::Equals(this->needs_blending, other_struct.needs_blending))
    return false;
  if (!mojo::Equals(this->sqs, other_struct.sqs))
    return false;
  if (!mojo::Equals(this->draw_quad_state, other_struct.draw_quad_state))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::DebugBorderQuadState::DataView,
                                         ::viz::mojom::DebugBorderQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::DebugBorderQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::DebugBorderQuadStatePtr* output) { output->reset(); }

  static decltype(::viz::mojom::DebugBorderQuadState::color) color(
      const ::viz::mojom::DebugBorderQuadStatePtr& input) {
    return input->color;
  }

  static decltype(::viz::mojom::DebugBorderQuadState::width) width(
      const ::viz::mojom::DebugBorderQuadStatePtr& input) {
    return input->width;
  }

  static bool Read(::viz::mojom::DebugBorderQuadState::DataView input, ::viz::mojom::DebugBorderQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::RenderPassQuadState::DataView,
                                         ::viz::mojom::RenderPassQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::RenderPassQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::RenderPassQuadStatePtr* output) { output->reset(); }

  static decltype(::viz::mojom::RenderPassQuadState::render_pass_id) render_pass_id(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->render_pass_id;
  }

  static decltype(::viz::mojom::RenderPassQuadState::mask_resource_id) mask_resource_id(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_resource_id;
  }

  static const decltype(::viz::mojom::RenderPassQuadState::mask_uv_rect)& mask_uv_rect(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_uv_rect;
  }

  static const decltype(::viz::mojom::RenderPassQuadState::mask_texture_size)& mask_texture_size(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_texture_size;
  }

  static const decltype(::viz::mojom::RenderPassQuadState::filters_scale)& filters_scale(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->filters_scale;
  }

  static const decltype(::viz::mojom::RenderPassQuadState::filters_origin)& filters_origin(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->filters_origin;
  }

  static const decltype(::viz::mojom::RenderPassQuadState::tex_coord_rect)& tex_coord_rect(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->tex_coord_rect;
  }

  static decltype(::viz::mojom::RenderPassQuadState::force_anti_aliasing_off) force_anti_aliasing_off(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->force_anti_aliasing_off;
  }

  static decltype(::viz::mojom::RenderPassQuadState::backdrop_filter_quality) backdrop_filter_quality(
      const ::viz::mojom::RenderPassQuadStatePtr& input) {
    return input->backdrop_filter_quality;
  }

  static bool Read(::viz::mojom::RenderPassQuadState::DataView input, ::viz::mojom::RenderPassQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::SolidColorQuadState::DataView,
                                         ::viz::mojom::SolidColorQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::SolidColorQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::SolidColorQuadStatePtr* output) { output->reset(); }

  static decltype(::viz::mojom::SolidColorQuadState::color) color(
      const ::viz::mojom::SolidColorQuadStatePtr& input) {
    return input->color;
  }

  static decltype(::viz::mojom::SolidColorQuadState::force_anti_aliasing_off) force_anti_aliasing_off(
      const ::viz::mojom::SolidColorQuadStatePtr& input) {
    return input->force_anti_aliasing_off;
  }

  static bool Read(::viz::mojom::SolidColorQuadState::DataView input, ::viz::mojom::SolidColorQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::StreamVideoQuadState::DataView,
                                         ::viz::mojom::StreamVideoQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::StreamVideoQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::StreamVideoQuadStatePtr* output) { output->reset(); }

  static decltype(::viz::mojom::StreamVideoQuadState::resource_id) resource_id(
      const ::viz::mojom::StreamVideoQuadStatePtr& input) {
    return input->resource_id;
  }

  static const decltype(::viz::mojom::StreamVideoQuadState::resource_size_in_pixels)& resource_size_in_pixels(
      const ::viz::mojom::StreamVideoQuadStatePtr& input) {
    return input->resource_size_in_pixels;
  }

  static const decltype(::viz::mojom::StreamVideoQuadState::uv_top_left)& uv_top_left(
      const ::viz::mojom::StreamVideoQuadStatePtr& input) {
    return input->uv_top_left;
  }

  static const decltype(::viz::mojom::StreamVideoQuadState::uv_bottom_right)& uv_bottom_right(
      const ::viz::mojom::StreamVideoQuadStatePtr& input) {
    return input->uv_bottom_right;
  }

  static bool Read(::viz::mojom::StreamVideoQuadState::DataView input, ::viz::mojom::StreamVideoQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::SurfaceQuadState::DataView,
                                         ::viz::mojom::SurfaceQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::SurfaceQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::SurfaceQuadStatePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::SurfaceQuadState::surface_range)& surface_range(
      const ::viz::mojom::SurfaceQuadStatePtr& input) {
    return input->surface_range;
  }

  static decltype(::viz::mojom::SurfaceQuadState::default_background_color) default_background_color(
      const ::viz::mojom::SurfaceQuadStatePtr& input) {
    return input->default_background_color;
  }

  static decltype(::viz::mojom::SurfaceQuadState::stretch_content_to_fill_bounds) stretch_content_to_fill_bounds(
      const ::viz::mojom::SurfaceQuadStatePtr& input) {
    return input->stretch_content_to_fill_bounds;
  }

  static bool Read(::viz::mojom::SurfaceQuadState::DataView input, ::viz::mojom::SurfaceQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::TextureQuadState::DataView,
                                         ::viz::mojom::TextureQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::TextureQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::TextureQuadStatePtr* output) { output->reset(); }

  static decltype(::viz::mojom::TextureQuadState::resource_id) resource_id(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->resource_id;
  }

  static const decltype(::viz::mojom::TextureQuadState::resource_size_in_pixels)& resource_size_in_pixels(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->resource_size_in_pixels;
  }

  static decltype(::viz::mojom::TextureQuadState::premultiplied_alpha) premultiplied_alpha(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->premultiplied_alpha;
  }

  static const decltype(::viz::mojom::TextureQuadState::uv_top_left)& uv_top_left(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->uv_top_left;
  }

  static const decltype(::viz::mojom::TextureQuadState::uv_bottom_right)& uv_bottom_right(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->uv_bottom_right;
  }

  static decltype(::viz::mojom::TextureQuadState::background_color) background_color(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->background_color;
  }

  static const decltype(::viz::mojom::TextureQuadState::vertex_opacity)& vertex_opacity(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->vertex_opacity;
  }

  static decltype(::viz::mojom::TextureQuadState::y_flipped) y_flipped(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->y_flipped;
  }

  static decltype(::viz::mojom::TextureQuadState::nearest_neighbor) nearest_neighbor(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->nearest_neighbor;
  }

  static decltype(::viz::mojom::TextureQuadState::secure_output_only) secure_output_only(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->secure_output_only;
  }

  static decltype(::viz::mojom::TextureQuadState::protected_video_type) protected_video_type(
      const ::viz::mojom::TextureQuadStatePtr& input) {
    return input->protected_video_type;
  }

  static bool Read(::viz::mojom::TextureQuadState::DataView input, ::viz::mojom::TextureQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::TileQuadState::DataView,
                                         ::viz::mojom::TileQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::TileQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::TileQuadStatePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::TileQuadState::tex_coord_rect)& tex_coord_rect(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->tex_coord_rect;
  }

  static const decltype(::viz::mojom::TileQuadState::texture_size)& texture_size(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->texture_size;
  }

  static decltype(::viz::mojom::TileQuadState::is_premultiplied) is_premultiplied(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->is_premultiplied;
  }

  static decltype(::viz::mojom::TileQuadState::resource_id) resource_id(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->resource_id;
  }

  static decltype(::viz::mojom::TileQuadState::nearest_neighbor) nearest_neighbor(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->nearest_neighbor;
  }

  static decltype(::viz::mojom::TileQuadState::force_anti_aliasing_off) force_anti_aliasing_off(
      const ::viz::mojom::TileQuadStatePtr& input) {
    return input->force_anti_aliasing_off;
  }

  static bool Read(::viz::mojom::TileQuadState::DataView input, ::viz::mojom::TileQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::YUVVideoQuadState::DataView,
                                         ::viz::mojom::YUVVideoQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::YUVVideoQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::YUVVideoQuadStatePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::YUVVideoQuadState::ya_tex_coord_rect)& ya_tex_coord_rect(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->ya_tex_coord_rect;
  }

  static const decltype(::viz::mojom::YUVVideoQuadState::uv_tex_coord_rect)& uv_tex_coord_rect(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->uv_tex_coord_rect;
  }

  static const decltype(::viz::mojom::YUVVideoQuadState::ya_tex_size)& ya_tex_size(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->ya_tex_size;
  }

  static const decltype(::viz::mojom::YUVVideoQuadState::uv_tex_size)& uv_tex_size(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->uv_tex_size;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::y_plane_resource_id) y_plane_resource_id(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->y_plane_resource_id;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::u_plane_resource_id) u_plane_resource_id(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->u_plane_resource_id;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::v_plane_resource_id) v_plane_resource_id(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->v_plane_resource_id;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::a_plane_resource_id) a_plane_resource_id(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->a_plane_resource_id;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::resource_offset) resource_offset(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->resource_offset;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::resource_multiplier) resource_multiplier(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->resource_multiplier;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::bits_per_channel) bits_per_channel(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->bits_per_channel;
  }

  static const decltype(::viz::mojom::YUVVideoQuadState::video_color_space)& video_color_space(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->video_color_space;
  }

  static decltype(::viz::mojom::YUVVideoQuadState::protected_video_type) protected_video_type(
      const ::viz::mojom::YUVVideoQuadStatePtr& input) {
    return input->protected_video_type;
  }

  static bool Read(::viz::mojom::YUVVideoQuadState::DataView input, ::viz::mojom::YUVVideoQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::VideoHoleQuadState::DataView,
                                         ::viz::mojom::VideoHoleQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::VideoHoleQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::VideoHoleQuadStatePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::VideoHoleQuadState::overlay_plane_id)& overlay_plane_id(
      const ::viz::mojom::VideoHoleQuadStatePtr& input) {
    return input->overlay_plane_id;
  }

  static bool Read(::viz::mojom::VideoHoleQuadState::DataView input, ::viz::mojom::VideoHoleQuadStatePtr* output);
};


template <>
struct  StructTraits<::viz::mojom::DrawQuad::DataView,
                                         ::viz::mojom::DrawQuadPtr> {
  static bool IsNull(const ::viz::mojom::DrawQuadPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::DrawQuadPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::DrawQuad::rect)& rect(
      const ::viz::mojom::DrawQuadPtr& input) {
    return input->rect;
  }

  static const decltype(::viz::mojom::DrawQuad::visible_rect)& visible_rect(
      const ::viz::mojom::DrawQuadPtr& input) {
    return input->visible_rect;
  }

  static decltype(::viz::mojom::DrawQuad::needs_blending) needs_blending(
      const ::viz::mojom::DrawQuadPtr& input) {
    return input->needs_blending;
  }

  static const decltype(::viz::mojom::DrawQuad::sqs)& sqs(
      const ::viz::mojom::DrawQuadPtr& input) {
    return input->sqs;
  }

  static const decltype(::viz::mojom::DrawQuad::draw_quad_state)& draw_quad_state(
      const ::viz::mojom::DrawQuadPtr& input) {
    return input->draw_quad_state;
  }

  static bool Read(::viz::mojom::DrawQuad::DataView input, ::viz::mojom::DrawQuadPtr* output);
};


template <>
struct  UnionTraits<::viz::mojom::DrawQuadState::DataView,
                                        ::viz::mojom::DrawQuadStatePtr> {
  static bool IsNull(const ::viz::mojom::DrawQuadStatePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::DrawQuadStatePtr* output) { output->reset(); }

  static ::viz::mojom::DrawQuadState::Tag GetTag(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->which();
  }

  static const ::viz::mojom::DebugBorderQuadStatePtr& debug_border_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_debug_border_quad_state();
  }

  static const ::viz::mojom::RenderPassQuadStatePtr& render_pass_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_render_pass_quad_state();
  }

  static const ::viz::mojom::SolidColorQuadStatePtr& solid_color_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_solid_color_quad_state();
  }

  static const ::viz::mojom::StreamVideoQuadStatePtr& stream_video_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_stream_video_quad_state();
  }

  static const ::viz::mojom::SurfaceQuadStatePtr& surface_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_surface_quad_state();
  }

  static const ::viz::mojom::TextureQuadStatePtr& texture_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_texture_quad_state();
  }

  static const ::viz::mojom::TileQuadStatePtr& tile_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_tile_quad_state();
  }

  static const ::viz::mojom::YUVVideoQuadStatePtr& yuv_video_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_yuv_video_quad_state();
  }

  static const ::viz::mojom::VideoHoleQuadStatePtr& video_hole_quad_state(const ::viz::mojom::DrawQuadStatePtr& input) {
    return input->get_video_hole_quad_state();
  }

  static bool Read(::viz::mojom::DrawQuadState::DataView input, ::viz::mojom::DrawQuadStatePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_H_