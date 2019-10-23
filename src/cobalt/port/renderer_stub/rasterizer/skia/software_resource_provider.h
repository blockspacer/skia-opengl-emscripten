// Copyright 2014 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef COBALT_RENDERER_RASTERIZER_SKIA_SOFTWARE_RESOURCE_PROVIDER_H_
#define COBALT_RENDERER_RASTERIZER_SKIA_SOFTWARE_RESOURCE_PROVIDER_H_

#include <memory>
#include <string>
#include <vector>

#include "cobalt/render_tree/resource_provider.h"

#if defined(ENABLE_SKIA)
#include "renderer_stub/rasterizer/skia/text_shaper.h"

//#include "skia/include/ports/SkFontMgr.h"
//#include "skia/include/ports/SkFontMgr_empty.h"
#endif // ENABLE_SKIA

#include "base/memory/aligned_memory.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/render_tree/font.h"
#include "cobalt/render_tree/font_provider.h"
#include "cobalt/render_tree/image.h"
#include "cobalt/render_tree/mesh.h"
#include "cobalt/render_tree/resource_provider.h"

namespace cobalt {
namespace renderer {
namespace rasterizer {
namespace skia {

// Simple class that returns dummy data for metric information modeled on
// Roboto.
/*class FontStub : public Font {
 public:
  FontStub(const scoped_refptr<Typeface>& typeface, float font_size)
      : typeface_(typeface),
        font_metrics_(Internal::kRobotoAscentSizeMultiplier * font_size,
                      Internal::kRobotoDescentSizeMultiplier * font_size,
                      Internal::kRobotoLeadingSizeMultiplier * font_size,
                      Internal::kRobotoXHeightSizeMultiplier * font_size),
        glyph_bounds_(
            0,
            std::max(
                Internal::kDefaultCharacterRobotoGlyphHeightSizeMultiplier *
                    font_size,
                1.0f),
            Internal::kDefaultCharacterRobotoGlyphWidthSizeMultiplier *
                font_size,
            std::max(
                Internal::kDefaultCharacterRobotoGlyphHeightSizeMultiplier *
                    font_size,
                1.0f)) {}

  TypefaceId GetTypefaceId() const override { return typeface_->GetId(); }

  FontMetrics GetFontMetrics() const override { return font_metrics_; }

  GlyphIndex GetGlyphForCharacter(int32 utf32_character) override {
    return typeface_->GetGlyphForCharacter(utf32_character);
  }

  const math::RectF& GetGlyphBounds(GlyphIndex glyph) override {
    SB_UNREFERENCED_PARAMETER(glyph);
    return glyph_bounds_;
  }

  float GetGlyphWidth(GlyphIndex glyph) override {
    SB_UNREFERENCED_PARAMETER(glyph);
    return glyph_bounds_.width();
  }

 private:
  ~FontStub() override {}

  const scoped_refptr<Typeface> typeface_;
  const FontMetrics font_metrics_;
  math::RectF glyph_bounds_;
};

// Simple class that returns dummy data for metric information modeled on
// Roboto.
class TypefaceStub : public Typeface {
 public:
  explicit TypefaceStub(const void* data) { SB_UNREFERENCED_PARAMETER(data); }

  TypefaceId GetId() const override { return Internal::kDefaultTypefaceId; }

  uint32 GetEstimatedSizeInBytes() const override {
    return Internal::kDefaultTypefaceSizeInBytes;
  }

  scoped_refptr<Font> CreateFontWithSize(float font_size) override {
    return base::WrapRefCounted(new FontStub(this, font_size));
  }

  GlyphIndex GetGlyphForCharacter(int32 utf32_character) override {
    SB_UNREFERENCED_PARAMETER(utf32_character);
    return Internal::kDefaultGlyphIndex;
  }

 private:
  ~TypefaceStub() override {}
};*/

// This class must be thread-safe and capable of creating resources that
// are to be consumed by this skia software rasterizer.
class SoftwareResourceProvider : public render_tree::ResourceProvider {
 public:
  explicit SoftwareResourceProvider(bool purge_skia_font_caches_on_destruction);
  ~SoftwareResourceProvider() override;

  base::TypeId GetTypeId() const override {
    return base::GetTypeId<SoftwareResourceProvider>();
  }

  void Finish() override{};

  bool PixelFormatSupported(render_tree::PixelFormat pixel_format) override;
  bool AlphaFormatSupported(render_tree::AlphaFormat alpha_format) override;

  std::unique_ptr<render_tree::ImageData> AllocateImageData(
      const math::Size& size, render_tree::PixelFormat pixel_format,
      render_tree::AlphaFormat alpha_format) override;

  scoped_refptr<render_tree::Image> CreateImage(
      std::unique_ptr<render_tree::ImageData> pixel_data) override;

#if SB_HAS(GRAPHICS)
  scoped_refptr<render_tree::Image> CreateImageFromSbDecodeTarget(
      SbDecodeTarget decode_target) override {
    NOTREACHED();
    SbDecodeTargetRelease(decode_target);
    return NULL;
  }

  SbDecodeTargetGraphicsContextProvider*
  GetSbDecodeTargetGraphicsContextProvider() override {
    return NULL;
  }

  bool SupportsSbDecodeTarget() override { return false; }
#endif  // SB_HAS(GRAPHICS)

  std::unique_ptr<render_tree::RawImageMemory> AllocateRawImageMemory(
      size_t size_in_bytes, size_t alignment) override;

  scoped_refptr<render_tree::Image> CreateMultiPlaneImageFromRawMemory(
      std::unique_ptr<render_tree::RawImageMemory> raw_image_memory,
      const render_tree::MultiPlaneImageDataDescriptor& descriptor) override;

  bool HasLocalFontFamily(const char* font_family_name) const override;

  scoped_refptr<render_tree::Typeface> GetLocalTypeface(
      const char* font_family_name, render_tree::FontStyle font_style) override;

  scoped_refptr<render_tree::Typeface> GetLocalTypefaceByFaceNameIfAvailable(
      const char* font_face_name) override;

  scoped_refptr<render_tree::Typeface> GetCharacterFallbackTypeface(
      int32 character, render_tree::FontStyle font_style,
      const std::string& language) override;

  // This resource provider uses ots (OpenTypeSanitizer) to sanitize the raw
  // typeface data and skia to generate the typeface. It supports TrueType,
  // OpenType, and WOFF data formats.
  scoped_refptr<render_tree::Typeface> CreateTypefaceFromRawData(
      std::unique_ptr<render_tree::ResourceProvider::RawTypefaceDataVector>
          raw_data,
      std::string* error_string) override;

  scoped_refptr<render_tree::GlyphBuffer> CreateGlyphBuffer(
      const base::char16* text_buffer, size_t text_length,
      const std::string& language, bool is_rtl,
      render_tree::FontProvider* font_provider) override;

  scoped_refptr<render_tree::GlyphBuffer> CreateGlyphBuffer(
      const std::string& utf8_string,
      const scoped_refptr<render_tree::Font>& font) override;

  float GetTextWidth(const base::char16* text_buffer, size_t text_length,
                     const std::string& language, bool is_rtl,
                     render_tree::FontProvider* font_provider,
                     render_tree::FontVector* maybe_used_fonts) override;

  scoped_refptr<render_tree::Mesh> CreateMesh(
      std::unique_ptr<std::vector<render_tree::Mesh::Vertex> > vertices,
      render_tree::Mesh::DrawMode draw_mode) override;

  scoped_refptr<render_tree::Image> DrawOffscreenImage(
      const scoped_refptr<render_tree::Node>& root) override;

 private:
  const bool purge_skia_font_caches_on_destruction_;

#if defined(ENABLE_SKIA)
  TextShaper text_shaper_;
#endif // ENABLE_SKIA
};

}  // namespace skia
}  // namespace rasterizer
}  // namespace renderer
}  // namespace cobalt

#endif  // COBALT_RENDERER_RASTERIZER_SKIA_SOFTWARE_RESOURCE_PROVIDER_H_
