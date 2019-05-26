// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT FileChooserInterceptorForTesting : public FileChooser {
  virtual FileChooser* GetForwardingInterface() = 0;
  void OpenFileChooser(FileChooserParamsPtr params, OpenFileChooserCallback callback) override;
  void EnumerateChosenDirectory(const base::FilePath& directory_path, EnumerateChosenDirectoryCallback callback) override;
};
class PLATFORM_EXPORT FileChooserAsyncWaiter {
 public:
  explicit FileChooserAsyncWaiter(FileChooser* proxy);
  ~FileChooserAsyncWaiter();
  void OpenFileChooser(
      FileChooserParamsPtr params, FileChooserResultPtr* out_result);
  void EnumerateChosenDirectory(
      const base::FilePath& directory_path, FileChooserResultPtr* out_result);

 private:
  FileChooser* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileChooserAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_BLINK_TEST_UTILS_H_