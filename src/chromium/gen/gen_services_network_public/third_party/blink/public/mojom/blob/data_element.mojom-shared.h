// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/data_element.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file.mojom-shared.h"
#include "mojo/public/mojom/base/file_path.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"
#include "url/mojom/origin.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class DataElementBytesDataView;

class DataElementFileDataView;

class DataElementFilesystemURLDataView;

class DataElementBlobDataView;

class DataElementDataView;


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::DataElementBytesDataView> {
  using Data = ::blink::mojom::internal::DataElementBytes_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DataElementFileDataView> {
  using Data = ::blink::mojom::internal::DataElementFile_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DataElementFilesystemURLDataView> {
  using Data = ::blink::mojom::internal::DataElementFilesystemURL_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DataElementBlobDataView> {
  using Data = ::blink::mojom::internal::DataElementBlob_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::blink::mojom::DataElementDataView> {
  using Data = ::blink::mojom::internal::DataElement_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
// Interface base classes. They are used for type safety check.
class BytesProviderInterfaceBase {};

using BytesProviderPtrDataView =
    mojo::InterfacePtrDataView<BytesProviderInterfaceBase>;
using BytesProviderRequestDataView =
    mojo::InterfaceRequestDataView<BytesProviderInterfaceBase>;
using BytesProviderAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<BytesProviderInterfaceBase>;
using BytesProviderAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<BytesProviderInterfaceBase>;
class DataElementBytesDataView {
 public:
  DataElementBytesDataView() {}

  DataElementBytesDataView(
      internal::DataElementBytes_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetEmbeddedDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadEmbeddedData(UserType* output) {
    auto* pointer = data_->embedded_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  template <typename UserType>
  UserType TakeData() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BytesProviderPtrDataView>(
            &data_->data, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataElementBytes_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataElementFileDataView {
 public:
  DataElementFileDataView() {}

  DataElementFileDataView(
      internal::DataElementFile_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPath(UserType* output) {
    auto* pointer = data_->path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, context_);
  }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetExpectedModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedModificationTime(UserType* output) {
    auto* pointer = data_->expected_modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::DataElementFile_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataElementFilesystemURLDataView {
 public:
  DataElementFilesystemURLDataView() {}

  DataElementFilesystemURLDataView(
      internal::DataElementFilesystemURL_Data* data,
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
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
  inline void GetExpectedModificationTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadExpectedModificationTime(UserType* output) {
    auto* pointer = data_->expected_modification_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, context_);
  }
 private:
  internal::DataElementFilesystemURL_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataElementBlobDataView {
 public:
  DataElementBlobDataView() {}

  DataElementBlobDataView(
      internal::DataElementBlob_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t offset() const {
    return data_->offset;
  }
  uint64_t length() const {
    return data_->length;
  }
 private:
  internal::DataElementBlob_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class DataElementDataView {
 public:
  using Tag = internal::DataElement_Data::DataElement_Tag;

  DataElementDataView() {}

  DataElementDataView(
      internal::DataElement_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_bytes() const { return data_->tag == Tag::BYTES; }
  inline void GetBytesDataView(
      DataElementBytesDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytes(UserType* output) {
    DCHECK(is_bytes());
    return mojo::internal::Deserialize<::blink::mojom::DataElementBytesDataView>(
        data_->data.f_bytes.Get(), output, context_);
  }
  bool is_file() const { return data_->tag == Tag::FILE; }
  inline void GetFileDataView(
      DataElementFileDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFile(UserType* output) {
    DCHECK(is_file());
    return mojo::internal::Deserialize<::blink::mojom::DataElementFileDataView>(
        data_->data.f_file.Get(), output, context_);
  }
  bool is_file_filesystem() const { return data_->tag == Tag::FILE_FILESYSTEM; }
  inline void GetFileFilesystemDataView(
      DataElementFilesystemURLDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFileFilesystem(UserType* output) {
    DCHECK(is_file_filesystem());
    return mojo::internal::Deserialize<::blink::mojom::DataElementFilesystemURLDataView>(
        data_->data.f_file_filesystem.Get(), output, context_);
  }
  bool is_blob() const { return data_->tag == Tag::BLOB; }
  inline void GetBlobDataView(
      DataElementBlobDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBlob(UserType* output) {
    DCHECK(is_blob());
    return mojo::internal::Deserialize<::blink::mojom::DataElementBlobDataView>(
        data_->data.f_blob.Get(), output, context_);
  }

 private:
  internal::DataElement_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DataElementBytesDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DataElementBytesDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DataElementBytes_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->length = Traits::length(input);
    decltype(Traits::embedded_data(input)) in_embedded_data = Traits::embedded_data(input);
    typename decltype((*output)->embedded_data)::BaseType::BufferWriter
        embedded_data_writer;
    const mojo::internal::ContainerValidateParams embedded_data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_embedded_data, buffer, &embedded_data_writer, &embedded_data_validate_params,
        context);
    (*output)->embedded_data.Set(
        embedded_data_writer.is_null() ? nullptr : embedded_data_writer.data());
    decltype(Traits::data(input)) in_data = Traits::data(input);
    mojo::internal::Serialize<::blink::mojom::BytesProviderPtrDataView>(
        in_data, &(*output)->data, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->data),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid data in DataElementBytes struct");
  }

  static bool Deserialize(::blink::mojom::internal::DataElementBytes_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DataElementBytesDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DataElementFileDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DataElementFileDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DataElementFile_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::path(input)) in_path = Traits::path(input);
    typename decltype((*output)->path)::BaseType::BufferWriter
        path_writer;
    mojo::internal::Serialize<::mojo_base::mojom::FilePathDataView>(
        in_path, buffer, &path_writer, context);
    (*output)->path.Set(
        path_writer.is_null() ? nullptr : path_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->path.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in DataElementFile struct");
    (*output)->offset = Traits::offset(input);
    (*output)->length = Traits::length(input);
    decltype(Traits::expected_modification_time(input)) in_expected_modification_time = Traits::expected_modification_time(input);
    typename decltype((*output)->expected_modification_time)::BaseType::BufferWriter
        expected_modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_expected_modification_time, buffer, &expected_modification_time_writer, context);
    (*output)->expected_modification_time.Set(
        expected_modification_time_writer.is_null() ? nullptr : expected_modification_time_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::DataElementFile_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DataElementFileDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DataElementFilesystemURLDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DataElementFilesystemURLDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DataElementFilesystemURL_Data::BufferWriter* output,
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
        "null url in DataElementFilesystemURL struct");
    (*output)->offset = Traits::offset(input);
    (*output)->length = Traits::length(input);
    decltype(Traits::expected_modification_time(input)) in_expected_modification_time = Traits::expected_modification_time(input);
    typename decltype((*output)->expected_modification_time)::BaseType::BufferWriter
        expected_modification_time_writer;
    mojo::internal::Serialize<::mojo_base::mojom::TimeDataView>(
        in_expected_modification_time, buffer, &expected_modification_time_writer, context);
    (*output)->expected_modification_time.Set(
        expected_modification_time_writer.is_null() ? nullptr : expected_modification_time_writer.data());
  }

  static bool Deserialize(::blink::mojom::internal::DataElementFilesystemURL_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DataElementFilesystemURLDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DataElementBlobDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::DataElementBlobDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DataElementBlob_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::blob(input)) in_blob = Traits::blob(input);
    mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
        in_blob, &(*output)->blob, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->blob),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid blob in DataElementBlob struct");
    (*output)->offset = Traits::offset(input);
    (*output)->length = Traits::length(input);
  }

  static bool Deserialize(::blink::mojom::internal::DataElementBlob_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DataElementBlobDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::DataElementDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::blink::mojom::DataElementDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::DataElement_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::blink::mojom::internal::DataElement_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::blink::mojom::DataElementDataView::Tag::BYTES: {
        decltype(Traits::bytes(input))
            in_bytes = Traits::bytes(input);
        typename decltype(result->data.f_bytes)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::DataElementBytesDataView>(
            in_bytes, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null bytes in DataElement union");
        result->data.f_bytes.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::DataElementDataView::Tag::FILE: {
        decltype(Traits::file(input))
            in_file = Traits::file(input);
        typename decltype(result->data.f_file)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::DataElementFileDataView>(
            in_file, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null file in DataElement union");
        result->data.f_file.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::DataElementDataView::Tag::FILE_FILESYSTEM: {
        decltype(Traits::file_filesystem(input))
            in_file_filesystem = Traits::file_filesystem(input);
        typename decltype(result->data.f_file_filesystem)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::DataElementFilesystemURLDataView>(
            in_file_filesystem, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null file_filesystem in DataElement union");
        result->data.f_file_filesystem.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::blink::mojom::DataElementDataView::Tag::BLOB: {
        decltype(Traits::blob(input))
            in_blob = Traits::blob(input);
        typename decltype(result->data.f_blob)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::blink::mojom::DataElementBlobDataView>(
            in_blob, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null blob in DataElement union");
        result->data.f_blob.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::blink::mojom::internal::DataElement_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::DataElementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void DataElementBytesDataView::GetEmbeddedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->embedded_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


inline void DataElementFileDataView::GetPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, context_);
}
inline void DataElementFileDataView::GetExpectedModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}


inline void DataElementFilesystemURLDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void DataElementFilesystemURLDataView::GetExpectedModificationTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_modification_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, context_);
}




inline void DataElementDataView::GetBytesDataView(
    DataElementBytesDataView* output) {
  DCHECK(is_bytes());
  *output = DataElementBytesDataView(data_->data.f_bytes.Get(), context_);
}
inline void DataElementDataView::GetFileDataView(
    DataElementFileDataView* output) {
  DCHECK(is_file());
  *output = DataElementFileDataView(data_->data.f_file.Get(), context_);
}
inline void DataElementDataView::GetFileFilesystemDataView(
    DataElementFilesystemURLDataView* output) {
  DCHECK(is_file_filesystem());
  *output = DataElementFilesystemURLDataView(data_->data.f_file_filesystem.Get(), context_);
}
inline void DataElementDataView::GetBlobDataView(
    DataElementBlobDataView* output) {
  DCHECK(is_blob());
  *output = DataElementBlobDataView(data_->data.f_blob.Get(), context_);
}


}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_DATA_ELEMENT_MOJOM_SHARED_H_