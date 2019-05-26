// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/file/file_utilities.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FileUtilitiesHostInterceptorForTesting : public FileUtilitiesHost {
  virtual FileUtilitiesHost* GetForwardingInterface() = 0;
  void GetFileInfo(const base::FilePath& path, GetFileInfoCallback callback) override;
};
class PLATFORM_EXPORT FileUtilitiesHostAsyncWaiter {
 public:
  explicit FileUtilitiesHostAsyncWaiter(FileUtilitiesHost* proxy);
  ~FileUtilitiesHostAsyncWaiter();
  void GetFileInfo(
      const base::FilePath& path, base::Optional<base::File::Info>* out_result);

 private:
  FileUtilitiesHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileUtilitiesHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_TEST_UTILS_H_