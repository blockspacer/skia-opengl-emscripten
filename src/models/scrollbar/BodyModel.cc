#include "BodyModel.h"

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
#include "cobalt/dom/document.h"

#include "cobalt/dom/event_target.h"

using namespace cobalt::dom;
using namespace cobalt::script;

namespace models {

const char* BodyModel::model_name_ = "BodyModel";

BodyModelEventListener::BodyModelEventListener(Element *elem) {
  elem_ = elem;
}

base::Optional<bool> BodyModelEventListener::HandleEvent(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("BodyModelEventListener::HandleEvent %s \n", event->type().c_str());
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

  if(event->type() == base::Tokens::pointermove() ||
         event->type() == base::Tokens::mousemove()) {
    return HandleMouseMove(callback_this, event, had_exception);
  } else if(event->type() == base::Tokens::pointerup() ||
         event->type() == base::Tokens::mouseup()) {
    return HandleMouseUp(callback_this, event, had_exception);
  } else if(event->type() == base::Tokens::load()) {
    return HandleDocumentLoad(callback_this, event, had_exception);
  } else {
    DCHECK(false) << "event not handled for " << event->type().c_str();
  }

  return base::nullopt;
}

base::Optional<bool> BodyModelEventListener::HandleDocumentLoad(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("BodyModelEventListener::HandleDocumentLoad 1\n");

  DCHECK(event->current_target());
  cobalt::dom::Document* document =
    base::polymorphic_downcast<
      cobalt::dom::Document*>(event->current_target().get());
  DCHECK(document);

  DCHECK(document->body());
  cobalt::dom::HTMLElement* bodyHTML =
    base::polymorphic_downcast<
      cobalt::dom::HTMLElement*>(document->body().get());
  DCHECK(bodyHTML);

  scoped_refptr<cobalt::dom::HTMLElement> scroll_container_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scroll_containers
    = bodyHTML->GetElementsByClassName("demo-scrollable");
  if(found_scroll_containers && found_scroll_containers->length()) {
    /// \todo handle more than one Item
    ///
    for(auto i = 0; i < found_scroll_containers->length(); i++) {
      scroll_container_html_element
        = found_scroll_containers->Item(i)->AsHTMLElement();

      scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element;
      scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbars
        = scroll_container_html_element->GetElementsByClassName("demo-scrollable-scroller");
      if(found_scrollbars && found_scrollbars->length()) {
        /// \todo handle more than one Item
        ///
        scrollbar_html_element = found_scrollbars->Item(0)->AsHTMLElement();
      } else {
        DCHECK(false);
        // TODO: print warning here
      }
      DCHECK(scrollbar_html_element);

      scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper;
      scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrappers
        = scroll_container_html_element->GetElementsByClassName("demo-scrollable-content-wrapper");
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

      models::ScrollBarModel::refreshScrollBar(scrollbar_content_html_element,
        scrollbar_wrapper, scrollbar_html_element);

    }
  }

  return base::nullopt;
}

base::Optional<bool> BodyModelEventListener::HandleMouseUp(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  DCHECK(elem_);
  DCHECK(callback_this);
  DCHECK(event->type() == base::Tokens::pointerup() ||
         event->type() == base::Tokens::mouseup());
  printf("on-mouseup-scrollbar 1\n");
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

  scoped_refptr<cobalt::dom::HTMLElement> scroll_container_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scroll_containers
    = targetHTML->GetElementsByClassName("demo-scrollable");
  if(found_scroll_containers && found_scroll_containers->length()) {
    /// \todo handle more than one Item
    ///
    for(auto i = 0; i < found_scroll_containers->length(); i++) {
      scroll_container_html_element
        = found_scroll_containers->Item(i)->AsHTMLElement();

      scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element;
      scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbars
        = scroll_container_html_element->GetElementsByClassName("demo-scrollable-scroller");
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

      //endScrollbarDragXPosition = x;
      //endScrollbarDragYPosition = y;
      scrollBarModel->isScrollerBeingDragged = false;
    }
  }

  printf("mouseup-scrollbar at (%f;%f) event %s for tag: %s, "
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

base::Optional<bool> BodyModelEventListener::HandleMouseMove(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  DCHECK(elem_);
  DCHECK(callback_this);
  DCHECK(event->type() == base::Tokens::pointermove() ||
         event->type() == base::Tokens::mousemove());

  printf("BodyModelEventListener::HandleMouseMove: "
         "on-mousemove-scrollbar 1\n");

  //CHECK(elem_);
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


  scoped_refptr<cobalt::dom::HTMLElement> scroll_container_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_scroll_containers
    = targetHTML->GetElementsByClassName("demo-scrollable");
  if(found_scroll_containers && found_scroll_containers->length()) {
    /// \todo handle more than one Item
    ///
    for(auto i = 0; i < found_scroll_containers->length(); i++) {
      scroll_container_html_element
        = found_scroll_containers->Item(i)->AsHTMLElement();

      scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper;
      scoped_refptr<cobalt::dom::HTMLCollection> found_scrollbar_wrappers
        = scroll_container_html_element->GetElementsByClassName("demo-scrollable-content-wrapper");
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
        = scroll_container_html_element->GetElementsByClassName("demo-scrollable-scroller");
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

      if (scrollBarModel->isScrollerBeingDragged) {
          float prevScrollY = scrollbar_wrapper->scroll_height();
          float mouseYDiff
            = y - scrollBarModel->startScrollbarDragYPosition;
          float scrollEquivalent
            = mouseYDiff
              * (scrollbar_wrapper->scroll_height()
              / scrollbar_content_html_element->offset_height());
          float newScrollY
            = std::fmax(0.0f,
              scrollBarModel->startScrollContentYPosition + scrollEquivalent);
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

          printf("scrollerDragged to %f\n", newScrollY);

          if(y && newScrollY >= 0.0f
             /// \todo why we need to substruct client_height below?
             ///
             // && newScrollY <= maxHeight
             ) {
            scrollbar_wrapper->set_scroll_top(newScrollY);
            scrollYChanged = newScrollY != prevScrollY;
          }

          /// \todo support X scrollbar
          ///
          /*auto newScrollX
            = .....*/
      }

      if(!scrollXChanged && !scrollYChanged) {
        //return base::nullopt;
        continue;
      }

      models::ScrollBarModel::refreshScrollBar(scrollbar_content_html_element,
        scrollbar_wrapper, scrollbar_html_element);

    }
  }

  printf("mousemove-scrollbar at (%f;%f) "
         //"startScrollbarDragYPosition %f "
         "event %s for tag: %s, "
         //"attrVal: %s, "
         //"text_content: %s"
         "\n",
         x,
         y,
         //scrollBarModel->startScrollbarDragYPosition,
         event->type().c_str(),
         elem_->tag_name().c_str()//,
         //attrVal.c_str()//,
         //elem->text_content().value_or("").c_str()
         );

  return base::nullopt;
}

BodyModel::BodyModel(HTMLElement* elem)
  : HTMLModel::HTMLModel(elem)
{
  DCHECK(elem);
  DCHECK(html_element_);
  DCHECK(model_name_);

  printf("create new BodyModel\n");

  eventListener_ = BodyModelEventListener::Create(elem);

  DCHECK(eventListener_);

  CHECK(html_element_);
  cobalt::dom::Document* document = html_element_->node_document();
  document->AddEventListener("load",
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

  html_element_->AddEventListener("mousemove",
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

  html_element_->AddEventListener("mouseup",
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

BodyModel::~BodyModel()
{
  DCHECK(html_element_);
}

void BodyModel::OnInsertedIntoDocument()
{
  DCHECK(html_element_);
}

void BodyModel::OnRemovedFromDocument()
{
  DCHECK(html_element_);
}

void BodyModel::OnMutation()
{
  DCHECK(html_element_);
}

void BodyModel::OnSetAttribute(
    const std::string& name, const std::string& value)
{
  DCHECK(html_element_);
}

void BodyModel::OnRemoveAttribute(
    const std::string& name)
{
  DCHECK(html_element_);
}

/*bool BodyModel::IsFocusable()
{
  DCHECK(html_element_);
  return true; // TODO
}*/

std::unique_ptr<HTMLModel> BodyModel::create(cobalt::dom::HTMLElement* elem) {
  return std::make_unique<BodyModel>(elem);
}

const char* BodyModel::getModelName() {
  DCHECK(model_name_);
  return model_name_;
}

} // namespace models
