// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/platform_verification.mojom-shared.h"
#include "media/mojo/interfaces/platform_verification.mojom-blink-forward.h"

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




namespace media {
namespace mojom {
namespace blink {

class PlatformVerificationProxy;

template <typename ImplRefTraits>
class PlatformVerificationStub;

class PlatformVerificationRequestValidator;
class PlatformVerificationResponseValidator;


class BLINK_PLATFORM_EXPORT PlatformVerification
    : public PlatformVerificationInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PlatformVerificationInterfaceBase;
  using Proxy_ = PlatformVerificationProxy;

  template <typename ImplRefTraits>
  using Stub_ = PlatformVerificationStub<ImplRefTraits>;

  using RequestValidator_ = PlatformVerificationRequestValidator;
  using ResponseValidator_ = PlatformVerificationResponseValidator;
  enum MethodMinVersions : uint32_t {
    kChallengePlatformMinVersion = 0,
    kGetStorageIdMinVersion = 0,
  };
  virtual ~PlatformVerification() {}


  using ChallengePlatformCallback = base::OnceCallback<void(bool, const WTF::String&, const WTF::String&, const WTF::String&)>;
  
  virtual void ChallengePlatform(const WTF::String& service_id, const WTF::String& challenge, ChallengePlatformCallback callback) = 0;


  using GetStorageIdCallback = base::OnceCallback<void(uint32_t, const WTF::Vector<uint8_t>&)>;
  
  virtual void GetStorageId(uint32_t version, GetStorageIdCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT PlatformVerificationProxy
    : public PlatformVerification {
 public:
  using InterfaceType = PlatformVerification;

  explicit PlatformVerificationProxy(mojo::MessageReceiverWithResponder* receiver);
  void ChallengePlatform(const WTF::String& service_id, const WTF::String& challenge, ChallengePlatformCallback callback) final;
  void GetStorageId(uint32_t version, GetStorageIdCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT PlatformVerificationStubDispatch {
 public:
  static bool Accept(PlatformVerification* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PlatformVerification* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PlatformVerification>>
class PlatformVerificationStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PlatformVerificationStub() {}
  ~PlatformVerificationStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PlatformVerificationStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PlatformVerificationStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT PlatformVerificationRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PlatformVerificationResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_PLATFORM_VERIFICATION_MOJOM_BLINK_H_