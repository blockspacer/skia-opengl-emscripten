// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ClipboardFormat : int32_t {
  
  kPlaintext,
  
  kHtml,
  
  kSmartPaste,
  
  kBookmark,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ClipboardFormat value);
inline bool IsKnownEnumValue(ClipboardFormat value) {
  return internal::ClipboardFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ClipboardBuffer : int32_t {
  
  kStandard,
  
  kSelection,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ClipboardBuffer value);
inline bool IsKnownEnumValue(ClipboardBuffer value) {
  return internal::ClipboardBuffer_Data::IsKnownValue(
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
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ClipboardFormat>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ClipboardFormat> {};

template <>
struct hash<::blink::mojom::ClipboardBuffer>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ClipboardBuffer> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ClipboardFormat, ::blink::mojom::ClipboardFormat> {
  static ::blink::mojom::ClipboardFormat ToMojom(::blink::mojom::ClipboardFormat input) { return input; }
  static bool FromMojom(::blink::mojom::ClipboardFormat input, ::blink::mojom::ClipboardFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ClipboardFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ClipboardFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ClipboardFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::ClipboardBuffer, ::blink::mojom::ClipboardBuffer> {
  static ::blink::mojom::ClipboardBuffer ToMojom(::blink::mojom::ClipboardBuffer input) { return input; }
  static bool FromMojom(::blink::mojom::ClipboardBuffer input, ::blink::mojom::ClipboardBuffer* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ClipboardBuffer, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ClipboardBuffer, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ClipboardBuffer>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_SHARED_H_