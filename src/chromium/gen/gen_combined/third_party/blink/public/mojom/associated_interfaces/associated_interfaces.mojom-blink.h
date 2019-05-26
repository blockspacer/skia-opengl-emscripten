// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-shared.h"
#include "third_party/blink/public/mojom/associated_interfaces/associated_interfaces.mojom-blink-forward.h"

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

class AssociatedInterfaceProxy;

template <typename ImplRefTraits>
class AssociatedInterfaceStub;

class AssociatedInterfaceRequestValidator;


class PLATFORM_EXPORT AssociatedInterface
    : public AssociatedInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AssociatedInterfaceInterfaceBase;
  using Proxy_ = AssociatedInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = AssociatedInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = AssociatedInterfaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~AssociatedInterface() {}
};

class AssociatedInterfaceProviderProxy;

template <typename ImplRefTraits>
class AssociatedInterfaceProviderStub;

class AssociatedInterfaceProviderRequestValidator;


class PLATFORM_EXPORT AssociatedInterfaceProvider
    : public AssociatedInterfaceProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AssociatedInterfaceProviderInterfaceBase;
  using Proxy_ = AssociatedInterfaceProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = AssociatedInterfaceProviderStub<ImplRefTraits>;

  using RequestValidator_ = AssociatedInterfaceProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetAssociatedInterfaceMinVersion = 0,
  };
  virtual ~AssociatedInterfaceProvider() {}

  
  virtual void GetAssociatedInterface(const WTF::String& name, AssociatedInterfaceAssociatedRequest request) = 0;
};

class PLATFORM_EXPORT AssociatedInterfaceProxy
    : public AssociatedInterface {
 public:
  using InterfaceType = AssociatedInterface;

  explicit AssociatedInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT AssociatedInterfaceProviderProxy
    : public AssociatedInterfaceProvider {
 public:
  using InterfaceType = AssociatedInterfaceProvider;

  explicit AssociatedInterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAssociatedInterface(const WTF::String& name, AssociatedInterfaceAssociatedRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT AssociatedInterfaceStubDispatch {
 public:
  static bool Accept(AssociatedInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AssociatedInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AssociatedInterface>>
class AssociatedInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AssociatedInterfaceStub() {}
  ~AssociatedInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AssociatedInterfaceProviderStubDispatch {
 public:
  static bool Accept(AssociatedInterfaceProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AssociatedInterfaceProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AssociatedInterfaceProvider>>
class AssociatedInterfaceProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AssociatedInterfaceProviderStub() {}
  ~AssociatedInterfaceProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AssociatedInterfaceProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AssociatedInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AssociatedInterfaceProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_ASSOCIATED_INTERFACES_ASSOCIATED_INTERFACES_MOJOM_BLINK_H_