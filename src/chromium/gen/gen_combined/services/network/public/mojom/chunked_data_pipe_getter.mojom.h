// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_H_

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
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-forward.h"
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




namespace network {
namespace mojom {

class ChunkedDataPipeGetterProxy;

template <typename ImplRefTraits>
class ChunkedDataPipeGetterStub;

class ChunkedDataPipeGetterRequestValidator;
class ChunkedDataPipeGetterResponseValidator;


class  ChunkedDataPipeGetter
    : public ChunkedDataPipeGetterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ChunkedDataPipeGetterInterfaceBase;
  using Proxy_ = ChunkedDataPipeGetterProxy;

  template <typename ImplRefTraits>
  using Stub_ = ChunkedDataPipeGetterStub<ImplRefTraits>;

  using RequestValidator_ = ChunkedDataPipeGetterRequestValidator;
  using ResponseValidator_ = ChunkedDataPipeGetterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSizeMinVersion = 0,
    kStartReadingMinVersion = 0,
  };
  virtual ~ChunkedDataPipeGetter() {}


  using GetSizeCallback = base::OnceCallback<void(int32_t, uint64_t)>;
  
  virtual void GetSize(GetSizeCallback callback) = 0;

  
  virtual void StartReading(mojo::ScopedDataPipeProducerHandle pipe) = 0;
};

class  ChunkedDataPipeGetterProxy
    : public ChunkedDataPipeGetter {
 public:
  using InterfaceType = ChunkedDataPipeGetter;

  explicit ChunkedDataPipeGetterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSize(GetSizeCallback callback) final;
  void StartReading(mojo::ScopedDataPipeProducerHandle pipe) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ChunkedDataPipeGetterStubDispatch {
 public:
  static bool Accept(ChunkedDataPipeGetter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ChunkedDataPipeGetter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ChunkedDataPipeGetter>>
class ChunkedDataPipeGetterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ChunkedDataPipeGetterStub() {}
  ~ChunkedDataPipeGetterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChunkedDataPipeGetterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ChunkedDataPipeGetterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ChunkedDataPipeGetterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ChunkedDataPipeGetterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CHUNKED_DATA_PIPE_GETTER_MOJOM_H_