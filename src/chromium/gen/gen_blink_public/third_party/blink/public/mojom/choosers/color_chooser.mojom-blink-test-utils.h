// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/choosers/color_chooser.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ColorChooserFactoryInterceptorForTesting : public ColorChooserFactory {
  virtual ColorChooserFactory* GetForwardingInterface() = 0;
  void OpenColorChooser(ColorChooserRequest chooser, ColorChooserClientPtr client, uint32_t color, WTF::Vector<ColorSuggestionPtr> suggestions) override;
};
class PLATFORM_EXPORT ColorChooserFactoryAsyncWaiter {
 public:
  explicit ColorChooserFactoryAsyncWaiter(ColorChooserFactory* proxy);
  ~ColorChooserFactoryAsyncWaiter();

 private:
  ColorChooserFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserFactoryAsyncWaiter);
};


class PLATFORM_EXPORT ColorChooserInterceptorForTesting : public ColorChooser {
  virtual ColorChooser* GetForwardingInterface() = 0;
  void SetSelectedColor(uint32_t color) override;
};
class PLATFORM_EXPORT ColorChooserAsyncWaiter {
 public:
  explicit ColorChooserAsyncWaiter(ColorChooser* proxy);
  ~ColorChooserAsyncWaiter();

 private:
  ColorChooser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserAsyncWaiter);
};


class PLATFORM_EXPORT ColorChooserClientInterceptorForTesting : public ColorChooserClient {
  virtual ColorChooserClient* GetForwardingInterface() = 0;
  void DidChooseColor(uint32_t color) override;
};
class PLATFORM_EXPORT ColorChooserClientAsyncWaiter {
 public:
  explicit ColorChooserClientAsyncWaiter(ColorChooserClient* proxy);
  ~ColorChooserClientAsyncWaiter();

 private:
  ColorChooserClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_