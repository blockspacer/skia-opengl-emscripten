// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "build/build_config.h"

#include "third_party/blink/renderer/core/dom/element_traversal.h"
#include "third_party/blink/renderer/core/layout/layout_block.h"
#include "testing/gmock/include/gmock/gmock-matchers.h"
#include "testing/gtest/include/gtest/gtest.h"
#include "third_party/blink/renderer/core/layout/layout_block_flow.h"
#include "third_party/blink/renderer/core/testing/core_unit_test_helper.h"
#include "third_party/blink/renderer/platform/testing/runtime_enabled_features_test_helpers.h"

using ::testing::MatchesRegex;

namespace blink {

class LayoutBlockTest : public RenderingTest {};

TEST_F(LayoutBlockTest, LayoutNameCalledWithNullStyle) {
  scoped_refptr<ComputedStyle> style = ComputedStyle::Create();
  LayoutObject* obj = LayoutBlockFlow::CreateAnonymous(&GetDocument(), style,
                                                       LegacyLayout::kAuto);
  obj->SetModifiedStyleOutsideStyleRecalc(nullptr,
                                          LayoutObject::ApplyStyleChanges::kNo);
  EXPECT_FALSE(obj->Style());
  EXPECT_THAT(obj->DecoratedName().Ascii().data(),
              MatchesRegex("LayoutN?G?BlockFlow \\(anonymous\\)"));
  obj->Destroy();
}

TEST_F(LayoutBlockTest, WidthAvailableToChildrenChanged) {
  ScopedOverlayScrollbarsForTest overlay_scrollbars(false);
  SetBodyInnerHTML(R"HTML(
    <!DOCTYPE html>
    <div id='list' style='overflow-y:auto; width:150px; height:100px'>
      <div style='height:20px'>Item</div>
      <div style='height:20px'>Item</div>
      <div style='height:20px'>Item</div>
      <div style='height:20px'>Item</div>
      <div style='height:20px'>Item</div>
      <div style='height:20px'>Item</div>
    </div>
  )HTML");
  Element* list_element = GetDocument().getElementById("list");
  ASSERT_TRUE(list_element);
  LayoutBox* list_box = ToLayoutBox(list_element->GetLayoutObject());
  Element* item_element = ElementTraversal::FirstChild(*list_element);
  ASSERT_TRUE(item_element);
  ASSERT_GT(list_box->VerticalScrollbarWidth(), 0);
  ASSERT_EQ(item_element->OffsetWidth(),
            150 - list_box->VerticalScrollbarWidth());

  DummyExceptionStateForTesting exception_state;
  list_element->style()->setCSSText(&GetDocument(), "width:150px;height:100px;",
                                    exception_state);
  ASSERT_FALSE(exception_state.HadException());
  UpdateAllLifecyclePhasesForTest();
  ASSERT_EQ(list_box->VerticalScrollbarWidth(), 0);
  ASSERT_EQ(item_element->OffsetWidth(), 150);
}

TEST_F(LayoutBlockTest, OverflowWithTransformAndPerspective) {
  SetBodyInnerHTML(R"HTML(
    <div id='target' style='width: 100px; height: 100px; overflow: scroll;
        perspective: 200px;'>
      <div style='transform: rotateY(-45deg); width: 140px; height: 100px'>
      </div>
    </div>
  )HTML");
  LayoutBox* scroller =
      ToLayoutBox(GetDocument().getElementById("target")->GetLayoutObject());
  EXPECT_EQ(119.5, scroller->LayoutOverflowRect().Width().ToFloat());
}

TEST_F(LayoutBlockTest, NestedInlineVisualOverflow) {
  // Only exercises legacy code.
  if (RuntimeEnabledFeatures::LayoutNGEnabled())
    return;
  SetBodyInnerHTML(R"HTML(
    <label style="font-size: 0px">
      <input type="radio" style="margin-left: -15px">
    </label>
  )HTML");
  auto* body = To<LayoutBlockFlow>(GetDocument().body()->GetLayoutObject());
  RootInlineBox* box = body->FirstRootBox();
#if defined(OS_MACOSX)
  EXPECT_EQ(LayoutRect(-17, 0, 16, 19),
            box->VisualOverflowRect(box->LineTop(), box->LineBottom()));
#elif defined(OS_ANDROID)
  EXPECT_EQ(LayoutRect(-15, 3, 19, 16),
            box->VisualOverflowRect(box->LineTop(), box->LineBottom()));
#else
  EXPECT_EQ(LayoutRect(-15, 3, 16, 13),
            box->VisualOverflowRect(box->LineTop(), box->LineBottom()));
#endif
}

TEST_F(LayoutBlockTest, ContainmentStyleChange) {
  SetBodyInnerHTML(R"HTML(
    <style>
      * { display: block }
    </style>
    <div id=target style="contain:strict">
      <div>
        <div>
          <div id=contained style="position: fixed"></div>
          <div></div>
        <div>
      </div>
    </div>
  )HTML");

  Element* target_element = GetDocument().getElementById("target");
  auto* target = To<LayoutBlockFlow>(target_element->GetLayoutObject());
  LayoutBox* contained = ToLayoutBox(GetLayoutObjectByElementId("contained"));
  EXPECT_TRUE(target->PositionedObjects()->Contains(contained));

  // Remove layout containment. This should cause |contained| to now be
  // in the positioned objects set for the LayoutView, not |target|.
  target_element->setAttribute(html_names::kStyleAttr, "contain:style");
  UpdateAllLifecyclePhasesForTest();
  EXPECT_FALSE(target->PositionedObjects());
  EXPECT_TRUE(
      GetDocument().GetLayoutView()->PositionedObjects()->Contains(contained));
}

}  // namespace blink
