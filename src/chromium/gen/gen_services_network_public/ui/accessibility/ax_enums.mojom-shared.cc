// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4065)
#endif

#include "ui/accessibility/ax_enums.mojom-shared.h"

#include <utility>

#include "base/logging.h"
#include "base/stl_util.h"  // for base::size()
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"

#include "ui/accessibility/ax_enums.mojom-params-data.h"
namespace ax {
namespace mojom {

std::ostream& operator<<(std::ostream& os, Event value) {
  switch(value) {
    case Event::kNone:
      return os << "Event::kNone";
    case Event::kActiveDescendantChanged:
      return os << "Event::kActiveDescendantChanged";
    case Event::kAlert:
      return os << "Event::kAlert";
    case Event::kAriaAttributeChanged:
      return os << "Event::kAriaAttributeChanged";
    case Event::kAutocorrectionOccured:
      return os << "Event::kAutocorrectionOccured";
    case Event::kBlur:
      return os << "Event::kBlur";
    case Event::kCheckedStateChanged:
      return os << "Event::kCheckedStateChanged";
    case Event::kChildrenChanged:
      return os << "Event::kChildrenChanged";
    case Event::kClicked:
      return os << "Event::kClicked";
    case Event::kDocumentSelectionChanged:
      return os << "Event::kDocumentSelectionChanged";
    case Event::kDocumentTitleChanged:
      return os << "Event::kDocumentTitleChanged";
    case Event::kEndOfTest:
      return os << "Event::kEndOfTest";
    case Event::kExpandedChanged:
      return os << "Event::kExpandedChanged";
    case Event::kFocus:
      return os << "Event::kFocus";
    case Event::kFocusContext:
      return os << "Event::kFocusContext";
    case Event::kHide:
      return os << "Event::kHide";
    case Event::kHitTestResult:
      return os << "Event::kHitTestResult";
    case Event::kHover:
      return os << "Event::kHover";
    case Event::kImageFrameUpdated:
      return os << "Event::kImageFrameUpdated";
    case Event::kInvalidStatusChanged:
      return os << "Event::kInvalidStatusChanged";
    case Event::kLayoutComplete:
      return os << "Event::kLayoutComplete";
    case Event::kLiveRegionCreated:
      return os << "Event::kLiveRegionCreated";
    case Event::kLiveRegionChanged:
      return os << "Event::kLiveRegionChanged";
    case Event::kLoadComplete:
      return os << "Event::kLoadComplete";
    case Event::kLoadStart:
      return os << "Event::kLoadStart";
    case Event::kLocationChanged:
      return os << "Event::kLocationChanged";
    case Event::kMediaStartedPlaying:
      return os << "Event::kMediaStartedPlaying";
    case Event::kMediaStoppedPlaying:
      return os << "Event::kMediaStoppedPlaying";
    case Event::kMenuEnd:
      return os << "Event::kMenuEnd";
    case Event::kMenuListItemSelected:
      return os << "Event::kMenuListItemSelected";
    case Event::kMenuListValueChanged:
      return os << "Event::kMenuListValueChanged";
    case Event::kMenuPopupEnd:
      return os << "Event::kMenuPopupEnd";
    case Event::kMenuPopupHide:
      return os << "Event::kMenuPopupHide";
    case Event::kMenuPopupStart:
      return os << "Event::kMenuPopupStart";
    case Event::kMenuStart:
      return os << "Event::kMenuStart";
    case Event::kMouseCanceled:
      return os << "Event::kMouseCanceled";
    case Event::kMouseDragged:
      return os << "Event::kMouseDragged";
    case Event::kMouseMoved:
      return os << "Event::kMouseMoved";
    case Event::kMousePressed:
      return os << "Event::kMousePressed";
    case Event::kMouseReleased:
      return os << "Event::kMouseReleased";
    case Event::kRowCollapsed:
      return os << "Event::kRowCollapsed";
    case Event::kRowCountChanged:
      return os << "Event::kRowCountChanged";
    case Event::kRowExpanded:
      return os << "Event::kRowExpanded";
    case Event::kScrollPositionChanged:
      return os << "Event::kScrollPositionChanged";
    case Event::kScrolledToAnchor:
      return os << "Event::kScrolledToAnchor";
    case Event::kSelectedChildrenChanged:
      return os << "Event::kSelectedChildrenChanged";
    case Event::kSelection:
      return os << "Event::kSelection";
    case Event::kSelectionAdd:
      return os << "Event::kSelectionAdd";
    case Event::kSelectionRemove:
      return os << "Event::kSelectionRemove";
    case Event::kShow:
      return os << "Event::kShow";
    case Event::kStateChanged:
      return os << "Event::kStateChanged";
    case Event::kTextChanged:
      return os << "Event::kTextChanged";
    case Event::kWindowActivated:
      return os << "Event::kWindowActivated";
    case Event::kWindowDeactivated:
      return os << "Event::kWindowDeactivated";
    case Event::kTextSelectionChanged:
      return os << "Event::kTextSelectionChanged";
    case Event::kTreeChanged:
      return os << "Event::kTreeChanged";
    case Event::kValueChanged:
      return os << "Event::kValueChanged";
    default:
      return os << "Unknown Event value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Role value) {
  switch(value) {
    case Role::kNone:
      return os << "Role::kNone";
    case Role::kAbbr:
      return os << "Role::kAbbr";
    case Role::kAlert:
      return os << "Role::kAlert";
    case Role::kAlertDialog:
      return os << "Role::kAlertDialog";
    case Role::kAnchor:
      return os << "Role::kAnchor";
    case Role::kAnnotation:
      return os << "Role::kAnnotation";
    case Role::kApplication:
      return os << "Role::kApplication";
    case Role::kArticle:
      return os << "Role::kArticle";
    case Role::kAudio:
      return os << "Role::kAudio";
    case Role::kBanner:
      return os << "Role::kBanner";
    case Role::kBlockquote:
      return os << "Role::kBlockquote";
    case Role::kButton:
      return os << "Role::kButton";
    case Role::kCanvas:
      return os << "Role::kCanvas";
    case Role::kCaption:
      return os << "Role::kCaption";
    case Role::kCaret:
      return os << "Role::kCaret";
    case Role::kCell:
      return os << "Role::kCell";
    case Role::kCheckBox:
      return os << "Role::kCheckBox";
    case Role::kClient:
      return os << "Role::kClient";
    case Role::kColorWell:
      return os << "Role::kColorWell";
    case Role::kColumn:
      return os << "Role::kColumn";
    case Role::kColumnHeader:
      return os << "Role::kColumnHeader";
    case Role::kComboBoxGrouping:
      return os << "Role::kComboBoxGrouping";
    case Role::kComboBoxMenuButton:
      return os << "Role::kComboBoxMenuButton";
    case Role::kComplementary:
      return os << "Role::kComplementary";
    case Role::kContentDeletion:
      return os << "Role::kContentDeletion";
    case Role::kContentInsertion:
      return os << "Role::kContentInsertion";
    case Role::kContentInfo:
      return os << "Role::kContentInfo";
    case Role::kDate:
      return os << "Role::kDate";
    case Role::kDateTime:
      return os << "Role::kDateTime";
    case Role::kDefinition:
      return os << "Role::kDefinition";
    case Role::kDescriptionList:
      return os << "Role::kDescriptionList";
    case Role::kDescriptionListDetail:
      return os << "Role::kDescriptionListDetail";
    case Role::kDescriptionListTerm:
      return os << "Role::kDescriptionListTerm";
    case Role::kDesktop:
      return os << "Role::kDesktop";
    case Role::kDetails:
      return os << "Role::kDetails";
    case Role::kDialog:
      return os << "Role::kDialog";
    case Role::kDirectory:
      return os << "Role::kDirectory";
    case Role::kDisclosureTriangle:
      return os << "Role::kDisclosureTriangle";
    case Role::kDocAbstract:
      return os << "Role::kDocAbstract";
    case Role::kDocAcknowledgments:
      return os << "Role::kDocAcknowledgments";
    case Role::kDocAfterword:
      return os << "Role::kDocAfterword";
    case Role::kDocAppendix:
      return os << "Role::kDocAppendix";
    case Role::kDocBackLink:
      return os << "Role::kDocBackLink";
    case Role::kDocBiblioEntry:
      return os << "Role::kDocBiblioEntry";
    case Role::kDocBibliography:
      return os << "Role::kDocBibliography";
    case Role::kDocBiblioRef:
      return os << "Role::kDocBiblioRef";
    case Role::kDocChapter:
      return os << "Role::kDocChapter";
    case Role::kDocColophon:
      return os << "Role::kDocColophon";
    case Role::kDocConclusion:
      return os << "Role::kDocConclusion";
    case Role::kDocCover:
      return os << "Role::kDocCover";
    case Role::kDocCredit:
      return os << "Role::kDocCredit";
    case Role::kDocCredits:
      return os << "Role::kDocCredits";
    case Role::kDocDedication:
      return os << "Role::kDocDedication";
    case Role::kDocEndnote:
      return os << "Role::kDocEndnote";
    case Role::kDocEndnotes:
      return os << "Role::kDocEndnotes";
    case Role::kDocEpigraph:
      return os << "Role::kDocEpigraph";
    case Role::kDocEpilogue:
      return os << "Role::kDocEpilogue";
    case Role::kDocErrata:
      return os << "Role::kDocErrata";
    case Role::kDocExample:
      return os << "Role::kDocExample";
    case Role::kDocFootnote:
      return os << "Role::kDocFootnote";
    case Role::kDocForeword:
      return os << "Role::kDocForeword";
    case Role::kDocGlossary:
      return os << "Role::kDocGlossary";
    case Role::kDocGlossRef:
      return os << "Role::kDocGlossRef";
    case Role::kDocIndex:
      return os << "Role::kDocIndex";
    case Role::kDocIntroduction:
      return os << "Role::kDocIntroduction";
    case Role::kDocNoteRef:
      return os << "Role::kDocNoteRef";
    case Role::kDocNotice:
      return os << "Role::kDocNotice";
    case Role::kDocPageBreak:
      return os << "Role::kDocPageBreak";
    case Role::kDocPageList:
      return os << "Role::kDocPageList";
    case Role::kDocPart:
      return os << "Role::kDocPart";
    case Role::kDocPreface:
      return os << "Role::kDocPreface";
    case Role::kDocPrologue:
      return os << "Role::kDocPrologue";
    case Role::kDocPullquote:
      return os << "Role::kDocPullquote";
    case Role::kDocQna:
      return os << "Role::kDocQna";
    case Role::kDocSubtitle:
      return os << "Role::kDocSubtitle";
    case Role::kDocTip:
      return os << "Role::kDocTip";
    case Role::kDocToc:
      return os << "Role::kDocToc";
    case Role::kDocument:
      return os << "Role::kDocument";
    case Role::kEmbeddedObject:
      return os << "Role::kEmbeddedObject";
    case Role::kFeed:
      return os << "Role::kFeed";
    case Role::kFigcaption:
      return os << "Role::kFigcaption";
    case Role::kFigure:
      return os << "Role::kFigure";
    case Role::kFooter:
      return os << "Role::kFooter";
    case Role::kForm:
      return os << "Role::kForm";
    case Role::kGenericContainer:
      return os << "Role::kGenericContainer";
    case Role::kGraphicsDocument:
      return os << "Role::kGraphicsDocument";
    case Role::kGraphicsObject:
      return os << "Role::kGraphicsObject";
    case Role::kGraphicsSymbol:
      return os << "Role::kGraphicsSymbol";
    case Role::kGrid:
      return os << "Role::kGrid";
    case Role::kGroup:
      return os << "Role::kGroup";
    case Role::kHeading:
      return os << "Role::kHeading";
    case Role::kIframe:
      return os << "Role::kIframe";
    case Role::kIframePresentational:
      return os << "Role::kIframePresentational";
    case Role::kIgnored:
      return os << "Role::kIgnored";
    case Role::kImage:
      return os << "Role::kImage";
    case Role::kImageMap:
      return os << "Role::kImageMap";
    case Role::kInlineTextBox:
      return os << "Role::kInlineTextBox";
    case Role::kInputTime:
      return os << "Role::kInputTime";
    case Role::kKeyboard:
      return os << "Role::kKeyboard";
    case Role::kLabelText:
      return os << "Role::kLabelText";
    case Role::kLayoutTable:
      return os << "Role::kLayoutTable";
    case Role::kLayoutTableCell:
      return os << "Role::kLayoutTableCell";
    case Role::kLayoutTableColumn:
      return os << "Role::kLayoutTableColumn";
    case Role::kLayoutTableRow:
      return os << "Role::kLayoutTableRow";
    case Role::kLegend:
      return os << "Role::kLegend";
    case Role::kLineBreak:
      return os << "Role::kLineBreak";
    case Role::kLink:
      return os << "Role::kLink";
    case Role::kList:
      return os << "Role::kList";
    case Role::kListBox:
      return os << "Role::kListBox";
    case Role::kListBoxOption:
      return os << "Role::kListBoxOption";
    case Role::kListGrid:
      return os << "Role::kListGrid";
    case Role::kListItem:
      return os << "Role::kListItem";
    case Role::kListMarker:
      return os << "Role::kListMarker";
    case Role::kLog:
      return os << "Role::kLog";
    case Role::kMain:
      return os << "Role::kMain";
    case Role::kMark:
      return os << "Role::kMark";
    case Role::kMarquee:
      return os << "Role::kMarquee";
    case Role::kMath:
      return os << "Role::kMath";
    case Role::kMenu:
      return os << "Role::kMenu";
    case Role::kMenuBar:
      return os << "Role::kMenuBar";
    case Role::kMenuButton:
      return os << "Role::kMenuButton";
    case Role::kMenuItem:
      return os << "Role::kMenuItem";
    case Role::kMenuItemCheckBox:
      return os << "Role::kMenuItemCheckBox";
    case Role::kMenuItemRadio:
      return os << "Role::kMenuItemRadio";
    case Role::kMenuListOption:
      return os << "Role::kMenuListOption";
    case Role::kMenuListPopup:
      return os << "Role::kMenuListPopup";
    case Role::kMeter:
      return os << "Role::kMeter";
    case Role::kNavigation:
      return os << "Role::kNavigation";
    case Role::kNote:
      return os << "Role::kNote";
    case Role::kPane:
      return os << "Role::kPane";
    case Role::kParagraph:
      return os << "Role::kParagraph";
    case Role::kPopUpButton:
      return os << "Role::kPopUpButton";
    case Role::kPre:
      return os << "Role::kPre";
    case Role::kPresentational:
      return os << "Role::kPresentational";
    case Role::kProgressIndicator:
      return os << "Role::kProgressIndicator";
    case Role::kRadioButton:
      return os << "Role::kRadioButton";
    case Role::kRadioGroup:
      return os << "Role::kRadioGroup";
    case Role::kRegion:
      return os << "Role::kRegion";
    case Role::kRootWebArea:
      return os << "Role::kRootWebArea";
    case Role::kRow:
      return os << "Role::kRow";
    case Role::kRowHeader:
      return os << "Role::kRowHeader";
    case Role::kRuby:
      return os << "Role::kRuby";
    case Role::kScrollBar:
      return os << "Role::kScrollBar";
    case Role::kScrollView:
      return os << "Role::kScrollView";
    case Role::kSearch:
      return os << "Role::kSearch";
    case Role::kSearchBox:
      return os << "Role::kSearchBox";
    case Role::kSlider:
      return os << "Role::kSlider";
    case Role::kSliderThumb:
      return os << "Role::kSliderThumb";
    case Role::kSpinButton:
      return os << "Role::kSpinButton";
    case Role::kSplitter:
      return os << "Role::kSplitter";
    case Role::kStaticText:
      return os << "Role::kStaticText";
    case Role::kStatus:
      return os << "Role::kStatus";
    case Role::kSvgRoot:
      return os << "Role::kSvgRoot";
    case Role::kSwitch:
      return os << "Role::kSwitch";
    case Role::kTab:
      return os << "Role::kTab";
    case Role::kTabList:
      return os << "Role::kTabList";
    case Role::kTabPanel:
      return os << "Role::kTabPanel";
    case Role::kTable:
      return os << "Role::kTable";
    case Role::kTableHeaderContainer:
      return os << "Role::kTableHeaderContainer";
    case Role::kTerm:
      return os << "Role::kTerm";
    case Role::kTextField:
      return os << "Role::kTextField";
    case Role::kTextFieldWithComboBox:
      return os << "Role::kTextFieldWithComboBox";
    case Role::kTime:
      return os << "Role::kTime";
    case Role::kTimer:
      return os << "Role::kTimer";
    case Role::kTitleBar:
      return os << "Role::kTitleBar";
    case Role::kToggleButton:
      return os << "Role::kToggleButton";
    case Role::kToolbar:
      return os << "Role::kToolbar";
    case Role::kTooltip:
      return os << "Role::kTooltip";
    case Role::kTree:
      return os << "Role::kTree";
    case Role::kTreeGrid:
      return os << "Role::kTreeGrid";
    case Role::kTreeItem:
      return os << "Role::kTreeItem";
    case Role::kUnknown:
      return os << "Role::kUnknown";
    case Role::kVideo:
      return os << "Role::kVideo";
    case Role::kWebArea:
      return os << "Role::kWebArea";
    case Role::kWebView:
      return os << "Role::kWebView";
    case Role::kWindow:
      return os << "Role::kWindow";
    default:
      return os << "Unknown Role value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, State value) {
  switch(value) {
    case State::kNone:
      return os << "State::kNone";
    case State::kAutofillAvailable:
      return os << "State::kAutofillAvailable";
    case State::kCollapsed:
      return os << "State::kCollapsed";
    case State::kDefault:
      return os << "State::kDefault";
    case State::kEditable:
      return os << "State::kEditable";
    case State::kExpanded:
      return os << "State::kExpanded";
    case State::kFocusable:
      return os << "State::kFocusable";
    case State::kHorizontal:
      return os << "State::kHorizontal";
    case State::kHovered:
      return os << "State::kHovered";
    case State::kIgnored:
      return os << "State::kIgnored";
    case State::kInvisible:
      return os << "State::kInvisible";
    case State::kLinked:
      return os << "State::kLinked";
    case State::kMultiline:
      return os << "State::kMultiline";
    case State::kMultiselectable:
      return os << "State::kMultiselectable";
    case State::kProtected:
      return os << "State::kProtected";
    case State::kRequired:
      return os << "State::kRequired";
    case State::kRichlyEditable:
      return os << "State::kRichlyEditable";
    case State::kVertical:
      return os << "State::kVertical";
    case State::kVisited:
      return os << "State::kVisited";
    default:
      return os << "Unknown State value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Action value) {
  switch(value) {
    case Action::kNone:
      return os << "Action::kNone";
    case Action::kAnnotatePageImages:
      return os << "Action::kAnnotatePageImages";
    case Action::kBlur:
      return os << "Action::kBlur";
    case Action::kClearAccessibilityFocus:
      return os << "Action::kClearAccessibilityFocus";
    case Action::kCustomAction:
      return os << "Action::kCustomAction";
    case Action::kDecrement:
      return os << "Action::kDecrement";
    case Action::kDoDefault:
      return os << "Action::kDoDefault";
    case Action::kFocus:
      return os << "Action::kFocus";
    case Action::kGetImageData:
      return os << "Action::kGetImageData";
    case Action::kGetTextLocation:
      return os << "Action::kGetTextLocation";
    case Action::kHideTooltip:
      return os << "Action::kHideTooltip";
    case Action::kHitTest:
      return os << "Action::kHitTest";
    case Action::kIncrement:
      return os << "Action::kIncrement";
    case Action::kInternalInvalidateTree:
      return os << "Action::kInternalInvalidateTree";
    case Action::kLoadInlineTextBoxes:
      return os << "Action::kLoadInlineTextBoxes";
    case Action::kReplaceSelectedText:
      return os << "Action::kReplaceSelectedText";
    case Action::kScrollBackward:
      return os << "Action::kScrollBackward";
    case Action::kScrollDown:
      return os << "Action::kScrollDown";
    case Action::kScrollForward:
      return os << "Action::kScrollForward";
    case Action::kScrollLeft:
      return os << "Action::kScrollLeft";
    case Action::kScrollRight:
      return os << "Action::kScrollRight";
    case Action::kScrollUp:
      return os << "Action::kScrollUp";
    case Action::kScrollToMakeVisible:
      return os << "Action::kScrollToMakeVisible";
    case Action::kScrollToPoint:
      return os << "Action::kScrollToPoint";
    case Action::kSetAccessibilityFocus:
      return os << "Action::kSetAccessibilityFocus";
    case Action::kSetScrollOffset:
      return os << "Action::kSetScrollOffset";
    case Action::kSetSelection:
      return os << "Action::kSetSelection";
    case Action::kSetSequentialFocusNavigationStartingPoint:
      return os << "Action::kSetSequentialFocusNavigationStartingPoint";
    case Action::kSetValue:
      return os << "Action::kSetValue";
    case Action::kShowContextMenu:
      return os << "Action::kShowContextMenu";
    case Action::kSignalEndOfTest:
      return os << "Action::kSignalEndOfTest";
    case Action::kShowTooltip:
      return os << "Action::kShowTooltip";
    default:
      return os << "Unknown Action value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ActionFlags value) {
  switch(value) {
    case ActionFlags::kNone:
      return os << "ActionFlags::kNone";
    case ActionFlags::kRequestImages:
      return os << "ActionFlags::kRequestImages";
    case ActionFlags::kRequestInlineTextBoxes:
      return os << "ActionFlags::kRequestInlineTextBoxes";
    default:
      return os << "Unknown ActionFlags value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, DefaultActionVerb value) {
  switch(value) {
    case DefaultActionVerb::kNone:
      return os << "DefaultActionVerb::kNone";
    case DefaultActionVerb::kActivate:
      return os << "DefaultActionVerb::kActivate";
    case DefaultActionVerb::kCheck:
      return os << "DefaultActionVerb::kCheck";
    case DefaultActionVerb::kClick:
      return os << "DefaultActionVerb::kClick";
    case DefaultActionVerb::kClickAncestor:
      return os << "DefaultActionVerb::kClickAncestor";
    case DefaultActionVerb::kJump:
      return os << "DefaultActionVerb::kJump";
    case DefaultActionVerb::kOpen:
      return os << "DefaultActionVerb::kOpen";
    case DefaultActionVerb::kPress:
      return os << "DefaultActionVerb::kPress";
    case DefaultActionVerb::kSelect:
      return os << "DefaultActionVerb::kSelect";
    case DefaultActionVerb::kUncheck:
      return os << "DefaultActionVerb::kUncheck";
    default:
      return os << "Unknown DefaultActionVerb value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Mutation value) {
  switch(value) {
    case Mutation::kNone:
      return os << "Mutation::kNone";
    case Mutation::kNodeCreated:
      return os << "Mutation::kNodeCreated";
    case Mutation::kSubtreeCreated:
      return os << "Mutation::kSubtreeCreated";
    case Mutation::kNodeChanged:
      return os << "Mutation::kNodeChanged";
    case Mutation::kNodeRemoved:
      return os << "Mutation::kNodeRemoved";
    default:
      return os << "Unknown Mutation value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, StringAttribute value) {
  switch(value) {
    case StringAttribute::kNone:
      return os << "StringAttribute::kNone";
    case StringAttribute::kAccessKey:
      return os << "StringAttribute::kAccessKey";
    case StringAttribute::kAriaInvalidValue:
      return os << "StringAttribute::kAriaInvalidValue";
    case StringAttribute::kAutoComplete:
      return os << "StringAttribute::kAutoComplete";
    case StringAttribute::kChildTreeId:
      return os << "StringAttribute::kChildTreeId";
    case StringAttribute::kClassName:
      return os << "StringAttribute::kClassName";
    case StringAttribute::kContainerLiveRelevant:
      return os << "StringAttribute::kContainerLiveRelevant";
    case StringAttribute::kContainerLiveStatus:
      return os << "StringAttribute::kContainerLiveStatus";
    case StringAttribute::kDescription:
      return os << "StringAttribute::kDescription";
    case StringAttribute::kDisplay:
      return os << "StringAttribute::kDisplay";
    case StringAttribute::kFontFamily:
      return os << "StringAttribute::kFontFamily";
    case StringAttribute::kHtmlTag:
      return os << "StringAttribute::kHtmlTag";
    case StringAttribute::kImageAnnotation:
      return os << "StringAttribute::kImageAnnotation";
    case StringAttribute::kImageDataUrl:
      return os << "StringAttribute::kImageDataUrl";
    case StringAttribute::kInnerHtml:
      return os << "StringAttribute::kInnerHtml";
    case StringAttribute::kKeyShortcuts:
      return os << "StringAttribute::kKeyShortcuts";
    case StringAttribute::kLanguage:
      return os << "StringAttribute::kLanguage";
    case StringAttribute::kName:
      return os << "StringAttribute::kName";
    case StringAttribute::kLiveRelevant:
      return os << "StringAttribute::kLiveRelevant";
    case StringAttribute::kLiveStatus:
      return os << "StringAttribute::kLiveStatus";
    case StringAttribute::kPlaceholder:
      return os << "StringAttribute::kPlaceholder";
    case StringAttribute::kRole:
      return os << "StringAttribute::kRole";
    case StringAttribute::kRoleDescription:
      return os << "StringAttribute::kRoleDescription";
    case StringAttribute::kTooltip:
      return os << "StringAttribute::kTooltip";
    case StringAttribute::kUrl:
      return os << "StringAttribute::kUrl";
    case StringAttribute::kValue:
      return os << "StringAttribute::kValue";
    default:
      return os << "Unknown StringAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, IntAttribute value) {
  switch(value) {
    case IntAttribute::kNone:
      return os << "IntAttribute::kNone";
    case IntAttribute::kDefaultActionVerb:
      return os << "IntAttribute::kDefaultActionVerb";
    case IntAttribute::kScrollX:
      return os << "IntAttribute::kScrollX";
    case IntAttribute::kScrollXMin:
      return os << "IntAttribute::kScrollXMin";
    case IntAttribute::kScrollXMax:
      return os << "IntAttribute::kScrollXMax";
    case IntAttribute::kScrollY:
      return os << "IntAttribute::kScrollY";
    case IntAttribute::kScrollYMin:
      return os << "IntAttribute::kScrollYMin";
    case IntAttribute::kScrollYMax:
      return os << "IntAttribute::kScrollYMax";
    case IntAttribute::kTextSelStart:
      return os << "IntAttribute::kTextSelStart";
    case IntAttribute::kTextSelEnd:
      return os << "IntAttribute::kTextSelEnd";
    case IntAttribute::kAriaColumnCount:
      return os << "IntAttribute::kAriaColumnCount";
    case IntAttribute::kAriaCellColumnIndex:
      return os << "IntAttribute::kAriaCellColumnIndex";
    case IntAttribute::kAriaRowCount:
      return os << "IntAttribute::kAriaRowCount";
    case IntAttribute::kAriaCellRowIndex:
      return os << "IntAttribute::kAriaCellRowIndex";
    case IntAttribute::kTableRowCount:
      return os << "IntAttribute::kTableRowCount";
    case IntAttribute::kTableColumnCount:
      return os << "IntAttribute::kTableColumnCount";
    case IntAttribute::kTableHeaderId:
      return os << "IntAttribute::kTableHeaderId";
    case IntAttribute::kTableRowIndex:
      return os << "IntAttribute::kTableRowIndex";
    case IntAttribute::kTableRowHeaderId:
      return os << "IntAttribute::kTableRowHeaderId";
    case IntAttribute::kTableColumnIndex:
      return os << "IntAttribute::kTableColumnIndex";
    case IntAttribute::kTableColumnHeaderId:
      return os << "IntAttribute::kTableColumnHeaderId";
    case IntAttribute::kTableCellColumnIndex:
      return os << "IntAttribute::kTableCellColumnIndex";
    case IntAttribute::kTableCellColumnSpan:
      return os << "IntAttribute::kTableCellColumnSpan";
    case IntAttribute::kTableCellRowIndex:
      return os << "IntAttribute::kTableCellRowIndex";
    case IntAttribute::kTableCellRowSpan:
      return os << "IntAttribute::kTableCellRowSpan";
    case IntAttribute::kSortDirection:
      return os << "IntAttribute::kSortDirection";
    case IntAttribute::kHierarchicalLevel:
      return os << "IntAttribute::kHierarchicalLevel";
    case IntAttribute::kNameFrom:
      return os << "IntAttribute::kNameFrom";
    case IntAttribute::kDescriptionFrom:
      return os << "IntAttribute::kDescriptionFrom";
    case IntAttribute::kActivedescendantId:
      return os << "IntAttribute::kActivedescendantId";
    case IntAttribute::kDetailsId:
      return os << "IntAttribute::kDetailsId";
    case IntAttribute::kErrormessageId:
      return os << "IntAttribute::kErrormessageId";
    case IntAttribute::kInPageLinkTargetId:
      return os << "IntAttribute::kInPageLinkTargetId";
    case IntAttribute::kMemberOfId:
      return os << "IntAttribute::kMemberOfId";
    case IntAttribute::kNextOnLineId:
      return os << "IntAttribute::kNextOnLineId";
    case IntAttribute::kPopupForId:
      return os << "IntAttribute::kPopupForId";
    case IntAttribute::kPreviousOnLineId:
      return os << "IntAttribute::kPreviousOnLineId";
    case IntAttribute::kRestriction:
      return os << "IntAttribute::kRestriction";
    case IntAttribute::kSetSize:
      return os << "IntAttribute::kSetSize";
    case IntAttribute::kPosInSet:
      return os << "IntAttribute::kPosInSet";
    case IntAttribute::kColorValue:
      return os << "IntAttribute::kColorValue";
    case IntAttribute::kAriaCurrentState:
      return os << "IntAttribute::kAriaCurrentState";
    case IntAttribute::kBackgroundColor:
      return os << "IntAttribute::kBackgroundColor";
    case IntAttribute::kColor:
      return os << "IntAttribute::kColor";
    case IntAttribute::kHasPopup:
      return os << "IntAttribute::kHasPopup";
    case IntAttribute::kImageAnnotationStatus:
      return os << "IntAttribute::kImageAnnotationStatus";
    case IntAttribute::kInvalidState:
      return os << "IntAttribute::kInvalidState";
    case IntAttribute::kCheckedState:
      return os << "IntAttribute::kCheckedState";
    case IntAttribute::kListStyle:
      return os << "IntAttribute::kListStyle";
    case IntAttribute::kTextDirection:
      return os << "IntAttribute::kTextDirection";
    case IntAttribute::kTextPosition:
      return os << "IntAttribute::kTextPosition";
    case IntAttribute::kTextStyle:
      return os << "IntAttribute::kTextStyle";
    case IntAttribute::kTextOverlineStyle:
      return os << "IntAttribute::kTextOverlineStyle";
    case IntAttribute::kTextStrikethroughStyle:
      return os << "IntAttribute::kTextStrikethroughStyle";
    case IntAttribute::kTextUnderlineStyle:
      return os << "IntAttribute::kTextUnderlineStyle";
    case IntAttribute::kPreviousFocusId:
      return os << "IntAttribute::kPreviousFocusId";
    case IntAttribute::kNextFocusId:
      return os << "IntAttribute::kNextFocusId";
    default:
      return os << "Unknown IntAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, FloatAttribute value) {
  switch(value) {
    case FloatAttribute::kNone:
      return os << "FloatAttribute::kNone";
    case FloatAttribute::kValueForRange:
      return os << "FloatAttribute::kValueForRange";
    case FloatAttribute::kMinValueForRange:
      return os << "FloatAttribute::kMinValueForRange";
    case FloatAttribute::kMaxValueForRange:
      return os << "FloatAttribute::kMaxValueForRange";
    case FloatAttribute::kStepValueForRange:
      return os << "FloatAttribute::kStepValueForRange";
    case FloatAttribute::kFontSize:
      return os << "FloatAttribute::kFontSize";
    case FloatAttribute::kFontWeight:
      return os << "FloatAttribute::kFontWeight";
    default:
      return os << "Unknown FloatAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, BoolAttribute value) {
  switch(value) {
    case BoolAttribute::kNone:
      return os << "BoolAttribute::kNone";
    case BoolAttribute::kBusy:
      return os << "BoolAttribute::kBusy";
    case BoolAttribute::kEditableRoot:
      return os << "BoolAttribute::kEditableRoot";
    case BoolAttribute::kContainerLiveAtomic:
      return os << "BoolAttribute::kContainerLiveAtomic";
    case BoolAttribute::kContainerLiveBusy:
      return os << "BoolAttribute::kContainerLiveBusy";
    case BoolAttribute::kLiveAtomic:
      return os << "BoolAttribute::kLiveAtomic";
    case BoolAttribute::kModal:
      return os << "BoolAttribute::kModal";
    case BoolAttribute::kUpdateLocationOnly:
      return os << "BoolAttribute::kUpdateLocationOnly";
    case BoolAttribute::kCanvasHasFallback:
      return os << "BoolAttribute::kCanvasHasFallback";
    case BoolAttribute::kScrollable:
      return os << "BoolAttribute::kScrollable";
    case BoolAttribute::kClickable:
      return os << "BoolAttribute::kClickable";
    case BoolAttribute::kClipsChildren:
      return os << "BoolAttribute::kClipsChildren";
    case BoolAttribute::kSelected:
      return os << "BoolAttribute::kSelected";
    case BoolAttribute::kSupportsTextLocation:
      return os << "BoolAttribute::kSupportsTextLocation";
    default:
      return os << "Unknown BoolAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, IntListAttribute value) {
  switch(value) {
    case IntListAttribute::kNone:
      return os << "IntListAttribute::kNone";
    case IntListAttribute::kIndirectChildIds:
      return os << "IntListAttribute::kIndirectChildIds";
    case IntListAttribute::kControlsIds:
      return os << "IntListAttribute::kControlsIds";
    case IntListAttribute::kDescribedbyIds:
      return os << "IntListAttribute::kDescribedbyIds";
    case IntListAttribute::kFlowtoIds:
      return os << "IntListAttribute::kFlowtoIds";
    case IntListAttribute::kLabelledbyIds:
      return os << "IntListAttribute::kLabelledbyIds";
    case IntListAttribute::kRadioGroupIds:
      return os << "IntListAttribute::kRadioGroupIds";
    case IntListAttribute::kMarkerTypes:
      return os << "IntListAttribute::kMarkerTypes";
    case IntListAttribute::kMarkerStarts:
      return os << "IntListAttribute::kMarkerStarts";
    case IntListAttribute::kMarkerEnds:
      return os << "IntListAttribute::kMarkerEnds";
    case IntListAttribute::kCharacterOffsets:
      return os << "IntListAttribute::kCharacterOffsets";
    case IntListAttribute::kCachedLineStarts:
      return os << "IntListAttribute::kCachedLineStarts";
    case IntListAttribute::kWordStarts:
      return os << "IntListAttribute::kWordStarts";
    case IntListAttribute::kWordEnds:
      return os << "IntListAttribute::kWordEnds";
    case IntListAttribute::kCustomActionIds:
      return os << "IntListAttribute::kCustomActionIds";
    default:
      return os << "Unknown IntListAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, StringListAttribute value) {
  switch(value) {
    case StringListAttribute::kNone:
      return os << "StringListAttribute::kNone";
    case StringListAttribute::kCustomActionDescriptions:
      return os << "StringListAttribute::kCustomActionDescriptions";
    default:
      return os << "Unknown StringListAttribute value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, MarkerType value) {
  switch(value) {
    case MarkerType::kNone:
      return os << "MarkerType::kNone";
    case MarkerType::kSpelling:
      return os << "MarkerType::kSpelling";
    case MarkerType::kGrammar:
      return os << "MarkerType::kGrammar";
    case MarkerType::kSpellingGrammar:
      return os << "MarkerType::kSpellingGrammar";
    case MarkerType::kTextMatch:
      return os << "MarkerType::kTextMatch";
    case MarkerType::kSpellingTextMatch:
      return os << "MarkerType::kSpellingTextMatch";
    case MarkerType::kGrammarTextMatch:
      return os << "MarkerType::kGrammarTextMatch";
    case MarkerType::kSpellingGrammarTextMatch:
      return os << "MarkerType::kSpellingGrammarTextMatch";
    case MarkerType::kActiveSuggestion:
      return os << "MarkerType::kActiveSuggestion";
    case MarkerType::kSpellingActiveSuggestion:
      return os << "MarkerType::kSpellingActiveSuggestion";
    case MarkerType::kGrammarActiveSuggestion:
      return os << "MarkerType::kGrammarActiveSuggestion";
    case MarkerType::kSpellingGrammarActiveSuggestion:
      return os << "MarkerType::kSpellingGrammarActiveSuggestion";
    case MarkerType::kTextMatchActiveSuggestion:
      return os << "MarkerType::kTextMatchActiveSuggestion";
    case MarkerType::kSpellingTextMatchActiveSuggestion:
      return os << "MarkerType::kSpellingTextMatchActiveSuggestion";
    case MarkerType::kGrammarTextMatchActiveSuggestion:
      return os << "MarkerType::kGrammarTextMatchActiveSuggestion";
    case MarkerType::kSpellingGrammarTextMatchActiveSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchActiveSuggestion";
    case MarkerType::kSuggestion:
      return os << "MarkerType::kSuggestion";
    case MarkerType::kSpellingSuggestion:
      return os << "MarkerType::kSpellingSuggestion";
    case MarkerType::kGrammarSuggestion:
      return os << "MarkerType::kGrammarSuggestion";
    case MarkerType::kSpellingGrammarSuggestion:
      return os << "MarkerType::kSpellingGrammarSuggestion";
    case MarkerType::kTextMatchSuggestion:
      return os << "MarkerType::kTextMatchSuggestion";
    case MarkerType::kSpellingTextMatchSuggestion:
      return os << "MarkerType::kSpellingTextMatchSuggestion";
    case MarkerType::kGrammarTextMatchSuggestion:
      return os << "MarkerType::kGrammarTextMatchSuggestion";
    case MarkerType::kSpellingGrammarTextMatchSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchSuggestion";
    case MarkerType::kActiveSuggestionSuggestion:
      return os << "MarkerType::kActiveSuggestionSuggestion";
    case MarkerType::kSpellingActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingActiveSuggestionSuggestion";
    case MarkerType::kGrammarActiveSuggestionSuggestion:
      return os << "MarkerType::kGrammarActiveSuggestionSuggestion";
    case MarkerType::kSpellingGrammarActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingGrammarActiveSuggestionSuggestion";
    case MarkerType::kTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kTextMatchActiveSuggestionSuggestion";
    case MarkerType::kSpellingTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingTextMatchActiveSuggestionSuggestion";
    case MarkerType::kGrammarTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kGrammarTextMatchActiveSuggestionSuggestion";
    case MarkerType::kSpellingGrammarTextMatchActiveSuggestionSuggestion:
      return os << "MarkerType::kSpellingGrammarTextMatchActiveSuggestionSuggestion";
    default:
      return os << "Unknown MarkerType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ListStyle value) {
  switch(value) {
    case ListStyle::kNone:
      return os << "ListStyle::kNone";
    case ListStyle::kCircle:
      return os << "ListStyle::kCircle";
    case ListStyle::kDisc:
      return os << "ListStyle::kDisc";
    case ListStyle::kImage:
      return os << "ListStyle::kImage";
    case ListStyle::kNumeric:
      return os << "ListStyle::kNumeric";
    case ListStyle::kSquare:
      return os << "ListStyle::kSquare";
    case ListStyle::kOther:
      return os << "ListStyle::kOther";
    default:
      return os << "Unknown ListStyle value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextDirection value) {
  switch(value) {
    case TextDirection::kNone:
      return os << "TextDirection::kNone";
    case TextDirection::kLtr:
      return os << "TextDirection::kLtr";
    case TextDirection::kRtl:
      return os << "TextDirection::kRtl";
    case TextDirection::kTtb:
      return os << "TextDirection::kTtb";
    case TextDirection::kBtt:
      return os << "TextDirection::kBtt";
    default:
      return os << "Unknown TextDirection value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextPosition value) {
  switch(value) {
    case TextPosition::kNone:
      return os << "TextPosition::kNone";
    case TextPosition::kSubscript:
      return os << "TextPosition::kSubscript";
    case TextPosition::kSuperscript:
      return os << "TextPosition::kSuperscript";
    default:
      return os << "Unknown TextPosition value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextStyle value) {
  switch(value) {
    case TextStyle::kBold:
      return os << "TextStyle::kBold";
    case TextStyle::kItalic:
      return os << "TextStyle::kItalic";
    case TextStyle::kUnderline:
      return os << "TextStyle::kUnderline";
    case TextStyle::kLineThrough:
      return os << "TextStyle::kLineThrough";
    case TextStyle::kOverline:
      return os << "TextStyle::kOverline";
    case TextStyle::kNone:
      return os << "TextStyle::kNone";
    default:
      return os << "Unknown TextStyle value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextDecorationStyle value) {
  switch(value) {
    case TextDecorationStyle::kNone:
      return os << "TextDecorationStyle::kNone";
    case TextDecorationStyle::kDotted:
      return os << "TextDecorationStyle::kDotted";
    case TextDecorationStyle::kDashed:
      return os << "TextDecorationStyle::kDashed";
    case TextDecorationStyle::kSolid:
      return os << "TextDecorationStyle::kSolid";
    case TextDecorationStyle::kDouble:
      return os << "TextDecorationStyle::kDouble";
    case TextDecorationStyle::kWavy:
      return os << "TextDecorationStyle::kWavy";
    default:
      return os << "Unknown TextDecorationStyle value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AriaCurrentState value) {
  switch(value) {
    case AriaCurrentState::kNone:
      return os << "AriaCurrentState::kNone";
    case AriaCurrentState::kFalse:
      return os << "AriaCurrentState::kFalse";
    case AriaCurrentState::kTrue:
      return os << "AriaCurrentState::kTrue";
    case AriaCurrentState::kPage:
      return os << "AriaCurrentState::kPage";
    case AriaCurrentState::kStep:
      return os << "AriaCurrentState::kStep";
    case AriaCurrentState::kLocation:
      return os << "AriaCurrentState::kLocation";
    case AriaCurrentState::kUnclippedLocation:
      return os << "AriaCurrentState::kUnclippedLocation";
    case AriaCurrentState::kDate:
      return os << "AriaCurrentState::kDate";
    case AriaCurrentState::kTime:
      return os << "AriaCurrentState::kTime";
    default:
      return os << "Unknown AriaCurrentState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, HasPopup value) {
  switch(value) {
    case HasPopup::kFalse:
      return os << "HasPopup::{kFalse, kNone}";
    case HasPopup::kTrue:
      return os << "HasPopup::kTrue";
    case HasPopup::kMenu:
      return os << "HasPopup::kMenu";
    case HasPopup::kListbox:
      return os << "HasPopup::kListbox";
    case HasPopup::kTree:
      return os << "HasPopup::kTree";
    case HasPopup::kGrid:
      return os << "HasPopup::kGrid";
    case HasPopup::kDialog:
      return os << "HasPopup::kDialog";
    default:
      return os << "Unknown HasPopup value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, InvalidState value) {
  switch(value) {
    case InvalidState::kNone:
      return os << "InvalidState::kNone";
    case InvalidState::kFalse:
      return os << "InvalidState::kFalse";
    case InvalidState::kTrue:
      return os << "InvalidState::kTrue";
    case InvalidState::kSpelling:
      return os << "InvalidState::kSpelling";
    case InvalidState::kGrammar:
      return os << "InvalidState::kGrammar";
    case InvalidState::kOther:
      return os << "InvalidState::kOther";
    default:
      return os << "Unknown InvalidState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Restriction value) {
  switch(value) {
    case Restriction::kNone:
      return os << "Restriction::kNone";
    case Restriction::kReadOnly:
      return os << "Restriction::kReadOnly";
    case Restriction::kDisabled:
      return os << "Restriction::kDisabled";
    default:
      return os << "Unknown Restriction value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, CheckedState value) {
  switch(value) {
    case CheckedState::kNone:
      return os << "CheckedState::kNone";
    case CheckedState::kFalse:
      return os << "CheckedState::kFalse";
    case CheckedState::kTrue:
      return os << "CheckedState::kTrue";
    case CheckedState::kMixed:
      return os << "CheckedState::kMixed";
    default:
      return os << "Unknown CheckedState value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, SortDirection value) {
  switch(value) {
    case SortDirection::kNone:
      return os << "SortDirection::kNone";
    case SortDirection::kUnsorted:
      return os << "SortDirection::kUnsorted";
    case SortDirection::kAscending:
      return os << "SortDirection::kAscending";
    case SortDirection::kDescending:
      return os << "SortDirection::kDescending";
    case SortDirection::kOther:
      return os << "SortDirection::kOther";
    default:
      return os << "Unknown SortDirection value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, NameFrom value) {
  switch(value) {
    case NameFrom::kNone:
      return os << "NameFrom::kNone";
    case NameFrom::kUninitialized:
      return os << "NameFrom::kUninitialized";
    case NameFrom::kAttribute:
      return os << "NameFrom::kAttribute";
    case NameFrom::kAttributeExplicitlyEmpty:
      return os << "NameFrom::kAttributeExplicitlyEmpty";
    case NameFrom::kCaption:
      return os << "NameFrom::kCaption";
    case NameFrom::kContents:
      return os << "NameFrom::kContents";
    case NameFrom::kPlaceholder:
      return os << "NameFrom::kPlaceholder";
    case NameFrom::kRelatedElement:
      return os << "NameFrom::kRelatedElement";
    case NameFrom::kTitle:
      return os << "NameFrom::kTitle";
    case NameFrom::kValue:
      return os << "NameFrom::kValue";
    default:
      return os << "Unknown NameFrom value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, DescriptionFrom value) {
  switch(value) {
    case DescriptionFrom::kNone:
      return os << "DescriptionFrom::kNone";
    case DescriptionFrom::kUninitialized:
      return os << "DescriptionFrom::kUninitialized";
    case DescriptionFrom::kAttribute:
      return os << "DescriptionFrom::kAttribute";
    case DescriptionFrom::kContents:
      return os << "DescriptionFrom::kContents";
    case DescriptionFrom::kRelatedElement:
      return os << "DescriptionFrom::kRelatedElement";
    default:
      return os << "Unknown DescriptionFrom value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, EventFrom value) {
  switch(value) {
    case EventFrom::kNone:
      return os << "EventFrom::kNone";
    case EventFrom::kUser:
      return os << "EventFrom::kUser";
    case EventFrom::kPage:
      return os << "EventFrom::kPage";
    case EventFrom::kAction:
      return os << "EventFrom::kAction";
    default:
      return os << "Unknown EventFrom value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, Gesture value) {
  switch(value) {
    case Gesture::kNone:
      return os << "Gesture::kNone";
    case Gesture::kClick:
      return os << "Gesture::kClick";
    case Gesture::kSwipeLeft1:
      return os << "Gesture::kSwipeLeft1";
    case Gesture::kSwipeUp1:
      return os << "Gesture::kSwipeUp1";
    case Gesture::kSwipeRight1:
      return os << "Gesture::kSwipeRight1";
    case Gesture::kSwipeDown1:
      return os << "Gesture::kSwipeDown1";
    case Gesture::kSwipeLeft2:
      return os << "Gesture::kSwipeLeft2";
    case Gesture::kSwipeUp2:
      return os << "Gesture::kSwipeUp2";
    case Gesture::kSwipeRight2:
      return os << "Gesture::kSwipeRight2";
    case Gesture::kSwipeDown2:
      return os << "Gesture::kSwipeDown2";
    case Gesture::kSwipeLeft3:
      return os << "Gesture::kSwipeLeft3";
    case Gesture::kSwipeUp3:
      return os << "Gesture::kSwipeUp3";
    case Gesture::kSwipeRight3:
      return os << "Gesture::kSwipeRight3";
    case Gesture::kSwipeDown3:
      return os << "Gesture::kSwipeDown3";
    case Gesture::kSwipeLeft4:
      return os << "Gesture::kSwipeLeft4";
    case Gesture::kSwipeUp4:
      return os << "Gesture::kSwipeUp4";
    case Gesture::kSwipeRight4:
      return os << "Gesture::kSwipeRight4";
    case Gesture::kSwipeDown4:
      return os << "Gesture::kSwipeDown4";
    case Gesture::kTap2:
      return os << "Gesture::kTap2";
    case Gesture::kTap3:
      return os << "Gesture::kTap3";
    case Gesture::kTap4:
      return os << "Gesture::kTap4";
    default:
      return os << "Unknown Gesture value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TextAffinity value) {
  switch(value) {
    case TextAffinity::kNone:
      return os << "TextAffinity::kNone";
    case TextAffinity::kDownstream:
      return os << "TextAffinity::kDownstream";
    case TextAffinity::kUpstream:
      return os << "TextAffinity::kUpstream";
    default:
      return os << "Unknown TextAffinity value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, TreeOrder value) {
  switch(value) {
    case TreeOrder::kNone:
      return os << "TreeOrder::kNone";
    case TreeOrder::kUndefined:
      return os << "TreeOrder::kUndefined";
    case TreeOrder::kBefore:
      return os << "TreeOrder::kBefore";
    case TreeOrder::kEqual:
      return os << "TreeOrder::kEqual";
    case TreeOrder::kAfter:
      return os << "TreeOrder::kAfter";
    default:
      return os << "Unknown TreeOrder value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, AXTreeIDType value) {
  switch(value) {
    case AXTreeIDType::kUnknown:
      return os << "AXTreeIDType::kUnknown";
    case AXTreeIDType::kToken:
      return os << "AXTreeIDType::kToken";
    default:
      return os << "Unknown AXTreeIDType value: " << static_cast<int32_t>(value);
  }
}

std::ostream& operator<<(std::ostream& os, ImageAnnotationStatus value) {
  switch(value) {
    case ImageAnnotationStatus::kNone:
      return os << "ImageAnnotationStatus::kNone";
    case ImageAnnotationStatus::kWillNotAnnotateDueToScheme:
      return os << "ImageAnnotationStatus::kWillNotAnnotateDueToScheme";
    case ImageAnnotationStatus::kIneligibleForAnnotation:
      return os << "ImageAnnotationStatus::kIneligibleForAnnotation";
    case ImageAnnotationStatus::kEligibleForAnnotation:
      return os << "ImageAnnotationStatus::kEligibleForAnnotation";
    case ImageAnnotationStatus::kAnnotationPending:
      return os << "ImageAnnotationStatus::kAnnotationPending";
    case ImageAnnotationStatus::kAnnotationSucceeded:
      return os << "ImageAnnotationStatus::kAnnotationSucceeded";
    case ImageAnnotationStatus::kAnnotationEmpty:
      return os << "ImageAnnotationStatus::kAnnotationEmpty";
    case ImageAnnotationStatus::kAnnotationAdult:
      return os << "ImageAnnotationStatus::kAnnotationAdult";
    case ImageAnnotationStatus::kAnnotationProcessFailed:
      return os << "ImageAnnotationStatus::kAnnotationProcessFailed";
    default:
      return os << "Unknown ImageAnnotationStatus value: " << static_cast<int32_t>(value);
  }
}

namespace internal {

}  // namespace internal
}  // namespace mojom
}  // namespace ax

#if defined(_MSC_VER)
#pragma warning(pop)
#endif