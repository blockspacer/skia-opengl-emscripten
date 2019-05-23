// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_H_

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
#include "services/metrics/public/mojom/ukm_interface.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ukm {
namespace mojom {
class UkmEntryDataView;



}  // namespace mojom
}  // namespace ukm

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ukm::mojom::UkmEntryDataView> {
  using Data = ::ukm::mojom::internal::UkmEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ukm {
namespace mojom {
// Interface base classes. They are used for type safety check.
class UkmRecorderInterfaceInterfaceBase {};

using UkmRecorderInterfacePtrDataView =
    mojo::InterfacePtrDataView<UkmRecorderInterfaceInterfaceBase>;
using UkmRecorderInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<UkmRecorderInterfaceInterfaceBase>;
using UkmRecorderInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UkmRecorderInterfaceInterfaceBase>;
using UkmRecorderInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UkmRecorderInterfaceInterfaceBase>;
class UkmEntryDataView {
 public:
  UkmEntryDataView() {}

  UkmEntryDataView(
      internal::UkmEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t source_id() const {
    return data_->source_id;
  }
  uint64_t event_hash() const {
    return data_->event_hash;
  }
  inline void GetMetricsDataView(
      mojo::MapDataView<uint64_t, int64_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMetrics(UserType* output) {
    auto* pointer = data_->metrics.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<uint64_t, int64_t>>(
        pointer, output, context_);
  }
 private:
  internal::UkmEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ukm

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ukm::mojom::UkmEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ukm::mojom::UkmEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ukm::mojom::internal::UkmEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->source_id = Traits::source_id(input);
    (*output)->event_hash = Traits::event_hash(input);
    decltype(Traits::metrics(input)) in_metrics = Traits::metrics(input);
    typename decltype((*output)->metrics)::BaseType::BufferWriter
        metrics_writer;
    const mojo::internal::ContainerValidateParams metrics_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<uint64_t, int64_t>>(
        in_metrics, buffer, &metrics_writer, &metrics_validate_params,
        context);
    (*output)->metrics.Set(
        metrics_writer.is_null() ? nullptr : metrics_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->metrics.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null metrics in UkmEntry struct");
  }

  static bool Deserialize(::ukm::mojom::internal::UkmEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ukm::mojom::UkmEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ukm {
namespace mojom {

inline void UkmEntryDataView::GetMetricsDataView(
    mojo::MapDataView<uint64_t, int64_t>* output) {
  auto pointer = data_->metrics.Get();
  *output = mojo::MapDataView<uint64_t, int64_t>(pointer, context_);
}



}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_SHARED_H_