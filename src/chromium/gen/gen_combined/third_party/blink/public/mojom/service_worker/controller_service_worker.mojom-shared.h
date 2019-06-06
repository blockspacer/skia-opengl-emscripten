// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader.mojom-shared.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ControllerServiceWorkerInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ControllerServiceWorkerInfoDataView> {
  using Data = ::blink::mojom::internal::ControllerServiceWorkerInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ControllerServiceWorkerInterfaceBase {};

using ControllerServiceWorkerPtrDataView =
    mojo::InterfacePtrDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerRequestDataView =
    mojo::InterfaceRequestDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ControllerServiceWorkerInterfaceBase>;
using ControllerServiceWorkerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ControllerServiceWorkerInterfaceBase>;
class ControllerServiceWorkerConnectorInterfaceBase {};

using ControllerServiceWorkerConnectorPtrDataView =
    mojo::InterfacePtrDataView<ControllerServiceWorkerConnectorInterfaceBase>;
using ControllerServiceWorkerConnectorRequestDataView =
    mojo::InterfaceRequestDataView<ControllerServiceWorkerConnectorInterfaceBase>;
using ControllerServiceWorkerConnectorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ControllerServiceWorkerConnectorInterfaceBase>;
using ControllerServiceWorkerConnectorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ControllerServiceWorkerConnectorInterfaceBase>;
class ControllerServiceWorkerInfoDataView {
 public:
  ControllerServiceWorkerInfoDataView() {}

  ControllerServiceWorkerInfoDataView(
      internal::ControllerServiceWorkerInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerMode>(
        data_value, output);
  }

  ::blink::mojom::ControllerServiceWorkerMode mode() const {
    return static_cast<::blink::mojom::ControllerServiceWorkerMode>(data_->mode);
  }
  template <typename UserType>
  UserType TakeEndpoint() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ControllerServiceWorkerPtrDataView>(
            &data_->endpoint, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetFetchRequestWindowIdDataView(
      ::mojo_base::mojom::UnguessableTokenDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFetchRequestWindowId(UserType* output) {
    auto* pointer = data_->fetch_request_window_id.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnguessableTokenDataView>(
        pointer, output, context_);
  }
  inline void GetObjectInfoDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadObjectInfo(UserType* output) {
    auto* pointer = data_->object_info.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetUsedFeaturesDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsedFeatures(UserType* output) {
    auto* pointer = data_->used_features.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, context_);
  }
 private:
  internal::ControllerServiceWorkerInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ControllerServiceWorkerInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ControllerServiceWorkerInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ControllerServiceWorkerInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerMode>(
        Traits::mode(input), &(*output)->mode);
    decltype(Traits::endpoint(input)) in_endpoint = Traits::endpoint(input);
    mojo::internal::Serialize<::blink::mojom::ControllerServiceWorkerPtrDataView>(
        in_endpoint, &(*output)->endpoint, context);
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
        "null client_id in ControllerServiceWorkerInfo struct");
    decltype(Traits::fetch_request_window_id(input)) in_fetch_request_window_id = Traits::fetch_request_window_id(input);
    typename decltype((*output)->fetch_request_window_id)::BaseType::BufferWriter
        fetch_request_window_id_writer;
    mojo::internal::Serialize<::mojo_base::mojom::UnguessableTokenDataView>(
        in_fetch_request_window_id, buffer, &fetch_request_window_id_writer, context);
    (*output)->fetch_request_window_id.Set(
        fetch_request_window_id_writer.is_null() ? nullptr : fetch_request_window_id_writer.data());
    decltype(Traits::object_info(input)) in_object_info = Traits::object_info(input);
    typename decltype((*output)->object_info)::BaseType::BufferWriter
        object_info_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_object_info, buffer, &object_info_writer, context);
    (*output)->object_info.Set(
        object_info_writer.is_null() ? nullptr : object_info_writer.data());
    decltype(Traits::used_features(input)) in_used_features = Traits::used_features(input);
    typename decltype((*output)->used_features)::BaseType::BufferWriter
        used_features_writer;
    const mojo::internal::ContainerValidateParams used_features_validate_params(
        0, ::blink::mojom::internal::WebFeature_Data::Validate);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        in_used_features, buffer, &used_features_writer, &used_features_validate_params,
        context);
    (*output)->used_features.Set(
        used_features_writer.is_null() ? nullptr : used_features_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->used_features.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null used_features in ControllerServiceWorkerInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::ControllerServiceWorkerInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ControllerServiceWorkerInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ControllerServiceWorkerInfoDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ControllerServiceWorkerInfoDataView::GetFetchRequestWindowIdDataView(
    ::mojo_base::mojom::UnguessableTokenDataView* output) {
  auto pointer = data_->fetch_request_window_id.Get();
  *output = ::mojo_base::mojom::UnguessableTokenDataView(pointer, context_);
}
inline void ControllerServiceWorkerInfoDataView::GetObjectInfoDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->object_info.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ControllerServiceWorkerInfoDataView::GetUsedFeaturesDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->used_features.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_CONTROLLER_SERVICE_WORKER_MOJOM_SHARED_H_
