// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/navigation_preload_state.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ChangedServiceWorkerObjectsMaskDataView;

class ServiceWorkerRegistrationOptionsDataView;

class ServiceWorkerRegistrationObjectInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ChangedServiceWorkerObjectsMaskDataView> {
  using Data = ::blink::mojom::internal::ChangedServiceWorkerObjectsMask_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerRegistrationOptionsDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ServiceWorkerUpdateViaCache : int32_t {
  
  kImports,
  
  kAll,
  
  kNone,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ServiceWorkerUpdateViaCache value);
inline bool IsKnownEnumValue(ServiceWorkerUpdateViaCache value) {
  return internal::ServiceWorkerUpdateViaCache_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerRegistrationObjectHostInterfaceBase {};

using ServiceWorkerRegistrationObjectHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
using ServiceWorkerRegistrationObjectHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerRegistrationObjectHostInterfaceBase>;
class ServiceWorkerRegistrationObjectInterfaceBase {};

using ServiceWorkerRegistrationObjectPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
using ServiceWorkerRegistrationObjectAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerRegistrationObjectInterfaceBase>;
class ChangedServiceWorkerObjectsMaskDataView {
 public:
  ChangedServiceWorkerObjectsMaskDataView() {}

  ChangedServiceWorkerObjectsMaskDataView(
      internal::ChangedServiceWorkerObjectsMask_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool installing() const {
    return data_->installing;
  }
  bool waiting() const {
    return data_->waiting;
  }
  bool active() const {
    return data_->active;
  }
 private:
  internal::ChangedServiceWorkerObjectsMask_Data* data_ = nullptr;
};

class ServiceWorkerRegistrationOptionsDataView {
 public:
  ServiceWorkerRegistrationOptionsDataView() {}

  ServiceWorkerRegistrationOptionsDataView(
      internal::ServiceWorkerRegistrationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::blink::mojom::ScriptType>(
        data_value, output);
  }

  ::blink::mojom::ScriptType type() const {
    return static_cast<::blink::mojom::ScriptType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateViaCache(UserType* output) const {
    auto data_value = data_->update_via_cache;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        data_value, output);
  }

  ServiceWorkerUpdateViaCache update_via_cache() const {
    return static_cast<ServiceWorkerUpdateViaCache>(data_->update_via_cache);
  }
 private:
  internal::ServiceWorkerRegistrationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerRegistrationObjectInfoDataView {
 public:
  ServiceWorkerRegistrationObjectInfoDataView() {}

  ServiceWorkerRegistrationObjectInfoDataView(
      internal::ServiceWorkerRegistrationObjectInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t registration_id() const {
    return data_->registration_id;
  }
  inline void GetScopeDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScope(UserType* output) {
    auto* pointer = data_->scope.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUpdateViaCache(UserType* output) const {
    auto data_value = data_->update_via_cache;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        data_value, output);
  }

  ServiceWorkerUpdateViaCache update_via_cache() const {
    return static_cast<ServiceWorkerUpdateViaCache>(data_->update_via_cache);
  }
  template <typename UserType>
  UserType TakeHostPtrInfo() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView>(
            &data_->host_ptr_info, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerRegistrationObjectAssociatedRequestDataView>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInstallingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalling(UserType* output) {
    auto* pointer = data_->installing.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetWaitingDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadWaiting(UserType* output) {
    auto* pointer = data_->waiting.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
  inline void GetActiveDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadActive(UserType* output) {
    auto* pointer = data_->active.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerRegistrationObjectInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ServiceWorkerUpdateViaCache>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ServiceWorkerUpdateViaCache> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ServiceWorkerUpdateViaCache, ::blink::mojom::ServiceWorkerUpdateViaCache> {
  static ::blink::mojom::ServiceWorkerUpdateViaCache ToMojom(::blink::mojom::ServiceWorkerUpdateViaCache input) { return input; }
  static bool FromMojom(::blink::mojom::ServiceWorkerUpdateViaCache input, ::blink::mojom::ServiceWorkerUpdateViaCache* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerUpdateViaCache, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ServiceWorkerUpdateViaCache, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ChangedServiceWorkerObjectsMaskDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ChangedServiceWorkerObjectsMaskDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ChangedServiceWorkerObjectsMask_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->installing = Traits::installing(input);
    (*output)->waiting = Traits::waiting(input);
    (*output)->active = Traits::active(input);
  }

  static bool Deserialize(::blink::mojom::internal::ChangedServiceWorkerObjectsMask_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ChangedServiceWorkerObjectsMaskDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerRegistrationOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerRegistrationOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::scope(input)) in_scope = Traits::scope(input);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in ServiceWorkerRegistrationOptions struct");
    mojo::internal::Serialize<::blink::mojom::ScriptType>(
        Traits::type(input), &(*output)->type);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        Traits::update_via_cache(input), &(*output)->update_via_cache);
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerRegistrationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerRegistrationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->registration_id = Traits::registration_id(input);
    decltype(Traits::scope(input)) in_scope = Traits::scope(input);
    typename decltype((*output)->scope)::BaseType::BufferWriter
        scope_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_scope, buffer, &scope_writer, context);
    (*output)->scope.Set(
        scope_writer.is_null() ? nullptr : scope_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->scope.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null scope in ServiceWorkerRegistrationObjectInfo struct");
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerUpdateViaCache>(
        Traits::update_via_cache(input), &(*output)->update_via_cache);
    decltype(Traits::host_ptr_info(input)) in_host_ptr_info = Traits::host_ptr_info(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectHostAssociatedPtrInfoDataView>(
        in_host_ptr_info, &(*output)->host_ptr_info, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->host_ptr_info),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid host_ptr_info in ServiceWorkerRegistrationObjectInfo struct");
    decltype(Traits::request(input)) in_request = Traits::request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerRegistrationObjectAssociatedRequestDataView>(
        in_request, &(*output)->request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
        "invalid request in ServiceWorkerRegistrationObjectInfo struct");
    decltype(Traits::installing(input)) in_installing = Traits::installing(input);
    typename decltype((*output)->installing)::BaseType::BufferWriter
        installing_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_installing, buffer, &installing_writer, context);
    (*output)->installing.Set(
        installing_writer.is_null() ? nullptr : installing_writer.data());
    decltype(Traits::waiting(input)) in_waiting = Traits::waiting(input);
    typename decltype((*output)->waiting)::BaseType::BufferWriter
        waiting_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_waiting, buffer, &waiting_writer, context);
    (*output)->waiting.Set(
        waiting_writer.is_null() ? nullptr : waiting_writer.data());
    decltype(Traits::active(input)) in_active = Traits::active(input);
    typename decltype((*output)->active)::BaseType::BufferWriter
        active_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_active, buffer, &active_writer, context);
    (*output)->active.Set(
        active_writer.is_null() ? nullptr : active_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerRegistrationObjectInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerRegistrationObjectInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {



inline void ServiceWorkerRegistrationOptionsDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void ServiceWorkerRegistrationObjectInfoDataView::GetScopeDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->scope.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetInstallingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->installing.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetWaitingDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->waiting.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}
inline void ServiceWorkerRegistrationObjectInfoDataView::GetActiveDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->active.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_MOJOM_SHARED_H_