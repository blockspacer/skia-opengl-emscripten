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

#include <memory>

#include "renderer_stub/rasterizer/skia/software_resource_provider.h"
#include "render_tree/resource_provider_stub.h"

#include "base/trace_event/trace_event.h"
#include "cobalt/base/polymorphic_downcast.h"
#include "renderer_stub/rasterizer/skia/cobalt_skia_type_conversions.h"
#include "renderer_stub/rasterizer/skia/font.h"
#include "renderer_stub/rasterizer/skia/glyph_buffer.h"
#include "renderer_stub/rasterizer/skia/skia/src/ports/SkFontMgr_cobalt.h"
#include "renderer_stub/rasterizer/skia/skia/src/ports/SkTypeface_cobalt.h"
#include "renderer_stub/rasterizer/skia/software_image.h"
#include "renderer_stub/rasterizer/skia/software_mesh.h"
#include "renderer_stub/rasterizer/skia/typeface.h"
///#include "third_party/ots/include/opentype-sanitiser.h"
///#include "third_party/ots/include/ots-memory-stream.h"
#include "third_party/skia/include/core/SkData.h"
#include "third_party/skia/include/core/SkStream.h"
#include "third_party/skia/include/core/SkTypeface.h"

using cobalt::render_tree::ImageData;

namespace cobalt {
namespace renderer {
namespace rasterizer {
namespace skia {

SoftwareResourceProvider::SoftwareResourceProvider(
    bool purge_skia_font_caches_on_destruction)
    : purge_skia_font_caches_on_destruction_(
          purge_skia_font_caches_on_destruction) {
  // Initialize the font manager now to ensure that it doesn't get initialized
  // on multiple threads simultaneously later.
  SkFontMgr::RefDefault();
}

SoftwareResourceProvider::~SoftwareResourceProvider() {
  if (purge_skia_font_caches_on_destruction_) {
    text_shaper_.PurgeCaches();

      sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
      SkFontMgr_Cobalt* cobalt_font_manager =
          base::polymorphic_downcast<SkFontMgr_Cobalt*>(font_manager.get());
      cobalt_font_manager->PurgeCaches();
  }
}

bool SoftwareResourceProvider::PixelFormatSupported(
    render_tree::PixelFormat pixel_format) {
  return RenderTreeSurfaceFormatToSkia(pixel_format) == kN32_SkColorType;
}

bool SoftwareResourceProvider::AlphaFormatSupported(
    render_tree::AlphaFormat alpha_format) {
  return alpha_format == render_tree::kAlphaFormatPremultiplied ||
         alpha_format == render_tree::kAlphaFormatOpaque;
}

std::unique_ptr<ImageData> SoftwareResourceProvider::AllocateImageData(
    const math::Size& size, render_tree::PixelFormat pixel_format,
    render_tree::AlphaFormat alpha_format) {
  printf("SoftwareResourceProvider::AllocateImageData 1...\n");

  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::AllocateImageData()");
  DCHECK(PixelFormatSupported(pixel_format));
  DCHECK(AlphaFormatSupported(alpha_format));
  return std::unique_ptr<ImageData>(
      new SoftwareImageData(size, pixel_format, alpha_format));
}

scoped_refptr<render_tree::Image> SoftwareResourceProvider::CreateImage(
    std::unique_ptr<ImageData> source_data) {
  printf("SoftwareResourceProvider::CreateImage 1...\n");

  TRACE_EVENT0("cobalt::renderer", "SoftwareResourceProvider::CreateImage()");
  std::unique_ptr<SoftwareImageData> skia_source_data(
      base::polymorphic_downcast<SoftwareImageData*>(source_data.release()));

  auto res = scoped_refptr<render_tree::Image>(
      new SoftwareImage(std::move(skia_source_data)));
  printf("SoftwareResourceProvider::CreateImage GetSize %s...\n", res->GetSize().ToString().c_str());
  return res;
}

std::unique_ptr<render_tree::RawImageMemory>
SoftwareResourceProvider::AllocateRawImageMemory(size_t size_in_bytes,
                                                 size_t alignment) {
  printf("SoftwareResourceProvider::AllocateRawImageMemory 1...\n");
  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::AllocateRawImageMemory()");

  return std::unique_ptr<render_tree::RawImageMemory>(
      new SoftwareRawImageMemory(size_in_bytes, alignment));
}

scoped_refptr<render_tree::Image>
SoftwareResourceProvider::CreateMultiPlaneImageFromRawMemory(
    std::unique_ptr<render_tree::RawImageMemory> raw_image_memory,
    const render_tree::MultiPlaneImageDataDescriptor& descriptor) {
  printf("SoftwareResourceProvider::CreateMultiPlaneImageFromRawMemory 1...\n");
  TRACE_EVENT0(
      "cobalt::renderer",
      "SoftwareResourceProvider::CreateMultiPlaneImageFromRawMemory()");

  std::unique_ptr<SoftwareRawImageMemory> skia_software_raw_image_memory(
      base::polymorphic_downcast<SoftwareRawImageMemory*>(
          raw_image_memory.release()));

  printf("SoftwareResourceProvider::CreateMultiPlaneImageFromRawMemory 2...\n");
  return base::WrapRefCounted(new SoftwareMultiPlaneImage(
      std::move(skia_software_raw_image_memory), descriptor));
}

/*static sk_sp<SkTypeface> GetOrCreateDefaultTypeface() {
    printf("GetOrCreateDefaultTypeface\n");
    /// \TODO __TODO__
    //sk_sp<SkData> data = SkData::MakeFromMalloc(fileData1, fsize1);
    sk_sp<SkData> data = SkData::MakeFromFileName("./resources/fonts/FreeSans.ttf");
    if (!data) {
        printf("failed SkData::MakeFromMalloc for font %s\n", "./resources/fonts/FreeSans.ttf");
    }
    sk_sp<SkTypeface> sktp = SkTypeface::MakeFromData(data, 0);
    return sktp;
}*/

bool SoftwareResourceProvider::HasLocalFontFamily(
    const char* font_family_name) const {
    printf("SoftwareResourceProvider::HasLocalFontFamily %s\n", font_family_name);
  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::HasLocalFontFamily()");


  //return true;




  sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  sk_sp<SkFontStyleSet> style_set(font_manager->matchFamily(font_family_name));
  return style_set->count() > 0;
  //return false;
}

scoped_refptr<render_tree::Typeface> SoftwareResourceProvider::GetLocalTypeface(
    const char* font_family_name, render_tree::FontStyle font_style) {
    printf("SoftwareResourceProvider::GetLocalTypeface %s\n", font_family_name);
  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::GetLocalTypeface()");


  /*sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  //font_manager->
  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(Font::getDefaultTypeface()->makeClone(SkFontArguments()).release()));
  return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));*/

  sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());

  SkTypeface* fontManagerSkTypeface = font_manager->matchFamilyStyle(
      font_family_name, CobaltFontStyleToSkFontStyle(font_style));
  scoped_refptr<render_tree::Typeface> res;

  if(fontManagerSkTypeface) {
      sk_sp<SkTypeface_Cobalt> typeface(
          base::polymorphic_downcast<SkTypeface_Cobalt*>(
              fontManagerSkTypeface));
      res = scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));
  }

  //return nullptr;
  //return base::WrapRefCounted(new cobalt::render_tree::TypefaceStub(NULL));

  /// __TODO__
  if (!fontManagerSkTypeface || !res) {
      sk_sp<SkTypeface_Cobalt> fallbackTypeface(
          base::polymorphic_downcast<SkTypeface_Cobalt*>(Font::getDefaultTypeface()->makeClone(SkFontArguments()).release()));
      res = scoped_refptr<render_tree::Typeface>(new SkiaTypeface(fallbackTypeface));
  }

  return res;
}

scoped_refptr<render_tree::Typeface>
SoftwareResourceProvider::GetLocalTypefaceByFaceNameIfAvailable(
    const char* font_face_name) {
    printf("SoftwareResourceProvider::GetLocalTypefaceByFaceNameIfAvailable %s\n", font_face_name);
  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::GetLocalTypefaceIfAvailable()");

  /*sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  //font_manager->
  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(Font::getDefaultTypeface()->makeClone(SkFontArguments()).release()));
  return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));*/

  sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  SkFontMgr_Cobalt* cobalt_font_manager =
      base::polymorphic_downcast<SkFontMgr_Cobalt*>(font_manager.get());

  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(
          cobalt_font_manager->MatchFaceName(font_face_name)));

  if (!typeface) {
    return nullptr;
  }

  return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));
  //return base::WrapRefCounted(new cobalt::render_tree::TypefaceStub(NULL));
}

scoped_refptr<render_tree::Typeface>
SoftwareResourceProvider::GetCharacterFallbackTypeface(
    int32 character, render_tree::FontStyle font_style,
    const std::string& language) {
    printf("SoftwareResourceProvider::GetCharacterFallbackTypeface %s\n", language.c_str());
  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::GetCharacterFallbackTypeface()");

  /*sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  //font_manager->
  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(Font::getDefaultTypeface()->makeClone(SkFontArguments()).release()));
  return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));*/

  sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
  const char* language_cstr = language.c_str();
  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(
          font_manager->matchFamilyStyleCharacter(
              NULL, CobaltFontStyleToSkFontStyle(font_style), &language_cstr, 1,
              character)));
  return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));
  //return base::WrapRefCounted(new cobalt::render_tree::TypefaceStub(NULL));
}

scoped_refptr<render_tree::Typeface>
SoftwareResourceProvider::CreateTypefaceFromRawData(
    std::unique_ptr<render_tree::ResourceProvider::RawTypefaceDataVector>
        raw_data,
    std::string* error_string) {

  printf("SoftwareResourceProvider::CreateTypefaceFromRawData 1...\n");

  TRACE_EVENT0("cobalt::renderer",
               "SoftwareResourceProvider::CreateFontFromRawData()");

  if (raw_data == NULL) {
    *error_string = "No data to process";
    return NULL;
  }

  /*/// \note SkData::MakeFromFileName don`t support wasm pthreads,
  /// so we use MakeFromMalloc
  sk_sp<SkData> data = SkData::MakeFromMalloc(fileData1, fsize1);
  //sk_sp<SkData> data = SkData::MakeFromFileName(fontPath);
  //if (!data) {
  //  printf("failed SkData::MakeFromMalloc for font %s\n", fontPath);
  //}

  /// \note SkTypeface::MakeFromFile don`t support wasm pthreads,
  /// so we use MakeFromData
  const int index = 0;

  sk_sp<SkTypeface> sktp = SkTypeface::MakeFromData(data, index);
  sk_sp<SkTypeface_Cobalt> typeface(
     base::polymorphic_downcast<SkTypeface_Cobalt*>(
         SkTypeface::MakeFromStream(stream.release()).release()));*/

  /// \TODO __TODO__
  ///ots::ExpandingMemoryStream sanitized_data(
  ///    raw_data->size(), render_tree::ResourceProvider::kMaxTypefaceDataSize);
  ///ots::OTSContext context;
  ///if (!context.Process(&sanitized_data, &((*raw_data)[0]), raw_data->size())) {
  ///  *error_string = "OpenType sanitizer unable to process data";
  ///  return NULL;
  ///}

  std::unique_ptr<SkStreamAsset> stream;
  {
      //sk_sp<SkData> skia_data(SkData::MakeFromMalloc(
      sk_sp<SkData> skia_data(SkData::MakeWithCopy(
          &((*raw_data)[0]), raw_data->size()
          ));
      ///sk_sp<SkData> skia_data(SkData::MakeWithCopy(
      ///    sanitized_data.get(), static_cast<size_t>(sanitized_data.Tell())));
      stream.reset(new SkMemoryStream(skia_data));
  }

  // Free the raw data now that we're done with it.
  raw_data.reset();

  printf("SoftwareResourceProvider::CreateTypefaceFromRawData 2...\n");

  sk_sp<SkTypeface_Cobalt> typeface(
      base::polymorphic_downcast<SkTypeface_Cobalt*>(
          SkTypeface::MakeFromStream(std::move(stream)).release()));

  if(!typeface) {
      printf("SoftwareResourceProvider::CreateTypefaceFromRawData no typeface...\n");
      typeface.reset(
          base::polymorphic_downcast<SkTypeface_Cobalt*>(
              Font::getDefaultTypeface()->makeClone(SkFontArguments()).release())); // TODO
  }

  if (typeface) {
      printf("SoftwareResourceProvider::CreateTypefaceFromRawData 3...\n");
      //return nullptr;
      return scoped_refptr<render_tree::Typeface>(new SkiaTypeface(typeface));
  } else {
      printf("SoftwareResourceProvider::CreateTypefaceFromRawData 4...\n");
    *error_string = "Skia unable to create typeface";
    return NULL;
  }

  //return base::WrapRefCounted(new cobalt::render_tree::TypefaceStub(NULL));
}

const int32 kDefaultCharacter = 48;  // Decimal value for '0'
const render_tree::GlyphIndex kDefaultGlyphIndex = 1;

scoped_refptr<render_tree::GlyphBuffer>
SoftwareResourceProvider::CreateGlyphBuffer(
    const base::char16* text_buffer, size_t text_length,
    const std::string& language, bool is_rtl,
    render_tree::FontProvider* font_provider) {
//printf("SoftwareResourceProvider::CreateGlyphBuffer 1\n");
  return text_shaper_.CreateGlyphBuffer(text_buffer, text_length, language,
                                        is_rtl, font_provider);
  /*SB_UNREFERENCED_PARAMETER(text_buffer);
  SB_UNREFERENCED_PARAMETER(language);
  SB_UNREFERENCED_PARAMETER(is_rtl);
  render_tree::GlyphIndex glyph_index;
  const scoped_refptr<render_tree::Font>& font =
      font_provider->GetCharacterFont(kDefaultCharacter,
                                      &glyph_index);
  const math::RectF& glyph_bounds = font->GetGlyphBounds(glyph_index);
  return base::WrapRefCounted(new cobalt::render_tree::GlyphBuffer(
      math::RectF(0, glyph_bounds.y(), glyph_bounds.width() * text_length,
                  glyph_bounds.height())));*/
}

scoped_refptr<render_tree::GlyphBuffer>
SoftwareResourceProvider::CreateGlyphBuffer(
    const std::string& utf8_string,
    const scoped_refptr<render_tree::Font>& font) {
//printf("SoftwareResourceProvider::CreateGlyphBuffer 2\n");
  return text_shaper_.CreateGlyphBuffer(utf8_string, font);
  /*const math::RectF& glyph_bounds =
      font->GetGlyphBounds(kDefaultGlyphIndex);
  return base::WrapRefCounted(new cobalt::render_tree::GlyphBuffer(math::RectF(
      0, glyph_bounds.y(), glyph_bounds.width() * utf8_string.size(),
      glyph_bounds.height())));*/
}

float SoftwareResourceProvider::GetTextWidth(
    const base::char16* text_buffer, size_t text_length,
    const std::string& language, bool is_rtl,
    render_tree::FontProvider* font_provider,
    render_tree::FontVector* maybe_used_fonts) {
  return text_shaper_.GetTextWidth(text_buffer, text_length, language, is_rtl,
                                   font_provider, maybe_used_fonts);
  //return 20.0;
  /*render_tree::GlyphIndex glyph_index;
  const scoped_refptr<render_tree::Font>& font =
      font_provider->GetCharacterFont(kDefaultCharacter,
                                      &glyph_index);
  if (maybe_used_fonts) {
    maybe_used_fonts->push_back(font);
  }
  return font->GetGlyphWidth(glyph_index) * text_length;*/
}

scoped_refptr<render_tree::Mesh> SoftwareResourceProvider::CreateMesh(
    std::unique_ptr<std::vector<render_tree::Mesh::Vertex> > vertices,
    render_tree::Mesh::DrawMode draw_mode) {
  printf("SoftwareResourceProvider::CreateMesh\n");
  return new SoftwareMesh(std::move(vertices), draw_mode);
}

scoped_refptr<render_tree::Image> SoftwareResourceProvider::DrawOffscreenImage(
    const scoped_refptr<render_tree::Node>& root) {
  printf("SoftwareResourceProvider::DrawOffscreenImage\n");
  SB_UNREFERENCED_PARAMETER(root);
  return scoped_refptr<render_tree::Image>(NULL);
}

}  // namespace skia
}  // namespace rasterizer
}  // namespace renderer
}  // namespace cobalt
