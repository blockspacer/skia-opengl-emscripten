// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ui/base/win/lock_state.h"

#include <windows.h>
#include <wtsapi32.h>

#include "base/bind.h"
#include "base/logging.h"
#include "base/no_destructor.h"
#include "base/win/windows_version.h"
#include "ui/base/win/session_change_observer.h"

namespace ui {

namespace {

// Checks if the current session is locked.
bool IsSessionLocked() {
  bool is_locked = false;
  LPWSTR buffer = nullptr;
  DWORD buffer_length = 0;
  if (::WTSQuerySessionInformation(WTS_CURRENT_SERVER, WTS_CURRENT_SESSION,
                                   WTSSessionInfoEx, &buffer, &buffer_length) &&
      buffer_length >= sizeof(WTSINFOEXW)) {
    auto* info = reinterpret_cast<WTSINFOEXW*>(buffer);
    auto session_flags = info->Data.WTSInfoExLevel1.SessionFlags;
    // For Windows 7 SessionFlags has inverted logic:
    // https://msdn.microsoft.com/en-us/library/windows/desktop/ee621019.
    if (base::win::GetVersion() == base::win::Version::WIN7)
      is_locked = session_flags == WTS_SESSIONSTATE_UNLOCK;
    else
      is_locked = session_flags == WTS_SESSIONSTATE_LOCK;
  }
  if (buffer)
    ::WTSFreeMemory(buffer);
  return is_locked;
}

// Observes the screen lock state of Windows and caches the current state. This
// is necessary as IsSessionLocked uses WTSQuerySessionInformation internally,
// which is an expensive syscall and causes a performance regression as we query
// the current state quite often. http://crbug.com/940607.
class SessionLockedObserver {
 public:
  SessionLockedObserver()
      : session_change_observer_(
            base::BindRepeating(&SessionLockedObserver::OnSessionChange,
                                base::Unretained(this))),
        screen_locked_(IsSessionLocked()) {}

  bool IsLocked() const { return screen_locked_; }

 private:
  void OnSessionChange(WPARAM status_code) {
    if (status_code == WTS_SESSION_LOCK)
      screen_locked_ = true;
    else if (status_code == WTS_SESSION_UNLOCK)
      screen_locked_ = false;
  }

  SessionChangeObserver session_change_observer_;
  bool screen_locked_;

  DISALLOW_COPY_AND_ASSIGN(SessionLockedObserver);
};

}  // namespace

bool IsWorkstationLocked() {
  static const base::NoDestructor<SessionLockedObserver> observer;
  return observer->IsLocked();
}

}  // namespace ui
