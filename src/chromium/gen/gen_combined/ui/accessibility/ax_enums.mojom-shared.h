// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_
#define UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "base/compiler_specific.h"
#include "base/containers/flat_map.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "ui/accessibility/ax_enums.mojom-shared-internal.h"

#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "base/component_export.h"




namespace ax {
namespace mojom {


}  // namespace mojom
}  // namespace ax

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ax {
namespace mojom {


enum class Event : int32_t {
  
  kNone,
  
  kActiveDescendantChanged,
  
  kAlert,
  
  kAriaAttributeChanged,
  
  kAutocorrectionOccured,
  
  kBlur,
  
  kCheckedStateChanged,
  
  kChildrenChanged,
  
  kClicked,
  
  kDocumentSelectionChanged,
  
  kDocumentTitleChanged,
  
  kEndOfTest,
  
  kExpandedChanged,
  
  kFocus,
  
  kFocusContext,
  
  kHide,
  
  kHitTestResult,
  
  kHover,
  
  kImageFrameUpdated,
  
  kInvalidStatusChanged,
  
  kLayoutComplete,
  
  kLiveRegionCreated,
  
  kLiveRegionChanged,
  
  kLoadComplete,
  
  kLoadStart,
  
  kLocationChanged,
  
  kMediaStartedPlaying,
  
  kMediaStoppedPlaying,
  
  kMenuEnd,
  
  kMenuListItemSelected,
  
  kMenuListValueChanged,
  
  kMenuPopupEnd,
  
  kMenuPopupHide,
  
  kMenuPopupStart,
  
  kMenuStart,
  
  kMouseCanceled,
  
  kMouseDragged,
  
  kMouseMoved,
  
  kMousePressed,
  
  kMouseReleased,
  
  kRowCollapsed,
  
  kRowCountChanged,
  
  kRowExpanded,
  
  kScrollPositionChanged,
  
  kScrolledToAnchor,
  
  kSelectedChildrenChanged,
  
  kSelection,
  
  kSelectionAdd,
  
  kSelectionRemove,
  
  kShow,
  
  kStateChanged,
  
  kTextChanged,
  
  kWindowActivated,
  
  kWindowDeactivated,
  
  kTextSelectionChanged,
  
  kTreeChanged,
  
  kValueChanged,
  kMinValue = 0,
  kMaxValue = 56,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Event value);
inline bool IsKnownEnumValue(Event value) {
  return internal::Event_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Role : int32_t {
  
  kNone,
  
  kAbbr,
  
  kAlert,
  
  kAlertDialog,
  
  kAnchor,
  
  kAnnotation,
  
  kApplication,
  
  kArticle,
  
  kAudio,
  
  kBanner,
  
  kBlockquote,
  
  kButton,
  
  kCanvas,
  
  kCaption,
  
  kCaret,
  
  kCell,
  
  kCheckBox,
  
  kClient,
  
  kColorWell,
  
  kColumn,
  
  kColumnHeader,
  
  kComboBoxGrouping,
  
  kComboBoxMenuButton,
  
  kComplementary,
  
  kContentDeletion,
  
  kContentInsertion,
  
  kContentInfo,
  
  kDate,
  
  kDateTime,
  
  kDefinition,
  
  kDescriptionList,
  
  kDescriptionListDetail,
  
  kDescriptionListTerm,
  
  kDesktop,
  
  kDetails,
  
  kDialog,
  
  kDirectory,
  
  kDisclosureTriangle,
  
  kDocAbstract,
  
  kDocAcknowledgments,
  
  kDocAfterword,
  
  kDocAppendix,
  
  kDocBackLink,
  
  kDocBiblioEntry,
  
  kDocBibliography,
  
  kDocBiblioRef,
  
  kDocChapter,
  
  kDocColophon,
  
  kDocConclusion,
  
  kDocCover,
  
  kDocCredit,
  
  kDocCredits,
  
  kDocDedication,
  
  kDocEndnote,
  
  kDocEndnotes,
  
  kDocEpigraph,
  
  kDocEpilogue,
  
  kDocErrata,
  
  kDocExample,
  
  kDocFootnote,
  
  kDocForeword,
  
  kDocGlossary,
  
  kDocGlossRef,
  
  kDocIndex,
  
  kDocIntroduction,
  
  kDocNoteRef,
  
  kDocNotice,
  
  kDocPageBreak,
  
  kDocPageList,
  
  kDocPart,
  
  kDocPreface,
  
  kDocPrologue,
  
  kDocPullquote,
  
  kDocQna,
  
  kDocSubtitle,
  
  kDocTip,
  
  kDocToc,
  
  kDocument,
  
  kEmbeddedObject,
  
  kFeed,
  
  kFigcaption,
  
  kFigure,
  
  kFooter,
  
  kForm,
  
  kGenericContainer,
  
  kGraphicsDocument,
  
  kGraphicsObject,
  
  kGraphicsSymbol,
  
  kGrid,
  
  kGroup,
  
  kHeading,
  
  kIframe,
  
  kIframePresentational,
  
  kIgnored,
  
  kImage,
  
  kImageMap,
  
  kInlineTextBox,
  
  kInputTime,
  
  kKeyboard,
  
  kLabelText,
  
  kLayoutTable,
  
  kLayoutTableCell,
  
  kLayoutTableColumn,
  
  kLayoutTableRow,
  
  kLegend,
  
  kLineBreak,
  
  kLink,
  
  kList,
  
  kListBox,
  
  kListBoxOption,
  
  kListGrid,
  
  kListItem,
  
  kListMarker,
  
  kLog,
  
  kMain,
  
  kMark,
  
  kMarquee,
  
  kMath,
  
  kMenu,
  
  kMenuBar,
  
  kMenuButton,
  
  kMenuItem,
  
  kMenuItemCheckBox,
  
  kMenuItemRadio,
  
  kMenuListOption,
  
  kMenuListPopup,
  
  kMeter,
  
  kNavigation,
  
  kNote,
  
  kPane,
  
  kParagraph,
  
  kPopUpButton,
  
  kPre,
  
  kPresentational,
  
  kProgressIndicator,
  
  kRadioButton,
  
  kRadioGroup,
  
  kRegion,
  
  kRootWebArea,
  
  kRow,
  
  kRowHeader,
  
  kRuby,
  
  kScrollBar,
  
  kScrollView,
  
  kSearch,
  
  kSearchBox,
  
  kSlider,
  
  kSliderThumb,
  
  kSpinButton,
  
  kSplitter,
  
  kStaticText,
  
  kStatus,
  
  kSvgRoot,
  
  kSwitch,
  
  kTab,
  
  kTabList,
  
  kTabPanel,
  
  kTable,
  
  kTableHeaderContainer,
  
  kTerm,
  
  kTextField,
  
  kTextFieldWithComboBox,
  
  kTime,
  
  kTimer,
  
  kTitleBar,
  
  kToggleButton,
  
  kToolbar,
  
  kTooltip,
  
  kTree,
  
  kTreeGrid,
  
  kTreeItem,
  
  kUnknown,
  
  kVideo,
  
  kWebArea,
  
  kWebView,
  
  kWindow,
  kMinValue = 0,
  kMaxValue = 175,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Role value);
inline bool IsKnownEnumValue(Role value) {
  return internal::Role_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class State : int32_t {
  
  kNone,
  
  kAutofillAvailable,
  
  kCollapsed,
  
  kDefault,
  
  kEditable,
  
  kExpanded,
  
  kFocusable,
  
  kHorizontal,
  
  kHovered,
  
  kIgnored,
  
  kInvisible,
  
  kLinked,
  
  kMultiline,
  
  kMultiselectable,
  
  kProtected,
  
  kRequired,
  
  kRichlyEditable,
  
  kVertical,
  
  kVisited,
  kMinValue = 0,
  kMaxValue = 18,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, State value);
inline bool IsKnownEnumValue(State value) {
  return internal::State_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Action : int32_t {
  
  kNone,
  
  kAnnotatePageImages,
  
  kBlur,
  
  kClearAccessibilityFocus,
  
  kCustomAction,
  
  kDecrement,
  
  kDoDefault,
  
  kFocus,
  
  kGetImageData,
  
  kGetTextLocation,
  
  kHideTooltip,
  
  kHitTest,
  
  kIncrement,
  
  kInternalInvalidateTree,
  
  kLoadInlineTextBoxes,
  
  kReplaceSelectedText,
  
  kScrollBackward,
  
  kScrollDown,
  
  kScrollForward,
  
  kScrollLeft,
  
  kScrollRight,
  
  kScrollUp,
  
  kScrollToMakeVisible,
  
  kScrollToPoint,
  
  kSetAccessibilityFocus,
  
  kSetScrollOffset,
  
  kSetSelection,
  
  kSetSequentialFocusNavigationStartingPoint,
  
  kSetValue,
  
  kShowContextMenu,
  
  kSignalEndOfTest,
  
  kShowTooltip,
  kMinValue = 0,
  kMaxValue = 31,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Action value);
inline bool IsKnownEnumValue(Action value) {
  return internal::Action_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ActionFlags : int32_t {
  
  kNone,
  
  kRequestImages,
  
  kRequestInlineTextBoxes,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, ActionFlags value);
inline bool IsKnownEnumValue(ActionFlags value) {
  return internal::ActionFlags_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DefaultActionVerb : int32_t {
  
  kNone,
  
  kActivate,
  
  kCheck,
  
  kClick,
  
  kClickAncestor,
  
  kJump,
  
  kOpen,
  
  kPress,
  
  kSelect,
  
  kUncheck,
  kMinValue = 0,
  kMaxValue = 9,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, DefaultActionVerb value);
inline bool IsKnownEnumValue(DefaultActionVerb value) {
  return internal::DefaultActionVerb_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Mutation : int32_t {
  
  kNone,
  
  kNodeCreated,
  
  kSubtreeCreated,
  
  kNodeChanged,
  
  kNodeRemoved,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Mutation value);
inline bool IsKnownEnumValue(Mutation value) {
  return internal::Mutation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class StringAttribute : int32_t {
  
  kNone,
  
  kAccessKey,
  
  kAriaInvalidValue,
  
  kAutoComplete,
  
  kChildTreeId,
  
  kClassName,
  
  kContainerLiveRelevant,
  
  kContainerLiveStatus,
  
  kDescription,
  
  kDisplay,
  
  kFontFamily,
  
  kHtmlTag,
  
  kImageAnnotation,
  
  kImageDataUrl,
  
  kInnerHtml,
  
  kKeyShortcuts,
  
  kLanguage,
  
  kName,
  
  kLiveRelevant,
  
  kLiveStatus,
  
  kPlaceholder,
  
  kRole,
  
  kRoleDescription,
  
  kTooltip,
  
  kUrl,
  
  kValue,
  kMinValue = 0,
  kMaxValue = 25,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, StringAttribute value);
inline bool IsKnownEnumValue(StringAttribute value) {
  return internal::StringAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IntAttribute : int32_t {
  
  kNone,
  
  kDefaultActionVerb,
  
  kScrollX,
  
  kScrollXMin,
  
  kScrollXMax,
  
  kScrollY,
  
  kScrollYMin,
  
  kScrollYMax,
  
  kTextSelStart,
  
  kTextSelEnd,
  
  kAriaColumnCount,
  
  kAriaCellColumnIndex,
  
  kAriaRowCount,
  
  kAriaCellRowIndex,
  
  kTableRowCount,
  
  kTableColumnCount,
  
  kTableHeaderId,
  
  kTableRowIndex,
  
  kTableRowHeaderId,
  
  kTableColumnIndex,
  
  kTableColumnHeaderId,
  
  kTableCellColumnIndex,
  
  kTableCellColumnSpan,
  
  kTableCellRowIndex,
  
  kTableCellRowSpan,
  
  kSortDirection,
  
  kHierarchicalLevel,
  
  kNameFrom,
  
  kDescriptionFrom,
  
  kActivedescendantId,
  
  kDetailsId,
  
  kErrormessageId,
  
  kInPageLinkTargetId,
  
  kMemberOfId,
  
  kNextOnLineId,
  
  kPopupForId,
  
  kPreviousOnLineId,
  
  kRestriction,
  
  kSetSize,
  
  kPosInSet,
  
  kColorValue,
  
  kAriaCurrentState,
  
  kBackgroundColor,
  
  kColor,
  
  kHasPopup,
  
  kImageAnnotationStatus,
  
  kInvalidState,
  
  kCheckedState,
  
  kListStyle,
  
  kTextDirection,
  
  kTextPosition,
  
  kTextStyle,
  
  kTextOverlineStyle,
  
  kTextStrikethroughStyle,
  
  kTextUnderlineStyle,
  
  kPreviousFocusId,
  
  kNextFocusId,
  kMinValue = 0,
  kMaxValue = 56,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, IntAttribute value);
inline bool IsKnownEnumValue(IntAttribute value) {
  return internal::IntAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class FloatAttribute : int32_t {
  
  kNone,
  
  kValueForRange,
  
  kMinValueForRange,
  
  kMaxValueForRange,
  
  kStepValueForRange,
  
  kFontSize,
  
  kFontWeight,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, FloatAttribute value);
inline bool IsKnownEnumValue(FloatAttribute value) {
  return internal::FloatAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class BoolAttribute : int32_t {
  
  kNone,
  
  kBusy,
  
  kEditableRoot,
  
  kContainerLiveAtomic,
  
  kContainerLiveBusy,
  
  kLiveAtomic,
  
  kModal,
  
  kUpdateLocationOnly,
  
  kCanvasHasFallback,
  
  kScrollable,
  
  kClickable,
  
  kClipsChildren,
  
  kSelected,
  
  kSupportsTextLocation,
  kMinValue = 0,
  kMaxValue = 13,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, BoolAttribute value);
inline bool IsKnownEnumValue(BoolAttribute value) {
  return internal::BoolAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class IntListAttribute : int32_t {
  
  kNone,
  
  kIndirectChildIds,
  
  kControlsIds,
  
  kDescribedbyIds,
  
  kFlowtoIds,
  
  kLabelledbyIds,
  
  kRadioGroupIds,
  
  kMarkerTypes,
  
  kMarkerStarts,
  
  kMarkerEnds,
  
  kCharacterOffsets,
  
  kCachedLineStarts,
  
  kWordStarts,
  
  kWordEnds,
  
  kCustomActionIds,
  kMinValue = 0,
  kMaxValue = 14,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, IntListAttribute value);
inline bool IsKnownEnumValue(IntListAttribute value) {
  return internal::IntListAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class StringListAttribute : int32_t {
  
  kNone,
  
  kCustomActionDescriptions,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, StringListAttribute value);
inline bool IsKnownEnumValue(StringListAttribute value) {
  return internal::StringListAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class MarkerType : int32_t {
  
  kNone,
  
  kSpelling = 1,
  
  kGrammar = 2,
  
  kSpellingGrammar = 3,
  
  kTextMatch = 4,
  
  kSpellingTextMatch = 5,
  
  kGrammarTextMatch = 6,
  
  kSpellingGrammarTextMatch = 7,
  
  kActiveSuggestion = 16,
  
  kSpellingActiveSuggestion = 17,
  
  kGrammarActiveSuggestion = 18,
  
  kSpellingGrammarActiveSuggestion = 19,
  
  kTextMatchActiveSuggestion = 20,
  
  kSpellingTextMatchActiveSuggestion = 21,
  
  kGrammarTextMatchActiveSuggestion = 22,
  
  kSpellingGrammarTextMatchActiveSuggestion = 23,
  
  kSuggestion = 32,
  
  kSpellingSuggestion = 33,
  
  kGrammarSuggestion = 34,
  
  kSpellingGrammarSuggestion = 35,
  
  kTextMatchSuggestion = 36,
  
  kSpellingTextMatchSuggestion = 37,
  
  kGrammarTextMatchSuggestion = 38,
  
  kSpellingGrammarTextMatchSuggestion = 39,
  
  kActiveSuggestionSuggestion = 48,
  
  kSpellingActiveSuggestionSuggestion = 49,
  
  kGrammarActiveSuggestionSuggestion = 50,
  
  kSpellingGrammarActiveSuggestionSuggestion = 51,
  
  kTextMatchActiveSuggestionSuggestion = 52,
  
  kSpellingTextMatchActiveSuggestionSuggestion = 53,
  
  kGrammarTextMatchActiveSuggestionSuggestion = 54,
  
  kSpellingGrammarTextMatchActiveSuggestionSuggestion = 55,
  kMinValue = 0,
  kMaxValue = 55,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, MarkerType value);
inline bool IsKnownEnumValue(MarkerType value) {
  return internal::MarkerType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ListStyle : int32_t {
  
  kNone,
  
  kCircle,
  
  kDisc,
  
  kImage,
  
  kNumeric,
  
  kSquare,
  
  kOther,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, ListStyle value);
inline bool IsKnownEnumValue(ListStyle value) {
  return internal::ListStyle_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextDirection : int32_t {
  
  kNone,
  
  kLtr,
  
  kRtl,
  
  kTtb,
  
  kBtt,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TextDirection value);
inline bool IsKnownEnumValue(TextDirection value) {
  return internal::TextDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextPosition : int32_t {
  
  kNone,
  
  kSubscript,
  
  kSuperscript,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TextPosition value);
inline bool IsKnownEnumValue(TextPosition value) {
  return internal::TextPosition_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextStyle : int32_t {
  
  kBold,
  
  kItalic,
  
  kUnderline,
  
  kLineThrough,
  
  kOverline,
  
  kNone,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TextStyle value);
inline bool IsKnownEnumValue(TextStyle value) {
  return internal::TextStyle_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextDecorationStyle : int32_t {
  
  kNone,
  
  kDotted,
  
  kDashed,
  
  kSolid,
  
  kDouble,
  
  kWavy,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TextDecorationStyle value);
inline bool IsKnownEnumValue(TextDecorationStyle value) {
  return internal::TextDecorationStyle_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AriaCurrentState : int32_t {
  
  kNone,
  
  kFalse,
  
  kTrue,
  
  kPage,
  
  kStep,
  
  kLocation,
  
  kUnclippedLocation,
  
  kDate,
  
  kTime,
  kMinValue = 0,
  kMaxValue = 8,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, AriaCurrentState value);
inline bool IsKnownEnumValue(AriaCurrentState value) {
  return internal::AriaCurrentState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class HasPopup : int32_t {
  
  kFalse = 0,
  
  kTrue,
  
  kMenu,
  
  kListbox,
  
  kTree,
  
  kGrid,
  
  kDialog,
  
  kNone = HasPopup::kFalse,
  kMinValue = 0,
  kMaxValue = 6,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, HasPopup value);
inline bool IsKnownEnumValue(HasPopup value) {
  return internal::HasPopup_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class InvalidState : int32_t {
  
  kNone,
  
  kFalse,
  
  kTrue,
  
  kSpelling,
  
  kGrammar,
  
  kOther,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, InvalidState value);
inline bool IsKnownEnumValue(InvalidState value) {
  return internal::InvalidState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Restriction : int32_t {
  
  kNone,
  
  kReadOnly,
  
  kDisabled,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Restriction value);
inline bool IsKnownEnumValue(Restriction value) {
  return internal::Restriction_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class CheckedState : int32_t {
  
  kNone,
  
  kFalse,
  
  kTrue,
  
  kMixed,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, CheckedState value);
inline bool IsKnownEnumValue(CheckedState value) {
  return internal::CheckedState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class SortDirection : int32_t {
  
  kNone,
  
  kUnsorted,
  
  kAscending,
  
  kDescending,
  
  kOther,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, SortDirection value);
inline bool IsKnownEnumValue(SortDirection value) {
  return internal::SortDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class NameFrom : int32_t {
  
  kNone,
  
  kUninitialized,
  
  kAttribute,
  
  kAttributeExplicitlyEmpty,
  
  kCaption,
  
  kContents,
  
  kPlaceholder,
  
  kRelatedElement,
  
  kTitle,
  
  kValue,
  kMinValue = 0,
  kMaxValue = 9,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, NameFrom value);
inline bool IsKnownEnumValue(NameFrom value) {
  return internal::NameFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class DescriptionFrom : int32_t {
  
  kNone,
  
  kUninitialized,
  
  kAttribute,
  
  kContents,
  
  kRelatedElement,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, DescriptionFrom value);
inline bool IsKnownEnumValue(DescriptionFrom value) {
  return internal::DescriptionFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventFrom : int32_t {
  
  kNone,
  
  kUser,
  
  kPage,
  
  kAction,
  kMinValue = 0,
  kMaxValue = 3,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, EventFrom value);
inline bool IsKnownEnumValue(EventFrom value) {
  return internal::EventFrom_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class Gesture : int32_t {
  
  kNone,
  
  kClick,
  
  kSwipeLeft1,
  
  kSwipeUp1,
  
  kSwipeRight1,
  
  kSwipeDown1,
  
  kSwipeLeft2,
  
  kSwipeUp2,
  
  kSwipeRight2,
  
  kSwipeDown2,
  
  kSwipeLeft3,
  
  kSwipeUp3,
  
  kSwipeRight3,
  
  kSwipeDown3,
  
  kSwipeLeft4,
  
  kSwipeUp4,
  
  kSwipeRight4,
  
  kSwipeDown4,
  
  kTap2,
  
  kTap3,
  
  kTap4,
  kMinValue = 0,
  kMaxValue = 20,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, Gesture value);
inline bool IsKnownEnumValue(Gesture value) {
  return internal::Gesture_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TextAffinity : int32_t {
  
  kNone,
  
  kDownstream,
  
  kUpstream,
  kMinValue = 0,
  kMaxValue = 2,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TextAffinity value);
inline bool IsKnownEnumValue(TextAffinity value) {
  return internal::TextAffinity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class TreeOrder : int32_t {
  
  kNone,
  
  kUndefined,
  
  kBefore,
  
  kEqual,
  
  kAfter,
  kMinValue = 0,
  kMaxValue = 4,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, TreeOrder value);
inline bool IsKnownEnumValue(TreeOrder value) {
  return internal::TreeOrder_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class AXTreeIDType : int32_t {
  
  kUnknown,
  
  kToken,
  kMinValue = 0,
  kMaxValue = 1,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, AXTreeIDType value);
inline bool IsKnownEnumValue(AXTreeIDType value) {
  return internal::AXTreeIDType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class ImageAnnotationStatus : int32_t {
  
  kNone,
  
  kWillNotAnnotateDueToScheme,
  
  kIneligibleForAnnotation,
  
  kEligibleForAnnotation,
  
  kAnnotationPending,
  
  kAnnotationSucceeded,
  
  kAnnotationEmpty,
  
  kAnnotationAdult,
  
  kAnnotationProcessFailed,
  kMinValue = 0,
  kMaxValue = 8,
};

COMPONENT_EXPORT(UI_ACCESSIBILITY_AX_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, ImageAnnotationStatus value);
inline bool IsKnownEnumValue(ImageAnnotationStatus value) {
  return internal::ImageAnnotationStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ax

namespace std {

template <>
struct hash<::ax::mojom::Event>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Event> {};

template <>
struct hash<::ax::mojom::Role>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Role> {};

template <>
struct hash<::ax::mojom::State>
    : public mojo::internal::EnumHashImpl<::ax::mojom::State> {};

template <>
struct hash<::ax::mojom::Action>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Action> {};

template <>
struct hash<::ax::mojom::ActionFlags>
    : public mojo::internal::EnumHashImpl<::ax::mojom::ActionFlags> {};

template <>
struct hash<::ax::mojom::DefaultActionVerb>
    : public mojo::internal::EnumHashImpl<::ax::mojom::DefaultActionVerb> {};

template <>
struct hash<::ax::mojom::Mutation>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Mutation> {};

template <>
struct hash<::ax::mojom::StringAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::StringAttribute> {};

template <>
struct hash<::ax::mojom::IntAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::IntAttribute> {};

template <>
struct hash<::ax::mojom::FloatAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::FloatAttribute> {};

template <>
struct hash<::ax::mojom::BoolAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::BoolAttribute> {};

template <>
struct hash<::ax::mojom::IntListAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::IntListAttribute> {};

template <>
struct hash<::ax::mojom::StringListAttribute>
    : public mojo::internal::EnumHashImpl<::ax::mojom::StringListAttribute> {};

template <>
struct hash<::ax::mojom::MarkerType>
    : public mojo::internal::EnumHashImpl<::ax::mojom::MarkerType> {};

template <>
struct hash<::ax::mojom::ListStyle>
    : public mojo::internal::EnumHashImpl<::ax::mojom::ListStyle> {};

template <>
struct hash<::ax::mojom::TextDirection>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextDirection> {};

template <>
struct hash<::ax::mojom::TextPosition>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextPosition> {};

template <>
struct hash<::ax::mojom::TextStyle>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextStyle> {};

template <>
struct hash<::ax::mojom::TextDecorationStyle>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextDecorationStyle> {};

template <>
struct hash<::ax::mojom::AriaCurrentState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::AriaCurrentState> {};

template <>
struct hash<::ax::mojom::HasPopup>
    : public mojo::internal::EnumHashImpl<::ax::mojom::HasPopup> {};

template <>
struct hash<::ax::mojom::InvalidState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::InvalidState> {};

template <>
struct hash<::ax::mojom::Restriction>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Restriction> {};

template <>
struct hash<::ax::mojom::CheckedState>
    : public mojo::internal::EnumHashImpl<::ax::mojom::CheckedState> {};

template <>
struct hash<::ax::mojom::SortDirection>
    : public mojo::internal::EnumHashImpl<::ax::mojom::SortDirection> {};

template <>
struct hash<::ax::mojom::NameFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::NameFrom> {};

template <>
struct hash<::ax::mojom::DescriptionFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::DescriptionFrom> {};

template <>
struct hash<::ax::mojom::EventFrom>
    : public mojo::internal::EnumHashImpl<::ax::mojom::EventFrom> {};

template <>
struct hash<::ax::mojom::Gesture>
    : public mojo::internal::EnumHashImpl<::ax::mojom::Gesture> {};

template <>
struct hash<::ax::mojom::TextAffinity>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TextAffinity> {};

template <>
struct hash<::ax::mojom::TreeOrder>
    : public mojo::internal::EnumHashImpl<::ax::mojom::TreeOrder> {};

template <>
struct hash<::ax::mojom::AXTreeIDType>
    : public mojo::internal::EnumHashImpl<::ax::mojom::AXTreeIDType> {};

template <>
struct hash<::ax::mojom::ImageAnnotationStatus>
    : public mojo::internal::EnumHashImpl<::ax::mojom::ImageAnnotationStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ax::mojom::Event, ::ax::mojom::Event> {
  static ::ax::mojom::Event ToMojom(::ax::mojom::Event input) { return input; }
  static bool FromMojom(::ax::mojom::Event input, ::ax::mojom::Event* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Event, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Event, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Event>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Role, ::ax::mojom::Role> {
  static ::ax::mojom::Role ToMojom(::ax::mojom::Role input) { return input; }
  static bool FromMojom(::ax::mojom::Role input, ::ax::mojom::Role* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Role, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Role, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Role>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::State, ::ax::mojom::State> {
  static ::ax::mojom::State ToMojom(::ax::mojom::State input) { return input; }
  static bool FromMojom(::ax::mojom::State input, ::ax::mojom::State* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::State, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::State, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::State>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Action, ::ax::mojom::Action> {
  static ::ax::mojom::Action ToMojom(::ax::mojom::Action input) { return input; }
  static bool FromMojom(::ax::mojom::Action input, ::ax::mojom::Action* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Action, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Action, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Action>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::ActionFlags, ::ax::mojom::ActionFlags> {
  static ::ax::mojom::ActionFlags ToMojom(::ax::mojom::ActionFlags input) { return input; }
  static bool FromMojom(::ax::mojom::ActionFlags input, ::ax::mojom::ActionFlags* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::ActionFlags, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::ActionFlags, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::ActionFlags>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::DefaultActionVerb, ::ax::mojom::DefaultActionVerb> {
  static ::ax::mojom::DefaultActionVerb ToMojom(::ax::mojom::DefaultActionVerb input) { return input; }
  static bool FromMojom(::ax::mojom::DefaultActionVerb input, ::ax::mojom::DefaultActionVerb* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::DefaultActionVerb, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::DefaultActionVerb, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::DefaultActionVerb>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Mutation, ::ax::mojom::Mutation> {
  static ::ax::mojom::Mutation ToMojom(::ax::mojom::Mutation input) { return input; }
  static bool FromMojom(::ax::mojom::Mutation input, ::ax::mojom::Mutation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Mutation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Mutation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Mutation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::StringAttribute, ::ax::mojom::StringAttribute> {
  static ::ax::mojom::StringAttribute ToMojom(::ax::mojom::StringAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::StringAttribute input, ::ax::mojom::StringAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::StringAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::StringAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::StringAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::IntAttribute, ::ax::mojom::IntAttribute> {
  static ::ax::mojom::IntAttribute ToMojom(::ax::mojom::IntAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::IntAttribute input, ::ax::mojom::IntAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::IntAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::IntAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::IntAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::FloatAttribute, ::ax::mojom::FloatAttribute> {
  static ::ax::mojom::FloatAttribute ToMojom(::ax::mojom::FloatAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::FloatAttribute input, ::ax::mojom::FloatAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::FloatAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::FloatAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::FloatAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::BoolAttribute, ::ax::mojom::BoolAttribute> {
  static ::ax::mojom::BoolAttribute ToMojom(::ax::mojom::BoolAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::BoolAttribute input, ::ax::mojom::BoolAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::BoolAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::BoolAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::BoolAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::IntListAttribute, ::ax::mojom::IntListAttribute> {
  static ::ax::mojom::IntListAttribute ToMojom(::ax::mojom::IntListAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::IntListAttribute input, ::ax::mojom::IntListAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::IntListAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::IntListAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::IntListAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::StringListAttribute, ::ax::mojom::StringListAttribute> {
  static ::ax::mojom::StringListAttribute ToMojom(::ax::mojom::StringListAttribute input) { return input; }
  static bool FromMojom(::ax::mojom::StringListAttribute input, ::ax::mojom::StringListAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::StringListAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::StringListAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::StringListAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::MarkerType, ::ax::mojom::MarkerType> {
  static ::ax::mojom::MarkerType ToMojom(::ax::mojom::MarkerType input) { return input; }
  static bool FromMojom(::ax::mojom::MarkerType input, ::ax::mojom::MarkerType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::MarkerType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::MarkerType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::MarkerType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::ListStyle, ::ax::mojom::ListStyle> {
  static ::ax::mojom::ListStyle ToMojom(::ax::mojom::ListStyle input) { return input; }
  static bool FromMojom(::ax::mojom::ListStyle input, ::ax::mojom::ListStyle* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::ListStyle, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::ListStyle, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::ListStyle>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextDirection, ::ax::mojom::TextDirection> {
  static ::ax::mojom::TextDirection ToMojom(::ax::mojom::TextDirection input) { return input; }
  static bool FromMojom(::ax::mojom::TextDirection input, ::ax::mojom::TextDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextPosition, ::ax::mojom::TextPosition> {
  static ::ax::mojom::TextPosition ToMojom(::ax::mojom::TextPosition input) { return input; }
  static bool FromMojom(::ax::mojom::TextPosition input, ::ax::mojom::TextPosition* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextPosition, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextPosition, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextPosition>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextStyle, ::ax::mojom::TextStyle> {
  static ::ax::mojom::TextStyle ToMojom(::ax::mojom::TextStyle input) { return input; }
  static bool FromMojom(::ax::mojom::TextStyle input, ::ax::mojom::TextStyle* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextStyle, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextStyle, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextStyle>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextDecorationStyle, ::ax::mojom::TextDecorationStyle> {
  static ::ax::mojom::TextDecorationStyle ToMojom(::ax::mojom::TextDecorationStyle input) { return input; }
  static bool FromMojom(::ax::mojom::TextDecorationStyle input, ::ax::mojom::TextDecorationStyle* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextDecorationStyle, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextDecorationStyle, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextDecorationStyle>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::AriaCurrentState, ::ax::mojom::AriaCurrentState> {
  static ::ax::mojom::AriaCurrentState ToMojom(::ax::mojom::AriaCurrentState input) { return input; }
  static bool FromMojom(::ax::mojom::AriaCurrentState input, ::ax::mojom::AriaCurrentState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::AriaCurrentState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::AriaCurrentState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::AriaCurrentState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::HasPopup, ::ax::mojom::HasPopup> {
  static ::ax::mojom::HasPopup ToMojom(::ax::mojom::HasPopup input) { return input; }
  static bool FromMojom(::ax::mojom::HasPopup input, ::ax::mojom::HasPopup* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::HasPopup, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::HasPopup, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::HasPopup>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::InvalidState, ::ax::mojom::InvalidState> {
  static ::ax::mojom::InvalidState ToMojom(::ax::mojom::InvalidState input) { return input; }
  static bool FromMojom(::ax::mojom::InvalidState input, ::ax::mojom::InvalidState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::InvalidState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::InvalidState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::InvalidState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Restriction, ::ax::mojom::Restriction> {
  static ::ax::mojom::Restriction ToMojom(::ax::mojom::Restriction input) { return input; }
  static bool FromMojom(::ax::mojom::Restriction input, ::ax::mojom::Restriction* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Restriction, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Restriction, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Restriction>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::CheckedState, ::ax::mojom::CheckedState> {
  static ::ax::mojom::CheckedState ToMojom(::ax::mojom::CheckedState input) { return input; }
  static bool FromMojom(::ax::mojom::CheckedState input, ::ax::mojom::CheckedState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::CheckedState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::CheckedState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::CheckedState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::SortDirection, ::ax::mojom::SortDirection> {
  static ::ax::mojom::SortDirection ToMojom(::ax::mojom::SortDirection input) { return input; }
  static bool FromMojom(::ax::mojom::SortDirection input, ::ax::mojom::SortDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::SortDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::SortDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::SortDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::NameFrom, ::ax::mojom::NameFrom> {
  static ::ax::mojom::NameFrom ToMojom(::ax::mojom::NameFrom input) { return input; }
  static bool FromMojom(::ax::mojom::NameFrom input, ::ax::mojom::NameFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::NameFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::NameFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::NameFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::DescriptionFrom, ::ax::mojom::DescriptionFrom> {
  static ::ax::mojom::DescriptionFrom ToMojom(::ax::mojom::DescriptionFrom input) { return input; }
  static bool FromMojom(::ax::mojom::DescriptionFrom input, ::ax::mojom::DescriptionFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::DescriptionFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::DescriptionFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::DescriptionFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::EventFrom, ::ax::mojom::EventFrom> {
  static ::ax::mojom::EventFrom ToMojom(::ax::mojom::EventFrom input) { return input; }
  static bool FromMojom(::ax::mojom::EventFrom input, ::ax::mojom::EventFrom* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::EventFrom, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::EventFrom, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::EventFrom>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::Gesture, ::ax::mojom::Gesture> {
  static ::ax::mojom::Gesture ToMojom(::ax::mojom::Gesture input) { return input; }
  static bool FromMojom(::ax::mojom::Gesture input, ::ax::mojom::Gesture* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::Gesture, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::Gesture, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::Gesture>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TextAffinity, ::ax::mojom::TextAffinity> {
  static ::ax::mojom::TextAffinity ToMojom(::ax::mojom::TextAffinity input) { return input; }
  static bool FromMojom(::ax::mojom::TextAffinity input, ::ax::mojom::TextAffinity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TextAffinity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TextAffinity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TextAffinity>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::TreeOrder, ::ax::mojom::TreeOrder> {
  static ::ax::mojom::TreeOrder ToMojom(::ax::mojom::TreeOrder input) { return input; }
  static bool FromMojom(::ax::mojom::TreeOrder input, ::ax::mojom::TreeOrder* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::TreeOrder, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::TreeOrder, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::TreeOrder>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::AXTreeIDType, ::ax::mojom::AXTreeIDType> {
  static ::ax::mojom::AXTreeIDType ToMojom(::ax::mojom::AXTreeIDType input) { return input; }
  static bool FromMojom(::ax::mojom::AXTreeIDType input, ::ax::mojom::AXTreeIDType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::AXTreeIDType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::AXTreeIDType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::AXTreeIDType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ax::mojom::ImageAnnotationStatus, ::ax::mojom::ImageAnnotationStatus> {
  static ::ax::mojom::ImageAnnotationStatus ToMojom(::ax::mojom::ImageAnnotationStatus input) { return input; }
  static bool FromMojom(::ax::mojom::ImageAnnotationStatus input, ::ax::mojom::ImageAnnotationStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::ImageAnnotationStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ax::mojom::ImageAnnotationStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ax::mojom::ImageAnnotationStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ax {
namespace mojom {


}  // namespace mojom
}  // namespace ax

#endif  // UI_ACCESSIBILITY_AX_ENUMS_MOJOM_SHARED_H_