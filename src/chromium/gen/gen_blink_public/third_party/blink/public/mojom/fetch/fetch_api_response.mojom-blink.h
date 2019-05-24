// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-blink.h"
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








class PLATFORM_EXPORT FetchAPIResponse {
 public:
  using DataView = FetchAPIResponseDataView;
  using Data_ = internal::FetchAPIResponse_Data;

  template <typename... Args>
  static FetchAPIResponsePtr New(Args&&... args) {
    return FetchAPIResponsePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchAPIResponsePtr From(const U& u) {
    return mojo::TypeConverter<FetchAPIResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchAPIResponse>::Convert(*this);
  }


  FetchAPIResponse();

  FetchAPIResponse(
      const WTF::Vector<::blink::KURL>& url_list,
      uint16_t status_code,
      const WTF::String& status_text,
      ::network::mojom::blink::FetchResponseType response_type,
      ::network::mojom::blink::FetchResponseSource response_source,
      const WTF::HashMap<WTF::String, WTF::String>& headers,
      const scoped_refptr<::blink::BlobDataHandle>& blob,
      ::blink::mojom::blink::ServiceWorkerResponseError error,
      base::Time response_time,
      const WTF::String& cache_storage_cache_name,
      const WTF::Vector<WTF::String>& cors_exposed_header_names,
      const scoped_refptr<::blink::BlobDataHandle>& side_data_blob);

  ~FetchAPIResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchAPIResponsePtr>
  FetchAPIResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, FetchAPIResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FetchAPIResponse::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchAPIResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchAPIResponse_UnserializedMessageContext<
            UserType, FetchAPIResponse::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<FetchAPIResponse::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FetchAPIResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchAPIResponse_UnserializedMessageContext<
            UserType, FetchAPIResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchAPIResponse::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::Vector<::blink::KURL> url_list;
  
  uint16_t status_code;
  
  WTF::String status_text;
  
  ::network::mojom::blink::FetchResponseType response_type;
  
  ::network::mojom::blink::FetchResponseSource response_source;
  
  WTF::HashMap<WTF::String, WTF::String> headers;
  
  scoped_refptr<::blink::BlobDataHandle> blob;
  
  ::blink::mojom::blink::ServiceWorkerResponseError error;
  
  base::Time response_time;
  
  WTF::String cache_storage_cache_name;
  
  WTF::Vector<WTF::String> cors_exposed_header_names;
  
  scoped_refptr<::blink::BlobDataHandle> side_data_blob;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
FetchAPIResponsePtr FetchAPIResponse::Clone() const {
  return New(
      mojo::Clone(url_list),
      mojo::Clone(status_code),
      mojo::Clone(status_text),
      mojo::Clone(response_type),
      mojo::Clone(response_source),
      mojo::Clone(headers),
      mojo::Clone(blob),
      mojo::Clone(error),
      mojo::Clone(response_time),
      mojo::Clone(cache_storage_cache_name),
      mojo::Clone(cors_exposed_header_names),
      mojo::Clone(side_data_blob)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, FetchAPIResponse>::value>::type*>
bool FetchAPIResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_list, other_struct.url_list))
    return false;
  if (!mojo::Equals(this->status_code, other_struct.status_code))
    return false;
  if (!mojo::Equals(this->status_text, other_struct.status_text))
    return false;
  if (!mojo::Equals(this->response_type, other_struct.response_type))
    return false;
  if (!mojo::Equals(this->response_source, other_struct.response_source))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->response_time, other_struct.response_time))
    return false;
  if (!mojo::Equals(this->cache_storage_cache_name, other_struct.cache_storage_cache_name))
    return false;
  if (!mojo::Equals(this->cors_exposed_header_names, other_struct.cors_exposed_header_names))
    return false;
  if (!mojo::Equals(this->side_data_blob, other_struct.side_data_blob))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FetchAPIResponse::DataView,
                                         ::blink::mojom::blink::FetchAPIResponsePtr> {
  static bool IsNull(const ::blink::mojom::blink::FetchAPIResponsePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FetchAPIResponsePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::url_list)& url_list(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->url_list;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::status_code) status_code(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->status_code;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::status_text)& status_text(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->status_text;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::response_type) response_type(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_type;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::response_source) response_source(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_source;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::headers)& headers(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->headers;
  }

  static  decltype(::blink::mojom::blink::FetchAPIResponse::blob)& blob(
       ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->blob;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::error) error(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->error;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::response_time)& response_time(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_time;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::cache_storage_cache_name)& cache_storage_cache_name(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->cache_storage_cache_name;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::cors_exposed_header_names)& cors_exposed_header_names(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->cors_exposed_header_names;
  }

  static  decltype(::blink::mojom::blink::FetchAPIResponse::side_data_blob)& side_data_blob(
       ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->side_data_blob;
  }

  static bool Read(::blink::mojom::blink::FetchAPIResponse::DataView input, ::blink::mojom::blink::FetchAPIResponsePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_