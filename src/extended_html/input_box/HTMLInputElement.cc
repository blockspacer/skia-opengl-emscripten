#include "extended_html/input_box/HTMLInputElement.h"

#include <algorithm>
#include <memory>

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"

#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/layout/container_box.h"
#include "cobalt/layout/letterboxed_image.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/loader/mesh/mesh_projection.h"
#include "cobalt/math/transform_2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/color_rgba.h"
#include "cobalt/render_tree/filter_node.h"
#include "cobalt/render_tree/image_node.h"
#include "cobalt/render_tree/map_to_mesh_filter.h"
#include "cobalt/render_tree/punch_through_video_node.h"
#include "cobalt/render_tree/rect_node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"

using namespace cobalt;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::dom;

const char HTMLInputElement::kTagName[] = "input";

HTMLInputElement::HTMLInputElement(Document* document)
    : HTMLCustomElement(document, base::CobToken(kTagName)) {
}

HTMLInputElement::~HTMLInputElement() {
}

uint32 HTMLInputElement::width() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("width").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid width attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLInputElement::width %d\n", result);

  return result;
}

uint32 HTMLInputElement::height() const {
  uint32 result = 0;
  std::string value_in_string = GetAttribute("height").value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid height attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLInputElement::height %d\n", result);

  return result;
}

math::SizeF HTMLInputElement::GetSize() const {
  return math::SizeF(width(), height());
}

void HTMLInputElement::onBoxGeneratorVisit(cobalt::layout::BoxGenerator& box_gen, cobalt::dom::HTMLCustomElement* custom_element) {
  //DCHECK(box_gen);

  //printf("box_gen size %zu\n", box_gen.boxes().size());

  //   https://www.w3.org/TR/CSS21/visuren.html#inline-boxes
  //   https://www.w3.org/TR/CSS21/visuren.html#propdef-unicode-bidi
  //   https://www.w3.org/TR/css3-text/#line-break-details
  int32 text_position =
      (*box_gen.paragraph_)
          ->AppendCodePoint(Paragraph::kObjectReplacementCharacterCodePoint);

  render_tree::ResourceProvider* resource_provider =
      *node_document()
           ->html_element_context()
           ->resource_provider();

  InputBoxGenerator input_box_generator(
      css_computed_style_declaration(),
      //base::Bind(&HTMLInputElement::GetAnim, base::Unretained(this)),
      *box_gen.paragraph_, text_position,
      base::nullopt, base::nullopt, base::nullopt, box_gen.context_,
      GetSize());
  computed_style()->display()->Accept(&input_box_generator);

  //printf("VisitInputElement with placeholder: %s\n", this->placeholder().c_str());

  scoped_refptr<InputBox> input_box =
      input_box_generator.input_box();
  if (input_box.get() == NULL) {
    // The element with "display: none" generates no boxes and has no effect
    // on layout. Descendant elements do not generate any boxes either.
    // This behavior cannot be overridden by setting the "display" property on
    // the descendants.
    //   https://www.w3.org/TR/CSS21/visuren.html#display-prop
    return;
  }

#ifdef COBALT_BOX_DUMP_ENABLED
  input_box->SetGeneratingNode(this);
#endif  // COBALT_BOX_DUMP_ENABLED

  input_box->SetUiNavItem(this->GetUiNavItem());
  box_gen.boxes_.push_back(input_box);
}
