// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_file_handle.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_error.mojom-shared.h"
#include "third_party/blink/public/mojom/native_file_system/native_file_system_transfer_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class NativeFileSystemEntryDataView;

class NativeFileSystemHandleDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::NativeFileSystemEntryDataView> {
  using Data = ::blink::mojom::internal::NativeFileSystemEntry_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::NativeFileSystemHandleDataView> {
  using Data = ::blink::mojom::internal::NativeFileSystemHandle_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class NativeFileSystemDirectoryHandleInterfaceBase {};

using NativeFileSystemDirectoryHandlePtrDataView =
    mojo::InterfacePtrDataView<NativeFileSystemDirectoryHandleInterfaceBase>;
using NativeFileSystemDirectoryHandleRequestDataView =
    mojo::InterfaceRequestDataView<NativeFileSystemDirectoryHandleInterfaceBase>;
using NativeFileSystemDirectoryHandleAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NativeFileSystemDirectoryHandleInterfaceBase>;
using NativeFileSystemDirectoryHandleAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NativeFileSystemDirectoryHandleInterfaceBase>;
class NativeFileSystemEntryDataView {
 public:
  NativeFileSystemEntryDataView() {}

  NativeFileSystemEntryDataView(
      internal::NativeFileSystemEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEntryHandleDataView(
      NativeFileSystemHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEntryHandle(UserType* output) {
    auto* pointer = !data_->entry_handle.is_null() ? &data_->entry_handle : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::NativeFileSystemHandleDataView>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
 private:
  internal::NativeFileSystemEntry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeFileSystemHandleDataView {
 public:
  using Tag = internal::NativeFileSystemHandle_Data::NativeFileSystemHandle_Tag;

  NativeFileSystemHandleDataView() {}

  NativeFileSystemHandleDataView(
      internal::NativeFileSystemHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_file() const { return data_->tag == Tag::FILE; }
  template <typename UserType>
  UserType TakeFile() {
    DCHECK(is_file());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemFileHandlePtrDataView>(
            &data_->data.f_file, &result, context_);
    DCHECK(ret);
    return result;
  }
  bool is_directory() const { return data_->tag == Tag::DIRECTORY; }
  template <typename UserType>
  UserType TakeDirectory() {
    DCHECK(is_directory());
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::NativeFileSystemDirectoryHandlePtrDataView>(
            &data_->data.f_directory, &result, context_);
    DCHECK(ret);
    return result;
  }

 private:
  internal::NativeFileSystemHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NativeFileSystemEntryDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::NativeFileSystemEntryDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NativeFileSystemEntry_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::entry_handle(input)) in_entry_handle = Traits::entry_handle(input);
    typename decltype((*output)->entry_handle)::BufferWriter entry_handle_writer;
    entry_handle_writer.AllocateInline(buffer, &(*output)->entry_handle);
    mojo::internal::Serialize<::blink::mojom::NativeFileSystemHandleDataView>(
        in_entry_handle, buffer, &entry_handle_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->entry_handle.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null entry_handle in NativeFileSystemEntry struct");
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
        "null name in NativeFileSystemEntry struct");
  }

  static bool Deserialize(::blink::mojom::internal::NativeFileSystemEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NativeFileSystemEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NativeFileSystemHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::NativeFileSystemHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::NativeFileSystemHandle_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::NativeFileSystemHandle_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::NativeFileSystemHandleDataView::Tag::FILE: {
        decltype(Traits::file(input))
            in_file = Traits::file(input);
        mojo::internal::Serialize<::blink::mojom::NativeFileSystemFileHandlePtrDataView>(
            in_file, &result->data.f_file, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_file),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid file in NativeFileSystemHandle union");
        break;
      }
      case ::blink::mojom::NativeFileSystemHandleDataView::Tag::DIRECTORY: {
        decltype(Traits::directory(input))
            in_directory = Traits::directory(input);
        mojo::internal::Serialize<::blink::mojom::NativeFileSystemDirectoryHandlePtrDataView>(
            in_directory, &result->data.f_directory, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !mojo::internal::IsHandleOrInterfaceValid(result->data.f_directory),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
            "invalid directory in NativeFileSystemHandle union");
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::NativeFileSystemHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::NativeFileSystemHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void NativeFileSystemEntryDataView::GetEntryHandleDataView(
    NativeFileSystemHandleDataView* output) {
  auto pointer = &data_->entry_handle;
  *output = NativeFileSystemHandleDataView(pointer, context_);
}
inline void NativeFileSystemEntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_H_