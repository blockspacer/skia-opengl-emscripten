// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_factory.mojom-shared.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-shared.h"
#include "third_party/blink/public/mojom/cache_storage/cache_storage.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker_mode.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_container.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerProviderInfoForWorkerDataView;

class ServiceWorkerProviderInfoForStartWorkerDataView;

class ServiceWorkerProviderInfoForWindowDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerProviderInfoForWorker_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerProviderInfoForWindowDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerProviderInfoForWindow_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerWorkerClientInterfaceBase {};

using ServiceWorkerWorkerClientPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerWorkerClientInterfaceBase>;
using ServiceWorkerWorkerClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerWorkerClientInterfaceBase>;
class ServiceWorkerWorkerClientRegistryInterfaceBase {};

using ServiceWorkerWorkerClientRegistryPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerWorkerClientRegistryInterfaceBase>;
using ServiceWorkerWorkerClientRegistryRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerWorkerClientRegistryInterfaceBase>;
using ServiceWorkerWorkerClientRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerWorkerClientRegistryInterfaceBase>;
using ServiceWorkerWorkerClientRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerWorkerClientRegistryInterfaceBase>;
class ServiceWorkerProviderInfoForWorkerDataView {
 public:
  ServiceWorkerProviderInfoForWorkerDataView() {}

  ServiceWorkerProviderInfoForWorkerDataView(
      internal::ServiceWorkerProviderInfoForWorker_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForWorker_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerProviderInfoForStartWorkerDataView {
 public:
  ServiceWorkerProviderInfoForStartWorkerDataView() {}

  ServiceWorkerProviderInfoForStartWorkerDataView(
      internal::ServiceWorkerProviderInfoForStartWorker_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeScriptLoaderFactoryPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::network::mojom::URLLoaderFactoryPtrDataView>(
            &data_->script_loader_factory_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeCacheStorage() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::CacheStoragePtrDataView>(
            &data_->cache_storage, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeInterfaceProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
            &data_->interface_provider, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForStartWorker_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerProviderInfoForWindowDataView {
 public:
  ServiceWorkerProviderInfoForWindowDataView() {}

  ServiceWorkerProviderInfoForWindowDataView(
      internal::ServiceWorkerProviderInfoForWindow_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeClientRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
            &data_->client_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceWorkerProviderInfoForWindow_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerProviderInfoForWorker_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::host_ptr_info(input)) in_host_ptr_info = Traits::host_ptr_info(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerProviderInfoForWorker struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_request in ServiceWorkerProviderInfoForWorker struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerProviderInfoForWorker_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerProviderInfoForWorkerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::host_ptr_info(input)) in_host_ptr_info = Traits::host_ptr_info(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerProviderInfoForStartWorker struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_request in ServiceWorkerProviderInfoForStartWorker struct");
    decltype(Traits::script_loader_factory_ptr_info(input)) in_script_loader_factory_ptr_info = Traits::script_loader_factory_ptr_info(input);
    mojo::internal::Serialize<::network::mojom::URLLoaderFactoryPtrDataView>(
        in_script_loader_factory_ptr_info, &(*output)->script_loader_factory_ptr_info, context);
    decltype(Traits::cache_storage(input)) in_cache_storage = Traits::cache_storage(input);
    mojo::internal::Serialize<::blink::mojom::CacheStoragePtrDataView>(
        in_cache_storage, &(*output)->cache_storage, context);
    decltype(Traits::interface_provider(input)) in_interface_provider = Traits::interface_provider(input);
    mojo::internal::Serialize<::service_manager::mojom::InterfaceProviderPtrDataView>(
        in_interface_provider, &(*output)->interface_provider, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->interface_provider),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid interface_provider in ServiceWorkerProviderInfoForStartWorker struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerProviderInfoForStartWorker_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerProviderInfoForStartWorkerDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerProviderInfoForWindowDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerProviderInfoForWindowDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerProviderInfoForWindow_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::host_ptr_info(input)) in_host_ptr_info = Traits::host_ptr_info(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerProviderInfoForWindow struct");
    decltype(Traits::client_request(input)) in_client_request = Traits::client_request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerContainerAssociatedRequestDataView>(
        in_client_request, &(*output)->client_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->client_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid client_request in ServiceWorkerProviderInfoForWindow struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerProviderInfoForWindow_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerProviderInfoForWindowDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {








}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_PROVIDER_MOJOM_SHARED_H_