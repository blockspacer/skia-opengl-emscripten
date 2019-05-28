// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/test_sync_methods.mojom-blink-forward.h"

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




namespace mojo {
namespace test {
namespace blink {

class TestSyncCodeGenerationProxy;

template <typename ImplRefTraits>
class TestSyncCodeGenerationStub;

class TestSyncCodeGenerationRequestValidator;
class TestSyncCodeGenerationResponseValidator;


class  TestSyncCodeGeneration
    : public TestSyncCodeGenerationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = TestSyncCodeGenerationInterfaceBase;
  using Proxy_ = TestSyncCodeGenerationProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestSyncCodeGenerationStub<ImplRefTraits>;

  using RequestValidator_ = TestSyncCodeGenerationRequestValidator;
  using ResponseValidator_ = TestSyncCodeGenerationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kNoInputMinVersion = 0,
    kNoOutputMinVersion = 0,
    kNoInOutMinVersion = 0,
    kHaveInOutMinVersion = 0,
  };
  virtual ~TestSyncCodeGeneration() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool NoInput(int32_t* out_result);

  using NoInputCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void NoInput(NoInputCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool NoOutput(int32_t value);

  using NoOutputCallback = base::OnceCallback<void()>;
  
  virtual void NoOutput(int32_t value, NoOutputCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool NoInOut();

  using NoInOutCallback = base::OnceCallback<void()>;
  
  virtual void NoInOut(NoInOutCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool HaveInOut(int32_t value1, int32_t value2, int32_t* out_result1, int32_t* out_result2);

  using HaveInOutCallback = base::OnceCallback<void(int32_t, int32_t)>;
  
  virtual void HaveInOut(int32_t value1, int32_t value2, HaveInOutCallback callback) = 0;
};

class TestSyncProxy;

template <typename ImplRefTraits>
class TestSyncStub;

class TestSyncRequestValidator;
class TestSyncResponseValidator;


class  TestSync
    : public TestSyncInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = TestSyncInterfaceBase;
  using Proxy_ = TestSyncProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestSyncStub<ImplRefTraits>;

  using RequestValidator_ = TestSyncRequestValidator;
  using ResponseValidator_ = TestSyncResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPingMinVersion = 0,
    kEchoMinVersion = 0,
    kAsyncEchoMinVersion = 0,
  };
  virtual ~TestSync() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Ping();

  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Echo(int32_t value, int32_t* out_result);

  using EchoCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Echo(int32_t value, EchoCallback callback) = 0;


  using AsyncEchoCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void AsyncEcho(int32_t value, AsyncEchoCallback callback) = 0;
};

class TestSyncMasterProxy;

template <typename ImplRefTraits>
class TestSyncMasterStub;

class TestSyncMasterRequestValidator;
class TestSyncMasterResponseValidator;


class  TestSyncMaster
    : public TestSyncMasterInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = TestSyncMasterInterfaceBase;
  using Proxy_ = TestSyncMasterProxy;

  template <typename ImplRefTraits>
  using Stub_ = TestSyncMasterStub<ImplRefTraits>;

  using RequestValidator_ = TestSyncMasterRequestValidator;
  using ResponseValidator_ = TestSyncMasterResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPingMinVersion = 0,
    kEchoMinVersion = 0,
    kAsyncEchoMinVersion = 0,
    kSendRemoteMinVersion = 0,
    kSendReceiverMinVersion = 0,
  };
  virtual ~TestSyncMaster() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Ping();

  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Echo(int32_t value, int32_t* out_result);

  using EchoCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void Echo(int32_t value, EchoCallback callback) = 0;


  using AsyncEchoCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void AsyncEcho(int32_t value, AsyncEchoCallback callback) = 0;

  
  virtual void SendRemote(mojo::PendingAssociatedRemote<TestSync> remote) = 0;

  
  virtual void SendReceiver(mojo::PendingAssociatedReceiver<TestSync> receiver) = 0;
};

class  TestSyncCodeGenerationProxy
    : public TestSyncCodeGeneration {
 public:
  using InterfaceType = TestSyncCodeGeneration;

  explicit TestSyncCodeGenerationProxy(mojo::MessageReceiverWithResponder* receiver);
  bool NoInput(int32_t* out_result) final;
  void NoInput(NoInputCallback callback) final;
  bool NoOutput(int32_t value) final;
  void NoOutput(int32_t value, NoOutputCallback callback) final;
  bool NoInOut() final;
  void NoInOut(NoInOutCallback callback) final;
  bool HaveInOut(int32_t value1, int32_t value2, int32_t* out_result1, int32_t* out_result2) final;
  void HaveInOut(int32_t value1, int32_t value2, HaveInOutCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TestSyncProxy
    : public TestSync {
 public:
  using InterfaceType = TestSync;

  explicit TestSyncProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Ping() final;
  void Ping(PingCallback callback) final;
  bool Echo(int32_t value, int32_t* out_result) final;
  void Echo(int32_t value, EchoCallback callback) final;
  void AsyncEcho(int32_t value, AsyncEchoCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  TestSyncMasterProxy
    : public TestSyncMaster {
 public:
  using InterfaceType = TestSyncMaster;

  explicit TestSyncMasterProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Ping() final;
  void Ping(PingCallback callback) final;
  bool Echo(int32_t value, int32_t* out_result) final;
  void Echo(int32_t value, EchoCallback callback) final;
  void AsyncEcho(int32_t value, AsyncEchoCallback callback) final;
  void SendRemote(mojo::PendingAssociatedRemote<TestSync> remote) final;
  void SendReceiver(mojo::PendingAssociatedReceiver<TestSync> receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TestSyncCodeGenerationStubDispatch {
 public:
  static bool Accept(TestSyncCodeGeneration* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestSyncCodeGeneration* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestSyncCodeGeneration>>
class TestSyncCodeGenerationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestSyncCodeGenerationStub() {}
  ~TestSyncCodeGenerationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncCodeGenerationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncCodeGenerationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestSyncStubDispatch {
 public:
  static bool Accept(TestSync* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestSync* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestSync>>
class TestSyncStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestSyncStub() {}
  ~TestSyncStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestSyncMasterStubDispatch {
 public:
  static bool Accept(TestSyncMaster* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TestSyncMaster* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TestSyncMaster>>
class TestSyncMasterStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TestSyncMasterStub() {}
  ~TestSyncMasterStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncMasterStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TestSyncMasterStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TestSyncCodeGenerationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestSyncRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestSyncMasterRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestSyncCodeGenerationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestSyncResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TestSyncMasterResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace test
}  // namespace mojo

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_SYNC_METHODS_MOJOM_BLINK_H_