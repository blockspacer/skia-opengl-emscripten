// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {

enum class ManifestImageResource_Purpose : int32_t;

enum class ManifestShareTarget_Method : int32_t;

enum class ManifestShareTarget_Enctype : int32_t;
}  // namespace blink
}  // namespace mojom
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"

namespace WTF {
struct blink_mojom_internal_ManifestImageResource_Purpose_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ManifestImageResource_Purpose> {
  using Hash = blink_mojom_internal_ManifestImageResource_Purpose_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ManifestShareTarget_Method_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ManifestShareTarget_Method> {
  using Hash = blink_mojom_internal_ManifestShareTarget_Method_DataHashFn;
};
}  // namespace WTF

namespace WTF {
struct blink_mojom_internal_ManifestShareTarget_Enctype_DataHashFn;

template <>
struct DefaultHash<::blink::mojom::ManifestShareTarget_Enctype> {
  using Hash = blink_mojom_internal_ManifestShareTarget_Enctype_DataHashFn;
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {
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




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_BLINK_FORWARD_H_