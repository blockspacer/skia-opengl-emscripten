#include "ScrollBarModel.h"

#include <map>
#include <string>

#include "cobalt_common.h" /// \todo remove cobalt_common

#include "base/base_export.h"
#include "base/callback_forward.h"
#include "base/compiler_specific.h"
#include "base/debug/debugger.h"
#include "base/logging.h"
#include "base/macros.h"
#include "base/scoped_clear_last_error.h"
#include "base/strings/string_piece_forward.h"
#include "base/template_util.h"

#include "base/containers/small_map.h"
#include "base/memory/weak_ptr.h"
#include "base/optional.h"
#include "base/strings/string_piece.h"

#include "base/observer_list.h"
#include "base/observer_list_types.h"

#include "cobalt/script/exception_state.h"
#include "cobalt/dom/CustomScriptValue.h"
#include "cobalt/dom/html_element.h"

#include "cobalt/cssom/length_value.h"
#include "cobalt/cssom/number_value.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/rgba_color_value.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "cobalt/base/tokens.h"
#include "cobalt/cssom/css_declared_style_data.h"
#include "cobalt/cssom/css_keyframes_rule.h"
#include "cobalt/cssom/property_definitions.h"
#include "cobalt/cssom/timing_function_list_value.h"
#include "cobalt/dom/animation_event.h"
#include "cobalt/dom/dom_animatable.h"
#include "cobalt/dom/css_animations_adapter.h"
#include "cobalt/dom/css_transitions_adapter.h"
#include "cobalt/web_animations/keyframe.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "cobalt/web_animations/animation_effect_timing_read_only.h"

#include "cobalt/base/token.h"

#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"

#include "cobalt/dom/event_target.h"

using namespace cobalt::dom;
using namespace cobalt::script;

namespace models {

const char* ScrollBarModel::model_name_ = "ScrollBarModel";

float ScrollBarModel::scrollBarArbitraryOffset = 5.0f;

// TODO: run refreshScrollBar on `loaded` event
/*
  You should note that you will have to adjust your version to recalculate the scroller size in certain cases:
  1.) Where the screen is resized or
  2.) If more content is appended.
*/
void ScrollBarModel::refreshScrollBar(
  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_content_html_element,
  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper_html_element,
  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element)
{
  // Move Scroll bar to top offset
  float scrollPercentage =
    scrollbar_wrapper_html_element->scroll_top()
    / scrollbar_wrapper_html_element->scroll_height();
  float topPosition
    = scrollPercentage
      * (scrollbar_wrapper_html_element->offset_height() - scrollBarArbitraryOffset);
  scrollbar_html_element->style()->set_top(
    std::to_string(topPosition) + "px", /*todo*/nullptr);

  /// \todo refresh scroller height only
  /// on first load, resize, content change
  ///
  // Calculation of how tall scroller should be
  float visibleRatio
    = scrollbar_content_html_element->offset_height()
    / scrollbar_wrapper_html_element->scroll_height();
  scrollbar_html_element->style()->set_height(
      std::to_string(visibleRatio * scrollbar_content_html_element->offset_height()) + "px",
      /*todo*/nullptr);
}

ScrollBarModelEventListener::ScrollBarModelEventListener(Element *elem) {
  elem_ = elem;
}

base::Optional<bool> ScrollBarModelEventListener::HandleEvent(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("ScrollBarModelEventListener::HandleEvent %s \n", event->type().c_str());
  /*const base::Optional<EventCallback> cb = get_event_cb(event->type().c_str());
  bool res = true;
  if(cb.has_value()) {
    DCHECK(cb.value());
    res = cb.value()(event, this, attrVal);
  }*/
  DCHECK(elem_);
  DCHECK(callback_this);
  /// \todo return elem_->HandleCustomEvent(callback_this, event, had_exception)
  //return elem_->HandleCustomEvent(event);

  if(event->type() == base::Tokens::pointerdown() ||
         event->type() == base::Tokens::mousedown()) {
    return HandleMouseDown(callback_this, event, had_exception);
  } else {
    DCHECK(false) << "event not handled for " << event->type().c_str();
  }

  return base::nullopt;
}

base::Optional<bool> ScrollBarModelEventListener::HandleMouseDown(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  DCHECK(elem_);
  DCHECK(callback_this);
  DCHECK(event->type() == base::Tokens::pointerdown() ||
         event->type() == base::Tokens::mousedown());

  printf("ScrollBarModelEventListener::HandleMouseDown: "
         "on-mousedown-scrollbar 1\n");

  const cobalt::dom::MouseEvent* mouseEvent;
  mouseEvent =
      // TODO: base::polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
      base::polymorphic_downcast<const cobalt::dom::MouseEvent*>(
        event.get());
  CHECK(/*pointerEvent ||*/ mouseEvent);
  float x = mouseEvent->page_x();
  float y = mouseEvent->page_y();

  DCHECK(event->current_target());
  cobalt::dom::HTMLElement* targetHTML =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(event->current_target().get());
  DCHECK(targetHTML);

  cobalt::dom::Element* parent_element
    = targetHTML->parent_element();
  DCHECK(parent_element);
  cobalt::dom::HTMLElement* parent_html_element =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(parent_element);
  DCHECK(parent_html_element);

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrappers
    = parent_html_element->GetElementsByClassName("demo-scrollable-content-wrapper");
  if(found_scrollbar_wrappers && found_scrollbar_wrappers->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_wrapper = found_scrollbar_wrappers->Item(0)->AsHTMLElement();
  } else {
    DCHECK(false);
    // TODO: print warning here
  }
  DCHECK(scrollbar_wrapper);

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element
    = targetHTML;

  models::ScrollBarModel* scrollBarModel
    = base::polymorphic_downcast<models::ScrollBarModel*>(
        scrollbar_html_element->getHTMLModel());

  scrollBarModel->startScrollbarDragXPosition = x;
  scrollBarModel->startScrollbarDragYPosition = y;
  scrollBarModel->startScrollContentYPosition = scrollbar_wrapper->scroll_top();
  scrollBarModel->isScrollerBeingDragged = true;

  printf("mousedown-scrollbar at (%f;%f) event %s for tag: %s, "
         //"attrVal: %s, "
         //"text_content: %s"
         "\n",
         x,
         y,
         event->type().c_str(),
         elem_->tag_name().c_str()//,
         //attrVal.c_str()//,
         //elem->text_content().value_or("").c_str()
         );

  return base::nullopt;
}

ScrollBarModel::ScrollBarModel(HTMLElement* elem)
  : HTMLModel::HTMLModel(elem)
{
  DCHECK(elem);
  DCHECK(html_element_);
  DCHECK(model_name_);

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element
    = html_element_;

  printf("create new ScrollBarModel\n");

  eventListener_ = ScrollBarModelEventListener::Create(elem);

  DCHECK(eventListener_);
  html_element_->AddEventListener("mousedown",
    //EventListenerScriptValue::Reference(this, *utterance->onboundary())
    //      .referenced_value(),
    CustomScriptValue<cobalt::dom::EventListener>(
      eventListener_.get()),
    false /* true - executed in the capturing phase.
               the event is first captured by
               the outermost element and propagated to the inner elements.
             false - Default. executed in the bubbling phase.
               the event is first captured and handled by
               the innermost element and then propagated
               to outer elements. */);
}

ScrollBarModel::~ScrollBarModel()
{
  DCHECK(html_element_);
}

void ScrollBarModel::OnInsertedIntoDocument()
{
  DCHECK(html_element_);

/// \note move to document load event
#if 0 ///\todo Check failed: parent_element.
  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element
    = html_element_;

  cobalt::dom::Element* parent_element
    = html_element_->parent_element();
  DCHECK(parent_element);
  cobalt::dom::HTMLElement* parent_html_element =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(parent_element);
  DCHECK(parent_html_element);

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrapper_html_elements
    = parent_html_element->GetElementsByClassName("demo-scrollable-content-wrapper");
  if(found_scrollbar_wrapper_html_elements && found_scrollbar_wrapper_html_elements->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_wrapper_html_element = found_scrollbar_wrapper_html_elements->Item(0)->AsHTMLElement();
  } else {
    DCHECK(false);
    // TODO: print warning here
  }
  DCHECK(scrollbar_wrapper_html_element);

  cobalt::dom::Element* scrollbar_content
    = scrollbar_wrapper_html_element->parent_element();
  DCHECK(scrollbar_content);
  cobalt::dom::HTMLElement* scrollbar_content_html_element =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(scrollbar_content);
  DCHECK(scrollbar_content_html_element);

  refreshScrollBar(scrollbar_content_html_element, scrollbar_wrapper_html_element,
    scrollbar_html_element);
#endif
}

void ScrollBarModel::OnRemovedFromDocument()
{
  DCHECK(html_element_);
}

void ScrollBarModel::OnMutation()
{
  DCHECK(html_element_);
}

void ScrollBarModel::OnSetAttribute(
    const std::string& name, const std::string& value)
{
  DCHECK(html_element_);
}

void ScrollBarModel::OnRemoveAttribute(
    const std::string& name)
{
  DCHECK(html_element_);
}

/*bool ScrollBarModel::IsFocusable()
{
  DCHECK(html_element_);
  return true; // TODO
}*/

std::unique_ptr<HTMLModel> ScrollBarModel::create(cobalt::dom::HTMLElement* elem) {
  return std::make_unique<ScrollBarModel>(elem);
}

const char* ScrollBarModel::getModelName() {
  DCHECK(model_name_);
  return model_name_;
}

} // namespace models
