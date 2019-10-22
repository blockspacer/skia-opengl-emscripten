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

class NavigationComponent : public skemgl::WebComponent {
  public:
    NavigationComponent() : skemgl::WebComponent() {}

    const std::string data() const override;

    void onLoad(HTMLComponentElement* elem) override;

    void onUnload() override;

    static const char* ComponentName;

  private:
    std::string component_data_;
    HTMLComponentElement* elem_;
};

#endif // ENABLE_COBALT
