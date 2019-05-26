// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_type_helpers.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_TYPE_HELPERS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_TYPE_HELPERS_H_

#include "third_party/blink/renderer/core/html/html_element.h"
#include "third_party/blink/renderer/core/html_names.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {
// Type checking.
class HTMLAnchorElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLAnchorElement(const HTMLAnchorElement&);
void IsHTMLAnchorElement(const HTMLAnchorElement*);

inline bool IsHTMLAnchorElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kATag);
}
inline bool IsHTMLAnchorElement(const HTMLElement* element) {
  return element && IsHTMLAnchorElement(*element);
}
inline bool IsHTMLAnchorElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLAnchorElement(ToHTMLElement(node));
}
inline bool IsHTMLAnchorElement(const Node* node) {
  return node && IsHTMLAnchorElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLAnchorElement>(const Node& node) {
  return IsHTMLAnchorElement(node);
}
template <>
inline bool IsElementOfType<const HTMLAnchorElement>(const HTMLElement& element) {
  return IsHTMLAnchorElement(element);
}

class HTMLAreaElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLAreaElement(const HTMLAreaElement&);
void IsHTMLAreaElement(const HTMLAreaElement*);

inline bool IsHTMLAreaElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kAreaTag);
}
inline bool IsHTMLAreaElement(const HTMLElement* element) {
  return element && IsHTMLAreaElement(*element);
}
inline bool IsHTMLAreaElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLAreaElement(ToHTMLElement(node));
}
inline bool IsHTMLAreaElement(const Node* node) {
  return node && IsHTMLAreaElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLAreaElement>(const Node& node) {
  return IsHTMLAreaElement(node);
}
template <>
inline bool IsElementOfType<const HTMLAreaElement>(const HTMLElement& element) {
  return IsHTMLAreaElement(element);
}

class HTMLAudioElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLAudioElement(const HTMLAudioElement&);
void IsHTMLAudioElement(const HTMLAudioElement*);

inline bool IsHTMLAudioElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kAudioTag);
}
inline bool IsHTMLAudioElement(const HTMLElement* element) {
  return element && IsHTMLAudioElement(*element);
}
inline bool IsHTMLAudioElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLAudioElement(ToHTMLElement(node));
}
inline bool IsHTMLAudioElement(const Node* node) {
  return node && IsHTMLAudioElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLAudioElement>(const Node& node) {
  return IsHTMLAudioElement(node);
}
template <>
inline bool IsElementOfType<const HTMLAudioElement>(const HTMLElement& element) {
  return IsHTMLAudioElement(element);
}

class HTMLBRElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLBRElement(const HTMLBRElement&);
void IsHTMLBRElement(const HTMLBRElement*);

inline bool IsHTMLBRElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kBrTag);
}
inline bool IsHTMLBRElement(const HTMLElement* element) {
  return element && IsHTMLBRElement(*element);
}
inline bool IsHTMLBRElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLBRElement(ToHTMLElement(node));
}
inline bool IsHTMLBRElement(const Node* node) {
  return node && IsHTMLBRElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLBRElement>(const Node& node) {
  return IsHTMLBRElement(node);
}
template <>
inline bool IsElementOfType<const HTMLBRElement>(const HTMLElement& element) {
  return IsHTMLBRElement(element);
}

class HTMLBaseElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLBaseElement(const HTMLBaseElement&);
void IsHTMLBaseElement(const HTMLBaseElement*);

inline bool IsHTMLBaseElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kBaseTag);
}
inline bool IsHTMLBaseElement(const HTMLElement* element) {
  return element && IsHTMLBaseElement(*element);
}
inline bool IsHTMLBaseElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLBaseElement(ToHTMLElement(node));
}
inline bool IsHTMLBaseElement(const Node* node) {
  return node && IsHTMLBaseElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLBaseElement>(const Node& node) {
  return IsHTMLBaseElement(node);
}
template <>
inline bool IsElementOfType<const HTMLBaseElement>(const HTMLElement& element) {
  return IsHTMLBaseElement(element);
}

class HTMLBodyElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLBodyElement(const HTMLBodyElement&);
void IsHTMLBodyElement(const HTMLBodyElement*);

inline bool IsHTMLBodyElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kBodyTag);
}
inline bool IsHTMLBodyElement(const HTMLElement* element) {
  return element && IsHTMLBodyElement(*element);
}
inline bool IsHTMLBodyElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLBodyElement(ToHTMLElement(node));
}
inline bool IsHTMLBodyElement(const Node* node) {
  return node && IsHTMLBodyElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLBodyElement>(const Node& node) {
  return IsHTMLBodyElement(node);
}
template <>
inline bool IsElementOfType<const HTMLBodyElement>(const HTMLElement& element) {
  return IsHTMLBodyElement(element);
}

class HTMLButtonElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLButtonElement(const HTMLButtonElement&);
void IsHTMLButtonElement(const HTMLButtonElement*);

inline bool IsHTMLButtonElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kButtonTag);
}
inline bool IsHTMLButtonElement(const HTMLElement* element) {
  return element && IsHTMLButtonElement(*element);
}
inline bool IsHTMLButtonElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLButtonElement(ToHTMLElement(node));
}
inline bool IsHTMLButtonElement(const Node* node) {
  return node && IsHTMLButtonElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLButtonElement>(const Node& node) {
  return IsHTMLButtonElement(node);
}
template <>
inline bool IsElementOfType<const HTMLButtonElement>(const HTMLElement& element) {
  return IsHTMLButtonElement(element);
}

class HTMLCanvasElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLCanvasElement(const HTMLCanvasElement&);
void IsHTMLCanvasElement(const HTMLCanvasElement*);

inline bool IsHTMLCanvasElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kCanvasTag);
}
inline bool IsHTMLCanvasElement(const HTMLElement* element) {
  return element && IsHTMLCanvasElement(*element);
}
inline bool IsHTMLCanvasElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLCanvasElement(ToHTMLElement(node));
}
inline bool IsHTMLCanvasElement(const Node* node) {
  return node && IsHTMLCanvasElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLCanvasElement>(const Node& node) {
  return IsHTMLCanvasElement(node);
}
template <>
inline bool IsElementOfType<const HTMLCanvasElement>(const HTMLElement& element) {
  return IsHTMLCanvasElement(element);
}

class HTMLContentElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLContentElement(const HTMLContentElement&);
void IsHTMLContentElement(const HTMLContentElement*);

inline bool IsHTMLContentElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kContentTag);
}
inline bool IsHTMLContentElement(const HTMLElement* element) {
  return element && IsHTMLContentElement(*element);
}
inline bool IsHTMLContentElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLContentElement(ToHTMLElement(node));
}
inline bool IsHTMLContentElement(const Node* node) {
  return node && IsHTMLContentElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLContentElement>(const Node& node) {
  return IsHTMLContentElement(node);
}
template <>
inline bool IsElementOfType<const HTMLContentElement>(const HTMLElement& element) {
  return IsHTMLContentElement(element);
}

class HTMLDListElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDListElement(const HTMLDListElement&);
void IsHTMLDListElement(const HTMLDListElement*);

inline bool IsHTMLDListElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDlTag);
}
inline bool IsHTMLDListElement(const HTMLElement* element) {
  return element && IsHTMLDListElement(*element);
}
inline bool IsHTMLDListElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDListElement(ToHTMLElement(node));
}
inline bool IsHTMLDListElement(const Node* node) {
  return node && IsHTMLDListElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDListElement>(const Node& node) {
  return IsHTMLDListElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDListElement>(const HTMLElement& element) {
  return IsHTMLDListElement(element);
}

class HTMLDataElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDataElement(const HTMLDataElement&);
void IsHTMLDataElement(const HTMLDataElement*);

inline bool IsHTMLDataElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDataTag);
}
inline bool IsHTMLDataElement(const HTMLElement* element) {
  return element && IsHTMLDataElement(*element);
}
inline bool IsHTMLDataElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDataElement(ToHTMLElement(node));
}
inline bool IsHTMLDataElement(const Node* node) {
  return node && IsHTMLDataElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDataElement>(const Node& node) {
  return IsHTMLDataElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDataElement>(const HTMLElement& element) {
  return IsHTMLDataElement(element);
}

class HTMLDataListElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDataListElement(const HTMLDataListElement&);
void IsHTMLDataListElement(const HTMLDataListElement*);

inline bool IsHTMLDataListElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDatalistTag);
}
inline bool IsHTMLDataListElement(const HTMLElement* element) {
  return element && IsHTMLDataListElement(*element);
}
inline bool IsHTMLDataListElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDataListElement(ToHTMLElement(node));
}
inline bool IsHTMLDataListElement(const Node* node) {
  return node && IsHTMLDataListElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDataListElement>(const Node& node) {
  return IsHTMLDataListElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDataListElement>(const HTMLElement& element) {
  return IsHTMLDataListElement(element);
}

class HTMLDetailsElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDetailsElement(const HTMLDetailsElement&);
void IsHTMLDetailsElement(const HTMLDetailsElement*);

inline bool IsHTMLDetailsElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDetailsTag);
}
inline bool IsHTMLDetailsElement(const HTMLElement* element) {
  return element && IsHTMLDetailsElement(*element);
}
inline bool IsHTMLDetailsElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDetailsElement(ToHTMLElement(node));
}
inline bool IsHTMLDetailsElement(const Node* node) {
  return node && IsHTMLDetailsElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDetailsElement>(const Node& node) {
  return IsHTMLDetailsElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDetailsElement>(const HTMLElement& element) {
  return IsHTMLDetailsElement(element);
}

class HTMLDialogElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDialogElement(const HTMLDialogElement&);
void IsHTMLDialogElement(const HTMLDialogElement*);

inline bool IsHTMLDialogElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDialogTag);
}
inline bool IsHTMLDialogElement(const HTMLElement* element) {
  return element && IsHTMLDialogElement(*element);
}
inline bool IsHTMLDialogElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDialogElement(ToHTMLElement(node));
}
inline bool IsHTMLDialogElement(const Node* node) {
  return node && IsHTMLDialogElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDialogElement>(const Node& node) {
  return IsHTMLDialogElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDialogElement>(const HTMLElement& element) {
  return IsHTMLDialogElement(element);
}

class HTMLDirectoryElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDirectoryElement(const HTMLDirectoryElement&);
void IsHTMLDirectoryElement(const HTMLDirectoryElement*);

inline bool IsHTMLDirectoryElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDirTag);
}
inline bool IsHTMLDirectoryElement(const HTMLElement* element) {
  return element && IsHTMLDirectoryElement(*element);
}
inline bool IsHTMLDirectoryElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDirectoryElement(ToHTMLElement(node));
}
inline bool IsHTMLDirectoryElement(const Node* node) {
  return node && IsHTMLDirectoryElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDirectoryElement>(const Node& node) {
  return IsHTMLDirectoryElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDirectoryElement>(const HTMLElement& element) {
  return IsHTMLDirectoryElement(element);
}

class HTMLDivElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLDivElement(const HTMLDivElement&);
void IsHTMLDivElement(const HTMLDivElement*);

inline bool IsHTMLDivElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kDivTag);
}
inline bool IsHTMLDivElement(const HTMLElement* element) {
  return element && IsHTMLDivElement(*element);
}
inline bool IsHTMLDivElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLDivElement(ToHTMLElement(node));
}
inline bool IsHTMLDivElement(const Node* node) {
  return node && IsHTMLDivElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLDivElement>(const Node& node) {
  return IsHTMLDivElement(node);
}
template <>
inline bool IsElementOfType<const HTMLDivElement>(const HTMLElement& element) {
  return IsHTMLDivElement(element);
}

class HTMLFieldSetElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLFieldSetElement(const HTMLFieldSetElement&);
void IsHTMLFieldSetElement(const HTMLFieldSetElement*);

inline bool IsHTMLFieldSetElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kFieldsetTag);
}
inline bool IsHTMLFieldSetElement(const HTMLElement* element) {
  return element && IsHTMLFieldSetElement(*element);
}
inline bool IsHTMLFieldSetElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLFieldSetElement(ToHTMLElement(node));
}
inline bool IsHTMLFieldSetElement(const Node* node) {
  return node && IsHTMLFieldSetElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLFieldSetElement>(const Node& node) {
  return IsHTMLFieldSetElement(node);
}
template <>
inline bool IsElementOfType<const HTMLFieldSetElement>(const HTMLElement& element) {
  return IsHTMLFieldSetElement(element);
}

class HTMLFontElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLFontElement(const HTMLFontElement&);
void IsHTMLFontElement(const HTMLFontElement*);

inline bool IsHTMLFontElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kFontTag);
}
inline bool IsHTMLFontElement(const HTMLElement* element) {
  return element && IsHTMLFontElement(*element);
}
inline bool IsHTMLFontElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLFontElement(ToHTMLElement(node));
}
inline bool IsHTMLFontElement(const Node* node) {
  return node && IsHTMLFontElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLFontElement>(const Node& node) {
  return IsHTMLFontElement(node);
}
template <>
inline bool IsElementOfType<const HTMLFontElement>(const HTMLElement& element) {
  return IsHTMLFontElement(element);
}

class HTMLFormElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLFormElement(const HTMLFormElement&);
void IsHTMLFormElement(const HTMLFormElement*);

inline bool IsHTMLFormElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kFormTag);
}
inline bool IsHTMLFormElement(const HTMLElement* element) {
  return element && IsHTMLFormElement(*element);
}
inline bool IsHTMLFormElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLFormElement(ToHTMLElement(node));
}
inline bool IsHTMLFormElement(const Node* node) {
  return node && IsHTMLFormElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLFormElement>(const Node& node) {
  return IsHTMLFormElement(node);
}
template <>
inline bool IsElementOfType<const HTMLFormElement>(const HTMLElement& element) {
  return IsHTMLFormElement(element);
}

class HTMLFrameElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLFrameElement(const HTMLFrameElement&);
void IsHTMLFrameElement(const HTMLFrameElement*);

inline bool IsHTMLFrameElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kFrameTag);
}
inline bool IsHTMLFrameElement(const HTMLElement* element) {
  return element && IsHTMLFrameElement(*element);
}
inline bool IsHTMLFrameElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLFrameElement(ToHTMLElement(node));
}
inline bool IsHTMLFrameElement(const Node* node) {
  return node && IsHTMLFrameElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLFrameElement>(const Node& node) {
  return IsHTMLFrameElement(node);
}
template <>
inline bool IsElementOfType<const HTMLFrameElement>(const HTMLElement& element) {
  return IsHTMLFrameElement(element);
}

class HTMLFrameSetElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLFrameSetElement(const HTMLFrameSetElement&);
void IsHTMLFrameSetElement(const HTMLFrameSetElement*);

inline bool IsHTMLFrameSetElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kFramesetTag);
}
inline bool IsHTMLFrameSetElement(const HTMLElement* element) {
  return element && IsHTMLFrameSetElement(*element);
}
inline bool IsHTMLFrameSetElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLFrameSetElement(ToHTMLElement(node));
}
inline bool IsHTMLFrameSetElement(const Node* node) {
  return node && IsHTMLFrameSetElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLFrameSetElement>(const Node& node) {
  return IsHTMLFrameSetElement(node);
}
template <>
inline bool IsElementOfType<const HTMLFrameSetElement>(const HTMLElement& element) {
  return IsHTMLFrameSetElement(element);
}

class HTMLHRElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLHRElement(const HTMLHRElement&);
void IsHTMLHRElement(const HTMLHRElement*);

inline bool IsHTMLHRElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kHrTag);
}
inline bool IsHTMLHRElement(const HTMLElement* element) {
  return element && IsHTMLHRElement(*element);
}
inline bool IsHTMLHRElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLHRElement(ToHTMLElement(node));
}
inline bool IsHTMLHRElement(const Node* node) {
  return node && IsHTMLHRElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLHRElement>(const Node& node) {
  return IsHTMLHRElement(node);
}
template <>
inline bool IsElementOfType<const HTMLHRElement>(const HTMLElement& element) {
  return IsHTMLHRElement(element);
}

class HTMLHeadElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLHeadElement(const HTMLHeadElement&);
void IsHTMLHeadElement(const HTMLHeadElement*);

inline bool IsHTMLHeadElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kHeadTag);
}
inline bool IsHTMLHeadElement(const HTMLElement* element) {
  return element && IsHTMLHeadElement(*element);
}
inline bool IsHTMLHeadElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLHeadElement(ToHTMLElement(node));
}
inline bool IsHTMLHeadElement(const Node* node) {
  return node && IsHTMLHeadElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLHeadElement>(const Node& node) {
  return IsHTMLHeadElement(node);
}
template <>
inline bool IsElementOfType<const HTMLHeadElement>(const HTMLElement& element) {
  return IsHTMLHeadElement(element);
}

class HTMLHtmlElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLHtmlElement(const HTMLHtmlElement&);
void IsHTMLHtmlElement(const HTMLHtmlElement*);

inline bool IsHTMLHtmlElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kHTMLTag);
}
inline bool IsHTMLHtmlElement(const HTMLElement* element) {
  return element && IsHTMLHtmlElement(*element);
}
inline bool IsHTMLHtmlElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLHtmlElement(ToHTMLElement(node));
}
inline bool IsHTMLHtmlElement(const Node* node) {
  return node && IsHTMLHtmlElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLHtmlElement>(const Node& node) {
  return IsHTMLHtmlElement(node);
}
template <>
inline bool IsElementOfType<const HTMLHtmlElement>(const HTMLElement& element) {
  return IsHTMLHtmlElement(element);
}

class HTMLIFrameElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLIFrameElement(const HTMLIFrameElement&);
void IsHTMLIFrameElement(const HTMLIFrameElement*);

inline bool IsHTMLIFrameElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kIFrameTag);
}
inline bool IsHTMLIFrameElement(const HTMLElement* element) {
  return element && IsHTMLIFrameElement(*element);
}
inline bool IsHTMLIFrameElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLIFrameElement(ToHTMLElement(node));
}
inline bool IsHTMLIFrameElement(const Node* node) {
  return node && IsHTMLIFrameElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLIFrameElement>(const Node& node) {
  return IsHTMLIFrameElement(node);
}
template <>
inline bool IsElementOfType<const HTMLIFrameElement>(const HTMLElement& element) {
  return IsHTMLIFrameElement(element);
}

class HTMLLIElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLLIElement(const HTMLLIElement&);
void IsHTMLLIElement(const HTMLLIElement*);

inline bool IsHTMLLIElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kLiTag);
}
inline bool IsHTMLLIElement(const HTMLElement* element) {
  return element && IsHTMLLIElement(*element);
}
inline bool IsHTMLLIElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLLIElement(ToHTMLElement(node));
}
inline bool IsHTMLLIElement(const Node* node) {
  return node && IsHTMLLIElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLLIElement>(const Node& node) {
  return IsHTMLLIElement(node);
}
template <>
inline bool IsElementOfType<const HTMLLIElement>(const HTMLElement& element) {
  return IsHTMLLIElement(element);
}

class HTMLLabelElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLLabelElement(const HTMLLabelElement&);
void IsHTMLLabelElement(const HTMLLabelElement*);

inline bool IsHTMLLabelElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kLabelTag);
}
inline bool IsHTMLLabelElement(const HTMLElement* element) {
  return element && IsHTMLLabelElement(*element);
}
inline bool IsHTMLLabelElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLLabelElement(ToHTMLElement(node));
}
inline bool IsHTMLLabelElement(const Node* node) {
  return node && IsHTMLLabelElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLLabelElement>(const Node& node) {
  return IsHTMLLabelElement(node);
}
template <>
inline bool IsElementOfType<const HTMLLabelElement>(const HTMLElement& element) {
  return IsHTMLLabelElement(element);
}

class HTMLLegendElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLLegendElement(const HTMLLegendElement&);
void IsHTMLLegendElement(const HTMLLegendElement*);

inline bool IsHTMLLegendElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kLegendTag);
}
inline bool IsHTMLLegendElement(const HTMLElement* element) {
  return element && IsHTMLLegendElement(*element);
}
inline bool IsHTMLLegendElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLLegendElement(ToHTMLElement(node));
}
inline bool IsHTMLLegendElement(const Node* node) {
  return node && IsHTMLLegendElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLLegendElement>(const Node& node) {
  return IsHTMLLegendElement(node);
}
template <>
inline bool IsElementOfType<const HTMLLegendElement>(const HTMLElement& element) {
  return IsHTMLLegendElement(element);
}

class HTMLMapElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLMapElement(const HTMLMapElement&);
void IsHTMLMapElement(const HTMLMapElement*);

inline bool IsHTMLMapElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kMapTag);
}
inline bool IsHTMLMapElement(const HTMLElement* element) {
  return element && IsHTMLMapElement(*element);
}
inline bool IsHTMLMapElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLMapElement(ToHTMLElement(node));
}
inline bool IsHTMLMapElement(const Node* node) {
  return node && IsHTMLMapElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLMapElement>(const Node& node) {
  return IsHTMLMapElement(node);
}
template <>
inline bool IsElementOfType<const HTMLMapElement>(const HTMLElement& element) {
  return IsHTMLMapElement(element);
}

class HTMLMarqueeElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLMarqueeElement(const HTMLMarqueeElement&);
void IsHTMLMarqueeElement(const HTMLMarqueeElement*);

inline bool IsHTMLMarqueeElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kMarqueeTag);
}
inline bool IsHTMLMarqueeElement(const HTMLElement* element) {
  return element && IsHTMLMarqueeElement(*element);
}
inline bool IsHTMLMarqueeElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLMarqueeElement(ToHTMLElement(node));
}
inline bool IsHTMLMarqueeElement(const Node* node) {
  return node && IsHTMLMarqueeElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLMarqueeElement>(const Node& node) {
  return IsHTMLMarqueeElement(node);
}
template <>
inline bool IsElementOfType<const HTMLMarqueeElement>(const HTMLElement& element) {
  return IsHTMLMarqueeElement(element);
}

class HTMLMenuElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLMenuElement(const HTMLMenuElement&);
void IsHTMLMenuElement(const HTMLMenuElement*);

inline bool IsHTMLMenuElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kMenuTag);
}
inline bool IsHTMLMenuElement(const HTMLElement* element) {
  return element && IsHTMLMenuElement(*element);
}
inline bool IsHTMLMenuElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLMenuElement(ToHTMLElement(node));
}
inline bool IsHTMLMenuElement(const Node* node) {
  return node && IsHTMLMenuElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLMenuElement>(const Node& node) {
  return IsHTMLMenuElement(node);
}
template <>
inline bool IsElementOfType<const HTMLMenuElement>(const HTMLElement& element) {
  return IsHTMLMenuElement(element);
}

class HTMLMetaElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLMetaElement(const HTMLMetaElement&);
void IsHTMLMetaElement(const HTMLMetaElement*);

inline bool IsHTMLMetaElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kMetaTag);
}
inline bool IsHTMLMetaElement(const HTMLElement* element) {
  return element && IsHTMLMetaElement(*element);
}
inline bool IsHTMLMetaElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLMetaElement(ToHTMLElement(node));
}
inline bool IsHTMLMetaElement(const Node* node) {
  return node && IsHTMLMetaElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLMetaElement>(const Node& node) {
  return IsHTMLMetaElement(node);
}
template <>
inline bool IsElementOfType<const HTMLMetaElement>(const HTMLElement& element) {
  return IsHTMLMetaElement(element);
}

class HTMLMeterElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLMeterElement(const HTMLMeterElement&);
void IsHTMLMeterElement(const HTMLMeterElement*);

inline bool IsHTMLMeterElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kMeterTag);
}
inline bool IsHTMLMeterElement(const HTMLElement* element) {
  return element && IsHTMLMeterElement(*element);
}
inline bool IsHTMLMeterElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLMeterElement(ToHTMLElement(node));
}
inline bool IsHTMLMeterElement(const Node* node) {
  return node && IsHTMLMeterElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLMeterElement>(const Node& node) {
  return IsHTMLMeterElement(node);
}
template <>
inline bool IsElementOfType<const HTMLMeterElement>(const HTMLElement& element) {
  return IsHTMLMeterElement(element);
}

class HTMLOListElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLOListElement(const HTMLOListElement&);
void IsHTMLOListElement(const HTMLOListElement*);

inline bool IsHTMLOListElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kOlTag);
}
inline bool IsHTMLOListElement(const HTMLElement* element) {
  return element && IsHTMLOListElement(*element);
}
inline bool IsHTMLOListElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLOListElement(ToHTMLElement(node));
}
inline bool IsHTMLOListElement(const Node* node) {
  return node && IsHTMLOListElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLOListElement>(const Node& node) {
  return IsHTMLOListElement(node);
}
template <>
inline bool IsElementOfType<const HTMLOListElement>(const HTMLElement& element) {
  return IsHTMLOListElement(element);
}

class HTMLOptGroupElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLOptGroupElement(const HTMLOptGroupElement&);
void IsHTMLOptGroupElement(const HTMLOptGroupElement*);

inline bool IsHTMLOptGroupElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kOptgroupTag);
}
inline bool IsHTMLOptGroupElement(const HTMLElement* element) {
  return element && IsHTMLOptGroupElement(*element);
}
inline bool IsHTMLOptGroupElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLOptGroupElement(ToHTMLElement(node));
}
inline bool IsHTMLOptGroupElement(const Node* node) {
  return node && IsHTMLOptGroupElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLOptGroupElement>(const Node& node) {
  return IsHTMLOptGroupElement(node);
}
template <>
inline bool IsElementOfType<const HTMLOptGroupElement>(const HTMLElement& element) {
  return IsHTMLOptGroupElement(element);
}

class HTMLOptionElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLOptionElement(const HTMLOptionElement&);
void IsHTMLOptionElement(const HTMLOptionElement*);

inline bool IsHTMLOptionElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kOptionTag);
}
inline bool IsHTMLOptionElement(const HTMLElement* element) {
  return element && IsHTMLOptionElement(*element);
}
inline bool IsHTMLOptionElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLOptionElement(ToHTMLElement(node));
}
inline bool IsHTMLOptionElement(const Node* node) {
  return node && IsHTMLOptionElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLOptionElement>(const Node& node) {
  return IsHTMLOptionElement(node);
}
template <>
inline bool IsElementOfType<const HTMLOptionElement>(const HTMLElement& element) {
  return IsHTMLOptionElement(element);
}

class HTMLOutputElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLOutputElement(const HTMLOutputElement&);
void IsHTMLOutputElement(const HTMLOutputElement*);

inline bool IsHTMLOutputElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kOutputTag);
}
inline bool IsHTMLOutputElement(const HTMLElement* element) {
  return element && IsHTMLOutputElement(*element);
}
inline bool IsHTMLOutputElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLOutputElement(ToHTMLElement(node));
}
inline bool IsHTMLOutputElement(const Node* node) {
  return node && IsHTMLOutputElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLOutputElement>(const Node& node) {
  return IsHTMLOutputElement(node);
}
template <>
inline bool IsElementOfType<const HTMLOutputElement>(const HTMLElement& element) {
  return IsHTMLOutputElement(element);
}

class HTMLParagraphElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLParagraphElement(const HTMLParagraphElement&);
void IsHTMLParagraphElement(const HTMLParagraphElement*);

inline bool IsHTMLParagraphElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kPTag);
}
inline bool IsHTMLParagraphElement(const HTMLElement* element) {
  return element && IsHTMLParagraphElement(*element);
}
inline bool IsHTMLParagraphElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLParagraphElement(ToHTMLElement(node));
}
inline bool IsHTMLParagraphElement(const Node* node) {
  return node && IsHTMLParagraphElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLParagraphElement>(const Node& node) {
  return IsHTMLParagraphElement(node);
}
template <>
inline bool IsElementOfType<const HTMLParagraphElement>(const HTMLElement& element) {
  return IsHTMLParagraphElement(element);
}

class HTMLParamElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLParamElement(const HTMLParamElement&);
void IsHTMLParamElement(const HTMLParamElement*);

inline bool IsHTMLParamElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kParamTag);
}
inline bool IsHTMLParamElement(const HTMLElement* element) {
  return element && IsHTMLParamElement(*element);
}
inline bool IsHTMLParamElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLParamElement(ToHTMLElement(node));
}
inline bool IsHTMLParamElement(const Node* node) {
  return node && IsHTMLParamElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLParamElement>(const Node& node) {
  return IsHTMLParamElement(node);
}
template <>
inline bool IsElementOfType<const HTMLParamElement>(const HTMLElement& element) {
  return IsHTMLParamElement(element);
}

class HTMLPictureElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLPictureElement(const HTMLPictureElement&);
void IsHTMLPictureElement(const HTMLPictureElement*);

inline bool IsHTMLPictureElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kPictureTag);
}
inline bool IsHTMLPictureElement(const HTMLElement* element) {
  return element && IsHTMLPictureElement(*element);
}
inline bool IsHTMLPictureElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLPictureElement(ToHTMLElement(node));
}
inline bool IsHTMLPictureElement(const Node* node) {
  return node && IsHTMLPictureElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLPictureElement>(const Node& node) {
  return IsHTMLPictureElement(node);
}
template <>
inline bool IsElementOfType<const HTMLPictureElement>(const HTMLElement& element) {
  return IsHTMLPictureElement(element);
}

class HTMLPortalElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLPortalElement(const HTMLPortalElement&);
void IsHTMLPortalElement(const HTMLPortalElement*);

inline bool IsHTMLPortalElement(const HTMLElement& element) {
  if (!RuntimeEnabledFeatures::PortalsEnabled())
    return false;
  return element.HasTagName(html_names::kPortalTag);
}
inline bool IsHTMLPortalElement(const HTMLElement* element) {
  return element && IsHTMLPortalElement(*element);
}
inline bool IsHTMLPortalElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLPortalElement(ToHTMLElement(node));
}
inline bool IsHTMLPortalElement(const Node* node) {
  return node && IsHTMLPortalElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLPortalElement>(const Node& node) {
  return IsHTMLPortalElement(node);
}
template <>
inline bool IsElementOfType<const HTMLPortalElement>(const HTMLElement& element) {
  return IsHTMLPortalElement(element);
}

class HTMLProgressElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLProgressElement(const HTMLProgressElement&);
void IsHTMLProgressElement(const HTMLProgressElement*);

inline bool IsHTMLProgressElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kProgressTag);
}
inline bool IsHTMLProgressElement(const HTMLElement* element) {
  return element && IsHTMLProgressElement(*element);
}
inline bool IsHTMLProgressElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLProgressElement(ToHTMLElement(node));
}
inline bool IsHTMLProgressElement(const Node* node) {
  return node && IsHTMLProgressElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLProgressElement>(const Node& node) {
  return IsHTMLProgressElement(node);
}
template <>
inline bool IsElementOfType<const HTMLProgressElement>(const HTMLElement& element) {
  return IsHTMLProgressElement(element);
}

class HTMLSelectElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLSelectElement(const HTMLSelectElement&);
void IsHTMLSelectElement(const HTMLSelectElement*);

inline bool IsHTMLSelectElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kSelectTag);
}
inline bool IsHTMLSelectElement(const HTMLElement* element) {
  return element && IsHTMLSelectElement(*element);
}
inline bool IsHTMLSelectElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLSelectElement(ToHTMLElement(node));
}
inline bool IsHTMLSelectElement(const Node* node) {
  return node && IsHTMLSelectElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLSelectElement>(const Node& node) {
  return IsHTMLSelectElement(node);
}
template <>
inline bool IsElementOfType<const HTMLSelectElement>(const HTMLElement& element) {
  return IsHTMLSelectElement(element);
}

class HTMLShadowElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLShadowElement(const HTMLShadowElement&);
void IsHTMLShadowElement(const HTMLShadowElement*);

inline bool IsHTMLShadowElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kShadowTag);
}
inline bool IsHTMLShadowElement(const HTMLElement* element) {
  return element && IsHTMLShadowElement(*element);
}
inline bool IsHTMLShadowElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLShadowElement(ToHTMLElement(node));
}
inline bool IsHTMLShadowElement(const Node* node) {
  return node && IsHTMLShadowElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLShadowElement>(const Node& node) {
  return IsHTMLShadowElement(node);
}
template <>
inline bool IsElementOfType<const HTMLShadowElement>(const HTMLElement& element) {
  return IsHTMLShadowElement(element);
}

class HTMLSlotElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLSlotElement(const HTMLSlotElement&);
void IsHTMLSlotElement(const HTMLSlotElement*);

inline bool IsHTMLSlotElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kSlotTag);
}
inline bool IsHTMLSlotElement(const HTMLElement* element) {
  return element && IsHTMLSlotElement(*element);
}
inline bool IsHTMLSlotElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLSlotElement(ToHTMLElement(node));
}
inline bool IsHTMLSlotElement(const Node* node) {
  return node && IsHTMLSlotElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLSlotElement>(const Node& node) {
  return IsHTMLSlotElement(node);
}
template <>
inline bool IsElementOfType<const HTMLSlotElement>(const HTMLElement& element) {
  return IsHTMLSlotElement(element);
}

class HTMLSourceElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLSourceElement(const HTMLSourceElement&);
void IsHTMLSourceElement(const HTMLSourceElement*);

inline bool IsHTMLSourceElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kSourceTag);
}
inline bool IsHTMLSourceElement(const HTMLElement* element) {
  return element && IsHTMLSourceElement(*element);
}
inline bool IsHTMLSourceElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLSourceElement(ToHTMLElement(node));
}
inline bool IsHTMLSourceElement(const Node* node) {
  return node && IsHTMLSourceElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLSourceElement>(const Node& node) {
  return IsHTMLSourceElement(node);
}
template <>
inline bool IsElementOfType<const HTMLSourceElement>(const HTMLElement& element) {
  return IsHTMLSourceElement(element);
}

class HTMLSpanElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLSpanElement(const HTMLSpanElement&);
void IsHTMLSpanElement(const HTMLSpanElement*);

inline bool IsHTMLSpanElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kSpanTag);
}
inline bool IsHTMLSpanElement(const HTMLElement* element) {
  return element && IsHTMLSpanElement(*element);
}
inline bool IsHTMLSpanElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLSpanElement(ToHTMLElement(node));
}
inline bool IsHTMLSpanElement(const Node* node) {
  return node && IsHTMLSpanElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLSpanElement>(const Node& node) {
  return IsHTMLSpanElement(node);
}
template <>
inline bool IsElementOfType<const HTMLSpanElement>(const HTMLElement& element) {
  return IsHTMLSpanElement(element);
}

class HTMLTableCaptionElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTableCaptionElement(const HTMLTableCaptionElement&);
void IsHTMLTableCaptionElement(const HTMLTableCaptionElement*);

inline bool IsHTMLTableCaptionElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kCaptionTag);
}
inline bool IsHTMLTableCaptionElement(const HTMLElement* element) {
  return element && IsHTMLTableCaptionElement(*element);
}
inline bool IsHTMLTableCaptionElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTableCaptionElement(ToHTMLElement(node));
}
inline bool IsHTMLTableCaptionElement(const Node* node) {
  return node && IsHTMLTableCaptionElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTableCaptionElement>(const Node& node) {
  return IsHTMLTableCaptionElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTableCaptionElement>(const HTMLElement& element) {
  return IsHTMLTableCaptionElement(element);
}

class HTMLTableElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTableElement(const HTMLTableElement&);
void IsHTMLTableElement(const HTMLTableElement*);

inline bool IsHTMLTableElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTableTag);
}
inline bool IsHTMLTableElement(const HTMLElement* element) {
  return element && IsHTMLTableElement(*element);
}
inline bool IsHTMLTableElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTableElement(ToHTMLElement(node));
}
inline bool IsHTMLTableElement(const Node* node) {
  return node && IsHTMLTableElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTableElement>(const Node& node) {
  return IsHTMLTableElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTableElement>(const HTMLElement& element) {
  return IsHTMLTableElement(element);
}

class HTMLTableRowElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTableRowElement(const HTMLTableRowElement&);
void IsHTMLTableRowElement(const HTMLTableRowElement*);

inline bool IsHTMLTableRowElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTrTag);
}
inline bool IsHTMLTableRowElement(const HTMLElement* element) {
  return element && IsHTMLTableRowElement(*element);
}
inline bool IsHTMLTableRowElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTableRowElement(ToHTMLElement(node));
}
inline bool IsHTMLTableRowElement(const Node* node) {
  return node && IsHTMLTableRowElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTableRowElement>(const Node& node) {
  return IsHTMLTableRowElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTableRowElement>(const HTMLElement& element) {
  return IsHTMLTableRowElement(element);
}

class HTMLTemplateElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTemplateElement(const HTMLTemplateElement&);
void IsHTMLTemplateElement(const HTMLTemplateElement*);

inline bool IsHTMLTemplateElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTemplateTag);
}
inline bool IsHTMLTemplateElement(const HTMLElement* element) {
  return element && IsHTMLTemplateElement(*element);
}
inline bool IsHTMLTemplateElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTemplateElement(ToHTMLElement(node));
}
inline bool IsHTMLTemplateElement(const Node* node) {
  return node && IsHTMLTemplateElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTemplateElement>(const Node& node) {
  return IsHTMLTemplateElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTemplateElement>(const HTMLElement& element) {
  return IsHTMLTemplateElement(element);
}

class HTMLTextAreaElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTextAreaElement(const HTMLTextAreaElement&);
void IsHTMLTextAreaElement(const HTMLTextAreaElement*);

inline bool IsHTMLTextAreaElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTextareaTag);
}
inline bool IsHTMLTextAreaElement(const HTMLElement* element) {
  return element && IsHTMLTextAreaElement(*element);
}
inline bool IsHTMLTextAreaElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTextAreaElement(ToHTMLElement(node));
}
inline bool IsHTMLTextAreaElement(const Node* node) {
  return node && IsHTMLTextAreaElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTextAreaElement>(const Node& node) {
  return IsHTMLTextAreaElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTextAreaElement>(const HTMLElement& element) {
  return IsHTMLTextAreaElement(element);
}

class HTMLTimeElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTimeElement(const HTMLTimeElement&);
void IsHTMLTimeElement(const HTMLTimeElement*);

inline bool IsHTMLTimeElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTimeTag);
}
inline bool IsHTMLTimeElement(const HTMLElement* element) {
  return element && IsHTMLTimeElement(*element);
}
inline bool IsHTMLTimeElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTimeElement(ToHTMLElement(node));
}
inline bool IsHTMLTimeElement(const Node* node) {
  return node && IsHTMLTimeElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTimeElement>(const Node& node) {
  return IsHTMLTimeElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTimeElement>(const HTMLElement& element) {
  return IsHTMLTimeElement(element);
}

class HTMLTitleElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTitleElement(const HTMLTitleElement&);
void IsHTMLTitleElement(const HTMLTitleElement*);

inline bool IsHTMLTitleElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTitleTag);
}
inline bool IsHTMLTitleElement(const HTMLElement* element) {
  return element && IsHTMLTitleElement(*element);
}
inline bool IsHTMLTitleElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTitleElement(ToHTMLElement(node));
}
inline bool IsHTMLTitleElement(const Node* node) {
  return node && IsHTMLTitleElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTitleElement>(const Node& node) {
  return IsHTMLTitleElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTitleElement>(const HTMLElement& element) {
  return IsHTMLTitleElement(element);
}

class HTMLTrackElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLTrackElement(const HTMLTrackElement&);
void IsHTMLTrackElement(const HTMLTrackElement*);

inline bool IsHTMLTrackElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kTrackTag);
}
inline bool IsHTMLTrackElement(const HTMLElement* element) {
  return element && IsHTMLTrackElement(*element);
}
inline bool IsHTMLTrackElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLTrackElement(ToHTMLElement(node));
}
inline bool IsHTMLTrackElement(const Node* node) {
  return node && IsHTMLTrackElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLTrackElement>(const Node& node) {
  return IsHTMLTrackElement(node);
}
template <>
inline bool IsElementOfType<const HTMLTrackElement>(const HTMLElement& element) {
  return IsHTMLTrackElement(element);
}

class HTMLUListElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLUListElement(const HTMLUListElement&);
void IsHTMLUListElement(const HTMLUListElement*);

inline bool IsHTMLUListElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kUlTag);
}
inline bool IsHTMLUListElement(const HTMLElement* element) {
  return element && IsHTMLUListElement(*element);
}
inline bool IsHTMLUListElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLUListElement(ToHTMLElement(node));
}
inline bool IsHTMLUListElement(const Node* node) {
  return node && IsHTMLUListElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLUListElement>(const Node& node) {
  return IsHTMLUListElement(node);
}
template <>
inline bool IsElementOfType<const HTMLUListElement>(const HTMLElement& element) {
  return IsHTMLUListElement(element);
}

class HTMLVideoElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLVideoElement(const HTMLVideoElement&);
void IsHTMLVideoElement(const HTMLVideoElement*);

inline bool IsHTMLVideoElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kVideoTag);
}
inline bool IsHTMLVideoElement(const HTMLElement* element) {
  return element && IsHTMLVideoElement(*element);
}
inline bool IsHTMLVideoElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLVideoElement(ToHTMLElement(node));
}
inline bool IsHTMLVideoElement(const Node* node) {
  return node && IsHTMLVideoElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLVideoElement>(const Node& node) {
  return IsHTMLVideoElement(node);
}
template <>
inline bool IsElementOfType<const HTMLVideoElement>(const HTMLElement& element) {
  return IsHTMLVideoElement(element);
}

class HTMLEmbedElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLEmbedElement(const HTMLEmbedElement&);
void IsHTMLEmbedElement(const HTMLEmbedElement*);

inline bool IsHTMLEmbedElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kEmbedTag);
}
inline bool IsHTMLEmbedElement(const HTMLElement* element) {
  return element && IsHTMLEmbedElement(*element);
}
inline bool IsHTMLEmbedElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLEmbedElement(ToHTMLElement(node));
}
inline bool IsHTMLEmbedElement(const Node* node) {
  return node && IsHTMLEmbedElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLEmbedElement>(const Node& node) {
  return IsHTMLEmbedElement(node);
}
template <>
inline bool IsElementOfType<const HTMLEmbedElement>(const HTMLElement& element) {
  return IsHTMLEmbedElement(element);
}

class HTMLImageElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLImageElement(const HTMLImageElement&);
void IsHTMLImageElement(const HTMLImageElement*);

inline bool IsHTMLImageElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kImgTag);
}
inline bool IsHTMLImageElement(const HTMLElement* element) {
  return element && IsHTMLImageElement(*element);
}
inline bool IsHTMLImageElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLImageElement(ToHTMLElement(node));
}
inline bool IsHTMLImageElement(const Node* node) {
  return node && IsHTMLImageElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLImageElement>(const Node& node) {
  return IsHTMLImageElement(node);
}
template <>
inline bool IsElementOfType<const HTMLImageElement>(const HTMLElement& element) {
  return IsHTMLImageElement(element);
}

class HTMLInputElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLInputElement(const HTMLInputElement&);
void IsHTMLInputElement(const HTMLInputElement*);

inline bool IsHTMLInputElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kInputTag);
}
inline bool IsHTMLInputElement(const HTMLElement* element) {
  return element && IsHTMLInputElement(*element);
}
inline bool IsHTMLInputElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLInputElement(ToHTMLElement(node));
}
inline bool IsHTMLInputElement(const Node* node) {
  return node && IsHTMLInputElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLInputElement>(const Node& node) {
  return IsHTMLInputElement(node);
}
template <>
inline bool IsElementOfType<const HTMLInputElement>(const HTMLElement& element) {
  return IsHTMLInputElement(element);
}

class HTMLLinkElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLLinkElement(const HTMLLinkElement&);
void IsHTMLLinkElement(const HTMLLinkElement*);

inline bool IsHTMLLinkElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kLinkTag);
}
inline bool IsHTMLLinkElement(const HTMLElement* element) {
  return element && IsHTMLLinkElement(*element);
}
inline bool IsHTMLLinkElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLLinkElement(ToHTMLElement(node));
}
inline bool IsHTMLLinkElement(const Node* node) {
  return node && IsHTMLLinkElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLLinkElement>(const Node& node) {
  return IsHTMLLinkElement(node);
}
template <>
inline bool IsElementOfType<const HTMLLinkElement>(const HTMLElement& element) {
  return IsHTMLLinkElement(element);
}

class HTMLObjectElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLObjectElement(const HTMLObjectElement&);
void IsHTMLObjectElement(const HTMLObjectElement*);

inline bool IsHTMLObjectElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kObjectTag);
}
inline bool IsHTMLObjectElement(const HTMLElement* element) {
  return element && IsHTMLObjectElement(*element);
}
inline bool IsHTMLObjectElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLObjectElement(ToHTMLElement(node));
}
inline bool IsHTMLObjectElement(const Node* node) {
  return node && IsHTMLObjectElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLObjectElement>(const Node& node) {
  return IsHTMLObjectElement(node);
}
template <>
inline bool IsElementOfType<const HTMLObjectElement>(const HTMLElement& element) {
  return IsHTMLObjectElement(element);
}

class HTMLScriptElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLScriptElement(const HTMLScriptElement&);
void IsHTMLScriptElement(const HTMLScriptElement*);

inline bool IsHTMLScriptElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kScriptTag);
}
inline bool IsHTMLScriptElement(const HTMLElement* element) {
  return element && IsHTMLScriptElement(*element);
}
inline bool IsHTMLScriptElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLScriptElement(ToHTMLElement(node));
}
inline bool IsHTMLScriptElement(const Node* node) {
  return node && IsHTMLScriptElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLScriptElement>(const Node& node) {
  return IsHTMLScriptElement(node);
}
template <>
inline bool IsElementOfType<const HTMLScriptElement>(const HTMLElement& element) {
  return IsHTMLScriptElement(element);
}

class HTMLStyleElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLStyleElement(const HTMLStyleElement&);
void IsHTMLStyleElement(const HTMLStyleElement*);

inline bool IsHTMLStyleElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kStyleTag);
}
inline bool IsHTMLStyleElement(const HTMLElement* element) {
  return element && IsHTMLStyleElement(*element);
}
inline bool IsHTMLStyleElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLStyleElement(ToHTMLElement(node));
}
inline bool IsHTMLStyleElement(const Node* node) {
  return node && IsHTMLStyleElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLStyleElement>(const Node& node) {
  return IsHTMLStyleElement(node);
}
template <>
inline bool IsElementOfType<const HTMLStyleElement>(const HTMLElement& element) {
  return IsHTMLStyleElement(element);
}

class HTMLBDIElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLBDIElement(const HTMLBDIElement&);
void IsHTMLBDIElement(const HTMLBDIElement*);

inline bool IsHTMLBDIElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kBdiTag);
}
inline bool IsHTMLBDIElement(const HTMLElement* element) {
  return element && IsHTMLBDIElement(*element);
}
inline bool IsHTMLBDIElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLBDIElement(ToHTMLElement(node));
}
inline bool IsHTMLBDIElement(const Node* node) {
  return node && IsHTMLBDIElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLBDIElement>(const Node& node) {
  return IsHTMLBDIElement(node);
}
template <>
inline bool IsElementOfType<const HTMLBDIElement>(const HTMLElement& element) {
  return IsHTMLBDIElement(element);
}

class HTMLNoEmbedElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLNoEmbedElement(const HTMLNoEmbedElement&);
void IsHTMLNoEmbedElement(const HTMLNoEmbedElement*);

inline bool IsHTMLNoEmbedElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kNoembedTag);
}
inline bool IsHTMLNoEmbedElement(const HTMLElement* element) {
  return element && IsHTMLNoEmbedElement(*element);
}
inline bool IsHTMLNoEmbedElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLNoEmbedElement(ToHTMLElement(node));
}
inline bool IsHTMLNoEmbedElement(const Node* node) {
  return node && IsHTMLNoEmbedElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLNoEmbedElement>(const Node& node) {
  return IsHTMLNoEmbedElement(node);
}
template <>
inline bool IsElementOfType<const HTMLNoEmbedElement>(const HTMLElement& element) {
  return IsHTMLNoEmbedElement(element);
}

class HTMLNoScriptElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLNoScriptElement(const HTMLNoScriptElement&);
void IsHTMLNoScriptElement(const HTMLNoScriptElement*);

inline bool IsHTMLNoScriptElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kNoscriptTag);
}
inline bool IsHTMLNoScriptElement(const HTMLElement* element) {
  return element && IsHTMLNoScriptElement(*element);
}
inline bool IsHTMLNoScriptElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLNoScriptElement(ToHTMLElement(node));
}
inline bool IsHTMLNoScriptElement(const Node* node) {
  return node && IsHTMLNoScriptElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLNoScriptElement>(const Node& node) {
  return IsHTMLNoScriptElement(node);
}
template <>
inline bool IsElementOfType<const HTMLNoScriptElement>(const HTMLElement& element) {
  return IsHTMLNoScriptElement(element);
}

class HTMLRTElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLRTElement(const HTMLRTElement&);
void IsHTMLRTElement(const HTMLRTElement*);

inline bool IsHTMLRTElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kRtTag);
}
inline bool IsHTMLRTElement(const HTMLElement* element) {
  return element && IsHTMLRTElement(*element);
}
inline bool IsHTMLRTElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLRTElement(ToHTMLElement(node));
}
inline bool IsHTMLRTElement(const Node* node) {
  return node && IsHTMLRTElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLRTElement>(const Node& node) {
  return IsHTMLRTElement(node);
}
template <>
inline bool IsElementOfType<const HTMLRTElement>(const HTMLElement& element) {
  return IsHTMLRTElement(element);
}

class HTMLRubyElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLRubyElement(const HTMLRubyElement&);
void IsHTMLRubyElement(const HTMLRubyElement*);

inline bool IsHTMLRubyElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kRubyTag);
}
inline bool IsHTMLRubyElement(const HTMLElement* element) {
  return element && IsHTMLRubyElement(*element);
}
inline bool IsHTMLRubyElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLRubyElement(ToHTMLElement(node));
}
inline bool IsHTMLRubyElement(const Node* node) {
  return node && IsHTMLRubyElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLRubyElement>(const Node& node) {
  return IsHTMLRubyElement(node);
}
template <>
inline bool IsElementOfType<const HTMLRubyElement>(const HTMLElement& element) {
  return IsHTMLRubyElement(element);
}

class HTMLSummaryElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLSummaryElement(const HTMLSummaryElement&);
void IsHTMLSummaryElement(const HTMLSummaryElement*);

inline bool IsHTMLSummaryElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kSummaryTag);
}
inline bool IsHTMLSummaryElement(const HTMLElement* element) {
  return element && IsHTMLSummaryElement(*element);
}
inline bool IsHTMLSummaryElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLSummaryElement(ToHTMLElement(node));
}
inline bool IsHTMLSummaryElement(const Node* node) {
  return node && IsHTMLSummaryElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLSummaryElement>(const Node& node) {
  return IsHTMLSummaryElement(node);
}
template <>
inline bool IsElementOfType<const HTMLSummaryElement>(const HTMLElement& element) {
  return IsHTMLSummaryElement(element);
}

class HTMLWBRElement;
// Catch unnecessary runtime check of type known at compile time.
void IsHTMLWBRElement(const HTMLWBRElement&);
void IsHTMLWBRElement(const HTMLWBRElement*);

inline bool IsHTMLWBRElement(const HTMLElement& element) {
  return element.HasTagName(html_names::kWbrTag);
}
inline bool IsHTMLWBRElement(const HTMLElement* element) {
  return element && IsHTMLWBRElement(*element);
}
inline bool IsHTMLWBRElement(const Node& node) {
  return node.IsHTMLElement() && IsHTMLWBRElement(ToHTMLElement(node));
}
inline bool IsHTMLWBRElement(const Node* node) {
  return node && IsHTMLWBRElement(*node);
}
template <>
inline bool IsElementOfType<const HTMLWBRElement>(const Node& node) {
  return IsHTMLWBRElement(node);
}
template <>
inline bool IsElementOfType<const HTMLWBRElement>(const HTMLElement& element) {
  return IsHTMLWBRElement(element);
}

// Using macros because the types are forward-declared and we don't want to use
// reinterpret_cast in the casting functions above. reinterpret_cast would be
// unsafe due to multiple inheritence.

#define ToHTMLAnchorElement(x) blink::ToElement<blink::HTMLAnchorElement>(x)
#define ToHTMLAnchorElementOrNull(x) blink::ToElementOrNull<blink::HTMLAnchorElement>(x)
#define ToHTMLAnchorElementOrDie(x) blink::ToElementOrDie<blink::HTMLAnchorElement>(x)
#define ToHTMLAreaElement(x) blink::ToElement<blink::HTMLAreaElement>(x)
#define ToHTMLAreaElementOrNull(x) blink::ToElementOrNull<blink::HTMLAreaElement>(x)
#define ToHTMLAreaElementOrDie(x) blink::ToElementOrDie<blink::HTMLAreaElement>(x)
#define ToHTMLAudioElement(x) blink::ToElement<blink::HTMLAudioElement>(x)
#define ToHTMLAudioElementOrNull(x) blink::ToElementOrNull<blink::HTMLAudioElement>(x)
#define ToHTMLAudioElementOrDie(x) blink::ToElementOrDie<blink::HTMLAudioElement>(x)
#define ToHTMLBRElement(x) blink::ToElement<blink::HTMLBRElement>(x)
#define ToHTMLBRElementOrNull(x) blink::ToElementOrNull<blink::HTMLBRElement>(x)
#define ToHTMLBRElementOrDie(x) blink::ToElementOrDie<blink::HTMLBRElement>(x)
#define ToHTMLBaseElement(x) blink::ToElement<blink::HTMLBaseElement>(x)
#define ToHTMLBaseElementOrNull(x) blink::ToElementOrNull<blink::HTMLBaseElement>(x)
#define ToHTMLBaseElementOrDie(x) blink::ToElementOrDie<blink::HTMLBaseElement>(x)
#define ToHTMLBodyElement(x) blink::ToElement<blink::HTMLBodyElement>(x)
#define ToHTMLBodyElementOrNull(x) blink::ToElementOrNull<blink::HTMLBodyElement>(x)
#define ToHTMLBodyElementOrDie(x) blink::ToElementOrDie<blink::HTMLBodyElement>(x)
#define ToHTMLButtonElement(x) blink::ToElement<blink::HTMLButtonElement>(x)
#define ToHTMLButtonElementOrNull(x) blink::ToElementOrNull<blink::HTMLButtonElement>(x)
#define ToHTMLButtonElementOrDie(x) blink::ToElementOrDie<blink::HTMLButtonElement>(x)
#define ToHTMLCanvasElement(x) blink::ToElement<blink::HTMLCanvasElement>(x)
#define ToHTMLCanvasElementOrNull(x) blink::ToElementOrNull<blink::HTMLCanvasElement>(x)
#define ToHTMLCanvasElementOrDie(x) blink::ToElementOrDie<blink::HTMLCanvasElement>(x)
#define ToHTMLContentElement(x) blink::ToElement<blink::HTMLContentElement>(x)
#define ToHTMLContentElementOrNull(x) blink::ToElementOrNull<blink::HTMLContentElement>(x)
#define ToHTMLContentElementOrDie(x) blink::ToElementOrDie<blink::HTMLContentElement>(x)
#define ToHTMLDListElement(x) blink::ToElement<blink::HTMLDListElement>(x)
#define ToHTMLDListElementOrNull(x) blink::ToElementOrNull<blink::HTMLDListElement>(x)
#define ToHTMLDListElementOrDie(x) blink::ToElementOrDie<blink::HTMLDListElement>(x)
#define ToHTMLDataElement(x) blink::ToElement<blink::HTMLDataElement>(x)
#define ToHTMLDataElementOrNull(x) blink::ToElementOrNull<blink::HTMLDataElement>(x)
#define ToHTMLDataElementOrDie(x) blink::ToElementOrDie<blink::HTMLDataElement>(x)
#define ToHTMLDataListElement(x) blink::ToElement<blink::HTMLDataListElement>(x)
#define ToHTMLDataListElementOrNull(x) blink::ToElementOrNull<blink::HTMLDataListElement>(x)
#define ToHTMLDataListElementOrDie(x) blink::ToElementOrDie<blink::HTMLDataListElement>(x)
#define ToHTMLDetailsElement(x) blink::ToElement<blink::HTMLDetailsElement>(x)
#define ToHTMLDetailsElementOrNull(x) blink::ToElementOrNull<blink::HTMLDetailsElement>(x)
#define ToHTMLDetailsElementOrDie(x) blink::ToElementOrDie<blink::HTMLDetailsElement>(x)
#define ToHTMLDialogElement(x) blink::ToElement<blink::HTMLDialogElement>(x)
#define ToHTMLDialogElementOrNull(x) blink::ToElementOrNull<blink::HTMLDialogElement>(x)
#define ToHTMLDialogElementOrDie(x) blink::ToElementOrDie<blink::HTMLDialogElement>(x)
#define ToHTMLDirectoryElement(x) blink::ToElement<blink::HTMLDirectoryElement>(x)
#define ToHTMLDirectoryElementOrNull(x) blink::ToElementOrNull<blink::HTMLDirectoryElement>(x)
#define ToHTMLDirectoryElementOrDie(x) blink::ToElementOrDie<blink::HTMLDirectoryElement>(x)
#define ToHTMLDivElement(x) blink::ToElement<blink::HTMLDivElement>(x)
#define ToHTMLDivElementOrNull(x) blink::ToElementOrNull<blink::HTMLDivElement>(x)
#define ToHTMLDivElementOrDie(x) blink::ToElementOrDie<blink::HTMLDivElement>(x)
#define ToHTMLFieldSetElement(x) blink::ToElement<blink::HTMLFieldSetElement>(x)
#define ToHTMLFieldSetElementOrNull(x) blink::ToElementOrNull<blink::HTMLFieldSetElement>(x)
#define ToHTMLFieldSetElementOrDie(x) blink::ToElementOrDie<blink::HTMLFieldSetElement>(x)
#define ToHTMLFontElement(x) blink::ToElement<blink::HTMLFontElement>(x)
#define ToHTMLFontElementOrNull(x) blink::ToElementOrNull<blink::HTMLFontElement>(x)
#define ToHTMLFontElementOrDie(x) blink::ToElementOrDie<blink::HTMLFontElement>(x)
#define ToHTMLFormElement(x) blink::ToElement<blink::HTMLFormElement>(x)
#define ToHTMLFormElementOrNull(x) blink::ToElementOrNull<blink::HTMLFormElement>(x)
#define ToHTMLFormElementOrDie(x) blink::ToElementOrDie<blink::HTMLFormElement>(x)
#define ToHTMLFrameElement(x) blink::ToElement<blink::HTMLFrameElement>(x)
#define ToHTMLFrameElementOrNull(x) blink::ToElementOrNull<blink::HTMLFrameElement>(x)
#define ToHTMLFrameElementOrDie(x) blink::ToElementOrDie<blink::HTMLFrameElement>(x)
#define ToHTMLFrameSetElement(x) blink::ToElement<blink::HTMLFrameSetElement>(x)
#define ToHTMLFrameSetElementOrNull(x) blink::ToElementOrNull<blink::HTMLFrameSetElement>(x)
#define ToHTMLFrameSetElementOrDie(x) blink::ToElementOrDie<blink::HTMLFrameSetElement>(x)
#define ToHTMLHRElement(x) blink::ToElement<blink::HTMLHRElement>(x)
#define ToHTMLHRElementOrNull(x) blink::ToElementOrNull<blink::HTMLHRElement>(x)
#define ToHTMLHRElementOrDie(x) blink::ToElementOrDie<blink::HTMLHRElement>(x)
#define ToHTMLHeadElement(x) blink::ToElement<blink::HTMLHeadElement>(x)
#define ToHTMLHeadElementOrNull(x) blink::ToElementOrNull<blink::HTMLHeadElement>(x)
#define ToHTMLHeadElementOrDie(x) blink::ToElementOrDie<blink::HTMLHeadElement>(x)
#define ToHTMLHtmlElement(x) blink::ToElement<blink::HTMLHtmlElement>(x)
#define ToHTMLHtmlElementOrNull(x) blink::ToElementOrNull<blink::HTMLHtmlElement>(x)
#define ToHTMLHtmlElementOrDie(x) blink::ToElementOrDie<blink::HTMLHtmlElement>(x)
#define ToHTMLIFrameElement(x) blink::ToElement<blink::HTMLIFrameElement>(x)
#define ToHTMLIFrameElementOrNull(x) blink::ToElementOrNull<blink::HTMLIFrameElement>(x)
#define ToHTMLIFrameElementOrDie(x) blink::ToElementOrDie<blink::HTMLIFrameElement>(x)
#define ToHTMLLIElement(x) blink::ToElement<blink::HTMLLIElement>(x)
#define ToHTMLLIElementOrNull(x) blink::ToElementOrNull<blink::HTMLLIElement>(x)
#define ToHTMLLIElementOrDie(x) blink::ToElementOrDie<blink::HTMLLIElement>(x)
#define ToHTMLLabelElement(x) blink::ToElement<blink::HTMLLabelElement>(x)
#define ToHTMLLabelElementOrNull(x) blink::ToElementOrNull<blink::HTMLLabelElement>(x)
#define ToHTMLLabelElementOrDie(x) blink::ToElementOrDie<blink::HTMLLabelElement>(x)
#define ToHTMLLegendElement(x) blink::ToElement<blink::HTMLLegendElement>(x)
#define ToHTMLLegendElementOrNull(x) blink::ToElementOrNull<blink::HTMLLegendElement>(x)
#define ToHTMLLegendElementOrDie(x) blink::ToElementOrDie<blink::HTMLLegendElement>(x)
#define ToHTMLMapElement(x) blink::ToElement<blink::HTMLMapElement>(x)
#define ToHTMLMapElementOrNull(x) blink::ToElementOrNull<blink::HTMLMapElement>(x)
#define ToHTMLMapElementOrDie(x) blink::ToElementOrDie<blink::HTMLMapElement>(x)
#define ToHTMLMarqueeElement(x) blink::ToElement<blink::HTMLMarqueeElement>(x)
#define ToHTMLMarqueeElementOrNull(x) blink::ToElementOrNull<blink::HTMLMarqueeElement>(x)
#define ToHTMLMarqueeElementOrDie(x) blink::ToElementOrDie<blink::HTMLMarqueeElement>(x)
#define ToHTMLMenuElement(x) blink::ToElement<blink::HTMLMenuElement>(x)
#define ToHTMLMenuElementOrNull(x) blink::ToElementOrNull<blink::HTMLMenuElement>(x)
#define ToHTMLMenuElementOrDie(x) blink::ToElementOrDie<blink::HTMLMenuElement>(x)
#define ToHTMLMetaElement(x) blink::ToElement<blink::HTMLMetaElement>(x)
#define ToHTMLMetaElementOrNull(x) blink::ToElementOrNull<blink::HTMLMetaElement>(x)
#define ToHTMLMetaElementOrDie(x) blink::ToElementOrDie<blink::HTMLMetaElement>(x)
#define ToHTMLMeterElement(x) blink::ToElement<blink::HTMLMeterElement>(x)
#define ToHTMLMeterElementOrNull(x) blink::ToElementOrNull<blink::HTMLMeterElement>(x)
#define ToHTMLMeterElementOrDie(x) blink::ToElementOrDie<blink::HTMLMeterElement>(x)
#define ToHTMLOListElement(x) blink::ToElement<blink::HTMLOListElement>(x)
#define ToHTMLOListElementOrNull(x) blink::ToElementOrNull<blink::HTMLOListElement>(x)
#define ToHTMLOListElementOrDie(x) blink::ToElementOrDie<blink::HTMLOListElement>(x)
#define ToHTMLOptGroupElement(x) blink::ToElement<blink::HTMLOptGroupElement>(x)
#define ToHTMLOptGroupElementOrNull(x) blink::ToElementOrNull<blink::HTMLOptGroupElement>(x)
#define ToHTMLOptGroupElementOrDie(x) blink::ToElementOrDie<blink::HTMLOptGroupElement>(x)
#define ToHTMLOptionElement(x) blink::ToElement<blink::HTMLOptionElement>(x)
#define ToHTMLOptionElementOrNull(x) blink::ToElementOrNull<blink::HTMLOptionElement>(x)
#define ToHTMLOptionElementOrDie(x) blink::ToElementOrDie<blink::HTMLOptionElement>(x)
#define ToHTMLOutputElement(x) blink::ToElement<blink::HTMLOutputElement>(x)
#define ToHTMLOutputElementOrNull(x) blink::ToElementOrNull<blink::HTMLOutputElement>(x)
#define ToHTMLOutputElementOrDie(x) blink::ToElementOrDie<blink::HTMLOutputElement>(x)
#define ToHTMLParagraphElement(x) blink::ToElement<blink::HTMLParagraphElement>(x)
#define ToHTMLParagraphElementOrNull(x) blink::ToElementOrNull<blink::HTMLParagraphElement>(x)
#define ToHTMLParagraphElementOrDie(x) blink::ToElementOrDie<blink::HTMLParagraphElement>(x)
#define ToHTMLParamElement(x) blink::ToElement<blink::HTMLParamElement>(x)
#define ToHTMLParamElementOrNull(x) blink::ToElementOrNull<blink::HTMLParamElement>(x)
#define ToHTMLParamElementOrDie(x) blink::ToElementOrDie<blink::HTMLParamElement>(x)
#define ToHTMLPictureElement(x) blink::ToElement<blink::HTMLPictureElement>(x)
#define ToHTMLPictureElementOrNull(x) blink::ToElementOrNull<blink::HTMLPictureElement>(x)
#define ToHTMLPictureElementOrDie(x) blink::ToElementOrDie<blink::HTMLPictureElement>(x)
#define ToHTMLPortalElement(x) blink::ToElement<blink::HTMLPortalElement>(x)
#define ToHTMLPortalElementOrNull(x) blink::ToElementOrNull<blink::HTMLPortalElement>(x)
#define ToHTMLPortalElementOrDie(x) blink::ToElementOrDie<blink::HTMLPortalElement>(x)
#define ToHTMLProgressElement(x) blink::ToElement<blink::HTMLProgressElement>(x)
#define ToHTMLProgressElementOrNull(x) blink::ToElementOrNull<blink::HTMLProgressElement>(x)
#define ToHTMLProgressElementOrDie(x) blink::ToElementOrDie<blink::HTMLProgressElement>(x)
#define ToHTMLSelectElement(x) blink::ToElement<blink::HTMLSelectElement>(x)
#define ToHTMLSelectElementOrNull(x) blink::ToElementOrNull<blink::HTMLSelectElement>(x)
#define ToHTMLSelectElementOrDie(x) blink::ToElementOrDie<blink::HTMLSelectElement>(x)
#define ToHTMLShadowElement(x) blink::ToElement<blink::HTMLShadowElement>(x)
#define ToHTMLShadowElementOrNull(x) blink::ToElementOrNull<blink::HTMLShadowElement>(x)
#define ToHTMLShadowElementOrDie(x) blink::ToElementOrDie<blink::HTMLShadowElement>(x)
#define ToHTMLSlotElement(x) blink::ToElement<blink::HTMLSlotElement>(x)
#define ToHTMLSlotElementOrNull(x) blink::ToElementOrNull<blink::HTMLSlotElement>(x)
#define ToHTMLSlotElementOrDie(x) blink::ToElementOrDie<blink::HTMLSlotElement>(x)
#define ToHTMLSourceElement(x) blink::ToElement<blink::HTMLSourceElement>(x)
#define ToHTMLSourceElementOrNull(x) blink::ToElementOrNull<blink::HTMLSourceElement>(x)
#define ToHTMLSourceElementOrDie(x) blink::ToElementOrDie<blink::HTMLSourceElement>(x)
#define ToHTMLSpanElement(x) blink::ToElement<blink::HTMLSpanElement>(x)
#define ToHTMLSpanElementOrNull(x) blink::ToElementOrNull<blink::HTMLSpanElement>(x)
#define ToHTMLSpanElementOrDie(x) blink::ToElementOrDie<blink::HTMLSpanElement>(x)
#define ToHTMLTableCaptionElement(x) blink::ToElement<blink::HTMLTableCaptionElement>(x)
#define ToHTMLTableCaptionElementOrNull(x) blink::ToElementOrNull<blink::HTMLTableCaptionElement>(x)
#define ToHTMLTableCaptionElementOrDie(x) blink::ToElementOrDie<blink::HTMLTableCaptionElement>(x)
#define ToHTMLTableElement(x) blink::ToElement<blink::HTMLTableElement>(x)
#define ToHTMLTableElementOrNull(x) blink::ToElementOrNull<blink::HTMLTableElement>(x)
#define ToHTMLTableElementOrDie(x) blink::ToElementOrDie<blink::HTMLTableElement>(x)
#define ToHTMLTableRowElement(x) blink::ToElement<blink::HTMLTableRowElement>(x)
#define ToHTMLTableRowElementOrNull(x) blink::ToElementOrNull<blink::HTMLTableRowElement>(x)
#define ToHTMLTableRowElementOrDie(x) blink::ToElementOrDie<blink::HTMLTableRowElement>(x)
#define ToHTMLTemplateElement(x) blink::ToElement<blink::HTMLTemplateElement>(x)
#define ToHTMLTemplateElementOrNull(x) blink::ToElementOrNull<blink::HTMLTemplateElement>(x)
#define ToHTMLTemplateElementOrDie(x) blink::ToElementOrDie<blink::HTMLTemplateElement>(x)
#define ToHTMLTextAreaElement(x) blink::ToElement<blink::HTMLTextAreaElement>(x)
#define ToHTMLTextAreaElementOrNull(x) blink::ToElementOrNull<blink::HTMLTextAreaElement>(x)
#define ToHTMLTextAreaElementOrDie(x) blink::ToElementOrDie<blink::HTMLTextAreaElement>(x)
#define ToHTMLTimeElement(x) blink::ToElement<blink::HTMLTimeElement>(x)
#define ToHTMLTimeElementOrNull(x) blink::ToElementOrNull<blink::HTMLTimeElement>(x)
#define ToHTMLTimeElementOrDie(x) blink::ToElementOrDie<blink::HTMLTimeElement>(x)
#define ToHTMLTitleElement(x) blink::ToElement<blink::HTMLTitleElement>(x)
#define ToHTMLTitleElementOrNull(x) blink::ToElementOrNull<blink::HTMLTitleElement>(x)
#define ToHTMLTitleElementOrDie(x) blink::ToElementOrDie<blink::HTMLTitleElement>(x)
#define ToHTMLTrackElement(x) blink::ToElement<blink::HTMLTrackElement>(x)
#define ToHTMLTrackElementOrNull(x) blink::ToElementOrNull<blink::HTMLTrackElement>(x)
#define ToHTMLTrackElementOrDie(x) blink::ToElementOrDie<blink::HTMLTrackElement>(x)
#define ToHTMLUListElement(x) blink::ToElement<blink::HTMLUListElement>(x)
#define ToHTMLUListElementOrNull(x) blink::ToElementOrNull<blink::HTMLUListElement>(x)
#define ToHTMLUListElementOrDie(x) blink::ToElementOrDie<blink::HTMLUListElement>(x)
#define ToHTMLVideoElement(x) blink::ToElement<blink::HTMLVideoElement>(x)
#define ToHTMLVideoElementOrNull(x) blink::ToElementOrNull<blink::HTMLVideoElement>(x)
#define ToHTMLVideoElementOrDie(x) blink::ToElementOrDie<blink::HTMLVideoElement>(x)
#define ToHTMLEmbedElement(x) blink::ToElement<blink::HTMLEmbedElement>(x)
#define ToHTMLEmbedElementOrNull(x) blink::ToElementOrNull<blink::HTMLEmbedElement>(x)
#define ToHTMLEmbedElementOrDie(x) blink::ToElementOrDie<blink::HTMLEmbedElement>(x)
#define ToHTMLImageElement(x) blink::ToElement<blink::HTMLImageElement>(x)
#define ToHTMLImageElementOrNull(x) blink::ToElementOrNull<blink::HTMLImageElement>(x)
#define ToHTMLImageElementOrDie(x) blink::ToElementOrDie<blink::HTMLImageElement>(x)
#define ToHTMLInputElement(x) blink::ToElement<blink::HTMLInputElement>(x)
#define ToHTMLInputElementOrNull(x) blink::ToElementOrNull<blink::HTMLInputElement>(x)
#define ToHTMLInputElementOrDie(x) blink::ToElementOrDie<blink::HTMLInputElement>(x)
#define ToHTMLLinkElement(x) blink::ToElement<blink::HTMLLinkElement>(x)
#define ToHTMLLinkElementOrNull(x) blink::ToElementOrNull<blink::HTMLLinkElement>(x)
#define ToHTMLLinkElementOrDie(x) blink::ToElementOrDie<blink::HTMLLinkElement>(x)
#define ToHTMLObjectElement(x) blink::ToElement<blink::HTMLObjectElement>(x)
#define ToHTMLObjectElementOrNull(x) blink::ToElementOrNull<blink::HTMLObjectElement>(x)
#define ToHTMLObjectElementOrDie(x) blink::ToElementOrDie<blink::HTMLObjectElement>(x)
#define ToHTMLScriptElement(x) blink::ToElement<blink::HTMLScriptElement>(x)
#define ToHTMLScriptElementOrNull(x) blink::ToElementOrNull<blink::HTMLScriptElement>(x)
#define ToHTMLScriptElementOrDie(x) blink::ToElementOrDie<blink::HTMLScriptElement>(x)
#define ToHTMLStyleElement(x) blink::ToElement<blink::HTMLStyleElement>(x)
#define ToHTMLStyleElementOrNull(x) blink::ToElementOrNull<blink::HTMLStyleElement>(x)
#define ToHTMLStyleElementOrDie(x) blink::ToElementOrDie<blink::HTMLStyleElement>(x)
#define ToHTMLBDIElement(x) blink::ToElement<blink::HTMLBDIElement>(x)
#define ToHTMLBDIElementOrNull(x) blink::ToElementOrNull<blink::HTMLBDIElement>(x)
#define ToHTMLBDIElementOrDie(x) blink::ToElementOrDie<blink::HTMLBDIElement>(x)
#define ToHTMLNoEmbedElement(x) blink::ToElement<blink::HTMLNoEmbedElement>(x)
#define ToHTMLNoEmbedElementOrNull(x) blink::ToElementOrNull<blink::HTMLNoEmbedElement>(x)
#define ToHTMLNoEmbedElementOrDie(x) blink::ToElementOrDie<blink::HTMLNoEmbedElement>(x)
#define ToHTMLNoScriptElement(x) blink::ToElement<blink::HTMLNoScriptElement>(x)
#define ToHTMLNoScriptElementOrNull(x) blink::ToElementOrNull<blink::HTMLNoScriptElement>(x)
#define ToHTMLNoScriptElementOrDie(x) blink::ToElementOrDie<blink::HTMLNoScriptElement>(x)
#define ToHTMLRTElement(x) blink::ToElement<blink::HTMLRTElement>(x)
#define ToHTMLRTElementOrNull(x) blink::ToElementOrNull<blink::HTMLRTElement>(x)
#define ToHTMLRTElementOrDie(x) blink::ToElementOrDie<blink::HTMLRTElement>(x)
#define ToHTMLRubyElement(x) blink::ToElement<blink::HTMLRubyElement>(x)
#define ToHTMLRubyElementOrNull(x) blink::ToElementOrNull<blink::HTMLRubyElement>(x)
#define ToHTMLRubyElementOrDie(x) blink::ToElementOrDie<blink::HTMLRubyElement>(x)
#define ToHTMLSummaryElement(x) blink::ToElement<blink::HTMLSummaryElement>(x)
#define ToHTMLSummaryElementOrNull(x) blink::ToElementOrNull<blink::HTMLSummaryElement>(x)
#define ToHTMLSummaryElementOrDie(x) blink::ToElementOrDie<blink::HTMLSummaryElement>(x)
#define ToHTMLWBRElement(x) blink::ToElement<blink::HTMLWBRElement>(x)
#define ToHTMLWBRElementOrNull(x) blink::ToElementOrNull<blink::HTMLWBRElement>(x)
#define ToHTMLWBRElementOrDie(x) blink::ToElementOrDie<blink::HTMLWBRElement>(x)


enum class HTMLElementType {
kHTMLAnchorElement,
kHTMLAreaElement,
kHTMLAudioElement,
kHTMLBaseElement,
kHTMLBodyElement,
kHTMLBRElement,
kHTMLButtonElement,
kHTMLCanvasElement,
kHTMLContentElement,
kHTMLDataElement,
kHTMLDataListElement,
kHTMLDetailsElement,
kHTMLDialogElement,
kHTMLDirectoryElement,
kHTMLDivElement,
kHTMLDListElement,
kHTMLElement,
kHTMLEmbedElement,
kHTMLFieldSetElement,
kHTMLFontElement,
kHTMLFormElement,
kHTMLFrameElement,
kHTMLFrameSetElement,
kHTMLHeadElement,
kHTMLHeadingElement,
kHTMLHRElement,
kHTMLHtmlElement,
kHTMLIFrameElement,
kHTMLImageElement,
kHTMLInputElement,
kHTMLLabelElement,
kHTMLLegendElement,
kHTMLLIElement,
kHTMLLinkElement,
kHTMLMapElement,
kHTMLMarqueeElement,
kHTMLMenuElement,
kHTMLMetaElement,
kHTMLMeterElement,
kHTMLModElement,
kHTMLObjectElement,
kHTMLOListElement,
kHTMLOptGroupElement,
kHTMLOptionElement,
kHTMLOutputElement,
kHTMLParagraphElement,
kHTMLParamElement,
kHTMLPictureElement,
kHTMLPortalElement,
kHTMLPreElement,
kHTMLProgressElement,
kHTMLQuoteElement,
kHTMLScriptElement,
kHTMLSelectElement,
kHTMLShadowElement,
kHTMLSlotElement,
kHTMLSourceElement,
kHTMLSpanElement,
kHTMLStyleElement,
kHTMLTableCaptionElement,
kHTMLTableCellElement,
kHTMLTableColElement,
kHTMLTableElement,
kHTMLTableRowElement,
kHTMLTableSectionElement,
kHTMLTemplateElement,
kHTMLTextAreaElement,
kHTMLTimeElement,
kHTMLTitleElement,
kHTMLTrackElement,
kHTMLUListElement,
kHTMLUnknownElement,
kHTMLVideoElement,
};

// Tag checking.
// tagName is the local name for an html element in lowercase
// The corresponding HTMLElement type for the tag name will be returned
// Do NOT use this function with SVG tag names and SVGElements
// If tagName is an undefined html tag name HTMLUnknownElement is returned
HTMLElementType htmlElementTypeForTag(const AtomicString& tagName);

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ELEMENT_TYPE_HELPERS_H_
