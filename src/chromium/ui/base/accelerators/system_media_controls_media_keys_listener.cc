// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/base/accelerators/system_media_controls_media_keys_listener.h"

#include "ui/base/accelerators/accelerator.h"
#include "ui/base/win/system_media_controls/system_media_controls_service.h"

namespace ui {

// static
bool SystemMediaControlsMediaKeysListener::has_instance_ = false;

SystemMediaControlsMediaKeysListener::SystemMediaControlsMediaKeysListener(
    MediaKeysListener::Delegate* delegate)
    : delegate_(delegate) {
  DCHECK(delegate_);
  DCHECK(!has_instance_);
  has_instance_ = true;
}

SystemMediaControlsMediaKeysListener::~SystemMediaControlsMediaKeysListener() {
  DCHECK(has_instance_);
  has_instance_ = false;
}

bool SystemMediaControlsMediaKeysListener::Initialize() {
  // |service_| can be set for tests.
  if (!service_)
    service_ = system_media_controls::SystemMediaControlsService::GetInstance();

  // If we still don't have a service, then that means the
  // SystemMediaControlsService failed to connect to the
  // SystemMediaTransportControls. If that's the case, return false.
  if (!service_)
    return false;

  service_->AddObserver(this);
  return true;
}

bool SystemMediaControlsMediaKeysListener::StartWatchingMediaKey(
    KeyboardCode key_code) {
  DCHECK(IsMediaKeycode(key_code));

  // If we're already listening for this key, do nothing.
  if (key_codes_.contains(key_code))
    return true;

  key_codes_.insert(key_code);

  DCHECK(service_);

  switch (key_code) {
    case VKEY_MEDIA_PLAY_PAUSE:
      service_->SetIsPlayEnabled(true);
      service_->SetIsPauseEnabled(true);
      break;
    case VKEY_MEDIA_NEXT_TRACK:
      service_->SetIsNextEnabled(true);
      break;
    case VKEY_MEDIA_PREV_TRACK:
      service_->SetIsPreviousEnabled(true);
      break;
    case VKEY_MEDIA_STOP:
      service_->SetIsStopEnabled(true);
      break;
    default:
      NOTREACHED();
  }

  return true;
}

void SystemMediaControlsMediaKeysListener::StopWatchingMediaKey(
    KeyboardCode key_code) {
  DCHECK(IsMediaKeycode(key_code));

  // If we're not currently listening for this key, do nothing.
  if (!key_codes_.contains(key_code))
    return;

  key_codes_.erase(key_code);

  DCHECK(service_);

  switch (key_code) {
    case VKEY_MEDIA_PLAY_PAUSE:
      service_->SetIsPlayEnabled(false);
      service_->SetIsPauseEnabled(false);
      break;
    case VKEY_MEDIA_NEXT_TRACK:
      service_->SetIsNextEnabled(false);
      break;
    case VKEY_MEDIA_PREV_TRACK:
      service_->SetIsPreviousEnabled(false);
      break;
    case VKEY_MEDIA_STOP:
      service_->SetIsStopEnabled(false);
      break;
    default:
      NOTREACHED();
  }
}

void SystemMediaControlsMediaKeysListener::OnNext() {
  MaybeSendKeyCode(VKEY_MEDIA_NEXT_TRACK);
}

void SystemMediaControlsMediaKeysListener::OnPrevious() {
  MaybeSendKeyCode(VKEY_MEDIA_PREV_TRACK);
}

void SystemMediaControlsMediaKeysListener::OnPause() {
  MaybeSendKeyCode(VKEY_MEDIA_PLAY_PAUSE);
}

void SystemMediaControlsMediaKeysListener::OnStop() {
  MaybeSendKeyCode(VKEY_MEDIA_STOP);
}

void SystemMediaControlsMediaKeysListener::OnPlay() {
  MaybeSendKeyCode(VKEY_MEDIA_PLAY_PAUSE);
}

void SystemMediaControlsMediaKeysListener::MaybeSendKeyCode(
    KeyboardCode key_code) {
  if (!key_codes_.contains(key_code))
    return;

  Accelerator accelerator(key_code, /*modifiers=*/0);
  delegate_->OnMediaKeysAccelerator(accelerator);
}

}  // namespace ui
