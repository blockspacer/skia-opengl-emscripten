#pragma once

#if defined(ENABLE_COBALT)

#include "cobalt/dom/element.h"
#include "cobalt/dom/HTMLModel.h"

namespace cobalt {
namespace dom {
class HTMLElement;
} // namespace cobalt
} // namespace dom

namespace models {

// The EventListener interface represents a callable object that will be called
// when an event is fired.
//   https://www.w3.org/TR/2014/WD-dom-20140710/#eventtarget
class ScrollBarModelEventListener : public cobalt::dom::EventListener {
 public:
  ScrollBarModelEventListener(cobalt::dom::Element* elem);

  // Web API: EventListener
  //
  // Cobalt's implementation of callback interfaces requires the 'callback this'
  // to be explicitly passed in.
  base::Optional<bool> HandleEvent(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const override;

  base::Optional<bool> HandleMouseDown(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const;

  static std::unique_ptr<ScrollBarModelEventListener> Create(
    cobalt::dom::Element* elem)
  {
    return std::unique_ptr<ScrollBarModelEventListener>(
        new ScrollBarModelEventListener(elem));
  }

  cobalt::dom::Element* elem_;
};

class ScrollBarModel : public models::HTMLModel {
 public:
  ScrollBarModel(cobalt::dom::HTMLElement* elem);

  ~ScrollBarModel();

  void OnInsertedIntoDocument() override;

  void OnRemovedFromDocument() override;

  void OnMutation() override;

  void OnSetAttribute(
    const std::string& name, const std::string& value) override;

  void OnRemoveAttribute(
    const std::string& name) override;

  /// \todo create custom events
  //bool IsFocusable() override;

  static const char* getModelName();

  static std::unique_ptr<models::HTMLModel> create(
    cobalt::dom::HTMLElement* elem);

  /*std::unique_ptr<models::HTMLModel> create(
    cobalt::dom::HTMLElement* elem) override;*/

  static void refreshScrollBar(
    scoped_refptr<cobalt::dom::HTMLElement> scrollbar_content_html_element,
    scoped_refptr<cobalt::dom::HTMLElement> scrollbar_wrapper_html_element,
    scoped_refptr<cobalt::dom::HTMLElement> scrollbar_html_element);

  float startScrollContentYPosition = 0.0f;
  float startScrollbarDragYPosition = 0.0f;
  float startScrollbarDragXPosition = 0.0f;
  //static float endScrollbarDragYPosition = 0.0f;
  //static float endScrollbarDragXPosition = 0.0f;
  bool isScrollerBeingDragged = false;

  /// \note 5px arbitrary offset so scroll bar doesn't move too far beyond content wrapper bounding box
  static float scrollBarArbitraryOffset;

 private:
  static const char* model_name_;

  std::unique_ptr<ScrollBarModelEventListener> eventListener_;
};

} // namespace models

#endif // defined(ENABLE_COBALT)
