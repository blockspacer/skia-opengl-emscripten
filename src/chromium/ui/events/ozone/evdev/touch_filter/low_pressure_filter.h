// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_LOW_PRESSURE_FILTER_H_
#define UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_LOW_PRESSURE_FILTER_H_

#include "base/macros.h"
#include "base/time/time.h"
#include "ui/events/event_utils.h"
#include "ui/events/ozone/evdev/touch_filter/touch_filter.h"

namespace ui {

class LowPressureFilter : public TouchFilter {
 public:
  LowPressureFilter();
  ~LowPressureFilter() override;

  // TouchFilter:
  void Filter(const std::vector<InProgressTouchEvdev>& touches,
              base::TimeTicks time,
              std::bitset<kNumTouchEvdevSlots>* slots_should_delay) override;

 private:
  std::bitset<kNumTouchEvdevSlots> slots_filtered_;

  DISALLOW_COPY_AND_ASSIGN(LowPressureFilter);
};

}  // namespace ui

#endif  // UI_EVENTS_OZONE_EVDEV_TOUCH_FILTER_LOW_PRESSURE_FILTER_H_
