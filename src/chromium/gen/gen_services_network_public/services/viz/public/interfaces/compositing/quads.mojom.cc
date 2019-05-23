// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/viz/public/interfaces/compositing/quads.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "services/viz/public/interfaces/compositing/quads.mojom-params-data.h"
#include "services/viz/public/interfaces/compositing/quads.mojom-shared-message-ids.h"

#include "services/viz/public/interfaces/compositing/quads.mojom-import-headers.h"


#ifndef SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_INTERFACES_COMPOSITING_QUADS_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/viz/public/cpp/compositing/frame_sink_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/local_surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/shared_quad_state_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_id_struct_traits.h"
#include "services/viz/public/cpp/compositing/surface_range_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "ui/gfx/mojo/color_space_mojom_traits.h"
#include "ui/gfx/mojo/rrect_f_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#endif
namespace viz {
namespace mojom {
DebugBorderQuadState::DebugBorderQuadState()
    : color(),
      width() {}

DebugBorderQuadState::DebugBorderQuadState(
    uint32_t color_in,
    int32_t width_in)
    : color(std::move(color_in)),
      width(std::move(width_in)) {}

DebugBorderQuadState::~DebugBorderQuadState() = default;
size_t DebugBorderQuadState::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->color);
  seed = mojo::internal::Hash(seed, this->width);
  return seed;
}

bool DebugBorderQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RenderPassQuadState::RenderPassQuadState()
    : render_pass_id(),
      mask_resource_id(),
      mask_uv_rect(),
      mask_texture_size(),
      filters_scale(),
      filters_origin(),
      tex_coord_rect(),
      force_anti_aliasing_off(),
      backdrop_filter_quality() {}

RenderPassQuadState::RenderPassQuadState(
    uint64_t render_pass_id_in,
    uint32_t mask_resource_id_in,
    const gfx::RectF& mask_uv_rect_in,
    const gfx::Size& mask_texture_size_in,
    const gfx::Vector2dF& filters_scale_in,
    const gfx::PointF& filters_origin_in,
    const gfx::RectF& tex_coord_rect_in,
    bool force_anti_aliasing_off_in,
    float backdrop_filter_quality_in)
    : render_pass_id(std::move(render_pass_id_in)),
      mask_resource_id(std::move(mask_resource_id_in)),
      mask_uv_rect(std::move(mask_uv_rect_in)),
      mask_texture_size(std::move(mask_texture_size_in)),
      filters_scale(std::move(filters_scale_in)),
      filters_origin(std::move(filters_origin_in)),
      tex_coord_rect(std::move(tex_coord_rect_in)),
      force_anti_aliasing_off(std::move(force_anti_aliasing_off_in)),
      backdrop_filter_quality(std::move(backdrop_filter_quality_in)) {}

RenderPassQuadState::~RenderPassQuadState() = default;

bool RenderPassQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SolidColorQuadState::SolidColorQuadState()
    : color(),
      force_anti_aliasing_off() {}

SolidColorQuadState::SolidColorQuadState(
    uint32_t color_in,
    bool force_anti_aliasing_off_in)
    : color(std::move(color_in)),
      force_anti_aliasing_off(std::move(force_anti_aliasing_off_in)) {}

SolidColorQuadState::~SolidColorQuadState() = default;
size_t SolidColorQuadState::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->color);
  seed = mojo::internal::Hash(seed, this->force_anti_aliasing_off);
  return seed;
}

bool SolidColorQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
StreamVideoQuadState::StreamVideoQuadState()
    : resource_id(),
      resource_size_in_pixels(),
      uv_top_left(),
      uv_bottom_right() {}

StreamVideoQuadState::StreamVideoQuadState(
    uint32_t resource_id_in,
    const gfx::Size& resource_size_in_pixels_in,
    const gfx::PointF& uv_top_left_in,
    const gfx::PointF& uv_bottom_right_in)
    : resource_id(std::move(resource_id_in)),
      resource_size_in_pixels(std::move(resource_size_in_pixels_in)),
      uv_top_left(std::move(uv_top_left_in)),
      uv_bottom_right(std::move(uv_bottom_right_in)) {}

StreamVideoQuadState::~StreamVideoQuadState() = default;

bool StreamVideoQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SurfaceQuadState::SurfaceQuadState()
    : surface_range(),
      default_background_color(),
      stretch_content_to_fill_bounds() {}

SurfaceQuadState::SurfaceQuadState(
    const viz::SurfaceRange& surface_range_in,
    uint32_t default_background_color_in,
    bool stretch_content_to_fill_bounds_in)
    : surface_range(std::move(surface_range_in)),
      default_background_color(std::move(default_background_color_in)),
      stretch_content_to_fill_bounds(std::move(stretch_content_to_fill_bounds_in)) {}

SurfaceQuadState::~SurfaceQuadState() = default;

bool SurfaceQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TextureQuadState::TextureQuadState()
    : resource_id(),
      resource_size_in_pixels(),
      premultiplied_alpha(),
      uv_top_left(),
      uv_bottom_right(),
      background_color(),
      vertex_opacity(),
      y_flipped(),
      nearest_neighbor(),
      secure_output_only(),
      protected_video_type() {}

TextureQuadState::TextureQuadState(
    uint32_t resource_id_in,
    const gfx::Size& resource_size_in_pixels_in,
    bool premultiplied_alpha_in,
    const gfx::PointF& uv_top_left_in,
    const gfx::PointF& uv_bottom_right_in,
    uint32_t background_color_in,
    const std::vector<float>& vertex_opacity_in,
    bool y_flipped_in,
    bool nearest_neighbor_in,
    bool secure_output_only_in,
    ProtectedVideoState protected_video_type_in)
    : resource_id(std::move(resource_id_in)),
      resource_size_in_pixels(std::move(resource_size_in_pixels_in)),
      premultiplied_alpha(std::move(premultiplied_alpha_in)),
      uv_top_left(std::move(uv_top_left_in)),
      uv_bottom_right(std::move(uv_bottom_right_in)),
      background_color(std::move(background_color_in)),
      vertex_opacity(std::move(vertex_opacity_in)),
      y_flipped(std::move(y_flipped_in)),
      nearest_neighbor(std::move(nearest_neighbor_in)),
      secure_output_only(std::move(secure_output_only_in)),
      protected_video_type(std::move(protected_video_type_in)) {}

TextureQuadState::~TextureQuadState() = default;

bool TextureQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TileQuadState::TileQuadState()
    : tex_coord_rect(),
      texture_size(),
      is_premultiplied(),
      resource_id(),
      nearest_neighbor(),
      force_anti_aliasing_off() {}

TileQuadState::TileQuadState(
    const gfx::RectF& tex_coord_rect_in,
    const gfx::Size& texture_size_in,
    bool is_premultiplied_in,
    uint32_t resource_id_in,
    bool nearest_neighbor_in,
    bool force_anti_aliasing_off_in)
    : tex_coord_rect(std::move(tex_coord_rect_in)),
      texture_size(std::move(texture_size_in)),
      is_premultiplied(std::move(is_premultiplied_in)),
      resource_id(std::move(resource_id_in)),
      nearest_neighbor(std::move(nearest_neighbor_in)),
      force_anti_aliasing_off(std::move(force_anti_aliasing_off_in)) {}

TileQuadState::~TileQuadState() = default;

bool TileQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
YUVVideoQuadState::YUVVideoQuadState()
    : ya_tex_coord_rect(),
      uv_tex_coord_rect(),
      ya_tex_size(),
      uv_tex_size(),
      y_plane_resource_id(),
      u_plane_resource_id(),
      v_plane_resource_id(),
      a_plane_resource_id(),
      resource_offset(),
      resource_multiplier(),
      bits_per_channel(),
      video_color_space(),
      protected_video_type() {}

YUVVideoQuadState::YUVVideoQuadState(
    const gfx::RectF& ya_tex_coord_rect_in,
    const gfx::RectF& uv_tex_coord_rect_in,
    const gfx::Size& ya_tex_size_in,
    const gfx::Size& uv_tex_size_in,
    uint32_t y_plane_resource_id_in,
    uint32_t u_plane_resource_id_in,
    uint32_t v_plane_resource_id_in,
    uint32_t a_plane_resource_id_in,
    float resource_offset_in,
    float resource_multiplier_in,
    uint32_t bits_per_channel_in,
    const gfx::ColorSpace& video_color_space_in,
    ProtectedVideoState protected_video_type_in)
    : ya_tex_coord_rect(std::move(ya_tex_coord_rect_in)),
      uv_tex_coord_rect(std::move(uv_tex_coord_rect_in)),
      ya_tex_size(std::move(ya_tex_size_in)),
      uv_tex_size(std::move(uv_tex_size_in)),
      y_plane_resource_id(std::move(y_plane_resource_id_in)),
      u_plane_resource_id(std::move(u_plane_resource_id_in)),
      v_plane_resource_id(std::move(v_plane_resource_id_in)),
      a_plane_resource_id(std::move(a_plane_resource_id_in)),
      resource_offset(std::move(resource_offset_in)),
      resource_multiplier(std::move(resource_multiplier_in)),
      bits_per_channel(std::move(bits_per_channel_in)),
      video_color_space(std::move(video_color_space_in)),
      protected_video_type(std::move(protected_video_type_in)) {}

YUVVideoQuadState::~YUVVideoQuadState() = default;

bool YUVVideoQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
VideoHoleQuadState::VideoHoleQuadState()
    : overlay_plane_id() {}

VideoHoleQuadState::VideoHoleQuadState(
    const base::UnguessableToken& overlay_plane_id_in)
    : overlay_plane_id(std::move(overlay_plane_id_in)) {}

VideoHoleQuadState::~VideoHoleQuadState() = default;

bool VideoHoleQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DrawQuad::DrawQuad()
    : rect(),
      visible_rect(),
      needs_blending(),
      sqs(),
      draw_quad_state() {}

DrawQuad::DrawQuad(
    const gfx::Rect& rect_in,
    const gfx::Rect& visible_rect_in,
    bool needs_blending_in,
    const base::Optional<viz::SharedQuadState>& sqs_in,
    DrawQuadStatePtr draw_quad_state_in)
    : rect(std::move(rect_in)),
      visible_rect(std::move(visible_rect_in)),
      needs_blending(std::move(needs_blending_in)),
      sqs(std::move(sqs_in)),
      draw_quad_state(std::move(draw_quad_state_in)) {}

DrawQuad::~DrawQuad() = default;

bool DrawQuad::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DrawQuadState::DrawQuadState() : tag_(Tag::DEBUG_BORDER_QUAD_STATE) {
  data_.debug_border_quad_state = new DebugBorderQuadStatePtr;
}

DrawQuadState::~DrawQuadState() {
  DestroyActive();
}


void DrawQuadState::set_debug_border_quad_state(
    DebugBorderQuadStatePtr debug_border_quad_state) {
  if (tag_ == Tag::DEBUG_BORDER_QUAD_STATE) {
    *(data_.debug_border_quad_state) = std::move(debug_border_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::DEBUG_BORDER_QUAD_STATE;
    data_.debug_border_quad_state = new DebugBorderQuadStatePtr(
        std::move(debug_border_quad_state));
  }
}
void DrawQuadState::set_render_pass_quad_state(
    RenderPassQuadStatePtr render_pass_quad_state) {
  if (tag_ == Tag::RENDER_PASS_QUAD_STATE) {
    *(data_.render_pass_quad_state) = std::move(render_pass_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::RENDER_PASS_QUAD_STATE;
    data_.render_pass_quad_state = new RenderPassQuadStatePtr(
        std::move(render_pass_quad_state));
  }
}
void DrawQuadState::set_solid_color_quad_state(
    SolidColorQuadStatePtr solid_color_quad_state) {
  if (tag_ == Tag::SOLID_COLOR_QUAD_STATE) {
    *(data_.solid_color_quad_state) = std::move(solid_color_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::SOLID_COLOR_QUAD_STATE;
    data_.solid_color_quad_state = new SolidColorQuadStatePtr(
        std::move(solid_color_quad_state));
  }
}
void DrawQuadState::set_stream_video_quad_state(
    StreamVideoQuadStatePtr stream_video_quad_state) {
  if (tag_ == Tag::STREAM_VIDEO_QUAD_STATE) {
    *(data_.stream_video_quad_state) = std::move(stream_video_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::STREAM_VIDEO_QUAD_STATE;
    data_.stream_video_quad_state = new StreamVideoQuadStatePtr(
        std::move(stream_video_quad_state));
  }
}
void DrawQuadState::set_surface_quad_state(
    SurfaceQuadStatePtr surface_quad_state) {
  if (tag_ == Tag::SURFACE_QUAD_STATE) {
    *(data_.surface_quad_state) = std::move(surface_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::SURFACE_QUAD_STATE;
    data_.surface_quad_state = new SurfaceQuadStatePtr(
        std::move(surface_quad_state));
  }
}
void DrawQuadState::set_texture_quad_state(
    TextureQuadStatePtr texture_quad_state) {
  if (tag_ == Tag::TEXTURE_QUAD_STATE) {
    *(data_.texture_quad_state) = std::move(texture_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::TEXTURE_QUAD_STATE;
    data_.texture_quad_state = new TextureQuadStatePtr(
        std::move(texture_quad_state));
  }
}
void DrawQuadState::set_tile_quad_state(
    TileQuadStatePtr tile_quad_state) {
  if (tag_ == Tag::TILE_QUAD_STATE) {
    *(data_.tile_quad_state) = std::move(tile_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::TILE_QUAD_STATE;
    data_.tile_quad_state = new TileQuadStatePtr(
        std::move(tile_quad_state));
  }
}
void DrawQuadState::set_yuv_video_quad_state(
    YUVVideoQuadStatePtr yuv_video_quad_state) {
  if (tag_ == Tag::YUV_VIDEO_QUAD_STATE) {
    *(data_.yuv_video_quad_state) = std::move(yuv_video_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::YUV_VIDEO_QUAD_STATE;
    data_.yuv_video_quad_state = new YUVVideoQuadStatePtr(
        std::move(yuv_video_quad_state));
  }
}
void DrawQuadState::set_video_hole_quad_state(
    VideoHoleQuadStatePtr video_hole_quad_state) {
  if (tag_ == Tag::VIDEO_HOLE_QUAD_STATE) {
    *(data_.video_hole_quad_state) = std::move(video_hole_quad_state);
  } else {
    DestroyActive();
    tag_ = Tag::VIDEO_HOLE_QUAD_STATE;
    data_.video_hole_quad_state = new VideoHoleQuadStatePtr(
        std::move(video_hole_quad_state));
  }
}

void DrawQuadState::DestroyActive() {
  switch (tag_) {

    case Tag::DEBUG_BORDER_QUAD_STATE:

      delete data_.debug_border_quad_state;
      break;
    case Tag::RENDER_PASS_QUAD_STATE:

      delete data_.render_pass_quad_state;
      break;
    case Tag::SOLID_COLOR_QUAD_STATE:

      delete data_.solid_color_quad_state;
      break;
    case Tag::STREAM_VIDEO_QUAD_STATE:

      delete data_.stream_video_quad_state;
      break;
    case Tag::SURFACE_QUAD_STATE:

      delete data_.surface_quad_state;
      break;
    case Tag::TEXTURE_QUAD_STATE:

      delete data_.texture_quad_state;
      break;
    case Tag::TILE_QUAD_STATE:

      delete data_.tile_quad_state;
      break;
    case Tag::YUV_VIDEO_QUAD_STATE:

      delete data_.yuv_video_quad_state;
      break;
    case Tag::VIDEO_HOLE_QUAD_STATE:

      delete data_.video_hole_quad_state;
      break;
  }
}

bool DrawQuadState::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
}  // namespace mojom
}  // namespace viz

namespace mojo {


// static
bool StructTraits<::viz::mojom::DebugBorderQuadState::DataView, ::viz::mojom::DebugBorderQuadStatePtr>::Read(
    ::viz::mojom::DebugBorderQuadState::DataView input,
    ::viz::mojom::DebugBorderQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::DebugBorderQuadStatePtr result(::viz::mojom::DebugBorderQuadState::New());
  
      result->color = input.color();
      result->width = input.width();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::RenderPassQuadState::DataView, ::viz::mojom::RenderPassQuadStatePtr>::Read(
    ::viz::mojom::RenderPassQuadState::DataView input,
    ::viz::mojom::RenderPassQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::RenderPassQuadStatePtr result(::viz::mojom::RenderPassQuadState::New());
  
      result->render_pass_id = input.render_pass_id();
      result->mask_resource_id = input.mask_resource_id();
      if (!input.ReadMaskUvRect(&result->mask_uv_rect))
        success = false;
      if (!input.ReadMaskTextureSize(&result->mask_texture_size))
        success = false;
      if (!input.ReadFiltersScale(&result->filters_scale))
        success = false;
      if (!input.ReadFiltersOrigin(&result->filters_origin))
        success = false;
      if (!input.ReadTexCoordRect(&result->tex_coord_rect))
        success = false;
      result->force_anti_aliasing_off = input.force_anti_aliasing_off();
      result->backdrop_filter_quality = input.backdrop_filter_quality();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::SolidColorQuadState::DataView, ::viz::mojom::SolidColorQuadStatePtr>::Read(
    ::viz::mojom::SolidColorQuadState::DataView input,
    ::viz::mojom::SolidColorQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::SolidColorQuadStatePtr result(::viz::mojom::SolidColorQuadState::New());
  
      result->color = input.color();
      result->force_anti_aliasing_off = input.force_anti_aliasing_off();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::StreamVideoQuadState::DataView, ::viz::mojom::StreamVideoQuadStatePtr>::Read(
    ::viz::mojom::StreamVideoQuadState::DataView input,
    ::viz::mojom::StreamVideoQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::StreamVideoQuadStatePtr result(::viz::mojom::StreamVideoQuadState::New());
  
      result->resource_id = input.resource_id();
      if (!input.ReadResourceSizeInPixels(&result->resource_size_in_pixels))
        success = false;
      if (!input.ReadUvTopLeft(&result->uv_top_left))
        success = false;
      if (!input.ReadUvBottomRight(&result->uv_bottom_right))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::SurfaceQuadState::DataView, ::viz::mojom::SurfaceQuadStatePtr>::Read(
    ::viz::mojom::SurfaceQuadState::DataView input,
    ::viz::mojom::SurfaceQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::SurfaceQuadStatePtr result(::viz::mojom::SurfaceQuadState::New());
  
      if (!input.ReadSurfaceRange(&result->surface_range))
        success = false;
      result->default_background_color = input.default_background_color();
      result->stretch_content_to_fill_bounds = input.stretch_content_to_fill_bounds();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::TextureQuadState::DataView, ::viz::mojom::TextureQuadStatePtr>::Read(
    ::viz::mojom::TextureQuadState::DataView input,
    ::viz::mojom::TextureQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::TextureQuadStatePtr result(::viz::mojom::TextureQuadState::New());
  
      result->resource_id = input.resource_id();
      if (!input.ReadResourceSizeInPixels(&result->resource_size_in_pixels))
        success = false;
      result->premultiplied_alpha = input.premultiplied_alpha();
      if (!input.ReadUvTopLeft(&result->uv_top_left))
        success = false;
      if (!input.ReadUvBottomRight(&result->uv_bottom_right))
        success = false;
      result->background_color = input.background_color();
      if (!input.ReadVertexOpacity(&result->vertex_opacity))
        success = false;
      result->y_flipped = input.y_flipped();
      result->nearest_neighbor = input.nearest_neighbor();
      result->secure_output_only = input.secure_output_only();
      if (!input.ReadProtectedVideoType(&result->protected_video_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::TileQuadState::DataView, ::viz::mojom::TileQuadStatePtr>::Read(
    ::viz::mojom::TileQuadState::DataView input,
    ::viz::mojom::TileQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::TileQuadStatePtr result(::viz::mojom::TileQuadState::New());
  
      if (!input.ReadTexCoordRect(&result->tex_coord_rect))
        success = false;
      if (!input.ReadTextureSize(&result->texture_size))
        success = false;
      result->is_premultiplied = input.is_premultiplied();
      result->resource_id = input.resource_id();
      result->nearest_neighbor = input.nearest_neighbor();
      result->force_anti_aliasing_off = input.force_anti_aliasing_off();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::YUVVideoQuadState::DataView, ::viz::mojom::YUVVideoQuadStatePtr>::Read(
    ::viz::mojom::YUVVideoQuadState::DataView input,
    ::viz::mojom::YUVVideoQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::YUVVideoQuadStatePtr result(::viz::mojom::YUVVideoQuadState::New());
  
      if (!input.ReadYaTexCoordRect(&result->ya_tex_coord_rect))
        success = false;
      if (!input.ReadUvTexCoordRect(&result->uv_tex_coord_rect))
        success = false;
      if (!input.ReadYaTexSize(&result->ya_tex_size))
        success = false;
      if (!input.ReadUvTexSize(&result->uv_tex_size))
        success = false;
      result->y_plane_resource_id = input.y_plane_resource_id();
      result->u_plane_resource_id = input.u_plane_resource_id();
      result->v_plane_resource_id = input.v_plane_resource_id();
      result->a_plane_resource_id = input.a_plane_resource_id();
      result->resource_offset = input.resource_offset();
      result->resource_multiplier = input.resource_multiplier();
      result->bits_per_channel = input.bits_per_channel();
      if (!input.ReadVideoColorSpace(&result->video_color_space))
        success = false;
      if (!input.ReadProtectedVideoType(&result->protected_video_type))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::VideoHoleQuadState::DataView, ::viz::mojom::VideoHoleQuadStatePtr>::Read(
    ::viz::mojom::VideoHoleQuadState::DataView input,
    ::viz::mojom::VideoHoleQuadStatePtr* output) {
  bool success = true;
  ::viz::mojom::VideoHoleQuadStatePtr result(::viz::mojom::VideoHoleQuadState::New());
  
      if (!input.ReadOverlayPlaneId(&result->overlay_plane_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::viz::mojom::DrawQuad::DataView, ::viz::mojom::DrawQuadPtr>::Read(
    ::viz::mojom::DrawQuad::DataView input,
    ::viz::mojom::DrawQuadPtr* output) {
  bool success = true;
  ::viz::mojom::DrawQuadPtr result(::viz::mojom::DrawQuad::New());
  
      if (!input.ReadRect(&result->rect))
        success = false;
      if (!input.ReadVisibleRect(&result->visible_rect))
        success = false;
      result->needs_blending = input.needs_blending();
      if (!input.ReadSqs(&result->sqs))
        success = false;
      if (!input.ReadDrawQuadState(&result->draw_quad_state))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::viz::mojom::DrawQuadState::DataView, ::viz::mojom::DrawQuadStatePtr>::Read(
    ::viz::mojom::DrawQuadState::DataView input,
    ::viz::mojom::DrawQuadStatePtr* output) {
  using UnionType = ::viz::mojom::DrawQuadState;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::DEBUG_BORDER_QUAD_STATE: {
      ::viz::mojom::DebugBorderQuadStatePtr result_debug_border_quad_state;
      if (!input.ReadDebugBorderQuadState(&result_debug_border_quad_state))
        return false;

      *output = UnionType::NewDebugBorderQuadState(
          std::move(result_debug_border_quad_state));
      break;
    }
    case Tag::RENDER_PASS_QUAD_STATE: {
      ::viz::mojom::RenderPassQuadStatePtr result_render_pass_quad_state;
      if (!input.ReadRenderPassQuadState(&result_render_pass_quad_state))
        return false;

      *output = UnionType::NewRenderPassQuadState(
          std::move(result_render_pass_quad_state));
      break;
    }
    case Tag::SOLID_COLOR_QUAD_STATE: {
      ::viz::mojom::SolidColorQuadStatePtr result_solid_color_quad_state;
      if (!input.ReadSolidColorQuadState(&result_solid_color_quad_state))
        return false;

      *output = UnionType::NewSolidColorQuadState(
          std::move(result_solid_color_quad_state));
      break;
    }
    case Tag::STREAM_VIDEO_QUAD_STATE: {
      ::viz::mojom::StreamVideoQuadStatePtr result_stream_video_quad_state;
      if (!input.ReadStreamVideoQuadState(&result_stream_video_quad_state))
        return false;

      *output = UnionType::NewStreamVideoQuadState(
          std::move(result_stream_video_quad_state));
      break;
    }
    case Tag::SURFACE_QUAD_STATE: {
      ::viz::mojom::SurfaceQuadStatePtr result_surface_quad_state;
      if (!input.ReadSurfaceQuadState(&result_surface_quad_state))
        return false;

      *output = UnionType::NewSurfaceQuadState(
          std::move(result_surface_quad_state));
      break;
    }
    case Tag::TEXTURE_QUAD_STATE: {
      ::viz::mojom::TextureQuadStatePtr result_texture_quad_state;
      if (!input.ReadTextureQuadState(&result_texture_quad_state))
        return false;

      *output = UnionType::NewTextureQuadState(
          std::move(result_texture_quad_state));
      break;
    }
    case Tag::TILE_QUAD_STATE: {
      ::viz::mojom::TileQuadStatePtr result_tile_quad_state;
      if (!input.ReadTileQuadState(&result_tile_quad_state))
        return false;

      *output = UnionType::NewTileQuadState(
          std::move(result_tile_quad_state));
      break;
    }
    case Tag::YUV_VIDEO_QUAD_STATE: {
      ::viz::mojom::YUVVideoQuadStatePtr result_yuv_video_quad_state;
      if (!input.ReadYuvVideoQuadState(&result_yuv_video_quad_state))
        return false;

      *output = UnionType::NewYuvVideoQuadState(
          std::move(result_yuv_video_quad_state));
      break;
    }
    case Tag::VIDEO_HOLE_QUAD_STATE: {
      ::viz::mojom::VideoHoleQuadStatePtr result_video_hole_quad_state;
      if (!input.ReadVideoHoleQuadState(&result_video_hole_quad_state))
        return false;

      *output = UnionType::NewVideoHoleQuadState(
          std::move(result_video_hole_quad_state));
      break;
    }
    default:
      return false;
  }
  return true;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif