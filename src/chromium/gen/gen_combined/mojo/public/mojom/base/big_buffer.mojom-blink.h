// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink-forward.h"

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
#include "mojo/public/cpp/base/big_buffer.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {






class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BigBuffer {
 public:
  using DataView = BigBufferDataView;
  using Data_ = internal::BigBuffer_Data;
  using Tag = Data_::BigBuffer_Tag;

  static BigBufferPtr New() {
    return BigBufferPtr(base::in_place);
  }
  // Construct an instance holding |bytes|.
  static BigBufferPtr
  NewBytes(
      const WTF::Vector<uint8_t>& bytes) {
    auto result = BigBufferPtr(base::in_place);
    result->set_bytes(std::move(bytes));
    return result;
  }
  // Construct an instance holding |shared_memory|.
  static BigBufferPtr
  NewSharedMemory(
      BigBufferSharedMemoryRegionPtr shared_memory) {
    auto result = BigBufferPtr(base::in_place);
    result->set_shared_memory(std::move(shared_memory));
    return result;
  }
  // Construct an instance holding |invalid_buffer|.
  static BigBufferPtr
  NewInvalidBuffer(
      bool invalid_buffer) {
    auto result = BigBufferPtr(base::in_place);
    result->set_invalid_buffer(std::move(invalid_buffer));
    return result;
  }

  template <typename U>
  static BigBufferPtr From(const U& u) {
    return mojo::TypeConverter<BigBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BigBuffer>::Convert(*this);
  }

  BigBuffer();
  ~BigBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = BigBufferPtr>
  BigBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BigBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_bytes() const { return tag_ == Tag::BYTES; }

  
  WTF::Vector<uint8_t>& get_bytes() const {
    DCHECK(tag_ == Tag::BYTES);
    return *(data_.bytes);
  }

  
  void set_bytes(
      const WTF::Vector<uint8_t>& bytes);
  
  bool is_shared_memory() const { return tag_ == Tag::SHARED_MEMORY; }

  
  BigBufferSharedMemoryRegionPtr& get_shared_memory() const {
    DCHECK(tag_ == Tag::SHARED_MEMORY);
    return *(data_.shared_memory);
  }

  
  void set_shared_memory(
      BigBufferSharedMemoryRegionPtr shared_memory);
  
  bool is_invalid_buffer() const { return tag_ == Tag::INVALID_BUFFER; }

  
  bool get_invalid_buffer() const {
    DCHECK(tag_ == Tag::INVALID_BUFFER);
    return data_.invalid_buffer;
  }

  
  void set_invalid_buffer(
      bool invalid_buffer);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BigBuffer::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<BigBuffer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    WTF::Vector<uint8_t>* bytes;
    BigBufferSharedMemoryRegionPtr* shared_memory;
    bool invalid_buffer;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BigBufferSharedMemoryRegion {
 public:
  using DataView = BigBufferSharedMemoryRegionDataView;
  using Data_ = internal::BigBufferSharedMemoryRegion_Data;

  template <typename... Args>
  static BigBufferSharedMemoryRegionPtr New(Args&&... args) {
    return BigBufferSharedMemoryRegionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BigBufferSharedMemoryRegionPtr From(const U& u) {
    return mojo::TypeConverter<BigBufferSharedMemoryRegionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BigBufferSharedMemoryRegion>::Convert(*this);
  }


  BigBufferSharedMemoryRegion();

  BigBufferSharedMemoryRegion(
      mojo::ScopedSharedBufferHandle buffer_handle,
      uint32_t size);

  ~BigBufferSharedMemoryRegion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BigBufferSharedMemoryRegionPtr>
  BigBufferSharedMemoryRegionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BigBufferSharedMemoryRegion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BigBufferSharedMemoryRegion::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BigBufferSharedMemoryRegion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BigBufferSharedMemoryRegion_UnserializedMessageContext<
            UserType, BigBufferSharedMemoryRegion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BigBufferSharedMemoryRegion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BigBufferSharedMemoryRegion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BigBufferSharedMemoryRegion_UnserializedMessageContext<
            UserType, BigBufferSharedMemoryRegion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BigBufferSharedMemoryRegion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedSharedBufferHandle buffer_handle;
  
  uint32_t size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(BigBufferSharedMemoryRegion);
};

template <typename UnionPtrType>
BigBufferPtr BigBuffer::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::BYTES:
      rv->set_bytes(mojo::Clone(*data_.bytes));
      break;
    case Tag::SHARED_MEMORY:
      rv->set_shared_memory(mojo::Clone(*data_.shared_memory));
      break;
    case Tag::INVALID_BUFFER:
      rv->set_invalid_buffer(mojo::Clone(data_.invalid_buffer));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BigBuffer>::value>::type*>
bool BigBuffer::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::BYTES:
      return mojo::Equals(*(data_.bytes), *(other.data_.bytes));
    case Tag::SHARED_MEMORY:
      return mojo::Equals(*(data_.shared_memory), *(other.data_.shared_memory));
    case Tag::INVALID_BUFFER:
      return mojo::Equals(data_.invalid_buffer, other.data_.invalid_buffer);
  }

  return false;
}
template <typename StructPtrType>
BigBufferSharedMemoryRegionPtr BigBufferSharedMemoryRegion::Clone() const {
  return New(
      mojo::Clone(buffer_handle),
      mojo::Clone(size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BigBufferSharedMemoryRegion>::value>::type*>
bool BigBufferSharedMemoryRegion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer_handle, other_struct.buffer_handle))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::BigBufferSharedMemoryRegion::DataView,
                                         ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::blink::BigBufferSharedMemoryRegion::buffer_handle)& buffer_handle(
       ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr& input) {
    return input->buffer_handle;
  }

  static decltype(::mojo_base::mojom::blink::BigBufferSharedMemoryRegion::size) size(
      const ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr& input) {
    return input->size;
  }

  static bool Read(::mojo_base::mojom::blink::BigBufferSharedMemoryRegion::DataView input, ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) UnionTraits<::mojo_base::mojom::blink::BigBuffer::DataView,
                                        ::mojo_base::mojom::blink::BigBufferPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::BigBufferPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::BigBufferPtr* output) { output->reset(); }

  static ::mojo_base::mojom::blink::BigBuffer::Tag GetTag(const ::mojo_base::mojom::blink::BigBufferPtr& input) {
    return input->which();
  }

  static const WTF::Vector<uint8_t>& bytes(const ::mojo_base::mojom::blink::BigBufferPtr& input) {
    return input->get_bytes();
  }

  static  ::mojo_base::mojom::blink::BigBufferSharedMemoryRegionPtr& shared_memory( ::mojo_base::mojom::blink::BigBufferPtr& input) {
    return input->get_shared_memory();
  }

  static  bool invalid_buffer(const ::mojo_base::mojom::blink::BigBufferPtr& input) {
    return input->get_invalid_buffer();
  }

  static bool Read(::mojo_base::mojom::blink::BigBuffer::DataView input, ::mojo_base::mojom::blink::BigBufferPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_BIG_BUFFER_MOJOM_BLINK_H_