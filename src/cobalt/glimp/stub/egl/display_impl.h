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

#ifndef GLIMP_STUB_EGL_DISPLAY_IMPL_H_
#define GLIMP_STUB_EGL_DISPLAY_IMPL_H_

#include <map>
#include <set>

#include "glimp/egl/config.h"
#include "glimp/egl/display_impl.h"
#include "nb/scoped_ptr.h"

namespace glimp {
namespace egl {

class DisplayImplStub : public DisplayImpl {
 public:
  DisplayImplStub();
  ~DisplayImplStub();

  DisplayImpl::VersionInfo GetVersionInfo() SB_OVERRIDE;

  const ConfigSet& GetSupportedConfigs() const SB_OVERRIDE {
    return supported_configs_;
  }

  nb::scoped_ptr<SurfaceImpl> CreateWindowSurface(const Config* config,
                                                  EGLNativeWindowType win,
                                                  const AttribMap& attributes)
      SB_OVERRIDE;

  nb::scoped_ptr<SurfaceImpl> CreatePbufferSurface(const Config* config,
                                                   const AttribMap& attributes)
      SB_OVERRIDE;

  nb::scoped_ptr<gles::ContextImpl> CreateContext(const Config* config,
                                                  int gles_version) SB_OVERRIDE;

  bool SetSwapInterval(int interval) SB_OVERRIDE { return true; }

 private:
  void InitializeSupportedConfigs();

  ConfigSet supported_configs_;
};

}  // namespace egl
}  // namespace glimp

#endif  // GLIMP_STUB_EGL_DISPLAY_IMPL_H_
