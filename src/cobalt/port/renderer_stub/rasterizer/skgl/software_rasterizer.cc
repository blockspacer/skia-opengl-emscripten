// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#include "renderer_stub/rasterizer/skgl/software_rasterizer.h"

#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkImageInfo.h>
#include <skia/include/core/SkString.h>
#include <skia/include/core/SkFont.h>
#include <skia/include/core/SkGraphics.h>
#include <skia/include/core/SkPictureRecorder.h>
#include <skia/include/core/SkStream.h>
#include <skia/include/core/SkSurface.h>
#include <skia/include/core/SkBitmap.h>
#include <skia/include/core/SkShader.h>
#include <skia/src/core/SkMakeUnique.h>
#include <skia/include/core/SkTypeface.h>
#include <skia/include/core/SkDocument.h>
#include <skia/include/core/SkMaskFilter.h>
#include <skia/include/core/SkTextBlob.h>
#include <skia/include/effects/SkGradientShader.h>
#include <skia/src/core/SkOSFile.h>
#include <skia/src/utils/SkOSPath.h>
#include <skia/include/gpu/gl/GrGLAssembleInterface.h>
#include <skia/include/gpu/gl/GrGLInterface.h>
#include <skia/src/gpu/gl/GrGLUtil.h>

///#include <GLES2/gl2.h>
///#include <GLES2/gl2ext.h>

///#include "renderer_stub/backend/egl/graphics_context.h"
///
//#include "renderer_stub/backend/egl/graphics_system.h"
//#include "renderer_stub/backend/egl/texture.h"

///#include "renderer_stub/rasterizer/skia/cobalt_skia_type_conversions.h"

#include <memory>
#include <thread>
#include <mutex>

#if defined(OS_EMSCRIPTEN)
#include <emscripten/threading.h>
#endif  // OS_EMSCRIPTEN

static SkFont* skFont = nullptr;
static bool skFontCreated = false;
static sk_sp<SkTypeface> sktp;
static const float FONT_SIZE_F = 22.0f;

// TODO: replace mutex with task queue/emscripten_async_run_in_main_runtime_thread
// NOTE: surface "blinks" without mutex
#define USE_PIMG_MUTEX 1

namespace cobalt {
namespace renderer {
namespace rasterizer {
namespace egl {

static sk_sp<SkSurface> sRasterSurface;

// TODO >>>
#if defined(USE_PIMG_MUTEX)
static std::mutex pImageMutex;
#endif // USE_PIMG_MUTEX

/// \note sk_sp<SkImage> use thread-safe locks (check it),
/// so don`t use it with WASM MT main browser thread
static sk_sp<SkImage> pImage;

#if defined(OS_EMSCRIPTEN)
static SkPixmap pixmap;
#endif // OS_EMSCRIPTEN

/*sk_sp<SkSurface> getRasterizerSkSurface() {
  return sRasterSurface;
}*/

sk_sp<SkImage> getRasterizerSkImage() {
#if defined(USE_PIMG_MUTEX)
  std::scoped_lock lock(pImageMutex);
#endif // USE_PIMG_MUTEX
  return pImage;
}

// blinks even with mutex
/*SkPixmap getRasterizerSkPixmap() {
#if defined(USE_PIMG_MUTEX)
  std::scoped_lock lock(pImageMutex);
#endif // USE_PIMG_MUTEX
    return pixmap;
}*/

#if defined(OS_EMSCRIPTEN)
void *updateWASMPixmapAndFreeDataCb = nullptr;

void setUpdateWASMPixmapAndFreeDataCb(void* func) {
  DCHECK(func);
  if(func) {
    updateWASMPixmapAndFreeDataCb = func;
  }
}

//#define ASYNC_WASM_PIXMAP_TRANSFER 1

/// \note transfer data without locks in browser thread!
/// \see https://github.com/emscripten-core/emscripten/blob/incoming/tests/pthread/test_pthread_run_on_main_thread.cpp#L96
void tranferPixmapToMainWASMThread(const SkPixmap* pixmapCopy) {
  //if (emscripten_has_threading_support()) {
  //}

#if defined(ASYNC_WASM_PIXMAP_TRANSFER)
    /// \note emscripten_async_* executed in a fire and forget manner
    /// on the main thread in call order
    /// \note emscripten_async_* called from main thread may be sync,
    /// see https://github.com/emscripten-core/emscripten/issues/9086
    emscripten_async_run_in_main_runtime_thread(
      EM_FUNC_SIG_VI /* args count */,
      updateWASMPixmapAndFreeDataCb,
      (void*)pixmapCopy);
#else // ASYNC_WASM_PIXMAP_TRANSFER
    /// \note emscripten_sync* will be proxied
    /// to be called by the main thread
    /*int retcode =*/ emscripten_sync_run_in_main_runtime_thread(
      EM_FUNC_SIG_VI /* args count */,
      updateWASMPixmapAndFreeDataCb,
      (void*)pixmapCopy);
    //DCHECK(retcode != 0);
#endif // ASYNC_WASM_PIXMAP_TRANSFER
}
#endif // OS_EMSCRIPTEN

SoftwareRasterizer::SoftwareRasterizer(
    ///backend::GraphicsContext* context,
    bool purge_skia_font_caches_on_destruction)
    :
    /* context_(
          base::polymorphic_downcast<backend::GraphicsContextEGL*>(context))
          ,*/
          skia_rasterizer_(purge_skia_font_caches_on_destruction)
    {}

void SoftwareRasterizer::Submit(
    const scoped_refptr<render_tree::Node>& render_tree,
    const scoped_refptr<backend::RenderTarget>& render_target,
    const Options& options) {
  ///printf("SoftwareRasterizer::Submit( 1\n");
  DCHECK(render_target);

  // TODO >>
  //return;

  int width = render_target->GetSize().width();
  int height = render_target->GetSize().height();

  // Determine the image size and format that we will use to render to.
  SkImageInfo output_image_info =
      SkImageInfo::MakeN32(width, height, kPremul_SkAlphaType);

  // Allocate the pixels for the output image.
  /*GLenum gl_format = GL_INVALID_ENUM;
  switch (output_image_info.colorType()) {
    case kRGBA_8888_SkColorType: {
      gl_format = GL_RGBA;
      break;
    }
    case kBGRA_8888_SkColorType: {
      gl_format = GL_BGRA_EXT;
      break;
    }
    default: { NOTREACHED() << "Unsupported GL color format."; }
  }
  std::unique_ptr<cobalt::renderer::backend::TextureDataEGL> bitmap_pixels =
      context_->system_egl()->AllocateTextureData(
          math::Size(output_image_info.width(), output_image_info.height()),
          gl_format);
  CHECK(bitmap_pixels);

  SkBitmap bitmap;
  bitmap.installPixels(output_image_info, bitmap_pixels->GetMemory(),
                       bitmap_pixels->GetPitchInBytes());

  // Setup our Skia canvas that we will be using as the target for all CPU Skia
  // output.
  SkCanvas canvas(bitmap);*/

  //printf("SoftwareRasterizer::Submit( 2\n");
  if (!sRasterSurface) {
    const SkImageInfo info = SkImageInfo::MakeN32(width, height, kPremul_SkAlphaType);
    sRasterSurface = SkSurface::MakeRaster(info);
    if (!sRasterSurface) {
      printf("failed to create raster surface\n");
    }
  }

  DCHECK(sRasterSurface);
  //printf("SoftwareRasterizer::Submit( 3\n");
  SkCanvas* canvas = sRasterSurface->getCanvas();

  //printf("SoftwareRasterizer::Submit( 4\n");
  canvas->clear(SkColorSetARGB(0, 0, 0, 0));

  SkPaint paint;

  //paint.setAlpha(255);
#ifdef ENABLE_SKIA_HQ
  paint.setAntiAlias(true);
  paint.setFilterQuality( SkFilterQuality::kMedium_SkFilterQuality );
#else
  paint.setAntiAlias(false);
  paint.setFilterQuality( SkFilterQuality::kNone_SkFilterQuality );
#endif

  const bool draw_dummy_shapes = false;
  if(draw_dummy_shapes) {
  //printf("SoftwareRasterizer::Submit( 5.1\n");
    paint.setColor(SK_ColorRED);
    /// paint.setColor(0xffeeeeee);
      //printf("onDraw() 2\n");
    ///paint.setColor(SK_ColorBLACK);
    paint.setStyle(SkPaint::kFill_Style);
      //printf("onDraw() 4\n");

    canvas->drawRect({ 100, 100, 50, 50 }, paint);

    paint.setColor(SK_ColorGREEN);
    canvas->drawRect({ 1000, 1700, 50, 50 }, paint);

    paint.setColor(SK_ColorBLUE);
    canvas->drawRect({ 500, 700, 300, 500 }, paint);

    paint.setColor(SK_ColorWHITE);
    const SkScalar m_size = 200;
    canvas->drawCircle(100, 100, m_size, paint);
  }

  ///printf("SoftwareRasterizer::Submit( 5\n");

  // TODO >>
  //return;

  // see https://github.com/blockspacer/cobalt-clone-28052019/blob/master/src/cobalt/renderer/pipeline.cc#L507
  skia_rasterizer_.Submit(render_tree, canvas);

  // TODO: draw_dummy_counter may cause hangs on WASM MT
  const bool draw_dummy_counter = false;
  if(draw_dummy_counter) {
    SkPaint glyph_paint(paint);
    glyph_paint.setColor(SK_ColorBLACK);
    if(!skFont) {
      DCHECK(!skFontCreated);
      skFontCreated = true;
      sktp = SkTypeface::MakeFromFile("./resources/fonts/FreeSans.ttf");
      DCHECK(sktp);
      skFont =
          new SkFont(sktp, 30.0f, 1.5f, 0.0f);
      DCHECK(skFont);
      skFont->setEdging(SkFont::Edging::kAntiAlias);
    }
    CHECK(skFont);
    DCHECK(sktp);
    auto last_time_sec = base::TimeTicks::Now().since_origin().InSeconds();
    std::string blobText = "last_time_sec: ";
    blobText += std::to_string(last_time_sec);
    auto blob3 = SkTextBlob::MakeFromString(blobText.c_str(), *skFont);
    canvas->drawTextBlob(blob3.get(), 500, 500, glyph_paint);
  }

  // TODO >>
  //return;

  ///printf("SoftwareRasterizer::Submit( 6\n");
    sRasterSurface->flush();

    {
#if defined(USE_PIMG_MUTEX)
      std::scoped_lock lock(pImageMutex);
#endif // USE_PIMG_MUTEX
      //printf("SoftwareRasterizer::Submit( 7\n");
      pImage = sRasterSurface->makeImageSnapshot();
      if (nullptr == pImage) {
        printf("pImage can`t makeImageSnapshot\n");
      } else {
        DCHECK(!pImage->bounds().isEmpty());
        DCHECK(pImage->bounds().width() > 0);
        DCHECK(pImage->bounds().height() > 0);
        DCHECK(pImage->bounds().width() < 999999);
        DCHECK(pImage->bounds().height() < 999999);
#if defined(OS_EMSCRIPTEN)
        if (!pImage->peekPixels(&pixmap)) {
            printf("can`t peekPixels\n");
        }
        DCHECK(!pixmap.bounds().isEmpty());
#endif // OS_EMSCRIPTEN
      }
    }

#if defined(OS_EMSCRIPTEN)
  /// \note data must be freed in callback
  const SkPixmap* pixmapCopy = new SkPixmap(pixmap);
  /// \note tranfer data without locks
  tranferPixmapToMainWASMThread(pixmapCopy);
#endif // OS_EMSCRIPTEN

  //printf("SoftwareRasterizer::Submit( 8\n");

  // The rasterized pixels are still on the CPU, ship them off to the GPU
  // for output to the display.  We must first create a backend GPU texture
  // with the data so that it is visible to the GPU.
  /*std::unique_ptr<backend::TextureEGL> output_texture =
      context_->CreateTexture(std::move(bitmap_pixels));

  backend::RenderTargetEGL* render_target_egl =
      base::polymorphic_downcast<backend::RenderTargetEGL*>(
          render_target.get());

  backend::GraphicsContextEGL::ScopedMakeCurrent scoped_make_current(
      context_, render_target_egl);

  context_->Blit(output_texture->gl_handle(), 0, 0, width, height);
  context_->SwapBuffers(render_target_egl);*/
}

render_tree::ResourceProvider* SoftwareRasterizer::GetResourceProvider() {
  //return nullptr;///
  printf("SoftwareRasterizer::GetResourceProvider 1\n");
  return skia_rasterizer_.GetResourceProvider();
  ///return &resource_provider_stub_;
}

}  // namespace egl
}  // namespace rasterizer
}  // namespace renderer
}  // namespace cobalt
