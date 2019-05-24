// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_type_helpers.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#include "third_party/blink/renderer/core/html_element_type_helpers.h"

#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/wtf/hash_map.h"
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
using HTMLTypeMap = HashMap<AtomicString, HTMLElementType>;

HTMLTypeMap CreateHTMLTypeMap() {
  HTMLTypeMap html_type_map;
  html_type_map.ReserveCapacityForSize(141);
  static constexpr struct {
    const char* name;
    HTMLElementType type;
  } kTags[] = {
    { "a", HTMLElementType::kHTMLAnchorElement },
    { "area", HTMLElementType::kHTMLAreaElement },
    { "audio", HTMLElementType::kHTMLAudioElement },
    { "br", HTMLElementType::kHTMLBRElement },
    { "base", HTMLElementType::kHTMLBaseElement },
    { "body", HTMLElementType::kHTMLBodyElement },
    { "button", HTMLElementType::kHTMLButtonElement },
    { "canvas", HTMLElementType::kHTMLCanvasElement },
    { "content", HTMLElementType::kHTMLContentElement },
    { "dl", HTMLElementType::kHTMLDListElement },
    { "data", HTMLElementType::kHTMLDataElement },
    { "datalist", HTMLElementType::kHTMLDataListElement },
    { "details", HTMLElementType::kHTMLDetailsElement },
    { "dialog", HTMLElementType::kHTMLDialogElement },
    { "dir", HTMLElementType::kHTMLDirectoryElement },
    { "div", HTMLElementType::kHTMLDivElement },
    { "abbr", HTMLElementType::kHTMLElement },
    { "acronym", HTMLElementType::kHTMLElement },
    { "address", HTMLElementType::kHTMLElement },
    { "article", HTMLElementType::kHTMLElement },
    { "aside", HTMLElementType::kHTMLElement },
    { "b", HTMLElementType::kHTMLElement },
    { "basefont", HTMLElementType::kHTMLElement },
    { "bdo", HTMLElementType::kHTMLElement },
    { "big", HTMLElementType::kHTMLElement },
    { "center", HTMLElementType::kHTMLElement },
    { "cite", HTMLElementType::kHTMLElement },
    { "code", HTMLElementType::kHTMLElement },
    { "dd", HTMLElementType::kHTMLElement },
    { "dfn", HTMLElementType::kHTMLElement },
    { "dt", HTMLElementType::kHTMLElement },
    { "em", HTMLElementType::kHTMLElement },
    { "figcaption", HTMLElementType::kHTMLElement },
    { "figure", HTMLElementType::kHTMLElement },
    { "footer", HTMLElementType::kHTMLElement },
    { "header", HTMLElementType::kHTMLElement },
    { "hgroup", HTMLElementType::kHTMLElement },
    { "i", HTMLElementType::kHTMLElement },
    { "kbd", HTMLElementType::kHTMLElement },
    { "layer", HTMLElementType::kHTMLElement },
    { "main", HTMLElementType::kHTMLElement },
    { "mark", HTMLElementType::kHTMLElement },
    { "nav", HTMLElementType::kHTMLElement },
    { "nobr", HTMLElementType::kHTMLElement },
    { "noframes", HTMLElementType::kHTMLElement },
    { "nolayer", HTMLElementType::kHTMLElement },
    { "plaintext", HTMLElementType::kHTMLElement },
    { "rb", HTMLElementType::kHTMLElement },
    { "rp", HTMLElementType::kHTMLElement },
    { "rtc", HTMLElementType::kHTMLElement },
    { "s", HTMLElementType::kHTMLElement },
    { "samp", HTMLElementType::kHTMLElement },
    { "section", HTMLElementType::kHTMLElement },
    { "small", HTMLElementType::kHTMLElement },
    { "strike", HTMLElementType::kHTMLElement },
    { "strong", HTMLElementType::kHTMLElement },
    { "sub", HTMLElementType::kHTMLElement },
    { "sup", HTMLElementType::kHTMLElement },
    { "tt", HTMLElementType::kHTMLElement },
    { "u", HTMLElementType::kHTMLElement },
    { "var", HTMLElementType::kHTMLElement },
    { "fieldset", HTMLElementType::kHTMLFieldSetElement },
    { "font", HTMLElementType::kHTMLFontElement },
    { "form", HTMLElementType::kHTMLFormElement },
    { "frame", HTMLElementType::kHTMLFrameElement },
    { "frameset", HTMLElementType::kHTMLFrameSetElement },
    { "hr", HTMLElementType::kHTMLHRElement },
    { "head", HTMLElementType::kHTMLHeadElement },
    { "h1", HTMLElementType::kHTMLHeadingElement },
    { "h2", HTMLElementType::kHTMLHeadingElement },
    { "h3", HTMLElementType::kHTMLHeadingElement },
    { "h4", HTMLElementType::kHTMLHeadingElement },
    { "h5", HTMLElementType::kHTMLHeadingElement },
    { "h6", HTMLElementType::kHTMLHeadingElement },
    { "html", HTMLElementType::kHTMLHtmlElement },
    { "iframe", HTMLElementType::kHTMLIFrameElement },
    { "li", HTMLElementType::kHTMLLIElement },
    { "label", HTMLElementType::kHTMLLabelElement },
    { "legend", HTMLElementType::kHTMLLegendElement },
    { "map", HTMLElementType::kHTMLMapElement },
    { "marquee", HTMLElementType::kHTMLMarqueeElement },
    { "menu", HTMLElementType::kHTMLMenuElement },
    { "meta", HTMLElementType::kHTMLMetaElement },
    { "meter", HTMLElementType::kHTMLMeterElement },
    { "del", HTMLElementType::kHTMLModElement },
    { "ins", HTMLElementType::kHTMLModElement },
    { "ol", HTMLElementType::kHTMLOListElement },
    { "optgroup", HTMLElementType::kHTMLOptGroupElement },
    { "option", HTMLElementType::kHTMLOptionElement },
    { "output", HTMLElementType::kHTMLOutputElement },
    { "p", HTMLElementType::kHTMLParagraphElement },
    { "param", HTMLElementType::kHTMLParamElement },
    { "picture", HTMLElementType::kHTMLPictureElement },
    { "portal", HTMLElementType::kHTMLPortalElement },
    { "pre", HTMLElementType::kHTMLPreElement },
    { "listing", HTMLElementType::kHTMLPreElement },
    { "xmp", HTMLElementType::kHTMLPreElement },
    { "progress", HTMLElementType::kHTMLProgressElement },
    { "blockquote", HTMLElementType::kHTMLQuoteElement },
    { "q", HTMLElementType::kHTMLQuoteElement },
    { "select", HTMLElementType::kHTMLSelectElement },
    { "shadow", HTMLElementType::kHTMLShadowElement },
    { "slot", HTMLElementType::kHTMLSlotElement },
    { "source", HTMLElementType::kHTMLSourceElement },
    { "span", HTMLElementType::kHTMLSpanElement },
    { "caption", HTMLElementType::kHTMLTableCaptionElement },
    { "td", HTMLElementType::kHTMLTableCellElement },
    { "th", HTMLElementType::kHTMLTableCellElement },
    { "col", HTMLElementType::kHTMLTableColElement },
    { "colgroup", HTMLElementType::kHTMLTableColElement },
    { "table", HTMLElementType::kHTMLTableElement },
    { "tr", HTMLElementType::kHTMLTableRowElement },
    { "tbody", HTMLElementType::kHTMLTableSectionElement },
    { "tfoot", HTMLElementType::kHTMLTableSectionElement },
    { "thead", HTMLElementType::kHTMLTableSectionElement },
    { "template", HTMLElementType::kHTMLTemplateElement },
    { "textarea", HTMLElementType::kHTMLTextAreaElement },
    { "time", HTMLElementType::kHTMLTimeElement },
    { "title", HTMLElementType::kHTMLTitleElement },
    { "track", HTMLElementType::kHTMLTrackElement },
    { "ul", HTMLElementType::kHTMLUListElement },
    { "applet", HTMLElementType::kHTMLUnknownElement },
    { "bgsound", HTMLElementType::kHTMLUnknownElement },
    { "command", HTMLElementType::kHTMLUnknownElement },
    { "image", HTMLElementType::kHTMLUnknownElement },
    { "keygen", HTMLElementType::kHTMLUnknownElement },
    { "video", HTMLElementType::kHTMLVideoElement },
    { "embed", HTMLElementType::kHTMLEmbedElement },
    { "img", HTMLElementType::kHTMLImageElement },
    { "input", HTMLElementType::kHTMLInputElement },
    { "link", HTMLElementType::kHTMLLinkElement },
    { "object", HTMLElementType::kHTMLObjectElement },
    { "script", HTMLElementType::kHTMLScriptElement },
    { "style", HTMLElementType::kHTMLStyleElement },
    { "bdi", HTMLElementType::kHTMLElement },
    { "noembed", HTMLElementType::kHTMLElement },
    { "noscript", HTMLElementType::kHTMLElement },
    { "rt", HTMLElementType::kHTMLElement },
    { "ruby", HTMLElementType::kHTMLElement },
    { "summary", HTMLElementType::kHTMLElement },
    { "wbr", HTMLElementType::kHTMLElement },
  };
  for (const auto& tag : kTags)
    html_type_map.insert(tag.name, tag.type);
  return html_type_map;
}

HTMLElementType htmlElementTypeForTag(const AtomicString& tagName) {
  DEFINE_STATIC_LOCAL(const HTMLTypeMap, html_type_map, (CreateHTMLTypeMap()));

  auto it = html_type_map.find(tagName);
  if (it == html_type_map.end())
    return HTMLElementType::kHTMLUnknownElement;

  if (tagName == "portal") {
    if (!RuntimeEnabledFeatures::PortalsEnabled()) {
      return HTMLElementType::kHTMLUnknownElement;
    }
  }
  return it->value;
}
}  // namespace blink
