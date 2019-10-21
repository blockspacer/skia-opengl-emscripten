#include "all_models.h"

#include "cobalt/dom/HTMLModel.h"

#include "models/scrollbar/BodyModel.h"
#include "models/scrollbar/ScrollBarModel.h"
#include "models/scrollbar/ScrollAreaModel.h"

#include "cobalt/dom/html_element.h"

#include <map>
#include <functional>
#include <memory>

using namespace cobalt::dom;

namespace generated {
namespace models {

typedef std::function<
          std::unique_ptr<
            ::models::HTMLModel
          >(cobalt::dom::HTMLElement* elem)
        > CreateModelCb;

static std::map<std::string, models::CreateModelCb> AllHTMLModels;

static bool createdAllHTMLModels = false;

MainHTMLModelRegistry::MainHTMLModelRegistry() {
  registerHTMLModels();
}

void MainHTMLModelRegistry::registerHTMLModels() {
  DCHECK(!createdAllHTMLModels);

  AllHTMLModels[::models::BodyModel::getModelName()]
    = &::models::BodyModel::create;

  AllHTMLModels[::models::ScrollBarModel::getModelName()]
    = &::models::ScrollBarModel::create;

  AllHTMLModels[::models::ScrollAreaModel::getModelName()]
    = &::models::ScrollAreaModel::create;

  createdAllHTMLModels = true;
}

std::unique_ptr<::models::HTMLModel>
  MainHTMLModelRegistry::createModelByName(
    const std::string& name, HTMLElement* elem)
{
  DCHECK(!name.empty());
  DCHECK(elem);

  printf("createModelByName for %s\n", name.c_str());

  if(AllHTMLModels.find(name) != AllHTMLModels.end()) {
    return AllHTMLModels[name](elem);
  } else {
    DCHECK(false) << "no HTML model for " << name;
    /// \todo print warning here
  }

  return nullptr;
}

} // namespace models
} // namespace generated
