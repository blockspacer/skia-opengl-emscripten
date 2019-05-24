// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/media_feature_names.json5


#include "third_party/blink/renderer/core/css/media_feature_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace media_feature_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kDevicePixelRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kMaxDevicePixelRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kMinDevicePixelRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kTransform3dMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kAnyHoverMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kAnyPointerMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kColorMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kColorGamutMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kColorIndexMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kDeviceAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kDeviceHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kDeviceWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kDisplayModeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kGridMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kHoverMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kImmersiveMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kMaxAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kMaxColorMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kMaxColorIndexMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kMaxDeviceAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kMaxDeviceHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[22];
const AtomicString& kMaxDeviceWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[23];
const AtomicString& kMaxHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[24];
const AtomicString& kMaxMonochromeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[25];
const AtomicString& kMaxResolutionMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[26];
const AtomicString& kMaxWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[27];
const AtomicString& kMinAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[28];
const AtomicString& kMinColorMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[29];
const AtomicString& kMinColorIndexMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[30];
const AtomicString& kMinDeviceAspectRatioMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[31];
const AtomicString& kMinDeviceHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[32];
const AtomicString& kMinDeviceWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[33];
const AtomicString& kMinHeightMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[34];
const AtomicString& kMinMonochromeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[35];
const AtomicString& kMinResolutionMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[36];
const AtomicString& kMinWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[37];
const AtomicString& kMonochromeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[38];
const AtomicString& kOrientationMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[39];
const AtomicString& kPointerMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[40];
const AtomicString& kPrefersColorSchemeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[41];
const AtomicString& kPrefersReducedMotionMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[42];
const AtomicString& kResolutionMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[43];
const AtomicString& kScanMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[44];
const AtomicString& kShapeMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[45];
const AtomicString& kWidthMediaFeature = reinterpret_cast<AtomicString*>(&names_storage)[46];

void Init() {
  static bool is_loaded = false;
  if (is_loaded) return;
  is_loaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "-webkit-device-pixel-ratio", 12532418, 26 },
    { "-webkit-max-device-pixel-ratio", 15699528, 30 },
    { "-webkit-min-device-pixel-ratio", 6230028, 30 },
    { "-webkit-transform-3d", 11719803, 20 },
    { "any-hover", 6083964, 9 },
    { "any-pointer", 5691974, 11 },
    { "aspect-ratio", 10453312, 12 },
    { "color", 2734929, 5 },
    { "color-gamut", 14319686, 11 },
    { "color-index", 13972807, 11 },
    { "device-aspect-ratio", 5022071, 19 },
    { "device-height", 9832216, 13 },
    { "device-width", 4551487, 12 },
    { "display-mode", 11513881, 12 },
    { "grid", 1786690, 4 },
    { "height", 6697833, 6 },
    { "hover", 3481422, 5 },
    { "immersive", 12094647, 9 },
    { "max-aspect-ratio", 12094319, 16 },
    { "max-color", 629821, 9 },
    { "max-color-index", 7430117, 15 },
    { "max-device-aspect-ratio", 12942084, 23 },
    { "max-device-height", 1041693, 17 },
    { "max-device-width", 5334797, 16 },
    { "max-height", 12768354, 10 },
    { "max-monochrome", 15262871, 14 },
    { "max-resolution", 956048, 14 },
    { "max-width", 6572179, 9 },
    { "min-aspect-ratio", 16386843, 16 },
    { "min-color", 12833068, 9 },
    { "min-color-index", 9407342, 15 },
    { "min-device-aspect-ratio", 5241967, 23 },
    { "min-device-height", 9440595, 17 },
    { "min-device-width", 8878672, 16 },
    { "min-height", 12467950, 10 },
    { "min-monochrome", 5118153, 14 },
    { "min-resolution", 3458349, 14 },
    { "min-width", 1786673, 9 },
    { "monochrome", 1202583, 10 },
    { "orientation", 10339552, 11 },
    { "pointer", 8738242, 7 },
    { "prefers-color-scheme", 6233344, 20 },
    { "prefers-reduced-motion", 12260730, 22 },
    { "resolution", 1320318, 10 },
    { "scan", 2480616, 4 },
    { "shape", 15210140, 5 },
    { "width", 12902275, 5 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace media_feature_names
}  // namespace blink
