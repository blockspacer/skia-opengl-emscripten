#pragma once

/// \todo clear includes

#include "base/logging.h"
#include "base/strings/stringprintf.h"

#include "cobalt/base/event_dispatcher.h"
#include "cobalt/base/tokens.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/mouse_event_init.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/ui_event.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/math/vector2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/system_window/input_event.h"
#include "cobalt/system_window/system_window.h"

#include "starboard/event.h"
#include "starboard/accessibility.h"
#include "starboard/log.h"
#include "starboard/configuration.h"
#include "starboard/window.h"
#include "starboard/decode_target.h"
#include "starboard/file.h"
#include "starboard/double.h"
#include "starboard/system.h"

#include <cmath>
#include <string>

#include "base/time/time.h"

#include "cobalt/base/token.h"

#include "cobalt/base/tokens.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/input_event.h"
#include "cobalt/dom/input_event_init.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/keyboard_event_init.h"
#include "cobalt/dom/pointer_event.h"
#include "cobalt/dom/pointer_event_init.h"
#include "cobalt/dom/wheel_event.h"
#include "cobalt/dom/wheel_event_init.h"
#include "cobalt/dom/event_modifier_init.h"
#include "cobalt/input/create_default_camera_3d.h"

#include "cobalt/input/keypress_generator_filter.h"
#include "cobalt/system_window/system_window.h"

#if defined(__EMSCRIPTEN__)
#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/key_codes.h>
#include <emscripten/threading.h>
#endif // EMSCRIPTEN

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
#include <SDL2/SDL.h>
#endif

namespace native_event {

std::unique_ptr<SbInputData> createEmptySbEventData();

#if defined(__EMSCRIPTEN__)
unsigned int EmscModifiersEventToSbKeyModifiers(const bool altKey,
    const bool ctrlKey, const bool metaKey, const bool shiftKey);

// Javascript event.button 0 = left, 1 = middle, 2 = right
unsigned int EmscMouseEventToSbButtonModifiers(unsigned short button);

SbKey EmscKeycodeToSbKey(const int keysum);

SbKey EmscMouseEventToSbKey(unsigned short button);

SbKeyLocation EmscKeycodeToSbKeyLocation(const int keysum);

int number_of_characters_in_utf8_string(const char *str);

int emscripten_key_event_is_printable_character(const EmscriptenKeyboardEvent *keyEvent);

// Counts the length of the given UTF8 string in number of characters (and not bytes)
int NumCharsInUTF8String(const unsigned char *str);

// Converts a single UTF8 encoded character to a 32-bit Unicode codepoint.
unsigned int Utf8CharToUtf32(const unsigned char *utf8Char);

// Converts a UTF8 encoded string to a UTF32 string.
void Utf8StringToUtf32(unsigned int *dstUtf32, int maxBytesToWrite, const unsigned char *utf8);
#endif // __EMSCRIPTEN__

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
unsigned int SDL2ModStateToSbKeyModifiers(const SDL_Keymod& modState);

unsigned int SDL2MouseEventToSbButtonModifiers(const Uint8& button);

SbKey SDL2MouseEventToSbKey(const Uint8& button);

SbKeyLocation SDL2KeycodeToSbKeyLocation(const SDL_Keycode& keysum);

SbKey SDL2ScancodeToSbKey(const SDL_Scancode& keysum);

SbKey SDL2KeycodeToSbKey(const SDL_Keycode& keysum);
#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

std::unique_ptr<SbInputData> setMouseSbEventData(std::unique_ptr<SbInputData> data,
                              const double screenMouseX, const double screenMouseY,
                              const SbInputEventType& event_type,
                              unsigned int key_modifiers, const SbKey& key);

std::unique_ptr<SbInputData> setWheelSbEventData(std::unique_ptr<SbInputData> data,
                              const double screenMouseX, const double screenMouseY,
                              const double wheelX, const double wheelY, const double wheelZ,
                              const SbInputEventType& event_type,
                              unsigned int key_modifiers, const SbKey& key);

std::unique_ptr<SbEvent> createSbWheelEvent(
    const SbEventType& type,
    const SbInputEventType& sbInputEventType,
    SbWindow window,
    const unsigned short button,
    const bool altKey,
    const bool ctrlKey,
    const bool metaKey,
    const bool shiftKey,
    const float mouse_x,
    const float mouse_y,
    const float deltaX,
    const float deltaY,
    const unsigned int button_modifiers,
    const SbKey key
  );

std::unique_ptr<SbEvent> createSbMouseEvent(
  const SbEventType& type,
  const SbInputEventType& sbInputEventType,
  SbWindow window,
  const unsigned short button,
  const bool altKey,
  const bool ctrlKey,
  const bool metaKey,
  const bool shiftKey,
  const float mouse_x,
  const float mouse_y,
  const unsigned int button_modifiers,
  const SbKey key
);

std::unique_ptr<SbEvent> createSbKeyboardEvent(
  const SbEventType& type,
  const SbInputEventType& sbInputEventType,
  SbWindow window,
  const bool altKey,
  const bool ctrlKey,
  const bool metaKey,
  const bool shiftKey,
  const SbInputDeviceType& device_type,
  const SbKey key,
  const SbKeyLocation key_location,
  const unsigned int keysym,
  const wchar_t character,
  // the null-terminated input text in UTF-8 encoding
  const std::string& text,
  bool is_printable
);

std::unique_ptr<cobalt::system_window::InputEvent>
  SbEventToInputEvent(const SbEvent* event);

std::unique_ptr<cobalt::system_window::InputEvent>
  PointerSbInputDataToInputEvent(const SbInputData& data);

std::unique_ptr<cobalt::system_window::InputEvent>
  SbInputDataToInputEvent(const SbInputData& data);

// based on https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/port/cobalt/system_window/system_window.cc#L107
std::unique_ptr<cobalt::system_window::InputEvent> CreateInputEvent(const SbInputData& data,
                      cobalt::system_window::InputEvent::Type type, bool is_repeat);

cobalt::dom::Event* InputEventToDomEvent(const std::string& dom_event_type,
  cobalt::system_window::InputEvent* input_event,
  scoped_refptr<Window> window);

} // native_event
