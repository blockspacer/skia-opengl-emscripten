// Copyright 2015 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "starboard/common/string.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace starboard {
namespace nplb {
namespace {

const char kSource[] = "01234567890123456789";

void TestCopy(const char* source, bool is_short) {
  const int kDestinationOffset = 16;
  int source_length = static_cast<int>(SbStringGetLength(source));
  int destination_size = source_length + kDestinationOffset * 2;
  int destination_limit = source_length + 1;
  if (is_short) {
    ASSERT_LT(1, destination_limit);
    destination_limit -= 1;
  }
  ASSERT_GT(1024, destination_size);
  char destination[1024] = {0};
  char* dest = destination + kDestinationOffset;
  int result = SbStringCopy(dest, source, destination_limit);

  EXPECT_EQ(source_length, result);

  // Expected to be one less than the limit due to the null terminator.
  int expected_length = destination_limit - 1;
  EXPECT_EQ(expected_length, SbStringGetLength(dest));

  // Validate the memory before the destination isn't touched.
  for (int i = 0; i < kDestinationOffset; ++i) {
    EXPECT_EQ(0, destination[i]);
  }

  // Validate the data was copied.
  for (int i = 0; i < expected_length; ++i) {
    EXPECT_EQ(source[i], dest[i]);
  }

  // Validate the memory after the copy isn't touched.
  for (int i = 0; i < kDestinationOffset; ++i) {
    EXPECT_EQ(0, dest[expected_length + i]);
  }
}

TEST(SbStringCopyTest, SunnyDay) {
  TestCopy(kSource, false);
}

TEST(SbStringCopyTest, SunnyDayEmpty) {
  TestCopy("", false);
}

TEST(SbStringCopyTest, SunnyDayShort) {
  TestCopy(kSource, true);
}

}  // namespace
}  // namespace nplb
}  // namespace starboard
