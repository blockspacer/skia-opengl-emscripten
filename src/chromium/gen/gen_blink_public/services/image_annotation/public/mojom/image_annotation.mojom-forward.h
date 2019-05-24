// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_FORWARD_H_
#define SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_FORWARD_H_

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




namespace image_annotation {
namespace mojom {
class AnnotationDataView;

class AnnotateImageResultDataView;

enum class AnnotateImageError : int32_t;

enum class AnnotationType : int32_t;
class Annotation;
using AnnotationPtr = mojo::InlinedStructPtr<Annotation>;

class AnnotateImageResult;

typedef mojo::StructPtr<AnnotateImageResult> AnnotateImageResultPtr;

class ImageProcessor;
using ImageProcessorPtr = mojo::InterfacePtr<ImageProcessor>;
using ImageProcessorPtrInfo = mojo::InterfacePtrInfo<ImageProcessor>;
using ThreadSafeImageProcessorPtr =
    mojo::ThreadSafeInterfacePtr<ImageProcessor>;
using ImageProcessorRequest = mojo::InterfaceRequest<ImageProcessor>;
using ImageProcessorAssociatedPtr =
    mojo::AssociatedInterfacePtr<ImageProcessor>;
using ThreadSafeImageProcessorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<ImageProcessor>;
using ImageProcessorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ImageProcessor>;
using ImageProcessorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ImageProcessor>;

class Annotator;
using AnnotatorPtr = mojo::InterfacePtr<Annotator>;
using AnnotatorPtrInfo = mojo::InterfacePtrInfo<Annotator>;
using ThreadSafeAnnotatorPtr =
    mojo::ThreadSafeInterfacePtr<Annotator>;
using AnnotatorRequest = mojo::InterfaceRequest<Annotator>;
using AnnotatorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Annotator>;
using ThreadSafeAnnotatorAssociatedPtr =
    mojo::ThreadSafeAssociatedInterfacePtr<Annotator>;
using AnnotatorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Annotator>;
using AnnotatorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Annotator>;




}  // namespace mojom
}  // namespace image_annotation

#endif  // SERVICES_IMAGE_ANNOTATION_PUBLIC_MOJOM_IMAGE_ANNOTATION_MOJOM_FORWARD_H_