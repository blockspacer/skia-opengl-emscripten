// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/pending_associated_receiver.h"
#include "mojo/public/cpp/bindings/pending_associated_remote.h"
#include "mojo/public/cpp/bindings/pending_receiver.h"
#include "mojo/public/cpp/bindings/pending_remote.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
using VideoDecoderImplementation = mojo::NativeEnum;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"


namespace media {
namespace mojom {
namespace blink {
using VideoDecoderImplementation = VideoDecoderImplementation;  // Alias for definition in the parent namespace.
class SupportedVideoDecoderConfig;
using SupportedVideoDecoderConfigPtr = mojo::StructPtr<SupportedVideoDecoderConfig>;

class CommandBufferId;
using CommandBufferIdPtr = mojo::StructPtr<CommandBufferId>;

using OverlayInfo = mojo::native::NativeStruct;
using OverlayInfoPtr = mojo::native::NativeStructPtr;

class VideoFrameHandleReleaser;
using VideoFrameHandleReleaserPtr = mojo::InterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserPtrInfo = mojo::InterfacePtrInfo<VideoFrameHandleReleaser>;
using ThreadSafeVideoFrameHandleReleaserPtr =
    mojo::ThreadSafeInterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserRequest = mojo::InterfaceRequest<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoFrameHandleReleaser>;
using ThreadSafeVideoFrameHandleReleaserAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoFrameHandleReleaser>;
using VideoFrameHandleReleaserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoFrameHandleReleaser>;

class VideoDecoder;
using VideoDecoderPtr = mojo::InterfacePtr<VideoDecoder>;
using VideoDecoderPtrInfo = mojo::InterfacePtrInfo<VideoDecoder>;
using ThreadSafeVideoDecoderPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecoder>;
using VideoDecoderRequest = mojo::InterfaceRequest<VideoDecoder>;
using VideoDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoder>;
using ThreadSafeVideoDecoderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecoder>;
using VideoDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoder>;
using VideoDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoder>;

class VideoDecoderClient;
using VideoDecoderClientPtr = mojo::InterfacePtr<VideoDecoderClient>;
using VideoDecoderClientPtrInfo = mojo::InterfacePtrInfo<VideoDecoderClient>;
using ThreadSafeVideoDecoderClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientRequest = mojo::InterfaceRequest<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoderClient>;
using ThreadSafeVideoDecoderClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoderClient>;
using VideoDecoderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoderClient>;




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_BLINK_FORWARD_H_