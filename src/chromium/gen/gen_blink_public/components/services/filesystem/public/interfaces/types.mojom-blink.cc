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

#include "components/services/filesystem/public/interfaces/types.mojom-blink.h"

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

#include "components/services/filesystem/public/interfaces/types.mojom-params-data.h"
#include "components/services/filesystem/public/interfaces/types.mojom-shared-message-ids.h"

#include "components/services/filesystem/public/interfaces/types.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#endif
namespace filesystem {
namespace mojom {
namespace blink {
TimespecOrNow::TimespecOrNow()
    : now(),
      seconds() {}

TimespecOrNow::TimespecOrNow(
    bool now_in,
    double seconds_in)
    : now(std::move(now_in)),
      seconds(std::move(seconds_in)) {}

TimespecOrNow::~TimespecOrNow() = default;
size_t TimespecOrNow::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->now);
  seed = mojo::internal::WTFHash(seed, this->seconds);
  return seed;
}

bool TimespecOrNow::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FileInformation::FileInformation()
    : type(),
      size(),
      atime(),
      mtime(),
      ctime() {}

FileInformation::FileInformation(
    FsFileType type_in,
    int64_t size_in,
    double atime_in,
    double mtime_in,
    double ctime_in)
    : type(std::move(type_in)),
      size(std::move(size_in)),
      atime(std::move(atime_in)),
      mtime(std::move(mtime_in)),
      ctime(std::move(ctime_in)) {}

FileInformation::~FileInformation() = default;
size_t FileInformation::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->type);
  seed = mojo::internal::WTFHash(seed, this->size);
  seed = mojo::internal::WTFHash(seed, this->atime);
  seed = mojo::internal::WTFHash(seed, this->mtime);
  seed = mojo::internal::WTFHash(seed, this->ctime);
  return seed;
}

bool FileInformation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
DirectoryEntry::DirectoryEntry()
    : name(),
      type() {}

DirectoryEntry::DirectoryEntry(
    const base::FilePath& name_in,
    FsFileType type_in)
    : name(std::move(name_in)),
      type(std::move(type_in)) {}

DirectoryEntry::~DirectoryEntry() = default;

bool DirectoryEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

namespace mojo {


// static
bool StructTraits<::filesystem::mojom::blink::TimespecOrNow::DataView, ::filesystem::mojom::blink::TimespecOrNowPtr>::Read(
    ::filesystem::mojom::blink::TimespecOrNow::DataView input,
    ::filesystem::mojom::blink::TimespecOrNowPtr* output) {
  bool success = true;
  ::filesystem::mojom::blink::TimespecOrNowPtr result(::filesystem::mojom::blink::TimespecOrNow::New());
  
      result->now = input.now();
      result->seconds = input.seconds();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::filesystem::mojom::blink::FileInformation::DataView, ::filesystem::mojom::blink::FileInformationPtr>::Read(
    ::filesystem::mojom::blink::FileInformation::DataView input,
    ::filesystem::mojom::blink::FileInformationPtr* output) {
  bool success = true;
  ::filesystem::mojom::blink::FileInformationPtr result(::filesystem::mojom::blink::FileInformation::New());
  
      if (!input.ReadType(&result->type))
        success = false;
      result->size = input.size();
      result->atime = input.atime();
      result->mtime = input.mtime();
      result->ctime = input.ctime();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::filesystem::mojom::blink::DirectoryEntry::DataView, ::filesystem::mojom::blink::DirectoryEntryPtr>::Read(
    ::filesystem::mojom::blink::DirectoryEntry::DataView input,
    ::filesystem::mojom::blink::DirectoryEntryPtr* output) {
  bool success = true;
  ::filesystem::mojom::blink::DirectoryEntryPtr result(::filesystem::mojom::blink::DirectoryEntry::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif