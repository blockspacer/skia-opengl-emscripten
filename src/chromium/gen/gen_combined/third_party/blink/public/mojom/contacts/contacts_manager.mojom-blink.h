// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/contacts/contacts_manager.mojom-blink-forward.h"

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

class ContactsManagerProxy;

template <typename ImplRefTraits>
class ContactsManagerStub;

class ContactsManagerRequestValidator;
class ContactsManagerResponseValidator;


class PLATFORM_EXPORT ContactsManager
    : public ContactsManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ContactsManagerInterfaceBase;
  using Proxy_ = ContactsManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = ContactsManagerStub<ImplRefTraits>;

  using RequestValidator_ = ContactsManagerRequestValidator;
  using ResponseValidator_ = ContactsManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kSelectMinVersion = 0,
  };
  virtual ~ContactsManager() {}


  using SelectCallback = base::OnceCallback<void(base::Optional<WTF::Vector<ContactInfoPtr>>)>;
  
  virtual void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, SelectCallback callback) = 0;
};

class PLATFORM_EXPORT ContactsManagerProxy
    : public ContactsManager {
 public:
  using InterfaceType = ContactsManager;

  explicit ContactsManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Select(bool multiple, bool include_names, bool include_emails, bool include_tel, SelectCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT ContactsManagerStubDispatch {
 public:
  static bool Accept(ContactsManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ContactsManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ContactsManager>>
class ContactsManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ContactsManagerStub() {}
  ~ContactsManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContactsManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ContactsManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT ContactsManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT ContactsManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT ContactInfo {
 public:
  using DataView = ContactInfoDataView;
  using Data_ = internal::ContactInfo_Data;

  template <typename... Args>
  static ContactInfoPtr New(Args&&... args) {
    return ContactInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ContactInfoPtr From(const U& u) {
    return mojo::TypeConverter<ContactInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ContactInfo>::Convert(*this);
  }


  ContactInfo();

  ContactInfo(
      const base::Optional<WTF::Vector<WTF::String>>& name,
      const base::Optional<WTF::Vector<WTF::String>>& email,
      const base::Optional<WTF::Vector<WTF::String>>& tel);

  ~ContactInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ContactInfoPtr>
  ContactInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ContactInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ContactInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ContactInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ContactInfo_UnserializedMessageContext<
            UserType, ContactInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ContactInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ContactInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ContactInfo_UnserializedMessageContext<
            UserType, ContactInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ContactInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::Optional<WTF::Vector<WTF::String>> name;
  
  base::Optional<WTF::Vector<WTF::String>> email;
  
  base::Optional<WTF::Vector<WTF::String>> tel;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ContactInfoPtr ContactInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(email),
      mojo::Clone(tel)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ContactInfo>::value>::type*>
bool ContactInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->email, other_struct.email))
    return false;
  if (!mojo::Equals(this->tel, other_struct.tel))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ContactInfo::DataView,
                                         ::blink::mojom::blink::ContactInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ContactInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ContactInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ContactInfo::name)& name(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::email)& email(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->email;
  }

  static const decltype(::blink::mojom::blink::ContactInfo::tel)& tel(
      const ::blink::mojom::blink::ContactInfoPtr& input) {
    return input->tel;
  }

  static bool Read(::blink::mojom::blink::ContactInfo::DataView input, ::blink::mojom::blink::ContactInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTACTS_CONTACTS_MANAGER_MOJOM_BLINK_H_