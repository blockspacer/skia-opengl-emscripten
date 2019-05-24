// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_
#define SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_

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
#include "services/resource_coordinator/public/mojom/coordination_unit.mojom-shared-internal.h"
#include "mojo/public/mojom/base/process_id.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "services/resource_coordinator/public/mojom/lifecycle.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace resource_coordinator {
namespace mojom {


enum class CoordinationUnitType : int32_t {
  
  kFrame,
  
  kPage,
  
  kProcess,
  
  kSystem,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, CoordinationUnitType value);
inline bool IsKnownEnumValue(CoordinationUnitType value) {
  return internal::CoordinationUnitType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class InterventionPolicy : int32_t {
  
  kUnknown,
  
  kOptIn,
  
  kOptOut,
  
  kDefault,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, InterventionPolicy value);
inline bool IsKnownEnumValue(InterventionPolicy value) {
  return internal::InterventionPolicy_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class PolicyControlledIntervention : int32_t {
  
  kPageLifecycleTransitions,
  kMinValue = 0,
  kMaxValue = 0,
};

COMPONENT_EXPORT(RESOURCE_COORDINATOR_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, PolicyControlledIntervention value);
inline bool IsKnownEnumValue(PolicyControlledIntervention value) {
  return internal::PolicyControlledIntervention_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class DocumentCoordinationUnitInterfaceBase {};

using DocumentCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<DocumentCoordinationUnitInterfaceBase>;
using DocumentCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<DocumentCoordinationUnitInterfaceBase>;
using DocumentCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DocumentCoordinationUnitInterfaceBase>;
using DocumentCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DocumentCoordinationUnitInterfaceBase>;
class ProcessCoordinationUnitInterfaceBase {};

using ProcessCoordinationUnitPtrDataView =
    mojo::InterfacePtrDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitRequestDataView =
    mojo::InterfaceRequestDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ProcessCoordinationUnitInterfaceBase>;
using ProcessCoordinationUnitAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ProcessCoordinationUnitInterfaceBase>;


}  // namespace mojom
}  // namespace resource_coordinator

namespace std {

template <>
struct hash<::resource_coordinator::mojom::CoordinationUnitType>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::CoordinationUnitType> {};

template <>
struct hash<::resource_coordinator::mojom::InterventionPolicy>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::InterventionPolicy> {};

template <>
struct hash<::resource_coordinator::mojom::PolicyControlledIntervention>
    : public mojo::internal::EnumHashImpl<::resource_coordinator::mojom::PolicyControlledIntervention> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::resource_coordinator::mojom::CoordinationUnitType, ::resource_coordinator::mojom::CoordinationUnitType> {
  static ::resource_coordinator::mojom::CoordinationUnitType ToMojom(::resource_coordinator::mojom::CoordinationUnitType input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::CoordinationUnitType input, ::resource_coordinator::mojom::CoordinationUnitType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::CoordinationUnitType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::CoordinationUnitType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::CoordinationUnitType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::resource_coordinator::mojom::InterventionPolicy, ::resource_coordinator::mojom::InterventionPolicy> {
  static ::resource_coordinator::mojom::InterventionPolicy ToMojom(::resource_coordinator::mojom::InterventionPolicy input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::InterventionPolicy input, ::resource_coordinator::mojom::InterventionPolicy* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::InterventionPolicy, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::InterventionPolicy, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::InterventionPolicy>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::resource_coordinator::mojom::PolicyControlledIntervention, ::resource_coordinator::mojom::PolicyControlledIntervention> {
  static ::resource_coordinator::mojom::PolicyControlledIntervention ToMojom(::resource_coordinator::mojom::PolicyControlledIntervention input) { return input; }
  static bool FromMojom(::resource_coordinator::mojom::PolicyControlledIntervention input, ::resource_coordinator::mojom::PolicyControlledIntervention* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::resource_coordinator::mojom::PolicyControlledIntervention, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::resource_coordinator::mojom::PolicyControlledIntervention, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::resource_coordinator::mojom::PolicyControlledIntervention>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace resource_coordinator {
namespace mojom {


}  // namespace mojom
}  // namespace resource_coordinator

#endif  // SERVICES_RESOURCE_COORDINATOR_PUBLIC_MOJOM_COORDINATION_UNIT_MOJOM_SHARED_H_