// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/file/file_utilities.mojom-shared.h"
#include "third_party/blink/public/mojom/file/file_utilities.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_info.mojom-blink-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class FileUtilitiesHostProxy;

template <typename ImplRefTraits>
class FileUtilitiesHostStub;

class FileUtilitiesHostRequestValidator;
class FileUtilitiesHostResponseValidator;


class PLATFORM_EXPORT FileUtilitiesHost
    : public FileUtilitiesHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = FileUtilitiesHostInterfaceBase;
  using Proxy_ = FileUtilitiesHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = FileUtilitiesHostStub<ImplRefTraits>;

  using RequestValidator_ = FileUtilitiesHostRequestValidator;
  using ResponseValidator_ = FileUtilitiesHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetFileInfoMinVersion = 0,
  };
  virtual ~FileUtilitiesHost() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetFileInfo(const base::FilePath& path, base::Optional<base::File::Info>* out_result);

  using GetFileInfoCallback = base::OnceCallback<void(const base::Optional<base::File::Info>&)>;
  
  virtual void GetFileInfo(const base::FilePath& path, GetFileInfoCallback callback) = 0;
};

class PLATFORM_EXPORT FileUtilitiesHostProxy
    : public FileUtilitiesHost {
 public:
  using InterfaceType = FileUtilitiesHost;

  explicit FileUtilitiesHostProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetFileInfo(const base::FilePath& path, base::Optional<base::File::Info>* out_result) final;
  void GetFileInfo(const base::FilePath& path, GetFileInfoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT FileUtilitiesHostStubDispatch {
 public:
  static bool Accept(FileUtilitiesHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FileUtilitiesHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FileUtilitiesHost>>
class FileUtilitiesHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FileUtilitiesHostStub() {}
  ~FileUtilitiesHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileUtilitiesHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FileUtilitiesHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT FileUtilitiesHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT FileUtilitiesHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILE_FILE_UTILITIES_MOJOM_BLINK_H_