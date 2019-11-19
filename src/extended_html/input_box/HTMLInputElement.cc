#include "extended_html/input_box/HTMLInputElement.h"

#include <algorithm>
#include <memory>

#include "starboard/event.h"

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "base/logging.h"
#include "base/stl_util.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/stringprintf.h"
#include "base/strings/utf_string_conversions.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "base/strings/utf_string_conversion_utils.h"
#include "base/strings/string16.h"

#include "cobalt/base/polymorphic_downcast.h"
#include "cobalt/cssom/filter_function_list_value.h"
#include "cobalt/cssom/keyword_value.h"
#include "cobalt/cssom/map_to_mesh_function.h"
#include "cobalt/layout/container_box.h"
#include "cobalt/layout/letterboxed_image.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/loader/mesh/mesh_projection.h"
#include "cobalt/math/transform_2d.h"
#include "cobalt/math/vector2d_f.h"
#include "cobalt/render_tree/brush.h"
#include "cobalt/render_tree/color_rgba.h"
#include "cobalt/render_tree/filter_node.h"
#include "cobalt/render_tree/image_node.h"
#include "cobalt/render_tree/map_to_mesh_filter.h"
#include "cobalt/render_tree/punch_through_video_node.h"
#include "cobalt/render_tree/rect_node.h"
#include "cobalt/render_tree/resource_provider.h"

#include "base/lazy_instance.h"
#include "base/trace_event/trace_event.h"
#include "cobalt/base/tokens.h"
#include "cobalt/base/user_log.h"
#include "cobalt/cssom/css_style_rule.h"
#include "cobalt/cssom/selector.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/dom_rect.h"
#include "cobalt/dom/dom_rect_list.h"
#include "cobalt/dom/dom_token_list.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/mutation_reporter.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/parser.h"
#include "cobalt/dom/pointer_state.h"
#include "cobalt/dom/serializer.h"
#include "cobalt/dom/text.h"
#include "cobalt/math/rect_f.h"
#include "nb/memory_scope.h"
#include "cobalt/cssom/style_sheet_list.h"
#include "cobalt/dom/dom_exception.h"
#include "cobalt/dom/node.h"
#include "cobalt/script/exception_state.h"
#include "cobalt/web_animations/animation_set.h"
#include "cobalt/dom/event_target.h"
#include "cobalt/dom/attr.h"
#include "cobalt/dom/font_cache.h"
#include "cobalt/dom/document.h"
#include "cobalt/dom/dom_stat_tracker.h"
#include "cobalt/dom/element.h"
#include "cobalt/dom/html_collection.h"
#include "cobalt/dom/html_element_context.h"
#include "cobalt/dom/named_node_map.h"
#include "cobalt/dom/error_event.h"
#include "cobalt/dom/error_event_init.h"
#include "cobalt/dom/mouse_event.h"
#include "cobalt/dom/keyboard_event.h"
#include "cobalt/dom/event.h"
#include "cobalt/dom/keycode.h"

#if defined(ENABLE_SKIA)
#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"
#endif // ENABLE_SKIA

#include <memory>

#include "base/memory/ptr_util.h"
#include "base/memory/ptr_util.h"
#include "base/metrics/histogram.h"
#include "base/metrics/histogram_macros.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/stringprintf.h"
#include "build/build_config.h"

#if defined(ENABLE_BLINK_UI)
#include "ui/events/event.h"
#include "ui/events/keycodes/dom/keycode_converter.h"
#include "ui/events/keycodes/keyboard_code_conversion.h"

#include "ui/events/base_event_utils.h"
#include "ui/events/event_utils.h"
#include "ui/events/keycodes/dom/dom_code.h"
#include "ui/events/keycodes/dom/dom_key.h"
#include "ui/events/keycodes/dom/keycode_converter.h"
#include "ui/events/keycodes/keyboard_code_conversion.h"
#include "ui/gfx/geometry/point3_f.h"
#include "ui/gfx/geometry/point_conversions.h"
#include "ui/gfx/geometry/safe_integer_conversions.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/transform_util.h"

#include "ui/views/view.h"
#include "ui/views/widget/widget.h"
#include "ui/events/keycodes/keyboard_code_conversion.h"
//#include "third_party/blink/renderer/platform/keyboard_codes.h"
#endif // ENABLE_BLINK_UI

#include "extended_html/input_box/block_level_input_box.h"
#include "extended_html/input_box/inline_level_input_box.h"
#include "extended_html/input_box/input_box.h"
#include "extended_html/input_box/input_node.h"
#include "extended_html/input_box/input_box_generator.h"

using namespace cobalt;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::dom;

static int gHTMLInputElementID = 0;

const char HTMLInputElement::kTagName[] = "sk_input";

const char HTMLInputElement::kAttrNameController[] = "controller";

const char HTMLInputElement::kAttrNameInitialText[] = "text";

const char HTMLInputElement::kAttrNamePlaceholder[] = "placeholder";

const char HTMLInputElement::kAttrNameWidth[] = "width";

const char HTMLInputElement::kAttrNameHeight[] = "height";

#if defined(ENABLE_BLINK_UI)
// see cobalt/src/cobalt/dom/keycode.h and KeyCodeToSbKey
static ui::KeyboardCode keyFromKeyCode(uint32_t key_code) {
  // Key events with key code of VKEY_PROCESSKEY, usually created by virtual
  // keyboard (like handwriting input), have no effect on accelerator and
  // they may disturb the accelerator history. So filter them out. (see
  // https://crbug.com/918317)
  ui::KeyboardCode result = ui::VKEY_PROCESSKEY;
  using namespace cobalt::dom::keycode;
  switch(key_code) {
    case kUnknown: {
      result = ui::VKEY_UNKNOWN;
      break;
    }
    case kCancel: {
      result = ui::VKEY_CANCEL;
      break;
    }
    case kBack: {
      result = ui::VKEY_BACK;
      break;
    }
    case kTab: {
      result = ui::VKEY_TAB;
      break;
    }
    /*case kBacktab: {
      result = ui::VKEY_BACKTAB;
      break;
    }*/
    case kClear: {
      result = ui::VKEY_CLEAR;
      break;
    }
    case kReturn: {
      result = ui::VKEY_RETURN;
      break;
    }
    case kShift: {
      result = ui::VKEY_SHIFT;
      printf("kShift -> ui::VKEY_SHIFT\n");
      break;
    }
    case kControl: {
      result = ui::VKEY_CONTROL;
      printf("kControl -> ui::VKEY_CONTROL\n");
      break;
    }
    case kMenu: {
      result = ui::VKEY_MENU;
      break;
    }
    case kPause: {
      result = ui::VKEY_PAUSE;
      break;
    }
    case kCapital: {
      result = ui::VKEY_CAPITAL;
      break;
    }
    case kKana: {
      result = ui::VKEY_KANA;
      break;
    }
    /*case kHangul: {
      result = ui::VKEY_UNKNOWN;
      break;
    }*/
    case kJunja: {
      result = ui::VKEY_JUNJA;
      break;
    }
    case kFinal: {
      result = ui::VKEY_FINAL;
      break;
    }
    case kHanja: {
      result = ui::VKEY_HANJA;
      break;
    }
    /*case kKanji: {
      result = ui::VKEY_KANJI;
      break;
    }*/
    case kEscape: {
      result = ui::VKEY_ESCAPE;
      break;
    }
    case kConvert: {
      result = ui::VKEY_CONVERT;
      break;
    }
    case kNonconvert: {
      result = ui::VKEY_NONCONVERT;
      break;
    }
    case kAccept: {
      result = ui::VKEY_ACCEPT;
      break;
    }
    case kModechange: {
      result = ui::VKEY_MODECHANGE;
      break;
    }
    case kSpace: {
      result = ui::VKEY_SPACE;
      break;
    }
    case kPrior: {
      result = ui::VKEY_PRIOR;
      break;
    }
    case kNext: {
      result = ui::VKEY_NEXT;
      break;
    }
    case kEnd: {
      result = ui::VKEY_END;
      break;
    }
    case kHome: {
      result = ui::VKEY_HOME;
      printf("kHome -> ui::VKEY_HOME\n");
      break;
    }
    case kLeft: {
      result = ui::VKEY_LEFT;
      printf("kLeft -> ui::VKEY_LEFT\n");
      break;
    }
    case kUp: {
      result = ui::VKEY_UP;
      break;
    }
    case kRight: {
      result = ui::VKEY_RIGHT;
      break;
    }
    case kDown: {
      result = ui::VKEY_DOWN;
      break;
    }
    case kSelect: {
      result = ui::VKEY_SELECT;
      break;
    }
    case kPrint: {
      result = ui::VKEY_PRINT;
      break;
    }
    case kExecute: {
      result = ui::VKEY_EXECUTE;
      break;
    }
    case kSnapshot: {
      result = ui::VKEY_SNAPSHOT;
      break;
    }
    case kInsert: {
      result = ui::VKEY_INSERT;
      break;
    }
    case kDelete: {
      result = ui::VKEY_DELETE;
      break;
    }
    case kHelp: {
      result = ui::VKEY_HELP;
      break;
    }
    case k0: {
      result = ui::VKEY_0;
      break;
    }
    case k1: {
      result = ui::VKEY_1;
      break;
    }
    case k2: {
      result = ui::VKEY_2;
      break;
    }
    case k3: {
      result = ui::VKEY_3;
      break;
    }
    case k4: {
      result = ui::VKEY_4;
      break;
    }
    case k5: {
      result = ui::VKEY_5;
      break;
    }
    case k6: {
      result = ui::VKEY_6;
      break;
    }
    case k7: {
      result = ui::VKEY_7;
      break;
    }
    case k8: {
      result = ui::VKEY_8;
      break;
    }
    case k9: {
      result = ui::VKEY_9;
      break;
    }
    case kA: {
      result = ui::VKEY_A;
      break;
    }
    case kB: {
      result = ui::VKEY_B;
      break;
    }
    case kC: {
      result = ui::VKEY_C;
      break;
    }
    case kD: {
      result = ui::VKEY_D;
      break;
    }
    case kE: {
      result = ui::VKEY_E;
      break;
    }
    case kF: {
      result = ui::VKEY_F;
      break;
    }
    case kG: {
      result = ui::VKEY_G;
      break;
    }
    case kH: {
      result = ui::VKEY_H;
      break;
    }
    case kI: {
      result = ui::VKEY_I;
      break;
    }
    case kJ: {
      result = ui::VKEY_J;
      break;
    }
    case kK: {
      result = ui::VKEY_K;
      break;
    }
    case kL: {
      result = ui::VKEY_L;
      break;
    }
    case kM: {
      result = ui::VKEY_M;
      break;
    }
    case kN: {
      result = ui::VKEY_N;
      break;
    }
    case kO: {
      result = ui::VKEY_O;
      break;
    }
    case kP: {
      result = ui::VKEY_P;
      break;
    }
    case kQ: {
      result = ui::VKEY_Q;
      break;
    }
    case kR: {
      result = ui::VKEY_R;
      break;
    }
    case kS: {
      result = ui::VKEY_S;
      break;
    }
    case kT: {
      result = ui::VKEY_T;
      break;
    }
    case kU: {
      result = ui::VKEY_U;
      break;
    }
    case kV: {
      result = ui::VKEY_V;
      break;
    }
    case kW: {
      result = ui::VKEY_W;
      break;
    }
    case kX: {
      result = ui::VKEY_X;
      printf("kX -> ui::VKEY_X\n");
      break;
    }
    case kY: {
      result = ui::VKEY_Y;
      break;
    }
    case kZ: {
      result = ui::VKEY_Z;
      break;
    }
    /*case kLwin: {
      result = ui::VKEY_UNKNOWN;
      break;
    }*/
    case kCommand: {
      result = ui::VKEY_COMMAND;
      break;
    }
    case kRwin: {
      result = ui::VKEY_RWIN;
      break;
    }
    case kApps: {
      result = ui::VKEY_APPS;
      break;
    }
    case kSleep: {
      result = ui::VKEY_SLEEP;
      break;
    }
    case kNumpad0: {
      result = ui::VKEY_NUMPAD0;
      break;
    }
    case kNumpad1: {
      result = ui::VKEY_NUMPAD1;
      break;
    }
    case kNumpad2: {
      result = ui::VKEY_NUMPAD2;
      break;
    }
    case kNumpad3: {
      result = ui::VKEY_NUMPAD3;
      break;
    }
    case kNumpad4: {
      result = ui::VKEY_NUMPAD4;
      break;
    }
    case kNumpad5: {
      result = ui::VKEY_NUMPAD5;
      break;
    }
    case kNumpad6: {
      result = ui::VKEY_NUMPAD6;
      break;
    }
    case kNumpad7: {
      result = ui::VKEY_NUMPAD7;
      break;
    }
    case kNumpad8: {
      result = ui::VKEY_NUMPAD8;
      break;
    }
    case kNumpad9: {
      result = ui::VKEY_NUMPAD9;
      break;
    }
    case kMultiply: {
      result = ui::VKEY_MULTIPLY;
      break;
    }
    case kAdd: {
      result = ui::VKEY_ADD;
      break;
    }
    case kSeparator: {
      result = ui::VKEY_SEPARATOR;
      break;
    }
    case kSubtract: {
      result = ui::VKEY_SUBTRACT;
      break;
    }
    case kDecimal: {
      result = ui::VKEY_DECIMAL;
      break;
    }
    case kDivide: {
      result = ui::VKEY_DIVIDE;
      break;
    }
    case kF1: {
      result = ui::VKEY_F1;
      break;
    }
    case kF2: {
      result = ui::VKEY_F2;
      break;
    }
    case kF3: {
      result = ui::VKEY_F3;
      break;
    }
    case kF4: {
      result = ui::VKEY_F4;
      break;
    }
    case kF5: {
      result = ui::VKEY_F5;
      break;
    }
    case kF6: {
      result = ui::VKEY_F6;
      break;
    }
    case kF7: {
      result = ui::VKEY_F7;
      break;
    }
    case kF8: {
      result = ui::VKEY_F8;
      break;
    }
    case kF9: {
      result = ui::VKEY_F9;
      break;
    }
    case kF10: {
      result = ui::VKEY_F10;
      break;
    }
    case kF11: {
      result = ui::VKEY_F11;
      break;
    }
    case kF12: {
      result = ui::VKEY_F12;
      break;
    }
    case kF13: {
      result = ui::VKEY_F13;
      break;
    }
    case kF14: {
      result = ui::VKEY_F14;
      break;
    }
    case kF15: {
      result = ui::VKEY_F15;
      break;
    }
    case kF16: {
      result = ui::VKEY_F16;
      break;
    }
    case kF17: {
      result = ui::VKEY_F17;
      break;
    }
    case kF18: {
      result = ui::VKEY_F18;
      break;
    }
    case kF19: {
      result = ui::VKEY_F19;
      break;
    }
    case kF20: {
      result = ui::VKEY_F20;
      break;
    }
    case kF21: {
      result = ui::VKEY_F21;
      break;
    }
    case kF22: {
      result = ui::VKEY_F22;
      break;
    }
    case kF23: {
      result = ui::VKEY_F23;
      break;
    }
    case kF24: {
      result = ui::VKEY_F24;
      break;
    }
    case kNumlock: {
      result = ui::VKEY_NUMLOCK;
      break;
    }
    case kScroll: {
      result = ui::VKEY_SCROLL;
      break;
    }
    /*case kWlan: {
      result = ui::VKEY_WLAN;
      break;
    }
    case kPower: {
      result = ui::VKEY_POWER;
      break;
    }*/
    case kLshift: {
      result = ui::VKEY_LSHIFT;
      break;
    }
    case kRshift: {
      result = ui::VKEY_RSHIFT;
      break;
    }
    case kLcontrol: {
      result = ui::VKEY_LCONTROL;
      break;
    }
    case kRcontrol: {
      result = ui::VKEY_RCONTROL;
      break;
    }
    case kLmenu: {
      result = ui::VKEY_LMENU;
      break;
    }
    case kRmenu: {
      result = ui::VKEY_RMENU;
      break;
    }
    case kBrowserBack: {
      result = ui::VKEY_BROWSER_BACK;
      break;
    }
    case kBrowserForward: {
      result = ui::VKEY_BROWSER_FORWARD;
      break;
    }
    case kBrowserRefresh: {
      result = ui::VKEY_BROWSER_REFRESH;
      break;
    }
    case kBrowserStop: {
      result = ui::VKEY_BROWSER_STOP;
      break;
    }
    case kBrowserSearch: {
      result = ui::VKEY_BROWSER_SEARCH;
      break;
    }
    case kBrowserFavorites: {
      result = ui::VKEY_BROWSER_FAVORITES;
      break;
    }
    case kBrowserHome: {
      result = ui::VKEY_BROWSER_HOME;
      break;
    }
    case kVolumeMute: {
      result = ui::VKEY_VOLUME_MUTE;
      break;
    }
    case kVolumeDown: {
      result = ui::VKEY_VOLUME_DOWN;
      break;
    }
    case kVolumeUp: {
      result = ui::VKEY_VOLUME_UP;
      break;
    }
    case kMediaNextTrack: {
      result = ui::VKEY_MEDIA_NEXT_TRACK;
      break;
    }
    case kMediaPrevTrack: {
      result = ui::VKEY_MEDIA_PREV_TRACK;
      break;
    }
    case kMediaStop: {
      result = ui::VKEY_MEDIA_STOP;
      break;
    }
    case kMediaPlayPause: {
      result = ui::VKEY_MEDIA_PLAY_PAUSE;
      break;
    }
    case kMediaLaunchMail: {
      result = ui::VKEY_MEDIA_LAUNCH_MAIL;
      break;
    }
    case kMediaLaunchMediaSelect: {
      result = ui::VKEY_MEDIA_LAUNCH_MEDIA_SELECT;
      break;
    }
    case kMediaLaunchApp1: {
      result = ui::VKEY_MEDIA_LAUNCH_APP1;
      break;
    }
    case kMediaLaunchApp2: {
      result = ui::VKEY_MEDIA_LAUNCH_APP2;
      break;
    }
    case kOem1: {
      result = ui::VKEY_OEM_1;
      break;
    }
    case kOemPlus: {
      result = ui::VKEY_OEM_PLUS;
      break;
    }
    case kOemComma: {
      result = ui::VKEY_OEM_COMMA;
      break;
    }
    case kOemMinus: {
      result = ui::VKEY_OEM_MINUS;
      break;
    }
    case kOemPeriod: {
      result = ui::VKEY_OEM_PERIOD;
      break;
    }
    case kOem2: {
      result = ui::VKEY_OEM_2;
      break;
    }
    case kOem3: {
      result = ui::VKEY_OEM_3;
      break;
    }
    /*case kBrightnessDown: {
      result = ui::VKEY_BRIGHTNESS_DOWN;
      break;
    }
    case kBrightnessUp: {
      result = ui::VKEY_BRIGHTNESS_UP;
      break;
    }
    case kKbdBrightnessDown: {
      result = ui::VKEY_KBD_BRIGHTNESS_DOWN;
      break;
    }*/
    case kOem4: {
      result = ui::VKEY_OEM_4;
      break;
    }
    case kOem5: {
      result = ui::VKEY_OEM_5;
      break;
    }
    case kOem6: {
      result = ui::VKEY_OEM_6;
      break;
    }
    case kOem7: {
      result = ui::VKEY_OEM_7;
      break;
    }
    case kOem8: {
      result = ui::VKEY_OEM_8;
      break;
    }
    case kOem102: {
      result = ui::VKEY_OEM_102;
      break;
    }
    /*case kKbdBrightnessUp: {
      result = ui::VKEY_KBD_BRIGHTNESS_UP;
      break;
    }*/
    case kDbeSbcschar: {
      result = ui::VKEY_DBE_SBCSCHAR;
      break;
    }
    case kDbeDbcschar: {
      result = ui::VKEY_DBE_DBCSCHAR;
      break;
    }
    /*case kPlay: {
      result = ui::VKEY_PLAY;
      break;
    }
    case kMediaRewind: {
      result = ui::VKEY_OEM_103;
      break;
    }
    case kMediaFastForward: {
      result = ui::VKEY_OEM_104;
      break;
    }*/
  }
  return result;
}
#endif // ENABLE_BLINK_UI

static cobalt::math::Vector2dF mouseEventToElementLocalPos(
  const dom::MouseEvent* const mouseEvent,
  cobalt::dom::HTMLElement* targetHTML)
{
#if 0
  float scrollX = 0.0f;
  float scrollY = 0.0f;

  /// \todo dirty HACK to imitate scrolling support
  for (Node* ancestor_node =  targetHTML->parent_node(); ancestor_node;
       ancestor_node = ancestor_node->parent_node())
  {
    Element* ancestor_element = ancestor_node->AsElement();
    if (!ancestor_element) {
      continue;
    }
    HTMLElement* ancestor_html_element = ancestor_element->AsHTMLElement().get();
    if (!ancestor_html_element) {
      continue;
    }
    DCHECK(ancestor_html_element->computed_style());
    /*if (ancestor_html_element->AsHTMLBodyElement()) {
      continue;
    }*/
    if (ancestor_html_element->computed_style()->position() ==
            cssom::KeywordValue::GetFixed()) {
      scrollX = 0.0f;
      scrollY = 0.0f;
      break;
    }
    //if (ancestor_html_element->computed_style()->position() ==
    //        cssom::KeywordValue::GetAbsolute()) {
    //  scrollX = 0.0f;
    //  scrollY = 0.0f;
    //  continue;
    //}
    scrollX += ancestor_html_element
      //->offset_left();
      ->scroll_left();
    scrollY += ancestor_html_element
      //->offset_top();
      ->scroll_top();
  }

  printf("scroll_X = %f \n", scrollX);
  printf("scroll_Y = %f \n", scrollY);
#endif

  auto computedScroll = targetHTML->computeParentsScroll();

  /*auto posInDocument = targetHTML->computePosInDocument();
  printf("posInDocument = %f \n", posInDocument.x());
  printf("posInDocument = %f \n", posInDocument.y());*/

  /*const auto scrollDtX = mouseEvent->client_x() - mouseEvent->original_client_x();
  const auto scrollDtY = mouseEvent->client_y() - mouseEvent->original_client_y();
  printf("scrollDtX = %f \n", scrollDtX);
  printf("scrollDtY = %f \n", scrollDtY);*/
  return cobalt::math::Vector2dF{
      /*mouseEvent->client_x() + computedScroll.x() - posInDocument.x(),
      mouseEvent->client_y() + computedScroll.y() - posInDocument.y()*/
      mouseEvent->client_x() + computedScroll.x()
          - targetHTML->GetBoundingClientRect()->left()
          ,
      /// \note hack to support scrolling: scroll_delta_y = original_client_y_ - screen_y_
      mouseEvent->client_y() + computedScroll.y()
          - targetHTML->GetBoundingClientRect()->top()
      /*scrollDtX,
      scrollDtY*/
      /*/// \note hack to support scrolling: scroll_delta_x = original_client_x_ - screen_x_
      mouseEvent->client_x() - scrollDtX
          - targetHTML->GetBoundingClientRect()->left()
          ,
      /// \note hack to support scrolling: scroll_delta_y = original_client_y_ - screen_y_
      mouseEvent->client_y() - scrollDtY
          - targetHTML->GetBoundingClientRect()->top()*/
  };
}

HTMLInputElement::HTMLInputElement(Document* document)
    : HTMLCustomElement(document, base::Token(kTagName)) {
  printf("created new HTMLInputElement\n");
  gHTMLInputElementID++;
  HTMLInputElementID_ = gHTMLInputElementID;

  /*DCHECK(!node_init_data_);
  node_init_data_ =
    std::make_shared<HTMLInputElement::NodeInitData>(
      HTMLInputElement::NodeInitData{
        std::to_string(HTMLInputElementID_), // placeholder_text_
        "", // initial_text_
        controller() // controller_text_
      });*/

  //node_init_data_.placeholder_text_ = std::to_string(HTMLInputElementID_);

  /// \todo add cb once
  this->add_event_cb("on-mousedown",
    [HTMLInputElementID = gHTMLInputElementID, this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->mousedown(event, elem);
      printf("HTMLInputElementID %i\n", HTMLInputElementID);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);

      DCHECK(event->current_target());
      cobalt::dom::HTMLElement* targetHTML =
          base::polymorphic_downcast<
              cobalt::dom::HTMLElement*>(event->current_target().get());
      DCHECK(targetHTML);
      cobalt::math::Vector2dF elementLocalPos
        = mouseEventToElementLocalPos(mouseEvent, targetHTML);
      printf("InputBox on-mousedown "
             "at (%f;%f) kSbKeyMouse1: %d , kSbKeyMouse2: %d , kSbKeyMouse3: %d \n",
              elementLocalPos.x(),
              elementLocalPos.y(),
              (bool)(mouseEvent->buttons() & kSbKeyMouse1),
              (bool)(mouseEvent->buttons() & kSbKeyMouse2),
              (bool)(mouseEvent->buttons() & kSbKeyMouse3));
      //(client_->GetCursorScreenPoint());
#if defined(ENABLE_BLINK_UI)
      int changed_button_flags = ui::EF_NONE;
      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/ff8aa85cedc189cef05dc8fbcc5287df272b0d9f/src/cobalt/src/cobalt/dom/native_events_port/native_event.cc#L1965
      if(mouseEvent->buttons() & 1) { // left
        changed_button_flags |= ui::EF_LEFT_MOUSE_BUTTON;
        printf("changed_button_flags |= EF_LEFT_MOUSE_BUTTON\n");
      }
      if(mouseEvent->buttons() & 2) { // right
        changed_button_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
        printf("changed_button_flags |= EF_RIGHT_MOUSE_BUTTON\n");
      }
      // TODO
      if(mouseEvent->buttons() & 4) { // middle
        changed_button_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
        printf("changed_button_flags |= EF_MIDDLE_MOUSE_BUTTON\n");
      }
      /*int flags = ui::EF_NONE;
      flags |= changed_button_flags;
      if(mouseEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(mouseEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(mouseEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(mouseEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }*/
      int flags = changed_button_flags;
      {
        gfx::Point point(elementLocalPos.x(), elementLocalPos.y());
        //gfx::Point point(client_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_PRESSED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           flags,
                           changed_button_flags);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
                  elem->GetBoundingClientRect() // new cobalt::dom::DOMRect{0, 0, elem->GetBoundingClientRect()->width(), elem->GetBoundingClientRect()->height()}
            });
        }

      }
#endif // ENABLE_BLINK_UI

      return base::nullopt;
    });

  this->add_event_cb("on-mouseup",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->mouseup(event, elem);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);

      DCHECK(event->current_target());
      cobalt::dom::HTMLElement* targetHTML =
          base::polymorphic_downcast<
              cobalt::dom::HTMLElement*>(event->current_target().get());
      DCHECK(targetHTML);

      cobalt::math::Vector2dF elementLocalPos
        = mouseEventToElementLocalPos(mouseEvent, targetHTML);
      printf("InputBox on-mouseup at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
             elementLocalPos.x(),
             elementLocalPos.y(),
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
#if defined(ENABLE_BLINK_UI)
      int changed_button_flags = ui::EF_NONE;
      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/ff8aa85cedc189cef05dc8fbcc5287df272b0d9f/src/cobalt/src/cobalt/dom/native_events_port/native_event.cc#L1965
     if(mouseEvent->buttons() & 1) { // left
       changed_button_flags |= ui::EF_LEFT_MOUSE_BUTTON;
       printf("changed_button_flags |= EF_LEFT_MOUSE_BUTTON\n");
     }
     if(mouseEvent->buttons() & 2) { // right
       changed_button_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
       printf("changed_button_flags |= EF_RIGHT_MOUSE_BUTTON\n");
     }
     // TODO
     if(mouseEvent->buttons() & 4) { // middle
       changed_button_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
       printf("changed_button_flags |= EF_MIDDLE_MOUSE_BUTTON\n");
     }
      /*int flags = ui::EF_NONE;
      flags |= changed_button_flags;
      if(mouseEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(mouseEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(mouseEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(mouseEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }*/
      int flags = changed_button_flags;
      {
        gfx::Point point(elementLocalPos.x(),
                         elementLocalPos.y());
        //gfx::Point point(client_->GetCursorScreenPoint());
        // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
        ui::MouseEvent mEv(ui::ET_MOUSE_RELEASED,
                           point,
                           point,
                           ui::EventTimeForNow(),
                           flags,
                           changed_button_flags);

        // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
        {
          std::scoped_lock lock(scheduledEventsMutex_);
          scheduledEvents_.scheduledMouseEvents_.
            push_back(ScheduledMouseEvent{
              std::move(mEv),
              elem->GetBoundingClientRect() // new cobalt::dom::DOMRect{0, 0, elem->GetBoundingClientRect()->width(), elem->GetBoundingClientRect()->height()}
            });
        }
      }
#endif // ENABLE_BLINK_UI

      return base::nullopt;
    });

  this->add_event_cb("on-click",
    [HTMLInputElementID = gHTMLInputElementID, this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      printf("HTMLInputElementID %i\n", HTMLInputElementID);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->click(event, elem);

      dom::HTMLElement* elementHTML =
          // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
          base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);
      elementHTML->Focus();

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);

      DCHECK(event->current_target());
      cobalt::dom::HTMLElement* targetHTML =
          base::polymorphic_downcast<
              cobalt::dom::HTMLElement*>(event->current_target().get());
      DCHECK(targetHTML);

      cobalt::math::Vector2dF elementLocalPos
        = mouseEventToElementLocalPos(mouseEvent, targetHTML);
      printf("InputBox on-click-print at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              elementLocalPos.x(),
              elementLocalPos.y(),
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());

      return base::nullopt;
    });

  this->add_event_cb("on-mousemove",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
      scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
    CHECK(elem);
    //CHECK(newNode);
    //CHECK(input_box);
    //input_box->mousemove(event, elem);

    //const dom::PointerEvent* pointerEvent;
    const dom::MouseEvent* mouseEvent;
    /*if(event->type() == base::Tokens::povisibilitychange()) {
      pointerEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::PointerEvent*>(event.get());
    }*/
    mouseEvent =
      // TODO: base::polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
      base::polymorphic_downcast<const dom::MouseEvent*>(event.get());
    CHECK(/*pointerEvent ||*/ mouseEvent);
    //float x = /*pointerEvent ? pointerEvent->x() :*/ mouseEvent->client_x();
    //float y = /*pointerEvent ? pointerEvent->y() :*/ mouseEvent->client_y();

    DCHECK(event->current_target());
    cobalt::dom::HTMLElement* targetHTML =
        base::polymorphic_downcast<
            cobalt::dom::HTMLElement*>(event->current_target().get());
    DCHECK(targetHTML);

    cobalt::math::Vector2dF elementLocalPos
      = mouseEventToElementLocalPos(mouseEvent, targetHTML);
    printf("InputBox mousemove at (%f;%f) event %s for tag: %s, "
           "attrVal: %s, text_content: %s\n",
            elementLocalPos.x(),
            elementLocalPos.y(),
            event->type().c_str(),
            elem->tag_name().c_str(),
            attrVal.c_str(),
            elem->text_content().value_or("").c_str());

#if defined(ENABLE_BLINK_UI)
    int changed_button_flags = ui::EF_NONE;

    // see https://github.com/blockspacer/skia-opengl-emscripten/blob/ff8aa85cedc189cef05dc8fbcc5287df272b0d9f/src/cobalt/src/cobalt/dom/native_events_port/native_event.cc#L1965
    if(mouseEvent->buttons() & 1) { // left
      changed_button_flags |= ui::EF_LEFT_MOUSE_BUTTON;
      printf("changed_button_flags |= EF_LEFT_MOUSE_BUTTON\n");
    }
    if(mouseEvent->buttons() & 2) { // right
      changed_button_flags |= ui::EF_RIGHT_MOUSE_BUTTON;
      printf("changed_button_flags |= EF_RIGHT_MOUSE_BUTTON\n");
    }
    // TODO
    if(mouseEvent->buttons() & 4) { // middle
      changed_button_flags |= ui::EF_MIDDLE_MOUSE_BUTTON;
      printf("changed_button_flags |= EF_MIDDLE_MOUSE_BUTTON\n");
    }
    int flags = changed_button_flags;
    /*int flags = ui::EF_NONE;
    flags |= changed_button_flags;
    if(mouseEvent->ctrl_key()) {
      flags |= ui::EF_CONTROL_DOWN;
    }
    if(mouseEvent->shift_key()) {
      flags |= ui::EF_SHIFT_DOWN;
    }
    if(mouseEvent->alt_key()) {
      flags |= ui::EF_ALT_DOWN;
    }
    if(mouseEvent->meta_key()) {
      flags |= ui::EF_COMMAND_DOWN;
    }*/

    printf("changed_button_flags flags %s\n", (flags ? "ui::ET_MOUSE_DRAGGED" : "ui::ET_MOUSE_MOVED"));

    {
      gfx::Point point(elementLocalPos.x(),
                       elementLocalPos.y());
      //gfx::Point point(client_->GetCursorScreenPoint());
      // see https://github.com/blockspacer/skia-opengl-emscripten/blob/24de863ed991dbb888a443138ae0780d0d514417/src/chromium/ui/events/event.h#L517
      ui::MouseEvent mEv(flags ? ui::ET_MOUSE_DRAGGED : ui::ET_MOUSE_MOVED, // TODO: ET_MOUSE_DRAGGED
                         point,
                         point,
                         ui::EventTimeForNow(),
                         flags,
                         changed_button_flags);

      // TODO: event_generator_ https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/views/controls/combobox/combobox_unittest.cc#L228
      {
        std::scoped_lock lock(scheduledEventsMutex_);
        scheduledEvents_.scheduledMouseEvents_.
          push_back(ScheduledMouseEvent{
            std::move(mEv),
            elem->GetBoundingClientRect() // new cobalt::dom::DOMRect{0, 0, elem->GetBoundingClientRect()->width(), elem->GetBoundingClientRect()->height()}
          });
      }
    }
#endif // ENABLE_BLINK_UI

    return base::nullopt;
  });

  this->add_event_cb("on-mouseover",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->mouseover(event, elem);

      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);

      DCHECK(event->current_target());
      cobalt::dom::HTMLElement* targetHTML =
          base::polymorphic_downcast<
              cobalt::dom::HTMLElement*>(event->current_target().get());
      DCHECK(targetHTML);

      cobalt::math::Vector2dF elementLocalPos
        = mouseEventToElementLocalPos(mouseEvent, targetHTML);
      printf("InputBox on-test-mouseover at (%f;%f) event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              elementLocalPos.x(),
              elementLocalPos.y(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      //event->target()
      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);
      //elementHTML->GetUiNavItem()->Focus();

      //elementHTML->Focus();

      return base::nullopt;
    });

  this->add_event_cb("on-mouseout",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->mouseout(event, elem);

      dom::Document* document = elem->node_document();
      CHECK(document);
      scoped_refptr<dom::HTMLElement> indicated_element = document->indicated_element();
      CHECK(indicated_element);
      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);

      DCHECK(event->current_target());
      cobalt::dom::HTMLElement* targetHTML =
          base::polymorphic_downcast<
              cobalt::dom::HTMLElement*>(event->current_target().get());
      DCHECK(targetHTML);

      cobalt::math::Vector2dF elementLocalPos
        = mouseEventToElementLocalPos(mouseEvent, targetHTML);
      printf("InputBox on-test-mouseout at (%f;%f) event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              elementLocalPos.x(),
              elementLocalPos.y(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);


      // elementHTML->Blur(); // TODO


      /*//elementHTML->GetUiNavItem()->Blur();
      if(indicated_element == elementHTML) {
        printf("indicated_element == elementHTML\n");
        //elementHTML->Blur();
      } else {
        //elementHTML->Blur();
      }*/
      return base::nullopt;
    });

  this->add_event_cb("on-keyup",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //return keyup(event, elem);
      const dom::KeyboardEvent* const keyboardEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
      CHECK(keyboardEvent);
      printf("InputBox on-test-keyup key %s event %s for tag: %s, "
             "text_content: %s\n",
              keyboardEvent->key().c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              elem->text_content().value_or("").c_str());
      printf("which %d\n", keyboardEvent->which());
      printf("keyup character %d\n", keyboardEvent->keysym());
      //printf("keyup str %s\n", keyboardEvent->keysym());

      /// \note allows to get localized text
      const wchar_t* wchar_src = new wchar_t[1] {
        keyboardEvent->keysym()
      };

      std::string utf8_str;
      bool isUTF8
        = base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty();
      if (isUTF8) {
        printf("keyup normalized_str %s\n", utf8_str.c_str());
      } else {
        utf8_str.clear();
      }

      wprintf(L"keysym character, %s", keyboardEvent->keysym());
      printf("text %s\n", keyboardEvent->text().c_str());
      printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
      printf("shift_key %d\n", keyboardEvent->shift_key());
      printf("alt_key %d\n", keyboardEvent->alt_key());
      printf("meta_key %d\n", keyboardEvent->meta_key());
      printf("code %s\n", keyboardEvent->code().c_str());
      printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
      printf("char_code %u\n", keyboardEvent->char_code());
      printf("key_code %u\n", keyboardEvent->key_code());
    #ifdef OS_EMSCRIPTEN
      printf("time_stamp %llu\n", keyboardEvent->time_stamp());
    #else
      printf("time_stamp %lu\n", keyboardEvent->time_stamp());
    #endif
      // base::ReadUnicodeCharacter
      const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
      printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);

#if defined(ENABLE_BLINK_UI)
      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      int flags = ui::EF_NONE;
      if(keyboardEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(keyboardEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(keyboardEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(keyboardEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }
      flags |= ui::EF_IS_SYNTHESIZED;
      base::string16 utf16_str;
      if(utf16_str.empty()
          && !keyboardEvent->text().empty()
          /*&& !base::IsStringASCII(keyboardEvent->text())*/) {
        std::cout << "keyboardEvent->text() " << keyboardEvent->text() << std::endl;
        utf16_str = base::UTF8ToUTF16(keyboardEvent->text());
        std::cout << "keyboardEvent->text() utf16_str " << utf16_str << std::endl;
      }
      if(utf16_str.empty()) {
        utf16_str = base::UTF8ToUTF16(utf8_str);
      }
      /*if(utf16_str.empty() && keyboardEvent->char_code()) {
        utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
      }*/
      if(utf16_str.empty()) {
        bool isUTF16 =
            base::WideToUTF16(wchar_src, 1, &utf16_str) && !utf16_str.empty();
        //DCHECK(isUTF16);
        if (isUTF16) {
          std::cout << "keyup normalized_str16" << utf16_str << std::endl;
        } else {
          utf16_str.clear();
        }
      }
      ui::KeyboardCode keyboardCode = ui::VKEY_UNKNOWN;
      //if(keyboardEvent->text().empty()
      //    /*&& base::IsStringASCII(keyboardEvent->text())*/)
      {
        keyboardCode = keyFromKeyCode(keyboardEvent->key_code());
      }
      if(utf16_str.empty() && keyboardCode != ui::VKEY_UNKNOWN) {
        //utf16_str = base::UTF8ToUTF16(keyboardEvent->key());
        //utf16_str.push_back(static_cast<base::char16>(keyboardCode));
        //utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
      }
      std::cout << "utf16_str utf16_str " << utf16_str << std::endl;
      // TODO: VKEY_NUMPAD4 https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L159
      if(!utf16_str.empty()) {
        std::cout << "utf16_str utf16_str utf16_str" << utf16_str << std::endl;
        for (base::string16::const_iterator i = utf16_str.begin();
           i != utf16_str.end(); ++i) {
          printf("sending OnKeyEvent(&release_event)\n");
          ui::KeyEvent release_event(ui::ET_KEY_RELEASED,
            // Key events with key code of VKEY_PROCESSKEY, usually created by virtual
            // keyboard (like handwriting input), have no effect on accelerator and
            // they may disturb the accelerator history. So filter them out. (see
            // https://crbug.com/918317)
            keyboardCode,
            ui::DomCode::NONE,
            flags);
          DCHECK(!release_event.stopped_propagation());

          //release_event.set_character(static_cast<base::char16>(wchar_src[0]));
          //release_event.set_character(static_cast<base::char16>(keyboardEvent->char_code()));

          //if(keyboardCode == ui::VKEY_UNKNOWN)
          base::string16 char_str;
          char_str.push_back(static_cast<base::char16>(*i));
          bool is_printable
              = keyboardEvent->is_printable()
              && (!base::IsStringASCII(char_str)
                  || base::IsAsciiPrintable(*i));
          std::cout << "keyup is_printable 1" << (keyboardEvent->is_printable() ? "true" : "false") << std::endl;
          std::cout << "keyup is_printable 2" << (is_printable ? "true" : "false") << std::endl;
          if(is_printable)
          {
            release_event.set_character(*i); // sets DomKey
          }
          release_event.set_key_code(keyboardCode);

          printf("release_event.key_code() == ui::VKEY_A %s \n",
            (release_event.key_code() == ui::VKEY_A ? "true" : "false"));
          //release_event.set_character(base::UTF8ToUTF16("Ф").at(0));
          release_event.set_source_device_id(0);

          DCHECK(!release_event.stopped_propagation());

          //DCHECK(newNode);

          //newNode->custom_generating_node_->textfield_

          {
            std::scoped_lock lock(scheduledEventsMutex_);
            scheduledEvents_.scheduledKeyEvents_.
              push_back(ScheduledKeyEvent{
              std::move(release_event),
              keyboardEvent->is_printable()
            });
          }

          /*if(input_node_widget_) {
            DCHECK(input_node_widget_);
            DCHECK(input_node_widget_->GetInputMethod());
            ui::InputMethod* im =
                input_node_widget_->GetInputMethod();
            im->DispatchKeyEvent(&release_event);
          }*/
        }
      }
#endif // ENABLE_BLINK_UI

      return base::nullopt;
    });

#if 0
  this->add_event_cb("on-keypress",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      //CHECK(newNode);
      //CHECK(input_box);
      //input_box->keypress(event, elem);

      const dom::KeyboardEvent* const keyboardEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
      CHECK(keyboardEvent);
      printf("InputBox on-test-keypress key %s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              keyboardEvent->key().c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      printf("which %d\n", keyboardEvent->which());
      printf("keypress character %d\n", keyboardEvent->keysym());
      wprintf(L"wprintf character %s\n", keyboardEvent->keysym());
/*#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
      printf("printf character SDL_GetKeyName %s\n", SDL_GetKeyName(keyboardEvent->keysym()));
#endif*/
      //printf("keypress str %s\n", keyboardEvent->keysym());

      /// \note allows to get localized text
      const wchar_t* wchar_src = new wchar_t[1] {
        keyboardEvent->keysym()
      };
      std::string utf8_str;
      bool isUTF8
        = base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty();
      if (isUTF8) {
        printf("keypress normalized_str %s\n", utf8_str.c_str());
      } else {
        utf8_str.clear();
      }

      wprintf(L"keysym character, %s", keyboardEvent->keysym());
      printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
      printf("shift_key %d\n", keyboardEvent->shift_key());
      printf("alt_key %d\n", keyboardEvent->alt_key());
      printf("meta_key %d\n", keyboardEvent->meta_key());
      printf("code %s\n", keyboardEvent->code().c_str());
      printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
      printf("char_code %u\n", keyboardEvent->char_code());
      printf("key_code %u\n", keyboardEvent->key_code());
#ifdef OS_EMSCRIPTEN
      printf("time_stamp %llu\n", keyboardEvent->time_stamp());
#else
      printf("time_stamp %lu\n", keyboardEvent->time_stamp());
#endif
      // base::ReadUnicodeCharacter
      const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
      printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

      dom::HTMLElement* elementHTML =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
      CHECK(elementHTML);

      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      int flags = ui::EF_NONE;
      if(keyboardEvent->ctrl_key()) {
        flags |= ui::EF_CONTROL_DOWN;
      }
      if(keyboardEvent->shift_key()) {
        flags |= ui::EF_SHIFT_DOWN;
      }
      if(keyboardEvent->alt_key()) {
        flags |= ui::EF_ALT_DOWN;
      }
      if(keyboardEvent->meta_key()) {
        flags |= ui::EF_COMMAND_DOWN;
      }
      flags |= ui::EF_IS_SYNTHESIZED;
      /// \todo EF_CONTROL_DOWN
      /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
      base::string16 utf16_str;
      if(utf16_str.empty()
          && !keyboardEvent->text().empty()
          /*&& !base::IsStringASCII(keyboardEvent->text())*/) {
        std::cout << "keyboardEvent->text() " << keyboardEvent->text() << std::endl;
        utf16_str = base::UTF8ToUTF16(keyboardEvent->text());
        std::cout << "keyboardEvent->text() utf16_str " << utf16_str << std::endl;
      }
      if(utf16_str.empty()) {
        utf16_str = base::UTF8ToUTF16(utf8_str);
      }
      /*if(utf16_str.empty() && keyboardEvent->char_code()) {
        utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
      }*/
      if(utf16_str.empty()) {
        bool isUTF16 =
            base::WideToUTF16(wchar_src, 1, &utf16_str) && !utf16_str.empty();
        //DCHECK(isUTF16);
        if (isUTF16) {
          std::cout << "keypress normalized_str16" << utf16_str << std::endl;
        } else {
          utf16_str.clear();
        }
      }
      //const base::string16 inputText = base::UTF8ToUTF16("�");
      //DCHECK(isUTF16);
      //const base::string16 inputText = utf8_str;
      ui::KeyboardCode keyboardCode = ui::VKEY_UNKNOWN;
      //if(keyboardEvent->text().empty()
      //    /*&& base::IsStringASCII(keyboardEvent->text())*/)
      {
        keyboardCode = keyFromKeyCode(keyboardEvent->key_code());
      }
      if(utf16_str.empty() && keyboardCode != ui::VKEY_UNKNOWN) {
        //utf16_str = base::UTF8ToUTF16(keyboardEvent->key());
        //utf16_str.push_back(static_cast<base::char16>(keyboardCode));
        //utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
      }
      std::cout << "utf16_str utf16_str " << utf16_str << std::endl;
      // TODO: VKEY_NUMPAD4 https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L159
      if(!utf16_str.empty()) {
        std::cout << "utf16_str utf16_str utf16_str" << utf16_str << std::endl;
        for (base::string16::const_iterator i = utf16_str.begin();
           i != utf16_str.end(); ++i) {
          printf("sending OnKeyEvent(&press_event)\n");

          ui::KeyEvent press_event(ui::ET_KEY_PRESSED,
            // Key events with key code of VKEY_PROCESSKEY, usually created by virtual
            // keyboard (like handwriting input), have no effect on accelerator and
            // they may disturb the accelerator history. So filter them out. (see
            // https://crbug.com/918317)
            keyboardCode,
            ui::DomCode::NONE,
            flags);
          DCHECK(!press_event.stopped_propagation());
          //press_event.set_character(static_cast<base::char16>(wchar_src[0]));
          //press_event.set_character(static_cast<base::char16>(keyboardEvent->char_code()));

          //if(keyboardCode == ui::VKEY_UNKNOWN)
          base::string16 char_str;
          char_str.push_back(static_cast<base::char16>(*i));
          bool is_printable
              = keyboardEvent->is_printable()
              && (!base::IsStringASCII(char_str)
                  || base::IsAsciiPrintable(*i));
               std::cout << "keypress is_printable 1" << (keyboardEvent->is_printable() ? "true" : "false") << std::endl;
               std::cout << "keypress is_printable 2" << (is_printable ? "true" : "false") << std::endl;
          if(is_printable)
          {
            press_event.set_character(*i); // sets DomKey
          }
          press_event.set_key_code(keyboardCode);
          printf("press_event.key_code() == ui::VKEY_A %s \n",
            (press_event.key_code() == ui::VKEY_A ? "true" : "false"));

          //press_event.set_character(base::UTF8ToUTF16("Ф").at(0));
          press_event.set_source_device_id(0);
          DCHECK(!press_event.stopped_propagation());

          {
            std::scoped_lock lock(scheduledEventsMutex_);
            scheduledEvents_.scheduledKeyEvents_.
              push_back(ScheduledKeyEvent{
              std::move(press_event),
              keyboardEvent->is_printable()
            });
          }

          //DCHECK(newNode);
          //DCHECK(newNode->input_node_widget_);
          /*if(input_node_widget_) {
            DCHECK(input_node_widget_->GetInputMethod());
            ui::InputMethod* im = input_node_widget_->GetInputMethod();
            im->DispatchKeyEvent(&press_event);
          }*/
        }
      }

      return base::nullopt;
    });
#endif // 0

  this->add_event_cb("on-keydown",
    [this/*, newNode*/](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
           CHECK(elem);
           //CHECK(newNode);
           //CHECK(input_box);
           //input_box->keypress(event, elem);

           const dom::KeyboardEvent* const keyboardEvent =
               // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
               base::polymorphic_downcast<const dom::KeyboardEvent* const>(event.get());
           CHECK(keyboardEvent);
           printf("InputBox on-test-keydown key %s event %s for tag: %s, "
                  "attrVal: %s, text_content: %s\n",
                  keyboardEvent->key().c_str(),
                  event->type().c_str(),
                  elem->tag_name().c_str(),
                  attrVal.c_str(),
                  elem->text_content().value_or("").c_str());
           printf("which %d\n", keyboardEvent->which());
           printf("keydown character %d\n", keyboardEvent->keysym());
           wprintf(L"wprintf character %s\n", keyboardEvent->keysym());
           /*#if defined(ENABLE_HTML5_SDL) || !defined(__EMSCRIPTEN__)
  printf("printf character SDL_GetKeyName %s\n", SDL_GetKeyName(keyboardEvent->keysym()));
  #endif*/
           //printf("keydown str %s\n", keyboardEvent->keysym());

           /// \note allows to get localized text
           const wchar_t* wchar_src = new wchar_t[1] {
               keyboardEvent->keysym()
           };
           std::string utf8_str;
           bool isUTF8
               = base::WideToUTF8(wchar_src, 1, &utf8_str) && !utf8_str.empty();
           if (isUTF8) {
             printf("keydown normalized_str %s\n", utf8_str.c_str());
           } else {
             utf8_str.clear();
           }

           wprintf(L"keysym character, %s", keyboardEvent->keysym());
           printf("ctrl_key %d\n", keyboardEvent->ctrl_key());
           printf("shift_key %d\n", keyboardEvent->shift_key());
           printf("alt_key %d\n", keyboardEvent->alt_key());
           printf("meta_key %d\n", keyboardEvent->meta_key());
           printf("code %s\n", keyboardEvent->code().c_str());
           printf("key_identifier %s\n", keyboardEvent->key_identifier().c_str());
           printf("char_code %u\n", keyboardEvent->char_code());
           printf("key_code %u\n", keyboardEvent->key_code());
  #ifdef OS_EMSCRIPTEN
           printf("time_stamp %llu\n", keyboardEvent->time_stamp());
  #else
           printf("time_stamp %lu\n", keyboardEvent->time_stamp());
  #endif
           // base::ReadUnicodeCharacter
           const char* sbSystemGetLocaleId = SbSystemGetLocaleId();
           printf("SbSystemGetLocaleId %s\n", sbSystemGetLocaleId);

           dom::HTMLElement* elementHTML =
               // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
               base::polymorphic_downcast<dom::HTMLElement*>(elem.get());
           CHECK(elementHTML);

#if defined(ENABLE_BLINK_UI)
           /// \todo EF_CONTROL_DOWN
           /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
           int flags = ui::EF_NONE;
           if(keyboardEvent->ctrl_key()) {
             flags |= ui::EF_CONTROL_DOWN;
           }
           if(keyboardEvent->shift_key()) {
             flags |= ui::EF_SHIFT_DOWN;
           }
           if(keyboardEvent->alt_key()) {
             flags |= ui::EF_ALT_DOWN;
           }
           if(keyboardEvent->meta_key()) {
             flags |= ui::EF_COMMAND_DOWN;
           }
           flags |= ui::EF_IS_SYNTHESIZED;
           /// \todo EF_CONTROL_DOWN
           /// https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L266
           base::string16 utf16_str;
           if(utf16_str.empty()
               && !keyboardEvent->text().empty()
               /*&& !base::IsStringASCII(keyboardEvent->text())*/) {
             std::cout << "keyboardEvent->text() " << keyboardEvent->text() << std::endl;
             utf16_str = base::UTF8ToUTF16(keyboardEvent->text());
             std::cout << "keyboardEvent->text() utf16_str " << utf16_str << std::endl;
           }
           if(utf16_str.empty()) {
             utf16_str = base::UTF8ToUTF16(utf8_str);
           }
           /*if(utf16_str.empty() && keyboardEvent->char_code()) {
             utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
           }*/
           if(utf16_str.empty()) {
             bool isUTF16 =
                 base::WideToUTF16(wchar_src, 1, &utf16_str) && !utf16_str.empty();
             //DCHECK(isUTF16);
             if (isUTF16) {
               std::cout << "keydown normalized_str16" << utf16_str << std::endl;
             } else {
               utf16_str.clear();
             }
           }
           //const base::string16 inputText = base::UTF8ToUTF16("�");
           //DCHECK(isUTF16);
           //const base::string16 inputText = utf8_str;
           ui::KeyboardCode keyboardCode = ui::VKEY_UNKNOWN;
           //if(keyboardEvent->text().empty()
           //    /*&& base::IsStringASCII(keyboardEvent->text())*/)
           {
             keyboardCode = keyFromKeyCode(keyboardEvent->key_code());
           }
           if(utf16_str.empty() && keyboardCode != ui::VKEY_UNKNOWN) {
             //utf16_str = base::UTF8ToUTF16(keyboardEvent->key());
             //utf16_str.push_back(static_cast<base::char16>(keyboardCode));
             //utf16_str.push_back(static_cast<base::char16>(keyboardEvent->char_code()));
           }
           std::cout << "utf16_str utf16_str " << utf16_str << std::endl;
           // TODO: VKEY_NUMPAD4 https://github.com/blockspacer/skia-opengl-emscripten/blob/bb16ab108bc4018890f4ff3179250b76c0d9053b/src/chromium/ui/events/keycodes/keyboard_code_conversion.cc#L159
           if(!utf16_str.empty()) {
             std::cout << "utf16_str utf16_str utf16_str" << utf16_str << std::endl;
             for (base::string16::const_iterator i = utf16_str.begin();
                  i != utf16_str.end(); ++i) {
               printf("sending OnKeyEvent(&press_event)\n");

               ui::KeyEvent press_event(ui::ET_KEY_PRESSED,
                 // Key events with key code of VKEY_PROCESSKEY, usually created by virtual
                 // keyboard (like handwriting input), have no effect on accelerator and
                 // they may disturb the accelerator history. So filter them out. (see
                 // https://crbug.com/918317)
                 keyboardCode,
                 ui::DomCode::NONE,
                 flags);
               DCHECK(!press_event.stopped_propagation());
               //press_event.set_character(static_cast<base::char16>(wchar_src[0]));
               //press_event.set_character(static_cast<base::char16>(keyboardEvent->char_code()));

               //if(keyboardCode == ui::VKEY_UNKNOWN)
               base::string16 char_str;
               char_str.push_back(static_cast<base::char16>(*i));
               bool is_printable
                   = keyboardEvent->is_printable()
                   && (!base::IsStringASCII(char_str)
                       || base::IsAsciiPrintable(*i));
               std::cout << "keydown is_printable 1" << (keyboardEvent->is_printable() ? "true" : "false") << std::endl;
               std::cout << "keydown is_printable 2" << (is_printable ? "true" : "false") << std::endl;
               if(is_printable)
               {
                 press_event.set_character(*i); // sets DomKey
               }
               press_event.set_key_code(keyboardCode);
               printf("press_event.key_code() == ui::VKEY_A %s \n",
                 (press_event.key_code() == ui::VKEY_A ? "true" : "false"));

               //press_event.set_character(base::UTF8ToUTF16("Ф").at(0));
               press_event.set_source_device_id(0);
               DCHECK(!press_event.stopped_propagation());

               {
                 std::scoped_lock lock(scheduledEventsMutex_);
                 scheduledEvents_.scheduledKeyEvents_.
                   push_back(ScheduledKeyEvent{
                   std::move(press_event),
                   keyboardEvent->is_printable()
                 });
               }

               //DCHECK(newNode);
               //DCHECK(newNode->input_node_widget_);
               /*if(input_node_widget_) {
  DCHECK(input_node_widget_->GetInputMethod());
  ui::InputMethod* im = input_node_widget_->GetInputMethod();
  im->DispatchKeyEvent(&press_event);
  }*/
             }
           }
#endif // ENABLE_BLINK_UI
      return base::nullopt;
    });
}

HTMLInputElement::~HTMLInputElement() {
  printf("destroyed HTMLInputElement\n");
}

//#if 0
void HTMLInputElement::OnSetAttribute(const std::string& name,
                                      const std::string& value) {

  //printf("HTMLInputElement::OnSetAttribute 1 %s\n", name.c_str());

  //node_init_data_.placeholder_text_ = std::to_string(HTMLInputElementID_);

  if (name == HTMLInputElement::kAttrNamePlaceholder) {
    //printf("changed node_init_data_.placeholder_text_ %s\n", name.c_str());
    //node_init_data_.placeholder_text_ = value;
    set_placeholder(value);
  }

  if (name == HTMLInputElement::kAttrNameController) {
    //printf("changed node_init_data_.controller_text_ %s\n", name.c_str());
    //node_init_data_.controller_text_ = value;
    set_controller(value);
  }

  if (name == HTMLInputElement::kAttrNameInitialText) {
    set_initial_text(value);
  }

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  HTMLElement::OnSetAttribute(name, value);

  // // From HTMLElement::OnSetAttribute
  // if (name == "dir") {
  //   SetDirectionality(value);
  // } else if (name == "tabindex") {
  //   SetTabIndex(value);
  // }
  //
  // // A user agent that obtains images immediately must synchronously update the
  // // image data of an img element whenever that element is created with a src
  // // attribute. A user agent that obtains images immediately must also
  // // synchronously update the image data of an img element whenever that element
  // // has its src or crossorigin attribute set, changed, or removed.
  // //if (name == "src") {
  // //  UpdateImageData();
  // //}
  //
  // // From HTMLElement::OnSetAttribute
  // // Always clear the matching state when an attribute changes. Any attribute
  // // changing can potentially impact the matching rules.
  // ClearRuleMatchingState();
}

void HTMLInputElement::OnRemoveAttribute(const std::string& name) {
  //printf("HTMLInputElement::OnRemoveAttribute 1 %s\n", name.c_str());

  // A user agent that obtains images immediately must synchronously update the
  // image data of an img element whenever that element is created with a src
  // attribute. A user agent that obtains images immediately must also
  // synchronously update the image data of an img element whenever that element
  // has its src or crossorigin attribute set, changed, or removed.
  //if (name == "src") {
  //  UpdateImageData();
  //}

  // calls ClearRuleMatchingState, SetDirectionality and SetTabIndex
  // Always clear the matching state when an attribute changes. Any attribute
  // changing can potentially impact the matching rules.
  HTMLElement::OnRemoveAttribute(name);

  // // From HTMLElement::OnRemoveAttribute
  // if (name == "dir") {
  //   SetDirectionality("");
  // } else if (name == "tabindex") {
  //   SetTabIndex("");
  // }
  //
  // // From HTMLElement::OnRemoveAttribute
  // // Always clear the matching state when an attribute changes. Any attribute
  // // changing can potentially impact the matching rules.
  // ClearRuleMatchingState();
}
//#endif // 0

uint32 HTMLInputElement::width() const {
  //DCHECK(HasAttribute(kAttrNameWidth));

  uint32 result = 0;
  std::string value_in_string
    = GetAttribute(HTMLInputElement::kAttrNameWidth).value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid width attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLInputElement::width %d\n", result);

  return result;
}

uint32 HTMLInputElement::height() const {
  //DCHECK(HasAttribute(HTMLInputElement::kAttrNameHeight));

  uint32 result = 0;
  std::string value_in_string
    = GetAttribute(HTMLInputElement::kAttrNameHeight).value_or("0");
  if (!base::StringToUint32(value_in_string, &result)) {
    LOG(WARNING) << "Invalid height attribute: \'" << value_in_string << "\'";
  }

  //printf("HTMLInputElement::height %d\n", result);

  return result;
}

std::string HTMLInputElement::placeholder() const {
  //DCHECK(HasAttribute(HTMLInputElement::kAttrNamePlaceholder));

  std::string value_in_string;
  if(HasAttribute(HTMLInputElement::kAttrNamePlaceholder)) {
    value_in_string
      = GetAttribute(HTMLInputElement::kAttrNamePlaceholder).value_or("");
  }

  //printf("HTMLInputElement::placeholder %s\n", value_in_string);

  return value_in_string;
}

void HTMLInputElement::set_placeholder(const std::string& value) {
  node_init_data_.placeholder_text_ = value;
  SetAttribute(HTMLInputElement::kAttrNamePlaceholder, value);
}

std::string HTMLInputElement::initial_text() const {
  //DCHECK(HasAttribute(HTMLInputElement::kAttrNameInitialText));

  std::string value_in_string;
  if(HasAttribute(HTMLInputElement::kAttrNameInitialText)) {
    value_in_string
      = GetAttribute(HTMLInputElement::kAttrNameInitialText).value_or("");
  }

  //printf("HTMLInputElement::initial_text %s\n", value_in_string);

  return value_in_string;
}

void HTMLInputElement::set_initial_text(const std::string& value) {
  node_init_data_.initial_text_ = value;
  SetAttribute(HTMLInputElement::kAttrNameInitialText, value);
}

std::string HTMLInputElement::controller() const {
  //DCHECK(HasAttribute(HTMLInputElement::kAttrNameController));

  std::string value_in_string;
  if(HasAttribute(HTMLInputElement::kAttrNameController)) {
    value_in_string
      = GetAttribute(HTMLInputElement::kAttrNameController).value_or("");
  }

  //printf("HTMLInputElement::controller %s\n", value_in_string);

  return value_in_string;
}

void HTMLInputElement::set_controller(const std::string& value) {
  node_init_data_.controller_text_ = value;
  SetAttribute(HTMLInputElement::kAttrNameController, value);
}

HTMLInputElement::NodeInitData HTMLInputElement::node_init_data() const {
  return node_init_data_;
}

math::SizeF HTMLInputElement::GetSize() const {
  return math::SizeF(width(), height());
}

void HTMLInputElement::onBoxGeneratorVisit(cobalt::layout::BoxGenerator& box_gen, cobalt::dom::HTMLCustomElement* custom_element) {
  //DCHECK(box_gen);

  //printf("box_gen size %zu\n", box_gen.boxes().size());

  //   https://www.w3.org/TR/CSS21/visuren.html#inline-boxes
  //   https://www.w3.org/TR/CSS21/visuren.html#propdef-unicode-bidi
  //   https://www.w3.org/TR/css3-text/#line-break-details
  int32 text_position =
      (*box_gen.paragraph_)
          ->AppendCodePoint(Paragraph::kObjectReplacementCharacterCodePoint);

  render_tree::ResourceProvider* resource_provider =
      *node_document()
           ->html_element_context()
           ->resource_provider();

  InputBoxGenerator input_box_generator(
      css_computed_style_declaration(),
      //base::Bind(&HTMLInputElement::GetAnim, base::Unretained(this)),
      *box_gen.paragraph_, text_position,
      base::nullopt, base::nullopt, base::nullopt, box_gen.context_,
      GetSize());
  if(computed_style() && computed_style()->display()) {
    computed_style()->display()->Accept(&input_box_generator);
  }

  //printf("VisitInputElement with placeholder: %s\n", this->placeholder().c_str());

  /*cobalt::dom::customizer::pair_event_to_attr("on-click-print", "on-click",
    [](const scoped_refptr<dom::Event> &event,
        scoped_refptr<cobalt::dom::Element> elem, const std::string& attrVal) {
      CHECK(elem);
      const dom::MouseEvent* const mouseEvent =
        // TODO: polymorphic_downcast Check failed: dynamic_cast<Derived>(base) == base.
        base::polymorphic_downcast<const dom::MouseEvent* const>(event.get());
      CHECK(mouseEvent);
      float x = mouseEvent->client_x();
      float y = mouseEvent->client_y();
      printf("on-click-print at (%f;%f) attr_val=%s event %s for tag: %s, "
             "attrVal: %s, text_content: %s\n",
              x,
              y,
              elem->GetAttribute("on-click-print").value_or("").c_str(),
              event->type().c_str(),
              elem->tag_name().c_str(),
              attrVal.c_str(),
              elem->text_content().value_or("").c_str());
      return true;
    });*/

  scoped_refptr<InputBox> input_box =
      input_box_generator.input_box();
  if (input_box.get() == NULL) {
    // The element with "display: none" generates no boxes and has no effect
    // on layout. Descendant elements do not generate any boxes either.
    // This behavior cannot be overridden by setting the "display" property on
    // the descendants.
    //   https://www.w3.org/TR/CSS21/visuren.html#display-prop
    return;
  }

  input_box->SetCustomGeneratingNode(this);

#ifdef COBALT_BOX_DUMP_ENABLED
  input_box->SetGeneratingNode(this);
#endif  // COBALT_BOX_DUMP_ENABLED

  input_box->SetUiNavItem(this->GetUiNavItem());

  box_gen.boxes_.push_back(input_box);

  printf("controller() %s\n", controller().c_str());
}

InputElementController::InputElementController(
  HTMLInputElement *inputElem, cobalt::render_tree::InputNode *inputNode)
    : inputElem_(inputElem), inputNode_(inputNode)
{
}

InputElementController::~InputElementController()
{
}
