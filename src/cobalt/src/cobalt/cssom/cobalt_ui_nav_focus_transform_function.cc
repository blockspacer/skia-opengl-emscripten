// Copyright 2019 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/cssom/cobalt_ui_nav_focus_transform_function.h"

#include "cobalt/cssom/transform_function_visitor.h"
#include "cobalt/math/matrix_interpolation.h"

namespace cobalt {
namespace cssom {

CobaltUiNavFocusTransformFunction::CobaltUiNavFocusTransformFunction(
    float progress_to_identity)
    : progress_to_identity_(progress_to_identity) {
  traits_ = kTraitIsDynamic | kTraitUsesUiNavFocus;
}

void CobaltUiNavFocusTransformFunction::Accept(
    TransformFunctionVisitor* visitor) const {
  visitor->VisitCobaltUiNavFocusTransform(this);
}

std::string CobaltUiNavFocusTransformFunction::ToString() const {
  return "-cobalt-ui-nav-focus-transform()";
}

math::Matrix3F CobaltUiNavFocusTransformFunction::ToMatrix(
    const math::SizeF& /* used_size */,
    const scoped_refptr<ui_navigation::NavItem>& used_ui_nav_focus) const {
  ui_navigation::NativeMatrix4 matrix;
  if (used_ui_nav_focus &&
      used_ui_nav_focus->GetFocusTransform(&matrix)) {
    return math::InterpolateMatrices(
        math::Matrix3F::FromValues(
            matrix.m[ 0], matrix.m[ 1], matrix.m[ 3],
            matrix.m[ 4], matrix.m[ 5], matrix.m[ 7],
            matrix.m[12], matrix.m[13], matrix.m[15]),
        math::Matrix3F::Identity(),
        progress_to_identity_);
  }
  return math::Matrix3F::Identity();
}

}  // namespace cssom
}  // namespace cobalt
