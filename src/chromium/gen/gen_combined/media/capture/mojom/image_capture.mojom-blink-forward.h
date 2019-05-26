// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_FORWARD_H_
#define MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_FORWARD_H_

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

enum class MeteringMode : int32_t;

enum class RedEyeReduction : int32_t;

enum class FillLightMode : int32_t;
}  // namespace media
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct media_mojom_internal_MeteringMode_DataHashFn;

template <>
struct DefaultHash<::media::mojom::MeteringMode> {
  using Hash = media_mojom_internal_MeteringMode_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_RedEyeReduction_DataHashFn;

template <>
struct DefaultHash<::media::mojom::RedEyeReduction> {
  using Hash = media_mojom_internal_RedEyeReduction_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct media_mojom_internal_FillLightMode_DataHashFn;

template <>
struct DefaultHash<::media::mojom::FillLightMode> {
  using Hash = media_mojom_internal_FillLightMode_DataHashFn;
};
}  // namespace WTF


namespace media {
namespace mojom {
namespace blink {
using MeteringMode = MeteringMode;  // Alias for definition in the parent namespace.
using RedEyeReduction = RedEyeReduction;  // Alias for definition in the parent namespace.
using FillLightMode = FillLightMode;  // Alias for definition in the parent namespace.
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




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_CAPTURE_MOJOM_IMAGE_CAPTURE_MOJOM_BLINK_FORWARD_H_