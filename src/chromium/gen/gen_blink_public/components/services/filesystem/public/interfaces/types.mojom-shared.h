// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_SHARED_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_SHARED_H_

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
#include "components/services/filesystem/public/interfaces/types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace filesystem {
namespace mojom {
class TimespecOrNowDataView;

class FileInformationDataView;

class DirectoryEntryDataView;



}  // namespace mojom
}  // namespace filesystem

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::filesystem::mojom::TimespecOrNowDataView> {
  using Data = ::filesystem::mojom::internal::TimespecOrNow_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::filesystem::mojom::FileInformationDataView> {
  using Data = ::filesystem::mojom::internal::FileInformation_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::filesystem::mojom::DirectoryEntryDataView> {
  using Data = ::filesystem::mojom::internal::DirectoryEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace filesystem {
namespace mojom {


enum class Whence : int32_t {
  
  FROM_BEGIN = 0,
  
  FROM_CURRENT = 1,
  
  FROM_END = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, Whence value);
inline bool IsKnownEnumValue(Whence value) {
  return internal::Whence_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FsFileType : int32_t {
  
  UNKNOWN = 0,
  
  REGULAR_FILE,
  
  DIRECTORY,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, FsFileType value);
inline bool IsKnownEnumValue(FsFileType value) {
  return internal::FsFileType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class TimespecOrNowDataView {
 public:
  TimespecOrNowDataView() {}

  TimespecOrNowDataView(
      internal::TimespecOrNow_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool now() const {
    return data_->now;
  }
  double seconds() const {
    return data_->seconds;
  }
 private:
  internal::TimespecOrNow_Data* data_ = nullptr;
};

class FileInformationDataView {
 public:
  FileInformationDataView() {}

  FileInformationDataView(
      internal::FileInformation_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::filesystem::mojom::FsFileType>(
        data_value, output);
  }

  FsFileType type() const {
    return static_cast<FsFileType>(data_->type);
  }
  int64_t size() const {
    return data_->size;
  }
  double atime() const {
    return data_->atime;
  }
  double mtime() const {
    return data_->mtime;
  }
  double ctime() const {
    return data_->ctime;
  }
 private:
  internal::FileInformation_Data* data_ = nullptr;
};

class DirectoryEntryDataView {
 public:
  DirectoryEntryDataView() {}

  DirectoryEntryDataView(
      internal::DirectoryEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::filesystem::mojom::FsFileType>(
        data_value, output);
  }

  FsFileType type() const {
    return static_cast<FsFileType>(data_->type);
  }
 private:
  internal::DirectoryEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace filesystem

namespace std {

template <>
struct hash<::filesystem::mojom::Whence>
    : public mojo::internal::EnumHashImpl<::filesystem::mojom::Whence> {};

template <>
struct hash<::filesystem::mojom::FsFileType>
    : public mojo::internal::EnumHashImpl<::filesystem::mojom::FsFileType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::filesystem::mojom::Whence, ::filesystem::mojom::Whence> {
  static ::filesystem::mojom::Whence ToMojom(::filesystem::mojom::Whence input) { return input; }
  static bool FromMojom(::filesystem::mojom::Whence input, ::filesystem::mojom::Whence* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::Whence, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::filesystem::mojom::Whence, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::filesystem::mojom::Whence>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::filesystem::mojom::FsFileType, ::filesystem::mojom::FsFileType> {
  static ::filesystem::mojom::FsFileType ToMojom(::filesystem::mojom::FsFileType input) { return input; }
  static bool FromMojom(::filesystem::mojom::FsFileType input, ::filesystem::mojom::FsFileType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FsFileType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::filesystem::mojom::FsFileType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::filesystem::mojom::FsFileType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::TimespecOrNowDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::TimespecOrNowDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::TimespecOrNow_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->now = Traits::now(input);
    (*output)->seconds = Traits::seconds(input);
  }

  static bool Deserialize(::filesystem::mojom::internal::TimespecOrNow_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::TimespecOrNowDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::FileInformationDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::FileInformationDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::FileInformation_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::filesystem::mojom::FsFileType>(
        Traits::type(input), &(*output)->type);
    (*output)->size = Traits::size(input);
    (*output)->atime = Traits::atime(input);
    (*output)->mtime = Traits::mtime(input);
    (*output)->ctime = Traits::ctime(input);
  }

  static bool Deserialize(::filesystem::mojom::internal::FileInformation_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::FileInformationDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::filesystem::mojom::DirectoryEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::filesystem::mojom::DirectoryEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::filesystem::mojom::internal::DirectoryEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::name(input)) in_name = Traits::name(input);
    typename decltype((*output)->name)::BaseType::BufferWriter
        name_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_name, buffer, &name_writer, context);
    (*output)->name.Set(
        name_writer.is_null() ? nullptr : name_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in DirectoryEntry struct");
    mojo::internal::Serialize<::filesystem::mojom::FsFileType>(
        Traits::type(input), &(*output)->type);
  }

  static bool Deserialize(::filesystem::mojom::internal::DirectoryEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::filesystem::mojom::DirectoryEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace filesystem {
namespace mojom {





inline void DirectoryEntryDataView::GetNameDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->name.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_SHARED_H_