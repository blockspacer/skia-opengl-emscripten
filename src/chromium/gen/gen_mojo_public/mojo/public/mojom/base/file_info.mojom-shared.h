// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_H_

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
#include "mojo/public/mojom/base/file_info.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
class FileInfoDataView;



}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo_base::mojom::FileInfoDataView> {
  using Data = ::mojo_base::mojom::internal::FileInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {
class FileInfoDataView {
 public:
  FileInfoDataView() {}

  FileInfoDataView(
      internal::FileInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t size() const {
    return data_->size;
  }
  bool is_directory() const {
    return data_->is_directory;
  }
  bool is_symbolic_link() const {
    return data_->is_symbolic_link;
  }
  inline void GetLastModifiedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastModified(UserType* output) {
    auto* pointer = data_->last_modified.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetLastAccessedDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadLastAccessed(UserType* output) {
    auto* pointer = data_->last_accessed.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
  inline void GetCreationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadCreationTime(UserType* output) {
    auto* pointer = data_->creation_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::FileInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace mojo_base

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::FileInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::FileInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::FileInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->size = Traits::size(input);
    (*output)->is_directory = Traits::is_directory(input);
    (*output)->is_symbolic_link = Traits::is_symbolic_link(input);
    decltype(Traits::last_modified(input)) in_last_modified = Traits::last_modified(input);
    typename decltype((*output)->last_modified)::BaseType::BufferWriter
        last_modified_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_modified, buffer, &last_modified_writer, context);
    (*output)->last_modified.Set(
        last_modified_writer.is_null() ? nullptr : last_modified_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_modified.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_modified in FileInfo struct");
    decltype(Traits::last_accessed(input)) in_last_accessed = Traits::last_accessed(input);
    typename decltype((*output)->last_accessed)::BaseType::BufferWriter
        last_accessed_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_last_accessed, buffer, &last_accessed_writer, context);
    (*output)->last_accessed.Set(
        last_accessed_writer.is_null() ? nullptr : last_accessed_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->last_accessed.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null last_accessed in FileInfo struct");
    decltype(Traits::creation_time(input)) in_creation_time = Traits::creation_time(input);
    typename decltype((*output)->creation_time)::BaseType::BufferWriter
        creation_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_creation_time, buffer, &creation_time_writer, context);
    (*output)->creation_time.Set(
        creation_time_writer.is_null() ? nullptr : creation_time_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->creation_time.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null creation_time in FileInfo struct");
  }

  static bool Deserialize(::mojo_base::mojom::internal::FileInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::FileInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {

inline void FileInfoDataView::GetLastModifiedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_modified.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void FileInfoDataView::GetLastAccessedDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->last_accessed.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}
inline void FileInfoDataView::GetCreationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->creation_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_FILE_INFO_MOJOM_SHARED_H_