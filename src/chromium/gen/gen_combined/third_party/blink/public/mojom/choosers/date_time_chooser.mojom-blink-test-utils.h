// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT DateTimeChooserInterceptorForTesting : public DateTimeChooser {
  virtual DateTimeChooser* GetForwardingInterface() = 0;
  void OpenDateTimeDialog(DateTimeDialogValuePtr value, OpenDateTimeDialogCallback callback) override;
};
class CORE_EXPORT DateTimeChooserAsyncWaiter {
 public:
  explicit DateTimeChooserAsyncWaiter(DateTimeChooser* proxy);
  ~DateTimeChooserAsyncWaiter();
  void OpenDateTimeDialog(
      DateTimeDialogValuePtr value, bool* out_success, double* out_dialog_value);

 private:
  DateTimeChooser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DateTimeChooserAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_