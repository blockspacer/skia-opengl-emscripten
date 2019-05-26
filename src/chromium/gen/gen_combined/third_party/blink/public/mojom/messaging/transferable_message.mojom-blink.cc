// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-params-data.h"
#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/messaging/transferable_message.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_TRANSFERABLE_MESSAGE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MESSAGING_TRANSFERABLE_MESSAGE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_cloneable_message_struct_traits.h"
#include "third_party/blink/renderer/core/messaging/blink_transferable_message_struct_traits.h"
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#endif
namespace blink {
namespace mojom {
namespace blink {
TransferableMessage::TransferableMessage()
    : message(),
      ports(),
      stream_channels(),
      array_buffer_contents_array(),
      image_bitmap_contents_array(),
      has_user_gesture(),
      user_activation(),
      transfer_user_activation() {}

TransferableMessage::TransferableMessage(
    ::blink::BlinkCloneableMessage message_in,
    WTF::Vector<mojo::ScopedMessagePipeHandle> ports_in,
    WTF::Vector<mojo::ScopedMessagePipeHandle> stream_channels_in,
    WTF::Vector<WTF::ArrayBufferContents> array_buffer_contents_array_in,
    const WTF::Vector<SkBitmap>& image_bitmap_contents_array_in,
    bool has_user_gesture_in,
    ::blink::mojom::blink::UserActivationSnapshotPtr user_activation_in,
    bool transfer_user_activation_in)
    : message(std::move(message_in)),
      ports(std::move(ports_in)),
      stream_channels(std::move(stream_channels_in)),
      array_buffer_contents_array(std::move(array_buffer_contents_array_in)),
      image_bitmap_contents_array(std::move(image_bitmap_contents_array_in)),
      has_user_gesture(std::move(has_user_gesture_in)),
      user_activation(std::move(user_activation_in)),
      transfer_user_activation(std::move(transfer_user_activation_in)) {}

TransferableMessage::~TransferableMessage() = default;

bool TransferableMessage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::TransferableMessage::DataView, ::blink::mojom::blink::TransferableMessagePtr>::Read(
    ::blink::mojom::blink::TransferableMessage::DataView input,
    ::blink::mojom::blink::TransferableMessagePtr* output) {
  bool success = true;
  ::blink::mojom::blink::TransferableMessagePtr result(::blink::mojom::blink::TransferableMessage::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      if (!input.ReadPorts(&result->ports))
        success = false;
      if (!input.ReadStreamChannels(&result->stream_channels))
        success = false;
      if (!input.ReadArrayBufferContentsArray(&result->array_buffer_contents_array))
        success = false;
      if (!input.ReadImageBitmapContentsArray(&result->image_bitmap_contents_array))
        success = false;
      result->has_user_gesture = input.has_user_gesture();
      if (!input.ReadUserActivation(&result->user_activation))
        success = false;
      result->transfer_user_activation = input.transfer_user_activation();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif