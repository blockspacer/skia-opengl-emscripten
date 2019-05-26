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


#include "components/services/filesystem/public/interfaces/file.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "components/services/filesystem/public/interfaces/types.mojom-blink.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/file_error.mojom-blink.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif


namespace filesystem {
namespace mojom {
namespace blink {


void FileInterceptorForTesting::Close(CloseCallback callback) {
  GetForwardingInterface()->Close(std::move(callback));
}
void FileInterceptorForTesting::Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::blink::Whence whence, ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(num_bytes_to_read), std::move(offset), std::move(whence), std::move(callback));
}
void FileInterceptorForTesting::Write(const WTF::Vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::blink::Whence whence, WriteCallback callback) {
  GetForwardingInterface()->Write(std::move(bytes_to_write), std::move(offset), std::move(whence), std::move(callback));
}
void FileInterceptorForTesting::Tell(TellCallback callback) {
  GetForwardingInterface()->Tell(std::move(callback));
}
void FileInterceptorForTesting::Seek(int64_t offset, ::filesystem::mojom::blink::Whence whence, SeekCallback callback) {
  GetForwardingInterface()->Seek(std::move(offset), std::move(whence), std::move(callback));
}
void FileInterceptorForTesting::Stat(StatCallback callback) {
  GetForwardingInterface()->Stat(std::move(callback));
}
void FileInterceptorForTesting::Truncate(int64_t size, TruncateCallback callback) {
  GetForwardingInterface()->Truncate(std::move(size), std::move(callback));
}
void FileInterceptorForTesting::Touch(::filesystem::mojom::blink::TimespecOrNowPtr atime, ::filesystem::mojom::blink::TimespecOrNowPtr mtime, TouchCallback callback) {
  GetForwardingInterface()->Touch(std::move(atime), std::move(mtime), std::move(callback));
}
void FileInterceptorForTesting::Dup(FileRequest file, DupCallback callback) {
  GetForwardingInterface()->Dup(std::move(file), std::move(callback));
}
void FileInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void FileInterceptorForTesting::Lock(LockCallback callback) {
  GetForwardingInterface()->Lock(std::move(callback));
}
void FileInterceptorForTesting::Unlock(UnlockCallback callback) {
  GetForwardingInterface()->Unlock(std::move(callback));
}
void FileInterceptorForTesting::AsHandle(AsHandleCallback callback) {
  GetForwardingInterface()->AsHandle(std::move(callback));
}
FileAsyncWaiter::FileAsyncWaiter(
    File* proxy) : proxy_(proxy) {}

FileAsyncWaiter::~FileAsyncWaiter() = default;

void FileAsyncWaiter::Close(
    ::base::File::Error* out_err) {
  base::RunLoop loop;
  proxy_->Close(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_err
,
             ::base::File::Error err) {*out_err = std::move(err);
            loop->Quit();
          },
          &loop,
          out_err));
  loop.Run();
}
void FileAsyncWaiter::Read(
    uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, base::Optional<WTF::Vector<uint8_t>>* out_bytes_read) {
  base::RunLoop loop;
  proxy_->Read(std::move(num_bytes_to_read),std::move(offset),std::move(whence),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             base::Optional<WTF::Vector<uint8_t>>* out_bytes_read
,
             ::base::File::Error error,
             const base::Optional<WTF::Vector<uint8_t>>& bytes_read) {*out_error = std::move(error);*out_bytes_read = std::move(bytes_read);
            loop->Quit();
          },
          &loop,
          out_error,
          out_bytes_read));
  loop.Run();
}
void FileAsyncWaiter::Write(
    const WTF::Vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, uint32_t* out_num_bytes_written) {
  base::RunLoop loop;
  proxy_->Write(std::move(bytes_to_write),std::move(offset),std::move(whence),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             uint32_t* out_num_bytes_written
,
             ::base::File::Error error,
             uint32_t num_bytes_written) {*out_error = std::move(error);*out_num_bytes_written = std::move(num_bytes_written);
            loop->Quit();
          },
          &loop,
          out_error,
          out_num_bytes_written));
  loop.Run();
}
void FileAsyncWaiter::Tell(
    ::base::File::Error* out_error, int64_t* out_position) {
  base::RunLoop loop;
  proxy_->Tell(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             int64_t* out_position
,
             ::base::File::Error error,
             int64_t position) {*out_error = std::move(error);*out_position = std::move(position);
            loop->Quit();
          },
          &loop,
          out_error,
          out_position));
  loop.Run();
}
void FileAsyncWaiter::Seek(
    int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, int64_t* out_position) {
  base::RunLoop loop;
  proxy_->Seek(std::move(offset),std::move(whence),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             int64_t* out_position
,
             ::base::File::Error error,
             int64_t position) {*out_error = std::move(error);*out_position = std::move(position);
            loop->Quit();
          },
          &loop,
          out_error,
          out_position));
  loop.Run();
}
void FileAsyncWaiter::Stat(
    ::base::File::Error* out_error, ::filesystem::mojom::blink::FileInformationPtr* out_file_information) {
  base::RunLoop loop;
  proxy_->Stat(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::filesystem::mojom::blink::FileInformationPtr* out_file_information
,
             ::base::File::Error error,
             ::filesystem::mojom::blink::FileInformationPtr file_information) {*out_error = std::move(error);*out_file_information = std::move(file_information);
            loop->Quit();
          },
          &loop,
          out_error,
          out_file_information));
  loop.Run();
}
void FileAsyncWaiter::Truncate(
    int64_t size, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Truncate(std::move(size),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::Touch(
    ::filesystem::mojom::blink::TimespecOrNowPtr atime, ::filesystem::mojom::blink::TimespecOrNowPtr mtime, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Touch(std::move(atime),std::move(mtime),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::Dup(
    FileRequest file, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Dup(std::move(file),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::Flush(
    ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::Lock(
    ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Lock(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::Unlock(
    ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Unlock(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void FileAsyncWaiter::AsHandle(
    ::base::File::Error* out_error, base::File* out_file_handle) {
  base::RunLoop loop;
  proxy_->AsHandle(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             base::File* out_file_handle
,
             ::base::File::Error error,
             base::File file_handle) {*out_error = std::move(error);*out_file_handle = std::move(file_handle);
            loop->Quit();
          },
          &loop,
          out_error,
          out_file_handle));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif