// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/services/filesystem/public/interfaces/file.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/file.mojom-forward.h"
#include "components/services/filesystem/public/interfaces/types.mojom-forward.h"
#include "mojo/public/mojom/base/file.mojom-forward.h"
#include "mojo/public/mojom/base/file_error.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace filesystem {
namespace mojom {

class FileProxy;

template <typename ImplRefTraits>
class FileStub;

class FileRequestValidator;
class FileResponseValidator;


class  File
    : public FileInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = FileInterfaceBase;
  using Proxy_ = FileProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileStub<ImplRefTraits>;

  using RequestValidator_ = FileRequestValidator;
  using ResponseValidator_ = FileResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCloseMinVersion = 0,
    kReadMinVersion = 0,
    kWriteMinVersion = 0,
    kTellMinVersion = 0,
    kSeekMinVersion = 0,
    kStatMinVersion = 0,
    kTruncateMinVersion = 0,
    kTouchMinVersion = 0,
    kDupMinVersion = 0,
    kFlushMinVersion = 0,
    kLockMinVersion = 0,
    kUnlockMinVersion = 0,
    kAsHandleMinVersion = 0,
  };
  virtual ~File() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Close(::base::File::Error* out_err);

  using CloseCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Close(CloseCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, base::Optional<std::vector<uint8_t>>* out_bytes_read);

  using ReadCallback = base::OnceCallback<void(::base::File::Error, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ReadCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Write(const std::vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, uint32_t* out_num_bytes_written);

  using WriteCallback = base::OnceCallback<void(::base::File::Error, uint32_t)>;
  
  virtual void Write(const std::vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, WriteCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Tell(::base::File::Error* out_error, int64_t* out_position);

  using TellCallback = base::OnceCallback<void(::base::File::Error, int64_t)>;
  
  virtual void Tell(TellCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, int64_t* out_position);

  using SeekCallback = base::OnceCallback<void(::base::File::Error, int64_t)>;
  
  virtual void Seek(int64_t offset, ::filesystem::mojom::Whence whence, SeekCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Stat(::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information);

  using StatCallback = base::OnceCallback<void(::base::File::Error, ::filesystem::mojom::FileInformationPtr)>;
  
  virtual void Stat(StatCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Truncate(int64_t size, ::base::File::Error* out_error);

  using TruncateCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Truncate(int64_t size, TruncateCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::base::File::Error* out_error);

  using TouchCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, TouchCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Dup(FileRequest file, ::base::File::Error* out_error);

  using DupCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Dup(FileRequest file, DupCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Flush(::base::File::Error* out_error);

  using FlushCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Flush(FlushCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Lock(::base::File::Error* out_error);

  using LockCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Lock(LockCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Unlock(::base::File::Error* out_error);

  using UnlockCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void Unlock(UnlockCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool AsHandle(::base::File::Error* out_error, base::File* out_file_handle);

  using AsHandleCallback = base::OnceCallback<void(::base::File::Error, base::File)>;
  
  virtual void AsHandle(AsHandleCallback callback) = 0;
};

class  FileProxy
    : public File {
 public:
  using InterfaceType = File;

  explicit FileProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Close(::base::File::Error* out_err) final;
  void Close(CloseCallback callback) final;
  bool Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, base::Optional<std::vector<uint8_t>>* out_bytes_read) final;
  void Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::Whence whence, ReadCallback callback) final;
  bool Write(const std::vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, uint32_t* out_num_bytes_written) final;
  void Write(const std::vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::Whence whence, WriteCallback callback) final;
  bool Tell(::base::File::Error* out_error, int64_t* out_position) final;
  void Tell(TellCallback callback) final;
  bool Seek(int64_t offset, ::filesystem::mojom::Whence whence, ::base::File::Error* out_error, int64_t* out_position) final;
  void Seek(int64_t offset, ::filesystem::mojom::Whence whence, SeekCallback callback) final;
  bool Stat(::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information) final;
  void Stat(StatCallback callback) final;
  bool Truncate(int64_t size, ::base::File::Error* out_error) final;
  void Truncate(int64_t size, TruncateCallback callback) final;
  bool Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, ::base::File::Error* out_error) final;
  void Touch(::filesystem::mojom::TimespecOrNowPtr atime, ::filesystem::mojom::TimespecOrNowPtr mtime, TouchCallback callback) final;
  bool Dup(FileRequest file, ::base::File::Error* out_error) final;
  void Dup(FileRequest file, DupCallback callback) final;
  bool Flush(::base::File::Error* out_error) final;
  void Flush(FlushCallback callback) final;
  bool Lock(::base::File::Error* out_error) final;
  void Lock(LockCallback callback) final;
  bool Unlock(::base::File::Error* out_error) final;
  void Unlock(UnlockCallback callback) final;
  bool AsHandle(::base::File::Error* out_error, base::File* out_file_handle) final;
  void AsHandle(AsHandleCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FileStubDispatch {
 public:
  static bool Accept(File* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      File* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<File>>
class FileStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileStub() {}
  ~FileStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FileRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FileResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace filesystem

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_H_