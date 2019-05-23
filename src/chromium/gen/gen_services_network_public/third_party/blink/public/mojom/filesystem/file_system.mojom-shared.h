// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/filesystem/file_system.mojom-shared-internal.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/mojom/base/file_error.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/file_info.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class FileSystemInfoDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FileSystemInfoDataView> {
  using Data = ::blink::mojom::internal::FileSystemInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class FileSystemType : int32_t {
  
  kTemporary,
  
  kPersistent,
  
  kIsolated,
  
  kExternal,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, FileSystemType value);
inline bool IsKnownEnumValue(FileSystemType value) {
  return internal::FileSystemType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
// Interface base classes. They are used for type safety check.
class FileSystemCancellableOperationInterfaceBase {};

using FileSystemCancellableOperationPtrDataView =
    mojo::InterfacePtrDataView<FileSystemCancellableOperationInterfaceBase>;
using FileSystemCancellableOperationRequestDataView =
    mojo::InterfaceRequestDataView<FileSystemCancellableOperationInterfaceBase>;
using FileSystemCancellableOperationAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileSystemCancellableOperationInterfaceBase>;
using FileSystemCancellableOperationAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileSystemCancellableOperationInterfaceBase>;
class FileSystemOperationListenerInterfaceBase {};

using FileSystemOperationListenerPtrDataView =
    mojo::InterfacePtrDataView<FileSystemOperationListenerInterfaceBase>;
using FileSystemOperationListenerRequestDataView =
    mojo::InterfaceRequestDataView<FileSystemOperationListenerInterfaceBase>;
using FileSystemOperationListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileSystemOperationListenerInterfaceBase>;
using FileSystemOperationListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileSystemOperationListenerInterfaceBase>;
class ReceivedSnapshotListenerInterfaceBase {};

using ReceivedSnapshotListenerPtrDataView =
    mojo::InterfacePtrDataView<ReceivedSnapshotListenerInterfaceBase>;
using ReceivedSnapshotListenerRequestDataView =
    mojo::InterfaceRequestDataView<ReceivedSnapshotListenerInterfaceBase>;
using ReceivedSnapshotListenerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ReceivedSnapshotListenerInterfaceBase>;
using ReceivedSnapshotListenerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ReceivedSnapshotListenerInterfaceBase>;
class FileSystemManagerInterfaceBase {};

using FileSystemManagerPtrDataView =
    mojo::InterfacePtrDataView<FileSystemManagerInterfaceBase>;
using FileSystemManagerRequestDataView =
    mojo::InterfaceRequestDataView<FileSystemManagerInterfaceBase>;
using FileSystemManagerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<FileSystemManagerInterfaceBase>;
using FileSystemManagerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<FileSystemManagerInterfaceBase>;
class FileSystemInfoDataView {
 public:
  FileSystemInfoDataView() {}

  FileSystemInfoDataView(
      internal::FileSystemInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadName(UserType* output) {
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetRootUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadRootUrl(UserType* output) {
    auto* pointer = data_->root_url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, context_);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMountType(UserType* output) const {
    auto data_value = data_->mount_type;
    return mojo::internal::Deserialize<::blink::mojom::FileSystemType>(
        data_value, output);
  }

  FileSystemType mount_type() const {
    return static_cast<FileSystemType>(data_->mount_type);
  }
 private:
  internal::FileSystemInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::FileSystemType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::FileSystemType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::FileSystemType, ::blink::mojom::FileSystemType> {
  static ::blink::mojom::FileSystemType ToMojom(::blink::mojom::FileSystemType input) { return input; }
  static bool FromMojom(::blink::mojom::FileSystemType input, ::blink::mojom::FileSystemType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileSystemType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::FileSystemType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::FileSystemType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FileSystemInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FileSystemInfoDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::FileSystemInfo_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
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
        "null name in FileSystemInfo struct");
    decltype(Traits::root_url(input)) in_root_url = Traits::root_url(input);
    typename decltype((*output)->root_url)::BaseType::BufferWriter
        root_url_writer;
    mojo::internal::Serialize<::url::mojom::UrlDataView>(
        in_root_url, buffer, &root_url_writer, context);
    (*output)->root_url.Set(
        root_url_writer.is_null() ? nullptr : root_url_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->root_url.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null root_url in FileSystemInfo struct");
    mojo::internal::Serialize<::blink::mojom::FileSystemType>(
        Traits::mount_type(input), &(*output)->mount_type);
  }

  static bool Deserialize(::blink::mojom::internal::FileSystemInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FileSystemInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FileSystemInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void FileSystemInfoDataView::GetRootUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->root_url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_H_