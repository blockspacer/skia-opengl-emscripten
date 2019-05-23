// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_H_

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
#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
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

class FrameHostTestInterfaceProxy;

template <typename ImplRefTraits>
class FrameHostTestInterfaceStub;

class FrameHostTestInterfaceRequestValidator;
class FrameHostTestInterfaceResponseValidator;


class BLINK_COMMON_EXPORT FrameHostTestInterface
    : public FrameHostTestInterfaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FrameHostTestInterfaceInterfaceBase;
  using Proxy_ = FrameHostTestInterfaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = FrameHostTestInterfaceStub<ImplRefTraits>;

  using RequestValidator_ = FrameHostTestInterfaceRequestValidator;
  using ResponseValidator_ = FrameHostTestInterfaceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPingMinVersion = 0,
    kGetNameMinVersion = 0,
  };
  virtual ~FrameHostTestInterface() {}

  
  virtual void Ping(const GURL& source_url, const std::string& source_event) = 0;


  using GetNameCallback = base::OnceCallback<void(const std::string&)>;
  
  virtual void GetName(GetNameCallback callback) = 0;
};

class BLINK_COMMON_EXPORT FrameHostTestInterfaceProxy
    : public FrameHostTestInterface {
 public:
  using InterfaceType = FrameHostTestInterface;

  explicit FrameHostTestInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Ping(const GURL& source_url, const std::string& source_event) final;
  void GetName(GetNameCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT FrameHostTestInterfaceStubDispatch {
 public:
  static bool Accept(FrameHostTestInterface* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FrameHostTestInterface* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FrameHostTestInterface>>
class FrameHostTestInterfaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FrameHostTestInterfaceStub() {}
  ~FrameHostTestInterfaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameHostTestInterfaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FrameHostTestInterfaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT FrameHostTestInterfaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT FrameHostTestInterfaceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_H_