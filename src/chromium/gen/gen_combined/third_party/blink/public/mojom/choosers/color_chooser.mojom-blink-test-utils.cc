// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void ColorChooserFactoryInterceptorForTesting::OpenColorChooser(ColorChooserRequest chooser, ColorChooserClientPtr client, uint32_t color, WTF::Vector<ColorSuggestionPtr> suggestions) {
  GetForwardingInterface()->OpenColorChooser(std::move(chooser), std::move(client), std::move(color), std::move(suggestions));
}
ColorChooserFactoryAsyncWaiter::ColorChooserFactoryAsyncWaiter(
    ColorChooserFactory* proxy) : proxy_(proxy) {}

ColorChooserFactoryAsyncWaiter::~ColorChooserFactoryAsyncWaiter() = default;




void ColorChooserInterceptorForTesting::SetSelectedColor(uint32_t color) {
  GetForwardingInterface()->SetSelectedColor(std::move(color));
}
ColorChooserAsyncWaiter::ColorChooserAsyncWaiter(
    ColorChooser* proxy) : proxy_(proxy) {}

ColorChooserAsyncWaiter::~ColorChooserAsyncWaiter() = default;




void ColorChooserClientInterceptorForTesting::DidChooseColor(uint32_t color) {
  GetForwardingInterface()->DidChooseColor(std::move(color));
}
ColorChooserClientAsyncWaiter::ColorChooserClientAsyncWaiter(
    ColorChooserClient* proxy) : proxy_(proxy) {}

ColorChooserClientAsyncWaiter::~ColorChooserClientAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif