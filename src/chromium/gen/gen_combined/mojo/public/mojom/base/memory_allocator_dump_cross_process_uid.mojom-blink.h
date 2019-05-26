// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_BLINK_H_

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
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-shared.h"
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom-blink-forward.h"

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
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {





class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) MemoryAllocatorDumpCrossProcessUid {
 public:
  using DataView = MemoryAllocatorDumpCrossProcessUidDataView;
  using Data_ = internal::MemoryAllocatorDumpCrossProcessUid_Data;

  template <typename... Args>
  static MemoryAllocatorDumpCrossProcessUidPtr New(Args&&... args) {
    return MemoryAllocatorDumpCrossProcessUidPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MemoryAllocatorDumpCrossProcessUidPtr From(const U& u) {
    return mojo::TypeConverter<MemoryAllocatorDumpCrossProcessUidPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MemoryAllocatorDumpCrossProcessUid>::Convert(*this);
  }


  MemoryAllocatorDumpCrossProcessUid();

  explicit MemoryAllocatorDumpCrossProcessUid(
      uint64_t value);

  ~MemoryAllocatorDumpCrossProcessUid();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MemoryAllocatorDumpCrossProcessUidPtr>
  MemoryAllocatorDumpCrossProcessUidPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MemoryAllocatorDumpCrossProcessUid>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MemoryAllocatorDumpCrossProcessUid::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MemoryAllocatorDumpCrossProcessUid::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext<
            UserType, MemoryAllocatorDumpCrossProcessUid::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MemoryAllocatorDumpCrossProcessUid::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MemoryAllocatorDumpCrossProcessUid::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MemoryAllocatorDumpCrossProcessUid_UnserializedMessageContext<
            UserType, MemoryAllocatorDumpCrossProcessUid::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MemoryAllocatorDumpCrossProcessUid::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  uint64_t value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
MemoryAllocatorDumpCrossProcessUidPtr MemoryAllocatorDumpCrossProcessUid::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MemoryAllocatorDumpCrossProcessUid>::value>::type*>
bool MemoryAllocatorDumpCrossProcessUid::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUid::DataView,
                                         ::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUidPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUidPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUidPtr* output) { output->reset(); }

  static decltype(::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUid::value) value(
      const ::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUidPtr& input) {
    return input->value;
  }

  static bool Read(::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUid::DataView input, ::mojo_base::mojom::blink::MemoryAllocatorDumpCrossProcessUidPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_MEMORY_ALLOCATOR_DUMP_CROSS_PROCESS_UID_MOJOM_BLINK_H_