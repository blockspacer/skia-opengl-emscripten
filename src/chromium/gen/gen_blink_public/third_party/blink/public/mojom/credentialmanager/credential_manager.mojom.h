// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_H_

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
#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-forward.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "components/password_manager/core/common/credential_manager_types.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class CredentialManagerProxy;

template <typename ImplRefTraits>
class CredentialManagerStub;

class CredentialManagerRequestValidator;
class CredentialManagerResponseValidator;


class BLINK_COMMON_EXPORT CredentialManager
    : public CredentialManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CredentialManagerInterfaceBase;
  using Proxy_ = CredentialManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = CredentialManagerStub<ImplRefTraits>;

  using RequestValidator_ = CredentialManagerRequestValidator;
  using ResponseValidator_ = CredentialManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStoreMinVersion = 0,
    kPreventSilentAccessMinVersion = 0,
    kGetMinVersion = 0,
  };
  virtual ~CredentialManager() {}


  using StoreCallback = base::OnceCallback<void()>;
  
  virtual void Store(const password_manager::CredentialInfo& credential, StoreCallback callback) = 0;


  using PreventSilentAccessCallback = base::OnceCallback<void()>;
  
  virtual void PreventSilentAccess(PreventSilentAccessCallback callback) = 0;


  using GetCallback = base::OnceCallback<void(password_manager::CredentialManagerError, const base::Optional<password_manager::CredentialInfo>&)>;
  
  virtual void Get(password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, GetCallback callback) = 0;
};

class BLINK_COMMON_EXPORT CredentialManagerProxy
    : public CredentialManager {
 public:
  using InterfaceType = CredentialManager;

  explicit CredentialManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Store(const password_manager::CredentialInfo& credential, StoreCallback callback) final;
  void PreventSilentAccess(PreventSilentAccessCallback callback) final;
  void Get(password_manager::CredentialMediationRequirement mediation, bool include_passwords, const std::vector<GURL>& federations, GetCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT CredentialManagerStubDispatch {
 public:
  static bool Accept(CredentialManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CredentialManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CredentialManager>>
class CredentialManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CredentialManagerStub() {}
  ~CredentialManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CredentialManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CredentialManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT CredentialManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT CredentialManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT CredentialInfo {
 public:
  using DataView = CredentialInfoDataView;
  using Data_ = internal::CredentialInfo_Data;

  template <typename... Args>
  static CredentialInfoPtr New(Args&&... args) {
    return CredentialInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CredentialInfoPtr From(const U& u) {
    return mojo::TypeConverter<CredentialInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CredentialInfo>::Convert(*this);
  }


  CredentialInfo();

  CredentialInfo(
      password_manager::CredentialType type,
      const base::Optional<base::string16>& id,
      const base::Optional<base::string16>& name,
      const GURL& icon,
      const base::Optional<base::string16>& password,
      const url::Origin& federation);

  ~CredentialInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CredentialInfoPtr>
  CredentialInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CredentialInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CredentialInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CredentialInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CredentialInfo_UnserializedMessageContext<
            UserType, CredentialInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CredentialInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CredentialInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CredentialInfo_UnserializedMessageContext<
            UserType, CredentialInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CredentialInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  password_manager::CredentialType type;
  
  base::Optional<base::string16> id;
  
  base::Optional<base::string16> name;
  
  GURL icon;
  
  base::Optional<base::string16> password;
  
  url::Origin federation;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CredentialInfoPtr CredentialInfo::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(icon),
      mojo::Clone(password),
      mojo::Clone(federation)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CredentialInfo>::value>::type*>
bool CredentialInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->icon, other_struct.icon))
    return false;
  if (!mojo::Equals(this->password, other_struct.password))
    return false;
  if (!mojo::Equals(this->federation, other_struct.federation))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CredentialInfo::DataView,
                                         ::blink::mojom::CredentialInfoPtr> {
  static bool IsNull(const ::blink::mojom::CredentialInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CredentialInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::CredentialInfo::type) type(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::CredentialInfo::id)& id(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::CredentialInfo::name)& name(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::CredentialInfo::icon)& icon(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->icon;
  }

  static const decltype(::blink::mojom::CredentialInfo::password)& password(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->password;
  }

  static const decltype(::blink::mojom::CredentialInfo::federation)& federation(
      const ::blink::mojom::CredentialInfoPtr& input) {
    return input->federation;
  }

  static bool Read(::blink::mojom::CredentialInfo::DataView input, ::blink::mojom::CredentialInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CREDENTIALMANAGER_CREDENTIAL_MANAGER_MOJOM_H_