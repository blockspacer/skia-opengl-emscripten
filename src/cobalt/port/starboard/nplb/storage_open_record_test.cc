// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

// Sunny Day cases tested in the read/write tests.

#include "starboard/common/storage.h"
#include "starboard/nplb/file_helpers.h"
#include "starboard/user.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace starboard {
namespace nplb {
namespace {

TEST(SbStorageOpenRecordTest, RainyDayInvalidUserValidName) {
  EXPECT_FALSE(SbStorageIsValidRecord(SbStorageOpenRecord(
      kSbUserInvalid, ScopedRandomFile::MakeRandomFilename().c_str())));
}

TEST(SbStorageOpenRecordTest, RainyDayInvalidUserNullName) {
  EXPECT_FALSE(
      SbStorageIsValidRecord(SbStorageOpenRecord(kSbUserInvalid, NULL)));
}

}  // namespace
}  // namespace nplb
}  // namespace starboard
