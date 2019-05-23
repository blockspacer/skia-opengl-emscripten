// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/events/mojo/keyboard_codes.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/events/mojo/keyboard_codes.mojom-params-data.h"
namespace ui {
namespace mojom {

std::ostream& operator<<(std::ostream& os, KeyboardCode value) {
  switch(value) {
    case KeyboardCode::UNKNOWN:
      return os << "KeyboardCode::UNKNOWN";
    case KeyboardCode::BACK:
      return os << "KeyboardCode::BACK";
    case KeyboardCode::TAB:
      return os << "KeyboardCode::TAB";
    case KeyboardCode::CLEAR:
      return os << "KeyboardCode::CLEAR";
    case KeyboardCode::RETURN:
      return os << "KeyboardCode::RETURN";
    case KeyboardCode::SHIFT:
      return os << "KeyboardCode::SHIFT";
    case KeyboardCode::CONTROL:
      return os << "KeyboardCode::CONTROL";
    case KeyboardCode::MENU:
      return os << "KeyboardCode::MENU";
    case KeyboardCode::PAUSE:
      return os << "KeyboardCode::PAUSE";
    case KeyboardCode::CAPITAL:
      return os << "KeyboardCode::CAPITAL";
    case KeyboardCode::KANA:
      return os << "KeyboardCode::{KANA, HANGUL}";
    case KeyboardCode::JUNJA:
      return os << "KeyboardCode::JUNJA";
    case KeyboardCode::FINAL:
      return os << "KeyboardCode::FINAL";
    case KeyboardCode::HANJA:
      return os << "KeyboardCode::{HANJA, KANJI}";
    case KeyboardCode::ESCAPE:
      return os << "KeyboardCode::ESCAPE";
    case KeyboardCode::CONVERT:
      return os << "KeyboardCode::CONVERT";
    case KeyboardCode::NONCONVERT:
      return os << "KeyboardCode::NONCONVERT";
    case KeyboardCode::ACCEPT:
      return os << "KeyboardCode::ACCEPT";
    case KeyboardCode::MODECHANGE:
      return os << "KeyboardCode::MODECHANGE";
    case KeyboardCode::SPACE:
      return os << "KeyboardCode::SPACE";
    case KeyboardCode::PRIOR:
      return os << "KeyboardCode::PRIOR";
    case KeyboardCode::NEXT:
      return os << "KeyboardCode::NEXT";
    case KeyboardCode::END:
      return os << "KeyboardCode::END";
    case KeyboardCode::HOME:
      return os << "KeyboardCode::HOME";
    case KeyboardCode::LEFT:
      return os << "KeyboardCode::LEFT";
    case KeyboardCode::UP:
      return os << "KeyboardCode::UP";
    case KeyboardCode::RIGHT:
      return os << "KeyboardCode::RIGHT";
    case KeyboardCode::DOWN:
      return os << "KeyboardCode::DOWN";
    case KeyboardCode::SELECT:
      return os << "KeyboardCode::SELECT";
    case KeyboardCode::PRINT:
      return os << "KeyboardCode::PRINT";
    case KeyboardCode::EXECUTE:
      return os << "KeyboardCode::EXECUTE";
    case KeyboardCode::SNAPSHOT:
      return os << "KeyboardCode::SNAPSHOT";
    case KeyboardCode::INSERT:
      return os << "KeyboardCode::INSERT";
    case KeyboardCode::KEY_DELETE:
      return os << "KeyboardCode::KEY_DELETE";
    case KeyboardCode::HELP:
      return os << "KeyboardCode::HELP";
    case KeyboardCode::NUM_0:
      return os << "KeyboardCode::NUM_0";
    case KeyboardCode::NUM_1:
      return os << "KeyboardCode::NUM_1";
    case KeyboardCode::NUM_2:
      return os << "KeyboardCode::NUM_2";
    case KeyboardCode::NUM_3:
      return os << "KeyboardCode::NUM_3";
    case KeyboardCode::NUM_4:
      return os << "KeyboardCode::NUM_4";
    case KeyboardCode::NUM_5:
      return os << "KeyboardCode::NUM_5";
    case KeyboardCode::NUM_6:
      return os << "KeyboardCode::NUM_6";
    case KeyboardCode::NUM_7:
      return os << "KeyboardCode::NUM_7";
    case KeyboardCode::NUM_8:
      return os << "KeyboardCode::NUM_8";
    case KeyboardCode::NUM_9:
      return os << "KeyboardCode::NUM_9";
    case KeyboardCode::A:
      return os << "KeyboardCode::A";
    case KeyboardCode::B:
      return os << "KeyboardCode::B";
    case KeyboardCode::C:
      return os << "KeyboardCode::C";
    case KeyboardCode::D:
      return os << "KeyboardCode::D";
    case KeyboardCode::E:
      return os << "KeyboardCode::E";
    case KeyboardCode::F:
      return os << "KeyboardCode::F";
    case KeyboardCode::G:
      return os << "KeyboardCode::G";
    case KeyboardCode::H:
      return os << "KeyboardCode::H";
    case KeyboardCode::I:
      return os << "KeyboardCode::I";
    case KeyboardCode::J:
      return os << "KeyboardCode::J";
    case KeyboardCode::K:
      return os << "KeyboardCode::K";
    case KeyboardCode::L:
      return os << "KeyboardCode::L";
    case KeyboardCode::M:
      return os << "KeyboardCode::M";
    case KeyboardCode::N:
      return os << "KeyboardCode::N";
    case KeyboardCode::O:
      return os << "KeyboardCode::O";
    case KeyboardCode::P:
      return os << "KeyboardCode::P";
    case KeyboardCode::Q:
      return os << "KeyboardCode::Q";
    case KeyboardCode::R:
      return os << "KeyboardCode::R";
    case KeyboardCode::S:
      return os << "KeyboardCode::S";
    case KeyboardCode::T:
      return os << "KeyboardCode::T";
    case KeyboardCode::U:
      return os << "KeyboardCode::U";
    case KeyboardCode::V:
      return os << "KeyboardCode::V";
    case KeyboardCode::W:
      return os << "KeyboardCode::W";
    case KeyboardCode::X:
      return os << "KeyboardCode::X";
    case KeyboardCode::Y:
      return os << "KeyboardCode::Y";
    case KeyboardCode::Z:
      return os << "KeyboardCode::Z";
    case KeyboardCode::LWIN:
      return os << "KeyboardCode::{LWIN, COMMAND}";
    case KeyboardCode::RWIN:
      return os << "KeyboardCode::RWIN";
    case KeyboardCode::APPS:
      return os << "KeyboardCode::APPS";
    case KeyboardCode::SLEEP:
      return os << "KeyboardCode::SLEEP";
    case KeyboardCode::NUMPAD0:
      return os << "KeyboardCode::NUMPAD0";
    case KeyboardCode::NUMPAD1:
      return os << "KeyboardCode::NUMPAD1";
    case KeyboardCode::NUMPAD2:
      return os << "KeyboardCode::NUMPAD2";
    case KeyboardCode::NUMPAD3:
      return os << "KeyboardCode::NUMPAD3";
    case KeyboardCode::NUMPAD4:
      return os << "KeyboardCode::NUMPAD4";
    case KeyboardCode::NUMPAD5:
      return os << "KeyboardCode::NUMPAD5";
    case KeyboardCode::NUMPAD6:
      return os << "KeyboardCode::NUMPAD6";
    case KeyboardCode::NUMPAD7:
      return os << "KeyboardCode::NUMPAD7";
    case KeyboardCode::NUMPAD8:
      return os << "KeyboardCode::NUMPAD8";
    case KeyboardCode::NUMPAD9:
      return os << "KeyboardCode::NUMPAD9";
    case KeyboardCode::MULTIPLY:
      return os << "KeyboardCode::MULTIPLY";
    case KeyboardCode::ADD:
      return os << "KeyboardCode::ADD";
    case KeyboardCode::SEPARATOR:
      return os << "KeyboardCode::SEPARATOR";
    case KeyboardCode::SUBTRACT:
      return os << "KeyboardCode::SUBTRACT";
    case KeyboardCode::DECIMAL:
      return os << "KeyboardCode::DECIMAL";
    case KeyboardCode::DIVIDE:
      return os << "KeyboardCode::DIVIDE";
    case KeyboardCode::F1:
      return os << "KeyboardCode::F1";
    case KeyboardCode::F2:
      return os << "KeyboardCode::F2";
    case KeyboardCode::F3:
      return os << "KeyboardCode::F3";
    case KeyboardCode::F4:
      return os << "KeyboardCode::F4";
    case KeyboardCode::F5:
      return os << "KeyboardCode::F5";
    case KeyboardCode::F6:
      return os << "KeyboardCode::F6";
    case KeyboardCode::F7:
      return os << "KeyboardCode::F7";
    case KeyboardCode::F8:
      return os << "KeyboardCode::F8";
    case KeyboardCode::F9:
      return os << "KeyboardCode::F9";
    case KeyboardCode::F10:
      return os << "KeyboardCode::F10";
    case KeyboardCode::F11:
      return os << "KeyboardCode::F11";
    case KeyboardCode::F12:
      return os << "KeyboardCode::F12";
    case KeyboardCode::F13:
      return os << "KeyboardCode::F13";
    case KeyboardCode::F14:
      return os << "KeyboardCode::F14";
    case KeyboardCode::F15:
      return os << "KeyboardCode::F15";
    case KeyboardCode::F16:
      return os << "KeyboardCode::F16";
    case KeyboardCode::F17:
      return os << "KeyboardCode::F17";
    case KeyboardCode::F18:
      return os << "KeyboardCode::F18";
    case KeyboardCode::F19:
      return os << "KeyboardCode::F19";
    case KeyboardCode::F20:
      return os << "KeyboardCode::F20";
    case KeyboardCode::F21:
      return os << "KeyboardCode::F21";
    case KeyboardCode::F22:
      return os << "KeyboardCode::F22";
    case KeyboardCode::F23:
      return os << "KeyboardCode::F23";
    case KeyboardCode::F24:
      return os << "KeyboardCode::F24";
    case KeyboardCode::NUMLOCK:
      return os << "KeyboardCode::NUMLOCK";
    case KeyboardCode::SCROLL:
      return os << "KeyboardCode::SCROLL";
    case KeyboardCode::WLAN:
      return os << "KeyboardCode::WLAN";
    case KeyboardCode::POWER:
      return os << "KeyboardCode::POWER";
    case KeyboardCode::ASSISTANT:
      return os << "KeyboardCode::ASSISTANT";
    case KeyboardCode::LSHIFT:
      return os << "KeyboardCode::LSHIFT";
    case KeyboardCode::RSHIFT:
      return os << "KeyboardCode::RSHIFT";
    case KeyboardCode::LCONTROL:
      return os << "KeyboardCode::LCONTROL";
    case KeyboardCode::RCONTROL:
      return os << "KeyboardCode::RCONTROL";
    case KeyboardCode::LMENU:
      return os << "KeyboardCode::LMENU";
    case KeyboardCode::RMENU:
      return os << "KeyboardCode::RMENU";
    case KeyboardCode::BROWSER_BACK:
      return os << "KeyboardCode::BROWSER_BACK";
    case KeyboardCode::BROWSER_FORWARD:
      return os << "KeyboardCode::BROWSER_FORWARD";
    case KeyboardCode::BROWSER_REFRESH:
      return os << "KeyboardCode::BROWSER_REFRESH";
    case KeyboardCode::BROWSER_STOP:
      return os << "KeyboardCode::BROWSER_STOP";
    case KeyboardCode::BROWSER_SEARCH:
      return os << "KeyboardCode::BROWSER_SEARCH";
    case KeyboardCode::BROWSER_FAVORITES:
      return os << "KeyboardCode::BROWSER_FAVORITES";
    case KeyboardCode::BROWSER_HOME:
      return os << "KeyboardCode::BROWSER_HOME";
    case KeyboardCode::VOLUME_MUTE:
      return os << "KeyboardCode::VOLUME_MUTE";
    case KeyboardCode::VOLUME_DOWN:
      return os << "KeyboardCode::VOLUME_DOWN";
    case KeyboardCode::VOLUME_UP:
      return os << "KeyboardCode::VOLUME_UP";
    case KeyboardCode::MEDIA_NEXT_TRACK:
      return os << "KeyboardCode::MEDIA_NEXT_TRACK";
    case KeyboardCode::MEDIA_PREV_TRACK:
      return os << "KeyboardCode::MEDIA_PREV_TRACK";
    case KeyboardCode::MEDIA_STOP:
      return os << "KeyboardCode::MEDIA_STOP";
    case KeyboardCode::MEDIA_PLAY_PAUSE:
      return os << "KeyboardCode::MEDIA_PLAY_PAUSE";
    case KeyboardCode::MEDIA_LAUNCH_MAIL:
      return os << "KeyboardCode::MEDIA_LAUNCH_MAIL";
    case KeyboardCode::MEDIA_LAUNCH_MEDIA_SELECT:
      return os << "KeyboardCode::MEDIA_LAUNCH_MEDIA_SELECT";
    case KeyboardCode::MEDIA_LAUNCH_APP1:
      return os << "KeyboardCode::MEDIA_LAUNCH_APP1";
    case KeyboardCode::MEDIA_LAUNCH_APP2:
      return os << "KeyboardCode::MEDIA_LAUNCH_APP2";
    case KeyboardCode::OEM_1:
      return os << "KeyboardCode::OEM_1";
    case KeyboardCode::OEM_PLUS:
      return os << "KeyboardCode::OEM_PLUS";
    case KeyboardCode::OEM_COMMA:
      return os << "KeyboardCode::OEM_COMMA";
    case KeyboardCode::OEM_MINUS:
      return os << "KeyboardCode::OEM_MINUS";
    case KeyboardCode::OEM_PERIOD:
      return os << "KeyboardCode::OEM_PERIOD";
    case KeyboardCode::OEM_2:
      return os << "KeyboardCode::OEM_2";
    case KeyboardCode::OEM_3:
      return os << "KeyboardCode::OEM_3";
    case KeyboardCode::BRIGHTNESS_DOWN:
      return os << "KeyboardCode::BRIGHTNESS_DOWN";
    case KeyboardCode::BRIGHTNESS_UP:
      return os << "KeyboardCode::BRIGHTNESS_UP";
    case KeyboardCode::KBD_BRIGHTNESS_DOWN:
      return os << "KeyboardCode::KBD_BRIGHTNESS_DOWN";
    case KeyboardCode::OEM_4:
      return os << "KeyboardCode::OEM_4";
    case KeyboardCode::OEM_5:
      return os << "KeyboardCode::OEM_5";
    case KeyboardCode::OEM_6:
      return os << "KeyboardCode::OEM_6";
    case KeyboardCode::OEM_7:
      return os << "KeyboardCode::OEM_7";
    case KeyboardCode::OEM_8:
      return os << "KeyboardCode::OEM_8";
    case KeyboardCode::ALTGR:
      return os << "KeyboardCode::ALTGR";
    case KeyboardCode::OEM_102:
      return os << "KeyboardCode::OEM_102";
    case KeyboardCode::PROCESSKEY:
      return os << "KeyboardCode::PROCESSKEY";
    case KeyboardCode::COMPOSE:
      return os << "KeyboardCode::COMPOSE";
    case KeyboardCode::PACKET:
      return os << "KeyboardCode::PACKET";
    case KeyboardCode::KBD_BRIGHTNESS_UP:
      return os << "KeyboardCode::KBD_BRIGHTNESS_UP";
    case KeyboardCode::SPATNAV_BACK:
      return os << "KeyboardCode::SPATNAV_BACK";
    case KeyboardCode::DBE_SBCSCHAR:
      return os << "KeyboardCode::DBE_SBCSCHAR";
    case KeyboardCode::DBE_DBCSCHAR:
      return os << "KeyboardCode::DBE_DBCSCHAR";
    case KeyboardCode::ATTN:
      return os << "KeyboardCode::ATTN";
    case KeyboardCode::CRSEL:
      return os << "KeyboardCode::CRSEL";
    case KeyboardCode::EXSEL:
      return os << "KeyboardCode::EXSEL";
    case KeyboardCode::EREOF:
      return os << "KeyboardCode::EREOF";
    case KeyboardCode::PLAY:
      return os << "KeyboardCode::PLAY";
    case KeyboardCode::ZOOM:
      return os << "KeyboardCode::ZOOM";
    case KeyboardCode::NONAME:
      return os << "KeyboardCode::NONAME";
    case KeyboardCode::PA1:
      return os << "KeyboardCode::PA1";
    case KeyboardCode::OEM_CLEAR:
      return os << "KeyboardCode::OEM_CLEAR";
    default:
      return os << "Unknown KeyboardCode value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ui

#if defined(_MSC_VER)
#pragma warning(pop)
#endif