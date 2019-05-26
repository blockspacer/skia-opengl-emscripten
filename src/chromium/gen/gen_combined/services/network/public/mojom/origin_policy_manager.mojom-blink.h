// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_H_

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
#include "services/network/public/mojom/origin_policy_manager.mojom-shared.h"
#include "services/network/public/mojom/origin_policy_manager.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink.h"
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
struct network_mojom_internal_OriginPolicyState_DataHashFn {
  static unsigned GetHash(const ::network::mojom::OriginPolicyState& value) {
    using utype = std::underlying_type<::network::mojom::OriginPolicyState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::OriginPolicyState& left, const ::network::mojom::OriginPolicyState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::OriginPolicyState>
    : public GenericHashTraits<::network::mojom::OriginPolicyState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::network::mojom::OriginPolicyState& value) {
    return value == static_cast<::network::mojom::OriginPolicyState>(-1000000);
  }
  static void ConstructDeletedValue(::network::mojom::OriginPolicyState& slot, bool) {
    slot = static_cast<::network::mojom::OriginPolicyState>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::OriginPolicyState& value) {
    return value == static_cast<::network::mojom::OriginPolicyState>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class OriginPolicyManagerProxy;

template <typename ImplRefTraits>
class OriginPolicyManagerStub;

class OriginPolicyManagerRequestValidator;


class BLINK_PLATFORM_EXPORT OriginPolicyManager
    : public OriginPolicyManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = OriginPolicyManagerInterfaceBase;
  using Proxy_ = OriginPolicyManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = OriginPolicyManagerStub<ImplRefTraits>;

  using RequestValidator_ = OriginPolicyManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
  };
  virtual ~OriginPolicyManager() {}
};

class BLINK_PLATFORM_EXPORT OriginPolicyManagerProxy
    : public OriginPolicyManager {
 public:
  using InterfaceType = OriginPolicyManager;

  explicit OriginPolicyManagerProxy(mojo::MessageReceiverWithResponder* receiver);

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT OriginPolicyManagerStubDispatch {
 public:
  static bool Accept(OriginPolicyManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      OriginPolicyManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<OriginPolicyManager>>
class OriginPolicyManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  OriginPolicyManagerStub() {}
  ~OriginPolicyManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OriginPolicyManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return OriginPolicyManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT OriginPolicyManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_PLATFORM_EXPORT OriginPolicyContents {
 public:
  using DataView = OriginPolicyContentsDataView;
  using Data_ = internal::OriginPolicyContents_Data;

  template <typename... Args>
  static OriginPolicyContentsPtr New(Args&&... args) {
    return OriginPolicyContentsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OriginPolicyContentsPtr From(const U& u) {
    return mojo::TypeConverter<OriginPolicyContentsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OriginPolicyContents>::Convert(*this);
  }


  OriginPolicyContents();

  OriginPolicyContents(
      const WTF::Vector<WTF::String>& features,
      const WTF::Vector<WTF::String>& content_security_policies,
      const WTF::Vector<WTF::String>& content_security_policies_report_only);

  ~OriginPolicyContents();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OriginPolicyContentsPtr>
  OriginPolicyContentsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OriginPolicyContents>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OriginPolicyContents::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OriginPolicyContents::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OriginPolicyContents_UnserializedMessageContext<
            UserType, OriginPolicyContents::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OriginPolicyContents::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return OriginPolicyContents::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OriginPolicyContents_UnserializedMessageContext<
            UserType, OriginPolicyContents::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OriginPolicyContents::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<WTF::String> features;
  
  WTF::Vector<WTF::String> content_security_policies;
  
  WTF::Vector<WTF::String> content_security_policies_report_only;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT OriginPolicy {
 public:
  using DataView = OriginPolicyDataView;
  using Data_ = internal::OriginPolicy_Data;

  template <typename... Args>
  static OriginPolicyPtr New(Args&&... args) {
    return OriginPolicyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OriginPolicyPtr From(const U& u) {
    return mojo::TypeConverter<OriginPolicyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OriginPolicy>::Convert(*this);
  }


  OriginPolicy();

  OriginPolicy(
      OriginPolicyState state,
      const ::blink::KURL& policy_url,
      OriginPolicyContentsPtr contents);

  ~OriginPolicy();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OriginPolicyPtr>
  OriginPolicyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OriginPolicy>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OriginPolicy::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OriginPolicy::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OriginPolicy_UnserializedMessageContext<
            UserType, OriginPolicy::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OriginPolicy::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return OriginPolicy::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OriginPolicy_UnserializedMessageContext<
            UserType, OriginPolicy::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OriginPolicy::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  OriginPolicyState state;
  
  ::blink::KURL policy_url;
  
  OriginPolicyContentsPtr contents;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(OriginPolicy);
};

template <typename StructPtrType>
OriginPolicyContentsPtr OriginPolicyContents::Clone() const {
  return New(
      mojo::Clone(features),
      mojo::Clone(content_security_policies),
      mojo::Clone(content_security_policies_report_only)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OriginPolicyContents>::value>::type*>
bool OriginPolicyContents::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->features, other_struct.features))
    return false;
  if (!mojo::Equals(this->content_security_policies, other_struct.content_security_policies))
    return false;
  if (!mojo::Equals(this->content_security_policies_report_only, other_struct.content_security_policies_report_only))
    return false;
  return true;
}
template <typename StructPtrType>
OriginPolicyPtr OriginPolicy::Clone() const {
  return New(
      mojo::Clone(state),
      mojo::Clone(policy_url),
      mojo::Clone(contents)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OriginPolicy>::value>::type*>
bool OriginPolicy::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->policy_url, other_struct.policy_url))
    return false;
  if (!mojo::Equals(this->contents, other_struct.contents))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::OriginPolicyContents::DataView,
                                         ::network::mojom::blink::OriginPolicyContentsPtr> {
  static bool IsNull(const ::network::mojom::blink::OriginPolicyContentsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::OriginPolicyContentsPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::OriginPolicyContents::features)& features(
      const ::network::mojom::blink::OriginPolicyContentsPtr& input) {
    return input->features;
  }

  static const decltype(::network::mojom::blink::OriginPolicyContents::content_security_policies)& content_security_policies(
      const ::network::mojom::blink::OriginPolicyContentsPtr& input) {
    return input->content_security_policies;
  }

  static const decltype(::network::mojom::blink::OriginPolicyContents::content_security_policies_report_only)& content_security_policies_report_only(
      const ::network::mojom::blink::OriginPolicyContentsPtr& input) {
    return input->content_security_policies_report_only;
  }

  static bool Read(::network::mojom::blink::OriginPolicyContents::DataView input, ::network::mojom::blink::OriginPolicyContentsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::OriginPolicy::DataView,
                                         ::network::mojom::blink::OriginPolicyPtr> {
  static bool IsNull(const ::network::mojom::blink::OriginPolicyPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::OriginPolicyPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::OriginPolicy::state) state(
      const ::network::mojom::blink::OriginPolicyPtr& input) {
    return input->state;
  }

  static const decltype(::network::mojom::blink::OriginPolicy::policy_url)& policy_url(
      const ::network::mojom::blink::OriginPolicyPtr& input) {
    return input->policy_url;
  }

  static const decltype(::network::mojom::blink::OriginPolicy::contents)& contents(
      const ::network::mojom::blink::OriginPolicyPtr& input) {
    return input->contents;
  }

  static bool Read(::network::mojom::blink::OriginPolicy::DataView input, ::network::mojom::blink::OriginPolicyPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_BLINK_H_