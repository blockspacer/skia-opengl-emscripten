// Copyright 2016 The Cobalt Authors. All Rights Reserved.
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

#pragma once

#include "base/callback.h"
#include "base/compiler_specific.h"
#include "cobalt/base/type_id.h"
#include "cobalt/math/rect.h"
#include "cobalt/math/rect_f.h"
#include "cobalt/render_tree/node.h"

#include "cobalt/base/polymorphic_downcast.h"

#include "cobalt/render_tree/custom_node.h"

namespace cobalt {
namespace render_tree {

//static SkString fAnimPath = SkString("./resources/animations/data.json");

// not in spec
class InputNode : public CustomNode {
 public:
  //typedef base::Callback<bool(const math::Rect&)> SetBoundsCB;
  //typedef base::Callback<sk_sp<skottie::Animation>()> GetSkottieAnimCB;

  struct Builder : public CustomNode::Builder {
    explicit Builder(const Builder&) = default;
    explicit Builder(const CustomNode::Builder& customNodeBuilder)
      : CustomNode::Builder() {
    }
    explicit Builder(const math::RectF& rect
        //, const SetBoundsCB& set_bounds_cb
        //, sk_sp<skottie::Animation> animation
        //, SkMSec animation_time
        )
        : CustomNode::Builder(), rect(rect)
        //, animation(animation)
        //, animation_time(animation_time)
        //, set_bounds_cb(set_bounds_cb)
        {}

    bool operator==(const CustomNode::Builder& other) const override {
      return rect == base::polymorphic_downcast<Builder>(other).rect /*&& set_bounds_cb.Equals(other.set_bounds_cb)*/;
    }

    bool operator==(const Builder& other) const {
      return rect == other.rect /*&& set_bounds_cb.Equals(other.set_bounds_cb)*/;
    }

    // The destination rectangle (size includes border).
    math::RectF rect;
  };

  // Forwarding constructor to the set of Builder constructors.
  template <typename... Args>
  explicit InputNode(Args&&... args) : data_(std::forward<Args>(args)...) {}

  void RenderTreeNodeVisit(const render_tree::NodeVisitor* render_target) override;

  void Accept(NodeVisitor* visitor) override;

  math::RectF GetBounds() const override;

  bool NodeCanRenderWithOpacity() override { return true; }

  const char* DebugTreePrintName() override { return "InputNode"; }

  CustomNode* CreateWithBuilder(CustomNode::Builder builder) override {
    InputNode::Builder input_builder(builder);
    printf("created InputNode\n");
    return new InputNode(input_builder);
  }

  /*CustomNode* CreateWithBuilder(CustomNode::Builder builder) override {
    return CreateInputNodeWithBuilder(builder);
  }*/

  base::TypeId GetTypeId() const override {
    return base::GetTypeId<InputNode>();
  }

  const Builder& data() const override { return data_; }

  /*InputNode* CreateWithBuilder(InputNode::Builder builder) override {
    return new InputNode(builder);
  }*/

 private:
  const Builder data_;
};

}  // namespace render_tree
}  // namespace cobalt
