// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "third_party/blink/public/mojom/feature_policy/feature_policy.mojom-params-data.h"
namespace blink {
namespace mojom {

std::ostream& operator<<(std::ostream& os, WebSandboxFlags value) {
  switch(value) {
    case WebSandboxFlags::kNone:
      return os << "WebSandboxFlags::kNone";
    case WebSandboxFlags::kNavigation:
      return os << "WebSandboxFlags::kNavigation";
    case WebSandboxFlags::kPlugins:
      return os << "WebSandboxFlags::kPlugins";
    case WebSandboxFlags::kOrigin:
      return os << "WebSandboxFlags::kOrigin";
    case WebSandboxFlags::kForms:
      return os << "WebSandboxFlags::kForms";
    case WebSandboxFlags::kScripts:
      return os << "WebSandboxFlags::kScripts";
    case WebSandboxFlags::kTopNavigation:
      return os << "WebSandboxFlags::kTopNavigation";
    case WebSandboxFlags::kPopups:
      return os << "WebSandboxFlags::kPopups";
    case WebSandboxFlags::kAutomaticFeatures:
      return os << "WebSandboxFlags::kAutomaticFeatures";
    case WebSandboxFlags::kPointerLock:
      return os << "WebSandboxFlags::kPointerLock";
    case WebSandboxFlags::kDocumentDomain:
      return os << "WebSandboxFlags::kDocumentDomain";
    case WebSandboxFlags::kOrientationLock:
      return os << "WebSandboxFlags::kOrientationLock";
    case WebSandboxFlags::kPropagatesToAuxiliaryBrowsingContexts:
      return os << "WebSandboxFlags::kPropagatesToAuxiliaryBrowsingContexts";
    case WebSandboxFlags::kModals:
      return os << "WebSandboxFlags::kModals";
    case WebSandboxFlags::kPresentationController:
      return os << "WebSandboxFlags::kPresentationController";
    case WebSandboxFlags::kTopNavigationByUserActivation:
      return os << "WebSandboxFlags::kTopNavigationByUserActivation";
    case WebSandboxFlags::kDownloads:
      return os << "WebSandboxFlags::kDownloads";
    default:
      return os << "Unknown WebSandboxFlags value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FeaturePolicyFeature value) {
  switch(value) {
    case FeaturePolicyFeature::kNotFound:
      return os << "FeaturePolicyFeature::kNotFound";
    case FeaturePolicyFeature::kAutoplay:
      return os << "FeaturePolicyFeature::kAutoplay";
    case FeaturePolicyFeature::kCamera:
      return os << "FeaturePolicyFeature::kCamera";
    case FeaturePolicyFeature::kEncryptedMedia:
      return os << "FeaturePolicyFeature::kEncryptedMedia";
    case FeaturePolicyFeature::kFullscreen:
      return os << "FeaturePolicyFeature::kFullscreen";
    case FeaturePolicyFeature::kGeolocation:
      return os << "FeaturePolicyFeature::kGeolocation";
    case FeaturePolicyFeature::kMicrophone:
      return os << "FeaturePolicyFeature::kMicrophone";
    case FeaturePolicyFeature::kMidiFeature:
      return os << "FeaturePolicyFeature::kMidiFeature";
    case FeaturePolicyFeature::kPayment:
      return os << "FeaturePolicyFeature::kPayment";
    case FeaturePolicyFeature::kSpeaker:
      return os << "FeaturePolicyFeature::kSpeaker";
    case FeaturePolicyFeature::kDocumentCookie:
      return os << "FeaturePolicyFeature::kDocumentCookie";
    case FeaturePolicyFeature::kDocumentDomain:
      return os << "FeaturePolicyFeature::kDocumentDomain";
    case FeaturePolicyFeature::kSyncScript:
      return os << "FeaturePolicyFeature::kSyncScript";
    case FeaturePolicyFeature::kSyncXHR:
      return os << "FeaturePolicyFeature::kSyncXHR";
    case FeaturePolicyFeature::kUsb:
      return os << "FeaturePolicyFeature::kUsb";
    case FeaturePolicyFeature::kAccessibilityEvents:
      return os << "FeaturePolicyFeature::kAccessibilityEvents";
    case FeaturePolicyFeature::kWebVr:
      return os << "FeaturePolicyFeature::kWebVr";
    case FeaturePolicyFeature::kAccelerometer:
      return os << "FeaturePolicyFeature::kAccelerometer";
    case FeaturePolicyFeature::kAmbientLightSensor:
      return os << "FeaturePolicyFeature::kAmbientLightSensor";
    case FeaturePolicyFeature::kGyroscope:
      return os << "FeaturePolicyFeature::kGyroscope";
    case FeaturePolicyFeature::kMagnetometer:
      return os << "FeaturePolicyFeature::kMagnetometer";
    case FeaturePolicyFeature::kUnsizedMedia:
      return os << "FeaturePolicyFeature::kUnsizedMedia";
    case FeaturePolicyFeature::kOversizedImages:
      return os << "FeaturePolicyFeature::kOversizedImages";
    case FeaturePolicyFeature::kPictureInPicture:
      return os << "FeaturePolicyFeature::kPictureInPicture";
    case FeaturePolicyFeature::kVerticalScroll:
      return os << "FeaturePolicyFeature::kVerticalScroll";
    case FeaturePolicyFeature::kDocumentWrite:
      return os << "FeaturePolicyFeature::kDocumentWrite";
    case FeaturePolicyFeature::kLazyLoad:
      return os << "FeaturePolicyFeature::kLazyLoad";
    case FeaturePolicyFeature::kLayoutAnimations:
      return os << "FeaturePolicyFeature::kLayoutAnimations";
    case FeaturePolicyFeature::kWakeLock:
      return os << "FeaturePolicyFeature::kWakeLock";
    case FeaturePolicyFeature::kFontDisplay:
      return os << "FeaturePolicyFeature::kFontDisplay";
    case FeaturePolicyFeature::kTopNavigation:
      return os << "FeaturePolicyFeature::kTopNavigation";
    case FeaturePolicyFeature::kFormSubmission:
      return os << "FeaturePolicyFeature::kFormSubmission";
    case FeaturePolicyFeature::kScript:
      return os << "FeaturePolicyFeature::kScript";
    case FeaturePolicyFeature::kPopups:
      return os << "FeaturePolicyFeature::kPopups";
    case FeaturePolicyFeature::kPointerLock:
      return os << "FeaturePolicyFeature::kPointerLock";
    case FeaturePolicyFeature::kModals:
      return os << "FeaturePolicyFeature::kModals";
    case FeaturePolicyFeature::kOrientationLock:
      return os << "FeaturePolicyFeature::kOrientationLock";
    case FeaturePolicyFeature::kPresentation:
      return os << "FeaturePolicyFeature::kPresentation";
    case FeaturePolicyFeature::kFrobulate:
      return os << "FeaturePolicyFeature::kFrobulate";
    case FeaturePolicyFeature::kSerial:
      return os << "FeaturePolicyFeature::kSerial";
    case FeaturePolicyFeature::kHid:
      return os << "FeaturePolicyFeature::kHid";
    case FeaturePolicyFeature::kIdleDetection:
      return os << "FeaturePolicyFeature::kIdleDetection";
    case FeaturePolicyFeature::kUnoptimizedLossyImages:
      return os << "FeaturePolicyFeature::kUnoptimizedLossyImages";
    case FeaturePolicyFeature::kUnoptimizedLosslessImages:
      return os << "FeaturePolicyFeature::kUnoptimizedLosslessImages";
    case FeaturePolicyFeature::kUnoptimizedLosslessImagesStrict:
      return os << "FeaturePolicyFeature::kUnoptimizedLosslessImagesStrict";
    case FeaturePolicyFeature::kLoadingFrameDefaultEager:
      return os << "FeaturePolicyFeature::kLoadingFrameDefaultEager";
    case FeaturePolicyFeature::kDownloadsWithoutUserActivation:
      return os << "FeaturePolicyFeature::kDownloadsWithoutUserActivation";
    case FeaturePolicyFeature::kExecutionWhileOutOfViewport:
      return os << "FeaturePolicyFeature::kExecutionWhileOutOfViewport";
    case FeaturePolicyFeature::kExecutionWhileNotRendered:
      return os << "FeaturePolicyFeature::kExecutionWhileNotRendered";
    default:
      return os << "Unknown FeaturePolicyFeature value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FeaturePolicyDisposition value) {
  switch(value) {
    case FeaturePolicyDisposition::kEnforce:
      return os << "FeaturePolicyDisposition::kEnforce";
    case FeaturePolicyDisposition::kReport:
      return os << "FeaturePolicyDisposition::kReport";
    default:
      return os << "Unknown FeaturePolicyDisposition value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, PolicyValueType value) {
  switch(value) {
    case PolicyValueType::kNull:
      return os << "PolicyValueType::kNull";
    case PolicyValueType::kBool:
      return os << "PolicyValueType::kBool";
    case PolicyValueType::kDecDouble:
      return os << "PolicyValueType::kDecDouble";
    default:
      return os << "Unknown PolicyValueType value: " << static_cast<int32_t>(value);
  }
}

namespace internal {
// static
bool PolicyValueData_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context,
    bool inlined) {
  if (!data) {
    DCHECK(!inlined);
    return true;
  }

  // If it is inlined, the alignment is already enforced by its enclosing
  // object. We don't have to validate that.
  DCHECK(!inlined || mojo::internal::IsAligned(data));

  if (!inlined &&
      !mojo::internal::ValidateNonInlinedUnionHeaderAndClaimMemory(
          data, validation_context)) {
    return false;
  }

  const PolicyValueData_Data* object = static_cast<const PolicyValueData_Data*>(data);
  ALLOW_UNUSED_LOCAL(object);

  if (inlined && object->is_null())
    return true;

  switch (object->tag) {

    case PolicyValueData_Tag::NULL_VALUE: {

      return true;
    }
    case PolicyValueData_Tag::BOOL_VALUE: {

      return true;
    }
    case PolicyValueData_Tag::DEC_DOUBLE_VALUE: {

      return true;
    }
    default: {
      ReportValidationError(
          validation_context,
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in PolicyValueData");
      return false;
    }
  }
}


// static
bool PolicyValue_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PolicyValue_Data* object = static_cast<const PolicyValue_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->data, validation_context))
    return false;

  return true;
}

PolicyValue_Data::PolicyValue_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ParsedFeaturePolicyDeclaration_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ParsedFeaturePolicyDeclaration_Data* object = static_cast<const ParsedFeaturePolicyDeclaration_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[base::size(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = base::size(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            validation_context,
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[base::size(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        validation_context,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }


  if (!::blink::mojom::internal::FeaturePolicyFeature_Data
        ::Validate(object->feature, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->values, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams values_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->values, validation_context,
                                         &values_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fallback_value, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->fallback_value, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->opaque_value, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->opaque_value, validation_context))
    return false;

  return true;
}

ParsedFeaturePolicyDeclaration_Data::ParsedFeaturePolicyDeclaration_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#if defined(_MSC_VER)
#pragma warning(pop)
#endif