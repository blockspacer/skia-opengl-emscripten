// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_H_

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
#include "media/mojo/interfaces/key_system_support.mojom-shared.h"
#include "media/mojo/interfaces/key_system_support.mojom-blink-forward.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"

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

class KeySystemSupportProxy;

template <typename ImplRefTraits>
class KeySystemSupportStub;

class KeySystemSupportRequestValidator;
class KeySystemSupportResponseValidator;


class BLINK_PLATFORM_EXPORT KeySystemSupport
    : public KeySystemSupportInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = KeySystemSupportInterfaceBase;
  using Proxy_ = KeySystemSupportProxy;

  template <typename ImplRefTraits>
  using Stub_ = KeySystemSupportStub<ImplRefTraits>;

  using RequestValidator_ = KeySystemSupportRequestValidator;
  using ResponseValidator_ = KeySystemSupportResponseValidator;
  enum MethodMinVersions : uint32_t {
    kIsKeySystemSupportedMinVersion = 0,
  };
  virtual ~KeySystemSupport() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsKeySystemSupported(const WTF::String& key_system, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability);

  using IsKeySystemSupportedCallback = base::OnceCallback<void(bool, KeySystemCapabilityPtr)>;
  
  virtual void IsKeySystemSupported(const WTF::String& key_system, IsKeySystemSupportedCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT KeySystemSupportProxy
    : public KeySystemSupport {
 public:
  using InterfaceType = KeySystemSupport;

  explicit KeySystemSupportProxy(mojo::MessageReceiverWithResponder* receiver);
  bool IsKeySystemSupported(const WTF::String& key_system, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability) final;
  void IsKeySystemSupported(const WTF::String& key_system, IsKeySystemSupportedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT KeySystemSupportStubDispatch {
 public:
  static bool Accept(KeySystemSupport* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      KeySystemSupport* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<KeySystemSupport>>
class KeySystemSupportStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  KeySystemSupportStub() {}
  ~KeySystemSupportStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeySystemSupportStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return KeySystemSupportStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT KeySystemSupportRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT KeySystemSupportResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_PLATFORM_EXPORT KeySystemCapability {
 public:
  using DataView = KeySystemCapabilityDataView;
  using Data_ = internal::KeySystemCapability_Data;

  template <typename... Args>
  static KeySystemCapabilityPtr New(Args&&... args) {
    return KeySystemCapabilityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeySystemCapabilityPtr From(const U& u) {
    return mojo::TypeConverter<KeySystemCapabilityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeySystemCapability>::Convert(*this);
  }


  KeySystemCapability();

  KeySystemCapability(
      const WTF::Vector<::media::mojom::blink::VideoCodec>& video_codecs,
      bool supports_vp9_profile2,
      const WTF::Vector<::media::mojom::blink::EncryptionMode>& encryption_schemes,
      const WTF::Vector<::media::mojom::blink::VideoCodec>& hw_secure_video_codecs,
      const WTF::Vector<::media::mojom::blink::EncryptionMode>& hw_secure_encryption_schemes,
      const WTF::Vector<::media::mojom::blink::CdmSessionType>& session_types);

  ~KeySystemCapability();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeySystemCapabilityPtr>
  KeySystemCapabilityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeySystemCapability>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeySystemCapability::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeySystemCapability::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeySystemCapability_UnserializedMessageContext<
            UserType, KeySystemCapability::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeySystemCapability::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return KeySystemCapability::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeySystemCapability_UnserializedMessageContext<
            UserType, KeySystemCapability::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeySystemCapability::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::media::mojom::blink::VideoCodec> video_codecs;
  
  bool supports_vp9_profile2;
  
  WTF::Vector<::media::mojom::blink::EncryptionMode> encryption_schemes;
  
  WTF::Vector<::media::mojom::blink::VideoCodec> hw_secure_video_codecs;
  
  WTF::Vector<::media::mojom::blink::EncryptionMode> hw_secure_encryption_schemes;
  
  WTF::Vector<::media::mojom::blink::CdmSessionType> session_types;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
KeySystemCapabilityPtr KeySystemCapability::Clone() const {
  return New(
      mojo::Clone(video_codecs),
      mojo::Clone(supports_vp9_profile2),
      mojo::Clone(encryption_schemes),
      mojo::Clone(hw_secure_video_codecs),
      mojo::Clone(hw_secure_encryption_schemes),
      mojo::Clone(session_types)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeySystemCapability>::value>::type*>
bool KeySystemCapability::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->video_codecs, other_struct.video_codecs))
    return false;
  if (!mojo::Equals(this->supports_vp9_profile2, other_struct.supports_vp9_profile2))
    return false;
  if (!mojo::Equals(this->encryption_schemes, other_struct.encryption_schemes))
    return false;
  if (!mojo::Equals(this->hw_secure_video_codecs, other_struct.hw_secure_video_codecs))
    return false;
  if (!mojo::Equals(this->hw_secure_encryption_schemes, other_struct.hw_secure_encryption_schemes))
    return false;
  if (!mojo::Equals(this->session_types, other_struct.session_types))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media::mojom::blink::KeySystemCapability::DataView,
                                         ::media::mojom::blink::KeySystemCapabilityPtr> {
  static bool IsNull(const ::media::mojom::blink::KeySystemCapabilityPtr& input) { return !input; }
  static void SetToNull(::media::mojom::blink::KeySystemCapabilityPtr* output) { output->reset(); }

  static const decltype(::media::mojom::blink::KeySystemCapability::video_codecs)& video_codecs(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->video_codecs;
  }

  static decltype(::media::mojom::blink::KeySystemCapability::supports_vp9_profile2) supports_vp9_profile2(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->supports_vp9_profile2;
  }

  static const decltype(::media::mojom::blink::KeySystemCapability::encryption_schemes)& encryption_schemes(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->encryption_schemes;
  }

  static const decltype(::media::mojom::blink::KeySystemCapability::hw_secure_video_codecs)& hw_secure_video_codecs(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->hw_secure_video_codecs;
  }

  static const decltype(::media::mojom::blink::KeySystemCapability::hw_secure_encryption_schemes)& hw_secure_encryption_schemes(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->hw_secure_encryption_schemes;
  }

  static const decltype(::media::mojom::blink::KeySystemCapability::session_types)& session_types(
      const ::media::mojom::blink::KeySystemCapabilityPtr& input) {
    return input->session_types;
  }

  static bool Read(::media::mojom::blink::KeySystemCapability::DataView input, ::media::mojom::blink::KeySystemCapabilityPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_H_