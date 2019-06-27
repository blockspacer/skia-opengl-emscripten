// Copyright 2014 The Cobalt Authors. All Rights Reserved.
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

#include "cobalt/layout/layout_manager.h"

#include <algorithm>
#include <cmath>
#include <memory>
#include <string>

#include "base/bind.h"
#include "base/memory/ptr_util.h"
#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
#include "base/timer/timer.h"
#endif
#include "base/trace_event/trace_event.h"
#include "cobalt/cssom/cascade_precedence.h"
#include "cobalt/dom/camera_3d.h"
#include "cobalt/dom/html_body_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/html_head_element.h"
#include "cobalt/dom/html_html_element.h"
#include "cobalt/layout/benchmark_stat_names.h"
#include "cobalt/layout/block_formatting_block_container_box.h"
#include "cobalt/layout/initial_containing_block.h"
#include "cobalt/layout/layout.h"
#include "cobalt/render_tree/animations/animate_node.h"
#include "cobalt/render_tree/matrix_transform_3d_node.h"
#include "third_party/icu/source/common/unicode/brkiter.h"
#include "third_party/icu/source/common/unicode/locid.h"

#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
#include "emscripten/emscripten.h"
#include "base/task_runner.h"
#include "base/bind.h"
#endif

namespace cobalt {
namespace layout {

class LayoutManager::Impl : public dom::DocumentObserver {
 public:
  Impl(const std::string& name, const scoped_refptr<dom::Window>& window,
       const OnRenderTreeProducedCallback& on_render_tree_produced,
       const OnLayoutCallback& on_layout, LayoutTrigger layout_trigger,
       int dom_max_element_depth, float layout_refresh_rate,
       const std::string& language, bool enable_image_animations,
       LayoutStatTracker* layout_stat_tracker,
       bool clear_window_with_background_color);
  ~Impl();

  // From dom::DocumentObserver.
  void OnLoad() override;
  void OnMutation() override;
  void OnFocusChanged() override {}

  // Called to perform a synchronous layout.
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//  void DoSynchronousLayout(const bool forceReLayout = true);
//#else
  void DoSynchronousLayout(const bool forceReLayout = false);
//#endif
  scoped_refptr<render_tree::Node> DoSynchronousLayoutAndGetRenderTree();

  void Suspend();
  void Resume();
  void Purge();

  bool IsRenderTreePending() const;

 //private:
 public:
  void DirtyLayout();
  void setLayoutPending(const bool isPending);
  void StartLayoutTimer();
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//  void DoLayoutAndProduceRenderTree(const bool forceReLayout = true);
//#else
  void DoLayoutAndProduceRenderTree(const bool forceReLayout = false);
//#endif

#if defined(ENABLE_TEST_RUNNER)
  void DoTestRunnerLayoutCallback();
#endif  // ENABLE_TEST_RUNNER

  const scoped_refptr<dom::Window> window_;
  const icu::Locale locale_;
  const std::unique_ptr<UsedStyleProvider> used_style_provider_;
  const OnRenderTreeProducedCallback on_render_tree_produced_callback_;
  const OnLayoutCallback on_layout_callback_;
  const LayoutTrigger layout_trigger_;

  bool produced_render_tree_;

  // Setting these flags triggers an update of the layout box tree and the
  // generation of a new render tree at a regular interval (e.g. 60Hz). Events
  // such as DOM mutations cause them to be set to true. While the render tree
  // is excusively produced at the regular interval, the box tree can also be
  // updated via a call to DoSynchronousLayout().
  bool are_computed_styles_and_box_tree_dirty_;
  base::CVal<bool> is_render_tree_pending_;

  // Construction of |BreakIterator| requires a disk read, so we cache them
  // in the layout manager in order to reuse them with all layouts happening
  // in the context of one |WebModule|.
  //   http://userguide.icu-project.org/boundaryanalysis#TOC-Reuse
  std::unique_ptr<icu::BreakIterator> line_break_iterator_;
  std::unique_ptr<icu::BreakIterator> character_break_iterator_;

  base::RepeatingTimer layout_timer_;
  int dom_max_element_depth_;
  float layout_refresh_rate_;

  LayoutStatTracker* const layout_stat_tracker_;

  // The initial containing block is kept until the next layout, so that
  // the box tree remains valid.
  scoped_refptr<BlockLevelBlockContainerBox> initial_containing_block_;

  bool suspended_;

  const bool clear_window_with_background_color_;

  DISALLOW_COPY_AND_ASSIGN(Impl);
};

namespace {

void UpdateCamera(
    float width_to_height_aspect_ratio, scoped_refptr<input::Camera3D> camera,
    float max_horizontal_fov_rad, float max_vertical_fov_rad,
    render_tree::MatrixTransform3DNode::Builder* transform_node_builder) {
  float vertical_fov_rad =
      std::min(max_vertical_fov_rad,
               2 * static_cast<float>(atan(tan(max_horizontal_fov_rad * 0.5f) /
                                           width_to_height_aspect_ratio)));
  camera->UpdatePerspective(width_to_height_aspect_ratio, vertical_fov_rad);
  base::CameraTransform transform(
      camera->GetCameraTransformAndUpdateOrientation());
  DCHECK(!transform.right_eye);
  transform_node_builder->transform =
      transform.left_eye_or_mono.projection_matrix *
      transform.left_eye_or_mono.view_matrix;
}

scoped_refptr<render_tree::Node> AttachCameraNodes(
    const scoped_refptr<dom::Window> window,
    const scoped_refptr<render_tree::Node>& source,
    float max_horizontal_fov_rad, float max_vertical_fov_rad) {
  // Attach a 3D transform node that applies the current camera matrix transform
  // to the rest of the render tree.
  scoped_refptr<render_tree::MatrixTransform3DNode> transform_node =
      new render_tree::MatrixTransform3DNode(
          source, glm::mat4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1));

  // We setup an animation on the camera transform node such that the camera
  // is driven by the renderer thread and can bypass layout entirely.
  render_tree::animations::AnimateNode::Builder animate_node_builder;
  animate_node_builder.Add(
      transform_node,
      base::Bind(&UpdateCamera, window->inner_width() / window->inner_height(),
                 window->camera_3d()->impl(), max_horizontal_fov_rad,
                 max_vertical_fov_rad));
  return new render_tree::animations::AnimateNode(animate_node_builder,
                                                  transform_node);
}

}  // namespace

LayoutManager::Impl::Impl(
    const std::string& name, const scoped_refptr<dom::Window>& window,
    const OnRenderTreeProducedCallback& on_render_tree_produced,
    const OnLayoutCallback& on_layout, LayoutTrigger layout_trigger,
    int dom_max_element_depth, float layout_refresh_rate,
    const std::string& language, bool enable_image_animations,
    LayoutStatTracker* layout_stat_tracker,
    bool clear_window_with_background_color)
    : window_(window),
      locale_(icu::Locale::createCanonical(language.c_str())),
      used_style_provider_(new UsedStyleProvider(
          window->html_element_context(), window->document()->font_cache(),
          base::Bind(&AttachCameraNodes, window), enable_image_animations)),
      on_render_tree_produced_callback_(on_render_tree_produced),
      on_layout_callback_(on_layout),
      layout_trigger_(layout_trigger),
      produced_render_tree_(false),
      are_computed_styles_and_box_tree_dirty_(true),
      is_render_tree_pending_(
          base::StringPrintf("%s.Layout.IsRenderTreePending", name.c_str()),
          true, "Non-zero when a new render tree is pending."),
      dom_max_element_depth_(dom_max_element_depth),
      layout_refresh_rate_(layout_refresh_rate),
      layout_stat_tracker_(layout_stat_tracker),
      suspended_(false),
      clear_window_with_background_color_(clear_window_with_background_color) {

  //printf("LayoutManager::Impl::Impl::LayoutManager::Impl::Impl()...%s\n", locale_.getName());
  DCHECK(window_);
  window_->document()->AddObserver(this);
  window_->SetSynchronousLayoutCallback(
      base::Bind(&Impl::DoSynchronousLayout, base::Unretained(this),
      /* forceReLayout*/ false));
  window_->SetSynchronousLayoutAndProduceRenderTreeCallback(base::Bind(
      &Impl::DoSynchronousLayoutAndGetRenderTree, base::Unretained(this)));

  UErrorCode status = U_ZERO_ERROR;
  //printf("1 createLineInstance locale_ %s\n", locale_.getName());
  line_break_iterator_ =
      base::WrapUnique(icu::BreakIterator::createLineInstance(locale_, status));
  CHECK(U_SUCCESS(status)) << "createLineInstance locale_=" << locale_.getName();
  //DCHECK(line_break_iterator_);
  //printf("2 BreakIterator createLineInstance locale_ %s\n", locale_.getName());
  status = U_ZERO_ERROR;
  character_break_iterator_ = base::WrapUnique(
      icu::BreakIterator::createCharacterInstance(locale_, status));
  CHECK(U_SUCCESS(status));
  //DCHECK(character_break_iterator_);

#if defined(ENABLE_TEST_RUNNER)
  if (layout_trigger_ == kTestRunnerMode) {
    window_->test_runner()->set_trigger_layout_callback(
        base::Bind(&LayoutManager::Impl::DoTestRunnerLayoutCallback,
                   base::Unretained(this)));
  }
#endif  // ENABLE_TEST_RUNNER
}

LayoutManager::Impl::~Impl() { window_->document()->RemoveObserver(this); }

void LayoutManager::Impl::OnLoad() {
#if defined(ENABLE_TEST_RUNNER)
  if (layout_trigger_ != kTestRunnerMode) {
#else
  {
#endif
    // Start the layout timer.  If the TestRunner is active, then we do not
    // start a timer as the TestRunner will drive the triggering of layouts.
    StartLayoutTimer();
  }

#if defined(ENABLE_TEST_RUNNER)
  if (layout_trigger_ == kTestRunnerMode &&
      !window_->test_runner()->should_wait()) {
    DirtyLayout();

    // Run the |DoLayoutAndProduceRenderTree| task after onload event finished.
    base::MessageLoop::current()->task_runner()->PostTask(
        FROM_HERE,
        base::Bind(&LayoutManager::Impl::DoLayoutAndProduceRenderTree,
                   base::Unretained(this), /* forceReLayout*/ false));
  }
#endif  // ENABLE_TEST_RUNNER
}

void LayoutManager::Impl::OnMutation() {
  if (layout_trigger_ == kOnDocumentMutation) {
    DirtyLayout();
  }
}

scoped_refptr<render_tree::Node>
LayoutManager::Impl::DoSynchronousLayoutAndGetRenderTree() {
  TRACE_EVENT0("cobalt::layout",
               "LayoutManager::Impl::DoSynchronousLayoutAndGetRenderTree()");

//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//  DoSynchronousLayout(/* forceReLayout*/ true);
//#else
  DoSynchronousLayout(/* forceReLayout*/ false);
//#endif

  //DCHECK(initial_containing_block_);
  scoped_refptr<render_tree::Node> render_tree_root =
      layout::GenerateRenderTreeFromBoxTree(used_style_provider_.get(),
                                            layout_stat_tracker_,
                                            &initial_containing_block_);

  base::Optional<double> current_time_milliseconds =
      this->window_->document()->timeline()->current_time();
  DCHECK(current_time_milliseconds.has_value());
  base::TimeDelta current_time =
      base::TimeDelta::FromMillisecondsD(*current_time_milliseconds);

  using render_tree::animations::AnimateNode;
  AnimateNode* animate_node =
      base::polymorphic_downcast<AnimateNode*>(render_tree_root.get());
  AnimateNode::AnimateResults results = animate_node->Apply(current_time);

  return results.animated->source();
}

void LayoutManager::Impl::DoSynchronousLayout(const bool forceReLayout) {
  TRACE_EVENT0("cobalt::layout", "LayoutManager::Impl::DoSynchronousLayout()");
  if (suspended_) {
    DLOG(WARNING) << "Skipping layout since Cobalt is in a suspended state.";
    return;
  }

  //DCHECK(line_break_iterator_);
  DCHECK(window_);
  if (are_computed_styles_and_box_tree_dirty_ || forceReLayout) {
    DCHECK(!locale_.isBogus());
    DCHECK(window_);
    DCHECK(window_->document());
    DCHECK(dom_max_element_depth_ > 0);
    DCHECK(used_style_provider_);
    //DCHECK(layout_stat_tracker_);
    DCHECK(line_break_iterator_);
    DCHECK(character_break_iterator_);
    //DCHECK(initial_containing_block_);
    layout::UpdateComputedStylesAndLayoutBoxTree(
        locale_, window_->document(), dom_max_element_depth_,
        used_style_provider_.get(), layout_stat_tracker_,
        line_break_iterator_.get(), character_break_iterator_.get(),
        &initial_containing_block_, clear_window_with_background_color_);

//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    /// \todo always dirty for now.
//    DCHECK(are_computed_styles_and_box_tree_dirty_);
//#else
    are_computed_styles_and_box_tree_dirty_ = false;
//#endif
  }
}

void LayoutManager::Impl::Suspend() {
  // Mark that we are suspended so that we don't try to perform any layouts.
  suspended_ = true;
  Purge();
}

void LayoutManager::Impl::Resume() {
  // Re-enable layouts.
  suspended_ = false;
}

void LayoutManager::Impl::Purge() {
  // Invalidate any cached layout boxes from the document prior to clearing
  // the initial containing block. That'll ensure that the full box tree is
  // destroyed when the containing block is destroyed and that no children of
  // |initial_containing_block_| are holding on to stale parent pointers.
  window_->document()->InvalidateLayoutBoxes();

  // Clear our reference to the initial containing block to allow any resources
  // like images that were referenced by it to be released.
  initial_containing_block_ = NULL;

  DirtyLayout();
}

bool LayoutManager::Impl::IsRenderTreePending() const {
  return is_render_tree_pending_;
}

#if defined(ENABLE_TEST_RUNNER)
void LayoutManager::Impl::DoTestRunnerLayoutCallback() {
  DCHECK_EQ(kTestRunnerMode, layout_trigger_);
  DirtyLayout();

  if (layout_trigger_ == kTestRunnerMode &&
      window_->test_runner()->should_wait()) {
    TRACE_EVENT_BEGIN0("cobalt::layout", kBenchmarkStatNonMeasuredLayout);
  }

  DoLayoutAndProduceRenderTree();

  if (layout_trigger_ == kTestRunnerMode &&
      window_->test_runner()->should_wait()) {
    TRACE_EVENT_END0("cobalt::layout", kBenchmarkStatNonMeasuredLayout);
  }
}
#endif  // ENABLE_TEST_RUNNER

void LayoutManager::Impl::DirtyLayout() {
  are_computed_styles_and_box_tree_dirty_ = true;
  is_render_tree_pending_ = true;
}

void LayoutManager::Impl::setLayoutPending(const bool isPending) {
  is_render_tree_pending_ = isPending;
}

void LayoutManager::Impl::StartLayoutTimer() {
  printf("layout_refresh_rate_ %f\n", layout_refresh_rate_);
  // TODO: Eventually we would like to instead base our layouts off of a
  //       "refresh" signal generated by the rasterizer, instead of trying to
  //       match timers to the graphics' refresh rate, which is error prone.
  const int64_t timer_interval_in_microseconds =
      static_cast<int64_t>(base::Time::kMicrosecondsPerSecond * 1.0f /
                           (layout_refresh_rate_ + 1.0f));

#if !(defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
  printf("layout_timer_.Start %ld\n", timer_interval_in_microseconds);
  layout_timer_.Start(
      FROM_HERE,
      base::TimeDelta::FromMicroseconds(timer_interval_in_microseconds),
      base::Bind(&LayoutManager::Impl::DoLayoutAndProduceRenderTree,
                 base::Unretained(this), /* forceReLayout*/ false));
#endif
}

void LayoutManager::Impl::DoLayoutAndProduceRenderTree(const bool forceReLayout) {
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 1\n");
  TRACE_EVENT0("cobalt::layout",
               "LayoutManager::Impl::DoLayoutAndProduceRenderTree()");

  if (suspended_) return;

  DCHECK(window_);
  DCHECK(window_->document());

  const scoped_refptr<dom::Document>& document = window_->document();

  if (!document->html()) {
    return;
  }
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 2\n");

//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    emscripten_async_call_closure(
//      base::BindOnce([](scoped_refptr<dom::Window> window_) {
//    DCHECK(window_);
//    window_->document()->SampleTimelineTime();
//  }, window_));
//#else
  // Update the document's sample time, used for updating animations.
  document->SampleTimelineTime();
//#endif

  bool has_layout_processing_started = false;
  if (window_->HasPendingAnimationFrameCallbacks()) {
    if (are_computed_styles_and_box_tree_dirty_) {
      has_layout_processing_started = true;
      TRACE_EVENT_BEGIN0("cobalt::layout", kBenchmarkStatLayout);
      // Update our computed style before running animation callbacks, so that
      // any transitioning elements adjusted during the animation callback will
      // transition from their previously set value.
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    emscripten_async_call_closure(
//      base::BindOnce([](scoped_refptr<dom::Window> window_) {
//        DCHECK(window_);
//        window_->document()->UpdateComputedStyles();
//      }, window_)
//    );
//#else
      document->UpdateComputedStyles();
//#endif
    }

    // Note that according to:
    //     https://www.w3.org/TR/2015/WD-web-animations-1-20150707/#model-liveness,
    // "The time passed to a requestAnimationFrame callback will be equal to
    // document.timeline.currentTime".  In our case,
    // document.timeline.currentTime is derived from the latest sample time.
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    emscripten_async_call_closure(
//      base::BindOnce([](scoped_refptr<dom::Window> window_) {
//        DCHECK(window_);
//        window_->RunAnimationFrameCallbacks();
//      }, window_)
//    );
//#else
    window_->RunAnimationFrameCallbacks();
//#endif
  }
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 3\n");

  // It should never be possible for for the computed styles and box tree to
  // be dirty when a render tree is not pending.
  DCHECK(is_render_tree_pending_ || !are_computed_styles_and_box_tree_dirty_
    || forceReLayout);
  if (is_render_tree_pending_ || forceReLayout) {
    if (!has_layout_processing_started) {
      // We want to catch the beginning of all layout processing.  If it didn't
      // begin before the call to RunAnimationFrameCallbacks(), then the flow
      // starts here instead.
      TRACE_EVENT_BEGIN0("cobalt::layout", kBenchmarkStatLayout);
    }

    DoSynchronousLayout(forceReLayout);
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 4\n");

    // If no render tree has been produced yet, check if html display
    // should prevent the first render tree.
    bool display_none_prevents_render =
        !produced_render_tree_ && !document->html()->IsDisplayed();

    if (!document->render_postponed() && !display_none_prevents_render) {
      //DCHECK(initial_containing_block_);
      scoped_refptr<render_tree::Node> render_tree_root =
          layout::GenerateRenderTreeFromBoxTree(used_style_provider_.get(),
                                                layout_stat_tracker_,
                                                &initial_containing_block_);
      bool run_on_render_tree_produced_callback = true;
      produced_render_tree_ = true;
#if defined(ENABLE_TEST_RUNNER)
      if (layout_trigger_ == kTestRunnerMode &&
          window_->test_runner()->should_wait()) {
        run_on_render_tree_produced_callback = false;
      }
#endif  // ENABLE_TEST_RUNNER
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 5\n");

      if (run_on_render_tree_produced_callback) {
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    emscripten_async_call_closure(
//      base::BindOnce(on_render_tree_produced_callback_, LayoutResults(
//            render_tree_root, base::TimeDelta::FromMillisecondsD(
//                                  *document->timeline()->current_time()))));
//#else
        on_render_tree_produced_callback_.Run(LayoutResults(
            render_tree_root, base::TimeDelta::FromMillisecondsD(
                                  *document->timeline()->current_time())));
//#endif
      }
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 6\n");

//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//     /// \todo always pending for now.
//     //is_render_tree_pending_ = false;
////
////    emscripten_async_call_closure(
////      base::BindOnce(&LayoutManager::Impl::setLayoutPending,
////        base::Unretained(this), false)
////    );
//#else
      is_render_tree_pending_ = false;
//#endif
    }
    TRACE_EVENT_END0("cobalt::layout", kBenchmarkStatLayout);

    //layout_timer_.Stop(); // TODO: remove line
  }
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 7\n");
//#if (defined(OS_EMSCRIPTEN) && defined(DISABLE_PTHREADS))
//    emscripten_async_call_closure(
//      base::BindOnce(on_layout_callback_));
//#else
  on_layout_callback_.Run();
//#endif
//P_LOG("LayoutManager::Impl::DoLayoutAndProduceRenderTree 8\n");
}

LayoutManager::LayoutManager(
    const std::string& name, const scoped_refptr<dom::Window>& window,
    const OnRenderTreeProducedCallback& on_render_tree_produced,
    const OnLayoutCallback& on_layout, LayoutTrigger layout_trigger,
    const int dom_max_element_depth, const float layout_refresh_rate,
    const std::string& language, bool enable_image_animations,
    LayoutStatTracker* layout_stat_tracker,
    bool clear_window_with_background_color)
    : impl_(new Impl(name, window, on_render_tree_produced, on_layout,
                     layout_trigger, dom_max_element_depth, layout_refresh_rate,
                     language, enable_image_animations, layout_stat_tracker,
                     clear_window_with_background_color)) {
    printf("LayoutManager::LayoutManager()...\n");
  }

LayoutManager::~LayoutManager() {}

void LayoutManager::ForceReLayout() {
    //printf("LayoutManager::ForceReLayout...\n");
  //impl_->OnMutation(); // TODO
  //are_computed_styles_and_box_tree_dirty_ = true;
  impl_->DoLayoutAndProduceRenderTree(/* ForceReLayout */ false);
}

void LayoutManager::Suspend() { impl_->Suspend(); }
void LayoutManager::Resume() { impl_->Resume(); }
void LayoutManager::Purge() { impl_->Purge(); }
bool LayoutManager::IsRenderTreePending() const {
  return impl_->IsRenderTreePending();
}

}  // namespace layout
}  // namespace cobalt
