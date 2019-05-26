// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/base/mojo/cursor.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/base/mojo/cursor.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, CursorType value) {
  switch(value) {
    case CursorType::kNull:
      return os << "CursorType::kNull";
    case CursorType::kPointer:
      return os << "CursorType::kPointer";
    case CursorType::kCross:
      return os << "CursorType::kCross";
    case CursorType::kHand:
      return os << "CursorType::kHand";
    case CursorType::kIBeam:
      return os << "CursorType::kIBeam";
    case CursorType::kWait:
      return os << "CursorType::kWait";
    case CursorType::kHelp:
      return os << "CursorType::kHelp";
    case CursorType::kEastResize:
      return os << "CursorType::kEastResize";
    case CursorType::kNorthResize:
      return os << "CursorType::kNorthResize";
    case CursorType::kNorthEastResize:
      return os << "CursorType::kNorthEastResize";
    case CursorType::kNorthWestResize:
      return os << "CursorType::kNorthWestResize";
    case CursorType::kSouthResize:
      return os << "CursorType::kSouthResize";
    case CursorType::kSouthEastResize:
      return os << "CursorType::kSouthEastResize";
    case CursorType::kSouthWestResize:
      return os << "CursorType::kSouthWestResize";
    case CursorType::kWestResize:
      return os << "CursorType::kWestResize";
    case CursorType::kNorthSouthResize:
      return os << "CursorType::kNorthSouthResize";
    case CursorType::kEastWestResize:
      return os << "CursorType::kEastWestResize";
    case CursorType::kNorthEastSouthWestResize:
      return os << "CursorType::kNorthEastSouthWestResize";
    case CursorType::kNorthWestSouthEastResize:
      return os << "CursorType::kNorthWestSouthEastResize";
    case CursorType::kColumnResize:
      return os << "CursorType::kColumnResize";
    case CursorType::kRowResize:
      return os << "CursorType::kRowResize";
    case CursorType::kMiddlePanning:
      return os << "CursorType::kMiddlePanning";
    case CursorType::kEastPanning:
      return os << "CursorType::kEastPanning";
    case CursorType::kNorthPanning:
      return os << "CursorType::kNorthPanning";
    case CursorType::kNorthEastPanning:
      return os << "CursorType::kNorthEastPanning";
    case CursorType::kNorthWestPanning:
      return os << "CursorType::kNorthWestPanning";
    case CursorType::kSouthPanning:
      return os << "CursorType::kSouthPanning";
    case CursorType::kSouthEastPanning:
      return os << "CursorType::kSouthEastPanning";
    case CursorType::kSouthWestPanning:
      return os << "CursorType::kSouthWestPanning";
    case CursorType::kWestPanning:
      return os << "CursorType::kWestPanning";
    case CursorType::kMove:
      return os << "CursorType::kMove";
    case CursorType::kVerticalText:
      return os << "CursorType::kVerticalText";
    case CursorType::kCell:
      return os << "CursorType::kCell";
    case CursorType::kContextMenu:
      return os << "CursorType::kContextMenu";
    case CursorType::kAlias:
      return os << "CursorType::kAlias";
    case CursorType::kProgress:
      return os << "CursorType::kProgress";
    case CursorType::kNoDrop:
      return os << "CursorType::kNoDrop";
    case CursorType::kCopy:
      return os << "CursorType::kCopy";
    case CursorType::kNone:
      return os << "CursorType::kNone";
    case CursorType::kNotAllowed:
      return os << "CursorType::kNotAllowed";
    case CursorType::kZoomIn:
      return os << "CursorType::kZoomIn";
    case CursorType::kZoomOut:
      return os << "CursorType::kZoomOut";
    case CursorType::kGrab:
      return os << "CursorType::kGrab";
    case CursorType::kGrabbing:
      return os << "CursorType::kGrabbing";
    case CursorType::kCustom:
      return os << "CursorType::kCustom";
    default:
      return os << "Unknown CursorType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CursorSize value) {
  switch(value) {
    case CursorSize::kNormal:
      return os << "CursorSize::kNormal";
    case CursorSize::kLarge:
      return os << "CursorSize::kLarge";
    default:
      return os << "Unknown CursorSize value: " << static_cast<int32_t>(value);
  }
}

namespace internal {


// static
bool Cursor_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, validation_context))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Cursor_Data* object = static_cast<const Cursor_Data*>(data);

  static constexpr struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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


  if (!::ui::mojom::internal::CursorType_Data
        ::Validate(object->native_type, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->hotspot, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->hotspot, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->bitmap, validation_context))
    return false;

  return true;
}

Cursor_Data::Cursor_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif