// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_H_

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
#include "services/file/public/mojom/file_system.mojom-shared.h"
#include "services/file/public/mojom/file_system.mojom-forward.h"
#include "components/services/filesystem/public/interfaces/directory.mojom-forward.h"
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




namespace file {
namespace mojom {

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
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FileSystemInterfaceBase;
  using Proxy_ = FileSystemProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileSystemStub<ImplRefTraits>;

  using RequestValidator_ = FileSystemRequestValidator;
  using ResponseValidator_ = FileSystemResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDirectoryMinVersion = 0,
    kGetSubDirectoryMinVersion = 0,
  };
  virtual ~FileSystem() {}


  using GetDirectoryCallback = base::OnceCallback<void()>;
  
  virtual void GetDirectory(::filesystem::mojom::DirectoryRequest dir, GetDirectoryCallback callback) = 0;


  using GetSubDirectoryCallback = base::OnceCallback<void(::base::File::Error)>;
  
  virtual void GetSubDirectory(const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, GetSubDirectoryCallback callback) = 0;
};

class  FileSystemProxy
    : public FileSystem {
 public:
  using InterfaceType = FileSystem;

  explicit FileSystemProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDirectory(::filesystem::mojom::DirectoryRequest dir, GetDirectoryCallback callback) final;
  void GetSubDirectory(const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, GetSubDirectoryCallback callback) final;

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





}  // namespace mojom
}  // namespace file

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_H_