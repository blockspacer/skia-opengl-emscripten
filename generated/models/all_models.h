#pragma once

#include <string>
#include <memory>
#include <functional>

#if defined(ENABLE_COBALT)

#include "cobalt/dom/document.h"

namespace cobalt {
namespace dom {
class HTMLElement;
} // namespace dom
} // namespace cobalt

namespace generated {
namespace models {

class MainHTMLModelRegistry : public cobalt::dom::HTMLModelRegistry {
 public:
  MainHTMLModelRegistry();

  std::unique_ptr<::models::HTMLModel> createModelByName(
    const std::string& name, cobalt::dom::HTMLElement* elem);

 private:
  void registerHTMLModels();
};


} // namespace models
} // namespace generated

#endif // defined(ENABLE_COBALT)
