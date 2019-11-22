#include "extended_html/component/HTMLComponentElement.h"

#include <algorithm>
#include <memory>

#include "starboard/event.h"

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "base/logging.h"
#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/stringprintf.h"
#include "base/strings/utf_string_conversions.h"

#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/layout/container_box.h"
#include "cobalt/layout/letterboxed_image.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/loader/mesh/mesh_projection.h"
#include "cobalt/math/transform_2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/color_rgba.h"
#include "cobalt/render_tree/filter_node.h"
#include "cobalt/render_tree/image_node.h"
#include "cobalt/render_tree/map_to_mesh_filter.h"
#include "cobalt/render_tree/punch_through_video_node.h"
#include "cobalt/render_tree/rect_node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "base/lazy_instance.h"
#include "base/strings/string_util.h"
#include "base/trace_event/trace_event.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/user_log.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/selector.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/dom_rect.h"
#include "cobalt/dom/dom_rect_list.h"
#include "cobalt/dom/dom_token_list.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/mutation_reporter.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/parser.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/serializer.h"
#include "cobalt/dom/text.h"
#include "cobalt/math/rect_f.h"
#include "nb/memory_scope.h"
#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"
#include "cobalt/dom/event_target.h"
#include "cobalt/dom_parser/html_decoder.h"
#include "cobalt/dom/attr.h"
#include "cobalt/dom/font_cache.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/error_event.h"
#include "cobalt/dom/error_event_init.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/event.h"

#if defined(ENABLE_SKIA)
#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"
#endif // ENABLE_SKIA

#include <string>
#include <map>
#include <functional>
#include <memory>

#include "base/memory/ptr_util.h"

#include "extended_html/component/block_level_component.h"
#include "extended_html/component/inline_level_component.h"
#include "extended_html/component/component.h"
#include "extended_html/component/component_node.h"
#include "extended_html/component/component_generator.h"

#if defined(ENABLE_BLINK_UI)
#include "ui/events/event.h"
#include "ui/events/keycodes/dom/keycode_converter.h"
#include "ui/events/keycodes/keyboard_code_conversion.h"
#include "ui/views/view.h"
#include "ui/views/widget/widget.h"
#include "ui/events/keycodes/keyboard_code_conversion.h"
#endif // ENABLE_BLINK_UI

#if defined(ENABLE_BLINK_PLATFORM)
//#include "third_party/blink/renderer/platform/keyboard_codes.h"
#endif // ENABLE_BLINK_PLATFORM

using namespace cobalt;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::dom;

static int gHTMLComponentElementID = 0;

const char HTMLComponentElement::kTagName[] = "component";

const char HTMLComponentElement::kAttrNameDataSource[] = "data_source";

const char HTMLComponentElement::kAttrNameWidth[] = "width";

const char HTMLComponentElement::kAttrNameHeight[] = "height";

HTMLComponentElement::HTMLComponentElement(Document* document)
    : HTMLCustomElement(document, base::Token(kTagName)) {
  printf("created new HTMLComponentElement\n");
  gHTMLComponentElementID++;
  HTMLComponentElementID_ = gHTMLComponentElementID;
  placeholder_text_ = std::to_string(HTMLComponentElementID_);

  //set_inner_html("it->second");

#if 0
  /// \todo add cb once
  this->add_event_cb("on-mousedown",
    [HTMLComponentElementID = gHTMLComponentElementID, this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //component->mousedown(event, elem);
      printf("HTMLComponentElementID %i\n", HTMLComponentElementID);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x()
        - elem->GetBoundingClientRect()->left();
      float y = mouseEvent->client_y()
        - elem->GetBoundingClientRect()->top();
      printf("Component on-mousedown "
             "at (%f;%f) kSbKeyMouse1: %d , kSbKeyMouse2: %d , kSbKeyMouse3: %d \n",
              x,
              y,
              (bool)(mouseEvent->buttons() & kSbKeyMouse1),
              (bool)(mouseEvent->buttons() & kSbKeyMouse2),
              (bool)(mouseEvent->buttons() & kSbKeyMouse3));
      //(screen_->GetCursorScreenPoint());
      int buttons_flags = 0;
      if(mouseEvent->buttons() & kSbKeyMouse2) { // left
        buttons_flags |= ui::EF_LEFT_MOUSE_BUTTON;
      }
      // TODO
      /*if(mouseEvent->buttons() & kSbKeyMouse2) { // middle
        buttons_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
      }*/
      if(mouseEvent->buttons() & kSbKeyMouse3) { // right
        buttons_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
      }
      {
        gfx::Point point(x, y);
        //gfx::Point point(screen_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_PRESSED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           buttons_flags,
                           buttons_flags);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
              elem->GetBoundingClientRect()
            });
        }

      }

      return base::nullopt;
    });

  this->add_event_cb("on-mouseup",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //component->mouseup(event, elem);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x()
        - elem->GetBoundingClientRect()->left();
      float y = mouseEvent->client_y()
        - elem->GetBoundingClientRect()->top();
      printf("Component on-mouseup at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());

      int buttons_flags = 0;
      if(mouseEvent->buttons() & kSbKeyMouse2) { // left
        buttons_flags |= ui::EF_LEFT_MOUSE_BUTTON;
      }
      // TODO
      /*if(mouseEvent->buttons() & kSbKeyMouse2) { // middle
        buttons_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
      }*/
      if(mouseEvent->buttons() & kSbKeyMouse3) { // right
        buttons_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
      }
      {
        gfx::Point point(x, y);
        //gfx::Point point(screen_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_RELEASED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           buttons_flags,
                           buttons_flags);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
              elem->GetBoundingClientRect()
            });
        }
      }

      return base::nullopt;
    });

  this->add_event_cb("on-click",
    [HTMLComponentElementID = gHTMLComponentElementID, this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      printf("HTMLComponentElementID %i\n", HTMLComponentElementID);
      //CHECK(newNode);
      //CHECK(component);
      //component->click(event, elem);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x()
        - elem->GetBoundingClientRect()->left();
      float y = mouseEvent->client_y()
        - elem->GetBoundingClientRect()->top();
      printf("Component on-click-print at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());

      {
        gfx::Point point(x, y);
        //gfx::Point point(screen_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_PRESSED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           ui::EF_LEFT_MOUSE_BUTTON,
                           ui::EF_LEFT_MOUSE_BUTTON);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
              elem->GetBoundingClientRect()
            });
        }
      }

      {
        gfx::Point point(x, y);
        //gfx::Point point(screen_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_RELEASED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           ui::EF_LEFT_MOUSE_BUTTON,
                           ui::EF_LEFT_MOUSE_BUTTON);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
              elem->GetBoundingClientRect()
            });
        }
      }

      return base::nullopt;
    });

  this->add_event_cb("on-mousemove",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
      scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
    CHECK(elem);
    //CHECK(newNode);
    //CHECK(component);
    //component->mousemove(event, elem);

    //const dom::PointerEvent* pointerEvent;
    const dom::MouseEvent* mouseEvent;
    /*if(event->type() == base::Tokens::povisibilitychange()) {
      pointerEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::PointerEvent*>(event.get());
    }*/
    mouseEvent =
      // TODO: base::polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
      base::polymorphic_downcast<const dom::MouseEvent*>(event.get());
    CHECK(/*pointerEvent ||*/ mouseEvent);
    //float x = /*pointerEvent ? pointerEvent->x() :*/ mouseEvent->client_x();
    //float y = /*pointerEvent ? pointerEvent->y() :*/ mouseEvent->client_y();
    float x = mouseEvent->client_x()
      - elem->GetBoundingClientRect()->left();
    float y = mouseEvent->client_y()
      - elem->GetBoundingClientRect()->top();
    printf("Component mousemove at (%f;%f) event %s for tag: %s, "
           "attrVal: %s, text_content: %s\n",
            x,
            y,
            event->type().c_str(),
            elem->tag_name().c_str(),
            attrVal.c_str(),
            elem->text_content().value_or("").c_str());

    int buttons_flags = 0;
      if(mouseEvent->buttons() & kSbKeyMouse2) { // left
        buttons_flags |= ui::EF_LEFT_MOUSE_BUTTON;
      }
      // TODO
      /*if(mouseEvent->buttons() & kSbKeyMouse2) { // middle
        buttons_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
      }*/
      if(mouseEvent->buttons() & kSbKeyMouse3) { // right
        buttons_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
      }
    {
      gfx::Point point(x, y);
      //gfx::Point point(screen_->GetCursorScreenPoint());
      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
      ui::MouseEvent mEv(ui::ET_MOUSE_MOVED, // TODO: ET_MOUSE_DRAGGED
                         point,
                         point,
                         ui::EventTimeForNow(),
                         buttons_flags,
                         buttons_flags);

      // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
      {
        std::scoped_lock lock(scheduledEventsMutex_);
        scheduledEvents_.scheduledMouseEvents_.
          push_back(ScheduledMouseEvent{
            std::move(mEv),
            elem->GetBoundingClientRect()
          });
      }
    }

    return base::nullopt;
  });

  this->add_event_cb("on-mouseover",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //component->mouseover(event, elem);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x()
        - elem->GetBoundingClientRect()->left();
      float y = mouseEvent->client_y()
        - elem->GetBoundingClientRect()->top();
      printf("Component on-test-mouseover at (%f;%f) event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      //event->target()
      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);
      //elementHTML->GetUiNavItem()->Focus();
      elementHTML->Focus();
      return base::nullopt;
    });

  this->add_event_cb("on-mouseout",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //component->mouseout(event, elem);

      dom::Document* document = elem->node_document();
      CHECK(document);
      scoped_refptr<dom::HTMLElement> indicated_element = document->indicated_element();
      CHECK(indicated_element);
      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x()
        - elem->GetBoundingClientRect()->left();
      float y = mouseEvent->client_y()
       - elem->GetBoundingClientRect()->top();
      printf("Component on-test-mouseout at (%f;%f) event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);
      elementHTML->Blur();
      /*//elementHTML->GetUiNavItem()->Blur();
      if(indicated_element == elementHTML) {
        printf("indicated_element == elementHTML\n");
        //elementHTML->Blur();
      } else {
        //elementHTML->Blur();
      }*/
      return base::nullopt;
    });

  this->add_event_cb("on-keyup",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //return keyup(event, elem);
      const dom::KeyboardEvent* const keyboardEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
      CHECK(keyboardEvent);
      printf("Component on-test-keyup key %s event %s for tag: %s, "
             "text_content: %s\n",
              keyboardEvent->key().c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              elem->text_content().value_or("").c_str());
      printf("which %d\n", keyboardEvent->which());
      printf("keyup character %d\n", keyboardEvent->keysym());
      //printf("keyup str %s\n", keyboardEvent->keysym());

      /// \note allows to get localized text
      const wchar_t* wchar_src = new wchar_t[1] {
        keyboardEvent->keysym()
      };

      std::string utf8_str;
      bool isUTF8
        = base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty();
      if (isUTF8) {
        printf("keyup normalized_str %s\n", utf8_str.c_str());
      }

      //wprintf(L"keysym character, %s", keyboardEvent->keysym());
      printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
      printf("shift_key %d\n", keyboardEvent->shift_key());
      printf("alt_key %d\n", keyboardEvent->alt_key());
      printf("meta_key %d\n", keyboardEvent->meta_key());
      printf("code %s\n", keyboardEvent->code().c_str());
      printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
      printf("char_code %u\n", keyboardEvent->char_code());
      printf("key_code %u\n", keyboardEvent->key_code());
    #ifdef OS_EMSCRIPTEN
      printf("time_stamp %llu\n", keyboardEvent->time_stamp());
    #else
      printf("time_stamp %lu\n", keyboardEvent->time_stamp());
    #endif
      // base::ReadUnicodeCharacter
      const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
      printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);

      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      int flags = ui::EF_NONE;
      if(keyboardEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(keyboardEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(keyboardEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(keyboardEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }
      base::string16 utf16_str;
      bool isUTF16 =
        base::WideToUTF16(wchar_src, 1, &utf16_str) && !utf16_str.empty();
      //DCHECK(isUTF16);
      if(!isUTF16) {
        if(isUTF8) {
          utf16_str = base::UTF8ToUTF16(utf8_str);
        }
      }
      // TODO: VKEY_NUMPAD4 https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L159
      if(!utf16_str.empty()) {
        for (base::string16::const_iterator i = utf16_str.begin();
           i != utf16_str.end(); ++i) {
          printf("sending OnKeyEvent(&release_event)\n");
          ui::KeyEvent release_event(ui::ET_KEY_RELEASED,
            ui::VKEY_UNKNOWN, flags);
          DCHECK(!release_event.stopped_propagation());
          release_event.set_character(*i);
          release_event.set_source_device_id(0);

          DCHECK(!release_event.stopped_propagation());

          //DCHECK(newNode);

          //newNode->custom_generating_node_->textfield_

          {
            std::scoped_lock lock(scheduledEventsMutex_);
            scheduledEvents_.scheduledKeyEvents_.
              push_back(std::move(release_event));
          }

          /*if(component_node_widget_) {
            DCHECK(component_node_widget_);
            DCHECK(component_node_widget_->GetInputMethod());
            ui::InputMethod* im =
                component_node_widget_->GetInputMethod();
            im->DispatchKeyEvent(&release_event);
          }*/
        }
      }

      return base::nullopt;
    });

  this->add_event_cb("on-keypress",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //component->keypress(event, elem);

      const dom::KeyboardEvent* const keyboardEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
      CHECK(keyboardEvent);
      printf("Component on-test-keypress key %s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              keyboardEvent->key().c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      printf("which %d\n", keyboardEvent->which());
      printf("character %d\n", keyboardEvent->keysym());
      //wprintf(L"//wprintf character %s\n", keyboardEvent->keysym());
/*#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
      printf("printf character SDL_GetKeyName %s\n", SDL_GetKeyName(keyboardEvent->keysym()));
#endif*/
      //printf("keypress str %s\n", keyboardEvent->keysym());

      /// \note allows to get localized text
      const wchar_t* wchar_src = new wchar_t[1] {
        keyboardEvent->keysym()
      };
      std::string utf8_str;
      bool isUTF8
        = base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty();
      if (isUTF8) {
        printf("keyup normalized_str %s\n", utf8_str.c_str());
      }

      //wprintf(L"keysym character, %s", keyboardEvent->keysym());
      printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
      printf("shift_key %d\n", keyboardEvent->shift_key());
      printf("alt_key %d\n", keyboardEvent->alt_key());
      printf("meta_key %d\n", keyboardEvent->meta_key());
      printf("code %s\n", keyboardEvent->code().c_str());
      printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
      printf("char_code %u\n", keyboardEvent->char_code());
      printf("key_code %u\n", keyboardEvent->key_code());
#ifdef OS_EMSCRIPTEN
      printf("time_stamp %llu\n", keyboardEvent->time_stamp());
#else
      printf("time_stamp %lu\n", keyboardEvent->time_stamp());
#endif
      // base::ReadUnicodeCharacter
      const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
      printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);

      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      int flags = ui::EF_NONE;
      if(keyboardEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(keyboardEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(keyboardEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(keyboardEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }
      base::string16 utf16_str;
      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      bool isUTF16 =
        base::WideToUTF16(wchar_src, 1, &utf16_str) && !utf16_str.empty();
      //const base::string16 inputText = base::UTF8ToUTF16("�");
      //DCHECK(isUTF16);
      //const base::string16 inputText = utf8_str;
      if(!isUTF16) {
        if(isUTF8) {
          utf16_str = base::UTF8ToUTF16(utf8_str);
        }
      }
      // TODO: VKEY_NUMPAD4 https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L159
      if(!utf16_str.empty()) {
        for (base::string16::const_iterator i = utf16_str.begin();
           i != utf16_str.end(); ++i) {
          printf("sending OnKeyEvent(&press_event)\n");

          ui::KeyEvent press_event(ui::ET_KEY_PRESSED,
           ui::VKEY_PROCESSKEY, flags);
          DCHECK(!press_event.stopped_propagation());
          press_event.set_character(*i);
          press_event.set_source_device_id(0);
          DCHECK(!press_event.stopped_propagation());

          {
            std::scoped_lock lock(scheduledEventsMutex_);
            scheduledEvents_.scheduledKeyEvents_.
              push_back(std::move(press_event));
          }

          //DCHECK(newNode);
          //DCHECK(newNode->component_node_widget_);
          /*if(component_node_widget_) {
            DCHECK(component_node_widget_->GetInputMethod());
            ui::InputMethod* im = component_node_widget_->GetInputMethod();
            im->DispatchKeyEvent(&press_event);
          }*/
        }
      }

      return base::nullopt;
    });

  this->add_event_cb("on-keydown",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(component);
      //return keydown(event, elem);

      /*const dom::PointerEvent* const pointerEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        static_cast<const dom::PointerEvent* const>(event.get());*/
      const dom::KeyboardEvent* const keyboardEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
      CHECK(keyboardEvent);
      printf("Component on-test-keydown key %s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              keyboardEvent->key().c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      //event->target()
      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);
      return base::nullopt;
    });
#endif
}

void HTMLComponentElement::OnSetAttribute(const std::string& name,
                                      const std::string& value) {
  //printf("HTMLComponentElement::OnSetAttribute 1 %s", name.c_str());

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  HTMLElement::OnSetAttribute(name, value);

  // A user agent that obtains images immediately must synchronously update the
  // image data of an img element whenever that element is created with a src
  // attribute. A user agent that obtains images immediately must also
  // synchronously update the image data of an img element whenever that element
  // has its src or crossorigin attribute set, changed, or removed.
  //if (name == "src") {
  //  UpdateImageData();
  //}
}

void HTMLComponentElement::OnRemoveAttribute(const std::string& name) {
  //printf("HTMLComponentElement::OnRemoveAttribute 1 %s", name.c_str());

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  HTMLElement::OnRemoveAttribute(name);

  // A user agent that obtains images immediately must synchronously update the
  // image data of an img element whenever that element is created with a src
  // attribute. A user agent that obtains images immediately must also
  // synchronously update the image data of an img element whenever that element
  // has its src or crossorigin attribute set, changed, or removed.
  //if (name == "src") {
  //  UpdateImageData();
  //}
}

HTMLComponentElement::~HTMLComponentElement() {
  printf("destroyed HTMLComponentElement\n");
  if(loaded_web_component_) {
    //if(loaded_web_component_->unloaded_cb())
      //loaded_web_component_->unloaded_cb();
    loaded_web_component_->onUnload();
  }
}

uint32 HTMLComponentElement::width() const {
  //DCHECK(HasAttribute(kAttrNameWidth));

  uint32 result = 0;
  std::string value_in_string = GetAttribute(kAttrNameWidth).value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid width attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLComponentElement::width %d\n", result);

  return result;
}

uint32 HTMLComponentElement::height() const {
  //DCHECK(HasAttribute(kAttrNameHeight));

  uint32 result = 0;
  std::string value_in_string = GetAttribute(kAttrNameHeight).value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid height attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLComponentElement::height %d\n", result);

  return result;
}

std::string HTMLComponentElement::data_source() const {
  DCHECK(HasAttribute(kAttrNameDataSource));
  std::string value_in_string = GetAttribute(kAttrNameDataSource).value_or("");
  return value_in_string;
}

math::SizeF HTMLComponentElement::GetSize() const {
  return math::SizeF(width(), height());
}

std::shared_ptr<skemgl::WebComponent> HTMLComponentElement::get_component() {
  if(!data_source().empty()) {
    return skemgl::get_web_component(data_source());
  }
  return nullptr;
}

void HTMLComponentElement::onBoxGeneratorVisit(cobalt::layout::BoxGenerator& box_gen,
  cobalt::dom::HTMLCustomElement* custom_element)
{
  const bool fistLoad = data_source() != current_data_source_;
  if(!data_source().empty() && fistLoad) {
    std::shared_ptr<skemgl::WebComponent> component = get_component();
    if(component) {
      DCHECK(custom_element);
      component->onLoad(
        const_cast<HTMLComponentElement*>(this));
      set_inner_html(component->data()); /// \note can be empty
      //printf("HTMLComponentElement::set_inner_html %s\n",
      //  component->data().c_str());
      current_data_source_ = data_source();
      /*if(component->loaded_cb()) {
        component->loaded_cb()(
            base::polymorphic_downcast<HTMLComponentElement*>(custom_element));
      }*/
      component->onMutated(inner_html());
      loaded_web_component_ = component;
    } else {
        // TODO: print warning if empty component html or ...?
        NOTIMPLEMENTED_LOG_ONCE();
    }
  }

  //DCHECK(box_gen);

  //printf("box_gen size %zu\n", box_gen.boxes().size());

  //   https://www.w3.org/TR/CSS21/visuren.html#inline-boxes
  //   https://www.w3.org/TR/CSS21/visuren.html#propdef-unicode-bidi
  //   https://www.w3.org/TR/css3-text/#line-break-details
  int32 text_position =
      (*box_gen.paragraph_)
          ->AppendCodePoint(Paragraph::kObjectReplacementCharacterCodePoint);

  render_tree::ResourceProvider* resource_provider =
      *node_document()
           ->html_element_context()
           ->resource_provider();

  ComponentGenerator component_generator(
      directionality(),
      css_computed_style_declaration(),
      box_gen.paragraph_, text_position,
      base::nullopt, base::nullopt, base::nullopt, box_gen.context_,
      GetSize());
  computed_style()->display()->Accept(&component_generator);

  //printf("VisitInputElement with placeholder: %s\n", this->placeholder().c_str());

  /*cobalt::dom::customizer::pair_event_to_attr("on-click-print", "on-click",
    [](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x();
      float y = mouseEvent->client_y();
      printf("on-click-print at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      return base::nullopt;
    });*/

  auto component =
      component_generator.component();
  if (component.get() == NULL) {
    // The element with "display: none" generates no boxes and has no effect
    // on layout. Descendant elements do not generate any boxes either.
    // This behavior cannot be overridden by setting the "display" property on
    // the descendants.
    //   https://www.w3.org/TR/CSS21/visuren.html#display-prop
    return;
  }

  //component->SetCustomGeneratingNode(this);

#ifdef COBALT_BOX_DUMP_ENABLED
  component->SetGeneratingNode(this);
#endif  // COBALT_BOX_DUMP_ENABLED

  component->SetUiNavItem(this->GetUiNavItem());

  box_gen.boxes_.push_back(component);

  box_gen.AppendPseudoElementToLine(this, dom::kBeforePseudoElementType);

  // Generate child boxes.
  for (dom::Node* child_node = this->first_child(); child_node;
       child_node = child_node->next_sibling()) {
      if(!child_node){
          continue;
      }
      BoxGenerator child_box_generator(
          this->css_computed_style_declaration(),
          this->css_computed_style_declaration()->animations(),
          box_gen.paragraph_, box_gen.dom_element_depth_ + 1, box_gen.context_);
      child_node->Accept(&child_box_generator);
      const Boxes& child_boxes = child_box_generator.boxes();
      for (Boxes::const_iterator child_box_iterator = child_boxes.begin();
           child_box_iterator != child_boxes.end(); ++child_box_iterator) {
          box_gen.AppendChildBoxToLine(*child_box_iterator);
      }
  }

  box_gen.AppendPseudoElementToLine(this, dom::kAfterPseudoElementType);
}
