// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include <string>
#include <vector>




#include "base/component_export.h"




namespace mojo {
namespace native {









class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) SerializedHandle {
 public:
  using DataView = SerializedHandleDataView;
  using Data_ = internal::SerializedHandle_Data;

  template <typename... Args>
  static SerializedHandlePtr New(Args&&... args) {
    return SerializedHandlePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SerializedHandlePtr From(const U& u) {
    return mojo::TypeConverter<SerializedHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedHandle>::Convert(*this);
  }


  SerializedHandle();

  SerializedHandle(
      mojo::ScopedHandle the_handle,
      SerializedHandleType type);

  ~SerializedHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SerializedHandlePtr>
  SerializedHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SerializedHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SerializedHandle::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SerializedHandle::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SerializedHandle_UnserializedMessageContext<
            UserType, SerializedHandle::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SerializedHandle::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SerializedHandle::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SerializedHandle_UnserializedMessageContext<
            UserType, SerializedHandle::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SerializedHandle::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  mojo::ScopedHandle the_handle;
  
  SerializedHandleType type;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(SerializedHandle);
};





class COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) NativeStruct {
 public:
  using DataView = NativeStructDataView;
  using Data_ = internal::NativeStruct_Data;

  template <typename... Args>
  static NativeStructPtr New(Args&&... args) {
    return NativeStructPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static NativeStructPtr From(const U& u) {
    return mojo::TypeConverter<NativeStructPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativeStruct>::Convert(*this);
  }


  NativeStruct();

  NativeStruct(
      const std::vector<uint8_t>& data,
      base::Optional<std::vector<SerializedHandlePtr>> handles);

  ~NativeStruct();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativeStructPtr>
  NativeStructPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativeStruct>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        NativeStruct::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        NativeStruct::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::NativeStruct_UnserializedMessageContext<
            UserType, NativeStruct::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<NativeStruct::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return NativeStruct::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::NativeStruct_UnserializedMessageContext<
            UserType, NativeStruct::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<NativeStruct::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> data;
  
  base::Optional<std::vector<SerializedHandlePtr>> handles;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(NativeStruct);
};

template <typename StructPtrType>
SerializedHandlePtr SerializedHandle::Clone() const {
  return New(
      mojo::Clone(the_handle),
      mojo::Clone(type)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SerializedHandle>::value>::type*>
bool SerializedHandle::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->the_handle, other_struct.the_handle))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  return true;
}
template <typename StructPtrType>
NativeStructPtr NativeStruct::Clone() const {
  return New(
      mojo::Clone(data),
      mojo::Clone(handles)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativeStruct>::value>::type*>
bool NativeStruct::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  if (!mojo::Equals(this->handles, other_struct.handles))
    return false;
  return true;
}


}  // namespace native
}  // namespace mojo

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::native::SerializedHandle::DataView,
                                         ::mojo::native::SerializedHandlePtr> {
  static bool IsNull(const ::mojo::native::SerializedHandlePtr& input) { return !input; }
  static void SetToNull(::mojo::native::SerializedHandlePtr* output) { output->reset(); }

  static  decltype(::mojo::native::SerializedHandle::the_handle)& the_handle(
       ::mojo::native::SerializedHandlePtr& input) {
    return input->the_handle;
  }

  static decltype(::mojo::native::SerializedHandle::type) type(
      const ::mojo::native::SerializedHandlePtr& input) {
    return input->type;
  }

  static bool Read(::mojo::native::SerializedHandle::DataView input, ::mojo::native::SerializedHandlePtr* output);
};


template <>
struct COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS) StructTraits<::mojo::native::NativeStruct::DataView,
                                         ::mojo::native::NativeStructPtr> {
  static bool IsNull(const ::mojo::native::NativeStructPtr& input) { return !input; }
  static void SetToNull(::mojo::native::NativeStructPtr* output) { output->reset(); }

  static const decltype(::mojo::native::NativeStruct::data)& data(
      const ::mojo::native::NativeStructPtr& input) {
    return input->data;
  }

  static  decltype(::mojo::native::NativeStruct::handles)& handles(
       ::mojo::native::NativeStructPtr& input) {
    return input->handles;
  }

  static bool Read(::mojo::native::NativeStruct::DataView input, ::mojo::native::NativeStructPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_H_