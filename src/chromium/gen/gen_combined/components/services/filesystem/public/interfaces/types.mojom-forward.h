// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_FORWARD_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace filesystem {
namespace mojom {
class TimespecOrNowDataView;

class FileInformationDataView;

class DirectoryEntryDataView;


enum class Whence : int32_t;

enum class FsFileType : int32_t;

constexpr uint32_t kFlagOpen = 0x1U;

constexpr uint32_t kFlagCreate = 0x2U;

constexpr uint32_t kFlagOpenAlways = 0x4U;

constexpr uint32_t kCreateAlways = 0x8U;

constexpr uint32_t kFlagOpenTruncated = 0x10U;

constexpr uint32_t kFlagRead = 0x20U;

constexpr uint32_t kFlagWrite = 0x40U;

constexpr uint32_t kFlagAppend = 0x80U;

constexpr uint32_t kDeleteOnClose = 0x2000U;

constexpr uint32_t kFlagWriteAttributes = 0x4000U;

constexpr uint32_t kDeleteFlagRecursive = 0x1U;
class TimespecOrNow;
using TimespecOrNowPtr = mojo::InlinedStructPtr<TimespecOrNow>;

class FileInformation;
using FileInformationPtr = mojo::StructPtr<FileInformation>;

class DirectoryEntry;
using DirectoryEntryPtr = mojo::StructPtr<DirectoryEntry>;




}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_TYPES_MOJOM_FORWARD_H_