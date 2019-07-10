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

#include <skia/modules/skottie/include/Skottie.h>
#include <skia/modules/skottie/utils/SkottieUtils.h>
#include <skia/include/core/SkSize.h>

namespace cobalt {
namespace render_tree {

//static SkString fAnimPath = SkString("./resources/animations/data.json");

// not in spec
class SkottieNode : public Node {
 public:
  //typedef base::Callback<bool(const math::Rect&)> SetBoundsCB;
  typedef base::Callback<sk_sp<skottie::Animation>()> GetSkottieAnimCB;

  struct Builder {
    Builder(const Builder&) = default;
    Builder(const math::RectF& rect
        //, const SetBoundsCB& set_bounds_cb
        //, sk_sp<skottie::Animation> animation
        //, SkMSec animation_time
        )
        : rect(rect)
        //, animation(animation)
        //, animation_time(animation_time)
        //, set_bounds_cb(set_bounds_cb)
        {}

    bool operator==(const Builder& other) const {
      return rect == other.rect /*&& set_bounds_cb.Equals(other.set_bounds_cb)*/;
    }

    // The destination rectangle (size includes border).
    math::RectF rect;

    //const SetBoundsCB set_bounds_cb;

    sk_sp<skottie::Animation> animation;

    //skottie::Animation::Builder::Stats animation_stats;

    SkMSec animation_time = 0;

    // see image_node_builder->source = replace_image_cb.Run();
  };

  // Forwarding constructor to the set of Builder constructors.
  template <typename... Args>
  SkottieNode(Args&&... args) : data_(std::forward<Args>(args)...) {}

  void Accept(NodeVisitor* visitor) override;
  math::RectF GetBounds() const override;

  base::TypeId GetTypeId() const override {
    return base::GetTypeId<SkottieNode>();
  }

  const Builder& data() const { return data_; }

 private:
  const Builder data_;
};

}  // namespace render_tree
}  // namespace cobalt
