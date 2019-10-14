#include "custom_web_components.h"

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

static void add_component_ex3() {
  std::shared_ptr<skemgl::WebComponent> ex3component
      = std::make_shared<skemgl::WebComponent>(
          R"raw(
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

    <div id="change-localization-menu">
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
)raw",
          [](HTMLComponentElement*){
            printf("ex3 component loaded!\n");
          },
          [](){
            printf("ex3 component unloaded!\n");
          });

  add_web_component("ex3", std::move(ex3component));
}

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
  add_component_ex3();
}

} // namespace skemgl

#endif // ENABLE_COBALT
