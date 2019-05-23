// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_FORWARD_H_
#define UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_FORWARD_H_

#include "mojo/public/cpp/bindings/struct_ptr.h"


#include "mojo/public/cpp/bindings/lib/buffer.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace gfx {
namespace mojom {
class PointDataView;

class PointFDataView;

class Point3FDataView;

class SizeDataView;

class SizeFDataView;

class RectDataView;

class RectFDataView;

class InsetsDataView;

class InsetsFDataView;

class Vector2dDataView;

class Vector2dFDataView;

class Vector3dFDataView;

class ScrollOffsetDataView;

class Point;
using PointPtr = mojo::InlinedStructPtr<Point>;

class PointF;
using PointFPtr = mojo::InlinedStructPtr<PointF>;

class Point3F;
using Point3FPtr = mojo::InlinedStructPtr<Point3F>;

class Size;
using SizePtr = mojo::InlinedStructPtr<Size>;

class SizeF;
using SizeFPtr = mojo::InlinedStructPtr<SizeF>;

class Rect;
using RectPtr = mojo::InlinedStructPtr<Rect>;

class RectF;
using RectFPtr = mojo::InlinedStructPtr<RectF>;

class Insets;
using InsetsPtr = mojo::InlinedStructPtr<Insets>;

class InsetsF;
using InsetsFPtr = mojo::InlinedStructPtr<InsetsF>;

class Vector2d;
using Vector2dPtr = mojo::InlinedStructPtr<Vector2d>;

class Vector2dF;
using Vector2dFPtr = mojo::InlinedStructPtr<Vector2dF>;

class Vector3dF;
using Vector3dFPtr = mojo::InlinedStructPtr<Vector3dF>;

class ScrollOffset;
using ScrollOffsetPtr = mojo::InlinedStructPtr<ScrollOffset>;




}  // namespace mojom
}  // namespace gfx
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/point.h"
#include "ui/gfx/geometry/point3_f.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/rect_f.h"
#include "ui/gfx/geometry/safe_integer_conversions.h"
#include "ui/gfx/geometry/scroll_offset.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/vector2d.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/vector3d_f.h"

#endif  // UI_GFX_GEOMETRY_MOJO_GEOMETRY_MOJOM_FORWARD_H_