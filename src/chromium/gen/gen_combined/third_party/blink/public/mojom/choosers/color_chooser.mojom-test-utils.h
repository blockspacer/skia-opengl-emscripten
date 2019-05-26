// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/choosers/color_chooser.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ColorChooserFactoryInterceptorForTesting : public ColorChooserFactory {
  virtual ColorChooserFactory* GetForwardingInterface() = 0;
  void OpenColorChooser(ColorChooserRequest chooser, ColorChooserClientPtr client, uint32_t color, std::vector<ColorSuggestionPtr> suggestions) override;
};
class BLINK_COMMON_EXPORT ColorChooserFactoryAsyncWaiter {
 public:
  explicit ColorChooserFactoryAsyncWaiter(ColorChooserFactory* proxy);
  ~ColorChooserFactoryAsyncWaiter();

 private:
  ColorChooserFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserFactoryAsyncWaiter);
};


class BLINK_COMMON_EXPORT ColorChooserInterceptorForTesting : public ColorChooser {
  virtual ColorChooser* GetForwardingInterface() = 0;
  void SetSelectedColor(uint32_t color) override;
};
class BLINK_COMMON_EXPORT ColorChooserAsyncWaiter {
 public:
  explicit ColorChooserAsyncWaiter(ColorChooser* proxy);
  ~ColorChooserAsyncWaiter();

 private:
  ColorChooser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserAsyncWaiter);
};


class BLINK_COMMON_EXPORT ColorChooserClientInterceptorForTesting : public ColorChooserClient {
  virtual ColorChooserClient* GetForwardingInterface() = 0;
  void DidChooseColor(uint32_t color) override;
};
class BLINK_COMMON_EXPORT ColorChooserClientAsyncWaiter {
 public:
  explicit ColorChooserClientAsyncWaiter(ColorChooserClient* proxy);
  ~ColorChooserClientAsyncWaiter();

 private:
  ColorChooserClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ColorChooserClientAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_COLOR_CHOOSER_MOJOM_TEST_UTILS_H_