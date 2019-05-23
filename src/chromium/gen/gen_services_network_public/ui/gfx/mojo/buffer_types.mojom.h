// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared.h"
#include "ui/gfx/mojo/buffer_types.mojom-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/gpu_memory_buffer.h"
#include "ui/gfx/native_pixmap_handle.h"




namespace gfx {
namespace mojom {





class  BufferUsageAndFormat {
 public:
  using DataView = BufferUsageAndFormatDataView;
  using Data_ = internal::BufferUsageAndFormat_Data;

  template <typename... Args>
  static BufferUsageAndFormatPtr New(Args&&... args) {
    return BufferUsageAndFormatPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BufferUsageAndFormatPtr From(const U& u) {
    return mojo::TypeConverter<BufferUsageAndFormatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BufferUsageAndFormat>::Convert(*this);
  }


  BufferUsageAndFormat();

  BufferUsageAndFormat(
      gfx::BufferUsage usage,
      gfx::BufferFormat format);

  ~BufferUsageAndFormat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BufferUsageAndFormatPtr>
  BufferUsageAndFormatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BufferUsageAndFormat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BufferUsageAndFormat::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BufferUsageAndFormat::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BufferUsageAndFormat_UnserializedMessageContext<
            UserType, BufferUsageAndFormat::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BufferUsageAndFormat::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BufferUsageAndFormat::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BufferUsageAndFormat_UnserializedMessageContext<
            UserType, BufferUsageAndFormat::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BufferUsageAndFormat::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::BufferUsage usage;
  
  gfx::BufferFormat format;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  GpuMemoryBufferId {
 public:
  using DataView = GpuMemoryBufferIdDataView;
  using Data_ = internal::GpuMemoryBufferId_Data;

  template <typename... Args>
  static GpuMemoryBufferIdPtr New(Args&&... args) {
    return GpuMemoryBufferIdPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuMemoryBufferIdPtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferId>::Convert(*this);
  }


  GpuMemoryBufferId();

  explicit GpuMemoryBufferId(
      int32_t id);

  ~GpuMemoryBufferId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferIdPtr>
  GpuMemoryBufferIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuMemoryBufferId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuMemoryBufferId_UnserializedMessageContext<
            UserType, GpuMemoryBufferId::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuMemoryBufferId::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GpuMemoryBufferId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuMemoryBufferId_UnserializedMessageContext<
            UserType, GpuMemoryBufferId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuMemoryBufferId::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class  GpuMemoryBufferPlatformHandle {
 public:
  using DataView = GpuMemoryBufferPlatformHandleDataView;
  using Data_ = internal::GpuMemoryBufferPlatformHandle_Data;
  using Tag = Data_::GpuMemoryBufferPlatformHandle_Tag;

  static GpuMemoryBufferPlatformHandlePtr New() {
    return GpuMemoryBufferPlatformHandlePtr(base::in_place);
  }
  // Construct an instance holding |shared_memory_handle|.
  static GpuMemoryBufferPlatformHandlePtr
  NewSharedMemoryHandle(
      base::UnsafeSharedMemoryRegion shared_memory_handle) {
    auto result = GpuMemoryBufferPlatformHandlePtr(base::in_place);
    result->set_shared_memory_handle(std::move(shared_memory_handle));
    return result;
  }
  // Construct an instance holding |native_pixmap_handle|.
  static GpuMemoryBufferPlatformHandlePtr
  NewNativePixmapHandle(
      gfx::NativePixmapHandle native_pixmap_handle) {
    auto result = GpuMemoryBufferPlatformHandlePtr(base::in_place);
    result->set_native_pixmap_handle(std::move(native_pixmap_handle));
    return result;
  }

  template <typename U>
  static GpuMemoryBufferPlatformHandlePtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferPlatformHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferPlatformHandle>::Convert(*this);
  }

  GpuMemoryBufferPlatformHandle();
  ~GpuMemoryBufferPlatformHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = GpuMemoryBufferPlatformHandlePtr>
  GpuMemoryBufferPlatformHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferPlatformHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_shared_memory_handle() const { return tag_ == Tag::SHARED_MEMORY_HANDLE; }

  
  base::UnsafeSharedMemoryRegion& get_shared_memory_handle() const {
    DCHECK(tag_ == Tag::SHARED_MEMORY_HANDLE);
    return *(data_.shared_memory_handle);
  }

  
  void set_shared_memory_handle(
      base::UnsafeSharedMemoryRegion shared_memory_handle);
  
  bool is_native_pixmap_handle() const { return tag_ == Tag::NATIVE_PIXMAP_HANDLE; }

  
  gfx::NativePixmapHandle& get_native_pixmap_handle() const {
    DCHECK(tag_ == Tag::NATIVE_PIXMAP_HANDLE);
    return *(data_.native_pixmap_handle);
  }

  
  void set_native_pixmap_handle(
      gfx::NativePixmapHandle native_pixmap_handle);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuMemoryBufferPlatformHandle::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<GpuMemoryBufferPlatformHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    base::UnsafeSharedMemoryRegion* shared_memory_handle;
    gfx::NativePixmapHandle* native_pixmap_handle;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};







class  NativePixmapPlane {
 public:
  using DataView = NativePixmapPlaneDataView;
  using Data_ = internal::NativePixmapPlane_Data;

  template <typename... Args>
  static NativePixmapPlanePtr New(Args&&... args) {
    return NativePixmapPlanePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativePixmapPlanePtr From(const U& u) {
    return mojo::TypeConverter<NativePixmapPlanePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativePixmapPlane>::Convert(*this);
  }


  NativePixmapPlane();

  NativePixmapPlane(
      uint32_t stride,
      int32_t offset,
      uint64_t size,
      mojo::ScopedHandle buffer_handle);

  ~NativePixmapPlane();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativePixmapPlanePtr>
  NativePixmapPlanePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativePixmapPlane>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapPlane::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativePixmapPlane::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativePixmapPlane_UnserializedMessageContext<
            UserType, NativePixmapPlane::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativePixmapPlane::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativePixmapPlane::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativePixmapPlane_UnserializedMessageContext<
            UserType, NativePixmapPlane::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativePixmapPlane::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint32_t stride;
  
  int32_t offset;
  
  uint64_t size;
  
  mojo::ScopedHandle buffer_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NativePixmapPlane);
};





class  NativePixmapHandle {
 public:
  using DataView = NativePixmapHandleDataView;
  using Data_ = internal::NativePixmapHandle_Data;

  template <typename... Args>
  static NativePixmapHandlePtr New(Args&&... args) {
    return NativePixmapHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativePixmapHandlePtr From(const U& u) {
    return mojo::TypeConverter<NativePixmapHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativePixmapHandle>::Convert(*this);
  }


  NativePixmapHandle();

  NativePixmapHandle(
      std::vector<gfx::NativePixmapPlane> planes,
      uint64_t modifier);

  ~NativePixmapHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativePixmapHandlePtr>
  NativePixmapHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativePixmapHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativePixmapHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativePixmapHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativePixmapHandle_UnserializedMessageContext<
            UserType, NativePixmapHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativePixmapHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativePixmapHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativePixmapHandle_UnserializedMessageContext<
            UserType, NativePixmapHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativePixmapHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<gfx::NativePixmapPlane> planes;
  
  uint64_t modifier;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NativePixmapHandle);
};





class  GpuMemoryBufferHandle {
 public:
  using DataView = GpuMemoryBufferHandleDataView;
  using Data_ = internal::GpuMemoryBufferHandle_Data;

  template <typename... Args>
  static GpuMemoryBufferHandlePtr New(Args&&... args) {
    return GpuMemoryBufferHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GpuMemoryBufferHandlePtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferHandle>::Convert(*this);
  }


  GpuMemoryBufferHandle();

  GpuMemoryBufferHandle(
      gfx::GpuMemoryBufferId id,
      uint32_t offset,
      uint32_t stride,
      GpuMemoryBufferPlatformHandlePtr platform_handle);

  ~GpuMemoryBufferHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferHandlePtr>
  GpuMemoryBufferHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        GpuMemoryBufferHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GpuMemoryBufferHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GpuMemoryBufferHandle_UnserializedMessageContext<
            UserType, GpuMemoryBufferHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<GpuMemoryBufferHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return GpuMemoryBufferHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GpuMemoryBufferHandle_UnserializedMessageContext<
            UserType, GpuMemoryBufferHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GpuMemoryBufferHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  gfx::GpuMemoryBufferId id;
  
  uint32_t offset;
  
  uint32_t stride;
  
  GpuMemoryBufferPlatformHandlePtr platform_handle;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferHandle);
};

template <typename UnionPtrType>
GpuMemoryBufferPlatformHandlePtr GpuMemoryBufferPlatformHandle::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::SHARED_MEMORY_HANDLE:
      rv->set_shared_memory_handle(mojo::Clone(*data_.shared_memory_handle));
      break;
    case Tag::NATIVE_PIXMAP_HANDLE:
      rv->set_native_pixmap_handle(mojo::Clone(*data_.native_pixmap_handle));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferPlatformHandle>::value>::type*>
bool GpuMemoryBufferPlatformHandle::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::SHARED_MEMORY_HANDLE:
      return mojo::Equals(*(data_.shared_memory_handle), *(other.data_.shared_memory_handle));
    case Tag::NATIVE_PIXMAP_HANDLE:
      return mojo::Equals(*(data_.native_pixmap_handle), *(other.data_.native_pixmap_handle));
  }

  return false;
}
template <typename StructPtrType>
BufferUsageAndFormatPtr BufferUsageAndFormat::Clone() const {
  return New(
      mojo::Clone(usage),
      mojo::Clone(format)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BufferUsageAndFormat>::value>::type*>
bool BufferUsageAndFormat::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->usage, other_struct.usage))
    return false;
  if (!mojo::Equals(this->format, other_struct.format))
    return false;
  return true;
}
template <typename StructPtrType>
GpuMemoryBufferIdPtr GpuMemoryBufferId::Clone() const {
  return New(
      mojo::Clone(id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferId>::value>::type*>
bool GpuMemoryBufferId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  return true;
}
template <typename StructPtrType>
NativePixmapPlanePtr NativePixmapPlane::Clone() const {
  return New(
      mojo::Clone(stride),
      mojo::Clone(offset),
      mojo::Clone(size),
      mojo::Clone(buffer_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativePixmapPlane>::value>::type*>
bool NativePixmapPlane::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->stride, other_struct.stride))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->buffer_handle, other_struct.buffer_handle))
    return false;
  return true;
}
template <typename StructPtrType>
NativePixmapHandlePtr NativePixmapHandle::Clone() const {
  return New(
      mojo::Clone(planes),
      mojo::Clone(modifier)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativePixmapHandle>::value>::type*>
bool NativePixmapHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->planes, other_struct.planes))
    return false;
  if (!mojo::Equals(this->modifier, other_struct.modifier))
    return false;
  return true;
}
template <typename StructPtrType>
GpuMemoryBufferHandlePtr GpuMemoryBufferHandle::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(offset),
      mojo::Clone(stride),
      mojo::Clone(platform_handle)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferHandle>::value>::type*>
bool GpuMemoryBufferHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->offset, other_struct.offset))
    return false;
  if (!mojo::Equals(this->stride, other_struct.stride))
    return false;
  if (!mojo::Equals(this->platform_handle, other_struct.platform_handle))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::BufferUsageAndFormat::DataView,
                                         ::gfx::mojom::BufferUsageAndFormatPtr> {
  static bool IsNull(const ::gfx::mojom::BufferUsageAndFormatPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::BufferUsageAndFormatPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::BufferUsageAndFormat::usage) usage(
      const ::gfx::mojom::BufferUsageAndFormatPtr& input) {
    return input->usage;
  }

  static decltype(::gfx::mojom::BufferUsageAndFormat::format) format(
      const ::gfx::mojom::BufferUsageAndFormatPtr& input) {
    return input->format;
  }

  static bool Read(::gfx::mojom::BufferUsageAndFormat::DataView input, ::gfx::mojom::BufferUsageAndFormatPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::GpuMemoryBufferId::DataView,
                                         ::gfx::mojom::GpuMemoryBufferIdPtr> {
  static bool IsNull(const ::gfx::mojom::GpuMemoryBufferIdPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::GpuMemoryBufferIdPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::GpuMemoryBufferId::id) id(
      const ::gfx::mojom::GpuMemoryBufferIdPtr& input) {
    return input->id;
  }

  static bool Read(::gfx::mojom::GpuMemoryBufferId::DataView input, ::gfx::mojom::GpuMemoryBufferIdPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::NativePixmapPlane::DataView,
                                         ::gfx::mojom::NativePixmapPlanePtr> {
  static bool IsNull(const ::gfx::mojom::NativePixmapPlanePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::NativePixmapPlanePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::NativePixmapPlane::stride) stride(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->stride;
  }

  static decltype(::gfx::mojom::NativePixmapPlane::offset) offset(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::NativePixmapPlane::size) size(
      const ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->size;
  }

  static  decltype(::gfx::mojom::NativePixmapPlane::buffer_handle)& buffer_handle(
       ::gfx::mojom::NativePixmapPlanePtr& input) {
    return input->buffer_handle;
  }

  static bool Read(::gfx::mojom::NativePixmapPlane::DataView input, ::gfx::mojom::NativePixmapPlanePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::NativePixmapHandle::DataView,
                                         ::gfx::mojom::NativePixmapHandlePtr> {
  static bool IsNull(const ::gfx::mojom::NativePixmapHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::NativePixmapHandlePtr* output) { output->reset(); }

  static  decltype(::gfx::mojom::NativePixmapHandle::planes)& planes(
       ::gfx::mojom::NativePixmapHandlePtr& input) {
    return input->planes;
  }

  static decltype(::gfx::mojom::NativePixmapHandle::modifier) modifier(
      const ::gfx::mojom::NativePixmapHandlePtr& input) {
    return input->modifier;
  }

  static bool Read(::gfx::mojom::NativePixmapHandle::DataView input, ::gfx::mojom::NativePixmapHandlePtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::GpuMemoryBufferHandle::DataView,
                                         ::gfx::mojom::GpuMemoryBufferHandlePtr> {
  static bool IsNull(const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::GpuMemoryBufferHandlePtr* output) { output->reset(); }

  static const decltype(::gfx::mojom::GpuMemoryBufferHandle::id)& id(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->id;
  }

  static decltype(::gfx::mojom::GpuMemoryBufferHandle::offset) offset(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->offset;
  }

  static decltype(::gfx::mojom::GpuMemoryBufferHandle::stride) stride(
      const ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->stride;
  }

  static  decltype(::gfx::mojom::GpuMemoryBufferHandle::platform_handle)& platform_handle(
       ::gfx::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->platform_handle;
  }

  static bool Read(::gfx::mojom::GpuMemoryBufferHandle::DataView input, ::gfx::mojom::GpuMemoryBufferHandlePtr* output);
};


template <>
struct  UnionTraits<::gfx::mojom::GpuMemoryBufferPlatformHandle::DataView,
                                        ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr> {
  static bool IsNull(const ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::GpuMemoryBufferPlatformHandlePtr* output) { output->reset(); }

  static ::gfx::mojom::GpuMemoryBufferPlatformHandle::Tag GetTag(const ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr& input) {
    return input->which();
  }

  static  base::UnsafeSharedMemoryRegion& shared_memory_handle( ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr& input) {
    return input->get_shared_memory_handle();
  }

  static  gfx::NativePixmapHandle& native_pixmap_handle( ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr& input) {
    return input->get_native_pixmap_handle();
  }

  static bool Read(::gfx::mojom::GpuMemoryBufferPlatformHandle::DataView input, ::gfx::mojom::GpuMemoryBufferPlatformHandlePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_H_