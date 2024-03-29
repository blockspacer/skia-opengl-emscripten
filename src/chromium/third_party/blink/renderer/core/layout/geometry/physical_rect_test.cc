// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/layout/geometry/physical_rect.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace blink {

namespace {

struct PhysicalOffsetRectUniteTestData {
  const char* test_case;
  PhysicalRect a;
  PhysicalRect b;
  PhysicalRect expected;
} physical_offset_rect_unite_test_data[] = {
    {"all_empty", {}, {}, {}},
    {"a empty",
     {},
     {{LayoutUnit(1), LayoutUnit(2)}, {LayoutUnit(3), LayoutUnit(4)}},
     {{LayoutUnit(1), LayoutUnit(2)}, {LayoutUnit(3), LayoutUnit(4)}}},
    {"b empty",
     {{LayoutUnit(1), LayoutUnit(2)}, {LayoutUnit(3), LayoutUnit(4)}},
     {},
     {{LayoutUnit(1), LayoutUnit(2)}, {LayoutUnit(3), LayoutUnit(4)}}},
    {"a larger",
     {{LayoutUnit(100), LayoutUnit(50)}, {LayoutUnit(300), LayoutUnit(200)}},
     {{LayoutUnit(200), LayoutUnit(50)}, {LayoutUnit(200), LayoutUnit(200)}},
     {{LayoutUnit(100), LayoutUnit(50)}, {LayoutUnit(300), LayoutUnit(200)}}},
    {"b larger",
     {{LayoutUnit(200), LayoutUnit(50)}, {LayoutUnit(200), LayoutUnit(200)}},
     {{LayoutUnit(100), LayoutUnit(50)}, {LayoutUnit(300), LayoutUnit(200)}},
     {{LayoutUnit(100), LayoutUnit(50)}, {LayoutUnit(300), LayoutUnit(200)}}},
};

std::ostream& operator<<(std::ostream& os,
                         const PhysicalOffsetRectUniteTestData& data) {
  return os << "Unite " << data.test_case;
}

class PhysicalRectUniteTest
    : public testing::Test,
      public testing::WithParamInterface<PhysicalOffsetRectUniteTestData> {};

INSTANTIATE_TEST_SUITE_P(
    GeometryUnitsTest,
    PhysicalRectUniteTest,
    testing::ValuesIn(physical_offset_rect_unite_test_data));

TEST_P(PhysicalRectUniteTest, Data) {
  const auto& data = GetParam();
  PhysicalRect actual = data.a;
  actual.Unite(data.b);
  EXPECT_EQ(data.expected, actual);
}

}  // namespace

}  // namespace blink
