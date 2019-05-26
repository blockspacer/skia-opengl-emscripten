// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_FORWARD_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_FORWARD_H_



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
using DemuxerStream_Type = mojo::NativeEnum;
using DemuxerStream_Status = mojo::NativeEnum;
class DemuxerStream;
using DemuxerStreamPtr = mojo::InterfacePtr<DemuxerStream>;
using DemuxerStreamPtrInfo = mojo::InterfacePtrInfo<DemuxerStream>;
using ThreadSafeDemuxerStreamPtr =
    mojo::ThreadSafeInterfacePtr<DemuxerStream>;
using DemuxerStreamRequest = mojo::InterfaceRequest<DemuxerStream>;
using DemuxerStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<DemuxerStream>;
using ThreadSafeDemuxerStreamAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<DemuxerStream>;
using DemuxerStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DemuxerStream>;
using DemuxerStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DemuxerStream>;




}  // namespace mojom
}  // namespace media
#include "media/base/demuxer_stream.h"

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_FORWARD_H_