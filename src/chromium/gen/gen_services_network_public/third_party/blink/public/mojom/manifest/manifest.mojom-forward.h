// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {
class ManifestDataView;

class ManifestImageResourceDataView;

class ManifestFileFilterDataView;

class ManifestRelatedApplicationDataView;

class ManifestShareTargetParamsDataView;

class ManifestShareTargetDataView;

class ManifestFileHandlerDataView;

class ManifestDebugInfoDataView;

class ManifestErrorDataView;


enum class ManifestImageResource_Purpose : int32_t;

enum class ManifestShareTarget_Method : int32_t;

enum class ManifestShareTarget_Enctype : int32_t;
class Manifest;
using ManifestPtr = mojo::StructPtr<Manifest>;

class ManifestImageResource;
using ManifestImageResourcePtr = mojo::StructPtr<ManifestImageResource>;

class ManifestFileFilter;
using ManifestFileFilterPtr = mojo::StructPtr<ManifestFileFilter>;

class ManifestRelatedApplication;
using ManifestRelatedApplicationPtr = mojo::StructPtr<ManifestRelatedApplication>;

class ManifestShareTargetParams;
using ManifestShareTargetParamsPtr = mojo::StructPtr<ManifestShareTargetParams>;

class ManifestShareTarget;
using ManifestShareTargetPtr = mojo::StructPtr<ManifestShareTarget>;

class ManifestFileHandler;
using ManifestFileHandlerPtr = mojo::StructPtr<ManifestFileHandler>;

class ManifestDebugInfo;
using ManifestDebugInfoPtr = mojo::StructPtr<ManifestDebugInfo>;

class ManifestError;
using ManifestErrorPtr = mojo::InlinedStructPtr<ManifestError>;




}  // namespace mojom
}  // namespace blink
#include "third_party/blink/public/common/common_export.h"
#include "third_party/blink/public/common/manifest/manifest.h"

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_FORWARD_H_