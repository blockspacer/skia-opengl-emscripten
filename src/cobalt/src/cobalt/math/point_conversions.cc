// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cobalt/math/point_conversions.h"

#include "cobalt/math/safe_integer_conversions.h"

namespace cobalt {
namespace math {

Point ToFlooredPoint(const PointF& point) {
  int x = ToFlooredInt(point.x());
  int y = ToFlooredInt(point.y());
  return Point(x, y);
}

Point ToCeiledPoint(const PointF& point) {
  int x = ToCeiledInt(point.x());
  int y = ToCeiledInt(point.y());
  return Point(x, y);
}

Point ToRoundedPoint(const PointF& point) {
  int x = ToRoundedInt(point.x());
  int y = ToRoundedInt(point.y());
  return Point(x, y);
}

}  // namespace math
}  // namespace cobalt
