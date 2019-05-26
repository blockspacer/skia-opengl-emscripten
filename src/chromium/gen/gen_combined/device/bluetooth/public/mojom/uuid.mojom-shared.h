// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_SHARED_H_
#define DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_SHARED_H_

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
#include "device/bluetooth/public/mojom/uuid.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace bluetooth {
namespace mojom {
class UUIDDataView;



}  // namespace mojom
}  // namespace bluetooth

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::bluetooth::mojom::UUIDDataView> {
  using Data = ::bluetooth::mojom::internal::UUID_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace bluetooth {
namespace mojom {
class UUIDDataView {
 public:
  UUIDDataView() {}

  UUIDDataView(
      internal::UUID_Data* data,
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
 private:
  internal::UUID_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace bluetooth

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::bluetooth::mojom::UUIDDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::bluetooth::mojom::UUIDDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::bluetooth::mojom::internal::UUID_Data::BufferWriter* output,
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
        "null uuid in UUID struct");
  }

  static bool Deserialize(::bluetooth::mojom::internal::UUID_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::bluetooth::mojom::UUIDDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace bluetooth {
namespace mojom {

inline void UUIDDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace bluetooth

#endif  // DEVICE_BLUETOOTH_PUBLIC_MOJOM_UUID_MOJOM_SHARED_H_