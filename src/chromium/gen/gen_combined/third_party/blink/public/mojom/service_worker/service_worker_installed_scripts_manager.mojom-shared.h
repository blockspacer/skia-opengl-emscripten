// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerInstalledScriptsInfoDataView;

class ServiceWorkerScriptInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerInstalledScriptsInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerScriptInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerScriptInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerInstalledScriptsManagerHostInterfaceBase {};

using ServiceWorkerInstalledScriptsManagerHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerInstalledScriptsManagerHostInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerInstalledScriptsManagerHostInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerInstalledScriptsManagerHostInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerInstalledScriptsManagerHostInterfaceBase>;
class ServiceWorkerInstalledScriptsManagerInterfaceBase {};

using ServiceWorkerInstalledScriptsManagerPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerInstalledScriptsManagerInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerInstalledScriptsManagerInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerInstalledScriptsManagerInterfaceBase>;
using ServiceWorkerInstalledScriptsManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerInstalledScriptsManagerInterfaceBase>;
class ServiceWorkerInstalledScriptsInfoDataView {
 public:
  ServiceWorkerInstalledScriptsInfoDataView() {}

  ServiceWorkerInstalledScriptsInfoDataView(
      internal::ServiceWorkerInstalledScriptsInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeManagerRequest() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerInstalledScriptsManagerRequestDataView>(
            &data_->manager_request, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeManagerHostPtr() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::ServiceWorkerInstalledScriptsManagerHostPtrDataView>(
            &data_->manager_host_ptr, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetInstalledUrlsDataView(
      mojo::ArrayDataView<::url::mojom::UrlDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadInstalledUrls(UserType* output) {
    auto* pointer = data_->installed_urls.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerInstalledScriptsInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class ServiceWorkerScriptInfoDataView {
 public:
  ServiceWorkerScriptInfoDataView() {}

  ServiceWorkerScriptInfoDataView(
      internal::ServiceWorkerScriptInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetScriptUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScriptUrl(UserType* output) {
    auto* pointer = data_->script_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetEncodingDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEncoding(UserType* output) {
    auto* pointer = data_->encoding.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetHeadersDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHeaders(UserType* output) {
    auto* pointer = data_->headers.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
  mojo::ScopedDataPipeConsumerHandle TakeBody() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->body, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t body_size() const {
    return data_->body_size;
  }
  mojo::ScopedDataPipeConsumerHandle TakeMetaData() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->meta_data, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t meta_data_size() const {
    return data_->meta_data_size;
  }
 private:
  internal::ServiceWorkerScriptInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerInstalledScriptsInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::manager_request(input)) in_manager_request = Traits::manager_request(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerInstalledScriptsManagerRequestDataView>(
        in_manager_request, &(*output)->manager_request, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->manager_request),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid manager_request in ServiceWorkerInstalledScriptsInfo struct");
    decltype(Traits::manager_host_ptr(input)) in_manager_host_ptr = Traits::manager_host_ptr(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerInstalledScriptsManagerHostPtrDataView>(
        in_manager_host_ptr, &(*output)->manager_host_ptr, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->manager_host_ptr),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid manager_host_ptr in ServiceWorkerInstalledScriptsInfo struct");
    decltype(Traits::installed_urls(input)) in_installed_urls = Traits::installed_urls(input);
    typename decltype((*output)->installed_urls)::BaseType::BufferWriter
        installed_urls_writer;
    const mojo::internal::ContainerValidateParams installed_urls_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::url::mojom::UrlDataView>>(
        in_installed_urls, buffer, &installed_urls_writer, &installed_urls_validate_params,
        context);
    (*output)->installed_urls.Set(
        installed_urls_writer.is_null() ? nullptr : installed_urls_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->installed_urls.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null installed_urls in ServiceWorkerInstalledScriptsInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerInstalledScriptsInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerInstalledScriptsInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerScriptInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerScriptInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerScriptInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::script_url(input)) in_script_url = Traits::script_url(input);
    typename decltype((*output)->script_url)::BaseType::BufferWriter
        script_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_script_url, buffer, &script_url_writer, context);
    (*output)->script_url.Set(
        script_url_writer.is_null() ? nullptr : script_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->script_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null script_url in ServiceWorkerScriptInfo struct");
    decltype(Traits::encoding(input)) in_encoding = Traits::encoding(input);
    typename decltype((*output)->encoding)::BaseType::BufferWriter
        encoding_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_encoding, buffer, &encoding_writer, context);
    (*output)->encoding.Set(
        encoding_writer.is_null() ? nullptr : encoding_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->encoding.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null encoding in ServiceWorkerScriptInfo struct");
    decltype(Traits::headers(input)) in_headers = Traits::headers(input);
    typename decltype((*output)->headers)::BaseType::BufferWriter
        headers_writer;
    const mojo::internal::ContainerValidateParams headers_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_headers, buffer, &headers_writer, &headers_validate_params,
        context);
    (*output)->headers.Set(
        headers_writer.is_null() ? nullptr : headers_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->headers.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null headers in ServiceWorkerScriptInfo struct");
    decltype(Traits::body(input)) in_body = Traits::body(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_body, &(*output)->body, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->body),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid body in ServiceWorkerScriptInfo struct");
    (*output)->body_size = Traits::body_size(input);
    decltype(Traits::meta_data(input)) in_meta_data = Traits::meta_data(input);
    mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
        in_meta_data, &(*output)->meta_data, context);
    (*output)->meta_data_size = Traits::meta_data_size(input);
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerScriptInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerScriptInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ServiceWorkerInstalledScriptsInfoDataView::GetInstalledUrlsDataView(
    mojo::ArrayDataView<::url::mojom::UrlDataView>* output) {
  auto pointer = data_->installed_urls.Get();
  *output = mojo::ArrayDataView<::url::mojom::UrlDataView>(pointer, context_);
}


inline void ServiceWorkerScriptInfoDataView::GetScriptUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->script_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerScriptInfoDataView::GetEncodingDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->encoding.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerScriptInfoDataView::GetHeadersDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->headers.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_SHARED_H_