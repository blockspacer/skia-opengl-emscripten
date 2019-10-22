#pragma once

#ifdef ENABLE_COBALT

#include <string>
#include <map>
#include <functional>
#include <memory>

class HTMLComponentElement;

namespace skemgl {

class WebComponent;

typedef std::function<void(HTMLComponentElement*)> WebComponentLoadedCb;
typedef std::function<void(void)> WebComponentUnloadedCb;
typedef std::map<std::string, std::shared_ptr<skemgl::WebComponent>>
  WebComponentsMap;

class WebComponent {
  public:
    WebComponent() {}
    /*WebComponent(
        const std::string& component_data,
        const WebComponentLoadedCb loaded_cb,
        const WebComponentUnloadedCb unloaded_cb)
          : component_data_(component_data)
          , loaded_cb_(loaded_cb)
          , unloaded_cb_(unloaded_cb)
        {}*/

    virtual ~WebComponent() {}

    virtual const std::string data() const = 0;

    virtual void onLoad(HTMLComponentElement* elem) = 0;

    virtual void onUnload() = 0;

    /*const std::string data() const {
      return component_data_;
    }

    const WebComponentLoadedCb loaded_cb() const {
      return loaded_cb_;
    }

    const WebComponentUnloadedCb unloaded_cb() const {
      return unloaded_cb_;
    }*/

  /*private:
    std::string component_data_;
    WebComponentLoadedCb loaded_cb_;
    WebComponentUnloadedCb unloaded_cb_;*/
};

std::shared_ptr<skemgl::WebComponent> get_web_component(
  const std::string& name);

void add_web_component(const std::string& name,
  const std::shared_ptr<skemgl::WebComponent> component);

WebComponentsMap& get_web_components();

void preload_web_components();

} // namespace skemgl

#endif // ENABLE_COBALT
