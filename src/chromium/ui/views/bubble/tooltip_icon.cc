// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/views/bubble/tooltip_icon.h"

#if !defined(DISABLE_PTHREADS)
#include "base/timer/timer.h"
#endif // DISABLE_PTHREADS
#include "components/vector_icons/vector_icons.h"
#if !defined(UI_VIEWS_NO_AX)
#include "ui/accessibility/ax_node_data.h"
#endif // UI_VIEWS_NO_AX
#include "ui/gfx/paint_vector_icon.h"
#include "ui/views/bubble/bubble_frame_view.h"
#include "ui/views/bubble/info_bubble.h"
#include "ui/views/mouse_watcher_view_host.h"

namespace views {

TooltipIcon::TooltipIcon(const base::string16& tooltip, int tooltip_icon_size)
    : tooltip_(tooltip),
      tooltip_icon_size_(tooltip_icon_size),
      mouse_inside_(false),
      bubble_(nullptr),
      preferred_width_(0),
      observer_(this) {
  SetDrawAsHovered(false);
}

TooltipIcon::~TooltipIcon() {
  HideBubble();
}

const char* TooltipIcon::GetClassName() const {
  return "TooltipIcon";
}

void TooltipIcon::OnMouseEntered(const ui::MouseEvent& event) {
  mouse_inside_ = true;
#if !defined(DISABLE_PTHREADS)
  show_timer_.Start(FROM_HERE, base::TimeDelta::FromMilliseconds(150), this,
                    &TooltipIcon::ShowBubble);
#endif // DISABLE_PTHREADS
}

void TooltipIcon::OnMouseExited(const ui::MouseEvent& event) {
#if !defined(DISABLE_PTHREADS)
  show_timer_.Stop();
#endif // DISABLE_PTHREADS
}

bool TooltipIcon::OnMousePressed(const ui::MouseEvent& event) {
  // Swallow the click so that the parent doesn't process it.
  return true;
}

void TooltipIcon::OnGestureEvent(ui::GestureEvent* event) {
  if (event->type() == ui::ET_GESTURE_TAP) {
    ShowBubble();
    event->SetHandled();
  }
}

#if !defined(UI_VIEWS_NO_AX)
void TooltipIcon::GetAccessibleNodeData(ui::AXNodeData* node_data) {
  node_data->role = ax::mojom::Role::kTooltip;
  node_data->SetName(tooltip_);
}
#endif // UI_VIEWS_NO_AX

void TooltipIcon::MouseMovedOutOfHost() {
  if (IsMouseHovered()) {
    mouse_watcher_->Start(GetWidget()->GetNativeWindow());
    return;
  }

  mouse_inside_ = false;
  HideBubble();
}

void TooltipIcon::SetDrawAsHovered(bool hovered) {
#if !defined(UI_VIEWS_PORT)
  SetImage(
      gfx::CreateVectorIcon(vector_icons::kInfoOutlineIcon, tooltip_icon_size_,
                            hovered ? SkColorSetARGB(0xBD, 0, 0, 0)
                                    : SkColorSetARGB(0xBD, 0x44, 0x44, 0x44)));
#endif // UI_VIEWS_PORT
}

void TooltipIcon::ShowBubble() {
  if (bubble_)
    return;

  SetDrawAsHovered(true);

  bubble_ = new InfoBubble(this, tooltip_);
  bubble_->set_preferred_width(preferred_width_);
  bubble_->SetArrow(anchor_point_arrow_);
  // When shown due to a gesture event, close on deactivate (i.e. don't use
  // "focusless").
  bubble_->SetCanActivate(!mouse_inside_);

  bubble_->Show();
  observer_.Add(bubble_->GetWidget());

  if (mouse_inside_) {
    View* frame = bubble_->GetWidget()->non_client_view()->frame_view();
    mouse_watcher_ = std::make_unique<MouseWatcher>(
        std::make_unique<MouseWatcherViewHost>(frame, gfx::Insets()), this);
    mouse_watcher_->Start(GetWidget()->GetNativeWindow());
  }
}

void TooltipIcon::HideBubble() {
  if (bubble_)
    bubble_->Hide();
}

void TooltipIcon::OnWidgetDestroyed(Widget* widget) {
  observer_.Remove(widget);

  SetDrawAsHovered(false);
  mouse_watcher_.reset();
  bubble_ = nullptr;
}

}  // namespace views
