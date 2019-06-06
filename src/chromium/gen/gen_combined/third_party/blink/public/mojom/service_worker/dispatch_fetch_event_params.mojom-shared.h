// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared-internal.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FetchEventPreloadHandleDataView;

class DispatchFetchEventParamsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FetchEventPreloadHandleDataView> {
  using Data = ::blink::mojom::internal::FetchEventPreloadHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DispatchFetchEventParamsDataView> {
  using Data = ::blink::mojom::internal::DispatchFetchEventParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class FetchEventPreloadHandleDataView {
 public:
  FetchEventPreloadHandleDataView() {}

  FetchEventPreloadHandleDataView(
      internal::FetchEventPreloadHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeUrlLoader() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderPtrDataView>(
            &data_->url_loader, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeUrlLoaderClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderClientRequestDataView>(
            &data_->url_loader_client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::FetchEventPreloadHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DispatchFetchEventParamsDataView {
 public:
  DispatchFetchEventParamsDataView() {}

  DispatchFetchEventParamsDataView(
      internal::DispatchFetchEventParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRequestDataView(
      ::blink::mojom::FetchAPIRequestDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequest(UserType* output) {
    auto* pointer = data_->request.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchAPIRequestDataView>(
        pointer, output, context_);
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetPreloadHandleDataView(
      FetchEventPreloadHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPreloadHandle(UserType* output) {
    auto* pointer = data_->preload_handle.Get();
    return mojo::internal::Deserialize<::blink::mojom::FetchEventPreloadHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::DispatchFetchEventParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchEventPreloadHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FetchEventPreloadHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FetchEventPreloadHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url_loader(input)) in_url_loader = Traits::url_loader(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderPtrDataView>(
        in_url_loader, &(*output)->url_loader, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader in FetchEventPreloadHandle struct");
    decltype(Traits::url_loader_client_request(input)) in_url_loader_client_request = Traits::url_loader_client_request(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderClientRequestDataView>(
        in_url_loader_client_request, &(*output)->url_loader_client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->url_loader_client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid url_loader_client_request in FetchEventPreloadHandle struct");
  }

  static bool Deserialize(::blink::mojom::internal::FetchEventPreloadHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FetchEventPreloadHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DispatchFetchEventParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DispatchFetchEventParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DispatchFetchEventParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::request(input)) in_request = Traits::request(input);
    typename decltype((*output)->request)::BaseType::BufferWriter
        request_writer;
    mojo::internal::Serialize<::blink::mojom::FetchAPIRequestDataView>(
        in_request, buffer, &request_writer, context);
    (*output)->request.Set(
        request_writer.is_null() ? nullptr : request_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->request.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null request in DispatchFetchEventParams struct");
    decltype(Traits::client_id(input)) in_client_id = Traits::client_id(input);
    typename decltype((*output)->client_id)::BaseType::BufferWriter
        client_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, buffer, &client_id_writer, context);
    (*output)->client_id.Set(
        client_id_writer.is_null() ? nullptr : client_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_id in DispatchFetchEventParams struct");
    decltype(Traits::preload_handle(input)) in_preload_handle = Traits::preload_handle(input);
    typename decltype((*output)->preload_handle)::BaseType::BufferWriter
        preload_handle_writer;
    mojo::internal::Serialize<::blink::mojom::FetchEventPreloadHandleDataView>(
        in_preload_handle, buffer, &preload_handle_writer, context);
    (*output)->preload_handle.Set(
        preload_handle_writer.is_null() ? nullptr : preload_handle_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::DispatchFetchEventParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DispatchFetchEventParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {



inline void DispatchFetchEventParamsDataView::GetRequestDataView(
    ::blink::mojom::FetchAPIRequestDataView* output) {
  auto pointer = data_->request.Get();
  *output = ::blink::mojom::FetchAPIRequestDataView(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DispatchFetchEventParamsDataView::GetPreloadHandleDataView(
    FetchEventPreloadHandleDataView* output) {
  auto pointer = data_->preload_handle.Get();
  *output = FetchEventPreloadHandleDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_DISPATCH_FETCH_EVENT_PARAMS_MOJOM_SHARED_H_
