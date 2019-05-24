// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_BLINK_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_BLINK_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-shared.h"
#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-blink-forward.h"

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




namespace WTF {
struct sample_internal_Enum_DataHashFn {
  static unsigned GetHash(const ::sample::Enum& value) {
    using utype = std::underlying_type<::sample::Enum>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::sample::Enum& left, const ::sample::Enum& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::sample::Enum>
    : public GenericHashTraits<::sample::Enum> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::sample::Enum& value) {
    return value == static_cast<::sample::Enum>(-1000000);
  }
  static void ConstructDeletedValue(::sample::Enum& slot, bool) {
    slot = static_cast<::sample::Enum>(-1000001);
  }
  static bool IsDeletedValue(const ::sample::Enum& value) {
    return value == static_cast<::sample::Enum>(-1000001);
  }
};
}  // namespace WTF


namespace sample {
namespace blink {

class PingTestProxy;

template <typename ImplRefTraits>
class PingTestStub;

class PingTestRequestValidator;
class PingTestResponseValidator;


class  PingTest
    : public PingTestInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PingTestInterfaceBase;
  using Proxy_ = PingTestProxy;

  template <typename ImplRefTraits>
  using Stub_ = PingTestStub<ImplRefTraits>;

  using RequestValidator_ = PingTestRequestValidator;
  using ResponseValidator_ = PingTestResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPingMinVersion = 0,
  };
  virtual ~PingTest() {}


  using PingCallback = base::OnceCallback<void()>;
  
  virtual void Ping(PingCallback callback) = 0;
};

class ProviderProxy;

template <typename ImplRefTraits>
class ProviderStub;

class ProviderRequestValidator;
class ProviderResponseValidator;


class  Provider
    : public ProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProviderInterfaceBase;
  using Proxy_ = ProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProviderStub<ImplRefTraits>;

  using RequestValidator_ = ProviderRequestValidator;
  using ResponseValidator_ = ProviderResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEchoStringMinVersion = 0,
    kEchoStringsMinVersion = 0,
    kEchoMessagePipeHandleMinVersion = 0,
    kEchoEnumMinVersion = 0,
    kEchoIntMinVersion = 0,
  };
  virtual ~Provider() {}


  using EchoStringCallback = base::OnceCallback<void(const WTF::String&)>;
  
  virtual void EchoString(const WTF::String& a, EchoStringCallback callback) = 0;


  using EchoStringsCallback = base::OnceCallback<void(const WTF::String&, const WTF::String&)>;
  
  virtual void EchoStrings(const WTF::String& a, const WTF::String& b, EchoStringsCallback callback) = 0;


  using EchoMessagePipeHandleCallback = base::OnceCallback<void(mojo::ScopedMessagePipeHandle)>;
  
  virtual void EchoMessagePipeHandle(mojo::ScopedMessagePipeHandle a, EchoMessagePipeHandleCallback callback) = 0;


  using EchoEnumCallback = base::OnceCallback<void(Enum)>;
  
  virtual void EchoEnum(Enum a, EchoEnumCallback callback) = 0;


  using EchoIntCallback = base::OnceCallback<void(int32_t)>;
  
  virtual void EchoInt(int32_t a, EchoIntCallback callback) = 0;
};

class IntegerAccessorProxy;

template <typename ImplRefTraits>
class IntegerAccessorStub;

class IntegerAccessorRequestValidator;
class IntegerAccessorResponseValidator;


class  IntegerAccessor
    : public IntegerAccessorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 3;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IntegerAccessorInterfaceBase;
  using Proxy_ = IntegerAccessorProxy;

  template <typename ImplRefTraits>
  using Stub_ = IntegerAccessorStub<ImplRefTraits>;

  using RequestValidator_ = IntegerAccessorRequestValidator;
  using ResponseValidator_ = IntegerAccessorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetIntegerMinVersion = 0,
    kSetIntegerMinVersion = 1,
  };
  virtual ~IntegerAccessor() {}


  using GetIntegerCallback = base::OnceCallback<void(int64_t, Enum)>;
  
  virtual void GetInteger(GetIntegerCallback callback) = 0;

  
  virtual void SetInteger(int64_t data, Enum type) = 0;
};

class  PingTestProxy
    : public PingTest {
 public:
  using InterfaceType = PingTest;

  explicit PingTestProxy(mojo::MessageReceiverWithResponder* receiver);
  void Ping(PingCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProviderProxy
    : public Provider {
 public:
  using InterfaceType = Provider;

  explicit ProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void EchoString(const WTF::String& a, EchoStringCallback callback) final;
  void EchoStrings(const WTF::String& a, const WTF::String& b, EchoStringsCallback callback) final;
  void EchoMessagePipeHandle(mojo::ScopedMessagePipeHandle a, EchoMessagePipeHandleCallback callback) final;
  void EchoEnum(Enum a, EchoEnumCallback callback) final;
  void EchoInt(int32_t a, EchoIntCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  IntegerAccessorProxy
    : public IntegerAccessor {
 public:
  using InterfaceType = IntegerAccessor;

  explicit IntegerAccessorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInteger(GetIntegerCallback callback) final;
  void SetInteger(int64_t data, Enum type) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PingTestStubDispatch {
 public:
  static bool Accept(PingTest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PingTest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PingTest>>
class PingTestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PingTestStub() {}
  ~PingTestStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PingTestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PingTestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProviderStubDispatch {
 public:
  static bool Accept(Provider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Provider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Provider>>
class ProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProviderStub() {}
  ~ProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  IntegerAccessorStubDispatch {
 public:
  static bool Accept(IntegerAccessor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IntegerAccessor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IntegerAccessor>>
class IntegerAccessorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IntegerAccessorStub() {}
  ~IntegerAccessorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IntegerAccessorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IntegerAccessorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PingTestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IntegerAccessorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PingTestResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProviderResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  IntegerAccessorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace sample

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_BLINK_H_