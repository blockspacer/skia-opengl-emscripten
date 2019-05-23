// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_FORWARD_H_

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




namespace media {
namespace mojom {
class VideoBitrateAllocationDataView;

class VideoEncodeAcceleratorConfigDataView;

class Vp8MetadataDataView;

class BitstreamBufferMetadataDataView;


enum class VideoEncodeAcceleratorConfig_ContentType : int32_t;

enum class VideoEncodeAccelerator_Error : int32_t;
class VideoBitrateAllocation;
using VideoBitrateAllocationPtr = mojo::StructPtr<VideoBitrateAllocation>;

class VideoEncodeAcceleratorConfig;
using VideoEncodeAcceleratorConfigPtr = mojo::StructPtr<VideoEncodeAcceleratorConfig>;

class Vp8Metadata;
using Vp8MetadataPtr = mojo::InlinedStructPtr<Vp8Metadata>;

class BitstreamBufferMetadata;
using BitstreamBufferMetadataPtr = mojo::StructPtr<BitstreamBufferMetadata>;

class VideoEncodeAcceleratorProvider;
using VideoEncodeAcceleratorProviderPtr = mojo::InterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAcceleratorProvider>;
using ThreadSafeVideoEncodeAcceleratorProviderPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderRequest = mojo::InterfaceRequest<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAcceleratorProvider>;
using ThreadSafeVideoEncodeAcceleratorProviderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAcceleratorProvider>;
using VideoEncodeAcceleratorProviderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAcceleratorProvider>;

class VideoEncodeAccelerator;
using VideoEncodeAcceleratorPtr = mojo::InterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAccelerator>;
using ThreadSafeVideoEncodeAcceleratorPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorRequest = mojo::InterfaceRequest<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAccelerator>;
using ThreadSafeVideoEncodeAcceleratorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAccelerator>;
using VideoEncodeAcceleratorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAccelerator>;

class VideoEncodeAcceleratorClient;
using VideoEncodeAcceleratorClientPtr = mojo::InterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientPtrInfo = mojo::InterfacePtrInfo<VideoEncodeAcceleratorClient>;
using ThreadSafeVideoEncodeAcceleratorClientPtr =
    mojo::ThreadSafeInterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientRequest = mojo::InterfaceRequest<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoEncodeAcceleratorClient>;
using ThreadSafeVideoEncodeAcceleratorClientAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoEncodeAcceleratorClient>;
using VideoEncodeAcceleratorClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoEncodeAcceleratorClient>;




}  // namespace mojom
}  // namespace media
#include "media/video/video_encode_accelerator.h"

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_ENCODE_ACCELERATOR_MOJOM_FORWARD_H_