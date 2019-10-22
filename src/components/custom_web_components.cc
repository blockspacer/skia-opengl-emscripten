#include "components/custom_web_components.h"

#include "components/NavigationComponent.h"

#ifdef ENABLE_COBALT

#include "base/logging.h"

#include "extended_html/component/HTMLComponentElement.h"

#include <string>
#include <map>
#include <functional>
#include <memory>
#include <iostream>

namespace {

static skemgl::WebComponentsMap web_components {};

} // namespace

namespace skemgl {

std::shared_ptr<skemgl::WebComponent> get_web_component(
    const std::string& name)
{
  const auto it = web_components.find(name);
  if(it != web_components.end()) {
      return it->second;
  }
  return nullptr;
}

void add_web_component(const std::string&name,
    const std::shared_ptr<skemgl::WebComponent> component)
{
  if(web_components.find(name) != web_components.end()) {
    // TODO: print warning on component redefinition or ...?
    NOTIMPLEMENTED_LOG_ONCE();
  }
  web_components[name] = component;
}

WebComponentsMap& get_web_components()
{
  return web_components;
}

void preload_web_components()
{
  add_web_component(NavigationComponent::ComponentName, std::move(
    std::make_shared<NavigationComponent>()));
}

} // namespace skemgl

#endif // ENABLE_COBALT
