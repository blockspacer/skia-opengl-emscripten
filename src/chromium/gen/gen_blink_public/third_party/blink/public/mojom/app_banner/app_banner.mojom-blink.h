// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/app_banner/app_banner.mojom-shared.h"
#include "third_party/blink/public/mojom/app_banner/app_banner.mojom-blink-forward.h"

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




namespace WTF {
struct blink_mojom_internal_AppBannerPromptReply_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AppBannerPromptReply& value) {
    using utype = std::underlying_type<::blink::mojom::AppBannerPromptReply>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AppBannerPromptReply& left, const ::blink::mojom::AppBannerPromptReply& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AppBannerPromptReply>
    : public GenericHashTraits<::blink::mojom::AppBannerPromptReply> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AppBannerPromptReply& value) {
    return value == static_cast<::blink::mojom::AppBannerPromptReply>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AppBannerPromptReply& slot, bool) {
    slot = static_cast<::blink::mojom::AppBannerPromptReply>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AppBannerPromptReply& value) {
    return value == static_cast<::blink::mojom::AppBannerPromptReply>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class AppBannerControllerProxy;

template <typename ImplRefTraits>
class AppBannerControllerStub;

class AppBannerControllerRequestValidator;
class AppBannerControllerResponseValidator;


class PLATFORM_EXPORT AppBannerController
    : public AppBannerControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AppBannerControllerInterfaceBase;
  using Proxy_ = AppBannerControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerControllerStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerControllerRequestValidator;
  using ResponseValidator_ = AppBannerControllerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBannerPromptRequestMinVersion = 0,
  };
  virtual ~AppBannerController() {}


  using BannerPromptRequestCallback = base::OnceCallback<void(AppBannerPromptReply)>;
  
  virtual void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, BannerPromptRequestCallback callback) = 0;
};

class AppBannerEventProxy;

template <typename ImplRefTraits>
class AppBannerEventStub;

class AppBannerEventRequestValidator;


class PLATFORM_EXPORT AppBannerEvent
    : public AppBannerEventInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AppBannerEventInterfaceBase;
  using Proxy_ = AppBannerEventProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerEventStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerEventRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBannerAcceptedMinVersion = 0,
    kBannerDismissedMinVersion = 0,
  };
  virtual ~AppBannerEvent() {}

  
  virtual void BannerAccepted(const WTF::String& platform) = 0;

  
  virtual void BannerDismissed() = 0;
};

class AppBannerServiceProxy;

template <typename ImplRefTraits>
class AppBannerServiceStub;

class AppBannerServiceRequestValidator;


class PLATFORM_EXPORT AppBannerService
    : public AppBannerServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AppBannerServiceInterfaceBase;
  using Proxy_ = AppBannerServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppBannerServiceStub<ImplRefTraits>;

  using RequestValidator_ = AppBannerServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDisplayAppBannerMinVersion = 0,
  };
  virtual ~AppBannerService() {}

  
  virtual void DisplayAppBanner() = 0;
};

class PLATFORM_EXPORT AppBannerControllerProxy
    : public AppBannerController {
 public:
  using InterfaceType = AppBannerController;

  explicit AppBannerControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void BannerPromptRequest(AppBannerServicePtr service, AppBannerEventRequest event, const WTF::Vector<WTF::String>& platform, bool require_gesture, BannerPromptRequestCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT AppBannerEventProxy
    : public AppBannerEvent {
 public:
  using InterfaceType = AppBannerEvent;

  explicit AppBannerEventProxy(mojo::MessageReceiverWithResponder* receiver);
  void BannerAccepted(const WTF::String& platform) final;
  void BannerDismissed() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT AppBannerServiceProxy
    : public AppBannerService {
 public:
  using InterfaceType = AppBannerService;

  explicit AppBannerServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void DisplayAppBanner() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT AppBannerControllerStubDispatch {
 public:
  static bool Accept(AppBannerController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerController>>
class AppBannerControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerControllerStub() {}
  ~AppBannerControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AppBannerEventStubDispatch {
 public:
  static bool Accept(AppBannerEvent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerEvent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerEvent>>
class AppBannerEventStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerEventStub() {}
  ~AppBannerEventStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerEventStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerEventStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AppBannerServiceStubDispatch {
 public:
  static bool Accept(AppBannerService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppBannerService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppBannerService>>
class AppBannerServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppBannerServiceStub() {}
  ~AppBannerServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppBannerServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AppBannerControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppBannerEventRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppBannerServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AppBannerControllerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_BLINK_H_