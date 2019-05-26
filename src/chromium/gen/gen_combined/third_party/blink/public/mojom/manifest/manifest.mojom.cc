// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/blink/public/mojom/manifest/manifest.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/location.h"
#include "base/logging.h"
#include "base/run_loop.h"
#include "base/task/common/task_annotator.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include "third_party/blink/public/mojom/manifest/manifest.mojom-params-data.h"
#include "third_party/blink/public/mojom/manifest/manifest.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/manifest/manifest.mojom-import-headers.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "third_party/blink/public/common/manifest/manifest_mojom_traits.h"
#include "third_party/blink/public/common/manifest/web_display_mode_mojom_traits.h"
#include "third_party/blink/public/common/screen_orientation/web_screen_orientation_mojom_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif
namespace blink {
namespace mojom {
Manifest::Manifest()
    : name(),
      short_name(),
      start_url(),
      display(),
      orientation(),
      icons(),
      share_target(),
      file_handler(),
      related_applications(),
      prefer_related_applications(),
      has_theme_color(),
      theme_color(),
      has_background_color(),
      background_color(),
      splash_screen_url(),
      gcm_sender_id(),
      scope() {}

Manifest::Manifest(
    const base::Optional<base::string16>& name_in,
    const base::Optional<base::string16>& short_name_in,
    const base::Optional<GURL>& start_url_in,
    ::blink::WebDisplayMode display_in,
    ::blink::WebScreenOrientationLockType orientation_in,
    const base::Optional<std::vector<::blink::Manifest::ImageResource>>& icons_in,
    const base::Optional<::blink::Manifest::ShareTarget>& share_target_in,
    ManifestFileHandlerPtr file_handler_in,
    const base::Optional<std::vector<::blink::Manifest::RelatedApplication>>& related_applications_in,
    bool prefer_related_applications_in,
    bool has_theme_color_in,
    uint32_t theme_color_in,
    bool has_background_color_in,
    uint32_t background_color_in,
    const base::Optional<GURL>& splash_screen_url_in,
    const base::Optional<base::string16>& gcm_sender_id_in,
    const base::Optional<GURL>& scope_in)
    : name(std::move(name_in)),
      short_name(std::move(short_name_in)),
      start_url(std::move(start_url_in)),
      display(std::move(display_in)),
      orientation(std::move(orientation_in)),
      icons(std::move(icons_in)),
      share_target(std::move(share_target_in)),
      file_handler(std::move(file_handler_in)),
      related_applications(std::move(related_applications_in)),
      prefer_related_applications(std::move(prefer_related_applications_in)),
      has_theme_color(std::move(has_theme_color_in)),
      theme_color(std::move(theme_color_in)),
      has_background_color(std::move(has_background_color_in)),
      background_color(std::move(background_color_in)),
      splash_screen_url(std::move(splash_screen_url_in)),
      gcm_sender_id(std::move(gcm_sender_id_in)),
      scope(std::move(scope_in)) {}

Manifest::~Manifest() = default;

bool Manifest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestImageResource::ManifestImageResource()
    : src(),
      type(),
      sizes(),
      purpose() {}

ManifestImageResource::ManifestImageResource(
    const GURL& src_in,
    const base::Optional<base::string16>& type_in,
    const std::vector<gfx::Size>& sizes_in,
    const std::vector<ManifestImageResource::Purpose>& purpose_in)
    : src(std::move(src_in)),
      type(std::move(type_in)),
      sizes(std::move(sizes_in)),
      purpose(std::move(purpose_in)) {}

ManifestImageResource::~ManifestImageResource() = default;

bool ManifestImageResource::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestFileFilter::ManifestFileFilter()
    : name(),
      accept() {}

ManifestFileFilter::ManifestFileFilter(
    const base::Optional<base::string16>& name_in,
    const std::vector<base::string16>& accept_in)
    : name(std::move(name_in)),
      accept(std::move(accept_in)) {}

ManifestFileFilter::~ManifestFileFilter() = default;

bool ManifestFileFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestRelatedApplication::ManifestRelatedApplication()
    : platform(),
      url(),
      id() {}

ManifestRelatedApplication::ManifestRelatedApplication(
    const base::Optional<base::string16>& platform_in,
    const base::Optional<GURL>& url_in,
    const base::Optional<base::string16>& id_in)
    : platform(std::move(platform_in)),
      url(std::move(url_in)),
      id(std::move(id_in)) {}

ManifestRelatedApplication::~ManifestRelatedApplication() = default;

bool ManifestRelatedApplication::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestShareTargetParams::ManifestShareTargetParams()
    : title(),
      text(),
      url(),
      files() {}

ManifestShareTargetParams::ManifestShareTargetParams(
    const base::Optional<base::string16>& title_in,
    const base::Optional<base::string16>& text_in,
    const base::Optional<base::string16>& url_in,
    base::Optional<std::vector<ManifestFileFilterPtr>> files_in)
    : title(std::move(title_in)),
      text(std::move(text_in)),
      url(std::move(url_in)),
      files(std::move(files_in)) {}

ManifestShareTargetParams::~ManifestShareTargetParams() = default;

bool ManifestShareTargetParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestShareTarget::ManifestShareTarget()
    : action(),
      method(),
      enctype(),
      params() {}

ManifestShareTarget::ManifestShareTarget(
    const GURL& action_in,
    ManifestShareTarget::Method method_in,
    ManifestShareTarget::Enctype enctype_in,
    ManifestShareTargetParamsPtr params_in)
    : action(std::move(action_in)),
      method(std::move(method_in)),
      enctype(std::move(enctype_in)),
      params(std::move(params_in)) {}

ManifestShareTarget::~ManifestShareTarget() = default;

bool ManifestShareTarget::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestFileHandler::ManifestFileHandler()
    : action(),
      files() {}

ManifestFileHandler::ManifestFileHandler(
    const GURL& action_in,
    std::vector<ManifestFileFilterPtr> files_in)
    : action(std::move(action_in)),
      files(std::move(files_in)) {}

ManifestFileHandler::~ManifestFileHandler() = default;

bool ManifestFileHandler::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestDebugInfo::ManifestDebugInfo()
    : errors(),
      raw_manifest() {}

ManifestDebugInfo::ManifestDebugInfo(
    std::vector<ManifestErrorPtr> errors_in,
    const std::string& raw_manifest_in)
    : errors(std::move(errors_in)),
      raw_manifest(std::move(raw_manifest_in)) {}

ManifestDebugInfo::~ManifestDebugInfo() = default;

bool ManifestDebugInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ManifestError::ManifestError()
    : message(),
      critical(),
      line(),
      column() {}

ManifestError::ManifestError(
    const std::string& message_in,
    bool critical_in,
    uint32_t line_in,
    uint32_t column_in)
    : message(std::move(message_in)),
      critical(std::move(critical_in)),
      line(std::move(line_in)),
      column(std::move(column_in)) {}

ManifestError::~ManifestError() = default;
size_t ManifestError::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->message);
  seed = mojo::internal::Hash(seed, this->critical);
  seed = mojo::internal::Hash(seed, this->line);
  seed = mojo::internal::Hash(seed, this->column);
  return seed;
}

bool ManifestError::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::Manifest::DataView, ::blink::mojom::ManifestPtr>::Read(
    ::blink::mojom::Manifest::DataView input,
    ::blink::mojom::ManifestPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestPtr result(::blink::mojom::Manifest::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadShortName(&result->short_name))
        success = false;
      if (!input.ReadStartUrl(&result->start_url))
        success = false;
      if (!input.ReadDisplay(&result->display))
        success = false;
      if (!input.ReadOrientation(&result->orientation))
        success = false;
      if (!input.ReadIcons(&result->icons))
        success = false;
      if (!input.ReadShareTarget(&result->share_target))
        success = false;
      if (!input.ReadFileHandler(&result->file_handler))
        success = false;
      if (!input.ReadRelatedApplications(&result->related_applications))
        success = false;
      result->prefer_related_applications = input.prefer_related_applications();
      result->has_theme_color = input.has_theme_color();
      result->theme_color = input.theme_color();
      result->has_background_color = input.has_background_color();
      result->background_color = input.background_color();
      if (!input.ReadSplashScreenUrl(&result->splash_screen_url))
        success = false;
      if (!input.ReadGcmSenderId(&result->gcm_sender_id))
        success = false;
      if (!input.ReadScope(&result->scope))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestImageResource::DataView, ::blink::mojom::ManifestImageResourcePtr>::Read(
    ::blink::mojom::ManifestImageResource::DataView input,
    ::blink::mojom::ManifestImageResourcePtr* output) {
  bool success = true;
  ::blink::mojom::ManifestImageResourcePtr result(::blink::mojom::ManifestImageResource::New());
  
      if (!input.ReadSrc(&result->src))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      if (!input.ReadSizes(&result->sizes))
        success = false;
      if (!input.ReadPurpose(&result->purpose))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestFileFilter::DataView, ::blink::mojom::ManifestFileFilterPtr>::Read(
    ::blink::mojom::ManifestFileFilter::DataView input,
    ::blink::mojom::ManifestFileFilterPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestFileFilterPtr result(::blink::mojom::ManifestFileFilter::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadAccept(&result->accept))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestRelatedApplication::DataView, ::blink::mojom::ManifestRelatedApplicationPtr>::Read(
    ::blink::mojom::ManifestRelatedApplication::DataView input,
    ::blink::mojom::ManifestRelatedApplicationPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestRelatedApplicationPtr result(::blink::mojom::ManifestRelatedApplication::New());
  
      if (!input.ReadPlatform(&result->platform))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestShareTargetParams::DataView, ::blink::mojom::ManifestShareTargetParamsPtr>::Read(
    ::blink::mojom::ManifestShareTargetParams::DataView input,
    ::blink::mojom::ManifestShareTargetParamsPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestShareTargetParamsPtr result(::blink::mojom::ManifestShareTargetParams::New());
  
      if (!input.ReadTitle(&result->title))
        success = false;
      if (!input.ReadText(&result->text))
        success = false;
      if (!input.ReadUrl(&result->url))
        success = false;
      if (!input.ReadFiles(&result->files))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestShareTarget::DataView, ::blink::mojom::ManifestShareTargetPtr>::Read(
    ::blink::mojom::ManifestShareTarget::DataView input,
    ::blink::mojom::ManifestShareTargetPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestShareTargetPtr result(::blink::mojom::ManifestShareTarget::New());
  
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadMethod(&result->method))
        success = false;
      if (!input.ReadEnctype(&result->enctype))
        success = false;
      if (!input.ReadParams(&result->params))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestFileHandler::DataView, ::blink::mojom::ManifestFileHandlerPtr>::Read(
    ::blink::mojom::ManifestFileHandler::DataView input,
    ::blink::mojom::ManifestFileHandlerPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestFileHandlerPtr result(::blink::mojom::ManifestFileHandler::New());
  
      if (!input.ReadAction(&result->action))
        success = false;
      if (!input.ReadFiles(&result->files))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestDebugInfo::DataView, ::blink::mojom::ManifestDebugInfoPtr>::Read(
    ::blink::mojom::ManifestDebugInfo::DataView input,
    ::blink::mojom::ManifestDebugInfoPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestDebugInfoPtr result(::blink::mojom::ManifestDebugInfo::New());
  
      if (!input.ReadErrors(&result->errors))
        success = false;
      if (!input.ReadRawManifest(&result->raw_manifest))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::ManifestError::DataView, ::blink::mojom::ManifestErrorPtr>::Read(
    ::blink::mojom::ManifestError::DataView input,
    ::blink::mojom::ManifestErrorPtr* output) {
  bool success = true;
  ::blink::mojom::ManifestErrorPtr result(::blink::mojom::ManifestError::New());
  
      if (!input.ReadMessage(&result->message))
        success = false;
      result->critical = input.critical();
      result->line = input.line();
      result->column = input.column();
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif