// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/layout/ng/inline/ng_line_breaker.h"

#include "third_party/blink/renderer/core/layout/logical_values.h"
#include "third_party/blink/renderer/core/layout/ng/inline/ng_bidi_paragraph.h"
#include "third_party/blink/renderer/core/layout/ng/inline/ng_inline_break_token.h"
#include "third_party/blink/renderer/core/layout/ng/inline/ng_inline_node.h"
#include "third_party/blink/renderer/core/layout/ng/inline/ng_text_fragment_builder.h"
#include "third_party/blink/renderer/core/layout/ng/ng_block_break_token.h"
#include "third_party/blink/renderer/core/layout/ng/ng_constraint_space.h"
#include "third_party/blink/renderer/core/layout/ng/ng_floats_utils.h"
#include "third_party/blink/renderer/core/layout/ng/ng_fragment.h"
#include "third_party/blink/renderer/core/layout/ng/ng_length_utils.h"
#include "third_party/blink/renderer/core/layout/ng/ng_positioned_float.h"
#include "third_party/blink/renderer/core/layout/ng/ng_unpositioned_float.h"
#include "third_party/blink/renderer/core/style/computed_style.h"
#include "third_party/blink/renderer/platform/fonts/shaping/shape_result_view.h"
#include "third_party/blink/renderer/platform/fonts/shaping/shaping_line_breaker.h"

namespace blink {

namespace {

// CSS-defined white space characters, excluding the newline character.
// In most cases, the line breaker consider break opportunities are before
// spaces because it handles trailing spaces differently from other normal
// characters, but breaking before newline characters is not desired.
inline bool IsBreakableSpace(UChar c) {
  return c == kSpaceCharacter || c == kTabulationCharacter;
}

inline bool CanBreakAfterLast(const NGInlineItemResults& item_results) {
  return !item_results.IsEmpty() && item_results.back().can_break_after;
}

inline bool ShouldCreateLineBox(const NGInlineItemResults& item_results) {
  return !item_results.IsEmpty() && item_results.back().should_create_line_box;
}

inline bool HasUnpositionedFloats(const NGInlineItemResults& item_results) {
  return !item_results.IsEmpty() && item_results.back().has_unpositioned_floats;
}

bool IsImage(const NGInlineItem& item) {
  if (!item.GetLayoutObject() || !item.GetLayoutObject()->IsLayoutImage())
    return false;
  DCHECK(item.Type() == NGInlineItem::kAtomicInline);
  return true;
}

LayoutUnit ComputeInlineEndSize(const NGConstraintSpace& space,
                                const ComputedStyle* style) {
  DCHECK(style);
  NGBoxStrut margins = ComputeMarginsForSelf(space, *style);
  NGBoxStrut borders = ComputeBordersForInline(*style);
  NGBoxStrut paddings = ComputePadding(space, *style);

  return margins.inline_end + borders.inline_end + paddings.inline_end;
}

bool NeedsAccurateEndPosition(const NGInlineItem& line_end_item) {
  DCHECK(line_end_item.Type() == NGInlineItem::kText ||
         line_end_item.Type() == NGInlineItem::kControl);
  DCHECK(line_end_item.Style());
  const ComputedStyle& line_end_style = *line_end_item.Style();
  return line_end_style.HasBoxDecorationBackground() ||
         !line_end_style.AppliedTextDecorations().IsEmpty();
}

inline bool NeedsAccurateEndPosition(const NGLineInfo& line_info,
                                     const NGInlineItem& line_end_item) {
  return line_info.NeedsAccurateEndPosition() ||
         NeedsAccurateEndPosition(line_end_item);
}

inline void ComputeCanBreakAfter(NGInlineItemResult* item_result,
                                 bool auto_wrap,
                                 const LazyLineBreakIterator& break_iterator) {
  item_result->can_break_after =
      auto_wrap && break_iterator.IsBreakable(item_result->end_offset);
}

// To correctly determine if a float is allowed to be on the same line as its
// content, we need to determine if it has any ancestors with inline-end
// padding, border, or margin.
// The inline-end size from all of these ancestors contribute to the "used
// size" of the float, and may cause the float to be pushed down.
LayoutUnit ComputeFloatAncestorInlineEndSize(const NGConstraintSpace& space,
                                             const Vector<NGInlineItem>& items,
                                             wtf_size_t item_index) {
  LayoutUnit inline_end_size;
  for (const NGInlineItem *cur = items.begin() + item_index, *end = items.end();
       cur != end; ++cur) {
    const NGInlineItem& item = *cur;

    if (item.Type() == NGInlineItem::kCloseTag) {
      if (item.HasEndEdge())
        inline_end_size += ComputeInlineEndSize(space, item.Style());
      continue;
    }

    // For this calculation, any open tag (even if its empty) stops this
    // calculation, and allows the float to appear on the same line. E.g.
    // <span style="padding-right: 20px;"><f></f><span></span></span>
    //
    // Any non-empty item also allows the float to be on the same line.
    if (item.Type() == NGInlineItem::kOpenTag || !item.IsEmptyItem())
      break;
  }
  return inline_end_size;
}

scoped_refptr<const NGPhysicalTextFragment> CreateHyphenFragment(
    NGInlineNode node,
    WritingMode writing_mode,
    const NGInlineItem& item) {
  DCHECK(item.Style());
  const ComputedStyle& style = *item.Style();
  TextDirection direction = style.Direction();
  String hyphen_string = style.HyphenString();
  HarfBuzzShaper shaper(hyphen_string);
  scoped_refptr<ShapeResult> hyphen_result =
      shaper.Shape(&style.GetFont(), direction);
  NGTextFragmentBuilder builder(node, writing_mode);
  builder.SetText(item.GetLayoutObject(), hyphen_string, &style,
                  /* is_ellipsis_style */ false,
                  ShapeResultView::Create(hyphen_result.get()));
  return builder.ToTextFragment();
}

bool IsStickyImage(const NGInlineItem& candidate,
                   const NGInlineItemResults& item_results,
                   NGLineBreaker::WhitespaceState trailing_whitespace,
                   const String& text) {
  if (!IsImage(candidate))
    return false;
  if (trailing_whitespace != NGLineBreaker::WhitespaceState::kNone &&
      trailing_whitespace != NGLineBreaker::WhitespaceState::kUnknown)
    return false;

  if (item_results.size() >= 1) {
    // If this image follows a <wbr> the image isn't sticky.
    const auto& last = item_results[item_results.size() - 1];
    return text[last.start_offset] != kZeroWidthSpaceCharacter;
  }
  return true;
}

inline void ClearNeedsLayout(const NGInlineItem& item) {
  LayoutObject* layout_object = item.GetLayoutObject();
  if (layout_object->NeedsLayout())
    layout_object->ClearNeedsLayout();
}

}  // namespace

NGLineBreaker::NGLineBreaker(NGInlineNode node,
                             NGLineBreakerMode mode,
                             const NGConstraintSpace& space,
                             const NGLineLayoutOpportunity& line_opportunity,
                             const NGPositionedFloatVector& leading_floats,
                             unsigned handled_leading_floats_index,
                             const NGInlineBreakToken* break_token,
                             NGExclusionSpace* exclusion_space)
    : line_opportunity_(line_opportunity),
      node_(node),
      is_first_formatted_line_((!break_token || (!break_token->ItemIndex() &&
                                                 !break_token->TextOffset())) &&
                               node.CanContainFirstFormattedLine()),
      use_first_line_style_(is_first_formatted_line_ &&
                            node.UseFirstLineStyle()),
      in_line_height_quirks_mode_(node.InLineHeightQuirksMode()),
      items_data_(node.ItemsData(use_first_line_style_)),
      mode_(mode),
      constraint_space_(space),
      exclusion_space_(exclusion_space),
      break_token_(break_token),
      break_iterator_(items_data_.text_content),
      shaper_(items_data_.text_content),
      spacing_(items_data_.text_content),
      leading_floats_(leading_floats),
      handled_leading_floats_index_(handled_leading_floats_index),
      base_direction_(node_.BaseDirection()) {
  break_iterator_.SetBreakSpace(BreakSpaceType::kBeforeSpaceRun);

  if (break_token) {
    current_style_ = break_token->Style();
    item_index_ = break_token->ItemIndex();
    offset_ = break_token->TextOffset();
    break_iterator_.SetStartOffset(offset_);
    is_after_forced_break_ = break_token->IsForcedBreak();
    items_data_.AssertOffset(item_index_, offset_);
    ignore_floats_ = break_token->IgnoreFloats();
  }

  // There's a special intrinsic size measure quirk for images that are direct
  // children of table cells that have auto inline-size: When measuring
  // intrinsic min/max inline sizes, we pretend that it's not possible to break
  // between images, or between text and images. Note that this only applies
  // when measuring. During actual layout, on the other hand, standard breaking
  // rules are to be followed.
  // See https://quirks.spec.whatwg.org/#the-table-cell-width-calculation-quirk
  if (node.GetDocument().InQuirksMode() &&
      node.Style().Display() == EDisplay::kTableCell &&
      node.Style().LogicalWidth().IsIntrinsicOrAuto() &&
      mode != NGLineBreakerMode::kContent)
    sticky_images_quirk_ = true;
}

// Define the destructor here, so that we can forward-declare more in the
// header.
NGLineBreaker::~NGLineBreaker() = default;

inline NGInlineItemResult* NGLineBreaker::AddItem(const NGInlineItem& item,
                                                  unsigned end_offset,
                                                  NGLineInfo* line_info) {
  DCHECK_LE(end_offset, item.EndOffset());
  NGInlineItemResults* item_results = line_info->MutableResults();
  return &item_results->emplace_back(
      &item, item_index_, offset_, end_offset, break_anywhere_if_overflow_,
      ShouldCreateLineBox(*item_results), HasUnpositionedFloats(*item_results));
}

inline NGInlineItemResult* NGLineBreaker::AddItem(const NGInlineItem& item,
                                                  NGLineInfo* line_info) {
  return AddItem(item, item.EndOffset(), line_info);
}

void NGLineBreaker::SetMaxSizeCache(MaxSizeCache* max_size_cache) {
  DCHECK_NE(mode_, NGLineBreakerMode::kContent);
  DCHECK(max_size_cache);
  max_size_cache_ = max_size_cache;
}

void NGLineBreaker::SetLineEndFragment(
    scoped_refptr<const NGPhysicalTextFragment> fragment,
    NGLineInfo* line_info) {
  bool is_horizontal =
      IsHorizontalWritingMode(constraint_space_.GetWritingMode());
  if (line_info->LineEndFragment()) {
    const PhysicalSize& size = line_info->LineEndFragment()->Size();
    position_ -= is_horizontal ? size.width : size.height;
  }
  if (fragment) {
    const PhysicalSize& size = fragment->Size();
    position_ += is_horizontal ? size.width : size.height;
  }
  line_info->SetLineEndFragment(std::move(fragment));
}

// Compute the base direction for bidi algorithm for this line.
void NGLineBreaker::ComputeBaseDirection() {
  // If 'unicode-bidi' is not 'plaintext', use the base direction of the block.
  if (!previous_line_had_forced_break_ ||
      node_.Style().GetUnicodeBidi() != UnicodeBidi::kPlaintext)
    return;
  // If 'unicode-bidi: plaintext', compute the base direction for each paragraph
  // (separated by forced break.)
  const String& text = Text();
  if (text.Is8Bit())
    return;
  wtf_size_t end_offset = text.find(kNewlineCharacter, offset_);
  base_direction_ = NGBidiParagraph::BaseDirectionForString(
      end_offset == kNotFound
          ? StringView(text, offset_)
          : StringView(text, offset_, end_offset - offset_));
}

// Initialize internal states for the next line.
void NGLineBreaker::PrepareNextLine(NGLineInfo* line_info) {
  // NGLineInfo is not supposed to be re-used becase it's not much gain and to
  // avoid rare code path.
  NGInlineItemResults* item_results = line_info->MutableResults();
  DCHECK(item_results->IsEmpty());

  if (item_index_) {
    // We're past the first line
    previous_line_had_forced_break_ = is_after_forced_break_;
    is_after_forced_break_ = false;
    is_first_formatted_line_ = false;
    use_first_line_style_ = false;
  }

  line_info->SetStartOffset(offset_);
  line_info->SetLineStyle(node_, items_data_, use_first_line_style_);

  DCHECK(!line_info->TextIndent());
  if (line_info->LineStyle().ShouldUseTextIndent(
          is_first_formatted_line_, previous_line_had_forced_break_)) {
    const Length& length = line_info->LineStyle().TextIndent();
    LayoutUnit maximum_value;
    // Ignore percentages (resolve to 0) when calculating min/max intrinsic
    // sizes.
    if (length.IsPercentOrCalc() && mode_ == NGLineBreakerMode::kContent)
      maximum_value = constraint_space_.AvailableSize().inline_size;
    line_info->SetTextIndent(MinimumValueForLength(length, maximum_value));
  }

  // Set the initial style of this line from the break token. Example:
  //   <p>...<span>....</span></p>
  // When the line wraps in <span>, the 2nd line needs to start with the style
  // of the <span>.
  SetCurrentStyle(current_style_ ? *current_style_ : line_info->LineStyle());
  ComputeBaseDirection();
  line_info->SetBaseDirection(base_direction_);

  // Use 'text-indent' as the initial position. This lets tab positions to align
  // regardless of 'text-indent'.
  position_ = line_info->TextIndent();
}

void NGLineBreaker::NextLine(
    LayoutUnit percentage_resolution_block_size_for_min_max,
    Vector<LayoutObject*>* out_floats_for_min_max,
    NGLineInfo* line_info) {
  // out_floats_for_min_max is required for min/max and prohibited for regular
  // content mode.
  DCHECK(mode_ == NGLineBreakerMode::kContent || out_floats_for_min_max);
  DCHECK(!(mode_ == NGLineBreakerMode::kContent && out_floats_for_min_max));

  PrepareNextLine(line_info);
  BreakLine(percentage_resolution_block_size_for_min_max,
            out_floats_for_min_max, line_info);
  RemoveTrailingCollapsibleSpace(line_info);

  NGInlineItemResults* item_results = line_info->MutableResults();
#if DCHECK_IS_ON()
  for (const auto& result : *item_results)
    result.CheckConsistency(mode_ == NGLineBreakerMode::kMinContent);
#endif

  // We should create a line-box when:
  //  - We have an item which needs a line box (text, etc).
  //  - A list-marker is present, and it would be the last line or last line
  //    before a forced new-line.
  //  - During min/max content sizing (to correctly determine the line width).
  //
  // TODO(kojii): There are cases where we need to PlaceItems() without creating
  // line boxes. These cases need to be reviewed.
  bool should_create_line_box = ShouldCreateLineBox(*item_results) ||
                                (has_list_marker_ && line_info->IsLastLine()) ||
                                mode_ != NGLineBreakerMode::kContent;

  if (!should_create_line_box)
    line_info->SetIsEmptyLine();
  line_info->SetEndItemIndex(item_index_);
  DCHECK_NE(trailing_whitespace_, WhitespaceState::kUnknown);
  if (trailing_whitespace_ == WhitespaceState::kPreserved)
    line_info->SetHasTrailingSpaces();

  ComputeLineLocation(line_info);
}

void NGLineBreaker::BreakLine(
    LayoutUnit percentage_resolution_block_size_for_min_max,
    Vector<LayoutObject*>* out_floats_for_min_max,
    NGLineInfo* line_info) {
  const Vector<NGInlineItem>& items = Items();
  state_ = LineBreakState::kContinue;
  trailing_whitespace_ = WhitespaceState::kLeading;
  while (state_ != LineBreakState::kDone) {
    // Check overflow even if |item_index_| is at the end of the block, because
    // the last item of the block may have caused overflow. In that case,
    // |HandleOverflow| will rewind |item_index_|.
    if (state_ == LineBreakState::kContinue &&
        position_ > AvailableWidthToFit()) {
      HandleOverflow(line_info);
    }

    // If we reach at the end of the block, this is the last line.
    DCHECK_LE(item_index_, items.size());
    if (item_index_ == items.size()) {
      line_info->SetIsLastLine(true);
      return;
    }

    NGInlineItemResults* item_results = line_info->MutableResults();

    // Handle trailable items first. These items may not be break before.
    // They (or part of them) may also overhang the available width.
    const NGInlineItem& item = items[item_index_];
    if (item.Type() == NGInlineItem::kText) {
      if (item.Length())
        HandleText(item, line_info);
      else
        HandleEmptyText(item, line_info);
#if DCHECK_IS_ON()
      if (!item_results->IsEmpty())
        item_results->back().CheckConsistency(true);
#endif
      continue;
    }
    if (item.Type() == NGInlineItem::kCloseTag) {
      HandleCloseTag(item, line_info);
      continue;
    }
    if (item.Type() == NGInlineItem::kControl) {
      HandleControlItem(item, line_info);
      continue;
    }
    if (item.Type() == NGInlineItem::kFloating) {
      HandleFloat(item, out_floats_for_min_max, line_info);
      continue;
    }
    if (item.Type() == NGInlineItem::kBidiControl) {
      HandleBidiControlItem(item, line_info);
      continue;
    }

    // Items after this point are not trailable. Break at the earliest break
    // opportunity if we're trailing.
    if (state_ == LineBreakState::kTrailing &&
        CanBreakAfterLast(*item_results)) {
      // If the sticky images quirk is enabled, and this is an image that
      // follows text that doesn't end with something breakable, we cannot break
      // between the two items.
      if (sticky_images_quirk_ &&
          IsStickyImage(item, *item_results, trailing_whitespace_, Text())) {
        HandleAtomicInline(item, percentage_resolution_block_size_for_min_max,
                           line_info);
        continue;
      }

      line_info->SetIsLastLine(false);
      return;
    }

    if (item.Type() == NGInlineItem::kAtomicInline) {
      HandleAtomicInline(item, percentage_resolution_block_size_for_min_max,
                         line_info);
    } else if (item.Type() == NGInlineItem::kOpenTag) {
      HandleOpenTag(item, line_info);
    } else if (item.Type() == NGInlineItem::kOutOfFlowPositioned) {
      AddItem(item, line_info);
      MoveToNextOf(item);
    } else if (item.Length()) {
      NOTREACHED();
      // For other items with text (e.g., bidi controls), use their text to
      // determine the break opportunity.
      NGInlineItemResult* item_result = AddItem(item, line_info);
      item_result->can_break_after =
          break_iterator_.IsBreakable(item_result->end_offset);
      MoveToNextOf(item);
    } else if (item.Type() == NGInlineItem::kListMarker) {
      NGInlineItemResult* item_result = AddItem(item, line_info);
      has_list_marker_ = true;
      DCHECK(!item_result->can_break_after);
      MoveToNextOf(item);
    } else {
      NOTREACHED();
      MoveToNextOf(item);
    }
  }
}

void NGLineBreaker::ComputeLineLocation(NGLineInfo* line_info) const {
  // Negative margins can make the position negative, but the inline size is
  // always positive or 0.
  LayoutUnit available_width = AvailableWidth();
  DCHECK_EQ(position_, line_info->ComputeWidth());

  line_info->SetWidth(available_width, position_);
  line_info->SetBfcOffset(
      {line_opportunity_.line_left_offset, line_opportunity_.bfc_block_offset});
}

void NGLineBreaker::HandleText(const NGInlineItem& item,
                               const ShapeResult& shape_result,
                               NGLineInfo* line_info) {
  DCHECK(item.Type() == NGInlineItem::kText ||
         (item.Type() == NGInlineItem::kControl &&
          Text()[item.StartOffset()] == kTabulationCharacter));
  DCHECK_EQ(auto_wrap_, item.Style()->AutoWrap());

  // If we're trailing, only trailing spaces can be included in this line.
  if (state_ == LineBreakState::kTrailing) {
    if (CanBreakAfterLast(*line_info->MutableResults()))
      return HandleTrailingSpaces(item, shape_result, line_info);
    // When a run of preserved spaces are across items, |CanBreakAfterLast| is
    // false for between spaces. But we still need to handle them as trailing
    // spaces.
    const String& text = Text();
    if (auto_wrap_ && offset_ < text.length() &&
        IsBreakableSpace(text[offset_]))
      return HandleTrailingSpaces(item, shape_result, line_info);
  }

  // Skip leading collapsible spaces.
  // Most cases such spaces are handled as trailing spaces of the previous line,
  // but there are some cases doing so is too complex.
  if (trailing_whitespace_ == WhitespaceState::kLeading) {
    if (item.Style()->CollapseWhiteSpace() &&
        Text()[offset_] == kSpaceCharacter) {
      // Skipping one whitespace removes all collapsible spaces because
      // collapsible spaces are collapsed to single space in
      // NGInlineItemBuilder.
      ++offset_;
      if (offset_ == item.EndOffset()) {
        ClearNeedsLayout(item);
        MoveToNextOf(item);
        return;
      }
    }
    // |trailing_whitespace_| will be updated as we read the text.
  }

  NGInlineItemResult* item_result = AddItem(item, line_info);
  item_result->should_create_line_box = true;

  if (auto_wrap_) {
    if (mode_ == NGLineBreakerMode::kMinContent &&
        HandleTextForFastMinContent(item_result, item, shape_result,
                                    line_info)) {
      return;
    }

    // Try to break inside of this text item.
    LayoutUnit available_width = AvailableWidthToFit();
    BreakText(item_result, item, shape_result, available_width - position_,
              line_info);

    LayoutUnit next_position = position_ + item_result->inline_size;
    bool is_overflow = next_position > available_width;
    DCHECK(is_overflow || item_result->shape_result);
    position_ = next_position;
    item_result->may_break_inside = !is_overflow;
    MoveToNextOf(*item_result);

    if (!is_overflow ||
        (state_ == LineBreakState::kTrailing && item_result->shape_result)) {
      if (item_result->end_offset < item.EndOffset()) {
        // The break point found, and text follows. Break here, after trailing
        // spaces.
        return HandleTrailingSpaces(item, shape_result, line_info);
      }

      // The break point found, but items that prohibit breaking before them may
      // follow. Continue looking next items.
      return;
    }

    return HandleOverflow(line_info);
  }

  // Add until the end of the item if !auto_wrap. In most cases, it's the whole
  // item.
  DCHECK_EQ(item_result->end_offset, item.EndOffset());
  if (item_result->start_offset == item.StartOffset()) {
    item_result->inline_size =
        shape_result.SnappedWidth().ClampNegativeToZero();
    item_result->shape_result = ShapeResultView::Create(&shape_result);
  } else {
    // <wbr> can wrap even if !auto_wrap. Spaces after that will be leading
    // spaces and thus be collapsed.
    DCHECK(trailing_whitespace_ == WhitespaceState::kLeading &&
           item_result->start_offset >= item.StartOffset());
    item_result->shape_result = ShapeResultView::Create(
        &shape_result, item_result->start_offset, item_result->end_offset);
    item_result->inline_size =
        item_result->shape_result->SnappedWidth().ClampNegativeToZero();
  }

  DCHECK(!item_result->may_break_inside);
  DCHECK(!item_result->can_break_after);
  trailing_whitespace_ = WhitespaceState::kUnknown;
  position_ += item_result->inline_size;
  MoveToNextOf(item);
}

void NGLineBreaker::BreakText(NGInlineItemResult* item_result,
                              const NGInlineItem& item,
                              const ShapeResult& item_shape_result,
                              LayoutUnit available_width,
                              NGLineInfo* line_info) {
  DCHECK(item.Type() == NGInlineItem::kText ||
         (item.Type() == NGInlineItem::kControl &&
          Text()[item.StartOffset()] == kTabulationCharacter));
  DCHECK(&item_shape_result);
  item.AssertOffset(item_result->start_offset);

  DCHECK_EQ(item_shape_result.StartIndex(), item.StartOffset());
  DCHECK_EQ(item_shape_result.EndIndex(), item.EndOffset());
  struct ShapeCallbackContext {
    STACK_ALLOCATED();

   public:
    NGLineBreaker* line_breaker;
    const NGInlineItem& item;
  } shape_callback_context{this, item};
  const ShapingLineBreaker::ShapeCallback shape_callback =
      [](void* untyped_context, unsigned start, unsigned end) {
        ShapeCallbackContext* context =
            static_cast<ShapeCallbackContext*>(untyped_context);
        return context->line_breaker->ShapeText(context->item, start, end);
      };
  ShapingLineBreaker breaker(&item_shape_result, &break_iterator_, hyphenation_,
                             shape_callback, &shape_callback_context);
  if (!enable_soft_hyphen_)
    breaker.DisableSoftHyphen();
  available_width = std::max(LayoutUnit(0), available_width);

  // Use kStartShouldBeSafe if at the beginning of a line.
  unsigned options = ShapingLineBreaker::kDefaultOptions;
  if (item_result->start_offset != line_info->StartOffset())
    options |= ShapingLineBreaker::kDontReshapeStart;

  // Reshaping between the last character and trailing spaces is needed only
  // when we need accurate end position, because kerning between trailing spaces
  // is not visible.
  if (!NeedsAccurateEndPosition(*line_info, item))
    options |= ShapingLineBreaker::kDontReshapeEndIfAtSpace;

  // Use kNoResultIfOverflow if 'break-word' and we're trying to break normally
  // because if this item overflows, we will rewind and break line again. The
  // overflowing ShapeResult is not needed.
  if (break_anywhere_if_overflow_ && !override_break_anywhere_)
    options |= ShapingLineBreaker::kNoResultIfOverflow;

  ShapingLineBreaker::Result result;
  scoped_refptr<const ShapeResultView> shape_result = breaker.ShapeLine(
      item_result->start_offset, available_width, options, &result);

  // If this item overflows and 'break-word' is set, this line will be
  // rewinded. Making this item long enough to overflow is enough.
  if (!shape_result) {
    DCHECK(options & ShapingLineBreaker::kNoResultIfOverflow);
    item_result->inline_size = available_width + 1;
    item_result->end_offset = item.EndOffset();
    return;
  }
  DCHECK_EQ(shape_result->NumCharacters(),
            result.break_offset - item_result->start_offset);

  if (result.is_hyphenated) {
    SetLineEndFragment(
        CreateHyphenFragment(node_, constraint_space_.GetWritingMode(), item),
        line_info);

    // TODO(kojii): Implement when adding a hyphen caused overflow.
    // crbug.com/714962: Should be removed when switched to NGPaint.
    item_result->text_end_effect = NGTextEndEffect::kHyphen;
  }
  item_result->inline_size = shape_result->SnappedWidth().ClampNegativeToZero();
  item_result->end_offset = result.break_offset;
  item_result->shape_result = std::move(shape_result);
  // It is critical to move offset forward, or NGLineBreaker may keep adding
  // NGInlineItemResult until all the memory is consumed.
  CHECK_GT(item_result->end_offset, item_result->start_offset) << Text();

  // * If width <= available_width:
  //   * If offset < item.EndOffset(): the break opportunity to fit is found.
  //   * If offset == item.EndOffset(): the break opportunity at the end fits,
  //     or the first break opportunity is beyond the end.
  //     There may be room for more characters.
  // * If width > available_width: The first break opportunity does not fit.
  //   offset is the first break opportunity, either inside, at the end, or
  //   beyond the end.
  if (item_result->end_offset < item.EndOffset()) {
    item_result->can_break_after = true;

    if (UNLIKELY(break_iterator_.BreakType() ==
                 LineBreakType::kBreakCharacter)) {
      trailing_whitespace_ = WhitespaceState::kUnknown;
    } else {
      trailing_whitespace_ = WhitespaceState::kNone;
    }
  } else {
    DCHECK_EQ(item_result->end_offset, item.EndOffset());
    item_result->can_break_after =
        break_iterator_.IsBreakable(item_result->end_offset);
    trailing_whitespace_ = WhitespaceState::kUnknown;
  }
}

// This function handles text item for min-content. The specialized logic is
// because min-content is very expensive by breaking at every break opportunity
// and producing as many lines as the number of break opportunities.
//
// This function breaks the text in NGInlineItem at every break opportunity,
// computes the maximum width of all words, and creates one NGInlineItemResult
// that has the maximum width. For example, for a text item of "1 2 34 5 6",
// only the width of "34" matters for min-content.
//
// The first word and the last word, "1" and "6" in the example above, are
// handled in normal |HandleText()| because they may form a word with the
// previous/next item.
bool NGLineBreaker::HandleTextForFastMinContent(NGInlineItemResult* item_result,
                                                const NGInlineItem& item,
                                                const ShapeResult& shape_result,
                                                NGLineInfo* line_info) {
  DCHECK_EQ(mode_, NGLineBreakerMode::kMinContent);
  DCHECK(auto_wrap_);
  DCHECK(item.Type() == NGInlineItem::kText ||
         (item.Type() == NGInlineItem::kControl &&
          Text()[item.StartOffset()] == kTabulationCharacter));
  DCHECK(&shape_result);

  // If this is the first part of the text, it may form a word with the previous
  // item. Fallback to |HandleText()|.
  unsigned start_offset = item_result->start_offset;
  DCHECK_LT(start_offset, item.EndOffset());
  if (start_offset != line_info->StartOffset() &&
      start_offset == item.StartOffset())
    return false;
  // If this is the last part of the text, it may form a word with the next
  // item. Fallback to |HandleText()|.
  if (fast_min_content_item_ == &item)
    return false;

  // Hyphenation is not supported yet.
  if (hyphenation_)
    return false;

  base::Optional<LineBreakType> saved_line_break_type;
  if (break_anywhere_if_overflow_ && !override_break_anywhere_) {
    saved_line_break_type = break_iterator_.BreakType();
    break_iterator_.SetBreakType(LineBreakType::kBreakCharacter);
  }

  // Break the text at every break opportunity and measure each word.
  DCHECK_EQ(shape_result.StartIndex(), item.StartOffset());
  DCHECK_GE(start_offset, shape_result.StartIndex());
  shape_result.EnsurePositionData();
  const String& text = Text();
  float min_width = 0;
  unsigned last_end_offset = 0;
  while (start_offset < item.EndOffset()) {
    unsigned end_offset = break_iterator_.NextBreakOpportunity(
        start_offset + 1, item.EndOffset());
    if (end_offset >= item.EndOffset())
      break;

    // Inserting a hyphenation character is not supported yet.
    if (text[end_offset - 1] == kSoftHyphenCharacter)
      return false;

    float start_position = shape_result.CachedPositionForOffset(
        start_offset - shape_result.StartIndex());
    float end_position = shape_result.CachedPositionForOffset(
        end_offset - shape_result.StartIndex());
    float word_width = IsLtr(shape_result.Direction())
                           ? end_position - start_position
                           : start_position - end_position;
    min_width = std::max(word_width, min_width);

    last_end_offset = end_offset;
    start_offset = end_offset;
    while (start_offset < item.EndOffset() &&
           IsBreakableSpace(text[start_offset])) {
      ++start_offset;
    }
  }

  if (saved_line_break_type.has_value())
    break_iterator_.SetBreakType(*saved_line_break_type);

  // If there was only one break opportunity in this item, it may form a word
  // with previous and/or next item. Fallback to |HandleText()|.
  if (!last_end_offset)
    return false;

  // Create an NGInlineItemResult that has the max of widths of all words.
  item_result->end_offset = last_end_offset;
  item_result->inline_size = LayoutUnit::FromFloatCeil(min_width);
  item_result->can_break_after = true;

  trailing_whitespace_ = WhitespaceState::kUnknown;
  position_ += item_result->inline_size;
  state_ = LineBreakState::kTrailing;
  fast_min_content_item_ = &item;
  MoveToNextOf(*item_result);
  return true;
}

void NGLineBreaker::HandleEmptyText(const NGInlineItem& item,
                                    NGLineInfo* line_info) {
  // Fully collapsed text is not needed for line breaking/layout, but it may
  // have |SelfNeedsLayout()| set. Mark it was laid out.
  ClearNeedsLayout(item);
  MoveToNextOf(item);
}

// Re-shape the specified range of |NGInlineItem|.
scoped_refptr<ShapeResult> NGLineBreaker::ShapeText(const NGInlineItem& item,
                                                    unsigned start,
                                                    unsigned end) {
  scoped_refptr<ShapeResult> shape_result;
  if (!items_data_.segments) {
    RunSegmenter::RunSegmenterRange segment_range =
        item.CreateRunSegmenterRange();
    shape_result = shaper_.Shape(&item.Style()->GetFont(), item.Direction(),
                                 start, end, segment_range);
  } else {
    shape_result = items_data_.segments->ShapeText(
        &shaper_, &item.Style()->GetFont(), item.Direction(), start, end,
        &item - items_data_.items.begin());
  }
  if (UNLIKELY(spacing_.HasSpacing()))
    shape_result->ApplySpacing(spacing_);
  return shape_result;
}

// Compute a new ShapeResult for the specified end offset.
// The end is re-shaped if it is not safe-to-break.
scoped_refptr<ShapeResultView> NGLineBreaker::TruncateLineEndResult(
    const NGLineInfo& line_info,
    const NGInlineItemResult& item_result,
    unsigned end_offset) {
  DCHECK(item_result.item);
  const NGInlineItem& item = *item_result.item;

  // Check given offsets require to truncate |item_result.shape_result|.
  const unsigned start_offset = item_result.start_offset;
  const ShapeResultView* source_result = item_result.shape_result.get();
  DCHECK(source_result);
  DCHECK_GE(start_offset, source_result->StartIndex());
  DCHECK_LE(end_offset, source_result->EndIndex());
  DCHECK(start_offset > source_result->StartIndex() ||
         end_offset < source_result->EndIndex());

  if (!NeedsAccurateEndPosition(line_info, item)) {
    return ShapeResultView::Create(source_result, start_offset, end_offset);
  }

  unsigned last_safe = source_result->PreviousSafeToBreakOffset(end_offset);
  DCHECK_LE(last_safe, end_offset);
  if (last_safe == end_offset || last_safe <= start_offset) {
    return ShapeResultView::Create(source_result, start_offset, end_offset);
  }

  scoped_refptr<ShapeResult> end_result =
      ShapeText(item, std::max(last_safe, start_offset), end_offset);
  DCHECK_EQ(end_result->Direction(), source_result->Direction());
  ShapeResultView::Segment segments[2];
  segments[0] = {source_result, start_offset, last_safe};
  segments[1] = {end_result.get(), 0, end_offset};
  return ShapeResultView::Create(&segments[0], 2);
}

// Update |ShapeResult| in |item_result| to match to its |start_offset| and
// |end_offset|. The end is re-shaped if it is not safe-to-break.
void NGLineBreaker::UpdateShapeResult(const NGLineInfo& line_info,
                                      NGInlineItemResult* item_result) {
  DCHECK(item_result);
  item_result->shape_result =
      TruncateLineEndResult(line_info, *item_result, item_result->end_offset);
  DCHECK(item_result->shape_result);
  item_result->inline_size = item_result->shape_result->SnappedWidth();
}

void NGLineBreaker::HandleTrailingSpaces(const NGInlineItem& item,
                                         const ShapeResult& shape_result,
                                         NGLineInfo* line_info) {
  DCHECK(item.Type() == NGInlineItem::kText ||
         (item.Type() == NGInlineItem::kControl &&
          Text()[item.StartOffset()] == kTabulationCharacter));
  DCHECK(&shape_result);
  DCHECK_LT(offset_, item.EndOffset());
  const String& text = Text();
  DCHECK(item.Style());
  const ComputedStyle& style = *item.Style();

  if (!auto_wrap_) {
    state_ = LineBreakState::kDone;
    return;
  }

  if (style.CollapseWhiteSpace()) {
    if (text[offset_] != kSpaceCharacter) {
      state_ = LineBreakState::kDone;
      return;
    }

    // Skipping one whitespace removes all collapsible spaces because
    // collapsible spaces are collapsed to single space in NGInlineItemBuilder.
    offset_++;
    trailing_whitespace_ = WhitespaceState::kCollapsed;

    // Make the last item breakable after, even if it was nowrap.
    NGInlineItemResults* item_results = line_info->MutableResults();
    DCHECK(!item_results->IsEmpty());
    item_results->back().can_break_after = true;
  } else if (style.WhiteSpace() != EWhiteSpace::kBreakSpaces) {
    // Find the end of the run of space characters in this item.
    // Other white space characters (e.g., tab) are not included in this item.
    DCHECK(style.BreakOnlyAfterWhiteSpace());
    unsigned end = offset_;
    while (end < item.EndOffset() && IsBreakableSpace(text[end]))
      end++;
    if (end == offset_) {
      state_ = LineBreakState::kDone;
      return;
    }

    NGInlineItemResult* item_result = AddItem(item, end, line_info);
    item_result->has_only_trailing_spaces = true;
    item_result->shape_result = ShapeResultView::Create(&shape_result);
    if (item_result->start_offset == item.StartOffset() &&
        item_result->end_offset == item.EndOffset())
      item_result->inline_size = item_result->shape_result->SnappedWidth();
    else
      UpdateShapeResult(*line_info, item_result);
    position_ += item_result->inline_size;
    item_result->can_break_after =
        end < text.length() && !IsBreakableSpace(text[end]);
    offset_ = end;
    trailing_whitespace_ = WhitespaceState::kPreserved;
  }

  // If non-space characters follow, the line is done.
  // Otherwise keep checking next items for the break point.
  DCHECK_LE(offset_, item.EndOffset());
  if (offset_ < item.EndOffset()) {
    state_ = LineBreakState::kDone;
    return;
  }
  ClearNeedsLayout(item);
  item_index_++;
  state_ = LineBreakState::kTrailing;
}

// Remove trailing collapsible spaces in |line_info|.
// https://drafts.csswg.org/css-text-3/#white-space-phase-2
void NGLineBreaker::RemoveTrailingCollapsibleSpace(NGLineInfo* line_info) {
  ComputeTrailingCollapsibleSpace(line_info);
  if (!trailing_collapsible_space_.has_value()) {
    return;
  }

  // We have a trailing collapsible space. Remove it.
  NGInlineItemResult* item_result = trailing_collapsible_space_->item_result;
  position_ -= item_result->inline_size;
  if (scoped_refptr<const ShapeResultView>& collapsed_shape_result =
          trailing_collapsible_space_->collapsed_shape_result) {
    DCHECK_GE(item_result->end_offset, item_result->start_offset + 2);
    --item_result->end_offset;
    item_result->shape_result = collapsed_shape_result;
    item_result->inline_size = item_result->shape_result->SnappedWidth();
    position_ += item_result->inline_size;
  } else {
    ClearNeedsLayout(*item_result->item);
    line_info->MutableResults()->erase(item_result);
  }
  trailing_collapsible_space_.reset();
  trailing_whitespace_ = WhitespaceState::kCollapsed;
}

// Compute the width of trailing spaces without removing it.
LayoutUnit NGLineBreaker::TrailingCollapsibleSpaceWidth(NGLineInfo* line_info) {
  ComputeTrailingCollapsibleSpace(line_info);
  if (!trailing_collapsible_space_.has_value())
    return LayoutUnit();

  // Normally, the width of new_reuslt is smaller, but technically it can be
  // larger. In such case, it means the trailing spaces has negative width.
  NGInlineItemResult* item_result = trailing_collapsible_space_->item_result;
  if (scoped_refptr<const ShapeResultView>& collapsed_shape_result =
          trailing_collapsible_space_->collapsed_shape_result) {
    return item_result->inline_size - collapsed_shape_result->SnappedWidth();
  }
  return item_result->inline_size;
}

// Find trailing collapsible space if exists. The result is cached to
// |trailing_collapsible_space_|.
void NGLineBreaker::ComputeTrailingCollapsibleSpace(NGLineInfo* line_info) {
  if (trailing_whitespace_ == WhitespaceState::kLeading ||
      trailing_whitespace_ == WhitespaceState::kNone ||
      trailing_whitespace_ == WhitespaceState::kCollapsed ||
      trailing_whitespace_ == WhitespaceState::kPreserved) {
    trailing_collapsible_space_.reset();
    return;
  }
  DCHECK(trailing_whitespace_ == WhitespaceState::kUnknown ||
         trailing_whitespace_ == WhitespaceState::kCollapsible);

  trailing_whitespace_ = WhitespaceState::kNone;
  const String& text = Text();
  NGInlineItemResults* item_results = line_info->MutableResults();
  for (auto it = item_results->rbegin(); it != item_results->rend(); ++it) {
    NGInlineItemResult& item_result = *it;
    DCHECK(item_result.item);
    const NGInlineItem& item = *item_result.item;
    if (item.EndCollapseType() == NGInlineItem::kOpaqueToCollapsing)
      continue;
    if (item.Type() == NGInlineItem::kText) {
      DCHECK_GT(item_result.end_offset, 0u);
      DCHECK(item.Style());
      if (!IsBreakableSpace(text[item_result.end_offset - 1]))
        break;
      if (!item.Style()->CollapseWhiteSpace()) {
        trailing_whitespace_ = WhitespaceState::kPreserved;
        break;
      }
      // |shape_result| is nullptr if this is an overflow because BreakText()
      // uses kNoResultIfOverflow option.
      if (!item_result.shape_result)
        break;

      if (!trailing_collapsible_space_.has_value() ||
          trailing_collapsible_space_->item_result != &item_result) {
        trailing_collapsible_space_.emplace();
        trailing_collapsible_space_->item_result = &item_result;
        if (item_result.end_offset - 1 > item_result.start_offset) {
          trailing_collapsible_space_->collapsed_shape_result =
              TruncateLineEndResult(*line_info, item_result,
                                    item_result.end_offset - 1);
        }
      }
      trailing_whitespace_ = WhitespaceState::kCollapsible;
      return;
    }
    if (item.Type() == NGInlineItem::kControl) {
      UChar character = text[item.StartOffset()];
      if (character == kNewlineCharacter)
        continue;
      trailing_whitespace_ = WhitespaceState::kPreserved;
      trailing_collapsible_space_.reset();
      return;
    }
    break;
  }

  trailing_collapsible_space_.reset();
}

// Measure control items; new lines and tab, that are similar to text, affect
// layout, but do not need shaping/painting.
void NGLineBreaker::HandleControlItem(const NGInlineItem& item,
                                      NGLineInfo* line_info) {
  DCHECK_GE(item.Length(), 1u);
  UChar character = Text()[item.StartOffset()];
  switch (character) {
    case kNewlineCharacter: {
      NGInlineItemResult* item_result = AddItem(item, line_info);
      item_result->should_create_line_box = true;
      item_result->has_only_trailing_spaces = true;
      is_after_forced_break_ = true;
      line_info->SetIsLastLine(true);
      state_ = LineBreakState::kDone;
      break;
    }
    case kTabulationCharacter: {
      DCHECK(item.Style());
      const ComputedStyle& style = *item.Style();
      scoped_refptr<const ShapeResult> shape_result =
          ShapeResult::CreateForTabulationCharacters(
              &style.GetFont(), item.Direction(), style.GetTabSize(), position_,
              item.StartOffset(), item.Length());
      HandleText(item, *shape_result, line_info);
      return;
    }
    case kZeroWidthSpaceCharacter: {
      // <wbr> tag creates break opportunities regardless of auto_wrap.
      NGInlineItemResult* item_result = AddItem(item, line_info);
      item_result->should_create_line_box = true;
      item_result->can_break_after = true;
      break;
    }
    case kCarriageReturnCharacter:
    case kFormFeedCharacter:
      // Ignore carriage return and form feed.
      // https://drafts.csswg.org/css-text-3/#white-space-processing
      // https://github.com/w3c/csswg-drafts/issues/855
      break;
    default:
      NOTREACHED();
      break;
  }
  MoveToNextOf(item);
}

void NGLineBreaker::HandleBidiControlItem(const NGInlineItem& item,
                                          NGLineInfo* line_info) {
  DCHECK_EQ(item.Length(), 1u);

  // Bidi control characters have enter/exit semantics. Handle "enter"
  // characters simialr to open-tag, while "exit" (pop) characters similar to
  // close-tag.
  UChar character = Text()[item.StartOffset()];
  bool is_pop = character == kPopDirectionalIsolateCharacter ||
                character == kPopDirectionalFormattingCharacter;
  NGInlineItemResults* item_results = line_info->MutableResults();
  if (is_pop) {
    if (!item_results->IsEmpty()) {
      NGInlineItemResult* item_result = AddItem(item, line_info);
      NGInlineItemResult* last = &(*item_results)[item_results->size() - 2];
      item_result->can_break_after = last->can_break_after;
      last->can_break_after = false;
    } else {
      AddItem(item, line_info);
    }
  } else {
    if (state_ == LineBreakState::kTrailing &&
        CanBreakAfterLast(*item_results)) {
      line_info->SetIsLastLine(false);
      MoveToNextOf(item);
      state_ = LineBreakState::kDone;
      return;
    }
    NGInlineItemResult* item_result = AddItem(item, line_info);
    DCHECK(!item_result->can_break_after);
  }
  MoveToNextOf(item);
}

void NGLineBreaker::HandleAtomicInline(
    const NGInlineItem& item,
    LayoutUnit percentage_resolution_block_size_for_min_max,
    NGLineInfo* line_info) {
  DCHECK_EQ(item.Type(), NGInlineItem::kAtomicInline);
  DCHECK(item.Style());
  const ComputedStyle& style = *item.Style();

  NGInlineItemResult* item_result = AddItem(item, line_info);
  item_result->should_create_line_box = true;
  // When we're just computing min/max content sizes, we can skip the full
  // layout and just compute those sizes. On the other hand, for regular
  // layout we need to do the full layout and get the layout result.
  // Doing a full layout for min/max content can also have undesirable
  // side effects when that falls back to legacy layout.
  if (mode_ == NGLineBreakerMode::kContent) {
    item_result->layout_result =
        NGBlockNode(ToLayoutBox(item.GetLayoutObject()))
            .LayoutAtomicInline(constraint_space_, node_.Style(),
                                line_info->LineStyle().GetFontBaseline(),
                                line_info->UseFirstLineStyle());
    item_result->inline_size =
        NGFragment(constraint_space_.GetWritingMode(),
                   item_result->layout_result->PhysicalFragment())
            .InlineSize();
    item_result->margins =
        ComputeLineMarginsForVisualContainer(constraint_space_, style);
    item_result->inline_size += item_result->margins.InlineSum();
  } else if (mode_ == NGLineBreakerMode::kMaxContent && max_size_cache_) {
    unsigned item_index = &item - Items().begin();
    item_result->inline_size = (*max_size_cache_)[item_index];
  } else {
    NGBlockNode child(ToLayoutBox(item.GetLayoutObject()));
    MinMaxSizeInput input(percentage_resolution_block_size_for_min_max);
    MinMaxSize sizes =
        ComputeMinAndMaxContentContribution(node_.Style(), child, input);
    LayoutUnit inline_margins =
        ComputeLineMarginsForVisualContainer(constraint_space_, style)
            .InlineSum();
    if (mode_ == NGLineBreakerMode::kMinContent) {
      item_result->inline_size = sizes.min_size + inline_margins;
      if (max_size_cache_) {
        if (max_size_cache_->IsEmpty())
          max_size_cache_->resize(Items().size());
        unsigned item_index = &item - Items().begin();
        (*max_size_cache_)[item_index] = sizes.max_size + inline_margins;
      }
    } else {
      item_result->inline_size = sizes.max_size + inline_margins;
    }
  }

  trailing_whitespace_ = WhitespaceState::kNone;
  position_ += item_result->inline_size;
  ComputeCanBreakAfter(item_result, auto_wrap_, break_iterator_);

  if (sticky_images_quirk_ && IsImage(item)) {
    const auto& items = Items();
    if (item_index_ + 1 < items.size()) {
      DCHECK_EQ(&item, &items[item_index_]);
      const auto& next_item = items[item_index_ + 1];
      // This is an image, and we don't want to break after it, unless what
      // comes after provides a break opportunity. Look ahead. We only want to
      // break if the next item is an atomic inline that's not an image.
      if (next_item.Type() != NGInlineItem::kAtomicInline || IsImage(next_item))
        item_result->can_break_after = false;
    }
  }
  MoveToNextOf(item);
}

// Performs layout and positions a float.
//
// If there is a known available_width (e.g. something has resolved the
// container BFC block offset) it will attempt to position the float on the
// current line.
// Additionally updates the available_width for the line as the float has
// (probably) consumed space.
//
// If the float is too wide *or* we already have UnpositionedFloats we add it
// as an UnpositionedFloat. This should be positioned *immediately* after we
// are done with the current line.
// We have this check if there are already UnpositionedFloats as we aren't
// allowed to position a float "above" another float which has come before us
// in the document.
void NGLineBreaker::HandleFloat(const NGInlineItem& item,
                                Vector<LayoutObject*>* out_floats_for_min_max,
                                NGLineInfo* line_info) {
  // When rewind occurs, an item may be handled multiple times.
  // Since floats are put into a separate list, avoid handling same floats
  // twice.
  // Ideally rewind can take floats out of floats list, but the difference is
  // sutble compared to the complexity.
  //
  // Additionally, we need to skip floats if we're retrying a line after a
  // fragmentainer break. In that case the floats associated with this line will
  // already have been processed.
  NGInlineItemResult* item_result = AddItem(item, line_info);
  ComputeCanBreakAfter(item_result, auto_wrap_, break_iterator_);
  MoveToNextOf(item);

  // If we are currently computing our min/max-content size simply append to
  // the unpositioned floats list and abort.
  if (mode_ != NGLineBreakerMode::kContent) {
    DCHECK(out_floats_for_min_max);
    out_floats_for_min_max->push_back(item.GetLayoutObject());
    return;
  }

  if (ignore_floats_)
    return;

  // Make sure we populate the positioned_float inside the |item_result|.
  if (item_index_ <= handled_leading_floats_index_ &&
      !leading_floats_.IsEmpty()) {
    DCHECK_LT(leading_floats_index_, leading_floats_.size());
    item_result->positioned_float = leading_floats_[leading_floats_index_++];
    return;
  }

  // TODO(ikilpatrick): Add support for float break tokens inside an inline
  // layout context.
  NGUnpositionedFloat unpositioned_float(
      NGBlockNode(ToLayoutBox(item.GetLayoutObject())),
      /* break_token */ nullptr);

  LayoutUnit inline_margin_size =
      ComputeMarginBoxInlineSizeForUnpositionedFloat(
          constraint_space_, node_.Style(), &unpositioned_float);

  LayoutUnit bfc_block_offset = line_opportunity_.bfc_block_offset;

  LayoutUnit used_size = position_ + inline_margin_size +
                         ComputeFloatAncestorInlineEndSize(
                             constraint_space_, Items(), item_index_);
  bool can_fit_float =
      used_size <= line_opportunity_.AvailableFloatInlineSize().AddEpsilon();
  if (!can_fit_float) {
    // Floats need to know the current line width to determine whether to put it
    // into the current line or to the next line. Trailing spaces will be
    // removed if this line breaks here because they should be collapsed across
    // floats, but they are still included in the current line position at this
    // point. Exclude it when computing whether this float can fit or not.
    can_fit_float = used_size - TrailingCollapsibleSpaceWidth(line_info) <=
                    line_opportunity_.AvailableFloatInlineSize().AddEpsilon();
  }

  // The float should be positioned after the current line if:
  //  - It can't fit within the non-shape area. (Assuming the current position
  //    also is strictly within the non-shape area).
  //  - It will be moved down due to block-start edge alignment.
  //  - It will be moved down due to clearance.
  bool float_after_line =
      !can_fit_float ||
      exclusion_space_->LastFloatBlockStart() > bfc_block_offset ||
      exclusion_space_->ClearanceOffset(unpositioned_float.ClearType(
          constraint_space_.Direction())) > bfc_block_offset;

  // Check if we already have a pending float. That's because a float cannot be
  // higher than any block or floated box generated before.
  if (HasUnpositionedFloats(*line_info->MutableResults()) || float_after_line) {
    item_result->has_unpositioned_floats = true;
  } else {
    NGPositionedFloat positioned_float = PositionFloat(
        constraint_space_.AvailableSize(),
        constraint_space_.PercentageResolutionSize(),
        constraint_space_.ReplacedPercentageResolutionSize(),
        {constraint_space_.BfcOffset().line_offset, bfc_block_offset},
        &unpositioned_float, constraint_space_, node_.Style(),
        exclusion_space_);

    item_result->positioned_float = positioned_float;

    NGLayoutOpportunity opportunity = exclusion_space_->FindLayoutOpportunity(
        {constraint_space_.BfcOffset().line_offset, bfc_block_offset},
        constraint_space_.AvailableSize().inline_size, LogicalSize());

    DCHECK_EQ(bfc_block_offset, opportunity.rect.BlockStartOffset());

    line_opportunity_ = opportunity.ComputeLineLayoutOpportunity(
        constraint_space_, line_opportunity_.line_block_size, LayoutUnit());

    DCHECK_GE(AvailableWidth(), LayoutUnit());
  }
}

bool NGLineBreaker::ComputeOpenTagResult(
    const NGInlineItem& item,
    const NGConstraintSpace& constraint_space,
    NGInlineItemResult* item_result) {
  DCHECK_EQ(item.Type(), NGInlineItem::kOpenTag);
  DCHECK(item.Style());
  const ComputedStyle& style = *item.Style();
  item_result->has_edge = item.HasStartEdge();
  if (item.ShouldCreateBoxFragment() &&
      (style.HasBorder() || style.MayHavePadding() ||
       (style.MayHaveMargin() && item_result->has_edge))) {
    item_result->borders = ComputeLineBorders(style);
    item_result->padding = ComputeLinePadding(constraint_space, style);
    if (item_result->has_edge) {
      item_result->margins = ComputeLineMarginsForSelf(constraint_space, style);
      item_result->inline_size = item_result->margins.inline_start +
                                 item_result->borders.inline_start +
                                 item_result->padding.inline_start;
      return true;
    }
  }
  return false;
}

void NGLineBreaker::HandleOpenTag(const NGInlineItem& item,
                                  NGLineInfo* line_info) {
  NGInlineItemResult* item_result = AddItem(item, line_info);

  if (ComputeOpenTagResult(item, constraint_space_, item_result)) {
    position_ += item_result->inline_size;

    // While the spec defines "non-zero margins, padding, or borders" prevents
    // line boxes to be zero-height, tests indicate that only inline direction
    // of them do so. See should_create_line_box_.
    // Force to create a box, because such inline boxes affect line heights.
    if (!item_result->should_create_line_box && !item.IsEmptyItem())
      item_result->should_create_line_box = true;
  }

  bool was_auto_wrap = auto_wrap_;
  DCHECK(item.Style());
  const ComputedStyle& style = *item.Style();
  SetCurrentStyle(style);
  MoveToNextOf(item);

  DCHECK(!item_result->can_break_after);
  NGInlineItemResults* item_results = line_info->MutableResults();
  if (UNLIKELY(!was_auto_wrap && auto_wrap_ && item_results->size() >= 2)) {
    ComputeCanBreakAfter(std::prev(item_result), auto_wrap_, break_iterator_);
  }
}

void NGLineBreaker::HandleCloseTag(const NGInlineItem& item,
                                   NGLineInfo* line_info) {
  NGInlineItemResult* item_result = AddItem(item, line_info);

  item_result->has_edge = item.HasEndEdge();
  if (item_result->has_edge) {
    item_result->inline_size =
        ComputeInlineEndSize(constraint_space_, item.Style());
    position_ += item_result->inline_size;

    if (!item_result->should_create_line_box && !item.IsEmptyItem())
      item_result->should_create_line_box = true;
  }
  DCHECK(item.GetLayoutObject() && item.GetLayoutObject()->Parent());
  bool was_auto_wrap = auto_wrap_;
  SetCurrentStyle(item.GetLayoutObject()->Parent()->StyleRef());
  MoveToNextOf(item);

  // If the line can break after the previous item, prohibit it and allow break
  // after this close tag instead.
  if (was_auto_wrap) {
    NGInlineItemResults* item_results = line_info->MutableResults();
    if (item_results->size() >= 2) {
      NGInlineItemResult* last = std::prev(item_result);
      item_result->can_break_after = last->can_break_after;
      last->can_break_after = false;
    }
    return;
  }

  DCHECK(!item_result->can_break_after);
  if (!auto_wrap_)
    return;

  // When auto-wrap follows no-wrap, the boundary is determined by the break
  // iterator. However, when space characters follow the boundary, the break
  // iterator cannot compute this because it considers break opportunities are
  // before a run of spaces.
  const String& text = Text();
  if (item_result->end_offset < text.length() &&
      IsBreakableSpace(text[item_result->end_offset])) {
    item_result->can_break_after = true;
    return;
  }
  ComputeCanBreakAfter(item_result, auto_wrap_, break_iterator_);
}

// Handles when the last item overflows.
// At this point, item_results does not fit into the current line, and there
// are no break opportunities in item_results.back().
void NGLineBreaker::HandleOverflow(NGLineInfo* line_info) {
  // Compute the width needing to rewind. When |width_to_rewind| goes negative,
  // items can fit within the line.
  LayoutUnit available_width = AvailableWidthToFit();
  LayoutUnit width_to_rewind = position_ - available_width;
  DCHECK_GT(width_to_rewind, 0);

  // Indicates positions of items may be changed and need to UpdatePosition().
  bool position_maybe_changed = false;

  // Keep track of the shortest break opportunity.
  unsigned break_before = 0;

  // True if there is at least one item that has `break-word`.
  bool has_break_anywhere_if_overflow = break_anywhere_if_overflow_;

  // Search for a break opportunity that can fit.
  NGInlineItemResults* item_results = line_info->MutableResults();
  for (unsigned i = item_results->size(); i;) {
    NGInlineItemResult* item_result = &(*item_results)[--i];

    // Try to break after this item.
    if (i < item_results->size() - 1 && item_result->can_break_after) {
      if (width_to_rewind <= 0) {
        position_ = available_width + width_to_rewind;
        Rewind(i + 1, line_info);
        state_ = LineBreakState::kTrailing;
        return;
      }
      break_before = i + 1;
    }

    // Try to break inside of this item.
    width_to_rewind -= item_result->inline_size;
    DCHECK(item_result->item);
    const NGInlineItem& item = *item_result->item;
    if (item.Type() == NGInlineItem::kText) {
      DCHECK(item_result->shape_result ||
             (item_result->break_anywhere_if_overflow &&
              !override_break_anywhere_));
      if (width_to_rewind < 0 && item_result->may_break_inside) {
        // When the text fits but its right margin does not, the break point
        // must not be at the end.
        LayoutUnit item_available_width =
            std::min(-width_to_rewind, item_result->inline_size - 1);
        SetCurrentStyle(*item.Style());
        BreakText(item_result, item, *item.TextShapeResult(),
                  item_available_width, line_info);
#if DCHECK_IS_ON()
        item_result->CheckConsistency(true);
#endif
        // If BreakText() changed this item small enough to fit, break here.
        if (item_result->inline_size <= item_available_width) {
          DCHECK(item_result->end_offset < item.EndOffset());
          DCHECK(item_result->can_break_after);
          DCHECK_LE(i + 1, item_results->size());
          if (i + 1 == item_results->size()) {
            // If this is the last item, adjust states to accomodate the change.
            position_ =
                available_width + width_to_rewind + item_result->inline_size;
            if (line_info->LineEndFragment())
              SetLineEndFragment(nullptr, line_info);
            DCHECK_EQ(position_, line_info->ComputeWidth());
            item_index_ = item_result->item_index;
            offset_ = item_result->end_offset;
            items_data_.AssertOffset(item_index_, offset_);
          } else {
            Rewind(i + 1, line_info);
          }
          state_ = LineBreakState::kTrailing;
          return;
        }
        position_maybe_changed = true;
      }
    }

    has_break_anywhere_if_overflow |= item_result->break_anywhere_if_overflow;
  }

  // Reaching here means that the rewind point was not found.

  if (!override_break_anywhere_ && has_break_anywhere_if_overflow) {
    override_break_anywhere_ = true;
    break_iterator_.SetBreakType(LineBreakType::kBreakCharacter);
    // TODO(kojii): Not all items need to rewind, but such case is rare and
    // rewinding all items simplifes the code.
    if (!item_results->IsEmpty())
      Rewind(0, line_info);
    state_ = LineBreakState::kContinue;
    return;
  }

  // Let this line overflow.
  line_info->SetHasOverflow();

  // If there was a break opportunity, the overflow should stop there.
  if (break_before) {
    Rewind(break_before, line_info);
    state_ = LineBreakState::kTrailing;
    return;
  }

  if (position_maybe_changed) {
    trailing_whitespace_ = WhitespaceState::kUnknown;
    position_ = line_info->ComputeWidth();
  }

  state_ = LineBreakState::kTrailing;
}

void NGLineBreaker::Rewind(unsigned new_end, NGLineInfo* line_info) {
  NGInlineItemResults& item_results = *line_info->MutableResults();
  DCHECK_LT(new_end, item_results.size());

  // Avoid rewinding floats if possible. They will be added back anyway while
  // processing trailing items even when zero available width. Also this saves
  // most cases where our support for rewinding positioned floats is not great
  // yet (see below.)
  while (item_results[new_end].item->Type() == NGInlineItem::kFloating) {
    ++new_end;
    if (new_end == item_results.size()) {
      position_ = line_info->ComputeWidth();
      return;
    }
  }

  // Because floats are added to |positioned_floats_| or |unpositioned_floats_|,
  // rewinding them needs to remove from these lists too.
  for (unsigned i = item_results.size(); i > new_end;) {
    NGInlineItemResult& rewind = item_results[--i];
    if (rewind.positioned_float) {
      // TODO(kojii): We do not have mechanism to remove once positioned floats
      // yet, and that rewinding them may lay it out twice. For now, prohibit
      // rewinding positioned floats. This may results in incorrect layout, but
      // still better than rewinding them.
      new_end = i + 1;
      if (new_end == item_results.size()) {
        position_ = line_info->ComputeWidth();
        return;
      }
      break;
    }
  }

  if (new_end) {
    // Use |results[new_end - 1].end_offset| because it may have been truncated
    // and may not be equal to |results[new_end].start_offset|.
    MoveToNextOf(item_results[new_end - 1]);
    trailing_whitespace_ = WhitespaceState::kUnknown;
  } else {
    // When rewinding all items, use |results[0].start_offset|.
    const NGInlineItemResult& first_remove = item_results[new_end];
    item_index_ = first_remove.item_index;
    offset_ = first_remove.start_offset;
    trailing_whitespace_ = WhitespaceState::kLeading;
  }
  SetCurrentStyle(ComputeCurrentStyle(new_end, line_info));

  item_results.Shrink(new_end);

  trailing_collapsible_space_.reset();
  SetLineEndFragment(nullptr, line_info);
  position_ = line_info->ComputeWidth();
}

// Returns the style to use for |item_result_index|. Normally when handling
// items sequentially, the current style is updated on open/close tag. When
// rewinding, this function computes the style for the specified item.
const ComputedStyle& NGLineBreaker::ComputeCurrentStyle(
    unsigned item_result_index,
    NGLineInfo* line_info) const {
  NGInlineItemResults& item_results = *line_info->MutableResults();

  // Use the current item if it can compute the current style.
  const NGInlineItem* item = item_results[item_result_index].item;
  DCHECK(item);
  if (item->Type() == NGInlineItem::kText ||
      item->Type() == NGInlineItem::kCloseTag) {
    DCHECK(item->Style());
    return *item->Style();
  }

  // Otherwise look back an item that can compute the current style.
  while (item_result_index) {
    item = item_results[--item_result_index].item;
    if (item->Type() == NGInlineItem::kText ||
        item->Type() == NGInlineItem::kOpenTag) {
      DCHECK(item->Style());
      return *item->Style();
    }
    if (item->Type() == NGInlineItem::kCloseTag)
      return item->GetLayoutObject()->Parent()->StyleRef();
  }

  // Use the style at the beginning of the line if no items are available.
  if (break_token_) {
    DCHECK(break_token_->Style());
    return *break_token_->Style();
  }
  return line_info->LineStyle();
}

void NGLineBreaker::SetCurrentStyle(const ComputedStyle& style) {
  auto_wrap_ = style.AutoWrap();

  if (auto_wrap_) {
    LineBreakType line_break_type;
    switch (style.WordBreak()) {
      case EWordBreak::kNormal:
        break_anywhere_if_overflow_ =
            style.OverflowWrap() == EOverflowWrap::kBreakWord &&
            mode_ == NGLineBreakerMode::kContent;
        line_break_type = LineBreakType::kNormal;
        break;
      case EWordBreak::kBreakAll:
        break_anywhere_if_overflow_ = false;
        line_break_type = LineBreakType::kBreakAll;
        break;
      case EWordBreak::kBreakWord:
        break_anywhere_if_overflow_ = true;
        line_break_type = LineBreakType::kNormal;
        break;
      case EWordBreak::kKeepAll:
        break_anywhere_if_overflow_ = false;
        line_break_type = LineBreakType::kKeepAll;
        break;
    }
    if (UNLIKELY(override_break_anywhere_ && break_anywhere_if_overflow_))
      line_break_type = LineBreakType::kBreakCharacter;
    break_iterator_.SetBreakType(line_break_type);

    enable_soft_hyphen_ = style.GetHyphens() != Hyphens::kNone;
    hyphenation_ = style.GetHyphenation();

    if (style.WhiteSpace() == EWhiteSpace::kBreakSpaces)
      break_iterator_.SetBreakSpace(BreakSpaceType::kAfterEverySpace);
  }

  // The above calls are cheap & necessary. But the following are expensive
  // and do not need to be reset every time if the style doesn't change,
  // so avoid them if possible.
  if (&style == current_style_.get())
    return;

  current_style_ = &style;
  if (auto_wrap_)
    break_iterator_.SetLocale(style.LocaleForLineBreakIterator());
  spacing_.SetSpacing(style.GetFontDescription());
}

void NGLineBreaker::MoveToNextOf(const NGInlineItem& item) {
  offset_ = item.EndOffset();
  item_index_++;
}

void NGLineBreaker::MoveToNextOf(const NGInlineItemResult& item_result) {
  offset_ = item_result.end_offset;
  item_index_ = item_result.item_index;
  DCHECK(item_result.item);
  if (offset_ == item_result.item->EndOffset())
    item_index_++;
}

scoped_refptr<NGInlineBreakToken> NGLineBreaker::CreateBreakToken(
    const NGLineInfo& line_info) const {
  const Vector<NGInlineItem>& items = Items();
  if (item_index_ >= items.size())
    return NGInlineBreakToken::Create(node_);
  return NGInlineBreakToken::Create(
      node_, current_style_.get(), item_index_, offset_,
      ((is_after_forced_break_ ? NGInlineBreakToken::kIsForcedBreak : 0) |
       (line_info.UseFirstLineStyle() ? NGInlineBreakToken::kUseFirstLineStyle
                                      : 0)));
}

}  // namespace blink
