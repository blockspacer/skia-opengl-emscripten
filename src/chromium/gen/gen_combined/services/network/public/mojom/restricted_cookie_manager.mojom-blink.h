// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/restricted_cookie_manager.mojom-shared.h"
#include "services/network/public/mojom/restricted_cookie_manager.mojom-blink-forward.h"
#include "services/network/public/mojom/cookie_manager.mojom-blink.h"
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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_CookieMatchType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::CookieMatchType& value) {
    using utype = std::underlying_type<::network::mojom::CookieMatchType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::CookieMatchType& left, const ::network::mojom::CookieMatchType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::CookieMatchType>
    : public GenericHashTraits<::network::mojom::CookieMatchType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::CookieMatchType& value) {
    return value == static_cast<::network::mojom::CookieMatchType>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::CookieMatchType& slot, bool) {
    slot = static_cast<::network::mojom::CookieMatchType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::CookieMatchType& value) {
    return value == static_cast<::network::mojom::CookieMatchType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class RestrictedCookieManagerProxy;

template <typename ImplRefTraits>
class RestrictedCookieManagerStub;

class RestrictedCookieManagerRequestValidator;
class RestrictedCookieManagerResponseValidator;


class BLINK_PLATFORM_EXPORT RestrictedCookieManager
    : public RestrictedCookieManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RestrictedCookieManagerInterfaceBase;
  using Proxy_ = RestrictedCookieManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = RestrictedCookieManagerStub<ImplRefTraits>;

  using RequestValidator_ = RestrictedCookieManagerRequestValidator;
  using ResponseValidator_ = RestrictedCookieManagerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetAllForUrlMinVersion = 0,
    kSetCanonicalCookieMinVersion = 0,
    kAddChangeListenerMinVersion = 0,
  };
  virtual ~RestrictedCookieManager() {}


  using GetAllForUrlCallback = base::OnceCallback<void(const WTF::Vector<::blink::WebCanonicalCookie>&)>;
  
  virtual void GetAllForUrl(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) = 0;


  using SetCanonicalCookieCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, SetCanonicalCookieCallback callback) = 0;


  using AddChangeListenerCallback = base::OnceCallback<void()>;
  
  virtual void AddChangeListener(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener, AddChangeListenerCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT RestrictedCookieManagerProxy
    : public RestrictedCookieManager {
 public:
  using InterfaceType = RestrictedCookieManager;

  explicit RestrictedCookieManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAllForUrl(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, CookieManagerGetOptionsPtr options, GetAllForUrlCallback callback) final;
  void SetCanonicalCookie(const ::blink::WebCanonicalCookie& cookie, const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, SetCanonicalCookieCallback callback) final;
  void AddChangeListener(const ::blink::KURL& url, const ::blink::KURL& site_for_cookies, ::network::mojom::blink::CookieChangeListenerPtr listener, AddChangeListenerCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT RestrictedCookieManagerStubDispatch {
 public:
  static bool Accept(RestrictedCookieManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RestrictedCookieManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RestrictedCookieManager>>
class RestrictedCookieManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RestrictedCookieManagerStub() {}
  ~RestrictedCookieManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RestrictedCookieManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RestrictedCookieManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT RestrictedCookieManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT RestrictedCookieManagerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class BLINK_PLATFORM_EXPORT CookieManagerGetOptions {
 public:
  using DataView = CookieManagerGetOptionsDataView;
  using Data_ = internal::CookieManagerGetOptions_Data;

  template <typename... Args>
  static CookieManagerGetOptionsPtr New(Args&&... args) {
    return CookieManagerGetOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieManagerGetOptionsPtr From(const U& u) {
    return mojo::TypeConverter<CookieManagerGetOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieManagerGetOptions>::Convert(*this);
  }


  CookieManagerGetOptions();

  CookieManagerGetOptions(
      const WTF::String& name,
      CookieMatchType match_type);

  ~CookieManagerGetOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieManagerGetOptionsPtr>
  CookieManagerGetOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, CookieManagerGetOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieManagerGetOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieManagerGetOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieManagerGetOptions_UnserializedMessageContext<
            UserType, CookieManagerGetOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<CookieManagerGetOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CookieManagerGetOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieManagerGetOptions_UnserializedMessageContext<
            UserType, CookieManagerGetOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieManagerGetOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  CookieMatchType match_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
CookieManagerGetOptionsPtr CookieManagerGetOptions::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(match_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, CookieManagerGetOptions>::value>::type*>
bool CookieManagerGetOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->match_type, other_struct.match_type))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CookieManagerGetOptions::DataView,
                                         ::network::mojom::blink::CookieManagerGetOptionsPtr> {
  static bool IsNull(const ::network::mojom::blink::CookieManagerGetOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CookieManagerGetOptionsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::CookieManagerGetOptions::name)& name(
      const ::network::mojom::blink::CookieManagerGetOptionsPtr& input) {
    return input->name;
  }

  static decltype(::network::mojom::blink::CookieManagerGetOptions::match_type) match_type(
      const ::network::mojom::blink::CookieManagerGetOptionsPtr& input) {
    return input->match_type;
  }

  static bool Read(::network::mojom::blink::CookieManagerGetOptions::DataView input, ::network::mojom::blink::CookieManagerGetOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_RESTRICTED_COOKIE_MANAGER_MOJOM_BLINK_H_