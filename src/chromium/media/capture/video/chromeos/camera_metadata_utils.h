// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_VIDEO_CHROMEOS_CAMERA_METADATA_UTILS_H_
#define MEDIA_CAPTURE_VIDEO_CHROMEOS_CAMERA_METADATA_UTILS_H_

#include "media/capture/capture_export.h"
#include "media/capture/video/chromeos/mojo/camera_metadata.mojom.h"

namespace media {

// Helper traits for converting native types to cros::mojom::EntryType.
template <typename T, typename Enable = void>
struct entry_type_of {
  static const cros::mojom::EntryType value;
};

template <typename T>
struct entry_type_of<T, typename std::enable_if<std::is_enum<T>::value>::type> {
  static const cros::mojom::EntryType value = cros::mojom::EntryType::TYPE_BYTE;
};

CAPTURE_EXPORT cros::mojom::CameraMetadataEntryPtr* GetMetadataEntry(
    const cros::mojom::CameraMetadataPtr& camera_metadata,
    cros::mojom::CameraMetadataTag tag);

// Get the underlying data of |tag| as a span<T> so we don't need to write
// reinterpret_cast every time. Returns an empty span if not found.
template <typename T>
CAPTURE_EXPORT base::span<T> GetMetadataEntryAsSpan(
    const cros::mojom::CameraMetadataPtr& camera_metadata,
    cros::mojom::CameraMetadataTag tag) {
  auto* entry = GetMetadataEntry(camera_metadata, tag);
  if (entry == nullptr) {
    return {};
  }
  auto& data = (*entry)->data;
  CHECK_EQ(data.size() % sizeof(T), 0u);
  return {reinterpret_cast<T*>(data.data()), data.size() / sizeof(T)};
}

template <typename T>
CAPTURE_EXPORT std::vector<uint8_t> SerializeMetadataValueFromSpan(
    base::span<T> value) {
  std::vector<uint8_t> data;
  // Mojo uses int32_t as the underlying type of enum classes, but
  // the camera metadata expect uint8_t for them.
  if (std::is_enum<T>::value) {
    data.reserve(value.size());
    for (const auto& v : value) {
      data.push_back(base::checked_cast<uint8_t>(v));
    }
  } else {
    data.resize(value.size() * sizeof(T));
    memcpy(data.data(), value.data(), data.size());
  }
  return data;
}

CAPTURE_EXPORT void AddOrUpdateMetadataEntry(
    cros::mojom::CameraMetadataPtr* to,
    cros::mojom::CameraMetadataEntryPtr entry);

// Sort the camera metadata entries using the metadata tags.
CAPTURE_EXPORT void SortCameraMetadata(
    cros::mojom::CameraMetadataPtr* camera_metadata);

CAPTURE_EXPORT void MergeMetadata(cros::mojom::CameraMetadataPtr* to,
                                  const cros::mojom::CameraMetadataPtr& from);

}  // namespace media

#endif  // MEDIA_CAPTURE_VIDEO_CHROMEOS_CAMERA_METADATA_UTILS_H_
