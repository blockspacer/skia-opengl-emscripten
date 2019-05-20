// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "cc/animation/scroll_offset_animations_impl.h"

#include "base/trace_event/trace_event.h"
#include "base/trace_event/traced_value.h"
#include "cc/animation/animation_host.h"
#include "cc/animation/animation_id_provider.h"
#include "cc/animation/animation_timeline.h"
#include "cc/animation/element_animations.h"
#include "cc/animation/single_keyframe_effect_animation.h"
#include "cc/animation/timing_function.h"

namespace cc {

ScrollOffsetAnimationsImpl::ScrollOffsetAnimationsImpl(
    AnimationHost* animation_host)
    : animation_host_(animation_host),
      scroll_offset_timeline_(
          AnimationTimeline::Create(AnimationIdProvider::NextTimelineId())),
      scroll_offset_animation_(SingleKeyframeEffectAnimation::Create(
          AnimationIdProvider::NextAnimationId())) {
  scroll_offset_timeline_->set_is_impl_only(true);
  scroll_offset_animation_->set_animation_delegate(this);

  animation_host_->AddAnimationTimeline(scroll_offset_timeline_.get());
  scroll_offset_timeline_->AttachAnimation(scroll_offset_animation_.get());
}

ScrollOffsetAnimationsImpl::~ScrollOffsetAnimationsImpl() {
  scroll_offset_timeline_->DetachAnimation(scroll_offset_animation_.get());
  animation_host_->RemoveAnimationTimeline(scroll_offset_timeline_.get());
}

void ScrollOffsetAnimationsImpl::ScrollAnimationCreate(
    ElementId element_id,
    const gfx::ScrollOffset& target_offset,
    const gfx::ScrollOffset& current_offset,
    base::TimeDelta delayed_by,
    base::TimeDelta animation_start_offset) {
  std::unique_ptr<ScrollOffsetAnimationCurve> curve =
      ScrollOffsetAnimationCurve::Create(
          target_offset, CubicBezierTimingFunction::CreatePreset(
                             CubicBezierTimingFunction::EaseType::EASE_IN_OUT),
          ScrollOffsetAnimationCurve::DurationBehavior::INVERSE_DELTA);
  curve->SetInitialValue(current_offset, delayed_by);
  TRACE_EVENT_INSTANT1("cc", "ScrollAnimationCreate", TRACE_EVENT_SCOPE_THREAD,
                       "Duration", curve->Duration().InMillisecondsF());

  std::unique_ptr<KeyframeModel> keyframe_model = KeyframeModel::Create(
      std::move(curve), AnimationIdProvider::NextKeyframeModelId(),
      AnimationIdProvider::NextGroupId(), TargetProperty::SCROLL_OFFSET);
  keyframe_model->set_time_offset(animation_start_offset);
  keyframe_model->SetIsImplOnly();

  DCHECK(scroll_offset_animation_);
  DCHECK(scroll_offset_animation_->animation_timeline());

  ReattachScrollOffsetAnimationIfNeeded(element_id);
  scroll_offset_animation_->AddKeyframeModel(std::move(keyframe_model));
}

bool ScrollOffsetAnimationsImpl::ScrollAnimationUpdateTarget(
    ElementId element_id,
    const gfx::Vector2dF& scroll_delta,
    const gfx::ScrollOffset& max_scroll_offset,
    base::TimeTicks frame_monotonic_time,
    base::TimeDelta delayed_by) {
  DCHECK(scroll_offset_animation_);
  if (!scroll_offset_animation_->has_element_animations()) {
    TRACE_EVENT_INSTANT0("cc", "No element animation exists",
                         TRACE_EVENT_SCOPE_THREAD);
    return false;
  }

  DCHECK_EQ(element_id, scroll_offset_animation_->element_id());

  KeyframeModel* keyframe_model =
      scroll_offset_animation_->GetKeyframeModel(TargetProperty::SCROLL_OFFSET);
  if (!keyframe_model) {
    scroll_offset_animation_->DetachElement();
    TRACE_EVENT_INSTANT0("cc", "No keyframe model exists",
                         TRACE_EVENT_SCOPE_THREAD);
    return false;
  }
  if (scroll_delta.IsZero())
    return true;

  ScrollOffsetAnimationCurve* curve =
      keyframe_model->curve()->ToScrollOffsetAnimationCurve();

  gfx::ScrollOffset new_target =
      gfx::ScrollOffsetWithDelta(curve->target_value(), scroll_delta);
  new_target.SetToMax(gfx::ScrollOffset());
  new_target.SetToMin(max_scroll_offset);

  // TODO(ymalik): KeyframeModel::TrimTimeToCurrentIteration should probably
  // check for run_state == KeyframeModel::WAITING_FOR_TARGET_AVAILABILITY.
  base::TimeDelta trimmed =
      keyframe_model->run_state() ==
              KeyframeModel::WAITING_FOR_TARGET_AVAILABILITY
          ? base::TimeDelta()
          : keyframe_model->TrimTimeToCurrentIteration(frame_monotonic_time);

  // Re-target taking the delay into account. Note that if the duration of the
  // animation is 0, trimmed will be 0 and UpdateTarget will be called with
  // t = -delayed_by.
  trimmed -= delayed_by;

  curve->UpdateTarget(trimmed, new_target);
  TRACE_EVENT_INSTANT1("cc", "ScrollAnimationUpdateTarget",
                       TRACE_EVENT_SCOPE_THREAD, "UpdatedDuration",
                       curve->Duration().InMillisecondsF());

  return true;
}

void ScrollOffsetAnimationsImpl::ScrollAnimationApplyAdjustment(
    ElementId element_id,
    const gfx::Vector2dF& adjustment) {
  DCHECK(scroll_offset_animation_);
  if (element_id != scroll_offset_animation_->element_id()) {
    TRACE_EVENT_INSTANT0("cc", "no scroll adjustment different element_ids",
                         TRACE_EVENT_SCOPE_THREAD);
    return;
  }

  if (!scroll_offset_animation_->has_element_animations()) {
    TRACE_EVENT_INSTANT0("cc", "no scroll adjustment no element animation",
                         TRACE_EVENT_SCOPE_THREAD);
    return;
  }

  KeyframeModel* keyframe_model =
      scroll_offset_animation_->GetKeyframeModel(TargetProperty::SCROLL_OFFSET);
  if (!keyframe_model) {
    TRACE_EVENT_INSTANT0("cc", "no scroll adjustment no keyframe model",
                         TRACE_EVENT_SCOPE_THREAD);
    return;
  }

  std::unique_ptr<ScrollOffsetAnimationCurve> new_curve =
      keyframe_model->curve()
          ->ToScrollOffsetAnimationCurve()
          ->CloneToScrollOffsetAnimationCurve();
  new_curve->ApplyAdjustment(adjustment);

  std::unique_ptr<KeyframeModel> new_keyframe_model = KeyframeModel::Create(
      std::move(new_curve), AnimationIdProvider::NextKeyframeModelId(),
      AnimationIdProvider::NextGroupId(), TargetProperty::SCROLL_OFFSET);
  new_keyframe_model->set_start_time(keyframe_model->start_time());
  new_keyframe_model->SetIsImplOnly();
  new_keyframe_model->set_affects_active_elements(false);

  // Abort the old animation.
  ScrollAnimationAbort(/* needs_completion */ false);

  // Start a new one with the adjusment.
  scroll_offset_animation_->AddKeyframeModel(std::move(new_keyframe_model));
  TRACE_EVENT_INSTANT0("cc", "scroll animation adjusted",
                       TRACE_EVENT_SCOPE_THREAD);
}

void ScrollOffsetAnimationsImpl::ScrollAnimationAbort(bool needs_completion) {
  DCHECK(scroll_offset_animation_);
  scroll_offset_animation_->AbortKeyframeModelsWithProperty(
      TargetProperty::SCROLL_OFFSET, needs_completion);
  TRACE_EVENT_INSTANT1("cc", "ScrollAnimationAbort", TRACE_EVENT_SCOPE_THREAD,
                       "needs_completion", needs_completion);
}

void ScrollOffsetAnimationsImpl::NotifyAnimationFinished(
    base::TimeTicks monotonic_time,
    int target_property,
    int group) {
  DCHECK_EQ(target_property, TargetProperty::SCROLL_OFFSET);
  DCHECK(animation_host_->mutator_host_client());
  animation_host_->mutator_host_client()->ScrollOffsetAnimationFinished();
  TRACE_EVENT_INSTANT0("cc", "NotifyAnimationFinished",
                       TRACE_EVENT_SCOPE_THREAD);
}

bool ScrollOffsetAnimationsImpl::IsAnimating() const {
  if (!scroll_offset_animation_->has_element_animations())
    return false;

  KeyframeModel* keyframe_model =
      scroll_offset_animation_->GetKeyframeModel(TargetProperty::SCROLL_OFFSET);
  if (!keyframe_model)
    return false;

  switch (keyframe_model->run_state()) {
    case KeyframeModel::WAITING_FOR_TARGET_AVAILABILITY:
    case KeyframeModel::STARTING:
    case KeyframeModel::RUNNING:
    case KeyframeModel::PAUSED:
      return true;
    case KeyframeModel::WAITING_FOR_DELETION:
    case KeyframeModel::FINISHED:
    case KeyframeModel::ABORTED:
    case KeyframeModel::ABORTED_BUT_NEEDS_COMPLETION:
      return false;
  }
}

void ScrollOffsetAnimationsImpl::ReattachScrollOffsetAnimationIfNeeded(
    ElementId element_id) {
  if (scroll_offset_animation_->element_id() != element_id) {
    if (scroll_offset_animation_->element_id()) {
      TRACE_EVENT_INSTANT0("cc", "scroll offset animation detached element",
                           TRACE_EVENT_SCOPE_THREAD);
      scroll_offset_animation_->DetachElement();
    }
    if (element_id) {
      TRACE_EVENT_INSTANT0("cc", "scroll offset animation attached element",
                           TRACE_EVENT_SCOPE_THREAD);
      scroll_offset_animation_->AttachElement(element_id);
    }
  }
}

}  // namespace cc
