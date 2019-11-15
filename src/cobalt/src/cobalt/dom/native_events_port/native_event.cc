#include "cobalt/dom/native_events_port/native_event.h"

namespace native_event {

std::unique_ptr<SbInputData> createEmptySbEventData() {
    // TODO: free mem
    std::unique_ptr<SbInputData> data(new SbInputData());
    SbMemorySet(data.get(), 0, sizeof(*data));
    data->device_id = 0; // kGamepadDeviceId
    data->key_location = kSbKeyLocationUnspecified;
    //data->character = "k";
#if SB_API_VERSION >= 6
    data->pressure = NAN;
    data->size = {NAN, NAN};
    data->tilt = {NAN, NAN};
#else
#error "need SB_API_VERSION >= 6"
#endif
    data->key = kSbKeyUnknown;
    return std::move(data);
}

unsigned int createSbKeyModifiers(const bool altKey,
    const bool ctrlKey, const bool metaKey, const bool shiftKey) {
  unsigned int modifiers = kSbKeyModifiersNone;
  if (altKey) {
    modifiers |= kSbKeyModifiersAlt;
  }
  if (ctrlKey) {
    modifiers |= kSbKeyModifiersCtrl;
  }
  if (metaKey) {
    modifiers |= kSbKeyModifiersMeta;
  }
  if (shiftKey) {
    modifiers |= kSbKeyModifiersShift;
  }
  return modifiers;
}
unsigned int createSbButtonModifiers(
  const bool isLeft,
  const bool isMiddle,
  const bool isRight,
  const bool isBack,
  const bool isForward)
{
  unsigned int modifiers = kSbKeyModifiersNone;
  if (isLeft) {
    modifiers |= kSbKeyModifiersPointerButtonLeft;
  }
  if (isMiddle) {
    modifiers |= kSbKeyModifiersPointerButtonMiddle;
  }
  if (isRight) {
    modifiers |= kSbKeyModifiersPointerButtonRight;
  }
  if (isBack) {
    NOTIMPLEMENTED();
    modifiers |= kSbKeyModifiersPointerButtonBack;
  }
  if (isForward) {
    modifiers |= kSbKeyModifiersPointerButtonForward;
  }
  return modifiers;
}

#if defined(__EMSCRIPTEN__)
unsigned int EmscMouseEventToSbButtonModifiers(unsigned short button) {
  unsigned int modifiers = kSbKeyModifiersNone;
  if (button == 0) {
    modifiers |= kSbKeyModifiersPointerButtonLeft;
  }
  if (button == 1) {
    modifiers |= kSbKeyModifiersPointerButtonMiddle;
  }
  if (button == 2) {
    modifiers |= kSbKeyModifiersPointerButtonRight;
  }
  if (button == 3) {
    NOTIMPLEMENTED();
    modifiers |= kSbKeyModifiersPointerButtonBack;
  }
  if (button == 4) {
    NOTIMPLEMENTED();
    modifiers |= kSbKeyModifiersPointerButtonForward;
  }
  return modifiers;
}

SbKey EmscMouseEventToSbKey(unsigned short button) {
  SbKey key = kSbKeyUnknown;
  unsigned int modifiers = kSbKeyModifiersNone;
  if (button == 0) { // left
    //printf("kSbKeyMouse1\n");
    return kSbKeyMouse1;
  }
  if (button == 1) { // middle
    //printf("kSbKeyMouse2\n");
    return kSbKeyMouse2;
  }
  if (button == 2) { // right
    //printf("kSbKeyMouse3\n");
    return kSbKeyMouse3;
  }
  if (button == 3) {
    NOTIMPLEMENTED();
  }
  if (button == 4) {
    NOTIMPLEMENTED();
  }
  return key;
}

// see https://github.com/emscripten-core/emscripten/blob/master/system/include/emscripten/dom_pk_codes.h
// TODO: DOM_KEY_LOCATION_LEFT / DOM_KEY_LOCATION_RIGHT
SbKeyLocation EmscKeycodeToSbKeyLocation(const int keysum) {
  if (keysum == DOM_PK_ALT_LEFT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == DOM_PK_CONTROL_LEFT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == DOM_PK_SHIFT_LEFT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == DOM_PK_ALT_RIGHT) {
    return kSbKeyLocationRight;
  }
  if (keysum == DOM_PK_CONTROL_RIGHT) {
    return kSbKeyLocationRight;
  }
  if (keysum == DOM_PK_SHIFT_RIGHT) {
    return kSbKeyLocationRight;
  }
  return kSbKeyLocationUnspecified;
}

// see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/starboard/android/shared/input_events_generator.cc#L117
// see https://github.com/libretro/RetroArch/blob/master/input/input_keymaps.c#L1223
SbKey EmscKeycodeToSbKey(const int keysum) {
  SbKey key = kSbKeyUnknown;
  if (keysum == DOM_PK_ALT_LEFT) {
    return kSbKeyMenu;
  }
  if (keysum == DOM_PK_ALT_RIGHT) {
    return kSbKeyMenu;
  }
  if (keysum == DOM_PK_CONTROL_LEFT) {
    return kSbKeyControl;
  }
  if (keysum == DOM_PK_CONTROL_RIGHT) {
    return kSbKeyControl;
  }
  if (keysum == DOM_PK_SHIFT_LEFT) {
    return kSbKeyShift;
  }
  if (keysum == DOM_PK_SHIFT_RIGHT) {
    return kSbKeyShift;
  }
  if (keysum == DOM_PK_CAPS_LOCK) {
    return kSbKeyCapital;
  }
  /*if (keysum == DOM_PK_NUMLOCKCLEAR) {
    return kSbKeyNumlock;
  }*/
  if (keysum == DOM_PK_SCROLL_LOCK) {
    return kSbKeyScroll;
  }
  /*if (keysum == DOM_PK_SLEEP) {
    return kSbKeySleep;
  }*/
  if (keysum == DOM_PK_HELP) {
    return kSbKeyHelp;
  }
  if (keysum == DOM_PK_BACKSLASH) {
    return kSbKeyEscape;
  }
  if (keysum == DOM_PK_ESCAPE) {
    return kSbKeyEscape;
  }
  if (keysum == DOM_PK_ENTER) {
    return kSbKeyReturn;
  }
  if (keysum == DOM_PK_NUMPAD_ENTER) { // NUMPAD_ENTER
    return kSbKeyReturn;
  }
  if (keysum == DOM_PK_PAGE_UP) {
    return kSbKeyPrior;
  }
  if (keysum == DOM_PK_PAGE_DOWN) {
    return kSbKeyNext;
  }
  if (keysum == DOM_PK_HOME) {
    return kSbKeyHome;
  }
  if (keysum == DOM_PK_END) {
    return kSbKeyEnd;
  }

  if (keysum == DOM_PK_ARROW_UP) {
    return kSbKeyUp;
  }
  if (keysum == DOM_PK_ARROW_LEFT) {
    return kSbKeyLeft;
  }
  if (keysum == DOM_PK_ARROW_RIGHT) {
    return kSbKeyRight;
  }
  if (keysum == DOM_PK_ARROW_DOWN) {
    return kSbKeyDown;
  }

  // Dpad
  /*if (keysum == DOM_PK_UP) {
    return kSbKeyGamepadDPadUp;
  }
  if (keysum == DOM_PK_DOWN) {
    return kSbKeyGamepadDPadDown;
  }
  if (keysum == DOM_PK_LEFT) {
    return kSbKeyGamepadDPadLeft;
  }
  if (keysum == DOM_PK_RIGHT) {
    return kSbKeyGamepadDPadRight;
  }*/
  /*if (keysum == DOM_PK_DPAD_CENTER) {
    return kSbKeyGamepad1;
  }*/

  // Game controller
  /*
  case DOM_PK_BUTTON_A:
    return kSbKeyGamepad1;
  case DOM_PK_BUTTON_B:
    return kSbKeyGamepad2;
  case DOM_PK_BUTTON_C:
    return kSbKeyUnknown;
  case DOM_PK_BUTTON_X:
    return kSbKeyGamepad3;
  case DOM_PK_BUTTON_Y:
    return kSbKeyGamepad4;
  case DOM_PK_BUTTON_L1:
    return kSbKeyGamepadLeftBumper;
  case DOM_PK_BUTTON_R1:
    return kSbKeyGamepadRightBumper;
  case DOM_PK_BUTTON_L2:
    return kSbKeyGamepadLeftTrigger;
  case DOM_PK_BUTTON_R2:
    return kSbKeyGamepadRightTrigger;
  case DOM_PK_BUTTON_THUMBL:
    return kSbKeyGamepadLeftStick;
  case DOM_PK_BUTTON_THUMBR:
    return kSbKeyGamepadRightStick;
  case DOM_PK_BUTTON_START:
    return kSbKeyGamepad6;
  case DOM_PK_BUTTON_SELECT:
    return kSbKeyGamepad5;
  case DOM_PK_BUTTON_MODE:
    return kSbKeyModechange;*/


  // Media transport
  /*case DOM_PK_MEDIA_PLAY_PAUSE:
    return kSbKeyMediaPlayPause;
  case DOM_PK_MEDIA_PLAY:
    return kSbKeyPlay;
  case DOM_PK_MEDIA_PAUSE:
    return kSbKeyPause;
  case DOM_PK_MEDIA_STOP:
    return kSbKeyMediaStop;
  case DOM_PK_MEDIA_NEXT:
    return kSbKeyMediaNextTrack;
  case DOM_PK_MEDIA_PREVIOUS:
    return kSbKeyMediaPrevTrack;
  case DOM_PK_MEDIA_REWIND:
    return kSbKeyMediaRewind;
  case DOM_PK_MEDIA_FAST_FORWARD:
    return kSbKeyMediaFastForward;*/

/*#if SB_API_VERSION >= 6
    // TV Remote specific
    case DOM_PK_CHANNEL_UP:
      return kSbKeyChannelUp;
    case DOM_PK_CHANNEL_DOWN:
      return kSbKeyChannelDown;
    case DOM_PK_CAPTIONS:
      return kSbKeyClosedCaption;
    case DOM_PK_INFO:
      return kSbKeyInfo;
    case DOM_PK_GUIDE:
      return kSbKeyGuide;
    case DOM_PK_LAST_CHANNEL:
      return kSbKeyLast;
    case DOM_PK_MEDIA_AUDIO_TRACK:
      return kSbKeyMediaAudioTrack;

    case DOM_PK_PROG_RED:
      return kSbKeyRed;
    case DOM_PK_PROG_GREEN:
      return kSbKeyGreen;
    case DOM_PK_PROG_YELLOW:
      return kSbKeyYellow;
    case DOM_PK_PROG_BLUE:
      return kSbKeyBlue;
#endif  // SB_API_VERSION >= 6*/

  // Whitespace
  if (keysum == DOM_PK_TAB) {
    return kSbKeyTab;
  }
  if (keysum == DOM_PK_SPACE) {
    return kSbKeySpace;
  }

  // Deletion
  if (keysum == DOM_PK_BACKSPACE) {
    return kSbKeyBack;
  }
  /*if (keysum == DOM_PK_FORWARD_DEL) {
    return kSbKeyDelete;
  }*/
  /*if (keysum == DOM_PK_CLEAR) {
    return kSbKeyClear;
  }*/
  if (keysum == DOM_PK_INSERT) {
    return kSbKeyInsert;
  }
  if (keysum == DOM_PK_NUMPAD_ADD) {
    return kSbKeyAdd;
  }
  /*if (keysum == DOM_PK_PLUS) {
    return kSbKeyOemPlus;
  }*/
  /*if (keysum == DOM_PK_EQUALS) {
    return kSbKeyOemPlus;
  }*/
  if (keysum == DOM_PK_NUMPAD_EQUAL) {
    return kSbKeyOemPlus;
  }
  if (keysum == DOM_PK_NUMPAD_SUBTRACT) {
    return kSbKeySubtract;
  }
  /*if (keysum == DOM_PK_MINUS) {
    return kSbKeyOemMinus;
  }*/
  if (keysum == DOM_PK_NUMPAD_MULTIPLY) { // NUMPAD MULTIPLY
    return kSbKeyMultiply;
  }
  if (keysum == DOM_PK_NUMPAD_DIVIDE) {
    return kSbKeyDivide;
  }
  /*if (keysum == DOM_PK_COMMA) {
    return kSbKeyOemComma;
  }*/
  if (keysum == DOM_PK_NUMPAD_COMMA) {
    return kSbKeyOemComma;
  }
  /*if (keysum == DOM_PK_KP_PERIOD) { // DOT
    return kSbKeyDecimal;
  }*/
  /*if (keysum == DOM_PK_PERIOD) {
    return kSbKeyOemPeriod;
  }
  if (keysum == DOM_PK_SEMICOLON) {
    return kSbKeyOem1;
  }
  if (keysum == DOM_PK_SLASH) {
    return kSbKeyOem2;
  }
  if (keysum == DOM_PK_BACKQUOTE) { // GRAVE
    return kSbKeyOem3;
  }
  if (keysum == DOM_PK_LEFTBRACKET) {
    return kSbKeyOem4;
  }
  if (keysum == DOM_PK_BACKSLASH) {
    return kSbKeyOem5;
  }
  if (keysum == DOM_PK_RIGHTBRACKET) {
    return kSbKeyOem6;
  }
  if (keysum == DOM_PK_QUOTE) { // APOSTROPHE
    return kSbKeyOem7;
  }*/
  if (keysum == DOM_PK_F1) {
    return kSbKeyF1;
  }
  if (keysum == DOM_PK_F2) {
    return kSbKeyF2;
  }
  if (keysum == DOM_PK_F3) {
    return kSbKeyF3;
  }
  if (keysum == DOM_PK_F4) {
    return kSbKeyF4;
  }
  if (keysum == DOM_PK_F5) {
    return kSbKeyF5;
  }
  if (keysum == DOM_PK_F6) {
    return kSbKeyF6;
  }
  if (keysum == DOM_PK_F7) {
    return kSbKeyF7;
  }
  if (keysum == DOM_PK_F8) {
    return kSbKeyF8;
  }
  if (keysum == DOM_PK_F9) {
    return kSbKeyF9;
  }
  if (keysum == DOM_PK_F10) {
    return kSbKeyF10;
  }
  if (keysum == DOM_PK_F11) {
    return kSbKeyF11;
  }
  if (keysum == DOM_PK_F12) {
    return kSbKeyF12;
  }
  if (keysum == DOM_PK_0) {
    return kSbKey0;
  }
  if (keysum == DOM_PK_1) {
    return kSbKey1;
  }
  if (keysum == DOM_PK_2) {
    return kSbKey2;
  }
  if (keysum == DOM_PK_3) {
    return kSbKey3;
  }
  if (keysum == DOM_PK_4) {
    return kSbKey4;
  }
  if (keysum == DOM_PK_5) {
    return kSbKey5;
  }
  if (keysum == DOM_PK_6) {
    return kSbKey6;
  }
  if (keysum == DOM_PK_7) {
    return kSbKey7;
  }
  if (keysum == DOM_PK_8) {
    return kSbKey8;
  }
  if (keysum == DOM_PK_9) {
    return kSbKey9;
  }
  if (keysum == DOM_PK_NUMPAD_0) {
    return kSbKeyNumpad0;
  }
  if (keysum == DOM_PK_NUMPAD_1) {
    return kSbKeyNumpad1;
  }
  if (keysum == DOM_PK_NUMPAD_2) {
    return kSbKeyNumpad2;
  }
  if (keysum == DOM_PK_NUMPAD_3) {
    return kSbKeyNumpad3;
  }
  if (keysum == DOM_PK_NUMPAD_4) {
    return kSbKeyNumpad4;
  }
  if (keysum == DOM_PK_NUMPAD_5) {
    return kSbKeyNumpad5;
  }
  if (keysum == DOM_PK_NUMPAD_6) {
    return kSbKeyNumpad6;
  }
  if (keysum == DOM_PK_NUMPAD_7) {
    return kSbKeyNumpad7;
  }
  if (keysum == DOM_PK_NUMPAD_8) {
    return kSbKeyNumpad8;
  }
  if (keysum == DOM_PK_NUMPAD_9) {
    return kSbKeyNumpad9;
  }
  if (keysum == DOM_PK_A) {
    printf("keysum == DOM_PK_A\n");
    return kSbKeyA;
  }
  if (keysum == DOM_PK_B) {
    return kSbKeyB;
  }
  if (keysum == DOM_PK_C) {
    return kSbKeyC;
  }
  if (keysum == DOM_PK_D) {
    return kSbKeyD;
  }
  if (keysum == DOM_PK_E) {
    return kSbKeyE;
  }
  if (keysum == DOM_PK_F) {
    return kSbKeyF;
  }
  if (keysum == DOM_PK_G) {
    return kSbKeyG;
  }
  if (keysum == DOM_PK_H) {
    return kSbKeyH;
  }
  if (keysum == DOM_PK_I) {
    return kSbKeyI;
  }
  if (keysum == DOM_PK_J) {
    return kSbKeyJ;
  }
  if (keysum == DOM_PK_K) {
    return kSbKeyK;
  }
  if (keysum == DOM_PK_L) {
    return kSbKeyL;
  }
  if (keysum == DOM_PK_M) {
    return kSbKeyM;
  }
  if (keysum == DOM_PK_N) {
    return kSbKeyN;
  }
  if (keysum == DOM_PK_O) {
    return kSbKeyO;
  }
  if (keysum == DOM_PK_P) {
    return kSbKeyP;
  }
  if (keysum == DOM_PK_Q) {
    return kSbKeyQ;
  }
  if (keysum == DOM_PK_R) {
    return kSbKeyR;
  }
  if (keysum == DOM_PK_S) {
    return kSbKeyS;
  }
  if (keysum == DOM_PK_T) {
    return kSbKeyT;
  }
  if (keysum == DOM_PK_U) {
    return kSbKeyU;
  }
  if (keysum == DOM_PK_V) {
    return kSbKeyV;
  }
  if (keysum == DOM_PK_W) {
    return kSbKeyW;
  }
  if (keysum == DOM_PK_X) {
    return kSbKeyX;
  }
  if (keysum == DOM_PK_Y) {
    return kSbKeyY;
  }
  if (keysum == DOM_PK_Z) {
    return kSbKeyZ;
  }

  // Don't handle these keys so the OS can in a uniform manner.
  if (keysum == DOM_PK_AUDIO_VOLUME_UP) {
    return kSbKeyUnknown;
  }
  if (keysum == DOM_PK_AUDIO_VOLUME_DOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == DOM_PK_AUDIO_VOLUME_MUTE) {
    return kSbKeyUnknown;
  }
  /*if (keysum == DOM_PK_BRIGHTNESSUP) {
    return kSbKeyUnknown;
  }
  if (keysum == DOM_PK_BRIGHTNESSDOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == DOM_PK_FIND) { // SEARCH
    return kSbKeyUnknown;
  }*/

  return key;
}

int number_of_characters_in_utf8_string(const char *str)
{
  if (!str) return 0;
  int num_chars = 0;
  while(*str)
  {
    if ((*str++ & 0xC0) != 0x80) ++num_chars; // Skip all continuation bytes
  }
  return num_chars;
}

int emscripten_key_event_is_printable_character(const EmscriptenKeyboardEvent *keyEvent)
{
  // Not sure if this is correct, but heuristically looks good. Improvements on corner cases welcome.
  return number_of_characters_in_utf8_string(keyEvent->key) == 1;
}

// Counts the length of the given UTF8 string in number of characters (and not bytes)
int NumCharsInUTF8String(const unsigned char *str)
{
  if (!str) return 0;
  int numChars = 0;
  while(*str)
  {
    if ((*str++ & 0xC0) != 0x80) ++numChars; // Skip all continuation bytes
  }
  return numChars;
}

// Converts a single UTF8 encoded character to a 32-bit Unicode codepoint.
unsigned int Utf8CharToUtf32(const unsigned char *utf8Char)
{
  if (((*utf8Char) & 0x80) == 0) return (unsigned int)*utf8Char;
  if (((*utf8Char) & 0xE0) == 0xC0) return (((unsigned int)utf8Char[0] & 31) << 6) | ((unsigned int)utf8Char[1] & 63);
  if (((*utf8Char) & 0xF0) == 0xE0) return (((unsigned int)utf8Char[0] & 15) << 12) | (((unsigned int)utf8Char[1] & 63) << 6) | ((unsigned int)utf8Char[2] & 63);
  if (((*utf8Char) & 0xF8) == 0xF0) return (((unsigned int)utf8Char[0] & 7) << 18) | (((unsigned int)utf8Char[1] & 63) << 12) | (((unsigned int)utf8Char[2] & 63) << 6) | ((unsigned int)utf8Char[3] & 63);
  if (((*utf8Char) & 0xFC) == 0xF8) return (((unsigned int)utf8Char[0] & 3) << 24) | (((unsigned int)utf8Char[1] & 63) << 18) | (((unsigned int)utf8Char[2] & 63) << 12) | (((unsigned int)utf8Char[3] & 63) << 6) | ((unsigned int)utf8Char[4] & 63);
  return (((unsigned int)utf8Char[0] & 1) << 30) | (((unsigned int)utf8Char[1] & 63) << 24) | (((unsigned int)utf8Char[2] & 63) << 18) | (((unsigned int)utf8Char[3] & 63) << 12) | (((unsigned int)utf8Char[4] & 63) << 6) | ((unsigned int)utf8Char[5] & 63);
}

// Converts a UTF8 encoded string to a UTF32 string.
void Utf8StringToUtf32(unsigned int *dstUtf32, int maxBytesToWrite, const unsigned char *utf8)
{
  unsigned int *end = dstUtf32 + (maxBytesToWrite - 4)/4;
  if (utf8)
  {
    while(*utf8 && dstUtf32 < end)
    {
      *dstUtf32++ = Utf8CharToUtf32(utf8++);
      while(*utf8 && (*utf8 & 0xC0) == 0x80)
        ++utf8; // Skip all continuation bytes
    }
  }
  *dstUtf32 = 0;
}

#endif // __EMSCRIPTEN__

SbKey ASCIIToSbKey(const std::string& symbol) {
  printf("ASCIIToSbKey for %s\n", symbol.c_str());
  if (symbol == "a" || symbol == "A") {
    printf("symbol == a\n");
    return kSbKeyA;
  }
  if (symbol == "a" || symbol == "A") {
    printf("symbol == a\n");
    return kSbKeyA;
  }
  NOTIMPLEMENTED();
  // TODO
  return kSbKeyUnknown;
}

SbKeyLocation modstateToSbKeyLocation(const bool LALT, const bool LCTRL
  , const bool LSHIFT, const bool RALT, const bool RCTRL, const bool RSHIFT)
{
  if (LALT) {
    return kSbKeyLocationLeft;
  }
  if (LCTRL) {
    return kSbKeyLocationLeft;
  }
  if (LSHIFT) {
    return kSbKeyLocationLeft;
  }
  if (RALT) {
    return kSbKeyLocationRight;
  }
  if (RCTRL) {
    return kSbKeyLocationRight;
  }
  if (RSHIFT) {
    return kSbKeyLocationRight;
  }
  return kSbKeyLocationUnspecified;
}

#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
unsigned int SDL2ModStateToSbKeyModifiers(const SDL_Keymod& modState) {
  unsigned int modifiers = kSbKeyModifiersNone;
  if (modState & KMOD_ALT) {
    modifiers |= kSbKeyModifiersAlt;
  }
  if (modState & KMOD_CTRL) {
    modifiers |= kSbKeyModifiersCtrl;
  }
  if (modState & KMOD_MODE) {
    // TODO: KMOD_MODE = kSbKeyModifiersMeta ?
    modifiers |= kSbKeyModifiersMeta;
  }
  if (modState & KMOD_SHIFT) {
    modifiers |= kSbKeyModifiersShift;
  }
  return modifiers;
}

// Javascript event.button 0 = left, 1 = middle, 2 = right
unsigned int SDL2MouseEventToSbButtonModifiers(const Uint8& button) {
  unsigned int modifiers = kSbKeyModifiersNone;
  //const SDL_MouseButtonEvent& button = event.button;
  if (button == SDL_BUTTON_LEFT) {
    modifiers |= kSbKeyModifiersPointerButtonLeft;
  }
  if (button == SDL_BUTTON_MIDDLE) {
    modifiers |= kSbKeyModifiersPointerButtonMiddle;
  }
  if (button == SDL_BUTTON_RIGHT) {
    modifiers |= kSbKeyModifiersPointerButtonRight;
  }
  if (button == SDL_BUTTON_X1) {
    NOTIMPLEMENTED();
    modifiers |= kSbKeyModifiersPointerButtonBack;
  }
  if (button == SDL_BUTTON_X2) {
    NOTIMPLEMENTED();
    modifiers |= kSbKeyModifiersPointerButtonForward;
  }
  return modifiers;
}

std::string keycodeToASCII(SDL_Keycode& keysum)
{
  //DCHECK(isPrintableKeycode(key));
  SbKey key = kSbKeyUnknown;
  if (keysum == SDLK_SPACE) {
    return " ";
  }
  if (keysum == SDLK_KP_PLUS) {
    return "+";
  }
  if (keysum == SDLK_PLUS) {
    return "+";
  }
  if (keysum == SDLK_EQUALS) {
    return "=";
  }
  if (keysum == SDLK_KP_EQUALS) {
    return "=";
  }
  if (keysum == SDLK_KP_MINUS) {
    return "-";
  }
  if (keysum == SDLK_MINUS) {
    return "-";
  }
  if (keysum == SDLK_KP_MULTIPLY) { // NUMPAD MULTIPLY
    return "*";
  }
  if (keysum == SDLK_KP_DIVIDE) {
    return "/";
  }
  if (keysum == SDLK_COMMA) {
    return ",";
  }
  if (keysum == SDLK_KP_COMMA) {
    return ",";
  }
  if (keysum == SDLK_KP_PERIOD) { // DOT
    return ".";
  }
  if (keysum == SDLK_PERIOD) {
    return ".";
  }
  if (keysum == SDLK_SEMICOLON) {
    return ";";
  }
  if (keysum == SDLK_SLASH) {
    return "/";
  }
  if (keysum == SDLK_BACKQUOTE) { // GRAVE
    return "`";
  }
  if (keysum == SDLK_LEFTBRACKET) {
    return "}";
  }
  if (keysum == SDLK_BACKSLASH) {
    return "\\";
  }
  if (keysum == SDLK_RIGHTBRACKET) {
    return "/";
  }
  if (keysum == SDLK_QUOTE) { // APOSTROPHE
    return "'";
  }
  if (keysum == SDLK_0) {
    return "0";
  }
  if (keysum == SDLK_1) {
    return "1";
  }
  if (keysum == SDLK_2) {
    return "2";
  }
  if (keysum == SDLK_3) {
    return "3";
  }
  if (keysum == SDLK_4) {
    return "4";
  }
  if (keysum == SDLK_5) {
    return "5";
  }
  if (keysum == SDLK_6) {
    return "6";
  }
  if (keysum == SDLK_7) {
    return "7";
  }
  if (keysum == SDLK_8) {
    return "8";
  }
  if (keysum == SDLK_9) {
    return "9";
  }
  if (keysum == SDLK_KP_0) {
    return "0";
  }
  if (keysum == SDLK_KP_1) {
    return "1";
  }
  if (keysum == SDLK_KP_2) {
    return "2";
  }
  if (keysum == SDLK_KP_3) {
    return "3";
  }
  if (keysum == SDLK_KP_4) {
    return "4";
  }
  if (keysum == SDLK_KP_5) {
    return "5";
  }
  if (keysum == SDLK_KP_6) {
    return "6";
  }
  if (keysum == SDLK_KP_7) {
    return "7";
  }
  if (keysum == SDLK_KP_8) {
    return "8";
  }
  if (keysum == SDLK_KP_9) {
    return "9";
  }
  if (keysum == SDLK_a) {
    printf("text keysum == SDLK_a\n");
    return "a";
  }
  if (keysum == SDLK_b) {
    return "b";
  }
  if (keysum == SDLK_c) {
    return "c";
  }
  if (keysum == SDLK_d) {
    return "d";
  }
  if (keysum == SDLK_e) {
    return "e";
  }
  if (keysum == SDLK_f) {
    return "f";
  }
  if (keysum == SDLK_g) {
    return "g";
  }
  if (keysum == SDLK_h) {
    return "h";
  }
  if (keysum == SDLK_i) {
    return "i";
  }
  if (keysum == SDLK_j) {
    return "j";
  }
  if (keysum == SDLK_k) {
    return "k";
  }
  if (keysum == SDLK_l) {
    return "l";
  }
  if (keysum == SDLK_m) {
    return "m";
  }
  if (keysum == SDLK_n) {
    return "n";
  }
  if (keysum == SDLK_o) {
    return "o";
  }
  if (keysum == SDLK_p) {
    return "p";
  }
  if (keysum == SDLK_q) {
    return "q";
  }
  if (keysum == SDLK_r) {
    return "r";
  }
  if (keysum == SDLK_s) {
    return "s";
  }
  if (keysum == SDLK_t) {
    return "t";
  }
  if (keysum == SDLK_u) {
    return "u";
  }
  if (keysum == SDLK_v) {
    return "v";
  }
  if (keysum == SDLK_w) {
    return "w";
  }
  if (keysum == SDLK_x) {
    printf("text keysum == SDLK_x\n");
    return "x";
  }
  if (keysum == SDLK_y) {
    return "y";
  }
  if (keysum == SDLK_z) {
    printf("text keysum == SDLK_z\n");
    return "z";
  }
  return "";
}

SbKey SDL2MouseEventToSbKey(const Uint8& button) {
  SbKey key = kSbKeyUnknown;
  unsigned int modifiers = kSbKeyModifiersNone;
  //const SDL_MouseButtonEvent& button = event.button.button;
  if (button == SDL_BUTTON_LEFT) { // left
    //printf("kSbKeyMouse1\n");
    return kSbKeyMouse1;
  }
  if (button == SDL_BUTTON_RIGHT) { // right
    //printf("kSbKeyMouse3\n");
    return kSbKeyMouse3;
  }
  if (button == SDL_BUTTON_MIDDLE) { // middle
    //printf("kSbKeyMouse2\n");
    return kSbKeyMouse2;
  }
  if (button == SDL_BUTTON_X1) {
    NOTIMPLEMENTED();
  }
  if (button == SDL_BUTTON_X2) {
    NOTIMPLEMENTED();
  }
  return key;
}

SbKeyLocation SDL2KeycodeToSbKeyLocation(const SDL_Keycode& keysum) {
  if (keysum == SDLK_LALT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDLK_LCTRL) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDLK_LSHIFT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDLK_RALT) {
    return kSbKeyLocationRight;
  }
  if (keysum == SDLK_RCTRL) {
    return kSbKeyLocationRight;
  }
  if (keysum == SDLK_RSHIFT) {
    return kSbKeyLocationRight;
  }
  return kSbKeyLocationUnspecified;
}

SbKeyLocation SDL2ScancodeToSbKeyLocation(const SDL_Scancode& keysum) {
  if (keysum == SDL_SCANCODE_LALT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDL_SCANCODE_LCTRL) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDL_SCANCODE_LSHIFT) {
    return kSbKeyLocationLeft;
  }
  if (keysum == SDL_SCANCODE_RALT) {
    return kSbKeyLocationRight;
  }
  if (keysum == SDL_SCANCODE_RCTRL) {
    return kSbKeyLocationRight;
  }
  if (keysum == SDL_SCANCODE_RSHIFT) {
    return kSbKeyLocationRight;
  }
  return kSbKeyLocationUnspecified;
}

// see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/starboard/android/shared/input_events_generator.cc#L117
// see https://github.com/libretro/RetroArch/blob/master/input/input_keymaps.c#L1223
SbKey SDL2ScancodeToSbKey(const SDL_Scancode& keysum) {
  SbKey key = kSbKeyUnknown;
  if (keysum == SDL_SCANCODE_LALT) {
    return kSbKeyMenu;
  }
  if (keysum == SDL_SCANCODE_RALT) {
    return kSbKeyMenu;
  }
  if (keysum == SDL_SCANCODE_LCTRL) {
    return kSbKeyControl;
  }
  if (keysum == SDL_SCANCODE_RCTRL) {
    return kSbKeyControl;
  }
  if (keysum == SDL_SCANCODE_LSHIFT) {
    return kSbKeyShift;
  }
  if (keysum == SDL_SCANCODE_RSHIFT) {
    return kSbKeyShift;
  }
  if (keysum == SDL_SCANCODE_CAPSLOCK) {
    return kSbKeyCapital;
  }
  if (keysum == SDL_SCANCODE_NUMLOCKCLEAR) {
    return kSbKeyNumlock;
  }
  if (keysum == SDL_SCANCODE_SCROLLLOCK) {
    return kSbKeyScroll;
  }
  if (keysum == SDL_SCANCODE_SLEEP) {
    return kSbKeySleep;
  }
  if (keysum == SDL_SCANCODE_HELP) {
    return kSbKeyHelp;
  }
  if (keysum == SDL_SCANCODE_BACKSLASH) {
    return kSbKeyEscape;
  }
  if (keysum == SDL_SCANCODE_ESCAPE) {
    return kSbKeyEscape;
  }
  if (keysum == SDL_SCANCODE_RETURN) {
    return kSbKeyReturn;
  }
  if (keysum == SDL_SCANCODE_KP_ENTER) { // NUMPAD_ENTER
    return kSbKeyReturn;
  }
  if (keysum == SDL_SCANCODE_PAGEUP) {
    return kSbKeyPrior;
  }
  if (keysum == SDL_SCANCODE_PAGEDOWN) {
    return kSbKeyNext;
  }
  if (keysum == SDL_SCANCODE_HOME) {
    return kSbKeyHome;
  }
  if (keysum == SDL_SCANCODE_END) {
    return kSbKeyEnd;
  }

  if (keysum == SDL_SCANCODE_UP) {
    return kSbKeyUp;
  }
  if (keysum == SDL_SCANCODE_LEFT) {
    return kSbKeyLeft;
  }
  if (keysum == SDL_SCANCODE_RIGHT) {
    return kSbKeyRight;
  }
  if (keysum == SDL_SCANCODE_DOWN) {
    //printf("SDL_SCANCODE_DOWN\n");
    return kSbKeyDown;
  }

  // Dpad
  if (keysum == SDL_SCANCODE_UP) {
    return kSbKeyGamepadDPadUp;
  }
  if (keysum == SDL_SCANCODE_DOWN) {
    return kSbKeyGamepadDPadDown;
  }
  if (keysum == SDL_SCANCODE_LEFT) {
    return kSbKeyGamepadDPadLeft;
  }
  if (keysum == SDL_SCANCODE_RIGHT) {
    return kSbKeyGamepadDPadRight;
  }
  /*if (keysum == SDL_SCANCODE_DPAD_CENTER) {
    return kSbKeyGamepad1;
  }*/

  // Game controller
  /*
  case SDL_SCANCODE_BUTTON_A:
    return kSbKeyGamepad1;
  case SDL_SCANCODE_BUTTON_B:
    return kSbKeyGamepad2;
  case SDL_SCANCODE_BUTTON_C:
    return kSbKeyUnknown;
  case SDL_SCANCODE_BUTTON_X:
    return kSbKeyGamepad3;
  case SDL_SCANCODE_BUTTON_Y:
    return kSbKeyGamepad4;
  case SDL_SCANCODE_BUTTON_L1:
    return kSbKeyGamepadLeftBumper;
  case SDL_SCANCODE_BUTTON_R1:
    return kSbKeyGamepadRightBumper;
  case SDL_SCANCODE_BUTTON_L2:
    return kSbKeyGamepadLeftTrigger;
  case SDL_SCANCODE_BUTTON_R2:
    return kSbKeyGamepadRightTrigger;
  case SDL_SCANCODE_BUTTON_THUMBL:
    return kSbKeyGamepadLeftStick;
  case SDL_SCANCODE_BUTTON_THUMBR:
    return kSbKeyGamepadRightStick;
  case SDL_SCANCODE_BUTTON_START:
    return kSbKeyGamepad6;
  case SDL_SCANCODE_BUTTON_SELECT:
    return kSbKeyGamepad5;
  case SDL_SCANCODE_BUTTON_MODE:
    return kSbKeyModechange;*/


  // Media transport
  /*case SDL_SCANCODE_MEDIA_PLAY_PAUSE:
    return kSbKeyMediaPlayPause;
  case SDL_SCANCODE_MEDIA_PLAY:
    return kSbKeyPlay;
  case SDL_SCANCODE_MEDIA_PAUSE:
    return kSbKeyPause;
  case SDL_SCANCODE_MEDIA_STOP:
    return kSbKeyMediaStop;
  case SDL_SCANCODE_MEDIA_NEXT:
    return kSbKeyMediaNextTrack;
  case SDL_SCANCODE_MEDIA_PREVIOUS:
    return kSbKeyMediaPrevTrack;
  case SDL_SCANCODE_MEDIA_REWIND:
    return kSbKeyMediaRewind;
  case SDL_SCANCODE_MEDIA_FAST_FORWARD:
    return kSbKeyMediaFastForward;*/

/*#if SB_API_VERSION >= 6
    // TV Remote specific
    case SDL_SCANCODE_CHANNEL_UP:
      return kSbKeyChannelUp;
    case SDL_SCANCODE_CHANNEL_DOWN:
      return kSbKeyChannelDown;
    case SDL_SCANCODE_CAPTIONS:
      return kSbKeyClosedCaption;
    case SDL_SCANCODE_INFO:
      return kSbKeyInfo;
    case SDL_SCANCODE_GUIDE:
      return kSbKeyGuide;
    case SDL_SCANCODE_LAST_CHANNEL:
      return kSbKeyLast;
    case SDL_SCANCODE_MEDIA_AUDIO_TRACK:
      return kSbKeyMediaAudioTrack;

    case SDL_SCANCODE_PROG_RED:
      return kSbKeyRed;
    case SDL_SCANCODE_PROG_GREEN:
      return kSbKeyGreen;
    case SDL_SCANCODE_PROG_YELLOW:
      return kSbKeyYellow;
    case SDL_SCANCODE_PROG_BLUE:
      return kSbKeyBlue;
#endif  // SB_API_VERSION >= 6*/

  // Whitespace
  if (keysum == SDL_SCANCODE_TAB) {
    return kSbKeyTab;
  }
  if (keysum == SDL_SCANCODE_SPACE) {
    return kSbKeySpace;
  }

  // Deletion
  if (keysum == SDL_SCANCODE_BACKSPACE) {
    return kSbKeyBack;
  }
  /*if (keysum == SDL_SCANCODE_FORWARD_DEL) {
    return kSbKeyDelete;
  }*/
  if (keysum == SDL_SCANCODE_CLEAR) {
    return kSbKeyClear;
  }
  if (keysum == SDL_SCANCODE_INSERT) {
    return kSbKeyInsert;
  }
  if (keysum == SDL_SCANCODE_KP_PLUS) {
    return kSbKeyAdd;
  }
  /*if (keysum == SDL_SCANCODE_PLUS) {
    return kSbKeyOemPlus;
  }*/
  if (keysum == SDL_SCANCODE_EQUALS) {
    return kSbKeyOemPlus;
  }
  if (keysum == SDL_SCANCODE_KP_EQUALS) {
    return kSbKeyOemPlus;
  }
  if (keysum == SDL_SCANCODE_KP_MINUS) {
    return kSbKeySubtract;
  }
  if (keysum == SDL_SCANCODE_MINUS) {
    return kSbKeyOemMinus;
  }
  if (keysum == SDL_SCANCODE_KP_MULTIPLY) { // NUMPAD MULTIPLY
    return kSbKeyMultiply;
  }
  if (keysum == SDL_SCANCODE_KP_DIVIDE) {
    return kSbKeyDivide;
  }
  if (keysum == SDL_SCANCODE_COMMA) {
    return kSbKeyOemComma;
  }
  if (keysum == SDL_SCANCODE_KP_COMMA) {
    return kSbKeyOemComma;
  }
  if (keysum == SDL_SCANCODE_KP_PERIOD) { // DOT
    return kSbKeyDecimal;
  }
  if (keysum == SDL_SCANCODE_PERIOD) {
    return kSbKeyOemPeriod;
  }
  if (keysum == SDL_SCANCODE_SEMICOLON) {
    return kSbKeyOem1;
  }
  if (keysum == SDL_SCANCODE_SLASH) {
    return kSbKeyOem2;
  }
  /*if (keysum == SDL_SCANCODE_BACKQUOTE) { // GRAVE
    return kSbKeyOem3;
  }*/
  if (keysum == SDL_SCANCODE_LEFTBRACKET) {
    return kSbKeyOem4;
  }
  if (keysum == SDL_SCANCODE_BACKSLASH) {
    return kSbKeyOem5;
  }
  if (keysum == SDL_SCANCODE_RIGHTBRACKET) {
    return kSbKeyOem6;
  }
  /*if (keysum == SDL_SCANCODE_QUOTE) { // APOSTROPHE
    return kSbKeyOem7;
  }*/
  if (keysum == SDL_SCANCODE_F1) {
    return kSbKeyF1;
  }
  if (keysum == SDL_SCANCODE_F2) {
    return kSbKeyF2;
  }
  if (keysum == SDL_SCANCODE_F3) {
    return kSbKeyF3;
  }
  if (keysum == SDL_SCANCODE_F4) {
    return kSbKeyF4;
  }
  if (keysum == SDL_SCANCODE_F5) {
    return kSbKeyF5;
  }
  if (keysum == SDL_SCANCODE_F6) {
    return kSbKeyF6;
  }
  if (keysum == SDL_SCANCODE_F7) {
    return kSbKeyF7;
  }
  if (keysum == SDL_SCANCODE_F8) {
    return kSbKeyF8;
  }
  if (keysum == SDL_SCANCODE_F9) {
    return kSbKeyF9;
  }
  if (keysum == SDL_SCANCODE_F10) {
    return kSbKeyF10;
  }
  if (keysum == SDL_SCANCODE_F11) {
    return kSbKeyF11;
  }
  if (keysum == SDL_SCANCODE_F12) {
    return kSbKeyF12;
  }
  if (keysum == SDL_SCANCODE_0) {
    return kSbKey0;
  }
  if (keysum == SDL_SCANCODE_1) {
    return kSbKey1;
  }
  if (keysum == SDL_SCANCODE_2) {
    return kSbKey2;
  }
  if (keysum == SDL_SCANCODE_3) {
    return kSbKey3;
  }
  if (keysum == SDL_SCANCODE_4) {
    return kSbKey4;
  }
  if (keysum == SDL_SCANCODE_5) {
    return kSbKey5;
  }
  if (keysum == SDL_SCANCODE_6) {
    return kSbKey6;
  }
  if (keysum == SDL_SCANCODE_7) {
    return kSbKey7;
  }
  if (keysum == SDL_SCANCODE_8) {
    return kSbKey8;
  }
  if (keysum == SDL_SCANCODE_9) {
    return kSbKey9;
  }
  if (keysum == SDL_SCANCODE_KP_0) {
    return kSbKeyNumpad0;
  }
  if (keysum == SDL_SCANCODE_KP_1) {
    return kSbKeyNumpad1;
  }
  if (keysum == SDL_SCANCODE_KP_2) {
    return kSbKeyNumpad2;
  }
  if (keysum == SDL_SCANCODE_KP_3) {
    return kSbKeyNumpad3;
  }
  if (keysum == SDL_SCANCODE_KP_4) {
    return kSbKeyNumpad4;
  }
  if (keysum == SDL_SCANCODE_KP_5) {
    return kSbKeyNumpad5;
  }
  if (keysum == SDL_SCANCODE_KP_6) {
    return kSbKeyNumpad6;
  }
  if (keysum == SDL_SCANCODE_KP_7) {
    return kSbKeyNumpad7;
  }
  if (keysum == SDL_SCANCODE_KP_8) {
    return kSbKeyNumpad8;
  }
  if (keysum == SDL_SCANCODE_KP_9) {
    return kSbKeyNumpad9;
  }
  if (keysum == SDL_SCANCODE_A) {
    printf("keysum == SDL_SCANCODE_A\n");
    return kSbKeyA;
  }
  if (keysum == SDL_SCANCODE_B) {
    return kSbKeyB;
  }
  if (keysum == SDL_SCANCODE_C) {
    return kSbKeyC;
  }
  if (keysum == SDL_SCANCODE_D) {
    return kSbKeyD;
  }
  if (keysum == SDL_SCANCODE_E) {
    return kSbKeyE;
  }
  if (keysum == SDL_SCANCODE_F) {
    return kSbKeyF;
  }
  if (keysum == SDL_SCANCODE_G) {
    return kSbKeyG;
  }
  if (keysum == SDL_SCANCODE_H) {
    return kSbKeyH;
  }
  if (keysum == SDL_SCANCODE_I) {
    return kSbKeyI;
  }
  if (keysum == SDL_SCANCODE_J) {
    return kSbKeyJ;
  }
  if (keysum == SDL_SCANCODE_K) {
    return kSbKeyK;
  }
  if (keysum == SDL_SCANCODE_L) {
    return kSbKeyL;
  }
  if (keysum == SDL_SCANCODE_M) {
    return kSbKeyM;
  }
  if (keysum == SDL_SCANCODE_N) {
    return kSbKeyN;
  }
  if (keysum == SDL_SCANCODE_O) {
    return kSbKeyO;
  }
  if (keysum == SDL_SCANCODE_P) {
    return kSbKeyP;
  }
  if (keysum == SDL_SCANCODE_Q) {
    return kSbKeyQ;
  }
  if (keysum == SDL_SCANCODE_R) {
    return kSbKeyR;
  }
  if (keysum == SDL_SCANCODE_S) {
    return kSbKeyS;
  }
  if (keysum == SDL_SCANCODE_T) {
    return kSbKeyT;
  }
  if (keysum == SDL_SCANCODE_U) {
    return kSbKeyU;
  }
  if (keysum == SDL_SCANCODE_V) {
    return kSbKeyV;
  }
  if (keysum == SDL_SCANCODE_W) {
    return kSbKeyW;
  }
  if (keysum == SDL_SCANCODE_X) {
    return kSbKeyX;
  }
  if (keysum == SDL_SCANCODE_Y) {
    return kSbKeyY;
  }
  if (keysum == SDL_SCANCODE_Z) {
    return kSbKeyZ;
  }

  // Don't handle these keys so the OS can in a uniform manner.
  if (keysum == SDL_SCANCODE_VOLUMEUP) {
    return kSbKeyUnknown;
  }
  if (keysum == SDL_SCANCODE_VOLUMEDOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == SDL_SCANCODE_MUTE) {
    return kSbKeyUnknown;
  }
  if (keysum == SDL_SCANCODE_BRIGHTNESSUP) {
    return kSbKeyUnknown;
  }
  if (keysum == SDL_SCANCODE_BRIGHTNESSDOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == SDL_SCANCODE_FIND) { // SEARCH
    return kSbKeyUnknown;
  }

  return key;
}

// see https://github.com/blockspacer/cobalt-clone-28052019/blob/89664d116629734759176d820e9923257717e09c/src/starboard/android/shared/input_events_generator.cc#L117
// see https://github.com/libretro/RetroArch/blob/master/input/input_keymaps.c#L1223
SbKey SDL2KeycodeToSbKey(const SDL_Keycode& keysum) {
  SbKey key = kSbKeyUnknown;
  if (keysum == SDLK_LALT) {
    return kSbKeyMenu;
  }
  if (keysum == SDLK_RALT) {
    return kSbKeyMenu;
  }
  if (keysum == SDLK_LCTRL) {
    return kSbKeyControl;
  }
  if (keysum == SDLK_RCTRL) {
    return kSbKeyControl;
  }
  if (keysum == SDLK_LSHIFT) {
    return kSbKeyShift;
  }
  if (keysum == SDLK_RSHIFT) {
    return kSbKeyShift;
  }
  if (keysum == SDLK_CAPSLOCK) {
    return kSbKeyCapital;
  }
  if (keysum == SDLK_NUMLOCKCLEAR) {
    return kSbKeyNumlock;
  }
  if (keysum == SDLK_SCROLLLOCK) {
    return kSbKeyScroll;
  }
  if (keysum == SDLK_SLEEP) {
    return kSbKeySleep;
  }
  if (keysum == SDLK_HELP) {
    return kSbKeyHelp;
  }
  if (keysum == SDLK_BACKSLASH) {
    return kSbKeyEscape;
  }
  if (keysum == SDLK_ESCAPE) {
    return kSbKeyEscape;
  }
  if (keysum == SDLK_RETURN) {
    return kSbKeyReturn;
  }
  if (keysum == SDLK_KP_ENTER) { // NUMPAD_ENTER
    return kSbKeyReturn;
  }
  if (keysum == SDLK_PAGEUP) {
    return kSbKeyPrior;
  }
  if (keysum == SDLK_PAGEDOWN) {
    return kSbKeyNext;
  }
  if (keysum == SDLK_HOME) {
    return kSbKeyHome;
  }
  if (keysum == SDLK_END) {
    return kSbKeyEnd;
  }

  if (keysum == SDLK_UP) {
    return kSbKeyUp;
  }
  if (keysum == SDLK_LEFT) {
    return kSbKeyLeft;
  }
  if (keysum == SDLK_RIGHT) {
    return kSbKeyRight;
  }
  if (keysum == SDLK_DOWN) {
    //printf("SDLK_DOWN\n");
    return kSbKeyDown;
  }

  // Dpad
  if (keysum == SDLK_UP) {
    return kSbKeyGamepadDPadUp;
  }
  if (keysum == SDLK_DOWN) {
    return kSbKeyGamepadDPadDown;
  }
  if (keysum == SDLK_LEFT) {
    return kSbKeyGamepadDPadLeft;
  }
  if (keysum == SDLK_RIGHT) {
    return kSbKeyGamepadDPadRight;
  }
  /*if (keysum == SDLK_DPAD_CENTER) {
    return kSbKeyGamepad1;
  }*/

  // Game controller
  /*
  case SDLK_BUTTON_A:
    return kSbKeyGamepad1;
  case SDLK_BUTTON_B:
    return kSbKeyGamepad2;
  case SDLK_BUTTON_C:
    return kSbKeyUnknown;
  case SDLK_BUTTON_X:
    return kSbKeyGamepad3;
  case SDLK_BUTTON_Y:
    return kSbKeyGamepad4;
  case SDLK_BUTTON_L1:
    return kSbKeyGamepadLeftBumper;
  case SDLK_BUTTON_R1:
    return kSbKeyGamepadRightBumper;
  case SDLK_BUTTON_L2:
    return kSbKeyGamepadLeftTrigger;
  case SDLK_BUTTON_R2:
    return kSbKeyGamepadRightTrigger;
  case SDLK_BUTTON_THUMBL:
    return kSbKeyGamepadLeftStick;
  case SDLK_BUTTON_THUMBR:
    return kSbKeyGamepadRightStick;
  case SDLK_BUTTON_START:
    return kSbKeyGamepad6;
  case SDLK_BUTTON_SELECT:
    return kSbKeyGamepad5;
  case SDLK_BUTTON_MODE:
    return kSbKeyModechange;*/


  // Media transport
  /*case SDLK_MEDIA_PLAY_PAUSE:
    return kSbKeyMediaPlayPause;
  case SDLK_MEDIA_PLAY:
    return kSbKeyPlay;
  case SDLK_MEDIA_PAUSE:
    return kSbKeyPause;
  case SDLK_MEDIA_STOP:
    return kSbKeyMediaStop;
  case SDLK_MEDIA_NEXT:
    return kSbKeyMediaNextTrack;
  case SDLK_MEDIA_PREVIOUS:
    return kSbKeyMediaPrevTrack;
  case SDLK_MEDIA_REWIND:
    return kSbKeyMediaRewind;
  case SDLK_MEDIA_FAST_FORWARD:
    return kSbKeyMediaFastForward;*/

/*#if SB_API_VERSION >= 6
    // TV Remote specific
    case SDLK_CHANNEL_UP:
      return kSbKeyChannelUp;
    case SDLK_CHANNEL_DOWN:
      return kSbKeyChannelDown;
    case SDLK_CAPTIONS:
      return kSbKeyClosedCaption;
    case SDLK_INFO:
      return kSbKeyInfo;
    case SDLK_GUIDE:
      return kSbKeyGuide;
    case SDLK_LAST_CHANNEL:
      return kSbKeyLast;
    case SDLK_MEDIA_AUDIO_TRACK:
      return kSbKeyMediaAudioTrack;

    case SDLK_PROG_RED:
      return kSbKeyRed;
    case SDLK_PROG_GREEN:
      return kSbKeyGreen;
    case SDLK_PROG_YELLOW:
      return kSbKeyYellow;
    case SDLK_PROG_BLUE:
      return kSbKeyBlue;
#endif  // SB_API_VERSION >= 6*/

  // Whitespace
  if (keysum == SDLK_TAB) {
    return kSbKeyTab;
  }
  if (keysum == SDLK_SPACE) {
    return kSbKeySpace;
  }

  // Deletion
  if (keysum == SDLK_BACKSPACE) {
    printf("keysum == SDLK_BACKSPACE\n");
    return kSbKeyBack;
  }
  /*if (keysum == SDLK_FORWARD_DEL) {
    return kSbKeyDelete;
  }*/
  if (keysum == SDLK_CLEAR) {
    return kSbKeyClear;
  }
  if (keysum == SDLK_INSERT) {
    printf("keysum == SDLK_INSERT\n");
    return kSbKeyInsert;
  }
  if (keysum == SDLK_KP_PLUS) {
    return kSbKeyAdd;
  }
  if (keysum == SDLK_PLUS) {
    return kSbKeyOemPlus;
  }
  if (keysum == SDLK_EQUALS) {
    return kSbKeyOemPlus;
  }
  if (keysum == SDLK_KP_EQUALS) {
    return kSbKeyOemPlus;
  }
  if (keysum == SDLK_KP_MINUS) {
    return kSbKeySubtract;
  }
  if (keysum == SDLK_MINUS) {
    return kSbKeyOemMinus;
  }
  if (keysum == SDLK_KP_MULTIPLY) { // NUMPAD MULTIPLY
    return kSbKeyMultiply;
  }
  if (keysum == SDLK_KP_DIVIDE) {
    return kSbKeyDivide;
  }
  if (keysum == SDLK_COMMA) {
    return kSbKeyOemComma;
  }
  if (keysum == SDLK_KP_COMMA) {
    return kSbKeyOemComma;
  }
  if (keysum == SDLK_KP_PERIOD) { // DOT
    return kSbKeyDecimal;
  }
  if (keysum == SDLK_PERIOD) {
    return kSbKeyOemPeriod;
  }
  if (keysum == SDLK_SEMICOLON) {
    return kSbKeyOem1;
  }
  if (keysum == SDLK_SLASH) {
    return kSbKeyOem2;
  }
  if (keysum == SDLK_BACKQUOTE) { // GRAVE
    return kSbKeyOem3;
  }
  if (keysum == SDLK_LEFTBRACKET) {
    return kSbKeyOem4;
  }
  if (keysum == SDLK_BACKSLASH) {
    return kSbKeyOem5;
  }
  if (keysum == SDLK_RIGHTBRACKET) {
    return kSbKeyOem6;
  }
  if (keysum == SDLK_QUOTE) { // APOSTROPHE
    return kSbKeyOem7;
  }
  if (keysum == SDLK_F1) {
    return kSbKeyF1;
  }
  if (keysum == SDLK_F2) {
    return kSbKeyF2;
  }
  if (keysum == SDLK_F3) {
    return kSbKeyF3;
  }
  if (keysum == SDLK_F4) {
    return kSbKeyF4;
  }
  if (keysum == SDLK_F5) {
    return kSbKeyF5;
  }
  if (keysum == SDLK_F6) {
    return kSbKeyF6;
  }
  if (keysum == SDLK_F7) {
    return kSbKeyF7;
  }
  if (keysum == SDLK_F8) {
    return kSbKeyF8;
  }
  if (keysum == SDLK_F9) {
    return kSbKeyF9;
  }
  if (keysum == SDLK_F10) {
    return kSbKeyF10;
  }
  if (keysum == SDLK_F11) {
    return kSbKeyF11;
  }
  if (keysum == SDLK_F12) {
    return kSbKeyF12;
  }
  if (keysum == SDLK_0) {
    return kSbKey0;
  }
  if (keysum == SDLK_1) {
    return kSbKey1;
  }
  if (keysum == SDLK_2) {
    return kSbKey2;
  }
  if (keysum == SDLK_3) {
    return kSbKey3;
  }
  if (keysum == SDLK_4) {
    return kSbKey4;
  }
  if (keysum == SDLK_5) {
    return kSbKey5;
  }
  if (keysum == SDLK_6) {
    return kSbKey6;
  }
  if (keysum == SDLK_7) {
    return kSbKey7;
  }
  if (keysum == SDLK_8) {
    return kSbKey8;
  }
  if (keysum == SDLK_9) {
    return kSbKey9;
  }
  if (keysum == SDLK_KP_0) {
    return kSbKeyNumpad0;
  }
  if (keysum == SDLK_KP_1) {
    return kSbKeyNumpad1;
  }
  if (keysum == SDLK_KP_2) {
    return kSbKeyNumpad2;
  }
  if (keysum == SDLK_KP_3) {
    return kSbKeyNumpad3;
  }
  if (keysum == SDLK_KP_4) {
    return kSbKeyNumpad4;
  }
  if (keysum == SDLK_KP_5) {
    return kSbKeyNumpad5;
  }
  if (keysum == SDLK_KP_6) {
    return kSbKeyNumpad6;
  }
  if (keysum == SDLK_KP_7) {
    return kSbKeyNumpad7;
  }
  if (keysum == SDLK_KP_8) {
    return kSbKeyNumpad8;
  }
  if (keysum == SDLK_KP_9) {
    return kSbKeyNumpad9;
  }
  if (keysum == SDLK_a) {
    printf("keysum == SDLK_a\n");
    return kSbKeyA;
  }
  if (keysum == SDLK_b) {
    return kSbKeyB;
  }
  if (keysum == SDLK_c) {
    return kSbKeyC;
  }
  if (keysum == SDLK_d) {
    return kSbKeyD;
  }
  if (keysum == SDLK_e) {
    return kSbKeyE;
  }
  if (keysum == SDLK_f) {
    return kSbKeyF;
  }
  if (keysum == SDLK_g) {
    return kSbKeyG;
  }
  if (keysum == SDLK_h) {
    return kSbKeyH;
  }
  if (keysum == SDLK_i) {
    return kSbKeyI;
  }
  if (keysum == SDLK_j) {
    return kSbKeyJ;
  }
  if (keysum == SDLK_k) {
    return kSbKeyK;
  }
  if (keysum == SDLK_l) {
    return kSbKeyL;
  }
  if (keysum == SDLK_m) {
    return kSbKeyM;
  }
  if (keysum == SDLK_n) {
    return kSbKeyN;
  }
  if (keysum == SDLK_o) {
    return kSbKeyO;
  }
  if (keysum == SDLK_p) {
    return kSbKeyP;
  }
  if (keysum == SDLK_q) {
    return kSbKeyQ;
  }
  if (keysum == SDLK_r) {
    return kSbKeyR;
  }
  if (keysum == SDLK_s) {
    return kSbKeyS;
  }
  if (keysum == SDLK_t) {
    return kSbKeyT;
  }
  if (keysum == SDLK_u) {
    return kSbKeyU;
  }
  if (keysum == SDLK_v) {
    return kSbKeyV;
  }
  if (keysum == SDLK_w) {
    return kSbKeyW;
  }
  if (keysum == SDLK_x) {
    printf("keysum == SDLK_x\n");
    return kSbKeyX;
  }
  if (keysum == SDLK_y) {
    return kSbKeyY;
  }
  if (keysum == SDLK_z) {
    printf("keysum == SDLK_z\n");
    return kSbKeyZ;
  }

  // Don't handle these keys so the OS can in a uniform manner.
  if (keysum == SDLK_VOLUMEUP) {
    return kSbKeyUnknown;
  }
  if (keysum == SDLK_VOLUMEDOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == SDLK_MUTE) {
    return kSbKeyUnknown;
  }
  if (keysum == SDLK_BRIGHTNESSUP) {
    return kSbKeyUnknown;
  }
  if (keysum == SDLK_BRIGHTNESSDOWN) {
    return kSbKeyUnknown;
  }
  if (keysum == SDLK_FIND) { // SEARCH
    return kSbKeyUnknown;
  }

  return key;
}
#endif // ENABLE_HTML5_SDL || !__EMSCRIPTEN__

std::unique_ptr<SbInputData> setMouseSbEventData(std::unique_ptr<SbInputData> data,
                              const double screenMouseX, const double screenMouseY,
                              const SbInputEventType& event_type,
                              unsigned int key_modifiers, const SbKey& key) {
  data->device_type = SbInputDeviceType::kSbInputDeviceTypeMouse;
  data->type = event_type;
  data->key_modifiers = key_modifiers;
  data->position.x = static_cast<float>(screenMouseX);
  data->position.y = static_cast<float>(screenMouseY);
  data->tilt.x = 0.0f;
  data->tilt.y = 0.0f;
  data->delta.x = 1.0f;
  data->delta.y = 1.0f;
  data->size.x = 1.0f;
  data->size.y = 1.0f;
  data->pressure = 1.0f;
  data->key = key;
  return std::move(data);
}

std::unique_ptr<SbInputData> setWheelSbEventData(std::unique_ptr<SbInputData> data,
                              const double screenMouseX, const double screenMouseY,
                              const double wheelX, const double wheelY, const double wheelZ,
                              const SbInputEventType& event_type,
                              unsigned int key_modifiers, const SbKey& key) {
  data->device_type = SbInputDeviceType::kSbInputDeviceTypeMouse;
  data->type = event_type;
  data->key_modifiers = key_modifiers;
  data->position.x = static_cast<float>(screenMouseX);
  data->position.y = static_cast<float>(screenMouseY);
  data->delta.x = static_cast<float>(wheelX);
  data->delta.y = static_cast<float>(wheelY);
  data->tilt.x = 0.0f;
  data->tilt.y = 0.0f;
  data->delta.x = 1.0f;
  data->delta.y = 1.0f;
  data->size.x = 1.0f;
  data->size.y = 1.0f;
  data->pressure = 1.0f;
  // data->delta.z = wheelZ; // TODO
  //data->key = key;
  data->key = kSbKeyUnknown;
  return std::move(data);
}

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
  )
{
  std::unique_ptr<SbEvent> event = std::make_unique<SbEvent>();
  event->type = type;
  std::unique_ptr<SbInputData> data = nullptr;
  data = native_event::createEmptySbEventData();
  data->window = window;
  DCHECK(data);

  unsigned int key_modifiers = button_modifiers;
  key_modifiers |= native_event::createSbKeyModifiers(
    altKey,
    ctrlKey,
    metaKey,
    shiftKey);

  data = native_event::setWheelSbEventData(std::move(data),
                             mouse_x, mouse_y,
                             deltaX,
                             deltaY,
                             0.0, // TODO: wheel.z
                             sbInputEventType,
                             key_modifiers, key);

  event->data = data.release();
  return std::move(event);
}

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
)
{
  std::unique_ptr<SbEvent> event = std::make_unique<SbEvent>();
  event->type = type;
  std::unique_ptr<SbInputData> data = nullptr;
  data = native_event::createEmptySbEventData();
  data->window = window;
  DCHECK(data);

  unsigned int key_modifiers = button_modifiers;
  key_modifiers |= native_event::createSbKeyModifiers(
    altKey,
    ctrlKey,
    metaKey,
    shiftKey);

  data = native_event::setMouseSbEventData(std::move(data),
                             mouse_x, mouse_y,
                             sbInputEventType,
                             key_modifiers, key);

  event->data = data.release();
  return std::move(event);
}

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
    const std::string& text,
    bool is_printable
  )
{
  std::unique_ptr<SbEvent> event = std::make_unique<SbEvent>();
  event->type = type;
  std::unique_ptr<SbInputData> data = nullptr;
  data = native_event::createEmptySbEventData();
  data->window = window;
  DCHECK(data);

  unsigned int key_modifiers = native_event::createSbKeyModifiers(
    altKey,
    ctrlKey,
    metaKey,
    shiftKey);

  data->key_modifiers = key_modifiers;
  data->is_printable = is_printable;
  data->type = sbInputEventType;
  data->device_type = device_type;
  data->tilt.x = 0.0f;
  data->tilt.y = 0.0f;
  data->delta.x = 1.0f;
  data->delta.y = 1.0f;
  data->size.x = 1.0f;
  data->size.y = 1.0f;
  data->pressure = 1.0f;
  data->key = key;
  printf("createSbKeyboardEvent data->key %d\n", data->key);
  data->key_location = key_location;
  data->keysym = keysym;
  printf("createSbKeyboardEvent data->keysym %d\n", data->keysym);
  if(!text.empty()) {
    data->text = text;
    printf("createSbKeyboardEvent data->text %s\n", data->text.c_str());
  }
  data->character = character;
  printf("createSbKeyboardEvent data->character %d\n", data->character);

  event->data = data.release();
  return std::move(event);
}

std::unique_ptr<cobalt::system_window::InputEvent> CreateInputEvent(const SbInputData& data,
                      cobalt::system_window::InputEvent::Type type, bool is_repeat) {
  // Use the current time unless it was overridden.
  SbTimeMonotonic timestamp = 0;

#if SB_API_VERSION >= 10
  bool use_input_timestamp =
      SbSystemHasCapability(kSbSystemCapabilitySetsInputTimestamp);
  if (use_input_timestamp) {
    timestamp = data.timestamp;
  }
#endif

  if (timestamp == 0) {
    timestamp = SbTimeGetMonotonicNow();
  }

  // Starboard handily uses the Microsoft key mapping, which is also what Cobalt
  // uses.
  int key_code = static_cast<int>(data.key);
  float pressure = data.pressure;
  uint32 modifiers = data.key_modifiers;
  if (((data.device_type == kSbInputDeviceTypeTouchPad) ||
       (data.device_type == kSbInputDeviceTypeTouchScreen))) {
    switch (type) {
      case cobalt::system_window::InputEvent::kPointerDown:
      case cobalt::system_window::InputEvent::kPointerMove:
      case cobalt::system_window::InputEvent::kTouchpadDown:
      case cobalt::system_window::InputEvent::kTouchpadMove:
      case cobalt::system_window::InputEvent::kTouchscreenDown:
      case cobalt::system_window::InputEvent::kTouchscreenMove:
        // For touch contact input, ensure that the device button state is also
        // reported as pressed.
        //   https://www.w3.org/TR/2015/REC-pointerevents-20150224/#button-states
        key_code = kSbKeyMouse1;
        modifiers |= cobalt::system_window::InputEvent::kLeftButton;
        if (!std::isnan(pressure)) {
          pressure = std::max(pressure, 0.5f);
        }
        break;
      case cobalt::system_window::InputEvent::kKeyDown:
      case cobalt::system_window::InputEvent::kKeyUp:
      case cobalt::system_window::InputEvent::kKeyMove:
      case cobalt::system_window::InputEvent::kInput:
      case cobalt::system_window::InputEvent::kPointerUp:
      case cobalt::system_window::InputEvent::kTouchpadUp:
      case cobalt::system_window::InputEvent::kTouchscreenUp:
      case cobalt::system_window::InputEvent::kWheel:
        break;
    }
  }

#if SB_HAS(ON_SCREEN_KEYBOARD)
  std::unique_ptr<cobalt::system_window::InputEvent> input_event(
      new cobalt::system_window::InputEvent(timestamp, type, data.device_id, key_code, data.is_printable, data.keysym, data.text, modifiers,
                     is_repeat, cobalt::math::PointF(data.position.x, data.position.y),
                     cobalt::math::PointF(data.delta.x, data.delta.y), pressure,
                     cobalt::math::PointF(data.size.x, data.size.y),
                     cobalt::math::PointF(data.tilt.x, data.tilt.y),
                     data.input_text ? data.input_text : "",
                     data.is_composing ? data.is_composing : false));
#else   // SB_HAS(ON_SCREEN_KEYBOARD)
  std::unique_ptr<cobalt::system_window::InputEvent> input_event(
      new cobalt::system_window::InputEvent(timestamp, type, data.device_id, key_code, data.is_printable, data.keysym, data.text, modifiers,
                     is_repeat, cobalt::math::PointF(data.position.x, data.position.y),
                     cobalt::math::PointF(data.delta.x, data.delta.y), pressure,
                     cobalt::math::PointF(data.size.x, data.size.y),
                     cobalt::math::PointF(data.tilt.x, data.tilt.y)));
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

  if(!input_event->text().empty()) {
    printf("input_event text %s\n", input_event->text().c_str());
  }

  DCHECK(input_event);
  wprintf(L"input_event keysym character, %s\n", input_event->keysym());
  printf("input_event key_code %u\n", input_event->key_code());

  return std::move(input_event);
}

std::unique_ptr<cobalt::system_window::InputEvent>
  PointerSbInputDataToInputEvent(const SbInputData& data)
{
  cobalt::system_window::InputEvent::Type input_event_type;
  switch (data.type) {
    case kSbInputEventTypePress: {
      if (data.device_type == kSbInputDeviceTypeTouchPad) {
        input_event_type = cobalt::system_window::InputEvent::kTouchpadDown;
      } else if (data.device_type == kSbInputDeviceTypeTouchScreen) {
        input_event_type = cobalt::system_window::InputEvent::kTouchscreenDown;
      } else {
        input_event_type = cobalt::system_window::InputEvent::kPointerDown;
      }
      return CreateInputEvent(data, input_event_type, false /* is_repeat */);
      break;
    }
    case kSbInputEventTypeUnpress: {
      if (data.device_type == kSbInputDeviceTypeTouchPad) {
        input_event_type = cobalt::system_window::InputEvent::kTouchpadUp;
      } else if (data.device_type == kSbInputDeviceTypeTouchScreen) {
        input_event_type = cobalt::system_window::InputEvent::kTouchscreenUp;
      } else {
        input_event_type = cobalt::system_window::InputEvent::kPointerUp;
      }
      return CreateInputEvent(data, input_event_type, false /* is_repeat */);
      break;
    }
    case kSbInputEventTypeWheel: {
      return CreateInputEvent(data, cobalt::system_window::InputEvent::kWheel, false /* is_repeat */);
      break;
    }
    case kSbInputEventTypeMove: {
      if (data.device_type == kSbInputDeviceTypeTouchPad) {
        input_event_type = cobalt::system_window::InputEvent::kTouchpadMove;
      } else if (data.device_type == kSbInputDeviceTypeTouchScreen) {
        input_event_type = cobalt::system_window::InputEvent::kTouchscreenMove;
      } else {
        input_event_type = cobalt::system_window::InputEvent::kPointerMove;
      }
      return CreateInputEvent(data, input_event_type, false /* is_repeat */);
      break;
    }
    default:
      SB_NOTREACHED();
      break;
  }

  return nullptr;
}

std::unique_ptr<cobalt::system_window::InputEvent>
  SbInputDataToInputEvent(const SbInputData& data)
{
  // Handle all other input device types.
  switch (data.type) {
    case kSbInputEventTypePress: {
      return CreateInputEvent(data, cobalt::system_window::InputEvent::kKeyDown, /*key_down_*/ false);
      /// \todo
      //key_down_ = true;
      break;
    }
    case kSbInputEventTypeUnpress: {
      return CreateInputEvent(data, cobalt::system_window::InputEvent::kKeyUp, false /* is_repeat */);
      /// \todo
      //key_down_ = false;
      break;
    }
    case kSbInputEventTypeMove: {
      return CreateInputEvent(data, cobalt::system_window::InputEvent::kKeyMove, false /* is_repeat */);
      break;
    }
#if SB_HAS(ON_SCREEN_KEYBOARD)
    case kSbInputEventTypeInput: {
      return CreateInputEvent(data, cobalt::system_window::InputEvent::kInput, false /* is_repeat */);
      break;
    }
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
    default:
      break;
  }

  return nullptr;
}

std::unique_ptr<cobalt::system_window::InputEvent>
  SbEventToInputEvent(const SbEvent* event)
{
  printf("native_event.cc SbEventToInputEvent...\n");
  if (event->type != kSbEventTypeInput) {
    return nullptr;
  }

  DCHECK(event->data);
  SbInputData* data = reinterpret_cast<SbInputData*>(event->data);

  if ((kSbInputDeviceTypeMouse == data->device_type) ||
      (kSbInputDeviceTypeTouchScreen == data->device_type) ||
      (kSbInputDeviceTypeTouchPad == data->device_type)) {
    printf("native_event.cc PointerSbInputDataToInputEvent...\n");
    return std::move(PointerSbInputDataToInputEvent(*data));
  }

  printf("native_event.cc SbInputDataToInputEvent...\n");
  return std::move(SbInputDataToInputEvent(*data));
}

void UpdateEventModifierInit(const cobalt::system_window::InputEvent* input_event,
                             cobalt::dom::EventModifierInit* event) {
  const uint32 modifiers = input_event->modifiers();
  event->set_ctrl_key(modifiers & cobalt::system_window::InputEvent::kCtrlKey);
  event->set_shift_key(modifiers & cobalt::system_window::InputEvent::kShiftKey);
  event->set_alt_key(modifiers & cobalt::system_window::InputEvent::kAltKey);
  event->set_meta_key(modifiers & cobalt::system_window::InputEvent::kMetaKey);
}

void UpdateMouseEventInitButtons(const cobalt::system_window::InputEvent* input_event,
                                 cobalt::dom::MouseEventInit* event) {
  // The value of the button attribute MUST be as follows:
  //  https://www.w3.org/TR/uievents/#ref-for-dom-mouseevent-button-1
  switch (input_event->key_code()) {
    case kSbKeyMouse1:
      // 0 MUST indicate the primary button of the device (in general, the left
      // button or the only button on single-button devices, used to activate a
      // user interface control or select text) or the un-initialized value.
      event->set_button(0);
      break;
    case kSbKeyMouse2:
      // 1 MUST indicate the auxiliary button (in general, the middle button,
      // often combined with a mouse wheel).
      event->set_button(1);
      break;
    case kSbKeyMouse3:
      // 2 MUST indicate the secondary button (in general, the right button,
      // often used to display a context menu).
      event->set_button(2);
      break;
    default:
      break;
  }

  // The value of the buttons attribute MUST be as follows:
  //  https://www.w3.org/TR/uievents/#ref-for-dom-mouseevent-buttons-3

  // 0 MUST indicate no button is currently active.
  uint32 modifiers = input_event->modifiers();
  uint16 buttons = 0;
  if (modifiers & cobalt::system_window::InputEvent::kLeftButton) {
    // 1 MUST indicate the primary button of the device (in general, the left
    // button or the only button on single-button devices, used to activate a
    // user interface control or select text).
    buttons |= 1;
  }
  if (modifiers & cobalt::system_window::InputEvent::kRightButton) {
    // 2 MUST indicate the secondary button (in general, the right button, often
    // used to display a context menu), if present.
    buttons |= 2;
  }
  if (modifiers & cobalt::system_window::InputEvent::kMiddleButton) {
    // 4 MUST indicate the auxiliary button (in general, the middle button,
    // often combined with a mouse wheel).
    buttons |= 4;
  }

  // The buttons attribute reflects the state of the mouse's buttons for any
  // MouseEvent object (while it is being dispatched).
  //   https://www.w3.org/TR/2016/WD-uievents-20160804/#ref-for-dom-mouseevent-buttons-2
  switch (input_event->type()) {
    case cobalt::system_window::InputEvent::kTouchpadDown:
    case cobalt::system_window::InputEvent::kTouchscreenDown:
    case cobalt::system_window::InputEvent::kPointerDown:
      // For 'down' events, ensure that the buttons state includes the currently
      // reported button press.
      buttons |= 1 << event->button();
      break;
    case cobalt::system_window::InputEvent::kTouchpadUp:
    case cobalt::system_window::InputEvent::kTouchscreenUp:
    case cobalt::system_window::InputEvent::kPointerUp:
      // For 'up' events, ensure that the buttons state excludes the currently
      // reported button press.
      buttons &= ~(1 << event->button());
      break;
    case cobalt::system_window::InputEvent::kKeyDown:
    case cobalt::system_window::InputEvent::kKeyUp:
    case cobalt::system_window::InputEvent::kKeyMove:
    case cobalt::system_window::InputEvent::kInput:
    case cobalt::system_window::InputEvent::kPointerMove:
    case cobalt::system_window::InputEvent::kTouchpadMove:
    case cobalt::system_window::InputEvent::kTouchscreenMove:
    case cobalt::system_window::InputEvent::kWheel:
      break;
  }

  event->set_buttons(buttons);
}

void UpdateMouseEventInit(const cobalt::system_window::InputEvent* input_event,
                          cobalt::dom::MouseEventInit* mouse_event) {
  //printf("UpdateMouseEventInit 1\n");
  UpdateEventModifierInit(input_event, mouse_event);
  UpdateMouseEventInitButtons(input_event, mouse_event);
  //printf("UpdateMouseEventInit 2\n");

  const cobalt::math::PointF& position = input_event->position();
  mouse_event->set_screen_x(static_cast<float>(position.x()));
  mouse_event->set_screen_y(static_cast<float>(position.y()));
  mouse_event->set_client_x(static_cast<float>(position.x()));
  mouse_event->set_client_y(static_cast<float>(position.y()));
  //printf("UpdateMouseEventInit 3\n");
}

// Returns the value or the default_value when value is NaN.
float value_or(float value, float default_value) {
  return std::isnan(value) ? default_value : value;
}

void UpdateEventInit(const cobalt::system_window::InputEvent* input_event,
                     cobalt::dom::EventInit* event) {
  if (input_event->timestamp() != 0) {
    // Convert SbTimeMonotonic to DOMTimeStamp.
    event->set_time_stamp(
        cobalt::dom::Event::GetEventTime(input_event->timestamp()));
  }
}

cobalt::dom::KeyboardEventInit KeyboardInitFromInputEvent(
    bool is_key_down, const cobalt::system_window::InputEvent* input_event,
    int key_code) {
  base::Token type =
      is_key_down ? base::Tokens::keydown() : base::Tokens::keyup();
  cobalt::dom::KeyboardEvent::KeyLocationCode location =
      cobalt::dom::KeyboardEvent::KeyCodeToKeyLocation(key_code);
  cobalt::dom::KeyboardEventInit keyboard_event;
  UpdateEventInit(input_event, &keyboard_event);
  UpdateEventModifierInit(input_event, &keyboard_event);
  keyboard_event.set_location(location);
  keyboard_event.set_repeat(input_event->is_repeat());
  keyboard_event.set_char_code(key_code);
  keyboard_event.set_key_code(key_code);
  keyboard_event.set_keysym(input_event->keysym()); // custom
  keyboard_event.set_is_printable(input_event->is_printable()); // custom
  if(!input_event->text().empty()) {
    keyboard_event.set_text(input_event->text()); // custom
  }

  int32_t key_code_in_int32 = static_cast<int32_t>(key_code);
  return std::move(keyboard_event);
}

cobalt::dom::PointerEventInit PointerEventInitFromInputEvent(
    base::Token type, const cobalt::system_window::InputEvent* input_event) {
  //printf("PointerEventInitFromInputEvent 1\n");
  cobalt::dom::PointerEventInit pointer_event;
  UpdateEventInit(input_event, &pointer_event);
  UpdateMouseEventInit(input_event, &pointer_event);
  //printf("PointerEventInitFromInputEvent 2\n");

  switch (input_event->type()) {
    case cobalt::system_window::InputEvent::kTouchpadDown:
    case cobalt::system_window::InputEvent::kTouchpadUp:
    case cobalt::system_window::InputEvent::kTouchpadMove:
      pointer_event.set_pointer_type("touchpad");
      break;
    case cobalt::system_window::InputEvent::kTouchscreenDown:
    case cobalt::system_window::InputEvent::kTouchscreenUp:
    case cobalt::system_window::InputEvent::kTouchscreenMove:
      pointer_event.set_pointer_type("touch");
      break;
    case cobalt::system_window::InputEvent::kKeyDown:
    case cobalt::system_window::InputEvent::kKeyUp:
    case cobalt::system_window::InputEvent::kKeyMove:
    case cobalt::system_window::InputEvent::kInput:
    case cobalt::system_window::InputEvent::kPointerDown:
    case cobalt::system_window::InputEvent::kPointerMove:
    case cobalt::system_window::InputEvent::kPointerUp:
    case cobalt::system_window::InputEvent::kWheel:
      pointer_event.set_pointer_type("mouse");
      break;
  }
  //printf("PointerEventInitFromInputEvent 3\n");
  pointer_event.set_pointer_id(input_event->device_id());
#if SB_API_VERSION >= 6
  pointer_event.set_width(native_event::value_or(input_event->size().x(), 0.0f));
  //printf("PointerEventInitFromInputEvent 3.1\n");
  pointer_event.set_height(native_event::value_or(input_event->size().y(), 0.0f));
  //printf("PointerEventInitFromInputEvent 3.2\n");
  pointer_event.set_pressure(native_event::value_or(input_event->pressure(),
                                      input_event->modifiers() ? 0.5f : 0.0f));
  //printf("PointerEventInitFromInputEvent 3.3\n");
  pointer_event.set_tilt_x(
      native_event::value_or(static_cast<float>(input_event->tilt().x()), 0.0f));
  //printf("PointerEventInitFromInputEvent 3.4\n");
  pointer_event.set_tilt_y(
      native_event::value_or(static_cast<float>(input_event->tilt().y()), 0.0f));
  //printf("PointerEventInitFromInputEvent 3.5\n");
#endif  // SB_API_VERSION >= 6
  pointer_event.set_is_primary(true);
  //printf("PointerEventInitFromInputEvent 4\n");
  return std::move(pointer_event);
}

cobalt::dom::WheelEventInit WheelEventInitFromInputEvent(
    const cobalt::system_window::InputEvent* input_event) {
  base::Token type = base::Tokens::wheel();
  cobalt::dom::WheelEventInit wheel_event;
  UpdateEventInit(input_event, &wheel_event);
  UpdateMouseEventInit(input_event, &wheel_event);

  wheel_event.set_delta_x(input_event->delta().x());
  wheel_event.set_delta_y(input_event->delta().y());
  wheel_event.set_delta_z(0);
  wheel_event.set_delta_mode(cobalt::dom::WheelEvent::kDomDeltaLine);

  return wheel_event;
}

#if SB_HAS(ON_SCREEN_KEYBOARD)
cobalt::dom::InputEventInit DomInputEventInitFromInputEvent(
    const cobalt::system_window::InputEvent* event) {
  // Note: we currently treat all dom::InputEvents as input (never beforeinput).
  base::Token type = base::Tokens::input();

  cobalt::dom::InputEventInit input_event;
  UpdateEventInit(event, &input_event);
  input_event.set_data(event->input_text());
  input_event.set_is_composing(event->is_composing());

  return std::move(input_event);
}
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)

cobalt::dom::Event* InputEventToDomEvent(const std::string& dom_event_type,
  cobalt::system_window::InputEvent* input_event,
  scoped_refptr<Window> window)
{
  //printf("InputEventToDomEvent 1\n");
  SB_DCHECK(input_event);
  int key_code = input_event->key_code();

  //printf("InputEventToDomEvent 2\n");
  cobalt::dom::Event* dom_event = nullptr;

  switch (input_event->type()) {
    case cobalt::system_window::InputEvent::kKeyDown: {
      cobalt::dom::KeyboardEventInit event_init
        = KeyboardInitFromInputEvent (true, input_event, key_code);

      dom_event = new cobalt::dom::KeyboardEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kKeyUp: {
      cobalt::dom::KeyboardEventInit event_init
        = KeyboardInitFromInputEvent (false, input_event, key_code);

      dom_event = new cobalt::dom::KeyboardEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kPointerDown:
    case cobalt::system_window::InputEvent::kPointerUp: {
      if ((kSbKeyBrowserBack == key_code) ||
          (kSbKeyBrowserForward == key_code) || (kSbKeyMouse2 == key_code)) {
        // For consistency with behavior on current browsers, the 'Forward' and
        // 'Back' mouse buttons are reported as keypress input for the 'Forward'
        // and 'Back' navigation keys, not as Pointer Events for the X1 and X2
        // buttons.

        if (kSbKeyMouse2 == key_code) {
          // Temporarily Report middle button presses as the enter key.
          key_code = kSbKeyReturn;
        }
        cobalt::dom::KeyboardEventInit event_init
          = KeyboardInitFromInputEvent (
            input_event->type() == cobalt::system_window::InputEvent::kPointerDown,
            input_event, key_code);

        dom_event = new cobalt::dom::KeyboardEvent(
                      base::Token(dom_event_type.c_str()),
                      window.get(), event_init);
      } else {
        base::Token type =
            input_event->type() == cobalt::system_window::InputEvent::kPointerDown
                ? base::Tokens::pointerdown()
                : base::Tokens::pointerup();
      /// \note PointerEventInit prodeces MouseEvent or PointerEvent https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/src/cobalt/layout/topmost_event_target.cc#L693
        cobalt::dom::PointerEventInit event_init
          = PointerEventInitFromInputEvent(type, input_event);

        dom_event = new cobalt::dom::PointerEvent(
                      base::Token(dom_event_type.c_str()),
                      window.get(), event_init);
      }
      break;
    }
    case cobalt::system_window::InputEvent::kPointerMove:
    case cobalt::system_window::InputEvent::kTouchpadMove:
    case cobalt::system_window::InputEvent::kTouchscreenMove: {
      /// \note PointerEventInit prodeces MouseEvent or PointerEvent https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/src/cobalt/layout/topmost_event_target.cc#L693
      cobalt::dom::PointerEventInit event_init
        = PointerEventInitFromInputEvent(base::Tokens::pointermove(), input_event);

      dom_event = new cobalt::dom::PointerEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kTouchpadDown:
    case cobalt::system_window::InputEvent::kTouchscreenDown: {
      /// \note PointerEventInit prodeces MouseEvent or PointerEvent https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/src/cobalt/layout/topmost_event_target.cc#L693
      cobalt::dom::PointerEventInit event_init
        = PointerEventInitFromInputEvent(base::Tokens::pointerdown(), input_event);

      dom_event = new cobalt::dom::PointerEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kTouchpadUp:
    case cobalt::system_window::InputEvent::kTouchscreenUp: {
      /// \note PointerEventInit prodeces MouseEvent or PointerEvent https://github.com/blockspacer/skia-opengl-emscripten/blob/cdb838723fe53c53abf008e9f2e8fc93089ae3f6/src/cobalt/src/cobalt/layout/topmost_event_target.cc#L693
      cobalt::dom::PointerEventInit event_init
        = PointerEventInitFromInputEvent(base::Tokens::pointerup(), input_event);

      dom_event = new cobalt::dom::PointerEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kWheel: {
      cobalt::dom::WheelEventInit event_init
        = WheelEventInitFromInputEvent(input_event);

      dom_event = new cobalt::dom::WheelEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
    }
    case cobalt::system_window::InputEvent::kInput: {
#if SB_HAS(ON_SCREEN_KEYBOARD)
      cobalt::dom::InputEventInit event_init
        = DomInputEventInitFromInputEvent(input_event);

      dom_event = new cobalt::dom::InputEvent(
                    base::Token(dom_event_type.c_str()),
                    window.get(), event_init);
      break;
#endif  // SB_HAS(ON_SCREEN_KEYBOARD)
    }
    case cobalt::system_window::InputEvent::kKeyMove: {
      break;
    }
  }
  //printf("InputEventToDomEvent 3\n");

  return dom_event;
}

} // native_event
