// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_MOJO_UI_BASE_TYPES_MOJOM_SHARED_H_
#define UI_BASE_MOJO_UI_BASE_TYPES_MOJOM_SHARED_H_

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
#include "ui/base/mojo/ui_base_types.mojom-shared-internal.h"

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


enum class WindowShowState : int32_t {
  
  kDefault,
  
  kNormal,
  
  kMinimized,
  
  kMaximized,
  
  kInactive,
  
  kFullscreen,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, WindowShowState value);
inline bool IsKnownEnumValue(WindowShowState value) {
  return internal::WindowShowState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DialogButton : int32_t {
  
  NONE,
  
  OK,
  
  CANCEL,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, DialogButton value);
inline bool IsKnownEnumValue(DialogButton value) {
  return internal::DialogButton_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ModalType : int32_t {
  
  NONE,
  
  WINDOW,
  
  CHILD,
  
  SYSTEM,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ModalType value);
inline bool IsKnownEnumValue(ModalType value) {
  return internal::ModalType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class HitTest : int32_t {
  
  kNowhere = 0,
  
  kBorder,
  
  kBottom,
  
  kBottomLeft,
  
  kBottomRight,
  
  kCaption,
  
  kClient,
  
  kClose,
  
  kError,
  
  kGrowbox,
  
  kHelp,
  
  kHScroll,
  
  kLeft,
  
  kMenu,
  
  kMaxButton,
  
  kMinButton,
  
  kReduce,
  
  kRight,
  
  kSize,
  
  kSysMenu,
  
  kTop,
  
  kTopLeft,
  
  kTopRight,
  
  kTransparent,
  
  kVScroll,
  
  kZoom,
  kMinValue = 0,
  kMaxValue = 25,
};

 std::ostream& operator<<(std::ostream& os, HitTest value);
inline bool IsKnownEnumValue(HitTest value) {
  return internal::HitTest_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::WindowShowState>
    : public mojo::internal::EnumHashImpl<::ui::mojom::WindowShowState> {};

template <>
struct hash<::ui::mojom::DialogButton>
    : public mojo::internal::EnumHashImpl<::ui::mojom::DialogButton> {};

template <>
struct hash<::ui::mojom::ModalType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ModalType> {};

template <>
struct hash<::ui::mojom::HitTest>
    : public mojo::internal::EnumHashImpl<::ui::mojom::HitTest> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::WindowShowState, ::ui::mojom::WindowShowState> {
  static ::ui::mojom::WindowShowState ToMojom(::ui::mojom::WindowShowState input) { return input; }
  static bool FromMojom(::ui::mojom::WindowShowState input, ::ui::mojom::WindowShowState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WindowShowState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::WindowShowState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::WindowShowState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::DialogButton, ::ui::mojom::DialogButton> {
  static ::ui::mojom::DialogButton ToMojom(::ui::mojom::DialogButton input) { return input; }
  static bool FromMojom(::ui::mojom::DialogButton input, ::ui::mojom::DialogButton* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::DialogButton, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::DialogButton, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::DialogButton>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::ModalType, ::ui::mojom::ModalType> {
  static ::ui::mojom::ModalType ToMojom(::ui::mojom::ModalType input) { return input; }
  static bool FromMojom(::ui::mojom::ModalType input, ::ui::mojom::ModalType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ModalType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ModalType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::ModalType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::HitTest, ::ui::mojom::HitTest> {
  static ::ui::mojom::HitTest ToMojom(::ui::mojom::HitTest input) { return input; }
  static bool FromMojom(::ui::mojom::HitTest input, ::ui::mojom::HitTest* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::HitTest, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::HitTest, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::HitTest>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

#endif  // UI_BASE_MOJO_UI_BASE_TYPES_MOJOM_SHARED_H_