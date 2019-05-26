// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared.h"
#include "third_party/blink/public/mojom/notifications/notification.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_app.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/dispatch_fetch_event_params.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_client.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ExtendableMessageEventDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ExtendableMessageEventDataView> {
  using Data = ::blink::mojom::internal::ExtendableMessageEvent_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class FetchHandlerExistence : int32_t {
  
  UNKNOWN,
  
  EXISTS,
  
  DOES_NOT_EXIST,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FetchHandlerExistence value);
inline bool IsKnownEnumValue(FetchHandlerExistence value) {
  return internal::FetchHandlerExistence_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ServiceWorkerHostInterfaceBase {};

using ServiceWorkerHostPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerHostInterfaceBase>;
using ServiceWorkerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerHostInterfaceBase>;
class ServiceWorkerInterfaceBase {};

using ServiceWorkerPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerInterfaceBase>;
using ServiceWorkerRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerInterfaceBase>;
using ServiceWorkerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerInterfaceBase>;
using ServiceWorkerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerInterfaceBase>;
class ExtendableMessageEventDataView {
 public:
  ExtendableMessageEventDataView() {}

  ExtendableMessageEventDataView(
      internal::ExtendableMessageEvent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::TransferableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::TransferableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetSourceOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceOrigin(UserType* output) {
    auto* pointer = data_->source_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, context_);
  }
  inline void GetSourceInfoForClientDataView(
      ::blink::mojom::ServiceWorkerClientInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceInfoForClient(UserType* output) {
    auto* pointer = data_->source_info_for_client.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        pointer, output, context_);
  }
  inline void GetSourceInfoForServiceWorkerDataView(
      ::blink::mojom::ServiceWorkerObjectInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSourceInfoForServiceWorker(UserType* output) {
    auto* pointer = data_->source_info_for_service_worker.Get();
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        pointer, output, context_);
  }
 private:
  internal::ExtendableMessageEvent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::FetchHandlerExistence>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FetchHandlerExistence> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::FetchHandlerExistence, ::blink::mojom::FetchHandlerExistence> {
  static ::blink::mojom::FetchHandlerExistence ToMojom(::blink::mojom::FetchHandlerExistence input) { return input; }
  static bool FromMojom(::blink::mojom::FetchHandlerExistence input, ::blink::mojom::FetchHandlerExistence* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FetchHandlerExistence, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FetchHandlerExistence, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FetchHandlerExistence>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ExtendableMessageEventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ExtendableMessageEventDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ExtendableMessageEvent_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in ExtendableMessageEvent struct");
    decltype(Traits::source_origin(input)) in_source_origin = Traits::source_origin(input);
    typename decltype((*output)->source_origin)::BaseType::BufferWriter
        source_origin_writer;
    mojo::internal::Serialize<::url::mojom::OriginDataView>(
        in_source_origin, buffer, &source_origin_writer, context);
    (*output)->source_origin.Set(
        source_origin_writer.is_null() ? nullptr : source_origin_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->source_origin.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null source_origin in ExtendableMessageEvent struct");
    decltype(Traits::source_info_for_client(input)) in_source_info_for_client = Traits::source_info_for_client(input);
    typename decltype((*output)->source_info_for_client)::BaseType::BufferWriter
        source_info_for_client_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerClientInfoDataView>(
        in_source_info_for_client, buffer, &source_info_for_client_writer, context);
    (*output)->source_info_for_client.Set(
        source_info_for_client_writer.is_null() ? nullptr : source_info_for_client_writer.data());
    decltype(Traits::source_info_for_service_worker(input)) in_source_info_for_service_worker = Traits::source_info_for_service_worker(input);
    typename decltype((*output)->source_info_for_service_worker)::BaseType::BufferWriter
        source_info_for_service_worker_writer;
    mojo::internal::Serialize<::blink::mojom::ServiceWorkerObjectInfoDataView>(
        in_source_info_for_service_worker, buffer, &source_info_for_service_worker_writer, context);
    (*output)->source_info_for_service_worker.Set(
        source_info_for_service_worker_writer.is_null() ? nullptr : source_info_for_service_worker_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::ExtendableMessageEvent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ExtendableMessageEventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ExtendableMessageEventDataView::GetMessageDataView(
    ::blink::mojom::TransferableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::TransferableMessageDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->source_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceInfoForClientDataView(
    ::blink::mojom::ServiceWorkerClientInfoDataView* output) {
  auto pointer = data_->source_info_for_client.Get();
  *output = ::blink::mojom::ServiceWorkerClientInfoDataView(pointer, context_);
}
inline void ExtendableMessageEventDataView::GetSourceInfoForServiceWorkerDataView(
    ::blink::mojom::ServiceWorkerObjectInfoDataView* output) {
  auto pointer = data_->source_info_for_service_worker.Get();
  *output = ::blink::mojom::ServiceWorkerObjectInfoDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_SHARED_H_