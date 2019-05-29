// Copyright 2015 The Cobalt Authors. All Rights Reserved.
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

#ifndef COBALT_INPUT_INPUT_DEVICE_MANAGER_DESKTOP_H_
#define COBALT_INPUT_INPUT_DEVICE_MANAGER_DESKTOP_H_

#include "cobalt/input/input_device_manager.h"
#include "cobalt/input/keypress_generator_filter.h"
#include "cobalt/system_window/system_window.h"

namespace cobalt {
namespace input {

class InputDeviceManagerDesktop : public InputDeviceManager {
 public:
  InputDeviceManagerDesktop(
      const KeyboardEventCallback& keyboard_event_callback,
      const PointerEventCallback& pointer_event_callback,
      const WheelEventCallback& wheel_event_callback,
#if SB_HAS(ON_SCREEN_KEYBOARD)
      const InputEventCallback& input_event_callback,
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
      system_window::SystemWindow* system_window);

  ~InputDeviceManagerDesktop() override;

 protected:
  // Called to handle a input event generated by the referenced system
  // window.
  void HandleSystemWindowInputEvent(const base::Event* event);

 private:
  void HandleKeyboardEvent(bool is_key_down,
                           const system_window::InputEvent* input_event,
                           int key_code);
#if SB_HAS(ON_SCREEN_KEYBOARD)
  void HandleInputEvent(const system_window::InputEvent* event);
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

  void HandlePointerEvent(base::CobToken type,
                          const system_window::InputEvent* input_event);

  void HandleWheelEvent(const system_window::InputEvent* input_event);

  // Reference to the system window that will provide keyboard events.
  system_window::SystemWindow* system_window_;

  // Store a callback wrapping the object event handler,
  // HandleSystemWindowInputEvent. This is so we can remove it again when this
  // object is destroyed.
  base::EventCallback system_window_input_event_callback_;

#if SB_HAS(ON_SCREEN_KEYBOARD)
  // Called to handle an input_event.
  InputEventCallback input_event_callback_;
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

  // Keyboard event filters to process the events generated.
  KeypressGeneratorFilter keypress_generator_filter_;

  // Called to handle a pointer event.
  PointerEventCallback pointer_event_callback_;

  // Called to handle a wheel event.
  WheelEventCallback wheel_event_callback_;
};

}  // namespace input
}  // namespace cobalt

#endif  // COBALT_INPUT_INPUT_DEVICE_MANAGER_DESKTOP_H_
