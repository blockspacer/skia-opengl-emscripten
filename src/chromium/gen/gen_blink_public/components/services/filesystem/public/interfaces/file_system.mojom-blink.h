// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_H_

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
#include "components/services/filesystem/public/interfaces/file_system.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/file_system.mojom-blink-forward.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_error.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
namespace blink {

class FileSystemProxy;

template <typename ImplRefTraits>
class FileSystemStub;

class FileSystemRequestValidator;
class FileSystemResponseValidator;


class  FileSystem
    : public FileSystemInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = FileSystemInterfaceBase;
  using Proxy_ = FileSystemProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemRequestValidator;
  using ResponseValidator_ = FileSystemResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenTempDirectoryMinVersion = 0,
    kOpenPersistentFileSystemMinVersion = 0,
  };
  virtual ~FileSystem() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error);

  using OpenTempDirectoryCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, OpenTempDirectoryCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error);

  using OpenPersistentFileSystemCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, OpenPersistentFileSystemCallback callback) = 0;
};

class  FileSystemProxy
    : public FileSystem {
 public:
  using InterfaceType = FileSystem;

  explicit FileSystemProxy(mojo::MessageReceiverWithResponder* receiver);
  bool OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error) final;
  void OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, OpenTempDirectoryCallback callback) final;
  bool OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error) final;
  void OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, OpenPersistentFileSystemCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FileSystemStubDispatch {
 public:
  static bool Accept(FileSystem* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileSystem* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileSystem>>
class FileSystemStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileSystemStub() {}
  ~FileSystemStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileSystemStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FileSystemRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FileSystemResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_H_