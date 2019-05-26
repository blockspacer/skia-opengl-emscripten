// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink-forward.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-blink-forward.h"
#include "services/network/public/mojom/http_request_headers.mojom-blink-forward.h"

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

class BlobReaderClientProxy;

template <typename ImplRefTraits>
class BlobReaderClientStub;

class BlobReaderClientRequestValidator;


class PLATFORM_EXPORT BlobReaderClient
    : public BlobReaderClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BlobReaderClientInterfaceBase;
  using Proxy_ = BlobReaderClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobReaderClientStub<ImplRefTraits>;

  using RequestValidator_ = BlobReaderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCalculatedSizeMinVersion = 0,
    kOnCompleteMinVersion = 0,
  };
  virtual ~BlobReaderClient() {}

  
  virtual void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) = 0;

  
  virtual void OnComplete(int32_t status, uint64_t data_length) = 0;
};

class BlobProxy;

template <typename ImplRefTraits>
class BlobStub;

class BlobRequestValidator;
class BlobResponseValidator;


class PLATFORM_EXPORT Blob
    : public BlobInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BlobInterfaceBase;
  using Proxy_ = BlobProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobStub<ImplRefTraits>;

  using RequestValidator_ = BlobRequestValidator;
  using ResponseValidator_ = BlobResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCloneMinVersion = 0,
    kAsDataPipeGetterMinVersion = 0,
    kReadAllMinVersion = 0,
    kReadRangeMinVersion = 0,
    kReadSideDataMinVersion = 0,
    kGetInternalUUIDMinVersion = 0,
  };
  virtual ~Blob() {}

  
  virtual void Clone(BlobRequest blob) = 0;

  
  virtual void AsDataPipeGetter(::network::mojom::blink::DataPipeGetterRequest data_pipe_getter) = 0;

  
  virtual void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) = 0;

  
  virtual void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) = 0;


  using ReadSideDataCallback = base::OnceCallback<void(base::Optional<mojo_base::BigBuffer>)>;
  
  virtual void ReadSideData(ReadSideDataCallback callback) = 0;


  using GetInternalUUIDCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void GetInternalUUID(GetInternalUUIDCallback callback) = 0;
};

class PLATFORM_EXPORT BlobReaderClientProxy
    : public BlobReaderClient {
 public:
  using InterfaceType = BlobReaderClient;

  explicit BlobReaderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCalculatedSize(uint64_t total_size, uint64_t expected_content_size) final;
  void OnComplete(int32_t status, uint64_t data_length) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT BlobProxy
    : public Blob {
 public:
  using InterfaceType = Blob;

  explicit BlobProxy(mojo::MessageReceiverWithResponder* receiver);
  void Clone(BlobRequest blob) final;
  void AsDataPipeGetter(::network::mojom::blink::DataPipeGetterRequest data_pipe_getter) final;
  void ReadAll(mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) final;
  void ReadRange(uint64_t offset, uint64_t length, mojo::ScopedDataPipeProducerHandle pipe, BlobReaderClientPtr client) final;
  void ReadSideData(ReadSideDataCallback callback) final;
  void GetInternalUUID(GetInternalUUIDCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT BlobReaderClientStubDispatch {
 public:
  static bool Accept(BlobReaderClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BlobReaderClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BlobReaderClient>>
class BlobReaderClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobReaderClientStub() {}
  ~BlobReaderClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobReaderClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobReaderClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BlobStubDispatch {
 public:
  static bool Accept(Blob* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Blob* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Blob>>
class BlobStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobStub() {}
  ~BlobStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BlobReaderClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BlobRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BlobResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_BLINK_H_