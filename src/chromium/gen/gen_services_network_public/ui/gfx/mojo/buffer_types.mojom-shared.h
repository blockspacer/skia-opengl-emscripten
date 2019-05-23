// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_

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
#include "ui/gfx/mojo/buffer_types.mojom-shared-internal.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class BufferUsageAndFormatDataView;

class GpuMemoryBufferIdDataView;

class NativePixmapPlaneDataView;

class NativePixmapHandleDataView;

class GpuMemoryBufferHandleDataView;

class GpuMemoryBufferPlatformHandleDataView;


}  // namespace mojom
}  // namespace gfx

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gfx::mojom::BufferUsageAndFormatDataView> {
  using Data = ::gfx::mojom::internal::BufferUsageAndFormat_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::GpuMemoryBufferIdDataView> {
  using Data = ::gfx::mojom::internal::GpuMemoryBufferId_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::NativePixmapPlaneDataView> {
  using Data = ::gfx::mojom::internal::NativePixmapPlane_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::NativePixmapHandleDataView> {
  using Data = ::gfx::mojom::internal::NativePixmapHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::GpuMemoryBufferHandleDataView> {
  using Data = ::gfx::mojom::internal::GpuMemoryBufferHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::gfx::mojom::GpuMemoryBufferPlatformHandleDataView> {
  using Data = ::gfx::mojom::internal::GpuMemoryBufferPlatformHandle_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::UNION;
};

}  // namespace internal
}  // namespace mojo


namespace gfx {
namespace mojom {


enum class BufferFormat : int32_t {
  
  R_8,
  
  R_16,
  
  RG_88,
  
  BGR_565,
  
  RGBA_4444,
  
  RGBX_8888,
  
  RGBA_8888,
  
  BGRX_8888,
  
  BGRX_1010102,
  
  RGBX_1010102,
  
  BGRA_8888,
  
  RGBA_F16,
  
  YVU_420,
  
  YUV_420_BIPLANAR,
  
  UYVY_422,
  kMinValue = 0,
  kMaxValue = 14,
};

 std::ostream& operator<<(std::ostream& os, BufferFormat value);
inline bool IsKnownEnumValue(BufferFormat value) {
  return internal::BufferFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BufferUsage : int32_t {
  
  GPU_READ,
  
  SCANOUT,
  
  SCANOUT_CAMERA_READ_WRITE,
  
  CAMERA_AND_CPU_READ_WRITE,
  
  SCANOUT_CPU_READ_WRITE,
  
  SCANOUT_VDA_WRITE,
  
  GPU_READ_CPU_READ_WRITE,
  kMinValue = 0,
  kMaxValue = 6,
};

 std::ostream& operator<<(std::ostream& os, BufferUsage value);
inline bool IsKnownEnumValue(BufferUsage value) {
  return internal::BufferUsage_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class BufferUsageAndFormatDataView {
 public:
  BufferUsageAndFormatDataView() {}

  BufferUsageAndFormatDataView(
      internal::BufferUsageAndFormat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUsage(UserType* output) const {
    auto data_value = data_->usage;
    return mojo::internal::Deserialize<::gfx::mojom::BufferUsage>(
        data_value, output);
  }

  BufferUsage usage() const {
    return static_cast<BufferUsage>(data_->usage);
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::gfx::mojom::BufferFormat>(
        data_value, output);
  }

  BufferFormat format() const {
    return static_cast<BufferFormat>(data_->format);
  }
 private:
  internal::BufferUsageAndFormat_Data* data_ = nullptr;
};

class GpuMemoryBufferIdDataView {
 public:
  GpuMemoryBufferIdDataView() {}

  GpuMemoryBufferIdDataView(
      internal::GpuMemoryBufferId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::GpuMemoryBufferId_Data* data_ = nullptr;
};

class NativePixmapPlaneDataView {
 public:
  NativePixmapPlaneDataView() {}

  NativePixmapPlaneDataView(
      internal::NativePixmapPlane_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t stride() const {
    return data_->stride;
  }
  int32_t offset() const {
    return data_->offset;
  }
  uint64_t size() const {
    return data_->size;
  }
  mojo::ScopedHandle TakeBufferHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::NativePixmapPlane_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativePixmapHandleDataView {
 public:
  NativePixmapHandleDataView() {}

  NativePixmapHandleDataView(
      internal::NativePixmapHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetPlanesDataView(
      mojo::ArrayDataView<NativePixmapPlaneDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlanes(UserType* output) {
    auto* pointer = data_->planes.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::gfx::mojom::NativePixmapPlaneDataView>>(
        pointer, output, context_);
  }
  uint64_t modifier() const {
    return data_->modifier;
  }
 private:
  internal::NativePixmapHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuMemoryBufferHandleDataView {
 public:
  GpuMemoryBufferHandleDataView() {}

  GpuMemoryBufferHandleDataView(
      internal::GpuMemoryBufferHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadId(UserType* output) {
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, context_);
  }
  uint32_t offset() const {
    return data_->offset;
  }
  uint32_t stride() const {
    return data_->stride;
  }
  inline void GetPlatformHandleDataView(
      GpuMemoryBufferPlatformHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPlatformHandle(UserType* output) {
    auto* pointer = !data_->platform_handle.is_null() ? &data_->platform_handle : nullptr;
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferPlatformHandleDataView>(
        pointer, output, context_);
  }
 private:
  internal::GpuMemoryBufferHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class GpuMemoryBufferPlatformHandleDataView {
 public:
  using Tag = internal::GpuMemoryBufferPlatformHandle_Data::GpuMemoryBufferPlatformHandle_Tag;

  GpuMemoryBufferPlatformHandleDataView() {}

  GpuMemoryBufferPlatformHandleDataView(
      internal::GpuMemoryBufferPlatformHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_shared_memory_handle() const { return data_->tag == Tag::SHARED_MEMORY_HANDLE; }
  inline void GetSharedMemoryHandleDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadSharedMemoryHandle(UserType* output) {
    DCHECK(is_shared_memory_handle());
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        data_->data.f_shared_memory_handle.Get(), output, context_);
  }
  bool is_native_pixmap_handle() const { return data_->tag == Tag::NATIVE_PIXMAP_HANDLE; }
  inline void GetNativePixmapHandleDataView(
      NativePixmapHandleDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadNativePixmapHandle(UserType* output) {
    DCHECK(is_native_pixmap_handle());
    return mojo::internal::Deserialize<::gfx::mojom::NativePixmapHandleDataView>(
        data_->data.f_native_pixmap_handle.Get(), output, context_);
  }

 private:
  internal::GpuMemoryBufferPlatformHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::BufferFormat>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::BufferFormat> {};

template <>
struct hash<::gfx::mojom::BufferUsage>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::BufferUsage> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::BufferFormat, ::gfx::mojom::BufferFormat> {
  static ::gfx::mojom::BufferFormat ToMojom(::gfx::mojom::BufferFormat input) { return input; }
  static bool FromMojom(::gfx::mojom::BufferFormat input, ::gfx::mojom::BufferFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::BufferFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::BufferFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::BufferFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::BufferUsage, ::gfx::mojom::BufferUsage> {
  static ::gfx::mojom::BufferUsage ToMojom(::gfx::mojom::BufferUsage input) { return input; }
  static bool FromMojom(::gfx::mojom::BufferUsage input, ::gfx::mojom::BufferUsage* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::BufferUsage, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::BufferUsage, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::BufferUsage>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::BufferUsageAndFormatDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::BufferUsageAndFormatDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::BufferUsageAndFormat_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    mojo::internal::Serialize<::gfx::mojom::BufferUsage>(
        Traits::usage(input), &(*output)->usage);
    mojo::internal::Serialize<::gfx::mojom::BufferFormat>(
        Traits::format(input), &(*output)->format);
  }

  static bool Deserialize(::gfx::mojom::internal::BufferUsageAndFormat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::BufferUsageAndFormatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::GpuMemoryBufferIdDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::GpuMemoryBufferIdDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::GpuMemoryBufferId_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->id = Traits::id(input);
  }

  static bool Deserialize(::gfx::mojom::internal::GpuMemoryBufferId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::GpuMemoryBufferIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::NativePixmapPlaneDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::NativePixmapPlaneDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::NativePixmapPlane_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    (*output)->stride = Traits::stride(input);
    (*output)->offset = Traits::offset(input);
    (*output)->size = Traits::size(input);
    decltype(Traits::buffer_handle(input)) in_buffer_handle = Traits::buffer_handle(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_buffer_handle, &(*output)->buffer_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->buffer_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid buffer_handle in NativePixmapPlane struct");
  }

  static bool Deserialize(::gfx::mojom::internal::NativePixmapPlane_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::NativePixmapPlaneDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::NativePixmapHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::NativePixmapHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::NativePixmapHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::planes(input)) in_planes = Traits::planes(input);
    typename decltype((*output)->planes)::BaseType::BufferWriter
        planes_writer;
    const mojo::internal::ContainerValidateParams planes_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::gfx::mojom::NativePixmapPlaneDataView>>(
        in_planes, buffer, &planes_writer, &planes_validate_params,
        context);
    (*output)->planes.Set(
        planes_writer.is_null() ? nullptr : planes_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->planes.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null planes in NativePixmapHandle struct");
    (*output)->modifier = Traits::modifier(input);
  }

  static bool Deserialize(::gfx::mojom::internal::NativePixmapHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::NativePixmapHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::GpuMemoryBufferHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gfx::mojom::GpuMemoryBufferHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::GpuMemoryBufferHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::id(input)) in_id = Traits::id(input);
    typename decltype((*output)->id)::BaseType::BufferWriter
        id_writer;
    mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        in_id, buffer, &id_writer, context);
    (*output)->id.Set(
        id_writer.is_null() ? nullptr : id_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->id.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in GpuMemoryBufferHandle struct");
    (*output)->offset = Traits::offset(input);
    (*output)->stride = Traits::stride(input);
    decltype(Traits::platform_handle(input)) in_platform_handle = Traits::platform_handle(input);
    typename decltype((*output)->platform_handle)::BufferWriter platform_handle_writer;
    platform_handle_writer.AllocateInline(buffer, &(*output)->platform_handle);
    mojo::internal::Serialize<::gfx::mojom::GpuMemoryBufferPlatformHandleDataView>(
        in_platform_handle, buffer, &platform_handle_writer, true, context);
  }

  static bool Deserialize(::gfx::mojom::internal::GpuMemoryBufferHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::GpuMemoryBufferHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::GpuMemoryBufferPlatformHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::gfx::mojom::GpuMemoryBufferPlatformHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::gfx::mojom::internal::GpuMemoryBufferPlatformHandle_Data::BufferWriter* writer,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
         writer->data()->set_null();
      return;
    }
    if (!inlined)
      writer->Allocate(buffer);

    ::gfx::mojom::internal::GpuMemoryBufferPlatformHandle_Data::BufferWriter& result = *writer;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = Traits::GetTag(input);
    switch (result->tag) {
      case ::gfx::mojom::GpuMemoryBufferPlatformHandleDataView::Tag::SHARED_MEMORY_HANDLE: {
        decltype(Traits::shared_memory_handle(input))
            in_shared_memory_handle = Traits::shared_memory_handle(input);
        typename decltype(result->data.f_shared_memory_handle)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
            in_shared_memory_handle, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null shared_memory_handle in GpuMemoryBufferPlatformHandle union");
        result->data.f_shared_memory_handle.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
      case ::gfx::mojom::GpuMemoryBufferPlatformHandleDataView::Tag::NATIVE_PIXMAP_HANDLE: {
        decltype(Traits::native_pixmap_handle(input))
            in_native_pixmap_handle = Traits::native_pixmap_handle(input);
        typename decltype(result->data.f_native_pixmap_handle)::BaseType::BufferWriter
            value_writer;
        mojo::internal::Serialize<::gfx::mojom::NativePixmapHandleDataView>(
            in_native_pixmap_handle, buffer, &value_writer, context);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_writer.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null native_pixmap_handle in GpuMemoryBufferPlatformHandle union");
        result->data.f_native_pixmap_handle.Set(
            value_writer.is_null() ? nullptr : value_writer.data());
        break;
      }
    }
  }

  static bool Deserialize(::gfx::mojom::internal::GpuMemoryBufferPlatformHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::gfx::mojom::GpuMemoryBufferPlatformHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gfx {
namespace mojom {







inline void NativePixmapHandleDataView::GetPlanesDataView(
    mojo::ArrayDataView<NativePixmapPlaneDataView>* output) {
  auto pointer = data_->planes.Get();
  *output = mojo::ArrayDataView<NativePixmapPlaneDataView>(pointer, context_);
}


inline void GpuMemoryBufferHandleDataView::GetIdDataView(
    GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuMemoryBufferHandleDataView::GetPlatformHandleDataView(
    GpuMemoryBufferPlatformHandleDataView* output) {
  auto pointer = &data_->platform_handle;
  *output = GpuMemoryBufferPlatformHandleDataView(pointer, context_);
}


inline void GpuMemoryBufferPlatformHandleDataView::GetSharedMemoryHandleDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  DCHECK(is_shared_memory_handle());
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(data_->data.f_shared_memory_handle.Get(), context_);
}
inline void GpuMemoryBufferPlatformHandleDataView::GetNativePixmapHandleDataView(
    NativePixmapHandleDataView* output) {
  DCHECK(is_native_pixmap_handle());
  *output = NativePixmapHandleDataView(data_->data.f_native_pixmap_handle.Get(), context_);
}


}  // namespace mojom
}  // namespace gfx

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_