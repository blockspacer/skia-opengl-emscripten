// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_

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
#include "media/mojo/interfaces/cdm_storage.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"

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


enum class CdmStorage_Status : int32_t {
  
  kSuccess,
  
  kInUse,
  
  kFailure,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, CdmStorage_Status value);
inline bool IsKnownEnumValue(CdmStorage_Status value) {
  return internal::CdmStorage_Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class CdmStorageInterfaceBase {};

using CdmStoragePtrDataView =
    mojo::InterfacePtrDataView<CdmStorageInterfaceBase>;
using CdmStorageRequestDataView =
    mojo::InterfaceRequestDataView<CdmStorageInterfaceBase>;
using CdmStorageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmStorageInterfaceBase>;
using CdmStorageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmStorageInterfaceBase>;
class CdmFileInterfaceBase {};

using CdmFilePtrDataView =
    mojo::InterfacePtrDataView<CdmFileInterfaceBase>;
using CdmFileRequestDataView =
    mojo::InterfaceRequestDataView<CdmFileInterfaceBase>;
using CdmFileAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<CdmFileInterfaceBase>;
using CdmFileAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<CdmFileInterfaceBase>;


}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::CdmStorage_Status>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmStorage_Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::CdmStorage_Status, ::media::mojom::CdmStorage_Status> {
  static ::media::mojom::CdmStorage_Status ToMojom(::media::mojom::CdmStorage_Status input) { return input; }
  static bool FromMojom(::media::mojom::CdmStorage_Status input, ::media::mojom::CdmStorage_Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmStorage_Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmStorage_Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmStorage_Status>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace media {
namespace mojom {


}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_H_