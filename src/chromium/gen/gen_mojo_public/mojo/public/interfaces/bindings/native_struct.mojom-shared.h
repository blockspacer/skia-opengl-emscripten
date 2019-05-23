// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_

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
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"




#include "base/component_export.h"




namespace mojo {
namespace native {
class SerializedHandleDataView;

class NativeStructDataView;



}  // namespace native
}  // namespace mojo

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::mojo::native::SerializedHandleDataView> {
  using Data = ::mojo::native::internal::SerializedHandle_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

template <>
struct MojomTypeTraits<::mojo::native::NativeStructDataView> {
  using Data = ::mojo::native::internal::NativeStruct_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace mojo {
namespace native {


enum class SerializedHandleType : int32_t {
  
  MOJO_HANDLE,
  
  PLATFORM_FILE,
  
  WIN_HANDLE,
  
  MACH_PORT,
  
  FUCHSIA_HANDLE,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJO_MOJOM_BINDINGS_SHARED) std::ostream& operator<<(std::ostream& os, SerializedHandleType value);
inline bool IsKnownEnumValue(SerializedHandleType value) {
  return internal::SerializedHandleType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SerializedHandleDataView {
 public:
  SerializedHandleDataView() {}

  SerializedHandleDataView(
      internal::SerializedHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeTheHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->the_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::mojo::native::SerializedHandleType>(
        data_value, output);
  }

  SerializedHandleType type() const {
    return static_cast<SerializedHandleType>(data_->type);
  }
 private:
  internal::SerializedHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};

class NativeStructDataView {
 public:
  NativeStructDataView() {}

  NativeStructDataView(
      internal::NativeStruct_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadData(UserType* output) {
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<SerializedHandleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::NativeStruct_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace native
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::native::SerializedHandleType>
    : public mojo::internal::EnumHashImpl<::mojo::native::SerializedHandleType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::native::SerializedHandleType, ::mojo::native::SerializedHandleType> {
  static ::mojo::native::SerializedHandleType ToMojom(::mojo::native::SerializedHandleType input) { return input; }
  static bool FromMojom(::mojo::native::SerializedHandleType input, ::mojo::native::SerializedHandleType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::native::SerializedHandleType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::native::SerializedHandleType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::native::SerializedHandleType>(input), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::native::SerializedHandleDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojo::native::SerializedHandleDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojo::native::internal::SerializedHandle_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::the_handle(input)) in_the_handle = Traits::the_handle(input);
    mojo::internal::Serialize<mojo::ScopedHandle>(
        in_the_handle, &(*output)->the_handle, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !mojo::internal::IsHandleOrInterfaceValid((*output)->the_handle),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
        "invalid the_handle in SerializedHandle struct");
    mojo::internal::Serialize<::mojo::native::SerializedHandleType>(
        Traits::type(input), &(*output)->type);
  }

  static bool Deserialize(::mojo::native::internal::SerializedHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojo::native::SerializedHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


}  // namespace mojo


namespace mojo {
namespace native {



inline void NativeStructDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void NativeStructDataView::GetHandlesDataView(
    mojo::ArrayDataView<SerializedHandleDataView>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<SerializedHandleDataView>(pointer, context_);
}



}  // namespace native
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_NATIVE_STRUCT_MOJOM_SHARED_H_