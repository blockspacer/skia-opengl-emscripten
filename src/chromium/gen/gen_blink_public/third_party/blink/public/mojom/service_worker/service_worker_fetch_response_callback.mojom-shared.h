// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ServiceWorkerFetchEventTimingDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ServiceWorkerFetchEventTimingDataView> {
  using Data = ::blink::mojom::internal::ServiceWorkerFetchEventTiming_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ServiceWorkerFetchResponseCallbackInterfaceBase {};

using ServiceWorkerFetchResponseCallbackPtrDataView =
    mojo::InterfacePtrDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackRequestDataView =
    mojo::InterfaceRequestDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
using ServiceWorkerFetchResponseCallbackAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ServiceWorkerFetchResponseCallbackInterfaceBase>;
class ServiceWorkerFetchEventTimingDataView {
 public:
  ServiceWorkerFetchEventTimingDataView() {}

  ServiceWorkerFetchEventTimingDataView(
      internal::ServiceWorkerFetchEventTiming_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDispatchEventTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDispatchEventTime(UserType* output) {
    auto* pointer = data_->dispatch_event_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
  inline void GetRespondWithSettledTimeDataView(
      ::mojo_base::mojom::TimeTicksDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRespondWithSettledTime(UserType* output) {
    auto* pointer = data_->respond_with_settled_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeTicksDataView>(
        pointer, output, context_);
  }
 private:
  internal::ServiceWorkerFetchEventTiming_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ServiceWorkerFetchEventTimingDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ServiceWorkerFetchEventTimingDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ServiceWorkerFetchEventTiming_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::dispatch_event_time(input)) in_dispatch_event_time = Traits::dispatch_event_time(input);
    typename decltype((*output)->dispatch_event_time)::BaseType::BufferWriter
        dispatch_event_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_dispatch_event_time, buffer, &dispatch_event_time_writer, context);
    (*output)->dispatch_event_time.Set(
        dispatch_event_time_writer.is_null() ? nullptr : dispatch_event_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->dispatch_event_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null dispatch_event_time in ServiceWorkerFetchEventTiming struct");
    decltype(Traits::respond_with_settled_time(input)) in_respond_with_settled_time = Traits::respond_with_settled_time(input);
    typename decltype((*output)->respond_with_settled_time)::BaseType::BufferWriter
        respond_with_settled_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeTicksDataView>(
        in_respond_with_settled_time, buffer, &respond_with_settled_time_writer, context);
    (*output)->respond_with_settled_time.Set(
        respond_with_settled_time_writer.is_null() ? nullptr : respond_with_settled_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->respond_with_settled_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null respond_with_settled_time in ServiceWorkerFetchEventTiming struct");
  }

  static bool Deserialize(::blink::mojom::internal::ServiceWorkerFetchEventTiming_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ServiceWorkerFetchEventTimingDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ServiceWorkerFetchEventTimingDataView::GetDispatchEventTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->dispatch_event_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}
inline void ServiceWorkerFetchEventTimingDataView::GetRespondWithSettledTimeDataView(
    ::mojo_base::mojom::TimeTicksDataView* output) {
  auto pointer = data_->respond_with_settled_time.Get();
  *output = ::mojo_base::mojom::TimeTicksDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_FETCH_RESPONSE_CALLBACK_MOJOM_SHARED_H_