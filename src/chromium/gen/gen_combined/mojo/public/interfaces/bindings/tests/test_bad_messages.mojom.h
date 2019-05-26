// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_bad_messages.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_bad_messages.mojom-forward.h"
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




namespace mojo {
namespace test {

class TestBadMessagesProxy;

template <typename ImplRefTraits>
class TestBadMessagesStub;

class TestBadMessagesRequestValidator;
class TestBadMessagesResponseValidator;


class  TestBadMessages
    : public TestBadMessagesInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = TestBadMessagesInterfaceBase;
  using Proxy_ = TestBadMessagesProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestBadMessagesStub<ImplRefTraits>;

  using RequestValidator_ = TestBadMessagesRequestValidator;
  using ResponseValidator_ = TestBadMessagesResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRejectEventuallyMinVersion = 0,
    kRequestResponseMinVersion = 0,
    kRejectSyncMinVersion = 0,
    kRequestResponseSyncMinVersion = 0,
  };
  virtual ~TestBadMessages() {}


  using RejectEventuallyCallback = base::OnceCallback<void()>;
  
  virtual void RejectEventually(RejectEventuallyCallback callback) = 0;


  using RequestResponseCallback = base::OnceCallback<void()>;
  
  virtual void RequestResponse(RequestResponseCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool RejectSync();

  using RejectSyncCallback = base::OnceCallback<void()>;
  
  virtual void RejectSync(RejectSyncCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool RequestResponseSync();

  using RequestResponseSyncCallback = base::OnceCallback<void()>;
  
  virtual void RequestResponseSync(RequestResponseSyncCallback callback) = 0;
};

class  TestBadMessagesProxy
    : public TestBadMessages {
 public:
  using InterfaceType = TestBadMessages;

  explicit TestBadMessagesProxy(mojo::MessageReceiverWithResponder* receiver);
  void RejectEventually(RejectEventuallyCallback callback) final;
  void RequestResponse(RequestResponseCallback callback) final;
  bool RejectSync() final;
  void RejectSync(RejectSyncCallback callback) final;
  bool RequestResponseSync() final;
  void RequestResponseSync(RequestResponseSyncCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TestBadMessagesStubDispatch {
 public:
  static bool Accept(TestBadMessages* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestBadMessages* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestBadMessages>>
class TestBadMessagesStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestBadMessagesStub() {}
  ~TestBadMessagesStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestBadMessagesStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestBadMessagesStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestBadMessagesRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestBadMessagesResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace test
}  // namespace mojo

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_BAD_MESSAGES_MOJOM_H_