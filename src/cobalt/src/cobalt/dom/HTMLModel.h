#pragma once

#include <memory>
#include <string>

namespace cobalt {
namespace dom {
class HTMLElement;
} // namespace cobalt
} // namespace dom

namespace models {

class HTMLModel {
 public:
  HTMLModel(cobalt::dom::HTMLElement* elem);

  virtual ~HTMLModel();

  // TODO: use optional observers, like MutationObserver & OnCSSMutation

  virtual void OnInsertedIntoDocument() = 0;

  virtual void OnRemovedFromDocument() = 0;

  virtual void OnMutation() = 0;

  virtual void OnSetAttribute(
    const std::string& name, const std::string& value) = 0;

  virtual void OnRemoveAttribute(
    const std::string& name) = 0;

  /// \todo create custom events
  //virtual bool IsFocusable() = 0;

  cobalt::dom::HTMLElement* getHTMLElement();

 protected:

  cobalt::dom::HTMLElement* html_element_;
};

} // namespace models

