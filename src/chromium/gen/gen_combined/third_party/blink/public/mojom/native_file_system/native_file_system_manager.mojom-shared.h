// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class ChooseFileSystemEntryAcceptsOptionDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView> {
  using Data = ::blink::mojom::internal::ChooseFileSystemEntryAcceptsOption_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class ChooseFileSystemEntryType : int32_t {
  
  kOpenFile,
  
  kOpenMultipleFiles,
  
  kSaveFile,
  
  kOpenDirectory,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, ChooseFileSystemEntryType value);
inline bool IsKnownEnumValue(ChooseFileSystemEntryType value) {
  return internal::ChooseFileSystemEntryType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class NativeFileSystemManagerInterfaceBase {};

using NativeFileSystemManagerPtrDataView =
    mojo::InterfacePtrDataView<NativeFileSystemManagerInterfaceBase>;
using NativeFileSystemManagerRequestDataView =
    mojo::InterfaceRequestDataView<NativeFileSystemManagerInterfaceBase>;
using NativeFileSystemManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeFileSystemManagerInterfaceBase>;
using NativeFileSystemManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeFileSystemManagerInterfaceBase>;
class ChooseFileSystemEntryAcceptsOptionDataView {
 public:
  ChooseFileSystemEntryAcceptsOptionDataView() {}

  ChooseFileSystemEntryAcceptsOptionDataView(
      internal::ChooseFileSystemEntryAcceptsOption_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDescriptionDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetMimeTypesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeTypes(UserType* output) {
    auto* pointer = data_->mime_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
  inline void GetExtensionsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExtensions(UserType* output) {
    auto* pointer = data_->extensions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::ChooseFileSystemEntryAcceptsOption_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::ChooseFileSystemEntryType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::ChooseFileSystemEntryType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::ChooseFileSystemEntryType, ::blink::mojom::ChooseFileSystemEntryType> {
  static ::blink::mojom::ChooseFileSystemEntryType ToMojom(::blink::mojom::ChooseFileSystemEntryType input) { return input; }
  static bool FromMojom(::blink::mojom::ChooseFileSystemEntryType input, ::blink::mojom::ChooseFileSystemEntryType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ChooseFileSystemEntryType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::ChooseFileSystemEntryType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::ChooseFileSystemEntryType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::ChooseFileSystemEntryAcceptsOption_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::description(input)) in_description = Traits::description(input);
    typename decltype((*output)->description)::BaseType::BufferWriter
        description_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_description, buffer, &description_writer, context);
    (*output)->description.Set(
        description_writer.is_null() ? nullptr : description_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->description.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in ChooseFileSystemEntryAcceptsOption struct");
    decltype(Traits::mime_types(input)) in_mime_types = Traits::mime_types(input);
    typename decltype((*output)->mime_types)::BaseType::BufferWriter
        mime_types_writer;
    const mojo::internal::ContainerValidateParams mime_types_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_mime_types, buffer, &mime_types_writer, &mime_types_validate_params,
        context);
    (*output)->mime_types.Set(
        mime_types_writer.is_null() ? nullptr : mime_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_types in ChooseFileSystemEntryAcceptsOption struct");
    decltype(Traits::extensions(input)) in_extensions = Traits::extensions(input);
    typename decltype((*output)->extensions)::BaseType::BufferWriter
        extensions_writer;
    const mojo::internal::ContainerValidateParams extensions_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_extensions, buffer, &extensions_writer, &extensions_validate_params,
        context);
    (*output)->extensions.Set(
        extensions_writer.is_null() ? nullptr : extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null extensions in ChooseFileSystemEntryAcceptsOption struct");
  }

  static bool Deserialize(::blink::mojom::internal::ChooseFileSystemEntryAcceptsOption_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::ChooseFileSystemEntryAcceptsOptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void ChooseFileSystemEntryAcceptsOptionDataView::GetDescriptionDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void ChooseFileSystemEntryAcceptsOptionDataView::GetMimeTypesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->mime_types.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void ChooseFileSystemEntryAcceptsOptionDataView::GetExtensionsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->extensions.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_SHARED_H_