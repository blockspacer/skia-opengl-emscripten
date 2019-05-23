// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_H_
#define MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_H_

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
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
class BigBufferSharedMemoryRegionDataView;

class BigBufferDataView;


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo_base::mojom::BigBufferSharedMemoryRegionDataView> {
  using Data = ::mojo_base::mojom::internal::BigBufferSharedMemoryRegion_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo_base::mojom::BigBufferDataView> {
  using Data = ::mojo_base::mojom::internal::BigBuffer_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace mojo_base {
namespace mojom {
class BigBufferSharedMemoryRegionDataView {
 public:
  BigBufferSharedMemoryRegionDataView() {}

  BigBufferSharedMemoryRegionDataView(
      internal::BigBufferSharedMemoryRegion_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBufferHandle() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t size() const {
    return data_->size;
  }
 private:
  internal::BigBufferSharedMemoryRegion_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class BigBufferDataView {
 public:
  using Tag = internal::BigBuffer_Data::BigBuffer_Tag;

  BigBufferDataView() {}

  BigBufferDataView(
      internal::BigBuffer_Data* data,
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
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBytes(UserType* output) {
    DCHECK(is_bytes());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_bytes.Get(), output, context_);
  }
  bool is_shared_memory() const { return data_->tag == Tag::SHARED_MEMORY; }
  inline void GetSharedMemoryDataView(
      BigBufferSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMemory(UserType* output) {
    DCHECK(is_shared_memory());
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferSharedMemoryRegionDataView>(
        data_->data.f_shared_memory.Get(), output, context_);
  }
  bool is_invalid_buffer() const { return data_->tag == Tag::INVALID_BUFFER; }
  bool invalid_buffer() const {
    DCHECK(is_invalid_buffer());
    return data_->data.f_invalid_buffer;
  }

 private:
  internal::BigBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace mojo_base

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::BigBufferSharedMemoryRegionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo_base::mojom::BigBufferSharedMemoryRegionDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::BigBufferSharedMemoryRegion_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::buffer_handle(input)) in_buffer_handle = Traits::buffer_handle(input);
    mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
        in_buffer_handle, &(*output)->buffer_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->buffer_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid buffer_handle in BigBufferSharedMemoryRegion struct");
    (*output)->size = Traits::size(input);
  }

  static bool Deserialize(::mojo_base::mojom::internal::BigBufferSharedMemoryRegion_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::BigBufferSharedMemoryRegionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo_base::mojom::BigBufferDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::mojo_base::mojom::BigBufferDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo_base::mojom::internal::BigBuffer_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::mojo_base::mojom::internal::BigBuffer_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::mojo_base::mojom::BigBufferDataView::Tag::BYTES: {
        decltype(Traits::bytes(input))
            in_bytes = Traits::bytes(input);
        typename decltype(result->data.f_bytes)::BaseType::BufferWriter
            value_writer;
        const ContainerValidateParams bytes_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_bytes, buffer, &value_writer, &bytes_validate_params,
            context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null bytes in BigBuffer union");
        result->data.f_bytes.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo_base::mojom::BigBufferDataView::Tag::SHARED_MEMORY: {
        decltype(Traits::shared_memory(input))
            in_shared_memory = Traits::shared_memory(input);
        typename decltype(result->data.f_shared_memory)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::BigBufferSharedMemoryRegionDataView>(
            in_shared_memory, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null shared_memory in BigBuffer union");
        result->data.f_shared_memory.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::mojo_base::mojom::BigBufferDataView::Tag::INVALID_BUFFER: {
        decltype(Traits::invalid_buffer(input))
            in_invalid_buffer = Traits::invalid_buffer(input);
        result->data.f_invalid_buffer = in_invalid_buffer;
        break;
      }
    }
  }

  static bool Deserialize(::mojo_base::mojom::internal::BigBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::mojo_base::mojom::BigBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace mojo_base {
namespace mojom {



inline void BigBufferDataView::GetBytesDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  DCHECK(is_bytes());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_bytes.Get(), context_);
}
inline void BigBufferDataView::GetSharedMemoryDataView(
    BigBufferSharedMemoryRegionDataView* output) {
  DCHECK(is_shared_memory());
  *output = BigBufferSharedMemoryRegionDataView(data_->data.f_shared_memory.Get(), context_);
}


}  // namespace mojom
}  // namespace mojo_base

#endif  // MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_SHARED_H_