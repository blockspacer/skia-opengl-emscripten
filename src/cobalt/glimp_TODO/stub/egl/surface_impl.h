/*
 * Copyright 2016 Google Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GLIMP_STUB_EGL_SURFACE_IMPL_H_
#define GLIMP_STUB_EGL_SURFACE_IMPL_H_

#include "glimp/egl/surface_impl.h"

#include "starboard/configuration.h"

namespace glimp {
namespace egl {

class SurfaceImplStub : public SurfaceImpl {
 public:
  virtual bool IsDisplayRenderTarget() const { return false; }

  // __TODO__
  bool IsWindowSurface() const SB_OVERRIDE {
    return false;
  }
};

}  // namespace egl
}  // namespace glimp

#endif  // GLIMP_STUB_EGL_SURFACE_IMPL_H_
