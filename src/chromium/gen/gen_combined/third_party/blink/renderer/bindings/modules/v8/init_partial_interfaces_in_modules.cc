// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/bindings/modules/v8/v8_audio_track_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_css_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_data_transfer_item_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dedicated_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_dev_tools_host_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_document_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_canvas_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_iframe_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_input_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_media_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_video_element_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_navigator_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_offscreen_canvas_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_screen_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shadow_root_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_shared_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_url_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_track_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_window_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_global_scope_partial.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_worker_navigator_partial.h"

namespace blink {

void InitPartialInterfacesInModules() {
  V8AudioTrackPartial::Initialize();
  V8CSSPartial::Initialize();
  V8DataTransferItemPartial::Initialize();
  V8DedicatedWorkerGlobalScopePartial::Initialize();
  V8DevToolsHostPartial::Initialize();
  V8DocumentPartial::Initialize();
  V8HTMLCanvasElementPartial::Initialize();
  V8HTMLElementPartial::Initialize();
  V8HTMLIFrameElementPartial::Initialize();
  V8HTMLInputElementPartial::Initialize();
  V8HTMLMediaElementPartial::Initialize();
  V8HTMLVideoElementPartial::Initialize();
  V8NavigatorPartial::Initialize();
  V8OffscreenCanvasPartial::Initialize();
  V8ScreenPartial::Initialize();
  V8ShadowRootPartial::Initialize();
  V8SharedWorkerGlobalScopePartial::Initialize();
  V8URLPartial::Initialize();
  V8VideoTrackPartial::Initialize();
  V8WindowPartial::Initialize();
  V8WorkerGlobalScopePartial::Initialize();
  V8WorkerNavigatorPartial::Initialize();
}

} // namespace blink
