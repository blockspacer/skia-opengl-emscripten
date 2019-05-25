// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/output_protection.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace media {
namespace mojom {


enum class OutputProtection_ProtectionType : int32_t {
  
  NONE = 0,
  
  HDCP = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, OutputProtection_ProtectionType value);
inline bool IsKnownEnumValue(OutputProtection_ProtectionType value) {
  return internal::OutputProtection_ProtectionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class OutputProtection_LinkType : int32_t {
  
  NONE = 0,
  
  UNKNOWN = 1,
  
  INTERNAL = 2,
  
  VGA = 4,
  
  HDMI = 8,
  
  DVI = 16,
  
  DISPLAYPORT = 32,
  
  NETWORK = 64,
  kMinValue = 0,
  kMaxValue = 64,
};

 std::ostream& operator<<(std::ostream& os, OutputProtection_LinkType value);
inline bool IsKnownEnumValue(OutputProtection_LinkType value) {
  return internal::OutputProtection_LinkType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class OutputProtectionInterfaceBase {};

using OutputProtectionPtrDataView =
    mojo::InterfacePtrDataView<OutputProtectionInterfaceBase>;
using OutputProtectionRequestDataView =
    mojo::InterfaceRequestDataView<OutputProtectionInterfaceBase>;
using OutputProtectionAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<OutputProtectionInterfaceBase>;
using OutputProtectionAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<OutputProtectionInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::OutputProtection_ProtectionType>
    : public mojo::internal::EnumHashImpl<::media::mojom::OutputProtection_ProtectionType> {};

template <>
struct hash<::media::mojom::OutputProtection_LinkType>
    : public mojo::internal::EnumHashImpl<::media::mojom::OutputProtection_LinkType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::OutputProtection_ProtectionType, ::media::mojom::OutputProtection_ProtectionType> {
  static ::media::mojom::OutputProtection_ProtectionType ToMojom(::media::mojom::OutputProtection_ProtectionType input) { return input; }
  static bool FromMojom(::media::mojom::OutputProtection_ProtectionType input, ::media::mojom::OutputProtection_ProtectionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::OutputProtection_ProtectionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::OutputProtection_ProtectionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::OutputProtection_ProtectionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::OutputProtection_LinkType, ::media::mojom::OutputProtection_LinkType> {
  static ::media::mojom::OutputProtection_LinkType ToMojom(::media::mojom::OutputProtection_LinkType input) { return input; }
  static bool FromMojom(::media::mojom::OutputProtection_LinkType input, ::media::mojom::OutputProtection_LinkType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::OutputProtection_LinkType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::OutputProtection_LinkType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::OutputProtection_LinkType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_SHARED_H_