// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_H_

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
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-forward.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-forward.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-forward.h"
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
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class NativeFileSystemFileHandleProxy;

template <typename ImplRefTraits>
class NativeFileSystemFileHandleStub;

class NativeFileSystemFileHandleRequestValidator;
class NativeFileSystemFileHandleResponseValidator;


class BLINK_COMMON_EXPORT NativeFileSystemFileHandle
    : public NativeFileSystemFileHandleInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = NativeFileSystemFileHandleInterfaceBase;
  using Proxy_ = NativeFileSystemFileHandleProxy;

  template <typename ImplRefTraits>
  using Stub_ = NativeFileSystemFileHandleStub<ImplRefTraits>;

  using RequestValidator_ = NativeFileSystemFileHandleRequestValidator;
  using ResponseValidator_ = NativeFileSystemFileHandleResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAsBlobMinVersion = 0,
    kRemoveMinVersion = 0,
    kWriteMinVersion = 0,
    kWriteStreamMinVersion = 0,
    kTruncateMinVersion = 0,
    kTransferMinVersion = 0,
  };
  virtual ~NativeFileSystemFileHandle() {}


  using AsBlobCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, ::blink::mojom::SerializedBlobPtr)>;
  
  virtual void AsBlob(AsBlobCallback callback) = 0;


  using RemoveCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr)>;
  
  virtual void Remove(RemoveCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, uint64_t)>;
  
  virtual void Write(uint64_t offset, ::blink::mojom::BlobPtr data, WriteCallback callback) = 0;


  using WriteStreamCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr, uint64_t)>;
  
  virtual void WriteStream(uint64_t offset, mojo::ScopedDataPipeConsumerHandle stream, WriteStreamCallback callback) = 0;


  using TruncateCallback = base::OnceCallback<void(::blink::mojom::NativeFileSystemErrorPtr)>;
  
  virtual void Truncate(uint64_t length, TruncateCallback callback) = 0;

  
  virtual void Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) = 0;
};

class BLINK_COMMON_EXPORT NativeFileSystemFileHandleProxy
    : public NativeFileSystemFileHandle {
 public:
  using InterfaceType = NativeFileSystemFileHandle;

  explicit NativeFileSystemFileHandleProxy(mojo::MessageReceiverWithResponder* receiver);
  void AsBlob(AsBlobCallback callback) final;
  void Remove(RemoveCallback callback) final;
  void Write(uint64_t offset, ::blink::mojom::BlobPtr data, WriteCallback callback) final;
  void WriteStream(uint64_t offset, mojo::ScopedDataPipeConsumerHandle stream, WriteStreamCallback callback) final;
  void Truncate(uint64_t length, TruncateCallback callback) final;
  void Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT NativeFileSystemFileHandleStubDispatch {
 public:
  static bool Accept(NativeFileSystemFileHandle* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      NativeFileSystemFileHandle* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<NativeFileSystemFileHandle>>
class NativeFileSystemFileHandleStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  NativeFileSystemFileHandleStub() {}
  ~NativeFileSystemFileHandleStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemFileHandleStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return NativeFileSystemFileHandleStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT NativeFileSystemFileHandleRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT NativeFileSystemFileHandleResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_H_