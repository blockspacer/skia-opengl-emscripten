// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_

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
#include "third_party/blink/public/mojom/cookie_store/cookie_store.mojom-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/restricted_cookie_manager.mojom.h"
#endif // ENABLE_GNET
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

class CookieStoreProxy;

template <typename ImplRefTraits>
class CookieStoreStub;

class CookieStoreRequestValidator;
class CookieStoreResponseValidator;


class BLINK_COMMON_EXPORT CookieStore
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
  
  virtual void AppendSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) = 0;


  using GetSubscriptionsCallback = base::OnceCallback<void(std::vector<CookieChangeSubscriptionPtr>, bool)>;
  
  virtual void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) = 0;
};

class BLINK_COMMON_EXPORT CookieStoreProxy
    : public CookieStore {
 public:
  using InterfaceType = CookieStore;

  explicit CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  void AppendSubscriptions(int64_t service_worker_registration_id, std::vector<CookieChangeSubscriptionPtr> subscriptions, AppendSubscriptionsCallback callback) final;
  void GetSubscriptions(int64_t service_worker_registration_id, GetSubscriptionsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT CookieStoreStubDispatch {
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
class BLINK_COMMON_EXPORT CookieStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT CookieStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT CookieChangeSubscription {
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
      const GURL& url,
      ::network::mojom::CookieMatchType match_type,
      const std::string& name);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieChangeSubscription::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  GURL url;
  
  ::network::mojom::CookieMatchType match_type;
  
  std::string name;

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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CookieChangeSubscription::DataView,
                                         ::blink::mojom::CookieChangeSubscriptionPtr> {
  static bool IsNull(const ::blink::mojom::CookieChangeSubscriptionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CookieChangeSubscriptionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::CookieChangeSubscription::url)& url(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::CookieChangeSubscription::match_type) match_type(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->match_type;
  }

  static const decltype(::blink::mojom::CookieChangeSubscription::name)& name(
      const ::blink::mojom::CookieChangeSubscriptionPtr& input) {
    return input->name;
  }

  static bool Read(::blink::mojom::CookieChangeSubscription::DataView input, ::blink::mojom::CookieChangeSubscriptionPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_STORE_COOKIE_STORE_MOJOM_H_
