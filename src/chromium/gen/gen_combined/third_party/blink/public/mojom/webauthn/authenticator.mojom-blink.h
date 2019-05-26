// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-shared.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
struct blink_mojom_internal_AuthenticatorStatus_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AuthenticatorStatus& value) {
    using utype = std::underlying_type<::blink::mojom::AuthenticatorStatus>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AuthenticatorStatus& left, const ::blink::mojom::AuthenticatorStatus& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AuthenticatorStatus>
    : public GenericHashTraits<::blink::mojom::AuthenticatorStatus> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AuthenticatorStatus& value) {
    return value == static_cast<::blink::mojom::AuthenticatorStatus>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AuthenticatorStatus& slot, bool) {
    slot = static_cast<::blink::mojom::AuthenticatorStatus>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AuthenticatorStatus& value) {
    return value == static_cast<::blink::mojom::AuthenticatorStatus>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_AuthenticatorTransport_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AuthenticatorTransport& value) {
    using utype = std::underlying_type<::blink::mojom::AuthenticatorTransport>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AuthenticatorTransport& left, const ::blink::mojom::AuthenticatorTransport& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AuthenticatorTransport>
    : public GenericHashTraits<::blink::mojom::AuthenticatorTransport> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AuthenticatorTransport& value) {
    return value == static_cast<::blink::mojom::AuthenticatorTransport>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AuthenticatorTransport& slot, bool) {
    slot = static_cast<::blink::mojom::AuthenticatorTransport>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AuthenticatorTransport& value) {
    return value == static_cast<::blink::mojom::AuthenticatorTransport>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_UserVerificationRequirement_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::UserVerificationRequirement& value) {
    using utype = std::underlying_type<::blink::mojom::UserVerificationRequirement>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::UserVerificationRequirement& left, const ::blink::mojom::UserVerificationRequirement& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::UserVerificationRequirement>
    : public GenericHashTraits<::blink::mojom::UserVerificationRequirement> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::UserVerificationRequirement& value) {
    return value == static_cast<::blink::mojom::UserVerificationRequirement>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::UserVerificationRequirement& slot, bool) {
    slot = static_cast<::blink::mojom::UserVerificationRequirement>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::UserVerificationRequirement& value) {
    return value == static_cast<::blink::mojom::UserVerificationRequirement>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_AttestationConveyancePreference_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AttestationConveyancePreference& value) {
    using utype = std::underlying_type<::blink::mojom::AttestationConveyancePreference>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AttestationConveyancePreference& left, const ::blink::mojom::AttestationConveyancePreference& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AttestationConveyancePreference>
    : public GenericHashTraits<::blink::mojom::AttestationConveyancePreference> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AttestationConveyancePreference& value) {
    return value == static_cast<::blink::mojom::AttestationConveyancePreference>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AttestationConveyancePreference& slot, bool) {
    slot = static_cast<::blink::mojom::AttestationConveyancePreference>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AttestationConveyancePreference& value) {
    return value == static_cast<::blink::mojom::AttestationConveyancePreference>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_AuthenticatorAttachment_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::AuthenticatorAttachment& value) {
    using utype = std::underlying_type<::blink::mojom::AuthenticatorAttachment>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::AuthenticatorAttachment& left, const ::blink::mojom::AuthenticatorAttachment& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::AuthenticatorAttachment>
    : public GenericHashTraits<::blink::mojom::AuthenticatorAttachment> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::AuthenticatorAttachment& value) {
    return value == static_cast<::blink::mojom::AuthenticatorAttachment>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::AuthenticatorAttachment& slot, bool) {
    slot = static_cast<::blink::mojom::AuthenticatorAttachment>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::AuthenticatorAttachment& value) {
    return value == static_cast<::blink::mojom::AuthenticatorAttachment>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_ProtectionPolicy_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ProtectionPolicy& value) {
    using utype = std::underlying_type<::blink::mojom::ProtectionPolicy>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ProtectionPolicy& left, const ::blink::mojom::ProtectionPolicy& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ProtectionPolicy>
    : public GenericHashTraits<::blink::mojom::ProtectionPolicy> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ProtectionPolicy& value) {
    return value == static_cast<::blink::mojom::ProtectionPolicy>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ProtectionPolicy& slot, bool) {
    slot = static_cast<::blink::mojom::ProtectionPolicy>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ProtectionPolicy& value) {
    return value == static_cast<::blink::mojom::ProtectionPolicy>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_PublicKeyCredentialType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PublicKeyCredentialType& value) {
    using utype = std::underlying_type<::blink::mojom::PublicKeyCredentialType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PublicKeyCredentialType& left, const ::blink::mojom::PublicKeyCredentialType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PublicKeyCredentialType>
    : public GenericHashTraits<::blink::mojom::PublicKeyCredentialType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::PublicKeyCredentialType& value) {
    return value == static_cast<::blink::mojom::PublicKeyCredentialType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::PublicKeyCredentialType& slot, bool) {
    slot = static_cast<::blink::mojom::PublicKeyCredentialType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PublicKeyCredentialType& value) {
    return value == static_cast<::blink::mojom::PublicKeyCredentialType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class AuthenticatorProxy;

template <typename ImplRefTraits>
class AuthenticatorStub;

class AuthenticatorRequestValidator;
class AuthenticatorResponseValidator;


class PLATFORM_EXPORT Authenticator
    : public AuthenticatorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = AuthenticatorInterfaceBase;
  using Proxy_ = AuthenticatorProxy;

  template <typename ImplRefTraits>
  using Stub_ = AuthenticatorStub<ImplRefTraits>;

  using RequestValidator_ = AuthenticatorRequestValidator;
  using ResponseValidator_ = AuthenticatorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kMakeCredentialMinVersion = 0,
    kGetAssertionMinVersion = 0,
    kIsUserVerifyingPlatformAuthenticatorAvailableMinVersion = 0,
    kCancelMinVersion = 0,
  };
  virtual ~Authenticator() {}


  using MakeCredentialCallback = base::OnceCallback<void(AuthenticatorStatus, MakeCredentialAuthenticatorResponsePtr)>;
  
  virtual void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) = 0;


  using GetAssertionCallback = base::OnceCallback<void(AuthenticatorStatus, GetAssertionAuthenticatorResponsePtr)>;
  
  virtual void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) = 0;


  using IsUserVerifyingPlatformAuthenticatorAvailableCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsUserVerifyingPlatformAuthenticatorAvailable(IsUserVerifyingPlatformAuthenticatorAvailableCallback callback) = 0;

  
  virtual void Cancel() = 0;
};

class PLATFORM_EXPORT AuthenticatorProxy
    : public Authenticator {
 public:
  using InterfaceType = Authenticator;

  explicit AuthenticatorProxy(mojo::MessageReceiverWithResponder* receiver);
  void MakeCredential(PublicKeyCredentialCreationOptionsPtr options, MakeCredentialCallback callback) final;
  void GetAssertion(PublicKeyCredentialRequestOptionsPtr options, GetAssertionCallback callback) final;
  void IsUserVerifyingPlatformAuthenticatorAvailable(IsUserVerifyingPlatformAuthenticatorAvailableCallback callback) final;
  void Cancel() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT AuthenticatorStubDispatch {
 public:
  static bool Accept(Authenticator* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Authenticator* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Authenticator>>
class AuthenticatorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AuthenticatorStub() {}
  ~AuthenticatorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticatorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AuthenticatorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT AuthenticatorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT AuthenticatorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};










class PLATFORM_EXPORT PublicKeyCredentialParameters {
 public:
  using DataView = PublicKeyCredentialParametersDataView;
  using Data_ = internal::PublicKeyCredentialParameters_Data;

  template <typename... Args>
  static PublicKeyCredentialParametersPtr New(Args&&... args) {
    return PublicKeyCredentialParametersPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialParametersPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialParameters>::Convert(*this);
  }


  PublicKeyCredentialParameters();

  PublicKeyCredentialParameters(
      PublicKeyCredentialType type,
      int32_t algorithm_identifier);

  ~PublicKeyCredentialParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialParametersPtr>
  PublicKeyCredentialParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialParameters>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialParameters::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialParameters_UnserializedMessageContext<
            UserType, PublicKeyCredentialParameters::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialParameters::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialParameters_UnserializedMessageContext<
            UserType, PublicKeyCredentialParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialParameters::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PublicKeyCredentialType type;
  
  int32_t algorithm_identifier;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class PLATFORM_EXPORT AuthenticatorSelectionCriteria {
 public:
  using DataView = AuthenticatorSelectionCriteriaDataView;
  using Data_ = internal::AuthenticatorSelectionCriteria_Data;

  template <typename... Args>
  static AuthenticatorSelectionCriteriaPtr New(Args&&... args) {
    return AuthenticatorSelectionCriteriaPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AuthenticatorSelectionCriteriaPtr From(const U& u) {
    return mojo::TypeConverter<AuthenticatorSelectionCriteriaPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AuthenticatorSelectionCriteria>::Convert(*this);
  }


  AuthenticatorSelectionCriteria();

  AuthenticatorSelectionCriteria(
      AuthenticatorAttachment authenticator_attachment,
      bool require_resident_key,
      UserVerificationRequirement user_verification);

  ~AuthenticatorSelectionCriteria();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AuthenticatorSelectionCriteriaPtr>
  AuthenticatorSelectionCriteriaPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AuthenticatorSelectionCriteria>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AuthenticatorSelectionCriteria::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AuthenticatorSelectionCriteria::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AuthenticatorSelectionCriteria_UnserializedMessageContext<
            UserType, AuthenticatorSelectionCriteria::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AuthenticatorSelectionCriteria::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AuthenticatorSelectionCriteria::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AuthenticatorSelectionCriteria_UnserializedMessageContext<
            UserType, AuthenticatorSelectionCriteria::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AuthenticatorSelectionCriteria::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  AuthenticatorAttachment authenticator_attachment;
  
  bool require_resident_key;
  
  UserVerificationRequirement user_verification;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class PLATFORM_EXPORT CommonCredentialInfo {
 public:
  using DataView = CommonCredentialInfoDataView;
  using Data_ = internal::CommonCredentialInfo_Data;

  template <typename... Args>
  static CommonCredentialInfoPtr New(Args&&... args) {
    return CommonCredentialInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommonCredentialInfoPtr From(const U& u) {
    return mojo::TypeConverter<CommonCredentialInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommonCredentialInfo>::Convert(*this);
  }


  CommonCredentialInfo();

  CommonCredentialInfo(
      const WTF::String& id,
      const WTF::Vector<uint8_t>& raw_id,
      const WTF::Vector<uint8_t>& client_data_json);

  ~CommonCredentialInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommonCredentialInfoPtr>
  CommonCredentialInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CommonCredentialInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommonCredentialInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommonCredentialInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommonCredentialInfo_UnserializedMessageContext<
            UserType, CommonCredentialInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CommonCredentialInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CommonCredentialInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommonCredentialInfo_UnserializedMessageContext<
            UserType, CommonCredentialInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommonCredentialInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String id;
  
  WTF::Vector<uint8_t> raw_id;
  
  WTF::Vector<uint8_t> client_data_json;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT MakeCredentialAuthenticatorResponse {
 public:
  using DataView = MakeCredentialAuthenticatorResponseDataView;
  using Data_ = internal::MakeCredentialAuthenticatorResponse_Data;

  template <typename... Args>
  static MakeCredentialAuthenticatorResponsePtr New(Args&&... args) {
    return MakeCredentialAuthenticatorResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MakeCredentialAuthenticatorResponsePtr From(const U& u) {
    return mojo::TypeConverter<MakeCredentialAuthenticatorResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MakeCredentialAuthenticatorResponse>::Convert(*this);
  }


  MakeCredentialAuthenticatorResponse();

  MakeCredentialAuthenticatorResponse(
      CommonCredentialInfoPtr info,
      const WTF::Vector<uint8_t>& attestation_object,
      const WTF::Vector<AuthenticatorTransport>& transports,
      bool echo_hmac_create_secret,
      bool hmac_create_secret);

  ~MakeCredentialAuthenticatorResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MakeCredentialAuthenticatorResponsePtr>
  MakeCredentialAuthenticatorResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MakeCredentialAuthenticatorResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MakeCredentialAuthenticatorResponse::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MakeCredentialAuthenticatorResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MakeCredentialAuthenticatorResponse_UnserializedMessageContext<
            UserType, MakeCredentialAuthenticatorResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MakeCredentialAuthenticatorResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MakeCredentialAuthenticatorResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MakeCredentialAuthenticatorResponse_UnserializedMessageContext<
            UserType, MakeCredentialAuthenticatorResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MakeCredentialAuthenticatorResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  CommonCredentialInfoPtr info;
  
  WTF::Vector<uint8_t> attestation_object;
  
  WTF::Vector<AuthenticatorTransport> transports;
  
  bool echo_hmac_create_secret;
  
  bool hmac_create_secret;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MakeCredentialAuthenticatorResponse);
};





class PLATFORM_EXPORT GetAssertionAuthenticatorResponse {
 public:
  using DataView = GetAssertionAuthenticatorResponseDataView;
  using Data_ = internal::GetAssertionAuthenticatorResponse_Data;

  template <typename... Args>
  static GetAssertionAuthenticatorResponsePtr New(Args&&... args) {
    return GetAssertionAuthenticatorResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GetAssertionAuthenticatorResponsePtr From(const U& u) {
    return mojo::TypeConverter<GetAssertionAuthenticatorResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GetAssertionAuthenticatorResponse>::Convert(*this);
  }


  GetAssertionAuthenticatorResponse();

  GetAssertionAuthenticatorResponse(
      CommonCredentialInfoPtr info,
      const WTF::Vector<uint8_t>& authenticator_data,
      const WTF::Vector<uint8_t>& signature,
      const base::Optional<WTF::Vector<uint8_t>>& user_handle,
      bool echo_appid_extension,
      bool appid_extension);

  ~GetAssertionAuthenticatorResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GetAssertionAuthenticatorResponsePtr>
  GetAssertionAuthenticatorResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GetAssertionAuthenticatorResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GetAssertionAuthenticatorResponse::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GetAssertionAuthenticatorResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GetAssertionAuthenticatorResponse_UnserializedMessageContext<
            UserType, GetAssertionAuthenticatorResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GetAssertionAuthenticatorResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GetAssertionAuthenticatorResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GetAssertionAuthenticatorResponse_UnserializedMessageContext<
            UserType, GetAssertionAuthenticatorResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GetAssertionAuthenticatorResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  CommonCredentialInfoPtr info;
  
  WTF::Vector<uint8_t> authenticator_data;
  
  WTF::Vector<uint8_t> signature;
  
  base::Optional<WTF::Vector<uint8_t>> user_handle;
  
  bool echo_appid_extension;
  
  bool appid_extension;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GetAssertionAuthenticatorResponse);
};





class PLATFORM_EXPORT PublicKeyCredentialRpEntity {
 public:
  using DataView = PublicKeyCredentialRpEntityDataView;
  using Data_ = internal::PublicKeyCredentialRpEntity_Data;

  template <typename... Args>
  static PublicKeyCredentialRpEntityPtr New(Args&&... args) {
    return PublicKeyCredentialRpEntityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialRpEntityPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialRpEntityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialRpEntity>::Convert(*this);
  }


  PublicKeyCredentialRpEntity();

  PublicKeyCredentialRpEntity(
      const WTF::String& id,
      const WTF::String& name,
      const base::Optional<::blink::KURL>& icon);

  ~PublicKeyCredentialRpEntity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialRpEntityPtr>
  PublicKeyCredentialRpEntityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialRpEntity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialRpEntity::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialRpEntity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialRpEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialRpEntity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRpEntity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialRpEntity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialRpEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialRpEntity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRpEntity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String id;
  
  WTF::String name;
  
  base::Optional<::blink::KURL> icon;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT PublicKeyCredentialUserEntity {
 public:
  using DataView = PublicKeyCredentialUserEntityDataView;
  using Data_ = internal::PublicKeyCredentialUserEntity_Data;

  template <typename... Args>
  static PublicKeyCredentialUserEntityPtr New(Args&&... args) {
    return PublicKeyCredentialUserEntityPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialUserEntityPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialUserEntityPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialUserEntity>::Convert(*this);
  }


  PublicKeyCredentialUserEntity();

  PublicKeyCredentialUserEntity(
      const WTF::Vector<uint8_t>& id,
      const WTF::String& name,
      const base::Optional<::blink::KURL>& icon,
      const WTF::String& display_name);

  ~PublicKeyCredentialUserEntity();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialUserEntityPtr>
  PublicKeyCredentialUserEntityPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialUserEntity>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialUserEntity::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialUserEntity::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialUserEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialUserEntity::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialUserEntity::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialUserEntity::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialUserEntity_UnserializedMessageContext<
            UserType, PublicKeyCredentialUserEntity::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialUserEntity::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<uint8_t> id;
  
  WTF::String name;
  
  base::Optional<::blink::KURL> icon;
  
  WTF::String display_name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};






class PLATFORM_EXPORT CableAuthentication {
 public:
  using DataView = CableAuthenticationDataView;
  using Data_ = internal::CableAuthentication_Data;

  template <typename... Args>
  static CableAuthenticationPtr New(Args&&... args) {
    return CableAuthenticationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CableAuthenticationPtr From(const U& u) {
    return mojo::TypeConverter<CableAuthenticationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CableAuthentication>::Convert(*this);
  }


  CableAuthentication();

  CableAuthentication(
      uint8_t version,
      const WTF::Vector<uint8_t>& client_eid,
      const WTF::Vector<uint8_t>& authenticator_eid,
      const WTF::Vector<uint8_t>& session_pre_key);

  ~CableAuthentication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CableAuthenticationPtr>
  CableAuthenticationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CableAuthentication>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CableAuthentication::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CableAuthentication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CableAuthentication_UnserializedMessageContext<
            UserType, CableAuthentication::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CableAuthentication::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CableAuthentication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CableAuthentication_UnserializedMessageContext<
            UserType, CableAuthentication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CableAuthentication::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint8_t version;
  
  WTF::Vector<uint8_t> client_eid;
  
  WTF::Vector<uint8_t> authenticator_eid;
  
  WTF::Vector<uint8_t> session_pre_key;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT CableRegistration {
 public:
  using DataView = CableRegistrationDataView;
  using Data_ = internal::CableRegistration_Data;

  template <typename... Args>
  static CableRegistrationPtr New(Args&&... args) {
    return CableRegistrationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CableRegistrationPtr From(const U& u) {
    return mojo::TypeConverter<CableRegistrationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CableRegistration>::Convert(*this);
  }


  CableRegistration();

  CableRegistration(
      const WTF::Vector<uint8_t>& versions,
      const WTF::Vector<uint8_t>& relying_party_public_key);

  ~CableRegistration();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CableRegistrationPtr>
  CableRegistrationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CableRegistration>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CableRegistration::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CableRegistration::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CableRegistration_UnserializedMessageContext<
            UserType, CableRegistration::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CableRegistration::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CableRegistration::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CableRegistration_UnserializedMessageContext<
            UserType, CableRegistration::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CableRegistration::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<uint8_t> versions;
  
  WTF::Vector<uint8_t> relying_party_public_key;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class PLATFORM_EXPORT PublicKeyCredentialRequestOptions {
 public:
  using DataView = PublicKeyCredentialRequestOptionsDataView;
  using Data_ = internal::PublicKeyCredentialRequestOptions_Data;

  template <typename... Args>
  static PublicKeyCredentialRequestOptionsPtr New(Args&&... args) {
    return PublicKeyCredentialRequestOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialRequestOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialRequestOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialRequestOptions>::Convert(*this);
  }


  PublicKeyCredentialRequestOptions();

  PublicKeyCredentialRequestOptions(
      const WTF::Vector<uint8_t>& challenge,
      base::TimeDelta adjusted_timeout,
      const WTF::String& relying_party_id,
      WTF::Vector<PublicKeyCredentialDescriptorPtr> allow_credentials,
      UserVerificationRequirement user_verification,
      const WTF::String& appid,
      WTF::Vector<CableAuthenticationPtr> cable_authentication_data);

  ~PublicKeyCredentialRequestOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialRequestOptionsPtr>
  PublicKeyCredentialRequestOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialRequestOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialRequestOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialRequestOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialRequestOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialRequestOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRequestOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialRequestOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialRequestOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialRequestOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialRequestOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<uint8_t> challenge;
  
  base::TimeDelta adjusted_timeout;
  
  WTF::String relying_party_id;
  
  WTF::Vector<PublicKeyCredentialDescriptorPtr> allow_credentials;
  
  UserVerificationRequirement user_verification;
  
  WTF::String appid;
  
  WTF::Vector<CableAuthenticationPtr> cable_authentication_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PublicKeyCredentialRequestOptions);
};






class PLATFORM_EXPORT PublicKeyCredentialCreationOptions {
 public:
  using DataView = PublicKeyCredentialCreationOptionsDataView;
  using Data_ = internal::PublicKeyCredentialCreationOptions_Data;

  template <typename... Args>
  static PublicKeyCredentialCreationOptionsPtr New(Args&&... args) {
    return PublicKeyCredentialCreationOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialCreationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialCreationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialCreationOptions>::Convert(*this);
  }


  PublicKeyCredentialCreationOptions();

  PublicKeyCredentialCreationOptions(
      PublicKeyCredentialRpEntityPtr relying_party,
      PublicKeyCredentialUserEntityPtr user,
      const WTF::Vector<uint8_t>& challenge,
      WTF::Vector<PublicKeyCredentialParametersPtr> public_key_parameters,
      base::TimeDelta adjusted_timeout,
      WTF::Vector<PublicKeyCredentialDescriptorPtr> exclude_credentials,
      AuthenticatorSelectionCriteriaPtr authenticator_selection,
      AttestationConveyancePreference attestation,
      CableRegistrationPtr cable_registration_data,
      bool hmac_create_secret,
      ProtectionPolicy protection_policy,
      bool enforce_protection_policy);

  ~PublicKeyCredentialCreationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialCreationOptionsPtr>
  PublicKeyCredentialCreationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialCreationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialCreationOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialCreationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialCreationOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialCreationOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialCreationOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialCreationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialCreationOptions_UnserializedMessageContext<
            UserType, PublicKeyCredentialCreationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialCreationOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PublicKeyCredentialRpEntityPtr relying_party;
  
  PublicKeyCredentialUserEntityPtr user;
  
  WTF::Vector<uint8_t> challenge;
  
  WTF::Vector<PublicKeyCredentialParametersPtr> public_key_parameters;
  
  base::TimeDelta adjusted_timeout;
  
  WTF::Vector<PublicKeyCredentialDescriptorPtr> exclude_credentials;
  
  AuthenticatorSelectionCriteriaPtr authenticator_selection;
  
  AttestationConveyancePreference attestation;
  
  CableRegistrationPtr cable_registration_data;
  
  bool hmac_create_secret;
  
  ProtectionPolicy protection_policy;
  
  bool enforce_protection_policy;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(PublicKeyCredentialCreationOptions);
};





class PLATFORM_EXPORT PublicKeyCredentialDescriptor {
 public:
  using DataView = PublicKeyCredentialDescriptorDataView;
  using Data_ = internal::PublicKeyCredentialDescriptor_Data;

  template <typename... Args>
  static PublicKeyCredentialDescriptorPtr New(Args&&... args) {
    return PublicKeyCredentialDescriptorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PublicKeyCredentialDescriptorPtr From(const U& u) {
    return mojo::TypeConverter<PublicKeyCredentialDescriptorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PublicKeyCredentialDescriptor>::Convert(*this);
  }


  PublicKeyCredentialDescriptor();

  PublicKeyCredentialDescriptor(
      PublicKeyCredentialType type,
      const WTF::Vector<uint8_t>& id,
      const WTF::Vector<AuthenticatorTransport>& transports);

  ~PublicKeyCredentialDescriptor();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PublicKeyCredentialDescriptorPtr>
  PublicKeyCredentialDescriptorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PublicKeyCredentialDescriptor>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PublicKeyCredentialDescriptor::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PublicKeyCredentialDescriptor::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PublicKeyCredentialDescriptor_UnserializedMessageContext<
            UserType, PublicKeyCredentialDescriptor::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PublicKeyCredentialDescriptor::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PublicKeyCredentialDescriptor::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PublicKeyCredentialDescriptor_UnserializedMessageContext<
            UserType, PublicKeyCredentialDescriptor::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PublicKeyCredentialDescriptor::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  PublicKeyCredentialType type;
  
  WTF::Vector<uint8_t> id;
  
  WTF::Vector<AuthenticatorTransport> transports;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CommonCredentialInfoPtr CommonCredentialInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(raw_id),
      mojo::Clone(client_data_json)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CommonCredentialInfo>::value>::type*>
bool CommonCredentialInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->raw_id, other_struct.raw_id))
    return false;
  if (!mojo::Equals(this->client_data_json, other_struct.client_data_json))
    return false;
  return true;
}
template <typename StructPtrType>
MakeCredentialAuthenticatorResponsePtr MakeCredentialAuthenticatorResponse::Clone() const {
  return New(
      mojo::Clone(info),
      mojo::Clone(attestation_object),
      mojo::Clone(transports),
      mojo::Clone(echo_hmac_create_secret),
      mojo::Clone(hmac_create_secret)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MakeCredentialAuthenticatorResponse>::value>::type*>
bool MakeCredentialAuthenticatorResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->info, other_struct.info))
    return false;
  if (!mojo::Equals(this->attestation_object, other_struct.attestation_object))
    return false;
  if (!mojo::Equals(this->transports, other_struct.transports))
    return false;
  if (!mojo::Equals(this->echo_hmac_create_secret, other_struct.echo_hmac_create_secret))
    return false;
  if (!mojo::Equals(this->hmac_create_secret, other_struct.hmac_create_secret))
    return false;
  return true;
}
template <typename StructPtrType>
GetAssertionAuthenticatorResponsePtr GetAssertionAuthenticatorResponse::Clone() const {
  return New(
      mojo::Clone(info),
      mojo::Clone(authenticator_data),
      mojo::Clone(signature),
      mojo::Clone(user_handle),
      mojo::Clone(echo_appid_extension),
      mojo::Clone(appid_extension)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GetAssertionAuthenticatorResponse>::value>::type*>
bool GetAssertionAuthenticatorResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->info, other_struct.info))
    return false;
  if (!mojo::Equals(this->authenticator_data, other_struct.authenticator_data))
    return false;
  if (!mojo::Equals(this->signature, other_struct.signature))
    return false;
  if (!mojo::Equals(this->user_handle, other_struct.user_handle))
    return false;
  if (!mojo::Equals(this->echo_appid_extension, other_struct.echo_appid_extension))
    return false;
  if (!mojo::Equals(this->appid_extension, other_struct.appid_extension))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialRpEntityPtr PublicKeyCredentialRpEntity::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(icon)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialRpEntity>::value>::type*>
bool PublicKeyCredentialRpEntity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialUserEntityPtr PublicKeyCredentialUserEntity::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(icon),
      mojo::Clone(display_name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialUserEntity>::value>::type*>
bool PublicKeyCredentialUserEntity::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialParametersPtr PublicKeyCredentialParameters::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(algorithm_identifier)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialParameters>::value>::type*>
bool PublicKeyCredentialParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->algorithm_identifier, other_struct.algorithm_identifier))
    return false;
  return true;
}
template <typename StructPtrType>
CableAuthenticationPtr CableAuthentication::Clone() const {
  return New(
      mojo::Clone(version),
      mojo::Clone(client_eid),
      mojo::Clone(authenticator_eid),
      mojo::Clone(session_pre_key)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CableAuthentication>::value>::type*>
bool CableAuthentication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->client_eid, other_struct.client_eid))
    return false;
  if (!mojo::Equals(this->authenticator_eid, other_struct.authenticator_eid))
    return false;
  if (!mojo::Equals(this->session_pre_key, other_struct.session_pre_key))
    return false;
  return true;
}
template <typename StructPtrType>
CableRegistrationPtr CableRegistration::Clone() const {
  return New(
      mojo::Clone(versions),
      mojo::Clone(relying_party_public_key)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CableRegistration>::value>::type*>
bool CableRegistration::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->versions, other_struct.versions))
    return false;
  if (!mojo::Equals(this->relying_party_public_key, other_struct.relying_party_public_key))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialRequestOptionsPtr PublicKeyCredentialRequestOptions::Clone() const {
  return New(
      mojo::Clone(challenge),
      mojo::Clone(adjusted_timeout),
      mojo::Clone(relying_party_id),
      mojo::Clone(allow_credentials),
      mojo::Clone(user_verification),
      mojo::Clone(appid),
      mojo::Clone(cable_authentication_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialRequestOptions>::value>::type*>
bool PublicKeyCredentialRequestOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->challenge, other_struct.challenge))
    return false;
  if (!mojo::Equals(this->adjusted_timeout, other_struct.adjusted_timeout))
    return false;
  if (!mojo::Equals(this->relying_party_id, other_struct.relying_party_id))
    return false;
  if (!mojo::Equals(this->allow_credentials, other_struct.allow_credentials))
    return false;
  if (!mojo::Equals(this->user_verification, other_struct.user_verification))
    return false;
  if (!mojo::Equals(this->appid, other_struct.appid))
    return false;
  if (!mojo::Equals(this->cable_authentication_data, other_struct.cable_authentication_data))
    return false;
  return true;
}
template <typename StructPtrType>
AuthenticatorSelectionCriteriaPtr AuthenticatorSelectionCriteria::Clone() const {
  return New(
      mojo::Clone(authenticator_attachment),
      mojo::Clone(require_resident_key),
      mojo::Clone(user_verification)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AuthenticatorSelectionCriteria>::value>::type*>
bool AuthenticatorSelectionCriteria::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->authenticator_attachment, other_struct.authenticator_attachment))
    return false;
  if (!mojo::Equals(this->require_resident_key, other_struct.require_resident_key))
    return false;
  if (!mojo::Equals(this->user_verification, other_struct.user_verification))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialCreationOptionsPtr PublicKeyCredentialCreationOptions::Clone() const {
  return New(
      mojo::Clone(relying_party),
      mojo::Clone(user),
      mojo::Clone(challenge),
      mojo::Clone(public_key_parameters),
      mojo::Clone(adjusted_timeout),
      mojo::Clone(exclude_credentials),
      mojo::Clone(authenticator_selection),
      mojo::Clone(attestation),
      mojo::Clone(cable_registration_data),
      mojo::Clone(hmac_create_secret),
      mojo::Clone(protection_policy),
      mojo::Clone(enforce_protection_policy)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialCreationOptions>::value>::type*>
bool PublicKeyCredentialCreationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->relying_party, other_struct.relying_party))
    return false;
  if (!mojo::Equals(this->user, other_struct.user))
    return false;
  if (!mojo::Equals(this->challenge, other_struct.challenge))
    return false;
  if (!mojo::Equals(this->public_key_parameters, other_struct.public_key_parameters))
    return false;
  if (!mojo::Equals(this->adjusted_timeout, other_struct.adjusted_timeout))
    return false;
  if (!mojo::Equals(this->exclude_credentials, other_struct.exclude_credentials))
    return false;
  if (!mojo::Equals(this->authenticator_selection, other_struct.authenticator_selection))
    return false;
  if (!mojo::Equals(this->attestation, other_struct.attestation))
    return false;
  if (!mojo::Equals(this->cable_registration_data, other_struct.cable_registration_data))
    return false;
  if (!mojo::Equals(this->hmac_create_secret, other_struct.hmac_create_secret))
    return false;
  if (!mojo::Equals(this->protection_policy, other_struct.protection_policy))
    return false;
  if (!mojo::Equals(this->enforce_protection_policy, other_struct.enforce_protection_policy))
    return false;
  return true;
}
template <typename StructPtrType>
PublicKeyCredentialDescriptorPtr PublicKeyCredentialDescriptor::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id),
      mojo::Clone(transports)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PublicKeyCredentialDescriptor>::value>::type*>
bool PublicKeyCredentialDescriptor::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->transports, other_struct.transports))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::CommonCredentialInfo::DataView,
                                         ::blink::mojom::blink::CommonCredentialInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::CommonCredentialInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CommonCredentialInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::CommonCredentialInfo::id)& id(
      const ::blink::mojom::blink::CommonCredentialInfoPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::CommonCredentialInfo::raw_id)& raw_id(
      const ::blink::mojom::blink::CommonCredentialInfoPtr& input) {
    return input->raw_id;
  }

  static const decltype(::blink::mojom::blink::CommonCredentialInfo::client_data_json)& client_data_json(
      const ::blink::mojom::blink::CommonCredentialInfoPtr& input) {
    return input->client_data_json;
  }

  static bool Read(::blink::mojom::blink::CommonCredentialInfo::DataView input, ::blink::mojom::blink::CommonCredentialInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::MakeCredentialAuthenticatorResponse::DataView,
                                         ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr> {
  static bool IsNull(const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::info)& info(
      const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->info;
  }

  static const decltype(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::attestation_object)& attestation_object(
      const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->attestation_object;
  }

  static const decltype(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::transports)& transports(
      const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->transports;
  }

  static decltype(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::echo_hmac_create_secret) echo_hmac_create_secret(
      const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->echo_hmac_create_secret;
  }

  static decltype(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::hmac_create_secret) hmac_create_secret(
      const ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr& input) {
    return input->hmac_create_secret;
  }

  static bool Read(::blink::mojom::blink::MakeCredentialAuthenticatorResponse::DataView input, ::blink::mojom::blink::MakeCredentialAuthenticatorResponsePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::GetAssertionAuthenticatorResponse::DataView,
                                         ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr> {
  static bool IsNull(const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::info)& info(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->info;
  }

  static const decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::authenticator_data)& authenticator_data(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->authenticator_data;
  }

  static const decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::signature)& signature(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->signature;
  }

  static const decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::user_handle)& user_handle(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->user_handle;
  }

  static decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::echo_appid_extension) echo_appid_extension(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->echo_appid_extension;
  }

  static decltype(::blink::mojom::blink::GetAssertionAuthenticatorResponse::appid_extension) appid_extension(
      const ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr& input) {
    return input->appid_extension;
  }

  static bool Read(::blink::mojom::blink::GetAssertionAuthenticatorResponse::DataView input, ::blink::mojom::blink::GetAssertionAuthenticatorResponsePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialRpEntity::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialRpEntityPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRpEntity::id)& id(
      const ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRpEntity::name)& name(
      const ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRpEntity::icon)& icon(
      const ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr& input) {
    return input->icon;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialRpEntity::DataView input, ::blink::mojom::blink::PublicKeyCredentialRpEntityPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialUserEntity::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialUserEntityPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialUserEntity::id)& id(
      const ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialUserEntity::name)& name(
      const ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialUserEntity::icon)& icon(
      const ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr& input) {
    return input->icon;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialUserEntity::display_name)& display_name(
      const ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr& input) {
    return input->display_name;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialUserEntity::DataView input, ::blink::mojom::blink::PublicKeyCredentialUserEntityPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialParameters::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialParametersPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialParametersPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialParametersPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::PublicKeyCredentialParameters::type) type(
      const ::blink::mojom::blink::PublicKeyCredentialParametersPtr& input) {
    return input->type;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialParameters::algorithm_identifier) algorithm_identifier(
      const ::blink::mojom::blink::PublicKeyCredentialParametersPtr& input) {
    return input->algorithm_identifier;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialParameters::DataView input, ::blink::mojom::blink::PublicKeyCredentialParametersPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::CableAuthentication::DataView,
                                         ::blink::mojom::blink::CableAuthenticationPtr> {
  static bool IsNull(const ::blink::mojom::blink::CableAuthenticationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CableAuthenticationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::CableAuthentication::version) version(
      const ::blink::mojom::blink::CableAuthenticationPtr& input) {
    return input->version;
  }

  static const decltype(::blink::mojom::blink::CableAuthentication::client_eid)& client_eid(
      const ::blink::mojom::blink::CableAuthenticationPtr& input) {
    return input->client_eid;
  }

  static const decltype(::blink::mojom::blink::CableAuthentication::authenticator_eid)& authenticator_eid(
      const ::blink::mojom::blink::CableAuthenticationPtr& input) {
    return input->authenticator_eid;
  }

  static const decltype(::blink::mojom::blink::CableAuthentication::session_pre_key)& session_pre_key(
      const ::blink::mojom::blink::CableAuthenticationPtr& input) {
    return input->session_pre_key;
  }

  static bool Read(::blink::mojom::blink::CableAuthentication::DataView input, ::blink::mojom::blink::CableAuthenticationPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::CableRegistration::DataView,
                                         ::blink::mojom::blink::CableRegistrationPtr> {
  static bool IsNull(const ::blink::mojom::blink::CableRegistrationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CableRegistrationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::CableRegistration::versions)& versions(
      const ::blink::mojom::blink::CableRegistrationPtr& input) {
    return input->versions;
  }

  static const decltype(::blink::mojom::blink::CableRegistration::relying_party_public_key)& relying_party_public_key(
      const ::blink::mojom::blink::CableRegistrationPtr& input) {
    return input->relying_party_public_key;
  }

  static bool Read(::blink::mojom::blink::CableRegistration::DataView input, ::blink::mojom::blink::CableRegistrationPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialRequestOptions::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::challenge)& challenge(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->challenge;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::adjusted_timeout)& adjusted_timeout(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->adjusted_timeout;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::relying_party_id)& relying_party_id(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->relying_party_id;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::allow_credentials)& allow_credentials(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->allow_credentials;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::user_verification) user_verification(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->user_verification;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::appid)& appid(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->appid;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialRequestOptions::cable_authentication_data)& cable_authentication_data(
      const ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr& input) {
    return input->cable_authentication_data;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialRequestOptions::DataView input, ::blink::mojom::blink::PublicKeyCredentialRequestOptionsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::AuthenticatorSelectionCriteria::DataView,
                                         ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr> {
  static bool IsNull(const ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::AuthenticatorSelectionCriteria::authenticator_attachment) authenticator_attachment(
      const ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr& input) {
    return input->authenticator_attachment;
  }

  static decltype(::blink::mojom::blink::AuthenticatorSelectionCriteria::require_resident_key) require_resident_key(
      const ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr& input) {
    return input->require_resident_key;
  }

  static decltype(::blink::mojom::blink::AuthenticatorSelectionCriteria::user_verification) user_verification(
      const ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr& input) {
    return input->user_verification;
  }

  static bool Read(::blink::mojom::blink::AuthenticatorSelectionCriteria::DataView input, ::blink::mojom::blink::AuthenticatorSelectionCriteriaPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialCreationOptions::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::relying_party)& relying_party(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->relying_party;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::user)& user(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->user;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::challenge)& challenge(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->challenge;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::public_key_parameters)& public_key_parameters(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->public_key_parameters;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::adjusted_timeout)& adjusted_timeout(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->adjusted_timeout;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::exclude_credentials)& exclude_credentials(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->exclude_credentials;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::authenticator_selection)& authenticator_selection(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->authenticator_selection;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::attestation) attestation(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->attestation;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::cable_registration_data)& cable_registration_data(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->cable_registration_data;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::hmac_create_secret) hmac_create_secret(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->hmac_create_secret;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::protection_policy) protection_policy(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->protection_policy;
  }

  static decltype(::blink::mojom::blink::PublicKeyCredentialCreationOptions::enforce_protection_policy) enforce_protection_policy(
      const ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr& input) {
    return input->enforce_protection_policy;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialCreationOptions::DataView input, ::blink::mojom::blink::PublicKeyCredentialCreationOptionsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PublicKeyCredentialDescriptor::DataView,
                                         ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr> {
  static bool IsNull(const ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PublicKeyCredentialDescriptorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::PublicKeyCredentialDescriptor::type) type(
      const ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialDescriptor::id)& id(
      const ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::blink::PublicKeyCredentialDescriptor::transports)& transports(
      const ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr& input) {
    return input->transports;
  }

  static bool Read(::blink::mojom::blink::PublicKeyCredentialDescriptor::DataView input, ::blink::mojom::blink::PublicKeyCredentialDescriptorPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_H_