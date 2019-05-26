// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-shared.h"
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-blink-forward.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink.h"
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




namespace blink {
namespace mojom {
namespace blink {

class CookieStoreProxy;

template <typename ImplRefTraits>
class CookieStoreStub;

class CookieStoreRequestValidator;
class CookieStoreResponseValidator;


class PLATFORM_EXPORT CookieStore
    : public CookieStoreInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CookieStoreInterfaceBase;
  using Proxy_ = CookieStoreProxy;

  template <typename ImplRefTraits>
  using Stub_ = CookieStoreStub<ImplRefTraits>;

  using RequestValidator_ = CookieStoreRequestValidator;
  using ResponseValidator_ = CookieStoreResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAppendSubscriptionsMinVersion = 0,
    kGetSubscriptionsMinVersion = 0,
  };
  virtual ~CookieStore() {}


  using AppendSubscriptionsCallback = base::OnceCallback<void(bool)>;
  
  virtual void AppendSubscriptions(int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) = 0;


  using GetSubscriptionsCallback = base::OnceCallback<void(WTF::Vector<CookieChangeSubscriptionPtr>, bool)>;
  
  virtual void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) = 0;
};

class PLATFORM_EXPORT CookieStoreProxy
    : public CookieStore {
 public:
  using InterfaceType = CookieStore;

  explicit CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  void AppendSubscriptions(int64_t service_worker_registration_id, WTF::Vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) final;
  void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT CookieStoreStubDispatch {
 public:
  static bool Accept(CookieStore* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CookieStore* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CookieStore>>
class CookieStoreStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CookieStoreStub() {}
  ~CookieStoreStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieStoreStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieStoreStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT CookieStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT CookieStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT CookieChangeSubscription {
 public:
  using DataView = CookieChangeSubscriptionDataView;
  using Data_ = internal::CookieChangeSubscription_Data;

  template <typename... Args>
  static CookieChangeSubscriptionPtr New(Args&&... args) {
    return CookieChangeSubscriptionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieChangeSubscriptionPtr From(const U& u) {
    return mojo::TypeConverter<CookieChangeSubscriptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieChangeSubscription>::Convert(*this);
  }


  CookieChangeSubscription();

  CookieChangeSubscription(
      const ::blink::KURL& url,
      ::network::mojom::blink::CookieMatchType match_type,
      const WTF::String& name);

  ~CookieChangeSubscription();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieChangeSubscriptionPtr>
  CookieChangeSubscriptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieChangeSubscription>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieChangeSubscription::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieChangeSubscription::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieChangeSubscription_UnserializedMessageContext<
            UserType, CookieChangeSubscription::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieChangeSubscription::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CookieChangeSubscription::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieChangeSubscription_UnserializedMessageContext<
            UserType, CookieChangeSubscription::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieChangeSubscription::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  ::network::mojom::blink::CookieMatchType match_type;
  
  WTF::String name;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
CookieChangeSubscriptionPtr CookieChangeSubscription::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(match_type),
      mojo::Clone(name)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieChangeSubscription>::value>::type*>
bool CookieChangeSubscription::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->match_type, other_struct.match_type))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::CookieChangeSubscription::DataView,
                                         ::blink::mojom::blink::CookieChangeSubscriptionPtr> {
  static bool IsNull(const ::blink::mojom::blink::CookieChangeSubscriptionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::CookieChangeSubscriptionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::CookieChangeSubscription::url)& url(
      const ::blink::mojom::blink::CookieChangeSubscriptionPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::CookieChangeSubscription::match_type) match_type(
      const ::blink::mojom::blink::CookieChangeSubscriptionPtr& input) {
    return input->match_type;
  }

  static const decltype(::blink::mojom::blink::CookieChangeSubscription::name)& name(
      const ::blink::mojom::blink::CookieChangeSubscriptionPtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::blink::CookieChangeSubscription::DataView input, ::blink::mojom::blink::CookieChangeSubscriptionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_BLINK_H_