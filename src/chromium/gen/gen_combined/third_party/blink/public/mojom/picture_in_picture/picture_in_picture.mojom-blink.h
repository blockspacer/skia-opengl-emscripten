// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-shared.h"
#include "third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-blink-forward.h"
#include "services/viz/public/interfaces/compositing/surface_id.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink-forward.h"

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

class PictureInPictureDelegateProxy;

template <typename ImplRefTraits>
class PictureInPictureDelegateStub;

class PictureInPictureDelegateRequestValidator;


class PLATFORM_EXPORT PictureInPictureDelegate
    : public PictureInPictureDelegateInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PictureInPictureDelegateInterfaceBase;
  using Proxy_ = PictureInPictureDelegateProxy;

  template <typename ImplRefTraits>
  using Stub_ = PictureInPictureDelegateStub<ImplRefTraits>;

  using RequestValidator_ = PictureInPictureDelegateRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kPictureInPictureWindowSizeChangedMinVersion = 0,
  };
  virtual ~PictureInPictureDelegate() {}

  
  virtual void PictureInPictureWindowSizeChanged(const ::blink::WebSize& size) = 0;
};

class PictureInPictureServiceProxy;

template <typename ImplRefTraits>
class PictureInPictureServiceStub;

class PictureInPictureServiceRequestValidator;
class PictureInPictureServiceResponseValidator;


class PLATFORM_EXPORT PictureInPictureService
    : public PictureInPictureServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = PictureInPictureServiceInterfaceBase;
  using Proxy_ = PictureInPictureServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = PictureInPictureServiceStub<ImplRefTraits>;

  using RequestValidator_ = PictureInPictureServiceRequestValidator;
  using ResponseValidator_ = PictureInPictureServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartSessionMinVersion = 0,
    kEndSessionMinVersion = 0,
    kUpdateSessionMinVersion = 0,
    kSetDelegateMinVersion = 0,
  };
  virtual ~PictureInPictureService() {}


  using StartSessionCallback = base::OnceCallback<void(const ::blink::WebSize&)>;
  
  virtual void StartSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const ::blink::WebSize& natural_size, bool show_play_pause_button, bool show_mute_button, StartSessionCallback callback) = 0;


  using EndSessionCallback = base::OnceCallback<void()>;
  
  virtual void EndSession(EndSessionCallback callback) = 0;

  
  virtual void UpdateSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const ::blink::WebSize& natural_size, bool show_play_pause_button, bool show_mute_button) = 0;

  
  virtual void SetDelegate(PictureInPictureDelegatePtr delegate) = 0;
};

class PLATFORM_EXPORT PictureInPictureDelegateProxy
    : public PictureInPictureDelegate {
 public:
  using InterfaceType = PictureInPictureDelegate;

  explicit PictureInPictureDelegateProxy(mojo::MessageReceiverWithResponder* receiver);
  void PictureInPictureWindowSizeChanged(const ::blink::WebSize& size) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT PictureInPictureServiceProxy
    : public PictureInPictureService {
 public:
  using InterfaceType = PictureInPictureService;

  explicit PictureInPictureServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const ::blink::WebSize& natural_size, bool show_play_pause_button, bool show_mute_button, StartSessionCallback callback) final;
  void EndSession(EndSessionCallback callback) final;
  void UpdateSession(uint32_t player_id, const base::Optional<viz::SurfaceId>& surface_id, const ::blink::WebSize& natural_size, bool show_play_pause_button, bool show_mute_button) final;
  void SetDelegate(PictureInPictureDelegatePtr delegate) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT PictureInPictureDelegateStubDispatch {
 public:
  static bool Accept(PictureInPictureDelegate* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PictureInPictureDelegate* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PictureInPictureDelegate>>
class PictureInPictureDelegateStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PictureInPictureDelegateStub() {}
  ~PictureInPictureDelegateStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureDelegateStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureDelegateStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PictureInPictureServiceStubDispatch {
 public:
  static bool Accept(PictureInPictureService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PictureInPictureService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PictureInPictureService>>
class PictureInPictureServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PictureInPictureServiceStub() {}
  ~PictureInPictureServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PictureInPictureServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT PictureInPictureDelegateRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PictureInPictureServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT PictureInPictureServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PICTURE_IN_PICTURE_PICTURE_IN_PICTURE_MOJOM_BLINK_H_