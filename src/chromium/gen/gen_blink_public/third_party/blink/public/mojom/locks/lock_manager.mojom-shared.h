// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/locks/lock_manager.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class LockInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::LockInfoDataView> {
  using Data = ::blink::mojom::internal::LockInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class LockMode : int32_t {
  
  SHARED,
  
  EXCLUSIVE,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, LockMode value);
inline bool IsKnownEnumValue(LockMode value) {
  return internal::LockMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class LockManager_WaitMode : int32_t {
  
  WAIT,
  
  NO_WAIT,
  
  PREEMPT,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, LockManager_WaitMode value);
inline bool IsKnownEnumValue(LockManager_WaitMode value) {
  return internal::LockManager_WaitMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class LockHandleInterfaceBase {};

using LockHandlePtrDataView =
    mojo::InterfacePtrDataView<LockHandleInterfaceBase>;
using LockHandleRequestDataView =
    mojo::InterfaceRequestDataView<LockHandleInterfaceBase>;
using LockHandleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockHandleInterfaceBase>;
using LockHandleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockHandleInterfaceBase>;
class LockRequestInterfaceBase {};

using LockRequestPtrDataView =
    mojo::InterfacePtrDataView<LockRequestInterfaceBase>;
using LockRequestRequestDataView =
    mojo::InterfaceRequestDataView<LockRequestInterfaceBase>;
using LockRequestAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockRequestInterfaceBase>;
using LockRequestAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockRequestInterfaceBase>;
class LockManagerInterfaceBase {};

using LockManagerPtrDataView =
    mojo::InterfacePtrDataView<LockManagerInterfaceBase>;
using LockManagerRequestDataView =
    mojo::InterfaceRequestDataView<LockManagerInterfaceBase>;
using LockManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<LockManagerInterfaceBase>;
using LockManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<LockManagerInterfaceBase>;
class LockInfoDataView {
 public:
  LockInfoDataView() {}

  LockInfoDataView(
      internal::LockInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::LockMode>(
        data_value, output);
  }

  LockMode mode() const {
    return static_cast<LockMode>(data_->mode);
  }
  inline void GetClientIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadClientId(UserType* output) {
    auto* pointer = data_->client_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::LockInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::LockMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LockMode> {};

template <>
struct hash<::blink::mojom::LockManager_WaitMode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::LockManager_WaitMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::LockMode, ::blink::mojom::LockMode> {
  static ::blink::mojom::LockMode ToMojom(::blink::mojom::LockMode input) { return input; }
  static bool FromMojom(::blink::mojom::LockMode input, ::blink::mojom::LockMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LockMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::LockMode>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::LockManager_WaitMode, ::blink::mojom::LockManager_WaitMode> {
  static ::blink::mojom::LockManager_WaitMode ToMojom(::blink::mojom::LockManager_WaitMode input) { return input; }
  static bool FromMojom(::blink::mojom::LockManager_WaitMode input, ::blink::mojom::LockManager_WaitMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockManager_WaitMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::LockManager_WaitMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::LockManager_WaitMode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::LockInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::LockInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::LockInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in LockInfo struct");
    mojo::internal::Serialize<::blink::mojom::LockMode>(
        Traits::mode(input), &(*output)->mode);
    decltype(Traits::client_id(input)) in_client_id = Traits::client_id(input);
    typename decltype((*output)->client_id)::BaseType::BufferWriter
        client_id_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_client_id, buffer, &client_id_writer, context);
    (*output)->client_id.Set(
        client_id_writer.is_null() ? nullptr : client_id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->client_id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null client_id in LockInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::LockInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::LockInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void LockInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LockInfoDataView::GetClientIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->client_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOCKS_LOCK_MANAGER_MOJOM_SHARED_H_