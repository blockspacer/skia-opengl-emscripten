// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_WINDOW_OPEN_DISPOSITION_MOJOM_SHARED_H_
#define UI_BASE_MOJO_WINDOW_OPEN_DISPOSITION_MOJOM_SHARED_H_

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
#include "ui/base/mojo/window_open_disposition.mojom-shared-internal.h"

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


enum class WindowOpenDisposition : int32_t {
  
  UNKNOWN,
  
  CURRENT_TAB,
  
  SINGLETON_TAB,
  
  NEW_FOREGROUND_TAB,
  
  NEW_BACKGROUND_TAB,
  
  NEW_POPUP,
  
  NEW_WINDOW,
  
  SAVE_TO_DISK,
  
  OFF_THE_RECORD,
  
  IGNORE_ACTION,
  
  SWITCH_TO_TAB,
  kMinValue = 0,
  kMaxValue = 10,
};

 std::ostream& operator<<(std::ostream& os, WindowOpenDisposition value);
inline bool IsKnownEnumValue(WindowOpenDisposition value) {
  return internal::WindowOpenDisposition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::WindowOpenDisposition>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowOpenDisposition> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::WindowOpenDisposition, ::ui::mojom::WindowOpenDisposition> {
  static ::ui::mojom::WindowOpenDisposition ToMojom(::ui::mojom::WindowOpenDisposition input) { return input; }
  static bool FromMojom(::ui::mojom::WindowOpenDisposition input, ::ui::mojom::WindowOpenDisposition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowOpenDisposition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowOpenDisposition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowOpenDisposition>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_WINDOW_OPEN_DISPOSITION_MOJOM_SHARED_H_