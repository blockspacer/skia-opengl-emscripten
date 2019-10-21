#include "HTMLModel.h"

#include "base/base_export.h"
#include "base/callback_forward.h"
#include "base/compiler_specific.h"
#include "base/debug/debugger.h"
#include "base/logging.h"
#include "base/macros.h"
#include "base/scoped_clear_last_error.h"
#include "base/strings/string_piece_forward.h"
#include "base/template_util.h"

using namespace cobalt::dom;

namespace models {

HTMLModel::HTMLModel(HTMLElement *elem)
{
  DCHECK(elem);

  html_element_ = elem;
}

HTMLModel::~HTMLModel()
{
  DCHECK(html_element_);
}

HTMLElement *HTMLModel::getHTMLElement()
{
  DCHECK(html_element_);
  return html_element_;
}

} // namespace models

