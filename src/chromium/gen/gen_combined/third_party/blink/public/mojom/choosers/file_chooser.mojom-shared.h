// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/choosers/file_chooser.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FileChooserParamsDataView;

class NativeFileInfoDataView;

class FileSystemFileInfoDataView;

class FileChooserResultDataView;

class FileChooserFileInfoDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FileChooserParamsDataView> {
  using Data = ::blink::mojom::internal::FileChooserParams_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::NativeFileInfoDataView> {
  using Data = ::blink::mojom::internal::NativeFileInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::FileSystemFileInfoDataView> {
  using Data = ::blink::mojom::internal::FileSystemFileInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::FileChooserResultDataView> {
  using Data = ::blink::mojom::internal::FileChooserResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::FileChooserFileInfoDataView> {
  using Data = ::blink::mojom::internal::FileChooserFileInfo_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class FileChooserParams_Mode : int32_t {
  
  kOpen,
  
  kOpenMultiple,
  
  kUploadFolder,
  
  kSave,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FileChooserParams_Mode value);
inline bool IsKnownEnumValue(FileChooserParams_Mode value) {
  return internal::FileChooserParams_Mode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FileChooserInterfaceBase {};

using FileChooserPtrDataView =
    mojo::InterfacePtrDataView<FileChooserInterfaceBase>;
using FileChooserRequestDataView =
    mojo::InterfaceRequestDataView<FileChooserInterfaceBase>;
using FileChooserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileChooserInterfaceBase>;
using FileChooserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileChooserInterfaceBase>;
class FileChooserParamsDataView {
 public:
  FileChooserParamsDataView() {}

  FileChooserParamsDataView(
      internal::FileChooserParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::blink::mojom::FileChooserParams_Mode>(
        data_value, output);
  }

  FileChooserParams_Mode mode() const {
    return static_cast<FileChooserParams_Mode>(data_->mode);
  }
  inline void GetTitleDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadTitle(UserType* output) {
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
  inline void GetDefaultFileNameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDefaultFileName(UserType* output) {
    auto* pointer = data_->default_file_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetSelectedFilesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSelectedFiles(UserType* output) {
    auto* pointer = data_->selected_files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>>(
        pointer, output, context_);
  }
  inline void GetAcceptTypesDataView(
      mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadAcceptTypes(UserType* output) {
    auto* pointer = data_->accept_types.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        pointer, output, context_);
  }
  bool need_local_path() const {
    return data_->need_local_path;
  }
  bool use_media_capture() const {
    return data_->use_media_capture;
  }
  inline void GetRequestorDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRequestor(UserType* output) {
    auto* pointer = data_->requestor.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooserParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileInfoDataView {
 public:
  NativeFileInfoDataView() {}

  NativeFileInfoDataView(
      internal::NativeFileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilePathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFilePath(UserType* output) {
    auto* pointer = data_->file_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      ::mojo_base::mojom::String16DataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadDisplayName(UserType* output) {
    auto* pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::String16DataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileSystemFileInfoDataView {
 public:
  FileSystemFileInfoDataView() {}

  FileSystemFileInfoDataView(
      internal::FileSystemFileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUrl(UserType* output) {
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  inline void GetModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadModificationTime(UserType* output) {
    auto* pointer = data_->modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  int64_t length() const {
    return data_->length;
  }
 private:
  internal::FileSystemFileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileChooserResultDataView {
 public:
  FileChooserResultDataView() {}

  FileChooserResultDataView(
      internal::FileChooserResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFilesDataView(
      mojo::ArrayDataView<FileChooserFileInfoDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFiles(UserType* output) {
    auto* pointer = data_->files.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::FileChooserFileInfoDataView>>(
        pointer, output, context_);
  }
  inline void GetBaseDirectoryDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBaseDirectory(UserType* output) {
    auto* pointer = data_->base_directory.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileChooserResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileChooserFileInfoDataView {
 public:
  using Tag = internal::FileChooserFileInfo_Data::FileChooserFileInfo_Tag;

  FileChooserFileInfoDataView() {}

  FileChooserFileInfoDataView(
      internal::FileChooserFileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_native_file() const { return data_->tag == Tag::NATIVE_FILE; }
  inline void GetNativeFileDataView(
      NativeFileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNativeFile(UserType* output) {
    DCHECK(is_native_file());
    return mojo::internal::Deserialize<::blink::mojom::NativeFileInfoDataView>(
        data_->data.f_native_file.Get(), output, context_);
  }
  bool is_file_system() const { return data_->tag == Tag::FILE_SYSTEM; }
  inline void GetFileSystemDataView(
      FileSystemFileInfoDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileSystem(UserType* output) {
    DCHECK(is_file_system());
    return mojo::internal::Deserialize<::blink::mojom::FileSystemFileInfoDataView>(
        data_->data.f_file_system.Get(), output, context_);
  }

 private:
  internal::FileChooserFileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::FileChooserParams_Mode>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FileChooserParams_Mode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::FileChooserParams_Mode, ::blink::mojom::FileChooserParams_Mode> {
  static ::blink::mojom::FileChooserParams_Mode ToMojom(::blink::mojom::FileChooserParams_Mode input) { return input; }
  static bool FromMojom(::blink::mojom::FileChooserParams_Mode input, ::blink::mojom::FileChooserParams_Mode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileChooserParams_Mode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FileChooserParams_Mode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FileChooserParams_Mode>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileChooserParamsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FileChooserParamsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FileChooserParams_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::blink::mojom::FileChooserParams_Mode>(
        Traits::mode(input), &(*output)->mode);
    decltype(Traits::title(input)) in_title = Traits::title(input);
    typename decltype((*output)->title)::BaseType::BufferWriter
        title_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_title, buffer, &title_writer, context);
    (*output)->title.Set(
        title_writer.is_null() ? nullptr : title_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in FileChooserParams struct");
    decltype(Traits::default_file_name(input)) in_default_file_name = Traits::default_file_name(input);
    typename decltype((*output)->default_file_name)::BaseType::BufferWriter
        default_file_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_default_file_name, buffer, &default_file_name_writer, context);
    (*output)->default_file_name.Set(
        default_file_name_writer.is_null() ? nullptr : default_file_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->default_file_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null default_file_name in FileChooserParams struct");
    decltype(Traits::selected_files(input)) in_selected_files = Traits::selected_files(input);
    typename decltype((*output)->selected_files)::BaseType::BufferWriter
        selected_files_writer;
    const mojo::internal::ContainerValidateParams selected_files_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>>(
        in_selected_files, buffer, &selected_files_writer, &selected_files_validate_params,
        context);
    (*output)->selected_files.Set(
        selected_files_writer.is_null() ? nullptr : selected_files_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->selected_files.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null selected_files in FileChooserParams struct");
    decltype(Traits::accept_types(input)) in_accept_types = Traits::accept_types(input);
    typename decltype((*output)->accept_types)::BaseType::BufferWriter
        accept_types_writer;
    const mojo::internal::ContainerValidateParams accept_types_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo_base::mojom::String16DataView>>(
        in_accept_types, buffer, &accept_types_writer, &accept_types_validate_params,
        context);
    (*output)->accept_types.Set(
        accept_types_writer.is_null() ? nullptr : accept_types_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->accept_types.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null accept_types in FileChooserParams struct");
    (*output)->need_local_path = Traits::need_local_path(input);
    (*output)->use_media_capture = Traits::use_media_capture(input);
    decltype(Traits::requestor(input)) in_requestor = Traits::requestor(input);
    typename decltype((*output)->requestor)::BaseType::BufferWriter
        requestor_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_requestor, buffer, &requestor_writer, context);
    (*output)->requestor.Set(
        requestor_writer.is_null() ? nullptr : requestor_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->requestor.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null requestor in FileChooserParams struct");
  }

  static bool Deserialize(::blink::mojom::internal::FileChooserParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FileChooserParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NativeFileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NativeFileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NativeFileInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::file_path(input)) in_file_path = Traits::file_path(input);
    typename decltype((*output)->file_path)::BaseType::BufferWriter
        file_path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_file_path, buffer, &file_path_writer, context);
    (*output)->file_path.Set(
        file_path_writer.is_null() ? nullptr : file_path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->file_path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null file_path in NativeFileInfo struct");
    decltype(Traits::display_name(input)) in_display_name = Traits::display_name(input);
    typename decltype((*output)->display_name)::BaseType::BufferWriter
        display_name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
        in_display_name, buffer, &display_name_writer, context);
    (*output)->display_name.Set(
        display_name_writer.is_null() ? nullptr : display_name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->display_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null display_name in NativeFileInfo struct");
  }

  static bool Deserialize(::blink::mojom::internal::NativeFileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NativeFileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileSystemFileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FileSystemFileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FileSystemFileInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::url(input)) in_url = Traits::url(input);
    typename decltype((*output)->url)::BaseType::BufferWriter
        url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_url, buffer, &url_writer, context);
    (*output)->url.Set(
        url_writer.is_null() ? nullptr : url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in FileSystemFileInfo struct");
    decltype(Traits::modification_time(input)) in_modification_time = Traits::modification_time(input);
    typename decltype((*output)->modification_time)::BaseType::BufferWriter
        modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_modification_time, buffer, &modification_time_writer, context);
    (*output)->modification_time.Set(
        modification_time_writer.is_null() ? nullptr : modification_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->modification_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null modification_time in FileSystemFileInfo struct");
    (*output)->length = Traits::length(input);
  }

  static bool Deserialize(::blink::mojom::internal::FileSystemFileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FileSystemFileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileChooserResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FileChooserResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FileChooserResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::files(input)) in_files = Traits::files(input);
    typename decltype((*output)->files)::BaseType::BufferWriter
        files_writer;
    const mojo::internal::ContainerValidateParams files_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::FileChooserFileInfoDataView>>(
        in_files, buffer, &files_writer, &files_validate_params,
        context);
    (*output)->files.Set(
        files_writer.is_null() ? nullptr : files_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->files.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null files in FileChooserResult struct");
    decltype(Traits::base_directory(input)) in_base_directory = Traits::base_directory(input);
    typename decltype((*output)->base_directory)::BaseType::BufferWriter
        base_directory_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_base_directory, buffer, &base_directory_writer, context);
    (*output)->base_directory.Set(
        base_directory_writer.is_null() ? nullptr : base_directory_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->base_directory.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null base_directory in FileChooserResult struct");
  }

  static bool Deserialize(::blink::mojom::internal::FileChooserResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FileChooserResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileChooserFileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::FileChooserFileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FileChooserFileInfo_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::FileChooserFileInfo_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::FileChooserFileInfoDataView::Tag::NATIVE_FILE: {
        decltype(Traits::native_file(input))
            in_native_file = Traits::native_file(input);
        typename decltype(result->data.f_native_file)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::NativeFileInfoDataView>(
            in_native_file, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null native_file in FileChooserFileInfo union");
        result->data.f_native_file.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::FileChooserFileInfoDataView::Tag::FILE_SYSTEM: {
        decltype(Traits::file_system(input))
            in_file_system = Traits::file_system(input);
        typename decltype(result->data.f_file_system)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::FileSystemFileInfoDataView>(
            in_file_system, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null file_system in FileChooserFileInfo union");
        result->data.f_file_system.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::FileChooserFileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FileChooserFileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FileChooserParamsDataView::GetTitleDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->title.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}
inline void FileChooserParamsDataView::GetDefaultFileNameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->default_file_name.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void FileChooserParamsDataView::GetSelectedFilesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>* output) {
  auto pointer = data_->selected_files.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::FilePathDataView>(pointer, context_);
}
inline void FileChooserParamsDataView::GetAcceptTypesDataView(
    mojo::ArrayDataView<::mojo_base::mojom::String16DataView>* output) {
  auto pointer = data_->accept_types.Get();
  *output = mojo::ArrayDataView<::mojo_base::mojom::String16DataView>(pointer, context_);
}
inline void FileChooserParamsDataView::GetRequestorDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->requestor.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


inline void NativeFileInfoDataView::GetFilePathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->file_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void NativeFileInfoDataView::GetDisplayNameDataView(
    ::mojo_base::mojom::String16DataView* output) {
  auto pointer = data_->display_name.Get();
  *output = ::mojo_base::mojom::String16DataView(pointer, context_);
}


inline void FileSystemFileInfoDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void FileSystemFileInfoDataView::GetModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void FileChooserResultDataView::GetFilesDataView(
    mojo::ArrayDataView<FileChooserFileInfoDataView>* output) {
  auto pointer = data_->files.Get();
  *output = mojo::ArrayDataView<FileChooserFileInfoDataView>(pointer, context_);
}
inline void FileChooserResultDataView::GetBaseDirectoryDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->base_directory.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}


inline void FileChooserFileInfoDataView::GetNativeFileDataView(
    NativeFileInfoDataView* output) {
  DCHECK(is_native_file());
  *output = NativeFileInfoDataView(data_->data.f_native_file.Get(), context_);
}
inline void FileChooserFileInfoDataView::GetFileSystemDataView(
    FileSystemFileInfoDataView* output) {
  DCHECK(is_file_system());
  *output = FileSystemFileInfoDataView(data_->data.f_file_system.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHOOSERS_FILE_CHOOSER_MOJOM_SHARED_H_