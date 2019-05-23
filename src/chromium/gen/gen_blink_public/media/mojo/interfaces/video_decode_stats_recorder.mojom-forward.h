// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_FORWARD_H_



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






namespace media {
namespace mojom {
class VideoDecodeStatsRecorder;
using VideoDecodeStatsRecorderPtr = mojo::InterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderPtrInfo = mojo::InterfacePtrInfo<VideoDecodeStatsRecorder>;
using ThreadSafeVideoDecodeStatsRecorderPtr =
    mojo::ThreadSafeInterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderRequest = mojo::InterfaceRequest<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecodeStatsRecorder>;
using ThreadSafeVideoDecodeStatsRecorderAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecodeStatsRecorder>;
using VideoDecodeStatsRecorderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecodeStatsRecorder>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODE_STATS_RECORDER_MOJOM_FORWARD_H_