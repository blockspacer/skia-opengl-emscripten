#include "ui/views/controls/menu/stub/menu_pre_target_handler_stub.h"

#include "ui/base/ui_base_features.h"
#include "ui/views/controls/menu/menu_controller.h"
#include "ui/views/widget/widget.h"

namespace views {

// static
std::unique_ptr<MenuPreTargetHandler> MenuPreTargetHandler::Create(
    MenuController* controller,
    Widget* owner) {
  return nullptr;
}

}  // namespace views
