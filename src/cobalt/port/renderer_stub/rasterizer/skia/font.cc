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

#if defined(ENABLE_SKIA)
#include "renderer_stub/rasterizer/skia/font.h"

#include "base/lazy_instance.h"

#include "third_party/skia/include/core/SkPaint.h"

#include "include/core/SkFont.h"
#include "include/core/SkFontMetrics.h"

#include "cobalt/base/polymorphic_downcast.h"

#include <mutex>
#include <memory>

#if defined(__EMSCRIPTEN__)
#include "emscripten/emscripten.h"
#include "emscripten/html5.h"
#endif // __EMSCRIPTEN__

// TODO: free memory
static const char* fallbackFontPath = "./resources/fonts/FreeSans.ttf";
//static SkFont* fallbackFont;
static std::mutex fallbackFontTypefaceMutex;
static sk_sp<SkTypeface> fallbackFontTypeface;
static bool fallbackFontTypeface_Created = false;
//static const float FONT_SIZE_F = 22.0;
/*static sk_sp<SkTypeface_Cobalt> fallbackSkTypeface_Cobalt;
static bool fallbackSkTypeface_Cobalt_Created = false;*/

static sk_sp<SkTypeface> getOrCreateFallbackTypeface() {
  printf("getOrCreateFallbackTypeface 1...\n");

  // TODO >>
  std::scoped_lock lock(fallbackFontTypefaceMutex);

  if (!fallbackFontTypeface) {
    printf("creating fallback typeface...\n");

    //DCHECK(false);

    DCHECK(!fallbackFontTypeface_Created);
    fallbackFontTypeface_Created = true;
    sk_sp<SkData> skia_data = SkData::MakeFromFileName(fallbackFontPath);
    if (!skia_data) {
        printf("failed SkData::MakeFromMalloc for font %s\n", fallbackFontPath);
    }
    DCHECK(skia_data);
    DCHECK(!skia_data->isEmpty());
    const int index = 0;
    //fallbackFontTypeface = SkTypeface::MakeFromData(::std::move(data), index);

    printf("getOrCreateFallbackTypeface: reading file %s\n", fallbackFontPath);

    //fallbackFontTypeface = SkTypeface::MakeFromFile(fallbackFontPath, index);

    std::unique_ptr<SkStreamAsset> stream;
    {
        //sk_sp<SkData> skia_data(SkData::MakeFromMalloc(
        ///sk_sp<SkData> skia_data(SkData::MakeWithCopy(
        ///    sanitized_data.get(), static_cast<size_t>(sanitized_data.Tell())));
        stream.reset(new SkMemoryStream(skia_data));
    }
    DCHECK(stream->hasLength());

#if defined(ENABLE_DYNAMIC_FONT_LOADING)
    sk_sp<SkFontMgr> font_manager(SkFontMgr::RefDefault());
    DCHECK(font_manager);
    //fallbackFontTypeface = font_manager->makeFromStream(std::move(stream));
    fallbackFontTypeface = SkTypeface::MakeFromStream(std::move(stream));
#else
    fallbackFontTypeface = SkTypeface::MakeFromStream(std::move(stream));
#endif
  }
  DCHECK(fallbackFontTypeface);
  DCHECK(!fallbackFontTypeface->getBounds().isEmpty());
  DCHECK(fallbackFontTypeface->getBounds().isFinite());
  DCHECK(fallbackFontTypeface->countGlyphs() > 0);

  //printf("getOrCreateFallbackTypeface 2...\n");

  return fallbackFontTypeface;
}

/*static SkFont* getOrCreateFallbackFont() {
  if (!fallbackFont) {
    fallbackFont =
        new SkFont(getOrCreateFallbackTypeface(), FONT_SIZE_F, 1.0f, 0.0f);
  }
  DCHECK(fallbackFont);
  return fallbackFont;
}*/

namespace {
const float kXHeightEstimateFactor = 0.56f;
}  // namespace

namespace cobalt {
namespace renderer {
namespace rasterizer {
namespace skia {
namespace {

struct NonTrivialStaticFields {
  NonTrivialStaticFields() {
    default_paint.setAntiAlias(true);
    ///default_paint.setSubpixelText(true);
  }

  SkPaint default_paint;

 private:
  DISALLOW_COPY_AND_ASSIGN(NonTrivialStaticFields);
};

// |non_trivial_static_fields| will be lazily created on the first time it's
// accessed.
base::LazyInstance<NonTrivialStaticFields>::DestructorAtExit
    non_trivial_static_fields = LAZY_INSTANCE_INITIALIZER;

}  // namespace

Font::Font(SkiaTypeface* typeface, SkScalar size)
    : typeface_(typeface), size_(size) {
    //DCHECK(size > 21 && size < 23); // TODO
    //std::cout << "Font::Font() %d \n" << typeface_->GetId() << std::endl;
#if defined(__EMSCRIPTEN__)
  //EM_LOG("Font::Font() 1");
#endif
  glyph_bounds_thread_checker_.DetachFromThread();
  DCHECK(typeface_);
  //DCHECK(typeface_->GetId());
  DCHECK(typeface_->GetSkTypeface());
  /*if (!skFont_) {
      skFont_ =
          new SkFont(typeface_->GetSkTypeface(), size_, 1.0f, 0.0f); // TODO: free resources (!!!)
      //font_metrics_ = new SkFontMetrics;
      //skFont_->getMetrics(font_metrics_);
      //DCHECK(font_metrics_);
  }
  DCHECK(skFont_);*/
#if defined(__EMSCRIPTEN__)
  EM_LOG("Font::Font() 2");
#endif
}

/*sk_sp<SkTypeface> Font::prepareFallbackTypeface() {
  return getOrCreateFallbackTypeface();
}*/

/*sk_sp<SkTypeface_Cobalt> Font::prepareFallbackSkTypeface() {
  return getOrCreateFallbackSkTypeface();
}*/

Font::~Font()
{
/*
  if (!skFont_) {
   delete skFont_;
  }
*/
}

/*const sk_sp<SkTypeface_Cobalt>& Font::GetSkTypeface() const {
    DCHECK(typeface_);
  return typeface_->GetSkTypeface();

  ///return getOrCreateFallbackSkTypeface();
}*/


render_tree::TypefaceId Font::GetTypefaceId() const {
    DCHECK(typeface_);
  return typeface_->GetId();;//
}

render_tree::FontMetrics Font::GetFontMetrics() const {
    ///printf("FontMetrics Font::GetFontMetrics 1\n");
    //DCHECK(skFont_);
    DCHECK(typeface_);
    //DCHECK(font_metrics_);
  //SkPaint paint = GetSkPaint();

  const SkFont& tmpFont = GetSkFont();
    //(typeface_->GetSkTypeface(), size_, 1.0f, 0.0f); /// __TODO__

  //SkPaint::FontMetrics font_metrics;
  SkFontMetrics font_metrics;
  //paint.getFontMetrics(&font_metrics);
  //getOrCreateFallbackFont()->getMetrics(&font_metrics); /// __TODO__
  //DCHECK(skFont_);

  ///skFont_->getMetrics(&font_metrics); /// __TODO__
  tmpFont.getMetrics(&font_metrics);

  // The x-height is the height of the 'x' glyph. It is used to find the visual
  // 'middle' of the font to allow vertical alignment to the middle of the font.
  // See also https://en.wikipedia.org/wiki/X-height
  float x_height;
  //DCHECK(font_metrics);
  if (font_metrics.fXHeight) {
      x_height = font_metrics.fXHeight;
  } else {
    // If the font does not have an 'x' glyph, we need to estimate the value.
    // A good estimation  is to use 0.56 * the font ascent.
    x_height = font_metrics.fAscent * kXHeightEstimateFactor;
  }

  // In Skia, ascent is negative, while descent and leading are positive.
  return render_tree::FontMetrics(-font_metrics.fAscent, font_metrics.fDescent,
                                  font_metrics.fLeading, x_height);
}

render_tree::GlyphIndex Font::GetGlyphForCharacter(int32 utf32_character) {
  return typeface_->GetGlyphForCharacter(utf32_character);
}

const math::RectF& Font::GetGlyphBounds(render_tree::GlyphIndex glyph) {
    //printf("GetGlyphBounds 1\n");
    //DCHECK(skFont_);
    DCHECK(typeface_);
    //DCHECK(font_metrics_);
  DCHECK_CALLED_ON_VALID_THREAD(glyph_bounds_thread_checker_);
  //printf("GetGlyphBounds 2\n");
  // Check to see if the glyph falls within the the first 256 glyphs. These
  // characters are part of the primary page and are stored within an array as
  // an optimization.
  //printf("GetGlyphBounds 3\n");
  if (glyph < kPrimaryPageSize) {
      //printf("GetGlyphBounds 4\n");
    // The first page is lazily allocated, so we don't use the memory if it's
    // never used.
    if (!primary_page_glyph_bounds_) {
        //printf("GetGlyphBounds 5\n");
      primary_page_glyph_bounds_.reset(new math::RectF[kPrimaryPageSize]);
      // If the page has already been allocated, then check for the glyph's
      // bounds having already been set. If this is the case, simply return the
      // bounds.
    } else if (primary_page_glyph_bounds_bits_[glyph]) {
        //printf("GetGlyphBounds 6\n");
      return primary_page_glyph_bounds_[glyph];
    }
    // Otherwise, check for the glyph's bounds within the map.
    //printf("GetGlyphBounds 7\n");
  } else {
      //printf("GetGlyphBounds 8\n");
    GlyphToBoundsMap::iterator map_iterator = glyph_to_bounds_map_.find(glyph);
    if (map_iterator != glyph_to_bounds_map_.end()) {
        //printf("GetGlyphBounds 9\n");
      return map_iterator->second;
    }
  }

  //printf("GetGlyphBounds 10\n");
  // If we reach this point, the glyph's bounds were not previously cached and
  // need to be calculated them now.
  //SkPaint paint = GetSkPaint();
  ///paint.setTextEncoding(SkPaint::kGlyphID_TextEncoding);

  //printf("GetGlyphBounds 11\n");
  // TODO
  //int ascent_pixels_;
  //int height_pixels_;
  //int cap_height_pixels_;
  //double average_width_pixels_;

  //auto fnt = getOrCreateFallbackFont(); /// __TODO__
  //DCHECK(fnt);
  {
    //SkFontMetrics metrics;
    //skFont_->getMetrics(&metrics);
    //printf("GetGlyphBounds 12\n");
    //ascent_pixels_ = SkScalarCeilToInt(-font_metrics_.fAscent);
    //height_pixels_ = ascent_pixels_ + SkScalarCeilToInt(font_metrics_.fDescent);
    //cap_height_pixels_ = SkScalarCeilToInt(font_metrics_.fCapHeight);
    //average_width_pixels_ = SkScalarToDouble(font_metrics_.fAvgCharWidth);
  }
  //printf("GetGlyphBounds 13\n");

  SkRect skia_bounds;
  // TODO
  //printf("GetGlyphBounds 14\n");
  //DCHECK(fnt);
  float width;

  const SkFont& tmpFont = GetSkFont();
      //new SkFont(typeface_->GetSkTypeface(), size_, 1.0f, 0.0f); /// __TODO__

  width = tmpFont.measureText(
          &glyph,
          sizeof(render_tree::GlyphIndex),//2,//4,//
          //kUTF8_SkTextEncoding,
          //kUTF16_SkTextEncoding,
          SkTextEncoding::kGlyphID,
          //kUTF32_SkTextEncoding,
          &skia_bounds
          //, &paint
      );

  //DCHECK(width > 0); // TODO: may be empty for some time

  if(width <= 0) {
    //printf("Font::GetGlyphBounds: measureText width <= 0\n");
    return std::move(math::RectF());
  }

  //delete tmpFont; /// __TODO__

  //SkScalar* widths;
  //fnt->getWidths(&glyph,1,widths,&skia_bounds);
  //printf("fnt measureText %f\n", width);
  // printf("average_width_pixels_ %f\n", average_width_pixels_);
  // width = std::fmax(average_width_pixels_, width); // __TODO__
  // float spacing = 5.0f;
  // width = skia_bounds.width(); // https://stackoverflow.com/a/24104251/10904212
  //width += 5.f;
      ///paint.measureText(&glyph, sizeof(render_tree::GlyphIndex), &skia_bounds);

  //printf("GetGlyphBounds 15\n");
  // Both cache and return the glyph's bounds.
  if (glyph < kPrimaryPageSize) {
      //printf("GetGlyphBounds 16\n");
    primary_page_glyph_bounds_bits_.set(glyph, true);
    return primary_page_glyph_bounds_[glyph] =
               math::RectF(0, skia_bounds.top(), width, skia_bounds.height());
  } else {
      //printf("GetGlyphBounds 17\n");
    return glyph_to_bounds_map_[glyph] =
               math::RectF(0, skia_bounds.top(), width, skia_bounds.height());
  }
  /*return glyph_to_bounds_map_[glyph] =
             math::RectF(0, skia_bounds.top(), skia_bounds.right() - skia_bounds.left(), skia_bounds.height());
  return glyph_to_bounds_map_[glyph] =
             math::RectF(0, skia_bounds.top(), width, skia_bounds.height());*/
}

float Font::GetGlyphWidth(render_tree::GlyphIndex glyph) {
  return GetGlyphBounds(glyph).width();
}

SkPaint Font::GetSkPaint() const {
  SkPaint paint(GetDefaultSkPaint());
  /*const sk_sp<SkTypeface>& typeface(typeface_->GetSkTypeface());

  paint.setTypeface(typeface);
  paint.setTextSize(size_);
  */
  return paint;
}

/*sk_sp<SkTypeface_Cobalt> Font::GetDefaultSkTypeface() {
    ///return typeface_->GetSkTypeface();

    return getOrCreateFallbackSkTypeface();
}*/

const SkPaint& Font::GetDefaultSkPaint() {
  return non_trivial_static_fields.Get().default_paint;
}

/*const SkFont* Font::GetSkFont() const {
    DCHECK(skFont_);
    return skFont_;
}*/

const SkFont Font::GetSkFont() const {
  return GetSkFont(size_, 1.0f, 0.0f);
}

scoped_refptr<SkiaTypeface> Font::GetTypeface() const {
  return typeface_;
}

const SkFont Font::GetSkFont(SkScalar size, SkScalar scaleX, SkScalar skewX, sk_sp<SkTypeface> typeface) const {
  sk_sp<SkTypeface> usedTypeface = typeface;
  if (!typeface) {
    usedTypeface = typeface_->GetSkTypeface();
  }

  DCHECK(usedTypeface);
  DCHECK(size > 0);

  /// see https://chromium.googlesource.com/chromium/src/+/master/ui/gfx/render_text_harfbuzz.cc#520
  SkFont tmpFont(usedTypeface, size, scaleX, skewX); /// __TODO__

  /// \todo test kAntiAlias on wasm
#if !defined(OS_EMSCRIPTEN)
  tmpFont.setEdging(SkFont::Edging::kAntiAlias);
#endif

  return tmpFont;
}

/*const SkFont* Font::GetDefaultFont() {
  return getOrCreateFallbackFont();
}*/

sk_sp<SkTypeface> Font::getDefaultTypeface() {
    return getOrCreateFallbackTypeface();
}

}  // namespace skia
}  // namespace rasterizer
}  // namespace renderer
}  // namespace cobalt

#endif // ENABLE_SKIA
