// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_H_

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
#include "third_party/blink/public/mojom/mediasession/media_session.mojom-shared.h"
#include "third_party/blink/public/mojom/mediasession/media_session.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "services/media_session/public/mojom/media_session.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/url.mojom.h"
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

class MediaSessionClientProxy;

template <typename ImplRefTraits>
class MediaSessionClientStub;

class MediaSessionClientRequestValidator;


class BLINK_COMMON_EXPORT MediaSessionClient
    : public MediaSessionClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaSessionClientInterfaceBase;
  using Proxy_ = MediaSessionClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionClientStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDidReceiveActionMinVersion = 0,
  };
  virtual ~MediaSessionClient() {}

  
  virtual void DidReceiveAction(::media_session::mojom::MediaSessionAction action) = 0;
};

class MediaSessionServiceProxy;

template <typename ImplRefTraits>
class MediaSessionServiceStub;

class MediaSessionServiceRequestValidator;


class BLINK_COMMON_EXPORT MediaSessionService
    : public MediaSessionServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaSessionServiceInterfaceBase;
  using Proxy_ = MediaSessionServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionServiceStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetClientMinVersion = 0,
    kSetPlaybackStateMinVersion = 0,
    kSetMetadataMinVersion = 0,
    kEnableActionMinVersion = 0,
    kDisableActionMinVersion = 0,
  };
  virtual ~MediaSessionService() {}

  
  virtual void SetClient(MediaSessionClientPtr client) = 0;

  
  virtual void SetPlaybackState(MediaSessionPlaybackState state) = 0;

  
  virtual void SetMetadata(SpecMediaMetadataPtr metadata) = 0;

  
  virtual void EnableAction(::media_session::mojom::MediaSessionAction action) = 0;

  
  virtual void DisableAction(::media_session::mojom::MediaSessionAction action) = 0;
};

class BLINK_COMMON_EXPORT MediaSessionClientProxy
    : public MediaSessionClient {
 public:
  using InterfaceType = MediaSessionClient;

  explicit MediaSessionClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidReceiveAction(::media_session::mojom::MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT MediaSessionServiceProxy
    : public MediaSessionService {
 public:
  using InterfaceType = MediaSessionService;

  explicit MediaSessionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(MediaSessionClientPtr client) final;
  void SetPlaybackState(MediaSessionPlaybackState state) final;
  void SetMetadata(SpecMediaMetadataPtr metadata) final;
  void EnableAction(::media_session::mojom::MediaSessionAction action) final;
  void DisableAction(::media_session::mojom::MediaSessionAction action) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT MediaSessionClientStubDispatch {
 public:
  static bool Accept(MediaSessionClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSessionClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSessionClient>>
class MediaSessionClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionClientStub() {}
  ~MediaSessionClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT MediaSessionServiceStubDispatch {
 public:
  static bool Accept(MediaSessionService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSessionService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSessionService>>
class MediaSessionServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionServiceStub() {}
  ~MediaSessionServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT MediaSessionClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT MediaSessionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT SpecMediaMetadata {
 public:
  using DataView = SpecMediaMetadataDataView;
  using Data_ = internal::SpecMediaMetadata_Data;

  template <typename... Args>
  static SpecMediaMetadataPtr New(Args&&... args) {
    return SpecMediaMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SpecMediaMetadataPtr From(const U& u) {
    return mojo::TypeConverter<SpecMediaMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SpecMediaMetadata>::Convert(*this);
  }


  SpecMediaMetadata();

  SpecMediaMetadata(
      const base::string16& title,
      const base::string16& artist,
      const base::string16& album,
      const std::vector<media_session::MediaImage>& artwork);

  ~SpecMediaMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SpecMediaMetadataPtr>
  SpecMediaMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SpecMediaMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SpecMediaMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SpecMediaMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SpecMediaMetadata_UnserializedMessageContext<
            UserType, SpecMediaMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SpecMediaMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SpecMediaMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SpecMediaMetadata_UnserializedMessageContext<
            UserType, SpecMediaMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SpecMediaMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::string16 title;
  
  base::string16 artist;
  
  base::string16 album;
  
  std::vector<media_session::MediaImage> artwork;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SpecMediaMetadataPtr SpecMediaMetadata::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(artist),
      mojo::Clone(album),
      mojo::Clone(artwork)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SpecMediaMetadata>::value>::type*>
bool SpecMediaMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->artist, other_struct.artist))
    return false;
  if (!mojo::Equals(this->album, other_struct.album))
    return false;
  if (!mojo::Equals(this->artwork, other_struct.artwork))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SpecMediaMetadata::DataView,
                                         ::blink::mojom::SpecMediaMetadataPtr> {
  static bool IsNull(const ::blink::mojom::SpecMediaMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SpecMediaMetadataPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SpecMediaMetadata::title)& title(
      const ::blink::mojom::SpecMediaMetadataPtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::SpecMediaMetadata::artist)& artist(
      const ::blink::mojom::SpecMediaMetadataPtr& input) {
    return input->artist;
  }

  static const decltype(::blink::mojom::SpecMediaMetadata::album)& album(
      const ::blink::mojom::SpecMediaMetadataPtr& input) {
    return input->album;
  }

  static const decltype(::blink::mojom::SpecMediaMetadata::artwork)& artwork(
      const ::blink::mojom::SpecMediaMetadataPtr& input) {
    return input->artwork;
  }

  static bool Read(::blink::mojom::SpecMediaMetadata::DataView input, ::blink::mojom::SpecMediaMetadataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASESSION_MEDIA_SESSION_MOJOM_H_