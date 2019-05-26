// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_state.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerObjectInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerObjectInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerObjectInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerObjectHostInterfaceBase {};

using ServiceWorkerObjectHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerObjectHostInterfaceBase>;
using ServiceWorkerObjectHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerObjectHostInterfaceBase>;
using ServiceWorkerObjectHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerObjectHostInterfaceBase>;
using ServiceWorkerObjectHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerObjectHostInterfaceBase>;
class ServiceWorkerObjectInterfaceBase {};

using ServiceWorkerObjectPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerObjectInterfaceBase>;
using ServiceWorkerObjectRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerObjectInterfaceBase>;
using ServiceWorkerObjectAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerObjectInterfaceBase>;
using ServiceWorkerObjectAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerObjectInterfaceBase>;
class ServiceWorkerObjectInfoDataView {
 public:
  ServiceWorkerObjectInfoDataView() {}

  ServiceWorkerObjectInfoDataView(
      internal::ServiceWorkerObjectInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t version_id() const {
    return data_->version_id;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadState(UserType* output) const {
    auto data_value = data_->state;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerState>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerState state() const {
    return static_cast<::blink::mojom::ServiceWorkerState>(data_->state);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerObjectInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerObjectInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerObjectInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerObjectInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->version_id = Traits::version_id(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerState>(
        Traits::state(input), &(*output)->state);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in ServiceWorkerObjectInfo struct");
    decltype(Traits::host_ptr_info(input)) in_host_ptr_info = Traits::host_ptr_info(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerObjectInfo struct");
    decltype(Traits::request(input)) in_request = Traits::request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectAssociatedRequestDataView>(
        in_request, &(*output)->request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid request in ServiceWorkerObjectInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerObjectInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerObjectInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ServiceWorkerObjectInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_SHARED_H_