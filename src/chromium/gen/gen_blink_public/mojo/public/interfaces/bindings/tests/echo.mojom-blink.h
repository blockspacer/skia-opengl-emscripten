// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/echo.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/echo.mojom-blink-forward.h"
#include "mojo/public/interfaces/bindings/tests/echo_import/echo_import.mojom-blink-forward.h"

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




namespace test {
namespace echo {
namespace mojom {
namespace blink {

class EchoProxy;

template <typename ImplRefTraits>
class EchoStub;

class EchoRequestValidator;
class EchoResponseValidator;


class  Echo
    : public EchoInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EchoInterfaceBase;
  using Proxy_ = EchoProxy;

  template <typename ImplRefTraits>
  using Stub_ = EchoStub<ImplRefTraits>;

  using RequestValidator_ = EchoRequestValidator;
  using ResponseValidator_ = EchoResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoPointMinVersion = 0,
  };
  virtual ~Echo() {}


  using EchoPointCallback = base::OnceCallback<void(::test::echo_import::mojom::blink::PointPtr)>;
  
  virtual void EchoPoint(::test::echo_import::mojom::blink::PointPtr point, EchoPointCallback callback) = 0;
};

class  EchoProxy
    : public Echo {
 public:
  using InterfaceType = Echo;

  explicit EchoProxy(mojo::MessageReceiverWithResponder* receiver);
  void EchoPoint(::test::echo_import::mojom::blink::PointPtr point, EchoPointCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  EchoStubDispatch {
 public:
  static bool Accept(Echo* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Echo* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Echo>>
class EchoStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EchoStub() {}
  ~EchoStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EchoStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EchoStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  EchoRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  EchoResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace echo
}  // namespace test

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_ECHO_MOJOM_BLINK_H_