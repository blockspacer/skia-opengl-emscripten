// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class DetectionArgsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::DetectionArgsDataView> {
  using Data = ::blink::mojom::internal::DetectionArgs_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class OomInterventionHostInterfaceBase {};

using OomInterventionHostPtrDataView =
    mojo::InterfacePtrDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostRequestDataView =
    mojo::InterfaceRequestDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OomInterventionHostInterfaceBase>;
using OomInterventionHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OomInterventionHostInterfaceBase>;
class OomInterventionInterfaceBase {};

using OomInterventionPtrDataView =
    mojo::InterfacePtrDataView<OomInterventionInterfaceBase>;
using OomInterventionRequestDataView =
    mojo::InterfaceRequestDataView<OomInterventionInterfaceBase>;
using OomInterventionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OomInterventionInterfaceBase>;
using OomInterventionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OomInterventionInterfaceBase>;
class DetectionArgsDataView {
 public:
  DetectionArgsDataView() {}

  DetectionArgsDataView(
      internal::DetectionArgs_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t blink_workload_threshold() const {
    return data_->blink_workload_threshold;
  }
  uint64_t private_footprint_threshold() const {
    return data_->private_footprint_threshold;
  }
  uint64_t swap_threshold() const {
    return data_->swap_threshold;
  }
  uint64_t virtual_memory_thresold() const {
    return data_->virtual_memory_thresold;
  }
 private:
  internal::DetectionArgs_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DetectionArgsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DetectionArgsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DetectionArgs_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->blink_workload_threshold = Traits::blink_workload_threshold(input);
    (*output)->private_footprint_threshold = Traits::private_footprint_threshold(input);
    (*output)->swap_threshold = Traits::swap_threshold(input);
    (*output)->virtual_memory_thresold = Traits::virtual_memory_thresold(input);
  }

  static bool Deserialize(::blink::mojom::internal::DetectionArgs_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DetectionArgsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_SHARED_H_