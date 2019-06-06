// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_H_
#define IPC_IPC_MOJOM_SHARED_H_

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
#if defined(ENABLE_GIPC)
#include "ipc/ipc.mojom-shared-internal.h"
#endif // ENABLE_GIPC
#include "mojo/public/mojom/base/big_buffer.mojom-shared.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"



#if defined(ENABLE_GIPC)

namespace IPC {
namespace mojom {
class MessageDataView;



}  // namespace mojom
}  // namespace IPC

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::IPC::mojom::MessageDataView> {
  using Data = ::IPC::mojom::internal::Message_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace IPC {
namespace mojom {
// Interface base classes. They are used for type safety check.
class GenericInterfaceInterfaceBase {};

using GenericInterfacePtrDataView =
    mojo::InterfacePtrDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceRequestDataView =
    mojo::InterfaceRequestDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<GenericInterfaceInterfaceBase>;
using GenericInterfaceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<GenericInterfaceInterfaceBase>;
class ChannelInterfaceBase {};

using ChannelPtrDataView =
    mojo::InterfacePtrDataView<ChannelInterfaceBase>;
using ChannelRequestDataView =
    mojo::InterfaceRequestDataView<ChannelInterfaceBase>;
using ChannelAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChannelInterfaceBase>;
using ChannelAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChannelInterfaceBase>;
class ChannelBootstrapInterfaceBase {};

using ChannelBootstrapPtrDataView =
    mojo::InterfacePtrDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapRequestDataView =
    mojo::InterfaceRequestDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<ChannelBootstrapInterfaceBase>;
using ChannelBootstrapAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<ChannelBootstrapInterfaceBase>;
class MessageDataView {
 public:
  MessageDataView() {}

  MessageDataView(
      internal::Message_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadBuffer(UserType* output) {
    auto* pointer = !data_->buffer.is_null() ? &data_->buffer : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, context_);
  }
  inline void GetHandlesDataView(
      mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadHandles(UserType* output) {
    auto* pointer = data_->handles.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
        pointer, output, context_);
  }
 private:
  internal::Message_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace IPC

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::IPC::mojom::MessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::IPC::mojom::MessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::IPC::mojom::internal::Message_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::buffer(input)) in_buffer = Traits::buffer(input);
    typename decltype((*output)->buffer)::BufferWriter buffer_writer;
    buffer_writer.AllocateInline(buffer, &(*output)->buffer);
    mojo::internal::Serialize<::mojo_base::mojom::BigBufferDataView>(
        in_buffer, buffer, &buffer_writer, true, context);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->buffer.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null buffer in Message struct");
    decltype(Traits::handles(input)) in_handles = Traits::handles(input);
    typename decltype((*output)->handles)::BaseType::BufferWriter
        handles_writer;
    const mojo::internal::ContainerValidateParams handles_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>>(
        in_handles, buffer, &handles_writer, &handles_validate_params,
        context);
    (*output)->handles.Set(
        handles_writer.is_null() ? nullptr : handles_writer.data());
  }

  static bool Deserialize(::IPC::mojom::internal::Message_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::IPC::mojom::MessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace IPC {
namespace mojom {

inline void MessageDataView::GetBufferDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->buffer;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, context_);
}
inline void MessageDataView::GetHandlesDataView(
    mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>* output) {
  auto pointer = data_->handles.Get();
  *output = mojo::ArrayDataView<::mojo::native::SerializedHandleDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace IPC
#endif // ENABLE_GIPC

#endif  // IPC_IPC_MOJOM_SHARED_H_
