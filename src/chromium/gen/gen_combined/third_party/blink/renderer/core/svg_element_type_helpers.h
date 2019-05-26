// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_type_helpers.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/svg/svg_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_SVG_ELEMENT_TYPE_HELPERS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_SVG_ELEMENT_TYPE_HELPERS_H_

#include "third_party/blink/renderer/core/svg/svg_element.h"
#include "third_party/blink/renderer/core/svg_names.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {
// Type checking.
class SVGAElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGAElement(const SVGAElement&);
void IsSVGAElement(const SVGAElement*);

inline bool IsSVGAElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kATag);
}
inline bool IsSVGAElement(const SVGElement* element) {
  return element && IsSVGAElement(*element);
}
inline bool IsSVGAElement(const Node& node) {
  return node.IsSVGElement() && IsSVGAElement(ToSVGElement(node));
}
inline bool IsSVGAElement(const Node* node) {
  return node && IsSVGAElement(*node);
}
template <>
inline bool IsElementOfType<const SVGAElement>(const Node& node) {
  return IsSVGAElement(node);
}
template <>
inline bool IsElementOfType<const SVGAElement>(const SVGElement& element) {
  return IsSVGAElement(element);
}

class SVGAnimateMotionElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGAnimateMotionElement(const SVGAnimateMotionElement&);
void IsSVGAnimateMotionElement(const SVGAnimateMotionElement*);

inline bool IsSVGAnimateMotionElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kAnimateMotionTag);
}
inline bool IsSVGAnimateMotionElement(const SVGElement* element) {
  return element && IsSVGAnimateMotionElement(*element);
}
inline bool IsSVGAnimateMotionElement(const Node& node) {
  return node.IsSVGElement() && IsSVGAnimateMotionElement(ToSVGElement(node));
}
inline bool IsSVGAnimateMotionElement(const Node* node) {
  return node && IsSVGAnimateMotionElement(*node);
}
template <>
inline bool IsElementOfType<const SVGAnimateMotionElement>(const Node& node) {
  return IsSVGAnimateMotionElement(node);
}
template <>
inline bool IsElementOfType<const SVGAnimateMotionElement>(const SVGElement& element) {
  return IsSVGAnimateMotionElement(element);
}

class SVGAnimateTransformElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGAnimateTransformElement(const SVGAnimateTransformElement&);
void IsSVGAnimateTransformElement(const SVGAnimateTransformElement*);

inline bool IsSVGAnimateTransformElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kAnimateTransformTag);
}
inline bool IsSVGAnimateTransformElement(const SVGElement* element) {
  return element && IsSVGAnimateTransformElement(*element);
}
inline bool IsSVGAnimateTransformElement(const Node& node) {
  return node.IsSVGElement() && IsSVGAnimateTransformElement(ToSVGElement(node));
}
inline bool IsSVGAnimateTransformElement(const Node* node) {
  return node && IsSVGAnimateTransformElement(*node);
}
template <>
inline bool IsElementOfType<const SVGAnimateTransformElement>(const Node& node) {
  return IsSVGAnimateTransformElement(node);
}
template <>
inline bool IsElementOfType<const SVGAnimateTransformElement>(const SVGElement& element) {
  return IsSVGAnimateTransformElement(element);
}

class SVGCircleElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGCircleElement(const SVGCircleElement&);
void IsSVGCircleElement(const SVGCircleElement*);

inline bool IsSVGCircleElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kCircleTag);
}
inline bool IsSVGCircleElement(const SVGElement* element) {
  return element && IsSVGCircleElement(*element);
}
inline bool IsSVGCircleElement(const Node& node) {
  return node.IsSVGElement() && IsSVGCircleElement(ToSVGElement(node));
}
inline bool IsSVGCircleElement(const Node* node) {
  return node && IsSVGCircleElement(*node);
}
template <>
inline bool IsElementOfType<const SVGCircleElement>(const Node& node) {
  return IsSVGCircleElement(node);
}
template <>
inline bool IsElementOfType<const SVGCircleElement>(const SVGElement& element) {
  return IsSVGCircleElement(element);
}

class SVGClipPathElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGClipPathElement(const SVGClipPathElement&);
void IsSVGClipPathElement(const SVGClipPathElement*);

inline bool IsSVGClipPathElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kClipPathTag);
}
inline bool IsSVGClipPathElement(const SVGElement* element) {
  return element && IsSVGClipPathElement(*element);
}
inline bool IsSVGClipPathElement(const Node& node) {
  return node.IsSVGElement() && IsSVGClipPathElement(ToSVGElement(node));
}
inline bool IsSVGClipPathElement(const Node* node) {
  return node && IsSVGClipPathElement(*node);
}
template <>
inline bool IsElementOfType<const SVGClipPathElement>(const Node& node) {
  return IsSVGClipPathElement(node);
}
template <>
inline bool IsElementOfType<const SVGClipPathElement>(const SVGElement& element) {
  return IsSVGClipPathElement(element);
}

class SVGDefsElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGDefsElement(const SVGDefsElement&);
void IsSVGDefsElement(const SVGDefsElement*);

inline bool IsSVGDefsElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kDefsTag);
}
inline bool IsSVGDefsElement(const SVGElement* element) {
  return element && IsSVGDefsElement(*element);
}
inline bool IsSVGDefsElement(const Node& node) {
  return node.IsSVGElement() && IsSVGDefsElement(ToSVGElement(node));
}
inline bool IsSVGDefsElement(const Node* node) {
  return node && IsSVGDefsElement(*node);
}
template <>
inline bool IsElementOfType<const SVGDefsElement>(const Node& node) {
  return IsSVGDefsElement(node);
}
template <>
inline bool IsElementOfType<const SVGDefsElement>(const SVGElement& element) {
  return IsSVGDefsElement(element);
}

class SVGDescElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGDescElement(const SVGDescElement&);
void IsSVGDescElement(const SVGDescElement*);

inline bool IsSVGDescElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kDescTag);
}
inline bool IsSVGDescElement(const SVGElement* element) {
  return element && IsSVGDescElement(*element);
}
inline bool IsSVGDescElement(const Node& node) {
  return node.IsSVGElement() && IsSVGDescElement(ToSVGElement(node));
}
inline bool IsSVGDescElement(const Node* node) {
  return node && IsSVGDescElement(*node);
}
template <>
inline bool IsElementOfType<const SVGDescElement>(const Node& node) {
  return IsSVGDescElement(node);
}
template <>
inline bool IsElementOfType<const SVGDescElement>(const SVGElement& element) {
  return IsSVGDescElement(element);
}

class SVGDiscardElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGDiscardElement(const SVGDiscardElement&);
void IsSVGDiscardElement(const SVGDiscardElement*);

inline bool IsSVGDiscardElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kDiscardTag);
}
inline bool IsSVGDiscardElement(const SVGElement* element) {
  return element && IsSVGDiscardElement(*element);
}
inline bool IsSVGDiscardElement(const Node& node) {
  return node.IsSVGElement() && IsSVGDiscardElement(ToSVGElement(node));
}
inline bool IsSVGDiscardElement(const Node* node) {
  return node && IsSVGDiscardElement(*node);
}
template <>
inline bool IsElementOfType<const SVGDiscardElement>(const Node& node) {
  return IsSVGDiscardElement(node);
}
template <>
inline bool IsElementOfType<const SVGDiscardElement>(const SVGElement& element) {
  return IsSVGDiscardElement(element);
}

class SVGEllipseElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGEllipseElement(const SVGEllipseElement&);
void IsSVGEllipseElement(const SVGEllipseElement*);

inline bool IsSVGEllipseElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kEllipseTag);
}
inline bool IsSVGEllipseElement(const SVGElement* element) {
  return element && IsSVGEllipseElement(*element);
}
inline bool IsSVGEllipseElement(const Node& node) {
  return node.IsSVGElement() && IsSVGEllipseElement(ToSVGElement(node));
}
inline bool IsSVGEllipseElement(const Node* node) {
  return node && IsSVGEllipseElement(*node);
}
template <>
inline bool IsElementOfType<const SVGEllipseElement>(const Node& node) {
  return IsSVGEllipseElement(node);
}
template <>
inline bool IsElementOfType<const SVGEllipseElement>(const SVGElement& element) {
  return IsSVGEllipseElement(element);
}

class SVGFEBlendElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEBlendElement(const SVGFEBlendElement&);
void IsSVGFEBlendElement(const SVGFEBlendElement*);

inline bool IsSVGFEBlendElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEBlendTag);
}
inline bool IsSVGFEBlendElement(const SVGElement* element) {
  return element && IsSVGFEBlendElement(*element);
}
inline bool IsSVGFEBlendElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEBlendElement(ToSVGElement(node));
}
inline bool IsSVGFEBlendElement(const Node* node) {
  return node && IsSVGFEBlendElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEBlendElement>(const Node& node) {
  return IsSVGFEBlendElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEBlendElement>(const SVGElement& element) {
  return IsSVGFEBlendElement(element);
}

class SVGFEColorMatrixElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEColorMatrixElement(const SVGFEColorMatrixElement&);
void IsSVGFEColorMatrixElement(const SVGFEColorMatrixElement*);

inline bool IsSVGFEColorMatrixElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEColorMatrixTag);
}
inline bool IsSVGFEColorMatrixElement(const SVGElement* element) {
  return element && IsSVGFEColorMatrixElement(*element);
}
inline bool IsSVGFEColorMatrixElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEColorMatrixElement(ToSVGElement(node));
}
inline bool IsSVGFEColorMatrixElement(const Node* node) {
  return node && IsSVGFEColorMatrixElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEColorMatrixElement>(const Node& node) {
  return IsSVGFEColorMatrixElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEColorMatrixElement>(const SVGElement& element) {
  return IsSVGFEColorMatrixElement(element);
}

class SVGFEComponentTransferElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEComponentTransferElement(const SVGFEComponentTransferElement&);
void IsSVGFEComponentTransferElement(const SVGFEComponentTransferElement*);

inline bool IsSVGFEComponentTransferElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEComponentTransferTag);
}
inline bool IsSVGFEComponentTransferElement(const SVGElement* element) {
  return element && IsSVGFEComponentTransferElement(*element);
}
inline bool IsSVGFEComponentTransferElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEComponentTransferElement(ToSVGElement(node));
}
inline bool IsSVGFEComponentTransferElement(const Node* node) {
  return node && IsSVGFEComponentTransferElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEComponentTransferElement>(const Node& node) {
  return IsSVGFEComponentTransferElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEComponentTransferElement>(const SVGElement& element) {
  return IsSVGFEComponentTransferElement(element);
}

class SVGFECompositeElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFECompositeElement(const SVGFECompositeElement&);
void IsSVGFECompositeElement(const SVGFECompositeElement*);

inline bool IsSVGFECompositeElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFECompositeTag);
}
inline bool IsSVGFECompositeElement(const SVGElement* element) {
  return element && IsSVGFECompositeElement(*element);
}
inline bool IsSVGFECompositeElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFECompositeElement(ToSVGElement(node));
}
inline bool IsSVGFECompositeElement(const Node* node) {
  return node && IsSVGFECompositeElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFECompositeElement>(const Node& node) {
  return IsSVGFECompositeElement(node);
}
template <>
inline bool IsElementOfType<const SVGFECompositeElement>(const SVGElement& element) {
  return IsSVGFECompositeElement(element);
}

class SVGFEConvolveMatrixElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEConvolveMatrixElement(const SVGFEConvolveMatrixElement&);
void IsSVGFEConvolveMatrixElement(const SVGFEConvolveMatrixElement*);

inline bool IsSVGFEConvolveMatrixElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEConvolveMatrixTag);
}
inline bool IsSVGFEConvolveMatrixElement(const SVGElement* element) {
  return element && IsSVGFEConvolveMatrixElement(*element);
}
inline bool IsSVGFEConvolveMatrixElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEConvolveMatrixElement(ToSVGElement(node));
}
inline bool IsSVGFEConvolveMatrixElement(const Node* node) {
  return node && IsSVGFEConvolveMatrixElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEConvolveMatrixElement>(const Node& node) {
  return IsSVGFEConvolveMatrixElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEConvolveMatrixElement>(const SVGElement& element) {
  return IsSVGFEConvolveMatrixElement(element);
}

class SVGFEDiffuseLightingElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEDiffuseLightingElement(const SVGFEDiffuseLightingElement&);
void IsSVGFEDiffuseLightingElement(const SVGFEDiffuseLightingElement*);

inline bool IsSVGFEDiffuseLightingElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEDiffuseLightingTag);
}
inline bool IsSVGFEDiffuseLightingElement(const SVGElement* element) {
  return element && IsSVGFEDiffuseLightingElement(*element);
}
inline bool IsSVGFEDiffuseLightingElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEDiffuseLightingElement(ToSVGElement(node));
}
inline bool IsSVGFEDiffuseLightingElement(const Node* node) {
  return node && IsSVGFEDiffuseLightingElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEDiffuseLightingElement>(const Node& node) {
  return IsSVGFEDiffuseLightingElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEDiffuseLightingElement>(const SVGElement& element) {
  return IsSVGFEDiffuseLightingElement(element);
}

class SVGFEDisplacementMapElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEDisplacementMapElement(const SVGFEDisplacementMapElement&);
void IsSVGFEDisplacementMapElement(const SVGFEDisplacementMapElement*);

inline bool IsSVGFEDisplacementMapElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEDisplacementMapTag);
}
inline bool IsSVGFEDisplacementMapElement(const SVGElement* element) {
  return element && IsSVGFEDisplacementMapElement(*element);
}
inline bool IsSVGFEDisplacementMapElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEDisplacementMapElement(ToSVGElement(node));
}
inline bool IsSVGFEDisplacementMapElement(const Node* node) {
  return node && IsSVGFEDisplacementMapElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEDisplacementMapElement>(const Node& node) {
  return IsSVGFEDisplacementMapElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEDisplacementMapElement>(const SVGElement& element) {
  return IsSVGFEDisplacementMapElement(element);
}

class SVGFEDistantLightElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEDistantLightElement(const SVGFEDistantLightElement&);
void IsSVGFEDistantLightElement(const SVGFEDistantLightElement*);

inline bool IsSVGFEDistantLightElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEDistantLightTag);
}
inline bool IsSVGFEDistantLightElement(const SVGElement* element) {
  return element && IsSVGFEDistantLightElement(*element);
}
inline bool IsSVGFEDistantLightElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEDistantLightElement(ToSVGElement(node));
}
inline bool IsSVGFEDistantLightElement(const Node* node) {
  return node && IsSVGFEDistantLightElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEDistantLightElement>(const Node& node) {
  return IsSVGFEDistantLightElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEDistantLightElement>(const SVGElement& element) {
  return IsSVGFEDistantLightElement(element);
}

class SVGFEDropShadowElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEDropShadowElement(const SVGFEDropShadowElement&);
void IsSVGFEDropShadowElement(const SVGFEDropShadowElement*);

inline bool IsSVGFEDropShadowElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEDropShadowTag);
}
inline bool IsSVGFEDropShadowElement(const SVGElement* element) {
  return element && IsSVGFEDropShadowElement(*element);
}
inline bool IsSVGFEDropShadowElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEDropShadowElement(ToSVGElement(node));
}
inline bool IsSVGFEDropShadowElement(const Node* node) {
  return node && IsSVGFEDropShadowElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEDropShadowElement>(const Node& node) {
  return IsSVGFEDropShadowElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEDropShadowElement>(const SVGElement& element) {
  return IsSVGFEDropShadowElement(element);
}

class SVGFEFloodElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEFloodElement(const SVGFEFloodElement&);
void IsSVGFEFloodElement(const SVGFEFloodElement*);

inline bool IsSVGFEFloodElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEFloodTag);
}
inline bool IsSVGFEFloodElement(const SVGElement* element) {
  return element && IsSVGFEFloodElement(*element);
}
inline bool IsSVGFEFloodElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEFloodElement(ToSVGElement(node));
}
inline bool IsSVGFEFloodElement(const Node* node) {
  return node && IsSVGFEFloodElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEFloodElement>(const Node& node) {
  return IsSVGFEFloodElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEFloodElement>(const SVGElement& element) {
  return IsSVGFEFloodElement(element);
}

class SVGFEFuncAElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEFuncAElement(const SVGFEFuncAElement&);
void IsSVGFEFuncAElement(const SVGFEFuncAElement*);

inline bool IsSVGFEFuncAElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEFuncATag);
}
inline bool IsSVGFEFuncAElement(const SVGElement* element) {
  return element && IsSVGFEFuncAElement(*element);
}
inline bool IsSVGFEFuncAElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEFuncAElement(ToSVGElement(node));
}
inline bool IsSVGFEFuncAElement(const Node* node) {
  return node && IsSVGFEFuncAElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncAElement>(const Node& node) {
  return IsSVGFEFuncAElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncAElement>(const SVGElement& element) {
  return IsSVGFEFuncAElement(element);
}

class SVGFEFuncBElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEFuncBElement(const SVGFEFuncBElement&);
void IsSVGFEFuncBElement(const SVGFEFuncBElement*);

inline bool IsSVGFEFuncBElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEFuncBTag);
}
inline bool IsSVGFEFuncBElement(const SVGElement* element) {
  return element && IsSVGFEFuncBElement(*element);
}
inline bool IsSVGFEFuncBElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEFuncBElement(ToSVGElement(node));
}
inline bool IsSVGFEFuncBElement(const Node* node) {
  return node && IsSVGFEFuncBElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncBElement>(const Node& node) {
  return IsSVGFEFuncBElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncBElement>(const SVGElement& element) {
  return IsSVGFEFuncBElement(element);
}

class SVGFEFuncGElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEFuncGElement(const SVGFEFuncGElement&);
void IsSVGFEFuncGElement(const SVGFEFuncGElement*);

inline bool IsSVGFEFuncGElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEFuncGTag);
}
inline bool IsSVGFEFuncGElement(const SVGElement* element) {
  return element && IsSVGFEFuncGElement(*element);
}
inline bool IsSVGFEFuncGElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEFuncGElement(ToSVGElement(node));
}
inline bool IsSVGFEFuncGElement(const Node* node) {
  return node && IsSVGFEFuncGElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncGElement>(const Node& node) {
  return IsSVGFEFuncGElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncGElement>(const SVGElement& element) {
  return IsSVGFEFuncGElement(element);
}

class SVGFEFuncRElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEFuncRElement(const SVGFEFuncRElement&);
void IsSVGFEFuncRElement(const SVGFEFuncRElement*);

inline bool IsSVGFEFuncRElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEFuncRTag);
}
inline bool IsSVGFEFuncRElement(const SVGElement* element) {
  return element && IsSVGFEFuncRElement(*element);
}
inline bool IsSVGFEFuncRElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEFuncRElement(ToSVGElement(node));
}
inline bool IsSVGFEFuncRElement(const Node* node) {
  return node && IsSVGFEFuncRElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncRElement>(const Node& node) {
  return IsSVGFEFuncRElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEFuncRElement>(const SVGElement& element) {
  return IsSVGFEFuncRElement(element);
}

class SVGFEGaussianBlurElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEGaussianBlurElement(const SVGFEGaussianBlurElement&);
void IsSVGFEGaussianBlurElement(const SVGFEGaussianBlurElement*);

inline bool IsSVGFEGaussianBlurElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEGaussianBlurTag);
}
inline bool IsSVGFEGaussianBlurElement(const SVGElement* element) {
  return element && IsSVGFEGaussianBlurElement(*element);
}
inline bool IsSVGFEGaussianBlurElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEGaussianBlurElement(ToSVGElement(node));
}
inline bool IsSVGFEGaussianBlurElement(const Node* node) {
  return node && IsSVGFEGaussianBlurElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEGaussianBlurElement>(const Node& node) {
  return IsSVGFEGaussianBlurElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEGaussianBlurElement>(const SVGElement& element) {
  return IsSVGFEGaussianBlurElement(element);
}

class SVGFEImageElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEImageElement(const SVGFEImageElement&);
void IsSVGFEImageElement(const SVGFEImageElement*);

inline bool IsSVGFEImageElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEImageTag);
}
inline bool IsSVGFEImageElement(const SVGElement* element) {
  return element && IsSVGFEImageElement(*element);
}
inline bool IsSVGFEImageElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEImageElement(ToSVGElement(node));
}
inline bool IsSVGFEImageElement(const Node* node) {
  return node && IsSVGFEImageElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEImageElement>(const Node& node) {
  return IsSVGFEImageElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEImageElement>(const SVGElement& element) {
  return IsSVGFEImageElement(element);
}

class SVGFEMergeElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEMergeElement(const SVGFEMergeElement&);
void IsSVGFEMergeElement(const SVGFEMergeElement*);

inline bool IsSVGFEMergeElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEMergeTag);
}
inline bool IsSVGFEMergeElement(const SVGElement* element) {
  return element && IsSVGFEMergeElement(*element);
}
inline bool IsSVGFEMergeElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEMergeElement(ToSVGElement(node));
}
inline bool IsSVGFEMergeElement(const Node* node) {
  return node && IsSVGFEMergeElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEMergeElement>(const Node& node) {
  return IsSVGFEMergeElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEMergeElement>(const SVGElement& element) {
  return IsSVGFEMergeElement(element);
}

class SVGFEMergeNodeElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEMergeNodeElement(const SVGFEMergeNodeElement&);
void IsSVGFEMergeNodeElement(const SVGFEMergeNodeElement*);

inline bool IsSVGFEMergeNodeElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEMergeNodeTag);
}
inline bool IsSVGFEMergeNodeElement(const SVGElement* element) {
  return element && IsSVGFEMergeNodeElement(*element);
}
inline bool IsSVGFEMergeNodeElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEMergeNodeElement(ToSVGElement(node));
}
inline bool IsSVGFEMergeNodeElement(const Node* node) {
  return node && IsSVGFEMergeNodeElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEMergeNodeElement>(const Node& node) {
  return IsSVGFEMergeNodeElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEMergeNodeElement>(const SVGElement& element) {
  return IsSVGFEMergeNodeElement(element);
}

class SVGFEMorphologyElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEMorphologyElement(const SVGFEMorphologyElement&);
void IsSVGFEMorphologyElement(const SVGFEMorphologyElement*);

inline bool IsSVGFEMorphologyElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEMorphologyTag);
}
inline bool IsSVGFEMorphologyElement(const SVGElement* element) {
  return element && IsSVGFEMorphologyElement(*element);
}
inline bool IsSVGFEMorphologyElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEMorphologyElement(ToSVGElement(node));
}
inline bool IsSVGFEMorphologyElement(const Node* node) {
  return node && IsSVGFEMorphologyElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEMorphologyElement>(const Node& node) {
  return IsSVGFEMorphologyElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEMorphologyElement>(const SVGElement& element) {
  return IsSVGFEMorphologyElement(element);
}

class SVGFEOffsetElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEOffsetElement(const SVGFEOffsetElement&);
void IsSVGFEOffsetElement(const SVGFEOffsetElement*);

inline bool IsSVGFEOffsetElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEOffsetTag);
}
inline bool IsSVGFEOffsetElement(const SVGElement* element) {
  return element && IsSVGFEOffsetElement(*element);
}
inline bool IsSVGFEOffsetElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEOffsetElement(ToSVGElement(node));
}
inline bool IsSVGFEOffsetElement(const Node* node) {
  return node && IsSVGFEOffsetElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEOffsetElement>(const Node& node) {
  return IsSVGFEOffsetElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEOffsetElement>(const SVGElement& element) {
  return IsSVGFEOffsetElement(element);
}

class SVGFEPointLightElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFEPointLightElement(const SVGFEPointLightElement&);
void IsSVGFEPointLightElement(const SVGFEPointLightElement*);

inline bool IsSVGFEPointLightElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFEPointLightTag);
}
inline bool IsSVGFEPointLightElement(const SVGElement* element) {
  return element && IsSVGFEPointLightElement(*element);
}
inline bool IsSVGFEPointLightElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFEPointLightElement(ToSVGElement(node));
}
inline bool IsSVGFEPointLightElement(const Node* node) {
  return node && IsSVGFEPointLightElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFEPointLightElement>(const Node& node) {
  return IsSVGFEPointLightElement(node);
}
template <>
inline bool IsElementOfType<const SVGFEPointLightElement>(const SVGElement& element) {
  return IsSVGFEPointLightElement(element);
}

class SVGFESpecularLightingElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFESpecularLightingElement(const SVGFESpecularLightingElement&);
void IsSVGFESpecularLightingElement(const SVGFESpecularLightingElement*);

inline bool IsSVGFESpecularLightingElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFESpecularLightingTag);
}
inline bool IsSVGFESpecularLightingElement(const SVGElement* element) {
  return element && IsSVGFESpecularLightingElement(*element);
}
inline bool IsSVGFESpecularLightingElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFESpecularLightingElement(ToSVGElement(node));
}
inline bool IsSVGFESpecularLightingElement(const Node* node) {
  return node && IsSVGFESpecularLightingElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFESpecularLightingElement>(const Node& node) {
  return IsSVGFESpecularLightingElement(node);
}
template <>
inline bool IsElementOfType<const SVGFESpecularLightingElement>(const SVGElement& element) {
  return IsSVGFESpecularLightingElement(element);
}

class SVGFESpotLightElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFESpotLightElement(const SVGFESpotLightElement&);
void IsSVGFESpotLightElement(const SVGFESpotLightElement*);

inline bool IsSVGFESpotLightElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFESpotLightTag);
}
inline bool IsSVGFESpotLightElement(const SVGElement* element) {
  return element && IsSVGFESpotLightElement(*element);
}
inline bool IsSVGFESpotLightElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFESpotLightElement(ToSVGElement(node));
}
inline bool IsSVGFESpotLightElement(const Node* node) {
  return node && IsSVGFESpotLightElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFESpotLightElement>(const Node& node) {
  return IsSVGFESpotLightElement(node);
}
template <>
inline bool IsElementOfType<const SVGFESpotLightElement>(const SVGElement& element) {
  return IsSVGFESpotLightElement(element);
}

class SVGFETileElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFETileElement(const SVGFETileElement&);
void IsSVGFETileElement(const SVGFETileElement*);

inline bool IsSVGFETileElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFETileTag);
}
inline bool IsSVGFETileElement(const SVGElement* element) {
  return element && IsSVGFETileElement(*element);
}
inline bool IsSVGFETileElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFETileElement(ToSVGElement(node));
}
inline bool IsSVGFETileElement(const Node* node) {
  return node && IsSVGFETileElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFETileElement>(const Node& node) {
  return IsSVGFETileElement(node);
}
template <>
inline bool IsElementOfType<const SVGFETileElement>(const SVGElement& element) {
  return IsSVGFETileElement(element);
}

class SVGFETurbulenceElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFETurbulenceElement(const SVGFETurbulenceElement&);
void IsSVGFETurbulenceElement(const SVGFETurbulenceElement*);

inline bool IsSVGFETurbulenceElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFETurbulenceTag);
}
inline bool IsSVGFETurbulenceElement(const SVGElement* element) {
  return element && IsSVGFETurbulenceElement(*element);
}
inline bool IsSVGFETurbulenceElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFETurbulenceElement(ToSVGElement(node));
}
inline bool IsSVGFETurbulenceElement(const Node* node) {
  return node && IsSVGFETurbulenceElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFETurbulenceElement>(const Node& node) {
  return IsSVGFETurbulenceElement(node);
}
template <>
inline bool IsElementOfType<const SVGFETurbulenceElement>(const SVGElement& element) {
  return IsSVGFETurbulenceElement(element);
}

class SVGFilterElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGFilterElement(const SVGFilterElement&);
void IsSVGFilterElement(const SVGFilterElement*);

inline bool IsSVGFilterElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kFilterTag);
}
inline bool IsSVGFilterElement(const SVGElement* element) {
  return element && IsSVGFilterElement(*element);
}
inline bool IsSVGFilterElement(const Node& node) {
  return node.IsSVGElement() && IsSVGFilterElement(ToSVGElement(node));
}
inline bool IsSVGFilterElement(const Node* node) {
  return node && IsSVGFilterElement(*node);
}
template <>
inline bool IsElementOfType<const SVGFilterElement>(const Node& node) {
  return IsSVGFilterElement(node);
}
template <>
inline bool IsElementOfType<const SVGFilterElement>(const SVGElement& element) {
  return IsSVGFilterElement(element);
}

class SVGForeignObjectElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGForeignObjectElement(const SVGForeignObjectElement&);
void IsSVGForeignObjectElement(const SVGForeignObjectElement*);

inline bool IsSVGForeignObjectElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kForeignObjectTag);
}
inline bool IsSVGForeignObjectElement(const SVGElement* element) {
  return element && IsSVGForeignObjectElement(*element);
}
inline bool IsSVGForeignObjectElement(const Node& node) {
  return node.IsSVGElement() && IsSVGForeignObjectElement(ToSVGElement(node));
}
inline bool IsSVGForeignObjectElement(const Node* node) {
  return node && IsSVGForeignObjectElement(*node);
}
template <>
inline bool IsElementOfType<const SVGForeignObjectElement>(const Node& node) {
  return IsSVGForeignObjectElement(node);
}
template <>
inline bool IsElementOfType<const SVGForeignObjectElement>(const SVGElement& element) {
  return IsSVGForeignObjectElement(element);
}

class SVGGElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGGElement(const SVGGElement&);
void IsSVGGElement(const SVGGElement*);

inline bool IsSVGGElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kGTag);
}
inline bool IsSVGGElement(const SVGElement* element) {
  return element && IsSVGGElement(*element);
}
inline bool IsSVGGElement(const Node& node) {
  return node.IsSVGElement() && IsSVGGElement(ToSVGElement(node));
}
inline bool IsSVGGElement(const Node* node) {
  return node && IsSVGGElement(*node);
}
template <>
inline bool IsElementOfType<const SVGGElement>(const Node& node) {
  return IsSVGGElement(node);
}
template <>
inline bool IsElementOfType<const SVGGElement>(const SVGElement& element) {
  return IsSVGGElement(element);
}

class SVGImageElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGImageElement(const SVGImageElement&);
void IsSVGImageElement(const SVGImageElement*);

inline bool IsSVGImageElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kImageTag);
}
inline bool IsSVGImageElement(const SVGElement* element) {
  return element && IsSVGImageElement(*element);
}
inline bool IsSVGImageElement(const Node& node) {
  return node.IsSVGElement() && IsSVGImageElement(ToSVGElement(node));
}
inline bool IsSVGImageElement(const Node* node) {
  return node && IsSVGImageElement(*node);
}
template <>
inline bool IsElementOfType<const SVGImageElement>(const Node& node) {
  return IsSVGImageElement(node);
}
template <>
inline bool IsElementOfType<const SVGImageElement>(const SVGElement& element) {
  return IsSVGImageElement(element);
}

class SVGLineElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGLineElement(const SVGLineElement&);
void IsSVGLineElement(const SVGLineElement*);

inline bool IsSVGLineElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kLineTag);
}
inline bool IsSVGLineElement(const SVGElement* element) {
  return element && IsSVGLineElement(*element);
}
inline bool IsSVGLineElement(const Node& node) {
  return node.IsSVGElement() && IsSVGLineElement(ToSVGElement(node));
}
inline bool IsSVGLineElement(const Node* node) {
  return node && IsSVGLineElement(*node);
}
template <>
inline bool IsElementOfType<const SVGLineElement>(const Node& node) {
  return IsSVGLineElement(node);
}
template <>
inline bool IsElementOfType<const SVGLineElement>(const SVGElement& element) {
  return IsSVGLineElement(element);
}

class SVGLinearGradientElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGLinearGradientElement(const SVGLinearGradientElement&);
void IsSVGLinearGradientElement(const SVGLinearGradientElement*);

inline bool IsSVGLinearGradientElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kLinearGradientTag);
}
inline bool IsSVGLinearGradientElement(const SVGElement* element) {
  return element && IsSVGLinearGradientElement(*element);
}
inline bool IsSVGLinearGradientElement(const Node& node) {
  return node.IsSVGElement() && IsSVGLinearGradientElement(ToSVGElement(node));
}
inline bool IsSVGLinearGradientElement(const Node* node) {
  return node && IsSVGLinearGradientElement(*node);
}
template <>
inline bool IsElementOfType<const SVGLinearGradientElement>(const Node& node) {
  return IsSVGLinearGradientElement(node);
}
template <>
inline bool IsElementOfType<const SVGLinearGradientElement>(const SVGElement& element) {
  return IsSVGLinearGradientElement(element);
}

class SVGMPathElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGMPathElement(const SVGMPathElement&);
void IsSVGMPathElement(const SVGMPathElement*);

inline bool IsSVGMPathElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kMPathTag);
}
inline bool IsSVGMPathElement(const SVGElement* element) {
  return element && IsSVGMPathElement(*element);
}
inline bool IsSVGMPathElement(const Node& node) {
  return node.IsSVGElement() && IsSVGMPathElement(ToSVGElement(node));
}
inline bool IsSVGMPathElement(const Node* node) {
  return node && IsSVGMPathElement(*node);
}
template <>
inline bool IsElementOfType<const SVGMPathElement>(const Node& node) {
  return IsSVGMPathElement(node);
}
template <>
inline bool IsElementOfType<const SVGMPathElement>(const SVGElement& element) {
  return IsSVGMPathElement(element);
}

class SVGMarkerElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGMarkerElement(const SVGMarkerElement&);
void IsSVGMarkerElement(const SVGMarkerElement*);

inline bool IsSVGMarkerElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kMarkerTag);
}
inline bool IsSVGMarkerElement(const SVGElement* element) {
  return element && IsSVGMarkerElement(*element);
}
inline bool IsSVGMarkerElement(const Node& node) {
  return node.IsSVGElement() && IsSVGMarkerElement(ToSVGElement(node));
}
inline bool IsSVGMarkerElement(const Node* node) {
  return node && IsSVGMarkerElement(*node);
}
template <>
inline bool IsElementOfType<const SVGMarkerElement>(const Node& node) {
  return IsSVGMarkerElement(node);
}
template <>
inline bool IsElementOfType<const SVGMarkerElement>(const SVGElement& element) {
  return IsSVGMarkerElement(element);
}

class SVGMaskElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGMaskElement(const SVGMaskElement&);
void IsSVGMaskElement(const SVGMaskElement*);

inline bool IsSVGMaskElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kMaskTag);
}
inline bool IsSVGMaskElement(const SVGElement* element) {
  return element && IsSVGMaskElement(*element);
}
inline bool IsSVGMaskElement(const Node& node) {
  return node.IsSVGElement() && IsSVGMaskElement(ToSVGElement(node));
}
inline bool IsSVGMaskElement(const Node* node) {
  return node && IsSVGMaskElement(*node);
}
template <>
inline bool IsElementOfType<const SVGMaskElement>(const Node& node) {
  return IsSVGMaskElement(node);
}
template <>
inline bool IsElementOfType<const SVGMaskElement>(const SVGElement& element) {
  return IsSVGMaskElement(element);
}

class SVGMetadataElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGMetadataElement(const SVGMetadataElement&);
void IsSVGMetadataElement(const SVGMetadataElement*);

inline bool IsSVGMetadataElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kMetadataTag);
}
inline bool IsSVGMetadataElement(const SVGElement* element) {
  return element && IsSVGMetadataElement(*element);
}
inline bool IsSVGMetadataElement(const Node& node) {
  return node.IsSVGElement() && IsSVGMetadataElement(ToSVGElement(node));
}
inline bool IsSVGMetadataElement(const Node* node) {
  return node && IsSVGMetadataElement(*node);
}
template <>
inline bool IsElementOfType<const SVGMetadataElement>(const Node& node) {
  return IsSVGMetadataElement(node);
}
template <>
inline bool IsElementOfType<const SVGMetadataElement>(const SVGElement& element) {
  return IsSVGMetadataElement(element);
}

class SVGPathElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGPathElement(const SVGPathElement&);
void IsSVGPathElement(const SVGPathElement*);

inline bool IsSVGPathElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kPathTag);
}
inline bool IsSVGPathElement(const SVGElement* element) {
  return element && IsSVGPathElement(*element);
}
inline bool IsSVGPathElement(const Node& node) {
  return node.IsSVGElement() && IsSVGPathElement(ToSVGElement(node));
}
inline bool IsSVGPathElement(const Node* node) {
  return node && IsSVGPathElement(*node);
}
template <>
inline bool IsElementOfType<const SVGPathElement>(const Node& node) {
  return IsSVGPathElement(node);
}
template <>
inline bool IsElementOfType<const SVGPathElement>(const SVGElement& element) {
  return IsSVGPathElement(element);
}

class SVGPatternElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGPatternElement(const SVGPatternElement&);
void IsSVGPatternElement(const SVGPatternElement*);

inline bool IsSVGPatternElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kPatternTag);
}
inline bool IsSVGPatternElement(const SVGElement* element) {
  return element && IsSVGPatternElement(*element);
}
inline bool IsSVGPatternElement(const Node& node) {
  return node.IsSVGElement() && IsSVGPatternElement(ToSVGElement(node));
}
inline bool IsSVGPatternElement(const Node* node) {
  return node && IsSVGPatternElement(*node);
}
template <>
inline bool IsElementOfType<const SVGPatternElement>(const Node& node) {
  return IsSVGPatternElement(node);
}
template <>
inline bool IsElementOfType<const SVGPatternElement>(const SVGElement& element) {
  return IsSVGPatternElement(element);
}

class SVGPolygonElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGPolygonElement(const SVGPolygonElement&);
void IsSVGPolygonElement(const SVGPolygonElement*);

inline bool IsSVGPolygonElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kPolygonTag);
}
inline bool IsSVGPolygonElement(const SVGElement* element) {
  return element && IsSVGPolygonElement(*element);
}
inline bool IsSVGPolygonElement(const Node& node) {
  return node.IsSVGElement() && IsSVGPolygonElement(ToSVGElement(node));
}
inline bool IsSVGPolygonElement(const Node* node) {
  return node && IsSVGPolygonElement(*node);
}
template <>
inline bool IsElementOfType<const SVGPolygonElement>(const Node& node) {
  return IsSVGPolygonElement(node);
}
template <>
inline bool IsElementOfType<const SVGPolygonElement>(const SVGElement& element) {
  return IsSVGPolygonElement(element);
}

class SVGPolylineElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGPolylineElement(const SVGPolylineElement&);
void IsSVGPolylineElement(const SVGPolylineElement*);

inline bool IsSVGPolylineElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kPolylineTag);
}
inline bool IsSVGPolylineElement(const SVGElement* element) {
  return element && IsSVGPolylineElement(*element);
}
inline bool IsSVGPolylineElement(const Node& node) {
  return node.IsSVGElement() && IsSVGPolylineElement(ToSVGElement(node));
}
inline bool IsSVGPolylineElement(const Node* node) {
  return node && IsSVGPolylineElement(*node);
}
template <>
inline bool IsElementOfType<const SVGPolylineElement>(const Node& node) {
  return IsSVGPolylineElement(node);
}
template <>
inline bool IsElementOfType<const SVGPolylineElement>(const SVGElement& element) {
  return IsSVGPolylineElement(element);
}

class SVGRadialGradientElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGRadialGradientElement(const SVGRadialGradientElement&);
void IsSVGRadialGradientElement(const SVGRadialGradientElement*);

inline bool IsSVGRadialGradientElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kRadialGradientTag);
}
inline bool IsSVGRadialGradientElement(const SVGElement* element) {
  return element && IsSVGRadialGradientElement(*element);
}
inline bool IsSVGRadialGradientElement(const Node& node) {
  return node.IsSVGElement() && IsSVGRadialGradientElement(ToSVGElement(node));
}
inline bool IsSVGRadialGradientElement(const Node* node) {
  return node && IsSVGRadialGradientElement(*node);
}
template <>
inline bool IsElementOfType<const SVGRadialGradientElement>(const Node& node) {
  return IsSVGRadialGradientElement(node);
}
template <>
inline bool IsElementOfType<const SVGRadialGradientElement>(const SVGElement& element) {
  return IsSVGRadialGradientElement(element);
}

class SVGRectElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGRectElement(const SVGRectElement&);
void IsSVGRectElement(const SVGRectElement*);

inline bool IsSVGRectElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kRectTag);
}
inline bool IsSVGRectElement(const SVGElement* element) {
  return element && IsSVGRectElement(*element);
}
inline bool IsSVGRectElement(const Node& node) {
  return node.IsSVGElement() && IsSVGRectElement(ToSVGElement(node));
}
inline bool IsSVGRectElement(const Node* node) {
  return node && IsSVGRectElement(*node);
}
template <>
inline bool IsElementOfType<const SVGRectElement>(const Node& node) {
  return IsSVGRectElement(node);
}
template <>
inline bool IsElementOfType<const SVGRectElement>(const SVGElement& element) {
  return IsSVGRectElement(element);
}

class SVGSVGElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGSVGElement(const SVGSVGElement&);
void IsSVGSVGElement(const SVGSVGElement*);

inline bool IsSVGSVGElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kSVGTag);
}
inline bool IsSVGSVGElement(const SVGElement* element) {
  return element && IsSVGSVGElement(*element);
}
inline bool IsSVGSVGElement(const Node& node) {
  return node.IsSVGElement() && IsSVGSVGElement(ToSVGElement(node));
}
inline bool IsSVGSVGElement(const Node* node) {
  return node && IsSVGSVGElement(*node);
}
template <>
inline bool IsElementOfType<const SVGSVGElement>(const Node& node) {
  return IsSVGSVGElement(node);
}
template <>
inline bool IsElementOfType<const SVGSVGElement>(const SVGElement& element) {
  return IsSVGSVGElement(element);
}

class SVGSetElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGSetElement(const SVGSetElement&);
void IsSVGSetElement(const SVGSetElement*);

inline bool IsSVGSetElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kSetTag);
}
inline bool IsSVGSetElement(const SVGElement* element) {
  return element && IsSVGSetElement(*element);
}
inline bool IsSVGSetElement(const Node& node) {
  return node.IsSVGElement() && IsSVGSetElement(ToSVGElement(node));
}
inline bool IsSVGSetElement(const Node* node) {
  return node && IsSVGSetElement(*node);
}
template <>
inline bool IsElementOfType<const SVGSetElement>(const Node& node) {
  return IsSVGSetElement(node);
}
template <>
inline bool IsElementOfType<const SVGSetElement>(const SVGElement& element) {
  return IsSVGSetElement(element);
}

class SVGStopElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGStopElement(const SVGStopElement&);
void IsSVGStopElement(const SVGStopElement*);

inline bool IsSVGStopElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kStopTag);
}
inline bool IsSVGStopElement(const SVGElement* element) {
  return element && IsSVGStopElement(*element);
}
inline bool IsSVGStopElement(const Node& node) {
  return node.IsSVGElement() && IsSVGStopElement(ToSVGElement(node));
}
inline bool IsSVGStopElement(const Node* node) {
  return node && IsSVGStopElement(*node);
}
template <>
inline bool IsElementOfType<const SVGStopElement>(const Node& node) {
  return IsSVGStopElement(node);
}
template <>
inline bool IsElementOfType<const SVGStopElement>(const SVGElement& element) {
  return IsSVGStopElement(element);
}

class SVGSwitchElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGSwitchElement(const SVGSwitchElement&);
void IsSVGSwitchElement(const SVGSwitchElement*);

inline bool IsSVGSwitchElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kSwitchTag);
}
inline bool IsSVGSwitchElement(const SVGElement* element) {
  return element && IsSVGSwitchElement(*element);
}
inline bool IsSVGSwitchElement(const Node& node) {
  return node.IsSVGElement() && IsSVGSwitchElement(ToSVGElement(node));
}
inline bool IsSVGSwitchElement(const Node* node) {
  return node && IsSVGSwitchElement(*node);
}
template <>
inline bool IsElementOfType<const SVGSwitchElement>(const Node& node) {
  return IsSVGSwitchElement(node);
}
template <>
inline bool IsElementOfType<const SVGSwitchElement>(const SVGElement& element) {
  return IsSVGSwitchElement(element);
}

class SVGSymbolElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGSymbolElement(const SVGSymbolElement&);
void IsSVGSymbolElement(const SVGSymbolElement*);

inline bool IsSVGSymbolElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kSymbolTag);
}
inline bool IsSVGSymbolElement(const SVGElement* element) {
  return element && IsSVGSymbolElement(*element);
}
inline bool IsSVGSymbolElement(const Node& node) {
  return node.IsSVGElement() && IsSVGSymbolElement(ToSVGElement(node));
}
inline bool IsSVGSymbolElement(const Node* node) {
  return node && IsSVGSymbolElement(*node);
}
template <>
inline bool IsElementOfType<const SVGSymbolElement>(const Node& node) {
  return IsSVGSymbolElement(node);
}
template <>
inline bool IsElementOfType<const SVGSymbolElement>(const SVGElement& element) {
  return IsSVGSymbolElement(element);
}

class SVGTSpanElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGTSpanElement(const SVGTSpanElement&);
void IsSVGTSpanElement(const SVGTSpanElement*);

inline bool IsSVGTSpanElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kTSpanTag);
}
inline bool IsSVGTSpanElement(const SVGElement* element) {
  return element && IsSVGTSpanElement(*element);
}
inline bool IsSVGTSpanElement(const Node& node) {
  return node.IsSVGElement() && IsSVGTSpanElement(ToSVGElement(node));
}
inline bool IsSVGTSpanElement(const Node* node) {
  return node && IsSVGTSpanElement(*node);
}
template <>
inline bool IsElementOfType<const SVGTSpanElement>(const Node& node) {
  return IsSVGTSpanElement(node);
}
template <>
inline bool IsElementOfType<const SVGTSpanElement>(const SVGElement& element) {
  return IsSVGTSpanElement(element);
}

class SVGTextElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGTextElement(const SVGTextElement&);
void IsSVGTextElement(const SVGTextElement*);

inline bool IsSVGTextElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kTextTag);
}
inline bool IsSVGTextElement(const SVGElement* element) {
  return element && IsSVGTextElement(*element);
}
inline bool IsSVGTextElement(const Node& node) {
  return node.IsSVGElement() && IsSVGTextElement(ToSVGElement(node));
}
inline bool IsSVGTextElement(const Node* node) {
  return node && IsSVGTextElement(*node);
}
template <>
inline bool IsElementOfType<const SVGTextElement>(const Node& node) {
  return IsSVGTextElement(node);
}
template <>
inline bool IsElementOfType<const SVGTextElement>(const SVGElement& element) {
  return IsSVGTextElement(element);
}

class SVGTextPathElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGTextPathElement(const SVGTextPathElement&);
void IsSVGTextPathElement(const SVGTextPathElement*);

inline bool IsSVGTextPathElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kTextPathTag);
}
inline bool IsSVGTextPathElement(const SVGElement* element) {
  return element && IsSVGTextPathElement(*element);
}
inline bool IsSVGTextPathElement(const Node& node) {
  return node.IsSVGElement() && IsSVGTextPathElement(ToSVGElement(node));
}
inline bool IsSVGTextPathElement(const Node* node) {
  return node && IsSVGTextPathElement(*node);
}
template <>
inline bool IsElementOfType<const SVGTextPathElement>(const Node& node) {
  return IsSVGTextPathElement(node);
}
template <>
inline bool IsElementOfType<const SVGTextPathElement>(const SVGElement& element) {
  return IsSVGTextPathElement(element);
}

class SVGTitleElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGTitleElement(const SVGTitleElement&);
void IsSVGTitleElement(const SVGTitleElement*);

inline bool IsSVGTitleElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kTitleTag);
}
inline bool IsSVGTitleElement(const SVGElement* element) {
  return element && IsSVGTitleElement(*element);
}
inline bool IsSVGTitleElement(const Node& node) {
  return node.IsSVGElement() && IsSVGTitleElement(ToSVGElement(node));
}
inline bool IsSVGTitleElement(const Node* node) {
  return node && IsSVGTitleElement(*node);
}
template <>
inline bool IsElementOfType<const SVGTitleElement>(const Node& node) {
  return IsSVGTitleElement(node);
}
template <>
inline bool IsElementOfType<const SVGTitleElement>(const SVGElement& element) {
  return IsSVGTitleElement(element);
}

class SVGUseElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGUseElement(const SVGUseElement&);
void IsSVGUseElement(const SVGUseElement*);

inline bool IsSVGUseElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kUseTag);
}
inline bool IsSVGUseElement(const SVGElement* element) {
  return element && IsSVGUseElement(*element);
}
inline bool IsSVGUseElement(const Node& node) {
  return node.IsSVGElement() && IsSVGUseElement(ToSVGElement(node));
}
inline bool IsSVGUseElement(const Node* node) {
  return node && IsSVGUseElement(*node);
}
template <>
inline bool IsElementOfType<const SVGUseElement>(const Node& node) {
  return IsSVGUseElement(node);
}
template <>
inline bool IsElementOfType<const SVGUseElement>(const SVGElement& element) {
  return IsSVGUseElement(element);
}

class SVGViewElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGViewElement(const SVGViewElement&);
void IsSVGViewElement(const SVGViewElement*);

inline bool IsSVGViewElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kViewTag);
}
inline bool IsSVGViewElement(const SVGElement* element) {
  return element && IsSVGViewElement(*element);
}
inline bool IsSVGViewElement(const Node& node) {
  return node.IsSVGElement() && IsSVGViewElement(ToSVGElement(node));
}
inline bool IsSVGViewElement(const Node* node) {
  return node && IsSVGViewElement(*node);
}
template <>
inline bool IsElementOfType<const SVGViewElement>(const Node& node) {
  return IsSVGViewElement(node);
}
template <>
inline bool IsElementOfType<const SVGViewElement>(const SVGElement& element) {
  return IsSVGViewElement(element);
}

class SVGScriptElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGScriptElement(const SVGScriptElement&);
void IsSVGScriptElement(const SVGScriptElement*);

inline bool IsSVGScriptElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kScriptTag);
}
inline bool IsSVGScriptElement(const SVGElement* element) {
  return element && IsSVGScriptElement(*element);
}
inline bool IsSVGScriptElement(const Node& node) {
  return node.IsSVGElement() && IsSVGScriptElement(ToSVGElement(node));
}
inline bool IsSVGScriptElement(const Node* node) {
  return node && IsSVGScriptElement(*node);
}
template <>
inline bool IsElementOfType<const SVGScriptElement>(const Node& node) {
  return IsSVGScriptElement(node);
}
template <>
inline bool IsElementOfType<const SVGScriptElement>(const SVGElement& element) {
  return IsSVGScriptElement(element);
}

class SVGStyleElement;
// Catch unnecessary runtime check of type known at compile time.
void IsSVGStyleElement(const SVGStyleElement&);
void IsSVGStyleElement(const SVGStyleElement*);

inline bool IsSVGStyleElement(const SVGElement& element) {
  return element.HasTagName(svg_names::kStyleTag);
}
inline bool IsSVGStyleElement(const SVGElement* element) {
  return element && IsSVGStyleElement(*element);
}
inline bool IsSVGStyleElement(const Node& node) {
  return node.IsSVGElement() && IsSVGStyleElement(ToSVGElement(node));
}
inline bool IsSVGStyleElement(const Node* node) {
  return node && IsSVGStyleElement(*node);
}
template <>
inline bool IsElementOfType<const SVGStyleElement>(const Node& node) {
  return IsSVGStyleElement(node);
}
template <>
inline bool IsElementOfType<const SVGStyleElement>(const SVGElement& element) {
  return IsSVGStyleElement(element);
}

// Using macros because the types are forward-declared and we don't want to use
// reinterpret_cast in the casting functions above. reinterpret_cast would be
// unsafe due to multiple inheritence.

#define ToSVGAElement(x) blink::ToElement<blink::SVGAElement>(x)
#define ToSVGAElementOrNull(x) blink::ToElementOrNull<blink::SVGAElement>(x)
#define ToSVGAElementOrDie(x) blink::ToElementOrDie<blink::SVGAElement>(x)
#define ToSVGAnimateMotionElement(x) blink::ToElement<blink::SVGAnimateMotionElement>(x)
#define ToSVGAnimateMotionElementOrNull(x) blink::ToElementOrNull<blink::SVGAnimateMotionElement>(x)
#define ToSVGAnimateMotionElementOrDie(x) blink::ToElementOrDie<blink::SVGAnimateMotionElement>(x)
#define ToSVGAnimateTransformElement(x) blink::ToElement<blink::SVGAnimateTransformElement>(x)
#define ToSVGAnimateTransformElementOrNull(x) blink::ToElementOrNull<blink::SVGAnimateTransformElement>(x)
#define ToSVGAnimateTransformElementOrDie(x) blink::ToElementOrDie<blink::SVGAnimateTransformElement>(x)
#define ToSVGCircleElement(x) blink::ToElement<blink::SVGCircleElement>(x)
#define ToSVGCircleElementOrNull(x) blink::ToElementOrNull<blink::SVGCircleElement>(x)
#define ToSVGCircleElementOrDie(x) blink::ToElementOrDie<blink::SVGCircleElement>(x)
#define ToSVGClipPathElement(x) blink::ToElement<blink::SVGClipPathElement>(x)
#define ToSVGClipPathElementOrNull(x) blink::ToElementOrNull<blink::SVGClipPathElement>(x)
#define ToSVGClipPathElementOrDie(x) blink::ToElementOrDie<blink::SVGClipPathElement>(x)
#define ToSVGDefsElement(x) blink::ToElement<blink::SVGDefsElement>(x)
#define ToSVGDefsElementOrNull(x) blink::ToElementOrNull<blink::SVGDefsElement>(x)
#define ToSVGDefsElementOrDie(x) blink::ToElementOrDie<blink::SVGDefsElement>(x)
#define ToSVGDescElement(x) blink::ToElement<blink::SVGDescElement>(x)
#define ToSVGDescElementOrNull(x) blink::ToElementOrNull<blink::SVGDescElement>(x)
#define ToSVGDescElementOrDie(x) blink::ToElementOrDie<blink::SVGDescElement>(x)
#define ToSVGDiscardElement(x) blink::ToElement<blink::SVGDiscardElement>(x)
#define ToSVGDiscardElementOrNull(x) blink::ToElementOrNull<blink::SVGDiscardElement>(x)
#define ToSVGDiscardElementOrDie(x) blink::ToElementOrDie<blink::SVGDiscardElement>(x)
#define ToSVGEllipseElement(x) blink::ToElement<blink::SVGEllipseElement>(x)
#define ToSVGEllipseElementOrNull(x) blink::ToElementOrNull<blink::SVGEllipseElement>(x)
#define ToSVGEllipseElementOrDie(x) blink::ToElementOrDie<blink::SVGEllipseElement>(x)
#define ToSVGFEBlendElement(x) blink::ToElement<blink::SVGFEBlendElement>(x)
#define ToSVGFEBlendElementOrNull(x) blink::ToElementOrNull<blink::SVGFEBlendElement>(x)
#define ToSVGFEBlendElementOrDie(x) blink::ToElementOrDie<blink::SVGFEBlendElement>(x)
#define ToSVGFEColorMatrixElement(x) blink::ToElement<blink::SVGFEColorMatrixElement>(x)
#define ToSVGFEColorMatrixElementOrNull(x) blink::ToElementOrNull<blink::SVGFEColorMatrixElement>(x)
#define ToSVGFEColorMatrixElementOrDie(x) blink::ToElementOrDie<blink::SVGFEColorMatrixElement>(x)
#define ToSVGFEComponentTransferElement(x) blink::ToElement<blink::SVGFEComponentTransferElement>(x)
#define ToSVGFEComponentTransferElementOrNull(x) blink::ToElementOrNull<blink::SVGFEComponentTransferElement>(x)
#define ToSVGFEComponentTransferElementOrDie(x) blink::ToElementOrDie<blink::SVGFEComponentTransferElement>(x)
#define ToSVGFECompositeElement(x) blink::ToElement<blink::SVGFECompositeElement>(x)
#define ToSVGFECompositeElementOrNull(x) blink::ToElementOrNull<blink::SVGFECompositeElement>(x)
#define ToSVGFECompositeElementOrDie(x) blink::ToElementOrDie<blink::SVGFECompositeElement>(x)
#define ToSVGFEConvolveMatrixElement(x) blink::ToElement<blink::SVGFEConvolveMatrixElement>(x)
#define ToSVGFEConvolveMatrixElementOrNull(x) blink::ToElementOrNull<blink::SVGFEConvolveMatrixElement>(x)
#define ToSVGFEConvolveMatrixElementOrDie(x) blink::ToElementOrDie<blink::SVGFEConvolveMatrixElement>(x)
#define ToSVGFEDiffuseLightingElement(x) blink::ToElement<blink::SVGFEDiffuseLightingElement>(x)
#define ToSVGFEDiffuseLightingElementOrNull(x) blink::ToElementOrNull<blink::SVGFEDiffuseLightingElement>(x)
#define ToSVGFEDiffuseLightingElementOrDie(x) blink::ToElementOrDie<blink::SVGFEDiffuseLightingElement>(x)
#define ToSVGFEDisplacementMapElement(x) blink::ToElement<blink::SVGFEDisplacementMapElement>(x)
#define ToSVGFEDisplacementMapElementOrNull(x) blink::ToElementOrNull<blink::SVGFEDisplacementMapElement>(x)
#define ToSVGFEDisplacementMapElementOrDie(x) blink::ToElementOrDie<blink::SVGFEDisplacementMapElement>(x)
#define ToSVGFEDistantLightElement(x) blink::ToElement<blink::SVGFEDistantLightElement>(x)
#define ToSVGFEDistantLightElementOrNull(x) blink::ToElementOrNull<blink::SVGFEDistantLightElement>(x)
#define ToSVGFEDistantLightElementOrDie(x) blink::ToElementOrDie<blink::SVGFEDistantLightElement>(x)
#define ToSVGFEDropShadowElement(x) blink::ToElement<blink::SVGFEDropShadowElement>(x)
#define ToSVGFEDropShadowElementOrNull(x) blink::ToElementOrNull<blink::SVGFEDropShadowElement>(x)
#define ToSVGFEDropShadowElementOrDie(x) blink::ToElementOrDie<blink::SVGFEDropShadowElement>(x)
#define ToSVGFEFloodElement(x) blink::ToElement<blink::SVGFEFloodElement>(x)
#define ToSVGFEFloodElementOrNull(x) blink::ToElementOrNull<blink::SVGFEFloodElement>(x)
#define ToSVGFEFloodElementOrDie(x) blink::ToElementOrDie<blink::SVGFEFloodElement>(x)
#define ToSVGFEFuncAElement(x) blink::ToElement<blink::SVGFEFuncAElement>(x)
#define ToSVGFEFuncAElementOrNull(x) blink::ToElementOrNull<blink::SVGFEFuncAElement>(x)
#define ToSVGFEFuncAElementOrDie(x) blink::ToElementOrDie<blink::SVGFEFuncAElement>(x)
#define ToSVGFEFuncBElement(x) blink::ToElement<blink::SVGFEFuncBElement>(x)
#define ToSVGFEFuncBElementOrNull(x) blink::ToElementOrNull<blink::SVGFEFuncBElement>(x)
#define ToSVGFEFuncBElementOrDie(x) blink::ToElementOrDie<blink::SVGFEFuncBElement>(x)
#define ToSVGFEFuncGElement(x) blink::ToElement<blink::SVGFEFuncGElement>(x)
#define ToSVGFEFuncGElementOrNull(x) blink::ToElementOrNull<blink::SVGFEFuncGElement>(x)
#define ToSVGFEFuncGElementOrDie(x) blink::ToElementOrDie<blink::SVGFEFuncGElement>(x)
#define ToSVGFEFuncRElement(x) blink::ToElement<blink::SVGFEFuncRElement>(x)
#define ToSVGFEFuncRElementOrNull(x) blink::ToElementOrNull<blink::SVGFEFuncRElement>(x)
#define ToSVGFEFuncRElementOrDie(x) blink::ToElementOrDie<blink::SVGFEFuncRElement>(x)
#define ToSVGFEGaussianBlurElement(x) blink::ToElement<blink::SVGFEGaussianBlurElement>(x)
#define ToSVGFEGaussianBlurElementOrNull(x) blink::ToElementOrNull<blink::SVGFEGaussianBlurElement>(x)
#define ToSVGFEGaussianBlurElementOrDie(x) blink::ToElementOrDie<blink::SVGFEGaussianBlurElement>(x)
#define ToSVGFEImageElement(x) blink::ToElement<blink::SVGFEImageElement>(x)
#define ToSVGFEImageElementOrNull(x) blink::ToElementOrNull<blink::SVGFEImageElement>(x)
#define ToSVGFEImageElementOrDie(x) blink::ToElementOrDie<blink::SVGFEImageElement>(x)
#define ToSVGFEMergeElement(x) blink::ToElement<blink::SVGFEMergeElement>(x)
#define ToSVGFEMergeElementOrNull(x) blink::ToElementOrNull<blink::SVGFEMergeElement>(x)
#define ToSVGFEMergeElementOrDie(x) blink::ToElementOrDie<blink::SVGFEMergeElement>(x)
#define ToSVGFEMergeNodeElement(x) blink::ToElement<blink::SVGFEMergeNodeElement>(x)
#define ToSVGFEMergeNodeElementOrNull(x) blink::ToElementOrNull<blink::SVGFEMergeNodeElement>(x)
#define ToSVGFEMergeNodeElementOrDie(x) blink::ToElementOrDie<blink::SVGFEMergeNodeElement>(x)
#define ToSVGFEMorphologyElement(x) blink::ToElement<blink::SVGFEMorphologyElement>(x)
#define ToSVGFEMorphologyElementOrNull(x) blink::ToElementOrNull<blink::SVGFEMorphologyElement>(x)
#define ToSVGFEMorphologyElementOrDie(x) blink::ToElementOrDie<blink::SVGFEMorphologyElement>(x)
#define ToSVGFEOffsetElement(x) blink::ToElement<blink::SVGFEOffsetElement>(x)
#define ToSVGFEOffsetElementOrNull(x) blink::ToElementOrNull<blink::SVGFEOffsetElement>(x)
#define ToSVGFEOffsetElementOrDie(x) blink::ToElementOrDie<blink::SVGFEOffsetElement>(x)
#define ToSVGFEPointLightElement(x) blink::ToElement<blink::SVGFEPointLightElement>(x)
#define ToSVGFEPointLightElementOrNull(x) blink::ToElementOrNull<blink::SVGFEPointLightElement>(x)
#define ToSVGFEPointLightElementOrDie(x) blink::ToElementOrDie<blink::SVGFEPointLightElement>(x)
#define ToSVGFESpecularLightingElement(x) blink::ToElement<blink::SVGFESpecularLightingElement>(x)
#define ToSVGFESpecularLightingElementOrNull(x) blink::ToElementOrNull<blink::SVGFESpecularLightingElement>(x)
#define ToSVGFESpecularLightingElementOrDie(x) blink::ToElementOrDie<blink::SVGFESpecularLightingElement>(x)
#define ToSVGFESpotLightElement(x) blink::ToElement<blink::SVGFESpotLightElement>(x)
#define ToSVGFESpotLightElementOrNull(x) blink::ToElementOrNull<blink::SVGFESpotLightElement>(x)
#define ToSVGFESpotLightElementOrDie(x) blink::ToElementOrDie<blink::SVGFESpotLightElement>(x)
#define ToSVGFETileElement(x) blink::ToElement<blink::SVGFETileElement>(x)
#define ToSVGFETileElementOrNull(x) blink::ToElementOrNull<blink::SVGFETileElement>(x)
#define ToSVGFETileElementOrDie(x) blink::ToElementOrDie<blink::SVGFETileElement>(x)
#define ToSVGFETurbulenceElement(x) blink::ToElement<blink::SVGFETurbulenceElement>(x)
#define ToSVGFETurbulenceElementOrNull(x) blink::ToElementOrNull<blink::SVGFETurbulenceElement>(x)
#define ToSVGFETurbulenceElementOrDie(x) blink::ToElementOrDie<blink::SVGFETurbulenceElement>(x)
#define ToSVGFilterElement(x) blink::ToElement<blink::SVGFilterElement>(x)
#define ToSVGFilterElementOrNull(x) blink::ToElementOrNull<blink::SVGFilterElement>(x)
#define ToSVGFilterElementOrDie(x) blink::ToElementOrDie<blink::SVGFilterElement>(x)
#define ToSVGForeignObjectElement(x) blink::ToElement<blink::SVGForeignObjectElement>(x)
#define ToSVGForeignObjectElementOrNull(x) blink::ToElementOrNull<blink::SVGForeignObjectElement>(x)
#define ToSVGForeignObjectElementOrDie(x) blink::ToElementOrDie<blink::SVGForeignObjectElement>(x)
#define ToSVGGElement(x) blink::ToElement<blink::SVGGElement>(x)
#define ToSVGGElementOrNull(x) blink::ToElementOrNull<blink::SVGGElement>(x)
#define ToSVGGElementOrDie(x) blink::ToElementOrDie<blink::SVGGElement>(x)
#define ToSVGImageElement(x) blink::ToElement<blink::SVGImageElement>(x)
#define ToSVGImageElementOrNull(x) blink::ToElementOrNull<blink::SVGImageElement>(x)
#define ToSVGImageElementOrDie(x) blink::ToElementOrDie<blink::SVGImageElement>(x)
#define ToSVGLineElement(x) blink::ToElement<blink::SVGLineElement>(x)
#define ToSVGLineElementOrNull(x) blink::ToElementOrNull<blink::SVGLineElement>(x)
#define ToSVGLineElementOrDie(x) blink::ToElementOrDie<blink::SVGLineElement>(x)
#define ToSVGLinearGradientElement(x) blink::ToElement<blink::SVGLinearGradientElement>(x)
#define ToSVGLinearGradientElementOrNull(x) blink::ToElementOrNull<blink::SVGLinearGradientElement>(x)
#define ToSVGLinearGradientElementOrDie(x) blink::ToElementOrDie<blink::SVGLinearGradientElement>(x)
#define ToSVGMPathElement(x) blink::ToElement<blink::SVGMPathElement>(x)
#define ToSVGMPathElementOrNull(x) blink::ToElementOrNull<blink::SVGMPathElement>(x)
#define ToSVGMPathElementOrDie(x) blink::ToElementOrDie<blink::SVGMPathElement>(x)
#define ToSVGMarkerElement(x) blink::ToElement<blink::SVGMarkerElement>(x)
#define ToSVGMarkerElementOrNull(x) blink::ToElementOrNull<blink::SVGMarkerElement>(x)
#define ToSVGMarkerElementOrDie(x) blink::ToElementOrDie<blink::SVGMarkerElement>(x)
#define ToSVGMaskElement(x) blink::ToElement<blink::SVGMaskElement>(x)
#define ToSVGMaskElementOrNull(x) blink::ToElementOrNull<blink::SVGMaskElement>(x)
#define ToSVGMaskElementOrDie(x) blink::ToElementOrDie<blink::SVGMaskElement>(x)
#define ToSVGMetadataElement(x) blink::ToElement<blink::SVGMetadataElement>(x)
#define ToSVGMetadataElementOrNull(x) blink::ToElementOrNull<blink::SVGMetadataElement>(x)
#define ToSVGMetadataElementOrDie(x) blink::ToElementOrDie<blink::SVGMetadataElement>(x)
#define ToSVGPathElement(x) blink::ToElement<blink::SVGPathElement>(x)
#define ToSVGPathElementOrNull(x) blink::ToElementOrNull<blink::SVGPathElement>(x)
#define ToSVGPathElementOrDie(x) blink::ToElementOrDie<blink::SVGPathElement>(x)
#define ToSVGPatternElement(x) blink::ToElement<blink::SVGPatternElement>(x)
#define ToSVGPatternElementOrNull(x) blink::ToElementOrNull<blink::SVGPatternElement>(x)
#define ToSVGPatternElementOrDie(x) blink::ToElementOrDie<blink::SVGPatternElement>(x)
#define ToSVGPolygonElement(x) blink::ToElement<blink::SVGPolygonElement>(x)
#define ToSVGPolygonElementOrNull(x) blink::ToElementOrNull<blink::SVGPolygonElement>(x)
#define ToSVGPolygonElementOrDie(x) blink::ToElementOrDie<blink::SVGPolygonElement>(x)
#define ToSVGPolylineElement(x) blink::ToElement<blink::SVGPolylineElement>(x)
#define ToSVGPolylineElementOrNull(x) blink::ToElementOrNull<blink::SVGPolylineElement>(x)
#define ToSVGPolylineElementOrDie(x) blink::ToElementOrDie<blink::SVGPolylineElement>(x)
#define ToSVGRadialGradientElement(x) blink::ToElement<blink::SVGRadialGradientElement>(x)
#define ToSVGRadialGradientElementOrNull(x) blink::ToElementOrNull<blink::SVGRadialGradientElement>(x)
#define ToSVGRadialGradientElementOrDie(x) blink::ToElementOrDie<blink::SVGRadialGradientElement>(x)
#define ToSVGRectElement(x) blink::ToElement<blink::SVGRectElement>(x)
#define ToSVGRectElementOrNull(x) blink::ToElementOrNull<blink::SVGRectElement>(x)
#define ToSVGRectElementOrDie(x) blink::ToElementOrDie<blink::SVGRectElement>(x)
#define ToSVGSVGElement(x) blink::ToElement<blink::SVGSVGElement>(x)
#define ToSVGSVGElementOrNull(x) blink::ToElementOrNull<blink::SVGSVGElement>(x)
#define ToSVGSVGElementOrDie(x) blink::ToElementOrDie<blink::SVGSVGElement>(x)
#define ToSVGSetElement(x) blink::ToElement<blink::SVGSetElement>(x)
#define ToSVGSetElementOrNull(x) blink::ToElementOrNull<blink::SVGSetElement>(x)
#define ToSVGSetElementOrDie(x) blink::ToElementOrDie<blink::SVGSetElement>(x)
#define ToSVGStopElement(x) blink::ToElement<blink::SVGStopElement>(x)
#define ToSVGStopElementOrNull(x) blink::ToElementOrNull<blink::SVGStopElement>(x)
#define ToSVGStopElementOrDie(x) blink::ToElementOrDie<blink::SVGStopElement>(x)
#define ToSVGSwitchElement(x) blink::ToElement<blink::SVGSwitchElement>(x)
#define ToSVGSwitchElementOrNull(x) blink::ToElementOrNull<blink::SVGSwitchElement>(x)
#define ToSVGSwitchElementOrDie(x) blink::ToElementOrDie<blink::SVGSwitchElement>(x)
#define ToSVGSymbolElement(x) blink::ToElement<blink::SVGSymbolElement>(x)
#define ToSVGSymbolElementOrNull(x) blink::ToElementOrNull<blink::SVGSymbolElement>(x)
#define ToSVGSymbolElementOrDie(x) blink::ToElementOrDie<blink::SVGSymbolElement>(x)
#define ToSVGTSpanElement(x) blink::ToElement<blink::SVGTSpanElement>(x)
#define ToSVGTSpanElementOrNull(x) blink::ToElementOrNull<blink::SVGTSpanElement>(x)
#define ToSVGTSpanElementOrDie(x) blink::ToElementOrDie<blink::SVGTSpanElement>(x)
#define ToSVGTextElement(x) blink::ToElement<blink::SVGTextElement>(x)
#define ToSVGTextElementOrNull(x) blink::ToElementOrNull<blink::SVGTextElement>(x)
#define ToSVGTextElementOrDie(x) blink::ToElementOrDie<blink::SVGTextElement>(x)
#define ToSVGTextPathElement(x) blink::ToElement<blink::SVGTextPathElement>(x)
#define ToSVGTextPathElementOrNull(x) blink::ToElementOrNull<blink::SVGTextPathElement>(x)
#define ToSVGTextPathElementOrDie(x) blink::ToElementOrDie<blink::SVGTextPathElement>(x)
#define ToSVGTitleElement(x) blink::ToElement<blink::SVGTitleElement>(x)
#define ToSVGTitleElementOrNull(x) blink::ToElementOrNull<blink::SVGTitleElement>(x)
#define ToSVGTitleElementOrDie(x) blink::ToElementOrDie<blink::SVGTitleElement>(x)
#define ToSVGUseElement(x) blink::ToElement<blink::SVGUseElement>(x)
#define ToSVGUseElementOrNull(x) blink::ToElementOrNull<blink::SVGUseElement>(x)
#define ToSVGUseElementOrDie(x) blink::ToElementOrDie<blink::SVGUseElement>(x)
#define ToSVGViewElement(x) blink::ToElement<blink::SVGViewElement>(x)
#define ToSVGViewElementOrNull(x) blink::ToElementOrNull<blink::SVGViewElement>(x)
#define ToSVGViewElementOrDie(x) blink::ToElementOrDie<blink::SVGViewElement>(x)
#define ToSVGScriptElement(x) blink::ToElement<blink::SVGScriptElement>(x)
#define ToSVGScriptElementOrNull(x) blink::ToElementOrNull<blink::SVGScriptElement>(x)
#define ToSVGScriptElementOrDie(x) blink::ToElementOrDie<blink::SVGScriptElement>(x)
#define ToSVGStyleElement(x) blink::ToElement<blink::SVGStyleElement>(x)
#define ToSVGStyleElementOrNull(x) blink::ToElementOrNull<blink::SVGStyleElement>(x)
#define ToSVGStyleElementOrDie(x) blink::ToElementOrDie<blink::SVGStyleElement>(x)

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_SVG_ELEMENT_TYPE_HELPERS_H_
