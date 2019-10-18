﻿// Copyright 2017 The Cobalt Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "cobalt/build/build_config.h" /// \note must be first include

#include "cobalt/layout/topmost_event_target.h"

#include "base/optional.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/token.h"
#include "cobalt/base/tokens.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_html_element.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mouse_event_init.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/math/vector2d.h"
#include "cobalt/math/vector2d_f.h"

#include <memory>
#include <string>
#include <vector>

#include "base/compiler_specific.h"
#include "base/memory/ref_counted.h"
#include "base/memory/weak_ptr.h"
#include "base/optional.h"
#include "base/strings/string_piece.h"
#include "cobalt/base/token.h"
#include "cobalt/cssom/animation_set.h"
#include "cobalt/cssom/css_computed_style_declaration.h"
#include "cobalt/cssom/css_declared_style_declaration.h"
#include "cobalt/cssom/css_style_declaration.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/css_transition_set.h"
#include "cobalt/cssom/mutation_observer.h"
#include "cobalt/cssom/selector_tree.h"
#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/css_animations_adapter.h"
#include "cobalt/dom/css_transitions_adapter.h"
#include "cobalt/dom/directionality.h"
#include "cobalt/dom/dom_rect_list.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/layout_boxes.h"
#include "cobalt/dom/pseudo_element.h"
#include "cobalt/loader/image/image_cache.h"
#include "cobalt/ui_navigation/nav_item.h"


#include "cobalt/dom/html_element.h"

// not in spec
#include "cobalt/dom/html_skottie_element.h"
#include "cobalt/dom/html_custom_element.h"

#include <algorithm>
#include <map>
#include <memory>

#include "base/message_loop/message_pump.h"
#include "base/task/sequence_manager/task_queue.h"
#include "cobalt/base/user_log.h"

#include "base/lazy_instance.h"
#include "base/message_loop/message_loop.h"
//#include "base/message_loop/message_loop_task_runner.h"
#include "base/strings/string_number_conversions.h"
#include "cobalt/base/tokens.h"
#include "cobalt/cssom/absolute_url_value.h"
#include "cobalt/cssom/cascaded_style.h"
#include "cobalt/cssom/computed_style.h"
#include "cobalt/cssom/css_parser.h"
#include "cobalt/cssom/css_style_sheet.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/property_list_value.h"
#include "cobalt/cssom/selector_tree.h"
#include "cobalt/cssom/viewport_size.h"
#include "cobalt/dom/csp_delegate.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_animatable.h"
#include "cobalt/dom/dom_string_map.h"
#include "cobalt/dom/focus_event.h"
#include "cobalt/dom/html_anchor_element.h"
#include "cobalt/dom/html_audio_element.h"
#include "cobalt/dom/html_body_element.h"
#include "cobalt/dom/html_br_element.h"
#include "cobalt/dom/html_div_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/html_element_factory.h"
#include "cobalt/dom/html_head_element.h"
#include "cobalt/dom/html_heading_element.h"
#include "cobalt/dom/html_html_element.h"
#include "cobalt/dom/html_image_element.h"
#include "cobalt/dom/html_link_element.h"
#include "cobalt/dom/html_meta_element.h"
#include "cobalt/dom/html_paragraph_element.h"
#include "cobalt/dom/html_script_element.h"
#include "cobalt/dom/html_span_element.h"
#include "cobalt/dom/html_style_element.h"
#include "cobalt/dom/html_title_element.h"
#include "cobalt/dom/html_unknown_element.h"
#include "cobalt/dom/html_video_element.h"
#include "cobalt/dom/rule_matching.h"
#include "cobalt/loader/image/animated_image_tracker.h"

/*#if defined(__EMSCRIPTEN__)
#include "emscripten/emscripten.h"
#include "emscripten/html5.h"
#endif*/

namespace cobalt {
namespace layout {

scoped_refptr<dom::HTMLElement> TopmostEventTarget::FindTopmostEventTarget(
    const scoped_refptr<dom::Document>& document,
    const math::Vector2dF& coordinate,
    math::Vector2dF* override_coordinate) {
  TRACE_EVENT0("cobalt::layout",
               "TopmostEventTarget::FindTopmostEventTarget()");
  DCHECK(document);
  DCHECK(!box_);
  DCHECK(render_sequence_.empty());

  DCHECK(override_coordinate);

  // Make sure the document's layout box tree is up-to-date.
  document->DoSynchronousLayout();

  html_element_ = document->html();
  ConsiderElement(html_element_.get(), coordinate, coordinate,
    override_coordinate);
  box_ = NULL;
  render_sequence_.clear();
  document->SetIndicatedElement(html_element_.get());
  scoped_refptr<dom::HTMLElement> topmost_element;
  topmost_element.swap(html_element_);
  DCHECK(!html_element_);
  return topmost_element;
}

namespace {

LayoutBoxes* GetLayoutBoxesIfNotEmpty(dom::Element* element) {
  dom::HTMLElement* html_element = element->AsHTMLElement().get();
  if (html_element && html_element->computed_style()) {
    dom::LayoutBoxes* dom_layout_boxes = html_element->layout_boxes();
    if (dom_layout_boxes &&
        dom_layout_boxes->type() == dom::LayoutBoxes::kLayoutLayoutBoxes) {
      LayoutBoxes* layout_boxes =
          base::polymorphic_downcast<LayoutBoxes*>(dom_layout_boxes);
      if (!layout_boxes->boxes().empty()) {
        return layout_boxes;
      }
    }
  }
  return NULL;
}

}  // namespace
void TopmostEventTarget::ConsiderElement(dom::Element* element,
                                         const math::Vector2dF& original_coordinate,
                                         const math::Vector2dF& coordinate,
                                         math::Vector2dF* override_coordinate) {
  using namespace cobalt::dom;

  DCHECK(override_coordinate);

  if (!element) return;

  math::Vector2dF original_element_coordinate(
    original_coordinate.x(),
    original_coordinate.y());
  //math::Vector2dF element_prev_scroll_coordinate(coordinate);
  math::Vector2dF element_scroll_coordinate(coordinate);

  DCHECK(element->AsHTMLElement()); /// \ todo

  float offsetX = 0.0f;
  float offsetY = 0.0f;
  float scrollX = 0.0f;
  float scrollY = 0.0f;

  element->AsHTMLElement()->node_document()->DoSynchronousLayout();

#if 0
  for (Node* ancestor_node = element->AsHTMLElement()->parent_node(); ancestor_node;
       ancestor_node = ancestor_node->parent_node()) {
    Element* ancestor_element = ancestor_node->AsElement();
    if (!ancestor_element) {
      continue;
    }
    HTMLElement* ancestor_html_element = ancestor_element->AsHTMLElement().get();
    if (!ancestor_html_element) {
      continue;
    }
    DCHECK(ancestor_html_element->computed_style());
    /*if (ancestor_html_element->AsHTMLBodyElement() ||
        ancestor_html_element->computed_style()->position() !=
            cssom::KeywordValue::GetStatic()) {
      return ancestor_element;
    }*/
  }
#endif

  /*if(element->AsHTMLElement()->offset_parent())
  {
    element_scroll_coordinate.set_x(coordinate.x() -
      element->AsHTMLElement()->scroll_left()
    );
    element_scroll_coordinate.set_y(coordinate.y() -
      element->AsHTMLElement()->scroll_top()
    );
  }*/

  /*if(element->AsHTMLElement()->offset_parent()) {
    if(auto scrElm
        = element->AsHTMLElement()->node_document()->GetElementById("scrollable_body")) {
      auto scrHTMLElm = scrElm->AsHTMLElement();
      if(scrHTMLElm) {
        element_scroll_coordinate.set_x(original_coordinate.x() +
          scrHTMLElm->scroll_left()
        );
        element_scroll_coordinate.set_y(original_coordinate.y() +
          scrHTMLElm->scroll_top()
        );
      }
    }
  }*/

  /*auto offsetNode = element->AsHTMLElement()->offset_parent();
  while(offsetNode) {
    offsetX += offsetNode->AsHTMLElement()->offset_left();
    offsetY += offsetNode->AsHTMLElement()->offset_top();
    offsetNode = offsetNode->AsHTMLElement()->offset_parent();
  }
  if(offsetNode) {
    offsetX += offsetNode->AsHTMLElement()->offset_left();
    offsetY += offsetNode->AsHTMLElement()->offset_top();
  }

  auto scrollNode = element->AsHTMLElement()->offset_parent();
  while(scrollNode) {
    scrollX += scrollNode->AsHTMLElement()->scroll_left();
    scrollY += scrollNode->AsHTMLElement()->scroll_top();
    scrollNode = scrollNode->AsHTMLElement()->offset_parent();
  }
  if(scrollNode) {
    scrollX += scrollNode->AsHTMLElement()->scroll_left();
    scrollY += scrollNode->AsHTMLElement()->scroll_top();
  }*/

#if 0
  if(element->AsHTMLElement()->offset_parent()) {
    if(element->AsHTMLElement()->offset_parent()->AsHTMLElement()->style()->position(/*todo*/nullptr)
        == cssom::kFixedKeywordName) {
      element_scroll_coordinate.set_x(coordinate.x() +
        element->AsHTMLElement()->offset_parent()->scroll_left()
      );
      element_scroll_coordinate.set_y(coordinate.y() +
        element->AsHTMLElement()->offset_parent()->scroll_top()
      );
    } else {
      element_scroll_coordinate.set_x(coordinate.x() +
        element->AsHTMLElement()->scroll_left()
      );
      element_scroll_coordinate.set_y(coordinate.y() +
        element->AsHTMLElement()->scroll_top()
      );
    }
  } else {
    element_scroll_coordinate.set_x(coordinate.x() +
      element->AsHTMLElement()->scroll_left()
    );
    element_scroll_coordinate.set_y(coordinate.y() +
      element->AsHTMLElement()->scroll_top()
    );
  }
#endif

  //scrollX += element->AsHTMLElement()->scroll_left();
  //scrollY += element->AsHTMLElement()->scroll_top();

  /*element_scroll_coordinate.set_x(
    original_coordinate.x()
    + offsetX
    + scrollX);
  element_scroll_coordinate.set_y(
    original_coordinate.y()
    + offsetY
    + scrollY);*/

  /*if(element->AsHTMLElement()->offset_parent()) {
    element_scroll_coordinate.set_x(coordinate.x() -
      element->AsHTMLElement()->offset_left());
    element_scroll_coordinate.set_y(coordinate.x() -
      element->AsHTMLElement()->offset_top());
  } else {
    element_scroll_coordinate.set_x(coordinate.x()
      + element->scroll_left());
    element_scroll_coordinate.set_y(coordinate.y()
      + element->scroll_top());
  }*/

  /*element_scroll_coordinate.set_x(element_scroll_coordinate.x()
  + element->scroll_left());
  element_scroll_coordinate.set_y(element_scroll_coordinate.y()
  + element->scroll_top());*/

  //  coordinate.x() + element->scroll_left(),
  //  coordinate.y() + element->scroll_top());


  LayoutBoxes* layout_boxes = GetLayoutBoxesIfNotEmpty(element);
  if (layout_boxes) {
    const Box* box = layout_boxes->boxes().front().get();
    if (box->computed_style() && box->IsTransformed()) {
      // Early out if the transform cannot be applied. This can occur if the
      // transform matrix is not invertible.
      if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &original_element_coordinate)) {
        return;
      }
      /*if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &element_prev_scroll_coordinate)) {
        return;
      }*/
      if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &element_scroll_coordinate)) {
        return;
      }
    }

    /// \todo dirty HACK to imitate scrolling support
    if (!element->AsHTMLElement()->layout_boxes_
        || element->AsHTMLElement()->IsRootElement()
        || element->AsHTMLElement()->AsHTMLBodyElement() ||
        !element->AsHTMLElement()->computed_style() ||
        element->AsHTMLElement()->computed_style()->position()
          == cssom::KeywordValue::GetFixed()) {
      ///...
    } else {
      //scrollX += element->AsHTMLElement()->scroll_left();
      //scrollY += element->AsHTMLElement()->scroll_top();

      /// \todo dirty HACK to imitate scrolling support
      for (Node* ancestor_node =  element->AsHTMLElement()->parent_node(); ancestor_node;
           ancestor_node = ancestor_node->parent_node()) {
        Element* ancestor_element = ancestor_node->AsElement();
        if (!ancestor_element) {
          continue;
        }
        HTMLElement* ancestor_html_element = ancestor_element->AsHTMLElement().get();
        if (!ancestor_html_element) {
          continue;
        }
        DCHECK(ancestor_html_element->computed_style());
        if (ancestor_html_element->AsHTMLBodyElement()) {
          continue;
        }
        if (ancestor_html_element->computed_style()->position() ==
                cssom::KeywordValue::GetFixed()) {
          scrollX = 0.0f;
          scrollY = 0.0f;
          break;
        }
        //if (ancestor_html_element->computed_style()->position() ==
        //        cssom::KeywordValue::GetAbsolute()) {
        //  scrollX = 0.0f;
        //  scrollY = 0.0f;
        //  continue;
        //}
        scrollX += ancestor_html_element
          //->offset_left();
          ->scroll_left();
        scrollY += ancestor_html_element
          //->offset_top();
          ->scroll_top();
        //if (ancestor_html_element->computed_style()->position() ==
        //        cssom::KeywordValue::GetStatic()
        //    || ancestor_html_element->computed_style()->position() ==
        //        cssom::KeywordValue::GetAbsolute()) {
        //  scrollX += ancestor_html_element
        //    //->offset_left();
        //    ->scroll_left();
        //  scrollY += ancestor_html_element
        //    //->offset_top();
        //    ->scroll_top();
        //}
      }
    }

    //scrollX += element->AsHTMLElement()
    //  ->offset_left();
    //scrollY += element->AsHTMLElement()
    //  ->offset_top();

    /*auto scrollNode = element->AsHTMLElement()->offset_parent();
    while(scrollNode) {
      scrollX += scrollNode->AsHTMLElement()
        //->offset_left();
        ->scroll_left();
      scrollY += scrollNode->AsHTMLElement()
        //->offset_top();
        ->scroll_top();
      scrollNode = scrollNode->AsHTMLElement()->offset_parent();
    }
    if(scrollNode) {
      scrollX += scrollNode->AsHTMLElement()
        //->offset_left();
        ->scroll_left();
      scrollY += scrollNode->AsHTMLElement()
        //->offset_top();
        ->scroll_top();
    }*/

    /*auto scrollNode = element->AsHTMLElement()->offset_parent();
    while(scrollNode) {
      scrollX += scrollNode->AsHTMLElement()
        //->offset_left();
        ->scroll_left();
      scrollY += scrollNode->AsHTMLElement()
        //->offset_top();
        ->scroll_top();
      scrollNode = scrollNode->AsHTMLElement()->offset_parent();
    }
    if(scrollNode) {
      scrollX += scrollNode->AsHTMLElement()
        //->offset_left();
        ->scroll_left();
      scrollY += scrollNode->AsHTMLElement()
        //->offset_top();
        ->scroll_top();
    }*/

    //offsetX += element->AsHTMLElement()->scroll_left();
    //offsetY += element->AsHTMLElement()->scroll_top();
    /*auto offsetNode = element->AsHTMLElement()->offset_parent();
    while(offsetNode) {
      offsetX += offsetNode->AsHTMLElement()->scroll_left();
      offsetY += offsetNode->AsHTMLElement()->scroll_top();
      offsetNode = offsetNode->AsHTMLElement()->offset_parent();
    }
    if(offsetNode) {
      offsetX += offsetNode->AsHTMLElement()->scroll_left();
      offsetY += offsetNode->AsHTMLElement()->scroll_top();
    }*/

    element_scroll_coordinate.set_x(
      element_scroll_coordinate.x()
      + offsetX
      + scrollX);
    element_scroll_coordinate.set_y(
      element_scroll_coordinate.y()
      + offsetY
      + scrollY);


    scoped_refptr<dom::HTMLElement> html_element = element->AsHTMLElement().get();
    if (html_element && html_element->CanbeDesignatedByPointerIfDisplayed()) {
      ConsiderBoxes(html_element, layout_boxes,
        original_element_coordinate,
        element_scroll_coordinate, //element_prev_scroll_coordinate,
        element_scroll_coordinate);
    }
  }

  /// \todo dirty HACK to imitate scrolling support
  /// \todo obscure nested children
  for (dom::Element* child_element = element->first_element_child();
       child_element; child_element = child_element->next_element_sibling()) {
    scoped_refptr<dom::HTMLElement> child_html_element = child_element->AsHTMLElement().get();
    DCHECK(child_html_element);

    const bool isObscurable
      = element->AsHTMLElement()->computed_style()->overflow()
          == cssom::KeywordValue::GetHidden()
        || element->AsHTMLElement()->computed_style()->overflow()
          == cssom::KeywordValue::GetScroll()
        || element->AsHTMLElement()->computed_style()->overflow()
          == cssom::KeywordValue::GetAuto();

    /// \note The upper-left corner has the coordinates (0,0)
    /// \see https://developer.mozilla.org/en-US/docs/Web/API/Element/getBoundingClientRect
    if(/*element->AsHTMLElement()->GetUiNavItem()
       &&*/ isObscurable)
    {
      bool isFixed = child_html_element->computed_style()->position() ==
                cssom::KeywordValue::GetFixed();
      bool IsChildTopAboveParentBottom =
        child_html_element->GetBoundingClientRect()->top()
        - (isFixed ? 0 : element->AsHTMLElement()->scroll_top())
        - element->AsHTMLElement()->GetBoundingClientRect()->bottom()
        >= 0;
      bool IsChildBottomBelowParentTop =
        child_html_element->GetBoundingClientRect()->bottom()
        - (isFixed ? 0 : element->AsHTMLElement()->scroll_top())
        - element->AsHTMLElement()->GetBoundingClientRect()->top()
        < 0;
      bool IsChildRightBelowParentLeft =
        child_html_element->GetBoundingClientRect()->right()
        - (isFixed ? 0 : element->AsHTMLElement()->scroll_left())
        - element->AsHTMLElement()->GetBoundingClientRect()->left()
        < 0;
      bool IsChildLeftAboveParentRight =
        child_html_element->GetBoundingClientRect()->left()
        - (isFixed ? 0 : element->AsHTMLElement()->scroll_left())
        - element->AsHTMLElement()->GetBoundingClientRect()->right()
        >= 0;
      bool isChildFullyObsuredByScroll
        = IsChildTopAboveParentBottom
        || IsChildBottomBelowParentTop
        || IsChildRightBelowParentLeft
        || IsChildLeftAboveParentRight;
      if(isChildFullyObsuredByScroll
        || !child_html_element->IsBeingRendered()) {
        //printf("fully obscured element %s\n",
        //  element->AsHTMLElement()->text_content().value_or("").c_str());
        continue; /// \note skip element obscured by scroll area
      }
    }

    /// \todo dirty HACK to imitate scrolling support
    *override_coordinate = element_scroll_coordinate;

    ConsiderElement(child_element,
      //original_coordinate,
      //original_coordinate); // TODO <<<
      original_element_coordinate,
      original_element_coordinate,
      override_coordinate); // TODO <<<
  }

#if 0
    /// \ todo
  if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
      == cssom::kStaticKeywordName){
   element_scroll_coordinate.set_x(coordinate.x());
    //+ element->scroll_left());
   element_scroll_coordinate.set_y(coordinate.y());
    //+ element->scroll_top());
  } else if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
      == cssom::kAbsoluteKeywordName) {
   element_scroll_coordinate.set_x(coordinate.x());
    //+ element->scroll_left());
   element_scroll_coordinate.set_y(coordinate.y());
    //+ element->scroll_top());
  } else if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
      == cssom::kFixedKeywordName) {
   element_scroll_coordinate.set_x(original_coordinate.x());
    //+ element->scroll_left());
   element_scroll_coordinate.set_y(original_coordinate.y());
    //+ element->scroll_top());
  }

  LayoutBoxes* layout_boxes = GetLayoutBoxesIfNotEmpty(element);
  if (layout_boxes) {
    const Box* box = layout_boxes->boxes().front().get();
    if (box->computed_style() && box->IsTransformed()) {
      // Early out if the transform cannot be applied. This can occur if the
      // transform matrix is not invertible.
      if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &original_element_coordinate)) {
        return;
      }
      if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &element_scroll_coordinate)) {
        return;
      }
      if (!box->ApplyTransformActionToCoordinate(Box::kEnterTransform,
                                                 &element_prev_scroll_coordinate)) {
        return;
      }
    }

    if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
        == cssom::kFixedKeywordName) {
      scoped_refptr<dom::HTMLElement> html_element = element->AsHTMLElement().get();
      if (html_element && html_element->CanbeDesignatedByPointerIfDisplayed()) {
        ConsiderBoxes(html_element, layout_boxes,
          original_element_coordinate, element_prev_scroll_coordinate, element_prev_scroll_coordinate);
      }
    } else {
      scoped_refptr<dom::HTMLElement> html_element = element->AsHTMLElement().get();
      if (html_element && html_element->CanbeDesignatedByPointerIfDisplayed()) {
        if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
            == cssom::kFixedKeywordName) {
          ConsiderBoxes(html_element, layout_boxes,
            original_element_coordinate, element_prev_scroll_coordinate, element_prev_scroll_coordinate);
        } else {
          ConsiderBoxes(html_element, layout_boxes,
            original_element_coordinate, element_prev_scroll_coordinate, element_scroll_coordinate);
        }
      }
    }
  }

  if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
      == cssom::kFixedKeywordName) {
    for (dom::Element* child_element = element->first_element_child();
         child_element; child_element = child_element->next_element_sibling()) {
      ConsiderElement(child_element,
        original_element_coordinate, original_element_coordinate);
    }
  } else {
    for (dom::Element* child_element = element->first_element_child();
         child_element; child_element = child_element->next_element_sibling()) {
        if(element->AsHTMLElement()->style()->position(/*todo*/nullptr)
            == cssom::kFixedKeywordName) {
          ConsiderElement(child_element,
            original_element_coordinate, original_element_coordinate);
        } else {
          ConsiderElement(child_element,
            original_element_coordinate, element_scroll_coordinate);
        }
    }
  }
#endif
}

void TopmostEventTarget::ConsiderBoxes(
    const scoped_refptr<dom::HTMLElement>& html_element,
    LayoutBoxes* layout_boxes,
    const math::Vector2dF& original_coordinate,
    const math::Vector2dF& prev_coordinate,
    const math::Vector2dF& coordinate) {
  const Boxes& boxes = layout_boxes->boxes();
  Vector2dLayoutUnit original_layout_coordinate(LayoutUnit(original_coordinate.x()),
                                       LayoutUnit(original_coordinate.y()));
  Vector2dLayoutUnit prev_layout_coordinate(LayoutUnit(prev_coordinate.x()),
                                       LayoutUnit(prev_coordinate.y()));
  Vector2dLayoutUnit layout_coordinate(LayoutUnit(coordinate.x()),
                                       LayoutUnit(coordinate.y()));
  for (Boxes::const_iterator box_iterator = boxes.begin();
       box_iterator != boxes.end(); ++box_iterator) {
    Box* box = (*box_iterator).get();
    do {
      if (box->IsUnderCoordinate(
            original_layout_coordinate,
            prev_layout_coordinate,
            layout_coordinate)) {
        Box::RenderSequence render_sequence = box->GetRenderSequence();
        if (Box::IsRenderedLater(render_sequence, render_sequence_)) {
          html_element_ = html_element;
          box_ = box;
          render_sequence_.swap(render_sequence);
        }
      }
      box = box->GetSplitSibling();
    } while (box != NULL);
  }
}

namespace {
void SendStateChangeEvents(bool is_pointer_event,
                           scoped_refptr<dom::HTMLElement> previous_element,
                           scoped_refptr<dom::HTMLElement> target_element,
                           dom::PointerEventInit* event_init) {
  // Send enter/leave/over/out (status change) events when needed.
  if (previous_element != target_element) {
    const scoped_refptr<dom::Window>& view = event_init->view();

    // The enter/leave status change events apply to all ancestors up to the
    // nearest common ancestor between the previous and current element.
    scoped_refptr<dom::Element> nearest_common_ancestor;

    // Send out and leave events.
    if (previous_element) {
      event_init->set_related_target(target_element);
      if (is_pointer_event) {
        previous_element->DispatchEvent(new dom::PointerEvent(
            base::Tokens::pointerout(), view, *event_init));
      }
      previous_element->DispatchEvent(
          new dom::MouseEvent(base::Tokens::mouseout(), view, *event_init));

      // Find the nearest common ancestor, if there is any.
      dom::Document* previous_document = previous_element->node_document();
      if (previous_document) {
        if (target_element &&
            previous_document == target_element->node_document()) {
          // The nearest ancestor of the current element that is already
          // designated is the nearest common ancestor of it and the previous
          // element.
          nearest_common_ancestor = target_element;
          while (nearest_common_ancestor &&
                 nearest_common_ancestor->AsHTMLElement() &&
                 !nearest_common_ancestor->AsHTMLElement()->IsDesignated()) {
            nearest_common_ancestor = nearest_common_ancestor->parent_element();
          }
        }

        for (scoped_refptr<dom::Element> element = previous_element;
             element && element != nearest_common_ancestor;
             element = element->parent_element()) {
          if (is_pointer_event) {
            element->DispatchEvent(new dom::PointerEvent(
                base::Tokens::pointerleave(), dom::Event::kNotBubbles,
                dom::Event::kNotCancelable, view, *event_init));
          }
          element->DispatchEvent(new dom::MouseEvent(
              base::Tokens::mouseleave(), dom::Event::kNotBubbles,
              dom::Event::kNotCancelable, view, *event_init));
        }

        if (!target_element ||
            previous_document != target_element->node_document()) {
          previous_document->SetIndicatedElement(NULL);
        }
      }
    }

    // Send over and enter events.
    if (target_element) {
      event_init->set_related_target(previous_element);
      if (is_pointer_event) {
        target_element->DispatchEvent(new dom::PointerEvent(
            base::Tokens::pointerover(), view, *event_init));
      }
      target_element->DispatchEvent(
          new dom::MouseEvent(base::Tokens::mouseover(), view, *event_init));

      for (scoped_refptr<dom::Element> element = target_element;
           element != nearest_common_ancestor;
           element = element->parent_element()) {
        if (is_pointer_event) {
          element->DispatchEvent(new dom::PointerEvent(
              base::Tokens::pointerenter(), dom::Event::kNotBubbles,
              dom::Event::kNotCancelable, view, *event_init));
        }
        element->DispatchEvent(new dom::MouseEvent(
            base::Tokens::mouseenter(), dom::Event::kNotBubbles,
            dom::Event::kNotCancelable, view, *event_init));
      }
    }
  }
}

void SendCompatibilityMappingMouseEvent(
    const scoped_refptr<dom::HTMLElement>& target_element,
    const scoped_refptr<dom::Event>& event,
    const dom::PointerEvent* pointer_event,
    const dom::PointerEventInit& event_init,
    std::set<std::string>* mouse_event_prevent_flags) {
  // Send compatibility mapping mouse event if needed.
  //   https://www.w3.org/TR/2015/REC-pointerevents-20150224/#compatibility-mapping-with-mouse-events
  bool has_compatibility_mouse_event = true;
  base::Token type = pointer_event->type();
  if (type == base::Tokens::pointerdown()) {
    // If the pointer event dispatched was pointerdown and the event was
    // canceled, then set the PREVENT MOUSE EVENT flag for this pointerType.
    if (event->default_prevented()) {
      mouse_event_prevent_flags->insert(pointer_event->pointer_type());
      has_compatibility_mouse_event = false;
    } else {
      type = base::Tokens::mousedown();
    }
  } else {
    has_compatibility_mouse_event =
        mouse_event_prevent_flags->find(pointer_event->pointer_type()) ==
        mouse_event_prevent_flags->end();
    if (type == base::Tokens::pointerup()) {
      // If the pointer event dispatched was pointerup, clear the PREVENT
      // MOUSE EVENT flag for this pointerType.
      mouse_event_prevent_flags->erase(pointer_event->pointer_type());
      type = base::Tokens::mouseup();
    } else if (type == base::Tokens::pointermove()) {
      type = base::Tokens::mousemove();
    } else {
      has_compatibility_mouse_event = false;
    }
  }
  if (has_compatibility_mouse_event) {
    target_element->DispatchEvent(
        new dom::MouseEvent(type, event_init.view(), event_init));
  }
}

void InitializePointerEventInitFromEvent(
    base::WeakPtr<dom::HTMLElement> previous_html_element_weak_,
    const dom::MouseEvent* const mouse_event,
    const dom::PointerEvent* pointer_event, dom::PointerEventInit* event_init) {
  // For EventInit
  event_init->set_bubbles(mouse_event->bubbles());
  event_init->set_cancelable(mouse_event->cancelable());

  // For UIEventInit
  event_init->set_view(mouse_event->view());
  event_init->set_detail(mouse_event->detail());
  event_init->set_which(mouse_event->which());

  // For EventModifierInit
  event_init->set_ctrl_key(mouse_event->ctrl_key());
  event_init->set_shift_key(mouse_event->shift_key());
  event_init->set_alt_key(mouse_event->alt_key());
  event_init->set_meta_key(mouse_event->meta_key());

  // For MouseEventInit

  scoped_refptr<dom::HTMLElement> previous_html_element(
      previous_html_element_weak_.get());
  if(previous_html_element) {
    event_init->set_screen_x(mouse_event->screen_x()
    );
      //+ previous_html_element->scroll_left());
    event_init->set_screen_y(mouse_event->screen_y()
    );
      //+ previous_html_element->scroll_top());
    event_init->set_client_x(mouse_event->screen_x()
    );
      //+ previous_html_element->scroll_left());
    event_init->set_client_y(mouse_event->screen_y()
    );
      //+ previous_html_element->scroll_top());
  } else {
    event_init->set_screen_x(mouse_event->screen_x());
    event_init->set_screen_y(mouse_event->screen_y());
    event_init->set_client_x(mouse_event->screen_x());
    event_init->set_client_y(mouse_event->screen_y());
  }

  event_init->set_button(mouse_event->button());
  event_init->set_buttons(mouse_event->buttons());
  event_init->set_related_target(mouse_event->related_target());
  if (pointer_event) {
    // For PointerEventInit
    event_init->set_pointer_id(pointer_event->pointer_id());
    event_init->set_width(pointer_event->width());
    event_init->set_height(pointer_event->height());
    event_init->set_pressure(pointer_event->pressure());
    event_init->set_tilt_x(pointer_event->tilt_x());
    event_init->set_tilt_y(pointer_event->tilt_y());
    event_init->set_pointer_type(pointer_event->pointer_type());
    event_init->set_is_primary(pointer_event->is_primary());
  }
}
}  // namespace

void TopmostEventTarget::MaybeSendPointerEvents(
    const scoped_refptr<dom::Event>& event) {
  TRACE_EVENT0("cobalt::layout",
               "TopmostEventTarget::MaybeSendPointerEvents()");

  const dom::MouseEvent* const mouse_event =
      base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
  DCHECK(mouse_event);
  DCHECK(!html_element_);
  const dom::PointerEvent* pointer_event =
      (event->GetWrappableType() == base::GetTypeId<dom::PointerEvent>())
          ? base::polymorphic_downcast<const dom::PointerEvent* const>(
                event.get())
          : NULL;
  bool is_touchpad_event = false;

  // The target override element for the pointer event. This may not be the same
  // as the hit test target, and it also may not be set.
  scoped_refptr<dom::HTMLElement> target_override_element;

  // Store the data for the status change and pointer capture event(s).
  dom::PointerEventInit event_init;
  InitializePointerEventInitFromEvent(previous_html_element_weak_,
    mouse_event, pointer_event, &event_init);
  const scoped_refptr<dom::Window>& view = event_init.view();
  if (!view) {
    return;
  }
  dom::PointerState* pointer_state = view->document()->pointer_state();
  if (pointer_event) {
    pointer_state->SetActiveButtonsState(pointer_event->pointer_id(),
                                         pointer_event->buttons());
    is_touchpad_event = pointer_event->pointer_type() == "touchpad";
    if (is_touchpad_event) {
      if (pointer_event->type() == base::Tokens::pointerdown()) {
        pointer_state->SetActive(pointer_event->pointer_id());
        // Implicitly capture the pointer to the active element.
        //   https://www.w3.org/TR/pointerevents/#implicit-pointer-capture
        scoped_refptr<dom::HTMLElement> html_element;
        if (view->document()->active_element()) {
          html_element = view->document()->active_element()->AsHTMLElement();
        }
        if (html_element) {
          pointer_state->SetPendingPointerCaptureTargetOverride(
              pointer_event->pointer_id(), html_element.get());
        }
      }
    } else {
      pointer_state->SetActive(pointer_event->pointer_id());
    }
    target_override_element
      = pointer_state->GetPointerCaptureOverrideElement(
          pointer_event->pointer_id(), &event_init);
  }

  scoped_refptr<dom::HTMLElement> target_element;
  if (target_override_element) {
    target_element = target_override_element;
  } else {
    scoped_refptr<dom::HTMLElement> previous_html_element(
      previous_html_element_weak_.get());
    // Do a hit test if there is no target override element.
    if(previous_html_element) {
      if(previous_html_element->scroll_top()) {
        printf("previous_html_element scroll_left %f %f \n",
          previous_html_element->scroll_left(),
          previous_html_element->scroll_top());
      }
      math::Vector2dF coordinate(static_cast<float>(event_init.client_x()),
                                  //+ previous_html_element->scroll_left(),
                                 static_cast<float>(event_init.client_y()));
                                  //+ previous_html_element->scroll_top());
      math::Vector2dF override_coordinate;
      target_element = FindTopmostEventTarget(view->document(),
        coordinate, &override_coordinate);
      event_init.set_screen_x(override_coordinate.x());
      event_init.set_screen_y(override_coordinate.y());
      event_init.set_client_x(override_coordinate.x());
      event_init.set_client_y(override_coordinate.y());
    } else {
      math::Vector2dF coordinate(static_cast<float>(event_init.client_x()),
                                 static_cast<float>(event_init.client_y()));
      math::Vector2dF override_coordinate;
      target_element = FindTopmostEventTarget(view->document(),
        coordinate, &override_coordinate);
      event_init.set_screen_x(override_coordinate.x());
      event_init.set_screen_y(override_coordinate.y());
      event_init.set_client_x(override_coordinate.x());
      event_init.set_client_y(override_coordinate.y());
    }
  }

  if (target_element) {
    target_element->DispatchEvent(event);
  }

  if (pointer_event) {
    if (pointer_event->type() == base::Tokens::pointerup()) {
      if (is_touchpad_event) {
        // A touchpad becomes inactive after a pointerup.
        pointer_state->ClearActive(pointer_event->pointer_id());
      }
      // Implicit release of pointer capture.
      //   https://www.w3.org/TR/pointerevents/#implicit-release-of-pointer-capture
      pointer_state->ClearPendingPointerCaptureTargetOverride(
          pointer_event->pointer_id());
    }
    if (target_element && !is_touchpad_event) {
      SendCompatibilityMappingMouseEvent(target_element, event, pointer_event,
                                         event_init,
                                         &mouse_event_prevent_flags_);
    }
  }

  if (target_element && !is_touchpad_event) {
    // Send the click event if needed, which is not prevented by canceling the
    // pointerdown event.
    //   https://www.w3.org/TR/uievents/#event-type-click
    //   https://www.w3.org/TR/pointerevents/#compatibility-mapping-with-mouse-events
    if (event_init.button() == 0 &&
        ((mouse_event->type() == base::Tokens::pointerup()) ||
         (mouse_event->type() == base::Tokens::mouseup()))) {
      target_element->DispatchEvent(
          new dom::MouseEvent(base::Tokens::click(), view, event_init));
    }
  }

  scoped_refptr<dom::HTMLElement> previous_html_element(
      previous_html_element_weak_.get());

  SendStateChangeEvents(pointer_event, previous_html_element, target_element,
                        &event_init);

  if (target_element) {
    previous_html_element_weak_ = base::AsWeakPtr(target_element.get());
  } else {
    previous_html_element_weak_.reset();
  }
  DCHECK(!html_element_);
}

}  // namespace layout
}  // namespace cobalt
