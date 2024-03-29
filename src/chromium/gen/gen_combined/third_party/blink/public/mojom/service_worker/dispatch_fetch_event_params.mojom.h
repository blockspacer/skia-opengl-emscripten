// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_

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
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom.h"
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









class BLINK_COMMON_EXPORT FetchEventPreloadHandle {
 public:
  using DataView = FetchEventPreloadHandleDataView;
  using Data_ = internal::FetchEventPreloadHandle_Data;

  template <typename... Args>
  static FetchEventPreloadHandlePtr New(Args&&... args) {
    return FetchEventPreloadHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchEventPreloadHandlePtr From(const U& u) {
    return mojo::TypeConverter<FetchEventPreloadHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchEventPreloadHandle>::Convert(*this);
  }


  FetchEventPreloadHandle();

  FetchEventPreloadHandle(
      ::network::mojom::URLLoaderPtrInfo url_loader,
      ::network::mojom::URLLoaderClientRequest url_loader_client_request);

  ~FetchEventPreloadHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchEventPreloadHandlePtr>
  FetchEventPreloadHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FetchEventPreloadHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FetchEventPreloadHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchEventPreloadHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchEventPreloadHandle_UnserializedMessageContext<
            UserType, FetchEventPreloadHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FetchEventPreloadHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FetchEventPreloadHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchEventPreloadHandle_UnserializedMessageContext<
            UserType, FetchEventPreloadHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchEventPreloadHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::network::mojom::URLLoaderPtrInfo url_loader;
  
  ::network::mojom::URLLoaderClientRequest url_loader_client_request;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(FetchEventPreloadHandle);
};





class BLINK_COMMON_EXPORT DispatchFetchEventParams {
 public:
  using DataView = DispatchFetchEventParamsDataView;
  using Data_ = internal::DispatchFetchEventParams_Data;

  template <typename... Args>
  static DispatchFetchEventParamsPtr New(Args&&... args) {
    return DispatchFetchEventParamsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DispatchFetchEventParamsPtr From(const U& u) {
    return mojo::TypeConverter<DispatchFetchEventParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DispatchFetchEventParams>::Convert(*this);
  }


  DispatchFetchEventParams();

  DispatchFetchEventParams(
      ::blink::mojom::FetchAPIRequestPtr request,
      const std::string& client_id,
      FetchEventPreloadHandlePtr preload_handle);

  ~DispatchFetchEventParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DispatchFetchEventParamsPtr>
  DispatchFetchEventParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DispatchFetchEventParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DispatchFetchEventParams::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DispatchFetchEventParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DispatchFetchEventParams_UnserializedMessageContext<
            UserType, DispatchFetchEventParams::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<DispatchFetchEventParams::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DispatchFetchEventParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DispatchFetchEventParams_UnserializedMessageContext<
            UserType, DispatchFetchEventParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DispatchFetchEventParams::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::FetchAPIRequestPtr request;
  
  std::string client_id;
  
  FetchEventPreloadHandlePtr preload_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(DispatchFetchEventParams);
};

template <typename StructPtrType>
FetchEventPreloadHandlePtr FetchEventPreloadHandle::Clone() const {
  return New(
      mojo::Clone(url_loader),
      mojo::Clone(url_loader_client_request)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FetchEventPreloadHandle>::value>::type*>
bool FetchEventPreloadHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_loader, other_struct.url_loader))
    return false;
  if (!mojo::Equals(this->url_loader_client_request, other_struct.url_loader_client_request))
    return false;
  return true;
}
template <typename StructPtrType>
DispatchFetchEventParamsPtr DispatchFetchEventParams::Clone() const {
  return New(
      mojo::Clone(request),
      mojo::Clone(client_id),
      mojo::Clone(preload_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DispatchFetchEventParams>::value>::type*>
bool DispatchFetchEventParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request, other_struct.request))
    return false;
  if (!mojo::Equals(this->client_id, other_struct.client_id))
    return false;
  if (!mojo::Equals(this->preload_handle, other_struct.preload_handle))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FetchEventPreloadHandle::DataView,
                                         ::blink::mojom::FetchEventPreloadHandlePtr> {
  static bool IsNull(const ::blink::mojom::FetchEventPreloadHandlePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FetchEventPreloadHandlePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::FetchEventPreloadHandle::url_loader)& url_loader(
       ::blink::mojom::FetchEventPreloadHandlePtr& input) {
    return input->url_loader;
  }

  static  decltype(::blink::mojom::FetchEventPreloadHandle::url_loader_client_request)& url_loader_client_request(
       ::blink::mojom::FetchEventPreloadHandlePtr& input) {
    return input->url_loader_client_request;
  }

  static bool Read(::blink::mojom::FetchEventPreloadHandle::DataView input, ::blink::mojom::FetchEventPreloadHandlePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::DispatchFetchEventParams::DataView,
                                         ::blink::mojom::DispatchFetchEventParamsPtr> {
  static bool IsNull(const ::blink::mojom::DispatchFetchEventParamsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::DispatchFetchEventParamsPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::DispatchFetchEventParams::request)& request(
       ::blink::mojom::DispatchFetchEventParamsPtr& input) {
    return input->request;
  }

  static const decltype(::blink::mojom::DispatchFetchEventParams::client_id)& client_id(
      const ::blink::mojom::DispatchFetchEventParamsPtr& input) {
    return input->client_id;
  }

  static  decltype(::blink::mojom::DispatchFetchEventParams::preload_handle)& preload_handle(
       ::blink::mojom::DispatchFetchEventParamsPtr& input) {
    return input->preload_handle;
  }

  static bool Read(::blink::mojom::DispatchFetchEventParams::DataView input, ::blink::mojom::DispatchFetchEventParamsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_H_
