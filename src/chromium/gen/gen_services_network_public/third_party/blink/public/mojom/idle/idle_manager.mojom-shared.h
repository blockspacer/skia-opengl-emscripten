// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/idle/idle_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class IdleStateDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::IdleStateDataView> {
  using Data = ::blink::mojom::internal::IdleState_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class UserIdleState : int32_t {
  
  kActive,
  
  kIdle,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, UserIdleState value);
inline bool IsKnownEnumValue(UserIdleState value) {
  return internal::UserIdleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ScreenIdleState : int32_t {
  
  kLocked,
  
  kUnlocked,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ScreenIdleState value);
inline bool IsKnownEnumValue(ScreenIdleState value) {
  return internal::ScreenIdleState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class IdleMonitorInterfaceBase {};

using IdleMonitorPtrDataView =
    mojo::InterfacePtrDataView<IdleMonitorInterfaceBase>;
using IdleMonitorRequestDataView =
    mojo::InterfaceRequestDataView<IdleMonitorInterfaceBase>;
using IdleMonitorAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IdleMonitorInterfaceBase>;
using IdleMonitorAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IdleMonitorInterfaceBase>;
class IdleManagerInterfaceBase {};

using IdleManagerPtrDataView =
    mojo::InterfacePtrDataView<IdleManagerInterfaceBase>;
using IdleManagerRequestDataView =
    mojo::InterfaceRequestDataView<IdleManagerInterfaceBase>;
using IdleManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<IdleManagerInterfaceBase>;
using IdleManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<IdleManagerInterfaceBase>;
class IdleStateDataView {
 public:
  IdleStateDataView() {}

  IdleStateDataView(
      internal::IdleState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUser(UserType* output) const {
    auto data_value = data_->user;
    return mojo::internal::Deserialize<::blink::mojom::UserIdleState>(
        data_value, output);
  }

  UserIdleState user() const {
    return static_cast<UserIdleState>(data_->user);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadScreen(UserType* output) const {
    auto data_value = data_->screen;
    return mojo::internal::Deserialize<::blink::mojom::ScreenIdleState>(
        data_value, output);
  }

  ScreenIdleState screen() const {
    return static_cast<ScreenIdleState>(data_->screen);
  }
 private:
  internal::IdleState_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::UserIdleState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::UserIdleState> {};

template <>
struct hash<::blink::mojom::ScreenIdleState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ScreenIdleState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::UserIdleState, ::blink::mojom::UserIdleState> {
  static ::blink::mojom::UserIdleState ToMojom(::blink::mojom::UserIdleState input) { return input; }
  static bool FromMojom(::blink::mojom::UserIdleState input, ::blink::mojom::UserIdleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::UserIdleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::UserIdleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::UserIdleState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ScreenIdleState, ::blink::mojom::ScreenIdleState> {
  static ::blink::mojom::ScreenIdleState ToMojom(::blink::mojom::ScreenIdleState input) { return input; }
  static bool FromMojom(::blink::mojom::ScreenIdleState input, ::blink::mojom::ScreenIdleState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ScreenIdleState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ScreenIdleState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ScreenIdleState>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::IdleStateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::IdleStateDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::IdleState_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::UserIdleState>(
        Traits::user(input), &(*output)->user);
    mojo::internal::Serialize<::blink::mojom::ScreenIdleState>(
        Traits::screen(input), &(*output)->screen);
  }

  static bool Deserialize(::blink::mojom::internal::IdleState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::IdleStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_SHARED_H_