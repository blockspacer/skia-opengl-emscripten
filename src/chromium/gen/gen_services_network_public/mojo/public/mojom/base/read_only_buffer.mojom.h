// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_BUFFER_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_BUFFER_MOJOM_H_

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
#include "mojo/public/mojom/base/read_only_buffer.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_buffer.mojom-forward.h"
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
#include "base/containers/span.h"




namespace mojo_base {
namespace mojom {








class  ReadOnlyBuffer {
 public:
  using DataView = ReadOnlyBufferDataView;
  using Data_ = internal::ReadOnlyBuffer_Data;

  template <typename... Args>
  static ReadOnlyBufferPtr New(Args&&... args) {
    return ReadOnlyBufferPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReadOnlyBufferPtr From(const U& u) {
    return mojo::TypeConverter<ReadOnlyBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReadOnlyBuffer>::Convert(*this);
  }


  ReadOnlyBuffer();

  explicit ReadOnlyBuffer(
      const std::vector<uint8_t>& buffer);

  ~ReadOnlyBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReadOnlyBufferPtr>
  ReadOnlyBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReadOnlyBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReadOnlyBuffer::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReadOnlyBuffer::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReadOnlyBuffer_UnserializedMessageContext<
            UserType, ReadOnlyBuffer::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ReadOnlyBuffer::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReadOnlyBuffer::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReadOnlyBuffer_UnserializedMessageContext<
            UserType, ReadOnlyBuffer::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReadOnlyBuffer::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> buffer;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
ReadOnlyBufferPtr ReadOnlyBuffer::Clone() const {
  return New(
      mojo::Clone(buffer)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReadOnlyBuffer>::value>::type*>
bool ReadOnlyBuffer::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->buffer, other_struct.buffer))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct  StructTraits<::mojo_base::mojom::ReadOnlyBuffer::DataView,
                                         ::mojo_base::mojom::ReadOnlyBufferPtr> {
  static bool IsNull(const ::mojo_base::mojom::ReadOnlyBufferPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::ReadOnlyBufferPtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::ReadOnlyBuffer::buffer)& buffer(
      const ::mojo_base::mojom::ReadOnlyBufferPtr& input) {
    return input->buffer;
  }

  static bool Read(::mojo_base::mojom::ReadOnlyBuffer::DataView input, ::mojo_base::mojom::ReadOnlyBufferPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_BUFFER_MOJOM_H_