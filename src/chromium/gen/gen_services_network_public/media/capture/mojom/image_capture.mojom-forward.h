// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_FORWARD_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_FORWARD_H_

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
class RangeDataView;

class PhotoStateDataView;

class Point2DDataView;

class PhotoSettingsDataView;

class BlobDataView;


enum class MeteringMode : int32_t;

enum class RedEyeReduction : int32_t;

enum class FillLightMode : int32_t;
class Range;
using RangePtr = mojo::InlinedStructPtr<Range>;

class PhotoState;
using PhotoStatePtr = mojo::StructPtr<PhotoState>;

class Point2D;
using Point2DPtr = mojo::InlinedStructPtr<Point2D>;

class PhotoSettings;
using PhotoSettingsPtr = mojo::StructPtr<PhotoSettings>;

class Blob;
using BlobPtr = mojo::StructPtr<Blob>;

class ImageCapture;
using ImageCapturePtr = mojo::InterfacePtr<ImageCapture>;
using ImageCapturePtrInfo = mojo::InterfacePtrInfo<ImageCapture>;
using ThreadSafeImageCapturePtr =
    mojo::ThreadSafeInterfacePtr<ImageCapture>;
using ImageCaptureRequest = mojo::InterfaceRequest<ImageCapture>;
using ImageCaptureAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageCapture>;
using ThreadSafeImageCaptureAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImageCapture>;
using ImageCaptureAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageCapture>;
using ImageCaptureAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageCapture>;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_FORWARD_H_