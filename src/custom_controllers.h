#pragma once

#ifdef ENABLE_COBALT

#include <string>
#include <map>
#include <functional>
#include <memory>

class HTMLInputElement;
class InputElementController;

namespace cobalt {
namespace render_tree {

class InputNode;

} // namespace render_tree
} // namespace cobalt

namespace views {

class TextfieldController;

} // namespace views

namespace skemgl {

class TextfieldControllerCreator {
  public:
    typedef std::function<
      std::unique_ptr<
          InputElementController>(HTMLInputElement* inputElem,
            cobalt::render_tree::InputNode* inputNode)
        > CreateTextfieldControllerCb;

    CreateTextfieldControllerCb create_textfield_controller_cb_;
};

typedef std::map<std::string, TextfieldControllerCreator>
  TextfieldControllerCreatorsMap;

TextfieldControllerCreator
  get_textfield_controller_creator(const std::string& name);

void add_textfield_controller_creator(const std::string& name,
  const TextfieldControllerCreator& textfield_controller);

TextfieldControllerCreatorsMap& get_textfield_controller_creators();

void preload_textfield_controller_creators();

} // namespace skemgl

#endif // ENABLE_COBALT
