// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/frame/find_in_page.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FindOptionsDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FindOptionsDataView> {
  using Data = ::blink::mojom::internal::FindOptions_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class StopFindAction : int32_t {
  
  kStopFindActionClearSelection,
  
  kStopFindActionKeepSelection,
  
  kStopFindActionActivateSelection,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, StopFindAction value);
inline bool IsKnownEnumValue(StopFindAction value) {
  return internal::StopFindAction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FindMatchUpdateType : int32_t {
  
  kFinalUpdate,
  
  kMoreUpdatesComing,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FindMatchUpdateType value);
inline bool IsKnownEnumValue(FindMatchUpdateType value) {
  return internal::FindMatchUpdateType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FindInPageInterfaceBase {};

using FindInPagePtrDataView =
    mojo::InterfacePtrDataView<FindInPageInterfaceBase>;
using FindInPageRequestDataView =
    mojo::InterfaceRequestDataView<FindInPageInterfaceBase>;
using FindInPageAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FindInPageInterfaceBase>;
using FindInPageAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FindInPageInterfaceBase>;
class FindInPageClientInterfaceBase {};

using FindInPageClientPtrDataView =
    mojo::InterfacePtrDataView<FindInPageClientInterfaceBase>;
using FindInPageClientRequestDataView =
    mojo::InterfaceRequestDataView<FindInPageClientInterfaceBase>;
using FindInPageClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FindInPageClientInterfaceBase>;
using FindInPageClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FindInPageClientInterfaceBase>;
class FindOptionsDataView {
 public:
  FindOptionsDataView() {}

  FindOptionsDataView(
      internal::FindOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool forward() const {
    return data_->forward;
  }
  bool match_case() const {
    return data_->match_case;
  }
  bool find_next() const {
    return data_->find_next;
  }
  bool force() const {
    return data_->force;
  }
  bool run_synchronously_for_testing() const {
    return data_->run_synchronously_for_testing;
  }
 private:
  internal::FindOptions_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::StopFindAction>
    : public mojo::internal::EnumHashImpl<::blink::mojom::StopFindAction> {};

template <>
struct hash<::blink::mojom::FindMatchUpdateType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FindMatchUpdateType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::StopFindAction, ::blink::mojom::StopFindAction> {
  static ::blink::mojom::StopFindAction ToMojom(::blink::mojom::StopFindAction input) { return input; }
  static bool FromMojom(::blink::mojom::StopFindAction input, ::blink::mojom::StopFindAction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::StopFindAction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::StopFindAction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::StopFindAction>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::FindMatchUpdateType, ::blink::mojom::FindMatchUpdateType> {
  static ::blink::mojom::FindMatchUpdateType ToMojom(::blink::mojom::FindMatchUpdateType input) { return input; }
  static bool FromMojom(::blink::mojom::FindMatchUpdateType input, ::blink::mojom::FindMatchUpdateType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FindMatchUpdateType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FindMatchUpdateType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FindMatchUpdateType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FindOptionsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FindOptionsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FindOptions_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->forward = Traits::forward(input);
    (*output)->match_case = Traits::match_case(input);
    (*output)->find_next = Traits::find_next(input);
    (*output)->force = Traits::force(input);
    (*output)->run_synchronously_for_testing = Traits::run_synchronously_for_testing(input);
  }

  static bool Deserialize(::blink::mojom::internal::FindOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FindOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_SHARED_H_