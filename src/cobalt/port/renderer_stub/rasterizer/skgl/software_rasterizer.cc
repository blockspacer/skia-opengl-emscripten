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

#include <memory>

///#include <GLES2/gl2.h>
///#include <GLES2/gl2ext.h>

///#include "renderer_stub/backend/egl/graphics_context.h"
///
#include "renderer_stub/backend/egl/graphics_system.h"
#include "renderer_stub/backend/egl/texture.h"

///#include "renderer_stub/rasterizer/skia/cobalt_skia_type_conversions.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkCanvas.h"
#include "third_party/skia/include/core/SkImageInfo.h"

#include <memory>
#include <thread>
#include <mutex>

//static std::mutex mutexRasterizerSkImage;

namespace cobalt {
namespace renderer {
namespace rasterizer {
namespace egl {

static sk_sp<SkSurface> sRasterSurface;

static sk_sp<SkImage> pImage;

/*sk_sp<SkSurface> getRasterizerSkSurface() {
  return sRasterSurface;
}*/

sk_sp<SkImage> getRasterizerSkImage() {
  //std::lock_guard<std::mutex> lock(mutexRasterizerSkImage);
  return pImage;
}

/*SkPixmap getRasterizerSkPixmap() {
    std::lock_guard<std::mutex> lock(mutexRasterizerSkImage);
    SkPixmap pixmap;
    if(pImage) {
        if (!pImage->peekPixels(&pixmap)) {
            printf("can`t peekPixels\n");
        }
        DCHECK(!pixmap.bounds().isEmpty());
    }
    return pixmap;
}*/

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

  //printf("SoftwareRasterizer::Submit( 3\n");
  SkCanvas* canvas = sRasterSurface->getCanvas();

  //printf("SoftwareRasterizer::Submit( 4\n");
  canvas->clear(SkColorSetARGB(0, 0, 0, 0));

    SkPaint paint;

    // paint.setAlpha(255);
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
  skia_rasterizer_.Submit(render_tree, canvas);

  ///printf("SoftwareRasterizer::Submit( 6\n");
    sRasterSurface->flush();

    {
      ///std::lock_guard<std::mutex> lock(mutexRasterizerSkImage);
      //printf("SoftwareRasterizer::Submit( 7\n");
      pImage = sRasterSurface->makeImageSnapshot();
      if (nullptr == pImage) {
        printf("pImage can`t makeImageSnapshot\n");
      }
    }

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
