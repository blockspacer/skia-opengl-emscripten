#include "components/NavigationComponent.h"

#ifdef ENABLE_COBALT

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

#include "base/optional.h"
#include "cobalt/script/array_buffer.h"
#include "cobalt/script/array_buffer_view.h"
#include "cobalt/script/script_value.h"
#include "cobalt/script/sequence.h"
#include "cobalt/script/typed_arrays.h"
#include "cobalt/script/value_handle.h"
#include "cobalt/dom/event_init.h"
#include "cobalt/dom/window.h"

using namespace cobalt::dom;
using namespace cobalt::script;

/*class CustomEventInit : public cobalt::dom::EventInit {
 public:
  CustomEventInit()
    : navigationComponent_(nullptr) {
  }

  CustomEventInit(const CustomEventInit& other)
    : cobalt::dom::EventInit(other) {
    navigationComponent_ = other.navigationComponent_;
  }

  CustomEventInit& operator=(const CustomEventInit& other) {
    cobalt::dom::EventInit::operator=(other);
    navigationComponent_ = other.navigationComponent_;
    return *this;
  }

  bool has_navigationComponent() const {
    return navigationComponent_;
  }
  NavigationComponent* navigationComponent() const {
    return navigationComponent_;
  }
  void set_navigationComponent(NavigationComponent* navigationComponent) {
    navigationComponent_ = navigationComponent;
  }

 private:
  NavigationComponent* navigationComponent_;
};*/

class CustomEvent : public Event {
 public:
  explicit CustomEvent(const std::string& type);

  //CustomEvent(const std::string& type, const CustomEventInit& init_dict);

  // Creates an event with its "initialized flag" unset.
  explicit CustomEvent(UninitializedFlag uninitialized_flag);

  CustomEvent(base::Token type, Bubbles bubbles, Cancelable cancelable,
          NavigationComponent* navigationComponent);

  DEFINE_WRAPPABLE_TYPE(CustomEvent);

 protected:
  explicit CustomEvent(base::Token type);
  explicit CustomEvent(base::Token type, Bubbles bubbles,
                   Cancelable cancelable,
                   const UIEventInit& init_dict);

  ~CustomEvent() override {}

  NavigationComponent* navigationComponent_;
};

CustomEvent::CustomEvent(const std::string& type) : Event(type) {}
/*CustomEvent::CustomEvent(const std::string& type, const CustomEventInit& init_dict)
    : Event(type, init_dict),
      navigationComponent_(init_dict.navigationComponent()) {}*/

CustomEvent::CustomEvent(UninitializedFlag uninitialized_flag)
    : Event(uninitialized_flag), navigationComponent_(nullptr) {}

CustomEvent::CustomEvent(base::Token type, Bubbles bubbles, Cancelable cancelable,
                 NavigationComponent* navigationComponent)
    : Event(type, bubbles, cancelable), navigationComponent_(navigationComponent) {}

/*void CustomEvent::InitCustomEvent(const std::string& type, bool bubbles,
                          bool cancelable, NavigationComponent* view,
                          int32 detail) {
  InitEvent(type, bubbles, cancelable);
  view_ = view;
  detail_ = detail;
}*/

CustomEvent::CustomEvent(base::Token type) : Event(type), navigationComponent_(nullptr) {}

/*CustomEvent::CustomEvent(base::Token type, Bubbles bubbles, Cancelable cancelable,
                 NavigationComponent* navigationComponent
                 //, const CustomEventInit& init_dict
                 )
    : Event(type, bubbles, cancelable),
      navigationComponent_(navigationComponent) {}*/

NavigationComponentEventListener::NavigationComponentEventListener(Element *elem,
    NavigationComponent* component)
{
  DCHECK(elem);
  elem_ = elem;
  DCHECK(component);
  component_ = component;
}

base::Optional<bool> NavigationComponentEventListener::HandleEvent(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("NavigationComponentEventListener::HandleEvent %s \n", event->type().c_str());

  DCHECK(elem_);
  DCHECK(callback_this);

  if(event->type() == "custom_event") {
    scoped_refptr<cobalt::dom::HTMLElement> localization_html_element;
    scoped_refptr<cobalt::dom::HTMLCollection> found_localization
      = elem_->GetElementsByClassName("change-localization-menu");
    if(found_localization && found_localization->length()) {
      /// \todo handle more than one Item
      ///
      localization_html_element = found_localization->Item(0)->AsHTMLElement();

      scoped_refptr<cobalt::dom::HTMLElement> new_html_element;
      new_html_element =
        localization_html_element->AppendChild(
          new cobalt::dom::HTMLDivElement(
            localization_html_element->node_document()))
            ->AsElement()
            ->AsHTMLElement();
      DCHECK(component_);
      std::string new_html_element_content = "demo-row-";
      new_html_element_content += std::to_string(component_->row_count_);

#if !defined(DISABLE_COBALT_DOM_PARSER)
      new_html_element->set_inner_html(new_html_element_content);
#else
      new_html_element->set_text_content(new_html_element_content);
#endif // !DISABLE_COBALT_DOM_PARSER

      component_->row_count_++;
    } else {
      DCHECK(false);
      // TODO: print warning here
    }
    DCHECK(localization_html_element);
  } else {
    DCHECK(false) << "event not handled for " << event->type().c_str();
  }

  return base::nullopt;
}

AddRowBtnEventListener::AddRowBtnEventListener(Element *elem,
    NavigationComponent* component)
{
  DCHECK(elem);
  elem_ = elem;
  DCHECK(component);
  component_ = component;
}

base::Optional<bool> AddRowBtnEventListener::HandleEvent(
    const scoped_refptr<cobalt::script::Wrappable>& callback_this,
  const scoped_refptr<cobalt::dom::Event>& event, bool* had_exception) const
{
  printf("AddRowBtnEventListener::HandleEvent %s \n", event->type().c_str());

  DCHECK(elem_);
  DCHECK(callback_this);

  if(event->type() == "click") {
    scoped_refptr<Event> event = new CustomEvent(
      base::Token("custom_event"), Event::kBubbles,
      Event::kCancelable, component_);
    DCHECK(event);
    DCHECK(component_);
    DCHECK(component_->elem_);
    component_->elem_->DispatchEvent(event/*, &exception_state*/);
  } else {
    DCHECK(false) << "event not handled for " << event->type().c_str();
  }

  return base::nullopt;
}

const char* NavigationComponent::ComponentName = "NavigationComponent";

NavigationComponent::NavigationComponent() : skemgl::WebComponent() {}

void NavigationComponent::onMutated(const std::string& new_data) {
  if(loaded_data_ == new_data) {
    return;
  }

  DCHECK(elem_);

  scoped_refptr<cobalt::dom::HTMLElement> add_row_btn_html_element;
  scoped_refptr<cobalt::dom::HTMLCollection> found_add_row_btns
    = elem_->GetElementsByClassName("add_row_btn");
  if(found_add_row_btns && found_add_row_btns->length()) {
    /// \todo handle more than one Item
    ///
    add_row_btn_html_element = found_add_row_btns->Item(0)->AsHTMLElement();
    DCHECK(add_row_btn_html_element);

    if(!add_row_btn_eventListener_) {
      add_row_btn_eventListener_ = AddRowBtnEventListener::Create(
        add_row_btn_html_element.get(), const_cast<NavigationComponent*>(this));
    }
    DCHECK(add_row_btn_eventListener_);
    if(!add_row_btn_html_element->HasEventListener(base::Tokens::click())) {
      add_row_btn_html_element->AddEventListener("click",
        CustomScriptValue<cobalt::dom::EventListener>(
          add_row_btn_eventListener_.get()),
        false /* true - executed in the capturing phase.
                   the event is first captured by
                   the outermost element and propagated to the inner elements.
                 false - Default. executed in the bubbling phase.
                   the event is first captured and handled by
                   the innermost element and then propagated
                   to outer elements. */);
    }
  } else {
#if !defined(DISABLE_COBALT_DOM_PARSER)
    DCHECK(false);
#else
    NOTIMPLEMENTED();
#endif // DISABLE_COBALT_DOM_PARSER
    // TODO: print warning here
  }

  loaded_data_ = new_data;
}

const std::string NavigationComponent::data() const {
  DCHECK(elem_);
  return R"raw(
<div class="navigation">
  <div class="navigation-root">
    <div class="navigation-item"><a href="#">One</a></div>
    <div class="navigation-item"><div><a href="#">Two</a></div>
      <div class="dropdown">
        <div><a href="#">Sub-1</a></div>
        <div><a href="#">Sub-2</a></div>
        <div><a href="#">Sub-3</a></div>
      </div>
    </div>
    <div class="navigation-item"><a href="#">Three</a></div>
  </div>
</div>

 <div class="add_row_btn">Add Row!</div>

<div id="change-localization-menu" class="change-localization-menu">
 <h3>Select language:</h3></br>
 <div I_on-click-print_I="en">English</div>
 <div I_on-click-print_I="fr">Français (French)</div>
 <div I_on-click-print_I="bg">Български (Bulgarian)</div>
 <div I_on-click-print_I="ch">中国 (Mandarin)</div>
 <div I_on-click-print_I="mi">Maori</div>
</div>

<div style="width:100px;">
  <sk_input width="100" height="100" style="display: inline-block;width:100%;height:100px;" tabindex="0">
  text 1
  </sk_input>
</div>
<div style="width:100px;">
  <sk_input width="100" height="100" style="width:100%;height:100px;" tabindex="0">
  </sk_input>
</div>
)raw";
}

void NavigationComponent::onLoad(HTMLComponentElement* elem) {
  printf("NavigationComponent component loaded!\n");
  elem_ = elem;
  DCHECK(elem_);

  //event_target_ = new EventTarget;

  eventListener_ = NavigationComponentEventListener::Create(elem_,
    const_cast<NavigationComponent*>(this));

  DCHECK(eventListener_);

  // TODO: example with model:
  // can get component of HTMLElement by cast to HTMLComponentElement
  // and calling get_component()

  elem_->AddEventListener("custom_event",
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

void NavigationComponent::onUnload() {
  printf("NavigationComponent component loaded!\n");
  DCHECK(elem_);
}

#endif // ENABLE_COBALT
