// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_KEYBOARD_KEYBOARD_UKM_RECORDER_H_
#define UI_KEYBOARD_KEYBOARD_UKM_RECORDER_H_

#include "base/macros.h"
#if defined(ENABLE_UKM)
#include "services/metrics/public/cpp/ukm_source_id.h"
#endif defined(ENABLE_UKM)
#include "ui/base/ime/text_input_type.h"
#include "ui/keyboard/keyboard_export.h"

namespace keyboard {


#if defined(ENABLE_UKM)
// Records a keyboard show event in UKM, under the VirtualKeyboard.Open metric.
// Ignores invalid sources.
KEYBOARD_EXPORT void RecordUkmKeyboardShown(
    ukm::SourceId source,
    const ui::TextInputType& input_type);
#endif // ENABLE_UKM

}  // namespace keyboard

#endif  // UI_KEYBOARD_KEYBOARD_UKM_RECORDER_H_
