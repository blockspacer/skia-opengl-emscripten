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


#include "third_party/blink/public/mojom/choosers/date_time_chooser.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "ui/base/ime/mojo/ime_types.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_DATE_TIME_CHOOSER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "ui/base/ime/mojo/ime_types_struct_traits.h"
#endif


namespace blink {
namespace mojom {


void DateTimeChooserInterceptorForTesting::OpenDateTimeDialog(DateTimeDialogValuePtr value, OpenDateTimeDialogCallback callback) {
  GetForwardingInterface()->OpenDateTimeDialog(std::move(value), std::move(callback));
}
DateTimeChooserAsyncWaiter::DateTimeChooserAsyncWaiter(
    DateTimeChooser* proxy) : proxy_(proxy) {}

DateTimeChooserAsyncWaiter::~DateTimeChooserAsyncWaiter() = default;

void DateTimeChooserAsyncWaiter::OpenDateTimeDialog(
    DateTimeDialogValuePtr value, bool* out_success, double* out_dialog_value) {
  base::RunLoop loop;
  proxy_->OpenDateTimeDialog(std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             double* out_dialog_value
,
             bool success,
             double dialog_value) {*out_success = std::move(success);*out_dialog_value = std::move(dialog_value);
            loop->Quit();
          },
          &loop,
          out_success,
          out_dialog_value));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif