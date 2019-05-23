// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_TRANSFERABLE_MESSAGE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_TRANSFERABLE_MESSAGE_MOJOM_SHARED_H_

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
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/array_buffer/array_buffer_contents.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/cloneable_message.mojom-shared.h"
#include "third_party/blink/public/mojom/messaging/user_activation_snapshot.mojom-shared.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace blink {
namespace mojom {
class TransferableMessageDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::TransferableMessageDataView> {
  using Data = ::blink::mojom::internal::TransferableMessage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::STRUCT;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {
class TransferableMessageDataView {
 public:
  TransferableMessageDataView() {}

  TransferableMessageDataView(
      internal::TransferableMessage_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      ::blink::mojom::CloneableMessageDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadMessage(UserType* output) {
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<::blink::mojom::CloneableMessageDataView>(
        pointer, output, context_);
  }
  inline void GetPortsDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadPorts(UserType* output) {
    auto* pointer = data_->ports.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  inline void GetStreamChannelsDataView(
      mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadStreamChannels(UserType* output) {
    auto* pointer = data_->stream_channels.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        pointer, output, context_);
  }
  inline void GetArrayBufferContentsArrayDataView(
      mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadArrayBufferContentsArray(UserType* output) {
    auto* pointer = data_->array_buffer_contents_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>>(
        pointer, output, context_);
  }
  inline void GetImageBitmapContentsArrayDataView(
      mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadImageBitmapContentsArray(UserType* output) {
    auto* pointer = data_->image_bitmap_contents_array.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        pointer, output, context_);
  }
  bool has_user_gesture() const {
    return data_->has_user_gesture;
  }
  inline void GetUserActivationDataView(
      ::blink::mojom::UserActivationSnapshotDataView* output);

  template <typename UserType>
  WARN_UNUSED_RESULT bool ReadUserActivation(UserType* output) {
    auto* pointer = data_->user_activation.Get();
    return mojo::internal::Deserialize<::blink::mojom::UserActivationSnapshotDataView>(
        pointer, output, context_);
  }
  bool transfer_user_activation() const {
    return data_->transfer_user_activation;
  }
 private:
  internal::TransferableMessage_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::TransferableMessageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::TransferableMessageDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::TransferableMessage_Data::BufferWriter* output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    (*output).Allocate(buffer);
    decltype(Traits::message(input)) in_message = Traits::message(input);
    typename decltype((*output)->message)::BaseType::BufferWriter
        message_writer;
    mojo::internal::Serialize<::blink::mojom::CloneableMessageDataView>(
        in_message, buffer, &message_writer, context);
    (*output)->message.Set(
        message_writer.is_null() ? nullptr : message_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->message.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in TransferableMessage struct");
    decltype(Traits::ports(input)) in_ports = Traits::ports(input);
    typename decltype((*output)->ports)::BaseType::BufferWriter
        ports_writer;
    const mojo::internal::ContainerValidateParams ports_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_ports, buffer, &ports_writer, &ports_validate_params,
        context);
    (*output)->ports.Set(
        ports_writer.is_null() ? nullptr : ports_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->ports.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null ports in TransferableMessage struct");
    decltype(Traits::stream_channels(input)) in_stream_channels = Traits::stream_channels(input);
    typename decltype((*output)->stream_channels)::BaseType::BufferWriter
        stream_channels_writer;
    const mojo::internal::ContainerValidateParams stream_channels_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>>(
        in_stream_channels, buffer, &stream_channels_writer, &stream_channels_validate_params,
        context);
    (*output)->stream_channels.Set(
        stream_channels_writer.is_null() ? nullptr : stream_channels_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->stream_channels.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stream_channels in TransferableMessage struct");
    decltype(Traits::array_buffer_contents_array(input)) in_array_buffer_contents_array = Traits::array_buffer_contents_array(input);
    typename decltype((*output)->array_buffer_contents_array)::BaseType::BufferWriter
        array_buffer_contents_array_writer;
    const mojo::internal::ContainerValidateParams array_buffer_contents_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>>(
        in_array_buffer_contents_array, buffer, &array_buffer_contents_array_writer, &array_buffer_contents_array_validate_params,
        context);
    (*output)->array_buffer_contents_array.Set(
        array_buffer_contents_array_writer.is_null() ? nullptr : array_buffer_contents_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->array_buffer_contents_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null array_buffer_contents_array in TransferableMessage struct");
    decltype(Traits::image_bitmap_contents_array(input)) in_image_bitmap_contents_array = Traits::image_bitmap_contents_array(input);
    typename decltype((*output)->image_bitmap_contents_array)::BaseType::BufferWriter
        image_bitmap_contents_array_writer;
    const mojo::internal::ContainerValidateParams image_bitmap_contents_array_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::skia::mojom::BitmapDataView>>(
        in_image_bitmap_contents_array, buffer, &image_bitmap_contents_array_writer, &image_bitmap_contents_array_validate_params,
        context);
    (*output)->image_bitmap_contents_array.Set(
        image_bitmap_contents_array_writer.is_null() ? nullptr : image_bitmap_contents_array_writer.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        (*output)->image_bitmap_contents_array.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null image_bitmap_contents_array in TransferableMessage struct");
    (*output)->has_user_gesture = Traits::has_user_gesture(input);
    decltype(Traits::user_activation(input)) in_user_activation = Traits::user_activation(input);
    typename decltype((*output)->user_activation)::BaseType::BufferWriter
        user_activation_writer;
    mojo::internal::Serialize<::blink::mojom::UserActivationSnapshotDataView>(
        in_user_activation, buffer, &user_activation_writer, context);
    (*output)->user_activation.Set(
        user_activation_writer.is_null() ? nullptr : user_activation_writer.data());
    (*output)->transfer_user_activation = Traits::transfer_user_activation(input);
  }

  static bool Deserialize(::blink::mojom::internal::TransferableMessage_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::TransferableMessageDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void TransferableMessageDataView::GetMessageDataView(
    ::blink::mojom::CloneableMessageDataView* output) {
  auto pointer = data_->message.Get();
  *output = ::blink::mojom::CloneableMessageDataView(pointer, context_);
}
inline void TransferableMessageDataView::GetPortsDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->ports.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}
inline void TransferableMessageDataView::GetStreamChannelsDataView(
    mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>* output) {
  auto pointer = data_->stream_channels.Get();
  *output = mojo::ArrayDataView<mojo::ScopedMessagePipeHandle>(pointer, context_);
}
inline void TransferableMessageDataView::GetArrayBufferContentsArrayDataView(
    mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>* output) {
  auto pointer = data_->array_buffer_contents_array.Get();
  *output = mojo::ArrayDataView<::blink::mojom::SerializedArrayBufferContentsDataView>(pointer, context_);
}
inline void TransferableMessageDataView::GetImageBitmapContentsArrayDataView(
    mojo::ArrayDataView<::skia::mojom::BitmapDataView>* output) {
  auto pointer = data_->image_bitmap_contents_array.Get();
  *output = mojo::ArrayDataView<::skia::mojom::BitmapDataView>(pointer, context_);
}
inline void TransferableMessageDataView::GetUserActivationDataView(
    ::blink::mojom::UserActivationSnapshotDataView* output) {
  auto pointer = data_->user_activation.Get();
  *output = ::blink::mojom::UserActivationSnapshotDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_TRANSFERABLE_MESSAGE_MOJOM_SHARED_H_