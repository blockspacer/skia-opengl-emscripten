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
#include "cobalt/render_tree/node_visitor.h"

#include <skia/include/core/SkCanvas.h>

/*namespace renderer {
namespace rasterizer {
namespace skia {
  class RenderTreeNodeVisitor;
} // namespace skia
} // namespace rasterizer
} // namespace renderer*/

namespace cobalt {
namespace render_tree {

// not in spec
class CustomNode : public Node {
 public:
  typedef base::Callback<
    void(render_tree::NodeVisitor*,
      render_tree::CustomNode* custom_node)> onDrawCB;

  struct Builder {
    Builder(const onDrawCB& on_draw_cb)
      : on_draw_cb_(on_draw_cb)
    {};

    virtual bool operator==(const Builder& other) const {
      return true;
    };

    onDrawCB on_draw_cb_;
  };

  // Forwarding constructor to the set of Builder constructors.
  template <typename... Args>
  CustomNode(Args&&... args) {};

  virtual void Accept(NodeVisitor* visitor) override  = 0;
  virtual math::RectF GetBounds() const override = 0;

  virtual base::TypeId GetTypeId() const override = 0;

  //virtual void RenderTreeNodeVisit(SkCanvas* render_target) = 0;
  //virtual void RenderTreeNodeVisit(const renderer::rasterizer::skia::RenderTreeNodeVisitor* render_target) = 0;
  virtual void RenderTreeNodeVisit(const render_tree::NodeVisitor* render_target) = 0;

  virtual bool NodeCanRenderWithOpacity() = 0;

  virtual const char* DebugTreePrintName() = 0;

  /// \note custom
  virtual CustomNode* CreateWithBuilder(const CustomNode::Builder& builder) = 0;

  virtual const Builder& data() const = 0;
};

}  // namespace render_tree
}  // namespace cobalt
