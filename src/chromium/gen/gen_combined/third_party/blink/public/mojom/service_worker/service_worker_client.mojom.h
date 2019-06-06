// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/request_context_frame_type.mojom.h"
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





class BLINK_COMMON_EXPORT ServiceWorkerClientQueryOptions {
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerClientQueryOptions::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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









class BLINK_COMMON_EXPORT ServiceWorkerClientInfo {
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
      const GURL& url,
      ::network::mojom::RequestContextFrameType frame_type,
      const std::string& client_uuid,
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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerClientInfo::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  GURL url;
  
  ::network::mojom::RequestContextFrameType frame_type;
  
  std::string client_uuid;
  
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ServiceWorkerClientQueryOptions::DataView,
                                         ::blink::mojom::ServiceWorkerClientQueryOptionsPtr> {
  static bool IsNull(const ::blink::mojom::ServiceWorkerClientQueryOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ServiceWorkerClientQueryOptionsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::ServiceWorkerClientQueryOptions::include_uncontrolled) include_uncontrolled(
      const ::blink::mojom::ServiceWorkerClientQueryOptionsPtr& input) {
    return input->include_uncontrolled;
  }

  static decltype(::blink::mojom::ServiceWorkerClientQueryOptions::client_type) client_type(
      const ::blink::mojom::ServiceWorkerClientQueryOptionsPtr& input) {
    return input->client_type;
  }

  static bool Read(::blink::mojom::ServiceWorkerClientQueryOptions::DataView input, ::blink::mojom::ServiceWorkerClientQueryOptionsPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ServiceWorkerClientInfo::DataView,
                                         ::blink::mojom::ServiceWorkerClientInfoPtr> {
  static bool IsNull(const ::blink::mojom::ServiceWorkerClientInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ServiceWorkerClientInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::ServiceWorkerClientInfo::url)& url(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->url;
  }

  static decltype(::blink::mojom::ServiceWorkerClientInfo::frame_type) frame_type(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->frame_type;
  }

  static const decltype(::blink::mojom::ServiceWorkerClientInfo::client_uuid)& client_uuid(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->client_uuid;
  }

  static decltype(::blink::mojom::ServiceWorkerClientInfo::client_type) client_type(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->client_type;
  }

  static decltype(::blink::mojom::ServiceWorkerClientInfo::page_hidden) page_hidden(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->page_hidden;
  }

  static decltype(::blink::mojom::ServiceWorkerClientInfo::is_focused) is_focused(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->is_focused;
  }

  static const decltype(::blink::mojom::ServiceWorkerClientInfo::last_focus_time)& last_focus_time(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->last_focus_time;
  }

  static const decltype(::blink::mojom::ServiceWorkerClientInfo::creation_time)& creation_time(
      const ::blink::mojom::ServiceWorkerClientInfoPtr& input) {
    return input->creation_time;
  }

  static bool Read(::blink::mojom::ServiceWorkerClientInfo::DataView input, ::blink::mojom::ServiceWorkerClientInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_H_
