// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/xr/xr_reference_space_event_init.h"

#include "third_party/blink/renderer/modules/xr/xr_reference_space.h"
#include "third_party/blink/renderer/modules/xr/xr_rigid_transform.h"

namespace blink {

XRReferenceSpaceEventInit::XRReferenceSpaceEventInit() {
}

XRReferenceSpaceEventInit::~XRReferenceSpaceEventInit() = default;

void XRReferenceSpaceEventInit::Trace(blink::Visitor* visitor) {
  visitor->Trace(reference_space_);
  visitor->Trace(transform_);
  EventInit::Trace(visitor);
}

}  // namespace blink
