// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class SerializedBlobDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::SerializedBlobDataView> {
  using Data = ::blink::mojom::internal::SerializedBlob_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class SerializedBlobDataView {
 public:
  SerializedBlobDataView() {}

  SerializedBlobDataView(
      internal::SerializedBlob_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUuid(UserType* output) {
    auto* pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  inline void GetContentTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadContentType(UserType* output) {
    auto* pointer = data_->content_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, context_);
  }
  uint64_t size() const {
    return data_->size;
  }
  template <typename UserType>
  UserType TakeBlob() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::BlobPtrDataView>(
            &data_->blob, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::SerializedBlob_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::SerializedBlobDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::SerializedBlobDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::SerializedBlob_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::uuid(input)) in_uuid = Traits::uuid(input);
    typename decltype((*output)->uuid)::BaseType::BufferWriter
        uuid_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_uuid, buffer, &uuid_writer, context);
    (*output)->uuid.Set(
        uuid_writer.is_null() ? nullptr : uuid_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->uuid.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null uuid in SerializedBlob struct");
    decltype(Traits::content_type(input)) in_content_type = Traits::content_type(input);
    typename decltype((*output)->content_type)::BaseType::BufferWriter
        content_type_writer;
    mojo::internal::Serialize<mojo::StringDataView>(
        in_content_type, buffer, &content_type_writer, context);
    (*output)->content_type.Set(
        content_type_writer.is_null() ? nullptr : content_type_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->content_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null content_type in SerializedBlob struct");
    (*output)->size = Traits::size(input);
    decltype(Traits::blob(input)) in_blob = Traits::blob(input);
    mojo::internal::Serialize<::blink::mojom::BlobPtrDataView>(
        in_blob, &(*output)->blob, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->blob),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid blob in SerializedBlob struct");
  }

  static bool Deserialize(::blink::mojom::internal::SerializedBlob_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::SerializedBlobDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void SerializedBlobDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void SerializedBlobDataView::GetContentTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_type.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_SERIALIZED_BLOB_MOJOM_SHARED_H_