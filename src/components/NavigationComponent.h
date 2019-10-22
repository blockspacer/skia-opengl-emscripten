#pragma once

#include "components/custom_web_components.h"

#ifdef ENABLE_COBALT

#include "base/logging.h"

#include "extended_html/component/HTMLComponentElement.h"

#include <string>
#include <map>
#include <functional>
#include <memory>
#include <iostream>

class NavigationComponent;

// The EventListener interface represents a callable object that will be called
// when an event is fired.
//   https://www.w3.org/TR/2014/WD-dom-20140710/#eventtarget
class NavigationComponentEventListener : public cobalt::dom::EventListener {
 public:
  NavigationComponentEventListener(cobalt::dom::Element* elem,
    NavigationComponent* component);

  // Web API: EventListener
  //
  // Cobalt's implementation of callback interfaces requires the 'callback this'
  // to be explicitly passed in.
  base::Optional<bool> HandleEvent(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const override;

  static std::unique_ptr<NavigationComponentEventListener> Create(
    cobalt::dom::Element* elem,
    NavigationComponent* component)
  {
    return std::unique_ptr<NavigationComponentEventListener>(
        new NavigationComponentEventListener(elem, component));
  }

  cobalt::dom::Element* elem_;

  NavigationComponent* component_;
};


// The EventListener interface represents a callable object that will be called
// when an event is fired.
//   https://www.w3.org/TR/2014/WD-dom-20140710/#eventtarget
class AddRowBtnEventListener : public cobalt::dom::EventListener {
 public:
  AddRowBtnEventListener(cobalt::dom::Element* elem,
    NavigationComponent* component);

  // Web API: EventListener
  //
  // Cobalt's implementation of callback interfaces requires the 'callback this'
  // to be explicitly passed in.
  base::Optional<bool> HandleEvent(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const override;

  static std::unique_ptr<AddRowBtnEventListener> Create(
    cobalt::dom::Element* elem,
    NavigationComponent* component)
  {
    return std::unique_ptr<AddRowBtnEventListener>(
        new AddRowBtnEventListener(elem, component));
  }

  cobalt::dom::Element* elem_;

  NavigationComponent* component_;
};

class NavigationComponent : public skemgl::WebComponent {
  public:
    NavigationComponent();

    const std::string data() const override;

    void onLoad(HTMLComponentElement* elem) override;

    void onMutated(const std::string& new_data) override;

    void onUnload() override;

    void onDataChanged();

    static const char* ComponentName;

  //private: // TODO
    std::string component_data_;
    HTMLComponentElement* elem_;
    std::unique_ptr<NavigationComponentEventListener> eventListener_;
    std::unique_ptr<AddRowBtnEventListener> add_row_btn_eventListener_;
    //scoped_refptr<EventTarget> event_target_;

    int row_count_ = 0;

    std::string loaded_data_;
};

#endif // ENABLE_COBALT
