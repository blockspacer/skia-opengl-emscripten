/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "third_party/blink/renderer/core/html/forms/color_input_type.h"

#include "third_party/blink/renderer/bindings/core/v8/script_controller.h"
#include "third_party/blink/renderer/core/css/css_property_names.h"
#include "third_party/blink/renderer/core/dom/events/scoped_event_queue.h"
#include "third_party/blink/renderer/core/dom/shadow_root.h"
#include "third_party/blink/renderer/core/events/mouse_event.h"
#include "third_party/blink/renderer/core/frame/local_frame_view.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/frame/web_feature.h"
#include "third_party/blink/renderer/core/html/forms/color_chooser.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_element.h"
#include "third_party/blink/renderer/core/html/forms/html_data_list_options_collection.h"
#include "third_party/blink/renderer/core/html/forms/html_input_element.h"
#include "third_party/blink/renderer/core/html/forms/html_option_element.h"
#include "third_party/blink/renderer/core/html/html_div_element.h"
#include "third_party/blink/renderer/core/input_type_names.h"
#include "third_party/blink/renderer/core/layout/layout_theme.h"
#include "third_party/blink/renderer/core/page/chrome_client.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/graphics/color.h"
#include "third_party/blink/renderer/platform/heap/heap.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

using namespace html_names;

// Upper limit of number of datalist suggestions shown.
static const unsigned kMaxSuggestions = 1000;
// Upper limit for the length of the labels for datalist suggestions.
static const unsigned kMaxSuggestionLabelLength = 1000;

static bool IsValidColorString(const String& value) {
  if (value.IsEmpty())
    return false;
  if (value[0] != '#')
    return false;

  // We don't accept #rgb and #aarrggbb formats.
  if (value.length() != 7)
    return false;
  Color color;
  return color.SetFromString(value) && !color.HasAlpha();
}

ColorInputType::ColorInputType(HTMLInputElement& element)
    : InputType(element), KeyboardClickableInputTypeView(element) {}

ColorInputType::~ColorInputType() = default;

void ColorInputType::Trace(Visitor* visitor) {
  visitor->Trace(chooser_);
  KeyboardClickableInputTypeView::Trace(visitor);
  ColorChooserClient::Trace(visitor);
  InputType::Trace(visitor);
}

InputTypeView* ColorInputType::CreateView() {
  return this;
}

InputType::ValueMode ColorInputType::GetValueMode() const {
  return ValueMode::kValue;
}

void ColorInputType::CountUsage() {
  CountUsageIfVisible(WebFeature::kInputTypeColor);
}

const AtomicString& ColorInputType::FormControlType() const {
  return input_type_names::kColor;
}

bool ColorInputType::SupportsRequired() const {
  return false;
}

String ColorInputType::SanitizeValue(const String& proposed_value) const {
  if (!IsValidColorString(proposed_value))
    return "#000000";
  return proposed_value.LowerASCII();
}

Color ColorInputType::ValueAsColor() const {
  Color color;
  bool success = color.SetFromString(GetElement().value());
  DCHECK(success);
  return color;
}

void ColorInputType::CreateShadowSubtree() {
  DCHECK(IsShadowHost(GetElement()));

  Document& document = GetElement().GetDocument();
  auto* wrapper_element = MakeGarbageCollected<HTMLDivElement>(document);
  wrapper_element->SetShadowPseudoId(
      AtomicString("-webkit-color-swatch-wrapper"));
  auto* color_swatch = MakeGarbageCollected<HTMLDivElement>(document);
  color_swatch->SetShadowPseudoId(AtomicString("-webkit-color-swatch"));
  wrapper_element->AppendChild(color_swatch);
  GetElement().UserAgentShadowRoot()->AppendChild(wrapper_element);

  GetElement().UpdateView();
}

void ColorInputType::DidSetValue(const String&, bool value_changed) {
  if (!value_changed)
    return;
  GetElement().UpdateView();
  if (chooser_)
    chooser_->SetSelectedColor(ValueAsColor());
}

void ColorInputType::HandleDOMActivateEvent(Event& event) {
  if (GetElement().IsDisabledFormControl())
    return;

  Document& document = GetElement().GetDocument();
  if (!LocalFrame::HasTransientUserActivation(document.GetFrame()))
    return;

  ChromeClient* chrome_client = GetChromeClient();
  if (chrome_client && !chooser_) {
    UseCounter::Count(
        document,
        (event.UnderlyingEvent() && event.UnderlyingEvent()->isTrusted())
            ? WebFeature::kColorInputTypeChooserByTrustedClick
            : WebFeature::kColorInputTypeChooserByUntrustedClick);
    chooser_ = chrome_client->OpenColorChooser(document.GetFrame(), this,
                                               ValueAsColor());
  }

  event.SetDefaultHandled();
}

void ColorInputType::ClosePopupView() {
  EndColorChooser();
}

bool ColorInputType::ShouldRespectListAttribute() {
  return true;
}

bool ColorInputType::TypeMismatchFor(const String& value) const {
  return !IsValidColorString(value);
}

void ColorInputType::WarnIfValueIsInvalid(const String& value) const {
  if (!DeprecatedEqualIgnoringCase(value, GetElement().SanitizeValue(value)))
    AddWarningToConsole(
        "The specified value %s does not conform to the required format.  The "
        "format is \"#rrggbb\" where rr, gg, bb are two-digit hexadecimal "
        "numbers.",
        value);
}

void ColorInputType::ValueAttributeChanged() {
  if (!GetElement().HasDirtyValue())
    GetElement().UpdateView();
}

void ColorInputType::DidChooseColor(const Color& color) {
  if (GetElement().IsDisabledFormControl() || color == ValueAsColor())
    return;
  EventQueueScope scope;
  GetElement().SetValueFromRenderer(color.Serialized());
  GetElement().UpdateView();
  if (!LayoutTheme::GetTheme().IsModalColorChooser())
    GetElement().DispatchFormControlChangeEvent();
}

void ColorInputType::DidEndChooser() {
  if (LayoutTheme::GetTheme().IsModalColorChooser())
    GetElement().EnqueueChangeEvent();
  chooser_.Clear();
}

void ColorInputType::EndColorChooser() {
  if (chooser_)
    chooser_->EndChooser();
}

void ColorInputType::UpdateView() {
  HTMLElement* color_swatch = ShadowColorSwatch();
  if (!color_swatch)
    return;

  color_swatch->SetInlineStyleProperty(CSSPropertyID::kBackgroundColor,
                                       GetElement().value());
}

HTMLElement* ColorInputType::ShadowColorSwatch() const {
  ShadowRoot* shadow = GetElement().UserAgentShadowRoot();
  return shadow ? ToHTMLElementOrDie(shadow->firstChild()->firstChild())
                : nullptr;
}

Element& ColorInputType::OwnerElement() const {
  return GetElement();
}

IntRect ColorInputType::ElementRectRelativeToViewport() const {
  return GetElement().GetDocument().View()->FrameToViewport(
      GetElement().PixelSnappedBoundingBox());
}

Color ColorInputType::CurrentColor() {
  return ValueAsColor();
}

bool ColorInputType::ShouldShowSuggestions() const {
  return GetElement().FastHasAttribute(kListAttr);
}

Vector<mojom::blink::ColorSuggestionPtr> ColorInputType::Suggestions() const {
  Vector<mojom::blink::ColorSuggestionPtr> suggestions;
  HTMLDataListElement* data_list = GetElement().DataList();
  if (data_list) {
    HTMLDataListOptionsCollection* options = data_list->options();
    for (unsigned i = 0; HTMLOptionElement* option = options->Item(i); i++) {
      if (option->IsDisabledFormControl() || option->value().IsEmpty())
        continue;
      if (!GetElement().IsValidValue(option->value()))
        continue;
      Color color;
      if (!color.SetFromString(option->value()))
        continue;
      suggestions.push_back(mojom::blink::ColorSuggestion::New(
          color.Rgb(), option->label().Left(kMaxSuggestionLabelLength)));
      if (suggestions.size() >= kMaxSuggestions)
        break;
    }
  }
  return suggestions;
}

AXObject* ColorInputType::PopupRootAXObject() {
  return chooser_ ? chooser_->RootAXObject() : nullptr;
}

ColorChooserClient* ColorInputType::GetColorChooserClient() {
  return this;
}

}  // namespace blink
