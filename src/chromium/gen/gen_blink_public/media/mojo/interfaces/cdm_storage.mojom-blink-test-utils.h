// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/cdm_storage.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CdmStorageInterceptorForTesting : public CdmStorage {
  virtual CdmStorage* GetForwardingInterface() = 0;
  void Open(const WTF::String& file_name, OpenCallback callback) override;
};
class BLINK_PLATFORM_EXPORT CdmStorageAsyncWaiter {
 public:
  explicit CdmStorageAsyncWaiter(CdmStorage* proxy);
  ~CdmStorageAsyncWaiter();
  void Open(
      const WTF::String& file_name, CdmStorage::Status* out_status, base::File* out_file_for_reading, CdmFileAssociatedPtrInfo* out_cdm_file);

 private:
  CdmStorage* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmStorageAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT CdmFileInterceptorForTesting : public CdmFile {
  virtual CdmFile* GetForwardingInterface() = 0;
  void OpenFileForWriting(OpenFileForWritingCallback callback) override;
  void CommitWrite(CommitWriteCallback callback) override;
};
class BLINK_PLATFORM_EXPORT CdmFileAsyncWaiter {
 public:
  explicit CdmFileAsyncWaiter(CdmFile* proxy);
  ~CdmFileAsyncWaiter();
  void OpenFileForWriting(
      base::File* out_file_for_writing);
  void CommitWrite(
      base::File* out_updated_file_for_reading);

 private:
  CdmFile* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(CdmFileAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_