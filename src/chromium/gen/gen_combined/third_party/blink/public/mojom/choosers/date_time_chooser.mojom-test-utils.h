// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DateTimeChooserInterceptorForTesting : public DateTimeChooser {
  virtual DateTimeChooser* GetForwardingInterface() = 0;
  void OpenDateTimeDialog(DateTimeDialogValuePtr value, OpenDateTimeDialogCallback callback) override;
};
class BLINK_COMMON_EXPORT DateTimeChooserAsyncWaiter {
 public:
  explicit DateTimeChooserAsyncWaiter(DateTimeChooser* proxy);
  ~DateTimeChooserAsyncWaiter();
  void OpenDateTimeDialog(
      DateTimeDialogValuePtr value, bool* out_success, double* out_dialog_value);

 private:
  DateTimeChooser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DateTimeChooserAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_TEST_UTILS_H_