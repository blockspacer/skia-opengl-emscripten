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

#ifndef COBALT_RENDERER_RASTERIZER_EGL_SOFTWARE_RASTERIZER_H_
#define COBALT_RENDERER_RASTERIZER_EGL_SOFTWARE_RASTERIZER_H_

#include "base/memory/ref_counted.h"
#include "cobalt/render_tree/resource_provider.h"
///#include "renderer_stub/backend/graphics_context.h"
#include "renderer_stub/backend/render_target.h"
#include "renderer_stub/rasterizer/rasterizer.h"
#include "renderer_stub/rasterizer/skia/software_rasterizer.h"

#include "cobalt/render_tree/resource_provider_stub.h"

#include <skia/include/core/SkCanvas.h>
#include <skia/include/core/SkFont.h>
#include <skia/include/core/SkGraphics.h>
#include <skia/include/core/SkPictureRecorder.h>
#include <skia/include/core/SkStream.h>
#include <skia/include/core/SkSurface.h>

namespace cobalt {
namespace renderer {

namespace backend {
///class GraphicsContextEGL;
}  // namespace backend

namespace rasterizer {
namespace egl {

// TODO:
// SkSurface and SkCanvas are both NOT thread-safe. Only SkImage and SkPicture are.
//Thus to shard a large drawing across multiple threads, you need a separate instance of a surface/canvas in each thread.
//sk_sp<SkSurface> getRasterizerSkSurface();
sk_sp<SkImage> getRasterizerSkImage();

// A software rasterizer which uses Skia to rasterize render trees on the CPU
// and then uses EGL/GLES2 to transfer the result to the passed in given render
// target.
class SoftwareRasterizer : public Rasterizer {
 public:
  SoftwareRasterizer(///backend::GraphicsContext* context,
                     bool purge_skia_font_caches_on_destruction);

  void Submit(const scoped_refptr<render_tree::Node>& render_tree,
              const scoped_refptr<backend::RenderTarget>& render_target,
              const Options& options) override;

  render_tree::ResourceProvider* GetResourceProvider() override;

  void MakeCurrent() override {}
  void ReleaseContext() override {}

 private:
  ///backend::GraphicsContextEGL* context_;
  skia::SoftwareRasterizer skia_rasterizer_;

  render_tree::ResourceProviderStub resource_provider_stub_;
};

}  // namespace egl
}  // namespace rasterizer
}  // namespace renderer
}  // namespace cobalt

#endif  // COBALT_RENDERER_RASTERIZER_EGL_SOFTWARE_RASTERIZER_H_
