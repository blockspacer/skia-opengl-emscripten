// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_BASE_IME_MOJO_IME_MOJOM_SHARED_H_
#define UI_BASE_IME_MOJO_IME_MOJOM_SHARED_H_

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
#include "ui/base/ime/mojo/ime.mojom-shared-internal.h"
#include "ui/base/ime/mojo/ime_types.mojom-shared.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ime {
namespace mojom {
class EditorInfoDataView;



}  // namespace mojom
}  // namespace ime

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ime::mojom::EditorInfoDataView> {
  using Data = ::ime::mojom::internal::EditorInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace ime {
namespace mojom {
// Interface base classes. They are used for type safety check.
class ImeEngineInterfaceBase {};

using ImeEnginePtrDataView =
    mojo::InterfacePtrDataView<ImeEngineInterfaceBase>;
using ImeEngineRequestDataView =
    mojo::InterfaceRequestDataView<ImeEngineInterfaceBase>;
using ImeEngineAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImeEngineInterfaceBase>;
using ImeEngineAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImeEngineInterfaceBase>;
class ImeEngineClientInterfaceBase {};

using ImeEngineClientPtrDataView =
    mojo::InterfacePtrDataView<ImeEngineClientInterfaceBase>;
using ImeEngineClientRequestDataView =
    mojo::InterfaceRequestDataView<ImeEngineClientInterfaceBase>;
using ImeEngineClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImeEngineClientInterfaceBase>;
using ImeEngineClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImeEngineClientInterfaceBase>;
class ImeEngineFactoryInterfaceBase {};

using ImeEngineFactoryPtrDataView =
    mojo::InterfacePtrDataView<ImeEngineFactoryInterfaceBase>;
using ImeEngineFactoryRequestDataView =
    mojo::InterfaceRequestDataView<ImeEngineFactoryInterfaceBase>;
using ImeEngineFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ImeEngineFactoryInterfaceBase>;
using ImeEngineFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ImeEngineFactoryInterfaceBase>;
class EditorInfoDataView {
 public:
  EditorInfoDataView() {}

  EditorInfoDataView(
      internal::EditorInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::TextInputType>(
        data_value, output);
  }

  ::ui::mojom::TextInputType type() const {
    return static_cast<::ui::mojom::TextInputType>(data_->type);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::ui::mojom::TextInputMode>(
        data_value, output);
  }

  ::ui::mojom::TextInputMode mode() const {
    return static_cast<::ui::mojom::TextInputMode>(data_->mode);
  }
  int32_t flags() const {
    return data_->flags;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFocusReason(UserType* output) const {
    auto data_value = data_->focus_reason;
    return mojo::internal::Deserialize<::ui::mojom::FocusReason>(
        data_value, output);
  }

  ::ui::mojom::FocusReason focus_reason() const {
    return static_cast<::ui::mojom::FocusReason>(data_->focus_reason);
  }
  bool should_do_learning() const {
    return data_->should_do_learning;
  }
 private:
  internal::EditorInfo_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ime

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ime::mojom::EditorInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ime::mojom::EditorInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ime::mojom::internal::EditorInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::ui::mojom::TextInputType>(
        Traits::type(input), &(*output)->type);
    mojo::internal::Serialize<::ui::mojom::TextInputMode>(
        Traits::mode(input), &(*output)->mode);
    (*output)->flags = Traits::flags(input);
    mojo::internal::Serialize<::ui::mojom::FocusReason>(
        Traits::focus_reason(input), &(*output)->focus_reason);
    (*output)->should_do_learning = Traits::should_do_learning(input);
  }

  static bool Deserialize(::ime::mojom::internal::EditorInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ime::mojom::EditorInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ime {
namespace mojom {




}  // namespace mojom
}  // namespace ime

#endif  // UI_BASE_IME_MOJO_IME_MOJOM_SHARED_H_