// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_H_

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
#include "components/services/filesystem/public/interfaces/directory.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/file.mojom-shared.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_error.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace filesystem {
namespace mojom {
class FileOpenDetailsDataView;

class FileOpenResultDataView;



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::filesystem::mojom::FileOpenDetailsDataView> {
  using Data = ::filesystem::mojom::internal::FileOpenDetails_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::filesystem::mojom::FileOpenResultDataView> {
  using Data = ::filesystem::mojom::internal::FileOpenResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace filesystem {
namespace mojom {
// Interface base classes. They are used for type safety check.
class DirectoryInterfaceBase {};

using DirectoryPtrDataView =
    mojo::InterfacePtrDataView<DirectoryInterfaceBase>;
using DirectoryRequestDataView =
    mojo::InterfaceRequestDataView<DirectoryInterfaceBase>;
using DirectoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<DirectoryInterfaceBase>;
using DirectoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<DirectoryInterfaceBase>;
class FileOpenDetailsDataView {
 public:
  FileOpenDetailsDataView() {}

  FileOpenDetailsDataView(
      internal::FileOpenDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint32_t open_flags() const {
    return data_->open_flags;
  }
 private:
  internal::FileOpenDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class FileOpenResultDataView {
 public:
  FileOpenResultDataView() {}

  FileOpenResultDataView(
      internal::FileOpenResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::mojo_base::mojom::FileError>(
        data_value, output);
  }

  ::mojo_base::mojom::FileError error() const {
    return static_cast<::mojo_base::mojom::FileError>(data_->error);
  }
  inline void GetFileHandleDataView(
      ::mojo_base::mojom::FileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileHandle(UserType* output) {
    auto* pointer = data_->file_handle.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FileDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileOpenResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileOpenDetailsDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileOpenDetailsDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileOpenDetails_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in FileOpenDetails struct");
    (*output)->open_flags = Traits::open_flags(input);
  }

  static bool Deserialize(::filesystem::mojom::internal::FileOpenDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileOpenDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileOpenResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileOpenResultDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileOpenResult_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in FileOpenResult struct");
    mojo::internal::Serialize<::mojo_base::mojom::FileError>(
        Traits::error(input), &(*output)->error);
    decltype(Traits::file_handle(input)) in_file_handle = Traits::file_handle(input);
    typename decltype((*output)->file_handle)::BaseType::BufferWriter
        file_handle_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
        in_file_handle, buffer, &file_handle_writer, context);
    (*output)->file_handle.Set(
        file_handle_writer.is_null() ? nullptr : file_handle_writer.data());
  }

  static bool Deserialize(::filesystem::mojom::internal::FileOpenResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileOpenResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace filesystem {
namespace mojom {

inline void FileOpenDetailsDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}


inline void FileOpenResultDataView::GetPathDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->path.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FileOpenResultDataView::GetFileHandleDataView(
    ::mojo_base::mojom::FileDataView* output) {
  auto pointer = data_->file_handle.Get();
  *output = ::mojo_base::mojom::FileDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_H_