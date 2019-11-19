#include "ScrollAreaModel.h"

#include "ScrollBarModel.h"

#if defined(ENABLE_COBALT)

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

#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/wheel_event.h"

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

const char* ScrollAreaModel::model_name_ = "ScrollAreaModel";

ScrollAreaModelEventListener::ScrollAreaModelEventListener(Element *elem) {
  elem_ = elem;
}

base::Optional<bool> ScrollAreaModelEventListener::HandleEvent(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("ScrollAreaModelEventListener::HandleEvent %s \n", event->type().c_str());
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

#if defined(OS_EMSCRIPTEN) && defined(ENABLE_NATIVE_HTML)
  /// \todo skip for now
#else
  if(/*event->type() == "mousewheel"event->type() == base::Tokens::pointerwheel() ||
         event->type() == base::Tokens::mousewheel()*/
     event->GetWrappableType() == base::GetTypeId<WheelEvent>()) {
    return HandleMouseWheel(callback_this, event, had_exception);
  } else {
    DCHECK(false) << "event not handled for " << event->type().c_str();
  }
#endif

  printf("event->type() is %s", event->type().c_str());

  return base::nullopt;
}

base::Optional<bool> ScrollAreaModelEventListener::HandleMouseWheel(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  DCHECK(elem_);
  DCHECK(callback_this);
  DCHECK(/*event->type() == "mousewheel"event->type() == base::Tokens::pointerwheel() ||
         event->type() == base::Tokens::mousewheel()*/
         event->GetWrappableType() == base::GetTypeId<WheelEvent>());

  printf("ScrollAreaModelEventListener::HandleMouseWheel: "
         "on-mousewheel-scrollbar 1\n");

  printf("on-wheel-demo-scrollable 1\n");
  CHECK(elem_);
  const cobalt::dom::WheelEvent* const wheelEvent =
      // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
      base::polymorphic_downcast<
        const cobalt::dom::WheelEvent* const>(event.get());
  CHECK(wheelEvent);
  float x = static_cast<float>(wheelEvent->delta_x());
  float y = static_cast<float>(wheelEvent->delta_y());
  float z = static_cast<float>(wheelEvent->delta_z());

  DCHECK(event->current_target());
  cobalt::dom::HTMLElement* targetHTML =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(event->current_target().get());
  DCHECK(targetHTML);

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrappers
    = targetHTML->GetElementsByClassName("demo-scrollable-content-wrapper");
  if(found_scrollbar_wrappers && found_scrollbar_wrappers->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_wrapper = found_scrollbar_wrappers->Item(0)->AsHTMLElement();
  } else {
    DCHECK(false);
    // TODO: print warning here
  }
  DCHECK(scrollbar_wrapper);

  cobalt::dom::Element* scrollbar_content
    = scrollbar_wrapper->parent_element();
  DCHECK(scrollbar_content);
  cobalt::dom::HTMLElement* scrollbar_content_html_element =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(scrollbar_content);
  DCHECK(scrollbar_content_html_element);

  /// \todo support X scrollbar
  ///
  bool scrollXChanged = false;
  bool scrollYChanged = false;

  scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbars
    = targetHTML->GetElementsByClassName("demo-scrollable-scroller");
  if(found_scrollbars && found_scrollbars->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_html_element = found_scrollbars->Item(0)->AsHTMLElement();
  } else {
    DCHECK(false);
    // TODO: print warning here
  }
  DCHECK(scrollbar_html_element);

  models::ScrollBarModel* scrollBarModel
    = base::polymorphic_downcast<models::ScrollBarModel*>(
        scrollbar_html_element->getHTMLModel());



  /*DCHECK(event->current_target());
  cobalt::dom::HTMLElement* targetHTML =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(event->current_target().get());
  DCHECK(targetHTML);*/

  CHECK(elem_);
  cobalt::dom::Document* document = elem_->node_document();
  /*if(!attrVal.empty()) {
    if(document->GetElementById(attrVal)) {
      targetHTML = base::polymorphic_downcast<
        cobalt::dom::HTMLElement*>(document->GetElementById(attrVal).get());
    }
  }*/

  DCHECK(targetHTML);

  /*scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrappers
    = targetHTML->GetElementsByClassName("demo-scrollable-content-wrapper");
  if(found_scrollbar_wrappers && found_scrollbar_wrappers->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_wrapper = found_scrollbar_wrappers->Item(0)->AsHTMLElement();
  } else {
    DCHECK(false);
    // TODO: print warning here
  }
  DCHECK(scrollbar_wrapper);*/

  /// \todo support X scrollbar
  ///
  /*bool scrollXChanged = false;
  bool scrollYChanged = false;*/

  const float scrollSpeedBase = 10.0f;
  const float scrollSpeedX = x > 0 ? scrollSpeedBase : -scrollSpeedBase;
  const float scrollSpeedY = y > 0 ? scrollSpeedBase : -scrollSpeedBase;

  float prevScrollY = scrollbar_wrapper->scroll_height();
  float newScrollY
    = std::fmax(0.0f,
      scrollbar_wrapper->scroll_top() - scrollSpeedY);
  float maxHeight
    /// \todo wy we need to substruct client_width below?
    ///
    = scrollbar_wrapper->scroll_height() - scrollbar_wrapper->client_height();
  bool atYScrollEnd
    = (scrollbar_wrapper->scroll_height() - scrollbar_wrapper->scroll_top()
      == scrollbar_wrapper->client_height())
      || (newScrollY >= maxHeight);
  //bool isScrollingYDown = newScrollY < prevScrollY;

  newScrollY
    = std::fmin(maxHeight, newScrollY);
    //= (atYScrollEnd && isScrollingYDown) ? maxHeight : newScrollY;

  if(y /*&& !atYScrollEnd*/ && newScrollY >= 0.0f
     /// \todo why we need to substruct client_height below?
     ///
     //&& newScrollY <= maxHeight
     ) {
    scrollbar_wrapper->set_scroll_top(newScrollY);
    scrollYChanged = newScrollY != prevScrollY;
  }

  /// \todo support X scrollbar
  ///
  /*auto newScrollX
    = .....*/

  if(!scrollXChanged && !scrollYChanged) {
    return base::nullopt;
  }

  /*scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbars
    = targetHTML->GetElementsByClassName("demo-scrollable-scroller");
  if(found_scrollbars && found_scrollbars->length()) {
    /// \todo handle more than one Item
    ///
    scrollbar_html_element = found_scrollbars->Item(0)->AsHTMLElement();
  } else {
    scrollbar_html_element =
      targetHTML->AppendChild(
        new cobalt::dom::HTMLDivElement(
          targetHTML->node_document()))
          ->AsElement()
          ->AsHTMLElement();
    scrollbar_html_element->set_class_name("demo-scrollable-scroller");
  }*/

  models::ScrollBarModel::refreshScrollBar(scrollbar_content_html_element,
    scrollbar_wrapper, scrollbar_html_element);

  printf("on-wheel-demo-scrollable at (%f;%f;%f) event %s for tag: %s, "
         //"attrVal: %s, "
         //"text_content: %s"
         "\n",
         x,
         y,
         z,
         event->type().c_str(),
         elem_->tag_name().c_str()//,
         //attrVal.c_str()//,
         //elem_->text_content().value_or("").c_str()
         );





  return base::nullopt;
}

ScrollAreaModel::ScrollAreaModel(HTMLElement* elem)
  : HTMLModel::HTMLModel(elem)
{
  DCHECK(elem);
  DCHECK(html_element_);
  DCHECK(model_name_);

  printf("create new ScrollAreaModel\n");

  eventListener_ = ScrollAreaModelEventListener::Create(elem);

  DCHECK(eventListener_);

  html_element_->AddEventListener("wheel",
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

ScrollAreaModel::~ScrollAreaModel()
{
  DCHECK(html_element_);
}

void ScrollAreaModel::OnInsertedIntoDocument()
{
  DCHECK(html_element_);
}

void ScrollAreaModel::OnRemovedFromDocument()
{
  DCHECK(html_element_);
}

void ScrollAreaModel::OnMutation()
{
  DCHECK(html_element_);
}

void ScrollAreaModel::OnSetAttribute(
    const std::string& name, const std::string& value)
{
  DCHECK(html_element_);
}

void ScrollAreaModel::OnRemoveAttribute(
    const std::string& name)
{
  DCHECK(html_element_);
}

/*bool ScrollAreaModel::IsFocusable()
{
  DCHECK(html_element_);
  return true; // TODO
}*/

std::unique_ptr<HTMLModel> ScrollAreaModel::create(cobalt::dom::HTMLElement* elem) {
  return std::make_unique<ScrollAreaModel>(elem);
}

const char* ScrollAreaModel::getModelName() {
  DCHECK(model_name_);
  return model_name_;
}

} // namespace models

#endif // defined(ENABLE_COBALT)
