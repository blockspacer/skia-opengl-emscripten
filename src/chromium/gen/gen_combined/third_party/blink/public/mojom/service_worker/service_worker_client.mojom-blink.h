// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/request_context_frame_type.mojom-blink.h"
#endif // ENABLE_GNET
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
struct blink_mojom_internal_ServiceWorkerClientType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ServiceWorkerClientType& value) {
    using utype = std::underlying_type<::blink::mojom::ServiceWorkerClientType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ServiceWorkerClientType& left, const ::blink::mojom::ServiceWorkerClientType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ServiceWorkerClientType>
    : public GenericHashTraits<::blink::mojom::ServiceWorkerClientType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::ServiceWorkerClientType& value) {
    return value == static_cast<::blink::mojom::ServiceWorkerClientType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::ServiceWorkerClientType& slot, bool) {
    slot = static_cast<::blink::mojom::ServiceWorkerClientType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ServiceWorkerClientType& value) {
    return value == static_cast<::blink::mojom::ServiceWorkerClientType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





class PLATFORM_EXPORT ServiceWorkerClientQueryOptions {
 public:
  using DataView = ServiceWorkerClientQueryOptionsDataView;
  using Data_ = internal::ServiceWorkerClientQueryOptions_Data;

  template <typename... Args>
  static ServiceWorkerClientQueryOptionsPtr New(Args&&... args) {
    return ServiceWorkerClientQueryOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerClientQueryOptionsPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerClientQueryOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerClientQueryOptions>::Convert(*this);
  }


  ServiceWorkerClientQueryOptions();

  ServiceWorkerClientQueryOptions(
      bool include_uncontrolled,
      ServiceWorkerClientType client_type);

  ~ServiceWorkerClientQueryOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerClientQueryOptionsPtr>
  ServiceWorkerClientQueryOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerClientQueryOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerClientQueryOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerClientQueryOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerClientQueryOptions_UnserializedMessageContext<
            UserType, ServiceWorkerClientQueryOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerClientQueryOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerClientQueryOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerClientQueryOptions_UnserializedMessageContext<
            UserType, ServiceWorkerClientQueryOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerClientQueryOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool include_uncontrolled;
  
  ServiceWorkerClientType client_type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};









class PLATFORM_EXPORT ServiceWorkerClientInfo {
 public:
  using DataView = ServiceWorkerClientInfoDataView;
  using Data_ = internal::ServiceWorkerClientInfo_Data;

  template <typename... Args>
  static ServiceWorkerClientInfoPtr New(Args&&... args) {
    return ServiceWorkerClientInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerClientInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerClientInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerClientInfo>::Convert(*this);
  }


  ServiceWorkerClientInfo();

  ServiceWorkerClientInfo(
      const ::blink::KURL& url,
      ::network::mojom::blink::RequestContextFrameType frame_type,
      const WTF::String& client_uuid,
      ServiceWorkerClientType client_type,
      bool page_hidden,
      bool is_focused,
      base::TimeTicks last_focus_time,
      base::TimeTicks creation_time);

  ~ServiceWorkerClientInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerClientInfoPtr>
  ServiceWorkerClientInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ServiceWorkerClientInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerClientInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerClientInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerClientInfo_UnserializedMessageContext<
            UserType, ServiceWorkerClientInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ServiceWorkerClientInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerClientInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerClientInfo_UnserializedMessageContext<
            UserType, ServiceWorkerClientInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerClientInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL url;
  
  ::network::mojom::blink::RequestContextFrameType frame_type;
  
  WTF::String client_uuid;
  
  ServiceWorkerClientType client_type;
  
  bool page_hidden;
  
  bool is_focused;
  
  base::TimeTicks last_focus_time;
  
  base::TimeTicks creation_time;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ServiceWorkerClientQueryOptionsPtr ServiceWorkerClientQueryOptions::Clone() const {
  return New(
      mojo::Clone(include_uncontrolled),
      mojo::Clone(client_type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerClientQueryOptions>::value>::type*>
bool ServiceWorkerClientQueryOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->include_uncontrolled, other_struct.include_uncontrolled))
    return false;
  if (!mojo::Equals(this->client_type, other_struct.client_type))
    return false;
  return true;
}
template <typename StructPtrType>
ServiceWorkerClientInfoPtr ServiceWorkerClientInfo::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(frame_type),
      mojo::Clone(client_uuid),
      mojo::Clone(client_type),
      mojo::Clone(page_hidden),
      mojo::Clone(is_focused),
      mojo::Clone(last_focus_time),
      mojo::Clone(creation_time)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ServiceWorkerClientInfo>::value>::type*>
bool ServiceWorkerClientInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->frame_type, other_struct.frame_type))
    return false;
  if (!mojo::Equals(this->client_uuid, other_struct.client_uuid))
    return false;
  if (!mojo::Equals(this->client_type, other_struct.client_type))
    return false;
  if (!mojo::Equals(this->page_hidden, other_struct.page_hidden))
    return false;
  if (!mojo::Equals(this->is_focused, other_struct.is_focused))
    return false;
  if (!mojo::Equals(this->last_focus_time, other_struct.last_focus_time))
    return false;
  if (!mojo::Equals(this->creation_time, other_struct.creation_time))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerClientQueryOptions::DataView,
                                         ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ServiceWorkerClientQueryOptions::include_uncontrolled) include_uncontrolled(
      const ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr& input) {
    return input->include_uncontrolled;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerClientQueryOptions::client_type) client_type(
      const ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr& input) {
    return input->client_type;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerClientQueryOptions::DataView input, ::blink::mojom::blink::ServiceWorkerClientQueryOptionsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerClientInfo::DataView,
                                         ::blink::mojom::blink::ServiceWorkerClientInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerClientInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ServiceWorkerClientInfo::url)& url(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerClientInfo::frame_type) frame_type(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->frame_type;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerClientInfo::client_uuid)& client_uuid(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->client_uuid;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerClientInfo::client_type) client_type(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->client_type;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerClientInfo::page_hidden) page_hidden(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->page_hidden;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerClientInfo::is_focused) is_focused(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->is_focused;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerClientInfo::last_focus_time)& last_focus_time(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->last_focus_time;
  }

  static const decltype(::blink::mojom::blink::ServiceWorkerClientInfo::creation_time)& creation_time(
      const ::blink::mojom::blink::ServiceWorkerClientInfoPtr& input) {
    return input->creation_time;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerClientInfo::DataView input, ::blink::mojom::blink::ServiceWorkerClientInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_BLINK_H_
