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


#include "media/mojo/interfaces/cdm_storage.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file.mojom.h"


#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif


namespace media {
namespace mojom {


void CdmStorageInterceptorForTesting::Open(const std::string& file_name, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(file_name), std::move(callback));
}
CdmStorageAsyncWaiter::CdmStorageAsyncWaiter(
    CdmStorage* proxy) : proxy_(proxy) {}

CdmStorageAsyncWaiter::~CdmStorageAsyncWaiter() = default;

void CdmStorageAsyncWaiter::Open(
    const std::string& file_name, CdmStorage::Status* out_status, base::File* out_file_for_reading, CdmFileAssociatedPtrInfo* out_cdm_file) {
  base::RunLoop loop;
  proxy_->Open(std::move(file_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             CdmStorage::Status* out_status
,
             base::File* out_file_for_reading
,
             CdmFileAssociatedPtrInfo* out_cdm_file
,
             CdmStorage::Status status,
             base::File file_for_reading,
             CdmFileAssociatedPtrInfo cdm_file) {*out_status = std::move(status);*out_file_for_reading = std::move(file_for_reading);*out_cdm_file = std::move(cdm_file);
            loop->Quit();
          },
          &loop,
          out_status,
          out_file_for_reading,
          out_cdm_file));
  loop.Run();
}



void CdmFileInterceptorForTesting::OpenFileForWriting(OpenFileForWritingCallback callback) {
  GetForwardingInterface()->OpenFileForWriting(std::move(callback));
}
void CdmFileInterceptorForTesting::CommitWrite(CommitWriteCallback callback) {
  GetForwardingInterface()->CommitWrite(std::move(callback));
}
CdmFileAsyncWaiter::CdmFileAsyncWaiter(
    CdmFile* proxy) : proxy_(proxy) {}

CdmFileAsyncWaiter::~CdmFileAsyncWaiter() = default;

void CdmFileAsyncWaiter::OpenFileForWriting(
    base::File* out_file_for_writing) {
  base::RunLoop loop;
  proxy_->OpenFileForWriting(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_file_for_writing
,
             base::File file_for_writing) {*out_file_for_writing = std::move(file_for_writing);
            loop->Quit();
          },
          &loop,
          out_file_for_writing));
  loop.Run();
}
void CdmFileAsyncWaiter::CommitWrite(
    base::File* out_updated_file_for_reading) {
  base::RunLoop loop;
  proxy_->CommitWrite(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_updated_file_for_reading
,
             base::File updated_file_for_reading) {*out_updated_file_for_reading = std::move(updated_file_for_reading);
            loop->Quit();
          },
          &loop,
          out_updated_file_for_reading));
  loop.Run();
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif