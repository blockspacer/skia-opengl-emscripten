// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/keyboard_lock/keyboard_lock.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class GetKeyboardLayoutMapResultDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::GetKeyboardLayoutMapResultDataView> {
  using Data = ::blink::mojom::internal::GetKeyboardLayoutMapResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class KeyboardLockRequestResult : int32_t {
  
  kSuccess = 0,
  
  kFrameDetachedError = 1,
  
  kNoValidKeyCodesError = 2,
  
  kChildFrameError = 3,
  
  kRequestFailedError = 4,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, KeyboardLockRequestResult value);
inline bool IsKnownEnumValue(KeyboardLockRequestResult value) {
  return internal::KeyboardLockRequestResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GetKeyboardLayoutMapStatus : int32_t {
  
  kSuccess = 0,
  
  kFail = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, GetKeyboardLayoutMapStatus value);
inline bool IsKnownEnumValue(GetKeyboardLayoutMapStatus value) {
  return internal::GetKeyboardLayoutMapStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class KeyboardLockServiceInterfaceBase {};

using KeyboardLockServicePtrDataView =
    mojo::InterfacePtrDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceRequestDataView =
    mojo::InterfaceRequestDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<KeyboardLockServiceInterfaceBase>;
using KeyboardLockServiceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<KeyboardLockServiceInterfaceBase>;
class GetKeyboardLayoutMapResultDataView {
 public:
  GetKeyboardLayoutMapResultDataView() {}

  GetKeyboardLayoutMapResultDataView(
      internal::GetKeyboardLayoutMapResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::GetKeyboardLayoutMapStatus>(
        data_value, output);
  }

  GetKeyboardLayoutMapStatus status() const {
    return static_cast<GetKeyboardLayoutMapStatus>(data_->status);
  }
  inline void GetLayoutMapDataView(
      mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLayoutMap(UserType* output) {
    auto* pointer = data_->layout_map.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::GetKeyboardLayoutMapResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::KeyboardLockRequestResult>
    : public mojo::internal::EnumHashImpl<::blink::mojom::KeyboardLockRequestResult> {};

template <>
struct hash<::blink::mojom::GetKeyboardLayoutMapStatus>
    : public mojo::internal::EnumHashImpl<::blink::mojom::GetKeyboardLayoutMapStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::KeyboardLockRequestResult, ::blink::mojom::KeyboardLockRequestResult> {
  static ::blink::mojom::KeyboardLockRequestResult ToMojom(::blink::mojom::KeyboardLockRequestResult input) { return input; }
  static bool FromMojom(::blink::mojom::KeyboardLockRequestResult input, ::blink::mojom::KeyboardLockRequestResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::KeyboardLockRequestResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::KeyboardLockRequestResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::KeyboardLockRequestResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::GetKeyboardLayoutMapStatus, ::blink::mojom::GetKeyboardLayoutMapStatus> {
  static ::blink::mojom::GetKeyboardLayoutMapStatus ToMojom(::blink::mojom::GetKeyboardLayoutMapStatus input) { return input; }
  static bool FromMojom(::blink::mojom::GetKeyboardLayoutMapStatus input, ::blink::mojom::GetKeyboardLayoutMapStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::GetKeyboardLayoutMapStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::GetKeyboardLayoutMapStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::GetKeyboardLayoutMapStatus>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::GetKeyboardLayoutMapResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::GetKeyboardLayoutMapResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::GetKeyboardLayoutMapResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::GetKeyboardLayoutMapStatus>(
        Traits::status(input), &(*output)->status);
    decltype(Traits::layout_map(input)) in_layout_map = Traits::layout_map(input);
    typename decltype((*output)->layout_map)::BaseType::BufferWriter
        layout_map_writer;
    const mojo::internal::ContainerValidateParams layout_map_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>>(
        in_layout_map, buffer, &layout_map_writer, &layout_map_validate_params,
        context);
    (*output)->layout_map.Set(
        layout_map_writer.is_null() ? nullptr : layout_map_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->layout_map.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null layout_map in GetKeyboardLayoutMapResult struct");
  }

  static bool Deserialize(::blink::mojom::internal::GetKeyboardLayoutMapResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::GetKeyboardLayoutMapResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void GetKeyboardLayoutMapResultDataView::GetLayoutMapDataView(
    mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>* output) {
  auto pointer = data_->layout_map.Get();
  *output = mojo::MapDataView<mojo::StringDataView, mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_KEYBOARD_LOCK_KEYBOARD_LOCK_MOJOM_SHARED_H_