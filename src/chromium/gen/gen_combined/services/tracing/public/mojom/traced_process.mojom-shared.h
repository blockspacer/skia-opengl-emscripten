// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_H_

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
#include "services/tracing/public/mojom/traced_process.mojom-shared-internal.h"
#include "services/tracing/public/mojom/perfetto_service.mojom-shared.h"
#include "services/tracing/public/mojom/tracing.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace tracing {
namespace mojom {
class ConnectToTracingRequestDataView;



}  // namespace mojom
}  // namespace tracing

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::tracing::mojom::ConnectToTracingRequestDataView> {
  using Data = ::tracing::mojom::internal::ConnectToTracingRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace tracing {
namespace mojom {
// Interface base classes. They are used for type safety check.
class TracedProcessInterfaceBase {};

using TracedProcessPtrDataView =
    mojo::InterfacePtrDataView<TracedProcessInterfaceBase>;
using TracedProcessRequestDataView =
    mojo::InterfaceRequestDataView<TracedProcessInterfaceBase>;
using TracedProcessAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<TracedProcessInterfaceBase>;
using TracedProcessAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<TracedProcessInterfaceBase>;
class ConnectToTracingRequestDataView {
 public:
  ConnectToTracingRequestDataView() {}

  ConnectToTracingRequestDataView(
      internal::ConnectToTracingRequest_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePerfettoService() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::PerfettoServicePtrDataView>(
            &data_->perfetto_service, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeAgentRegistry() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::tracing::mojom::AgentRegistryPtrDataView>(
            &data_->agent_registry, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ConnectToTracingRequest_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace tracing

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::tracing::mojom::ConnectToTracingRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::tracing::mojom::ConnectToTracingRequestDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::tracing::mojom::internal::ConnectToTracingRequest_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::perfetto_service(input)) in_perfetto_service = Traits::perfetto_service(input);
    mojo::internal::Serialize<::tracing::mojom::PerfettoServicePtrDataView>(
        in_perfetto_service, &(*output)->perfetto_service, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->perfetto_service),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid perfetto_service in ConnectToTracingRequest struct");
    decltype(Traits::agent_registry(input)) in_agent_registry = Traits::agent_registry(input);
    mojo::internal::Serialize<::tracing::mojom::AgentRegistryPtrDataView>(
        in_agent_registry, &(*output)->agent_registry, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->agent_registry),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid agent_registry in ConnectToTracingRequest struct");
  }

  static bool Deserialize(::tracing::mojom::internal::ConnectToTracingRequest_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::tracing::mojom::ConnectToTracingRequestDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace tracing {
namespace mojom {




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_TRACED_PROCESS_MOJOM_SHARED_H_