// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/request_context_frame_type.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerClientQueryOptionsDataView;

class ServiceWorkerClientInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerClientQueryOptionsDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerClientQueryOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerClientInfoDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerClientInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ServiceWorkerClientType : int32_t {
  
  kWindow,
  
  kSharedWorker,
  
  kAll,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ServiceWorkerClientType value);
inline bool IsKnownEnumValue(ServiceWorkerClientType value) {
  return internal::ServiceWorkerClientType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ServiceWorkerClientQueryOptionsDataView {
 public:
  ServiceWorkerClientQueryOptionsDataView() {}

  ServiceWorkerClientQueryOptionsDataView(
      internal::ServiceWorkerClientQueryOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool include_uncontrolled() const {
    return data_->include_uncontrolled;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientType(UserType* output) const {
    auto data_value = data_->client_type;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientType>(
        data_value, output);
  }

  ServiceWorkerClientType client_type() const {
    return static_cast<ServiceWorkerClientType>(data_->client_type);
  }
 private:
  internal::ServiceWorkerClientQueryOptions_Data* data_ = nullptr;
};

class ServiceWorkerClientInfoDataView {
 public:
  ServiceWorkerClientInfoDataView() {}

  ServiceWorkerClientInfoDataView(
      internal::ServiceWorkerClientInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFrameType(UserType* output) const {
    auto data_value = data_->frame_type;
    return mojo::internal::Deserialize<::network::mojom::RequestContextFrameType>(
        data_value, output);
  }

  ::network::mojom::RequestContextFrameType frame_type() const {
    return static_cast<::network::mojom::RequestContextFrameType>(data_->frame_type);
  }
  inline void GetClientUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientUuid(UserType* output) {
    auto* pointer = data_->client_uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientType(UserType* output) const {
    auto data_value = data_->client_type;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientType>(
        data_value, output);
  }

  ServiceWorkerClientType client_type() const {
    return static_cast<ServiceWorkerClientType>(data_->client_type);
  }
  bool page_hidden() const {
    return data_->page_hidden;
  }
  bool is_focused() const {
    return data_->is_focused;
  }
  inline void GetLastFocusTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastFocusTime(UserType* output) {
    auto* pointer = data_->last_focus_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetCreationTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationTime(UserType* output) {
    auto* pointer = data_->creation_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerClientInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ServiceWorkerClientType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ServiceWorkerClientType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ServiceWorkerClientType, ::blink::mojom::ServiceWorkerClientType> {
  static ::blink::mojom::ServiceWorkerClientType ToMojom(::blink::mojom::ServiceWorkerClientType input) { return input; }
  static bool FromMojom(::blink::mojom::ServiceWorkerClientType input, ::blink::mojom::ServiceWorkerClientType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerClientType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ServiceWorkerClientType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ServiceWorkerClientType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerClientQueryOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerClientQueryOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerClientQueryOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->include_uncontrolled = Traits::include_uncontrolled(input);
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientType>(
        Traits::client_type(input), &(*output)->client_type);
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerClientQueryOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerClientQueryOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerClientInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerClientInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerClientInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null url in ServiceWorkerClientInfo struct");
    mojo::internal::Serialize<::network::mojom::RequestContextFrameType>(
        Traits::frame_type(input), &(*output)->frame_type);
    decltype(Traits::client_uuid(input)) in_client_uuid = Traits::client_uuid(input);
    typename decltype((*output)->client_uuid)::BaseType::BufferWriter
        client_uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_uuid, buffer, &client_uuid_writer, context);
    (*output)->client_uuid.Set(
        client_uuid_writer.is_null() ? nullptr : client_uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_uuid in ServiceWorkerClientInfo struct");
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientType>(
        Traits::client_type(input), &(*output)->client_type);
    (*output)->page_hidden = Traits::page_hidden(input);
    (*output)->is_focused = Traits::is_focused(input);
    decltype(Traits::last_focus_time(input)) in_last_focus_time = Traits::last_focus_time(input);
    typename decltype((*output)->last_focus_time)::BaseType::BufferWriter
        last_focus_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_last_focus_time, buffer, &last_focus_time_writer, context);
    (*output)->last_focus_time.Set(
        last_focus_time_writer.is_null() ? nullptr : last_focus_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_focus_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_focus_time in ServiceWorkerClientInfo struct");
    decltype(Traits::creation_time(input)) in_creation_time = Traits::creation_time(input);
    typename decltype((*output)->creation_time)::BaseType::BufferWriter
        creation_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_creation_time, buffer, &creation_time_writer, context);
    (*output)->creation_time.Set(
        creation_time_writer.is_null() ? nullptr : creation_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->creation_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null creation_time in ServiceWorkerClientInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerClientInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerClientInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {



inline void ServiceWorkerClientInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void ServiceWorkerClientInfoDataView::GetClientUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ServiceWorkerClientInfoDataView::GetLastFocusTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->last_focus_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void ServiceWorkerClientInfoDataView::GetCreationTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->creation_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CLIENT_MOJOM_SHARED_H_