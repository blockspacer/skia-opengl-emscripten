// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/data_pipe_getter.mojom-shared.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-blink-forward.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {

class DataPipeGetterProxy;

template <typename ImplRefTraits>
class DataPipeGetterStub;

class DataPipeGetterRequestValidator;
class DataPipeGetterResponseValidator;


class BLINK_PLATFORM_EXPORT DataPipeGetter
    : public DataPipeGetterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DataPipeGetterInterfaceBase;
  using Proxy_ = DataPipeGetterProxy;

  template <typename ImplRefTraits>
  using Stub_ = DataPipeGetterStub<ImplRefTraits>;

  using RequestValidator_ = DataPipeGetterRequestValidator;
  using ResponseValidator_ = DataPipeGetterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kReadMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~DataPipeGetter() {}


  using ReadCallback = base::OnceCallback<void(int32_t, uint64_t)>;
  
  virtual void Read(mojo::ScopedDataPipeProducerHandle pipe, ReadCallback callback) = 0;

  
  virtual void Clone(DataPipeGetterRequest request) = 0;
};

class BLINK_PLATFORM_EXPORT DataPipeGetterProxy
    : public DataPipeGetter {
 public:
  using InterfaceType = DataPipeGetter;

  explicit DataPipeGetterProxy(mojo::MessageReceiverWithResponder* receiver);
  void Read(mojo::ScopedDataPipeProducerHandle pipe, ReadCallback callback) final;
  void Clone(DataPipeGetterRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT DataPipeGetterStubDispatch {
 public:
  static bool Accept(DataPipeGetter* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DataPipeGetter* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DataPipeGetter>>
class DataPipeGetterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DataPipeGetterStub() {}
  ~DataPipeGetterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DataPipeGetterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DataPipeGetterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT DataPipeGetterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT DataPipeGetterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_BLINK_H_