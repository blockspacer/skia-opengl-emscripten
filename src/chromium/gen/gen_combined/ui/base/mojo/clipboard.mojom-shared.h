// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_H_
#define UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_H_

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
#include "ui/base/mojo/clipboard.mojom-shared-internal.h"
#include "mojo/public/mojom/base/big_string.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class ClipboardType : int32_t {
  
  COPY_PASTE,
  
  SELECTION,
  
  DRAG,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, ClipboardType value);
inline bool IsKnownEnumValue(ClipboardType value) {
  return internal::ClipboardType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class ClipboardHostInterfaceBase {};

using ClipboardHostPtrDataView =
    mojo::InterfacePtrDataView<ClipboardHostInterfaceBase>;
using ClipboardHostRequestDataView =
    mojo::InterfaceRequestDataView<ClipboardHostInterfaceBase>;
using ClipboardHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ClipboardHostInterfaceBase>;
using ClipboardHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ClipboardHostInterfaceBase>;


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::ClipboardType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ClipboardType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::ClipboardType, ::ui::mojom::ClipboardType> {
  static ::ui::mojom::ClipboardType ToMojom(::ui::mojom::ClipboardType input) { return input; }
  static bool FromMojom(::ui::mojom::ClipboardType input, ::ui::mojom::ClipboardType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ClipboardType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ClipboardType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ClipboardType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_CLIPBOARD_MOJOM_SHARED_H_