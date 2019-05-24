// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/renderer_extensions.mojom-shared.h"
#include "media/mojo/interfaces/renderer_extensions.mojom-blink-forward.h"
#include "media/mojo/interfaces/media_types.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink-forward.h"
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
#include "third_party/blink/public/platform/web_common.h"




namespace media {
namespace mojom {
namespace blink {

class MediaPlayerRendererClientExtensionProxy;

template <typename ImplRefTraits>
class MediaPlayerRendererClientExtensionStub;

class MediaPlayerRendererClientExtensionRequestValidator;


class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtension
    : public MediaPlayerRendererClientExtensionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaPlayerRendererClientExtensionInterfaceBase;
  using Proxy_ = MediaPlayerRendererClientExtensionProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaPlayerRendererClientExtensionStub<ImplRefTraits>;

  using RequestValidator_ = MediaPlayerRendererClientExtensionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnVideoSizeChangeMinVersion = 0,
    kOnDurationChangeMinVersion = 0,
  };
  virtual ~MediaPlayerRendererClientExtension() {}

  
  virtual void OnVideoSizeChange(const ::blink::WebSize& size) = 0;

  
  virtual void OnDurationChange(base::TimeDelta duration) = 0;
};

class MediaPlayerRendererExtensionProxy;

template <typename ImplRefTraits>
class MediaPlayerRendererExtensionStub;

class MediaPlayerRendererExtensionRequestValidator;
class MediaPlayerRendererExtensionResponseValidator;


class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtension
    : public MediaPlayerRendererExtensionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaPlayerRendererExtensionInterfaceBase;
  using Proxy_ = MediaPlayerRendererExtensionProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaPlayerRendererExtensionStub<ImplRefTraits>;

  using RequestValidator_ = MediaPlayerRendererExtensionRequestValidator;
  using ResponseValidator_ = MediaPlayerRendererExtensionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitiateScopedSurfaceRequestMinVersion = 0,
  };
  virtual ~MediaPlayerRendererExtension() {}


  using InitiateScopedSurfaceRequestCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) = 0;
};

class FlingingRendererClientExtensionProxy;

template <typename ImplRefTraits>
class FlingingRendererClientExtensionStub;

class FlingingRendererClientExtensionRequestValidator;


class BLINK_PLATFORM_EXPORT FlingingRendererClientExtension
    : public FlingingRendererClientExtensionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = FlingingRendererClientExtensionInterfaceBase;
  using Proxy_ = FlingingRendererClientExtensionProxy;

  template <typename ImplRefTraits>
  using Stub_ = FlingingRendererClientExtensionStub<ImplRefTraits>;

  using RequestValidator_ = FlingingRendererClientExtensionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnRemotePlayStateChangeMinVersion = 0,
  };
  virtual ~FlingingRendererClientExtension() {}

  
  virtual void OnRemotePlayStateChange(::media::mojom::blink::MediaStatusState state) = 0;
};

class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtensionProxy
    : public MediaPlayerRendererClientExtension {
 public:
  using InterfaceType = MediaPlayerRendererClientExtension;

  explicit MediaPlayerRendererClientExtensionProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnVideoSizeChange(const ::blink::WebSize& size) final;
  void OnDurationChange(base::TimeDelta duration) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionProxy
    : public MediaPlayerRendererExtension {
 public:
  using InterfaceType = MediaPlayerRendererExtension;

  explicit MediaPlayerRendererExtensionProxy(mojo::MessageReceiverWithResponder* receiver);
  void InitiateScopedSurfaceRequest(InitiateScopedSurfaceRequestCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT FlingingRendererClientExtensionProxy
    : public FlingingRendererClientExtension {
 public:
  using InterfaceType = FlingingRendererClientExtension;

  explicit FlingingRendererClientExtensionProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnRemotePlayStateChange(::media::mojom::blink::MediaStatusState state) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtensionStubDispatch {
 public:
  static bool Accept(MediaPlayerRendererClientExtension* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaPlayerRendererClientExtension* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaPlayerRendererClientExtension>>
class MediaPlayerRendererClientExtensionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaPlayerRendererClientExtensionStub() {}
  ~MediaPlayerRendererClientExtensionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaPlayerRendererClientExtensionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaPlayerRendererClientExtensionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionStubDispatch {
 public:
  static bool Accept(MediaPlayerRendererExtension* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaPlayerRendererExtension* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaPlayerRendererExtension>>
class MediaPlayerRendererExtensionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaPlayerRendererExtensionStub() {}
  ~MediaPlayerRendererExtensionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaPlayerRendererExtensionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaPlayerRendererExtensionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT FlingingRendererClientExtensionStubDispatch {
 public:
  static bool Accept(FlingingRendererClientExtension* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FlingingRendererClientExtension* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FlingingRendererClientExtension>>
class FlingingRendererClientExtensionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FlingingRendererClientExtensionStub() {}
  ~FlingingRendererClientExtensionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FlingingRendererClientExtensionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FlingingRendererClientExtensionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererClientExtensionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT FlingingRendererClientExtensionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MediaPlayerRendererExtensionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_EXTENSIONS_MOJOM_BLINK_H_