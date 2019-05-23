// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/shared_memory.mojom-shared.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "base/memory/platform_shared_memory_region.h"
#include "base/memory/read_only_shared_memory_region.h"
#include "base/memory/unsafe_shared_memory_region.h"
#include "base/memory/writable_shared_memory_region.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {










class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) ReadOnlySharedMemoryRegion {
 public:
  using DataView = ReadOnlySharedMemoryRegionDataView;
  using Data_ = internal::ReadOnlySharedMemoryRegion_Data;

  template <typename... Args>
  static ReadOnlySharedMemoryRegionPtr New(Args&&... args) {
    return ReadOnlySharedMemoryRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReadOnlySharedMemoryRegionPtr From(const U& u) {
    return mojo::TypeConverter<ReadOnlySharedMemoryRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReadOnlySharedMemoryRegion>::Convert(*this);
  }


  ReadOnlySharedMemoryRegion();

  explicit ReadOnlySharedMemoryRegion(
      mojo::ScopedSharedBufferHandle buffer);

  ~ReadOnlySharedMemoryRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReadOnlySharedMemoryRegionPtr>
  ReadOnlySharedMemoryRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReadOnlySharedMemoryRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReadOnlySharedMemoryRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReadOnlySharedMemoryRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReadOnlySharedMemoryRegion_UnserializedMessageContext<
            UserType, ReadOnlySharedMemoryRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReadOnlySharedMemoryRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ReadOnlySharedMemoryRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReadOnlySharedMemoryRegion_UnserializedMessageContext<
            UserType, ReadOnlySharedMemoryRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReadOnlySharedMemoryRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedSharedBufferHandle buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(ReadOnlySharedMemoryRegion);
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) WritableSharedMemoryRegion {
 public:
  using DataView = WritableSharedMemoryRegionDataView;
  using Data_ = internal::WritableSharedMemoryRegion_Data;

  template <typename... Args>
  static WritableSharedMemoryRegionPtr New(Args&&... args) {
    return WritableSharedMemoryRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WritableSharedMemoryRegionPtr From(const U& u) {
    return mojo::TypeConverter<WritableSharedMemoryRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WritableSharedMemoryRegion>::Convert(*this);
  }


  WritableSharedMemoryRegion();

  explicit WritableSharedMemoryRegion(
      mojo::ScopedSharedBufferHandle buffer);

  ~WritableSharedMemoryRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WritableSharedMemoryRegionPtr>
  WritableSharedMemoryRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WritableSharedMemoryRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WritableSharedMemoryRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WritableSharedMemoryRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WritableSharedMemoryRegion_UnserializedMessageContext<
            UserType, WritableSharedMemoryRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<WritableSharedMemoryRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WritableSharedMemoryRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WritableSharedMemoryRegion_UnserializedMessageContext<
            UserType, WritableSharedMemoryRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WritableSharedMemoryRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedSharedBufferHandle buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(WritableSharedMemoryRegion);
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) UnsafeSharedMemoryRegion {
 public:
  using DataView = UnsafeSharedMemoryRegionDataView;
  using Data_ = internal::UnsafeSharedMemoryRegion_Data;

  template <typename... Args>
  static UnsafeSharedMemoryRegionPtr New(Args&&... args) {
    return UnsafeSharedMemoryRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UnsafeSharedMemoryRegionPtr From(const U& u) {
    return mojo::TypeConverter<UnsafeSharedMemoryRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UnsafeSharedMemoryRegion>::Convert(*this);
  }


  UnsafeSharedMemoryRegion();

  explicit UnsafeSharedMemoryRegion(
      mojo::ScopedSharedBufferHandle buffer);

  ~UnsafeSharedMemoryRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UnsafeSharedMemoryRegionPtr>
  UnsafeSharedMemoryRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, UnsafeSharedMemoryRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UnsafeSharedMemoryRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UnsafeSharedMemoryRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UnsafeSharedMemoryRegion_UnserializedMessageContext<
            UserType, UnsafeSharedMemoryRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<UnsafeSharedMemoryRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return UnsafeSharedMemoryRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UnsafeSharedMemoryRegion_UnserializedMessageContext<
            UserType, UnsafeSharedMemoryRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UnsafeSharedMemoryRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedSharedBufferHandle buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(UnsafeSharedMemoryRegion);
};

template <typename StructPtrType>
ReadOnlySharedMemoryRegionPtr ReadOnlySharedMemoryRegion::Clone() const {
  return New(
      mojo::Clone(buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReadOnlySharedMemoryRegion>::value>::type*>
bool ReadOnlySharedMemoryRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  return true;
}
template <typename StructPtrType>
WritableSharedMemoryRegionPtr WritableSharedMemoryRegion::Clone() const {
  return New(
      mojo::Clone(buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WritableSharedMemoryRegion>::value>::type*>
bool WritableSharedMemoryRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  return true;
}
template <typename StructPtrType>
UnsafeSharedMemoryRegionPtr UnsafeSharedMemoryRegion::Clone() const {
  return New(
      mojo::Clone(buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, UnsafeSharedMemoryRegion>::value>::type*>
bool UnsafeSharedMemoryRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::ReadOnlySharedMemoryRegion::DataView,
                                         ::mojo_base::mojom::blink::ReadOnlySharedMemoryRegionPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::ReadOnlySharedMemoryRegionPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::ReadOnlySharedMemoryRegionPtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::blink::ReadOnlySharedMemoryRegion::buffer)& buffer(
       ::mojo_base::mojom::blink::ReadOnlySharedMemoryRegionPtr& input) {
    return input->buffer;
  }

  static bool Read(::mojo_base::mojom::blink::ReadOnlySharedMemoryRegion::DataView input, ::mojo_base::mojom::blink::ReadOnlySharedMemoryRegionPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::WritableSharedMemoryRegion::DataView,
                                         ::mojo_base::mojom::blink::WritableSharedMemoryRegionPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::WritableSharedMemoryRegionPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::WritableSharedMemoryRegionPtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::blink::WritableSharedMemoryRegion::buffer)& buffer(
       ::mojo_base::mojom::blink::WritableSharedMemoryRegionPtr& input) {
    return input->buffer;
  }

  static bool Read(::mojo_base::mojom::blink::WritableSharedMemoryRegion::DataView input, ::mojo_base::mojom::blink::WritableSharedMemoryRegionPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::UnsafeSharedMemoryRegion::DataView,
                                         ::mojo_base::mojom::blink::UnsafeSharedMemoryRegionPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::UnsafeSharedMemoryRegionPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::UnsafeSharedMemoryRegionPtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::blink::UnsafeSharedMemoryRegion::buffer)& buffer(
       ::mojo_base::mojom::blink::UnsafeSharedMemoryRegionPtr& input) {
    return input->buffer;
  }

  static bool Read(::mojo_base::mojom::blink::UnsafeSharedMemoryRegion::DataView input, ::mojo_base::mojom::blink::UnsafeSharedMemoryRegionPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_SHARED_MEMORY_MOJOM_BLINK_H_