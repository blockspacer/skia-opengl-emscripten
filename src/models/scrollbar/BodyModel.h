#pragma once

#include "cobalt/dom/element.h"
#include "cobalt/dom/HTMLModel.h"

namespace models {

// The EventListener interface represents a callable object that will be called
// when an event is fired.
//   https://www.w3.org/TR/2014/WD-dom-20140710/#eventtarget
class BodyModelEventListener : public cobalt::dom::EventListener {
 public:
  BodyModelEventListener(cobalt::dom::Element* elem);

  // Web API: EventListener
  //
  // Cobalt's implementation of callback interfaces requires the 'callback this'
  // to be explicitly passed in.
  base::Optional<bool> HandleEvent(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const override;

  base::Optional<bool> HandleMouseMove(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const;

  base::Optional<bool> HandleMouseUp(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const;

  base::Optional<bool> HandleDocumentLoad(
      const scoped_refptr<cobalt::script::Wrappable>& callback_this,
      const scoped_refptr<cobalt::dom::Event>& event,
      bool* had_exception) const;

  static std::unique_ptr<BodyModelEventListener> Create(
    cobalt::dom::Element* elem)
  {
    return std::unique_ptr<BodyModelEventListener>(
        new BodyModelEventListener(elem));
  }

  cobalt::dom::Element* elem_;
};

class BodyModel : public models::HTMLModel {
 public:
  BodyModel(cobalt::dom::HTMLElement* elem);

  ~BodyModel();

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

 private:
  static const char* model_name_;

  std::unique_ptr<BodyModelEventListener> eventListener_;
};

} // namespace models
