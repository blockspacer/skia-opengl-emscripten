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

#include "ui/display/mojo/display_snapshot.mojom-blink.h"

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

#include "ui/display/mojo/display_snapshot.mojom-params-data.h"
#include "ui/display/mojo/display_snapshot.mojom-shared-message-ids.h"

#include "ui/display/mojo/display_snapshot.mojom-blink-import-headers.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_JUMBO_H_
#define UI_DISPLAY_MOJO_DISPLAY_SNAPSHOT_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/geometry_struct_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#endif
namespace display {
namespace mojom {
namespace blink {
DisplaySnapshot::DisplaySnapshot()
    : display_id(),
      origin(),
      physical_size(),
      type(),
      is_aspect_preserving_scaling(),
      has_overscan(),
      has_color_correction_matrix(),
      color_correction_in_linear_space(),
      color_space(),
      display_name(),
      sys_path(),
      modes(),
      edid(),
      current_mode_index(),
      has_current_mode(),
      native_mode_index(),
      has_native_mode(),
      product_code(),
      year_of_manufacture(),
      maximum_cursor_size() {}

DisplaySnapshot::DisplaySnapshot(
    int64_t display_id_in,
    const ::blink::WebPoint& origin_in,
    const ::blink::WebSize& physical_size_in,
    ::display::mojom::blink::DisplayConnectionType type_in,
    bool is_aspect_preserving_scaling_in,
    bool has_overscan_in,
    bool has_color_correction_matrix_in,
    bool color_correction_in_linear_space_in,
    ::gfx::mojom::blink::ColorSpacePtr color_space_in,
    const WTF::String& display_name_in,
    const base::FilePath& sys_path_in,
    WTF::Vector<::display::mojom::blink::DisplayModePtr> modes_in,
    const WTF::Vector<uint8_t>& edid_in,
    uint64_t current_mode_index_in,
    bool has_current_mode_in,
    uint64_t native_mode_index_in,
    bool has_native_mode_in,
    int64_t product_code_in,
    int32_t year_of_manufacture_in,
    const ::blink::WebSize& maximum_cursor_size_in)
    : display_id(std::move(display_id_in)),
      origin(std::move(origin_in)),
      physical_size(std::move(physical_size_in)),
      type(std::move(type_in)),
      is_aspect_preserving_scaling(std::move(is_aspect_preserving_scaling_in)),
      has_overscan(std::move(has_overscan_in)),
      has_color_correction_matrix(std::move(has_color_correction_matrix_in)),
      color_correction_in_linear_space(std::move(color_correction_in_linear_space_in)),
      color_space(std::move(color_space_in)),
      display_name(std::move(display_name_in)),
      sys_path(std::move(sys_path_in)),
      modes(std::move(modes_in)),
      edid(std::move(edid_in)),
      current_mode_index(std::move(current_mode_index_in)),
      has_current_mode(std::move(has_current_mode_in)),
      native_mode_index(std::move(native_mode_index_in)),
      has_native_mode(std::move(has_native_mode_in)),
      product_code(std::move(product_code_in)),
      year_of_manufacture(std::move(year_of_manufacture_in)),
      maximum_cursor_size(std::move(maximum_cursor_size_in)) {}

DisplaySnapshot::~DisplaySnapshot() = default;

bool DisplaySnapshot::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


// static
bool StructTraits<::display::mojom::blink::DisplaySnapshot::DataView, ::display::mojom::blink::DisplaySnapshotPtr>::Read(
    ::display::mojom::blink::DisplaySnapshot::DataView input,
    ::display::mojom::blink::DisplaySnapshotPtr* output) {
  bool success = true;
  ::display::mojom::blink::DisplaySnapshotPtr result(::display::mojom::blink::DisplaySnapshot::New());
  
      result->display_id = input.display_id();
      if (!input.ReadOrigin(&result->origin))
        success = false;
      if (!input.ReadPhysicalSize(&result->physical_size))
        success = false;
      if (!input.ReadType(&result->type))
        success = false;
      result->is_aspect_preserving_scaling = input.is_aspect_preserving_scaling();
      result->has_overscan = input.has_overscan();
      result->has_color_correction_matrix = input.has_color_correction_matrix();
      result->color_correction_in_linear_space = input.color_correction_in_linear_space();
      if (!input.ReadColorSpace(&result->color_space))
        success = false;
      if (!input.ReadDisplayName(&result->display_name))
        success = false;
      if (!input.ReadSysPath(&result->sys_path))
        success = false;
      if (!input.ReadModes(&result->modes))
        success = false;
      if (!input.ReadEdid(&result->edid))
        success = false;
      result->current_mode_index = input.current_mode_index();
      result->has_current_mode = input.has_current_mode();
      result->native_mode_index = input.native_mode_index();
      result->has_native_mode = input.has_native_mode();
      result->product_code = input.product_code();
      result->year_of_manufacture = input.year_of_manufacture();
      if (!input.ReadMaximumCursorSize(&result->maximum_cursor_size))
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