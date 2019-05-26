// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/plugins/plugin_registry.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class PluginMimeTypeDataView;

class PluginInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::PluginMimeTypeDataView> {
  using Data = ::blink::mojom::internal::PluginMimeType_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::PluginInfoDataView> {
  using Data = ::blink::mojom::internal::PluginInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PluginRegistryInterfaceBase {};

using PluginRegistryPtrDataView =
    mojo::InterfacePtrDataView<PluginRegistryInterfaceBase>;
using PluginRegistryRequestDataView =
    mojo::InterfaceRequestDataView<PluginRegistryInterfaceBase>;
using PluginRegistryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PluginRegistryInterfaceBase>;
using PluginRegistryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PluginRegistryInterfaceBase>;
class PluginMimeTypeDataView {
 public:
  PluginMimeTypeDataView() {}

  PluginMimeTypeDataView(
      internal::PluginMimeType_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeType(UserType* output) {
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFileExtensionsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileExtensions(UserType* output) {
    auto* pointer = data_->file_extensions.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, context_);
  }
 private:
  internal::PluginMimeType_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class PluginInfoDataView {
 public:
  PluginInfoDataView() {}

  PluginInfoDataView(
      internal::PluginInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDescription(UserType* output) {
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetFilenameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilename(UserType* output) {
    auto* pointer = data_->filename.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  inline void GetMimeTypesDataView(
      mojo::ArrayDataView<PluginMimeTypeDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMimeTypes(UserType* output) {
    auto* pointer = data_->mime_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::PluginMimeTypeDataView>>(
        pointer, output, context_);
  }
  bool may_use_mime_handler_view() const {
    return data_->may_use_mime_handler_view;
  }
 private:
  internal::PluginInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PluginMimeTypeDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PluginMimeTypeDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PluginMimeType_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::mime_type(input)) in_mime_type = Traits::mime_type(input);
    typename decltype((*output)->mime_type)::BaseType::BufferWriter
        mime_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, buffer, &mime_type_writer, context);
    (*output)->mime_type.Set(
        mime_type_writer.is_null() ? nullptr : mime_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in PluginMimeType struct");
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
        "null description in PluginMimeType struct");
    decltype(Traits::file_extensions(input)) in_file_extensions = Traits::file_extensions(input);
    typename decltype((*output)->file_extensions)::BaseType::BufferWriter
        file_extensions_writer;
    const mojo::internal::ContainerValidateParams file_extensions_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_file_extensions, buffer, &file_extensions_writer, &file_extensions_validate_params,
        context);
    (*output)->file_extensions.Set(
        file_extensions_writer.is_null() ? nullptr : file_extensions_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->file_extensions.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null file_extensions in PluginMimeType struct");
  }

  static bool Deserialize(::blink::mojom::internal::PluginMimeType_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PluginMimeTypeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PluginInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::PluginInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PluginInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in PluginInfo struct");
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
        "null description in PluginInfo struct");
    decltype(Traits::filename(input)) in_filename = Traits::filename(input);
    typename decltype((*output)->filename)::BaseType::BufferWriter
        filename_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_filename, buffer, &filename_writer, context);
    (*output)->filename.Set(
        filename_writer.is_null() ? nullptr : filename_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->filename.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filename in PluginInfo struct");
    (*output)->background_color = Traits::background_color(input);
    decltype(Traits::mime_types(input)) in_mime_types = Traits::mime_types(input);
    typename decltype((*output)->mime_types)::BaseType::BufferWriter
        mime_types_writer;
    const mojo::internal::ContainerValidateParams mime_types_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::PluginMimeTypeDataView>>(
        in_mime_types, buffer, &mime_types_writer, &mime_types_validate_params,
        context);
    (*output)->mime_types.Set(
        mime_types_writer.is_null() ? nullptr : mime_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->mime_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_types in PluginInfo struct");
    (*output)->may_use_mime_handler_view = Traits::may_use_mime_handler_view(input);
  }

  static bool Deserialize(::blink::mojom::internal::PluginInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::PluginInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void PluginMimeTypeDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PluginMimeTypeDataView::GetDescriptionDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PluginMimeTypeDataView::GetFileExtensionsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->file_extensions.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}


inline void PluginInfoDataView::GetNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PluginInfoDataView::GetDescriptionDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->description.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void PluginInfoDataView::GetFilenameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->filename.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void PluginInfoDataView::GetMimeTypesDataView(
    mojo::ArrayDataView<PluginMimeTypeDataView>* output) {
  auto pointer = data_->mime_types.Get();
  *output = mojo::ArrayDataView<PluginMimeTypeDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PLUGINS_PLUGIN_REGISTRY_MOJOM_SHARED_H_