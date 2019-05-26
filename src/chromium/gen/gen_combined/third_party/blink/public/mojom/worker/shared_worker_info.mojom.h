// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-forward.h"
#include "third_party/blink/public/mojom/net/ip_address_space.mojom.h"
#include "third_party/blink/public/mojom/csp/content_security_policy.mojom.h"
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








class BLINK_COMMON_EXPORT SharedWorkerInfo {
 public:
  using DataView = SharedWorkerInfoDataView;
  using Data_ = internal::SharedWorkerInfo_Data;

  template <typename... Args>
  static SharedWorkerInfoPtr New(Args&&... args) {
    return SharedWorkerInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SharedWorkerInfoPtr From(const U& u) {
    return mojo::TypeConverter<SharedWorkerInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SharedWorkerInfo>::Convert(*this);
  }


  SharedWorkerInfo();

  SharedWorkerInfo(
      const GURL& url,
      const std::string& name,
      const std::string& content_security_policy,
      ::blink::mojom::ContentSecurityPolicyType content_security_policy_type,
      ::blink::mojom::IPAddressSpace creation_address_space);

  ~SharedWorkerInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SharedWorkerInfoPtr>
  SharedWorkerInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SharedWorkerInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SharedWorkerInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SharedWorkerInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SharedWorkerInfo_UnserializedMessageContext<
            UserType, SharedWorkerInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SharedWorkerInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SharedWorkerInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SharedWorkerInfo_UnserializedMessageContext<
            UserType, SharedWorkerInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SharedWorkerInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  GURL url;
  
  std::string name;
  
  std::string content_security_policy;
  
  ::blink::mojom::ContentSecurityPolicyType content_security_policy_type;
  
  ::blink::mojom::IPAddressSpace creation_address_space;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
SharedWorkerInfoPtr SharedWorkerInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(name),
      mojo::Clone(content_security_policy),
      mojo::Clone(content_security_policy_type),
      mojo::Clone(creation_address_space)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SharedWorkerInfo>::value>::type*>
bool SharedWorkerInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->content_security_policy, other_struct.content_security_policy))
    return false;
  if (!mojo::Equals(this->content_security_policy_type, other_struct.content_security_policy_type))
    return false;
  if (!mojo::Equals(this->creation_address_space, other_struct.creation_address_space))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::SharedWorkerInfo::DataView,
                                         ::blink::mojom::SharedWorkerInfoPtr> {
  static bool IsNull(const ::blink::mojom::SharedWorkerInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::SharedWorkerInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::SharedWorkerInfo::url)& url(
      const ::blink::mojom::SharedWorkerInfoPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::SharedWorkerInfo::name)& name(
      const ::blink::mojom::SharedWorkerInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::SharedWorkerInfo::content_security_policy)& content_security_policy(
      const ::blink::mojom::SharedWorkerInfoPtr& input) {
    return input->content_security_policy;
  }

  static decltype(::blink::mojom::SharedWorkerInfo::content_security_policy_type) content_security_policy_type(
      const ::blink::mojom::SharedWorkerInfoPtr& input) {
    return input->content_security_policy_type;
  }

  static decltype(::blink::mojom::SharedWorkerInfo::creation_address_space) creation_address_space(
      const ::blink::mojom::SharedWorkerInfoPtr& input) {
    return input->creation_address_space;
  }

  static bool Read(::blink::mojom::SharedWorkerInfo::DataView input, ::blink::mojom::SharedWorkerInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_INFO_MOJOM_H_