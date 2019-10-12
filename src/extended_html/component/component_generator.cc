#include "extended_html/component/component_generator.h"

#include <algorithm>
#include <memory>

#include "base/bind.h"
#include "base/logging.h"
#include "base/trace_event/trace_event.h"
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

#include "skia/include/core/SkRefCnt.h"
#include "skia/include/core/SkTime.h"

#include "cobalt/dom/text.h"
#include "cobalt/layout/base_direction.h"
#include "cobalt/layout/block_formatting_block_container_box.h"
#include "cobalt/layout/block_level_replaced_box.h"
#include "cobalt/layout/inline_container_box.h"
#include "cobalt/layout/inline_level_replaced_box.h"
#include "cobalt/layout/layout_boxes.h"
#include "cobalt/layout/layout_stat_tracker.h"
#include "cobalt/layout/text_box.h"
#include "cobalt/layout/used_style.h"
#include "cobalt/layout/white_space_processing.h"
#include "cobalt/media/base/video_frame_provider.h"
#include "cobalt/render_tree/image.h"
#include "cobalt/web_animations/keyframe_effect_read_only.h"
#include "starboard/decode_target.h"

// not in spec
#include "cobalt/layout/inline_level_skottie_box.h"
#include "cobalt/layout/block_level_skottie_box.h"

using namespace cobalt;
using namespace cobalt::cssom;
using namespace cobalt::css_parser;
using namespace cobalt::layout;
using namespace cobalt::dom;

void ComponentGenerator::VisitKeyword(cssom::KeywordValue* keyword) {
    // See https://www.w3.org/TR/CSS21/visuren.html#display-prop.
    switch (keyword->value()) {
    // Generate a block-level block container box.
    case cssom::KeywordValue::kBlock:
    case cssom::KeywordValue::kFlex:
        // The block ends the current paragraph and begins a new one that ends
        // with the block, so close the current paragraph, and create a new
        // paragraph that will close when the container box generator is
        // destroyed.
        CreateScopedParagraph(kCloseParagraph);

        container_box_ = base::WrapRefCounted(new BlockLevelBlockContainerBox(
            css_computed_style_declaration_, (*paragraph_)->GetBaseDirection(),
            context_->used_style_provider, context_->layout_stat_tracker));
        break;
    // Generate one or more inline boxes. Note that more inline boxes may be
    // generated when the original inline box is split due to participation
    // in the formatting context.
    case cssom::KeywordValue::kInline:
    case cssom::KeywordValue::kInlineFlex:
        // If the creating HTMLElement had an explicit directionality, then append
        // a directional embedding to the paragraph. This will be popped from the
        // paragraph, when the ContainerBoxGenerator goes out of scope.
        // https://dev.w3.org/html5/spec-preview/global-attributes.html#the-directionality
        // http://unicode.org/reports/tr9/#Explicit_Directional_Embeddings
        if (directionality_ == dom::kLeftToRightDirectionality) {
            has_scoped_directional_embedding_ = true;
            (*paragraph_)->AppendCodePoint(Paragraph::kLeftToRightEmbedCodePoint);
        } else if (directionality_ == dom::kRightToLeftDirectionality) {
            has_scoped_directional_embedding_ = true;
            (*paragraph_)->AppendCodePoint(Paragraph::kRightToLeftEmbedCodePoint);
        }

        // If the paragraph has not started yet, then add a no-break space to it,
        // thereby starting the paragraph without providing a wrappable location,
        // as the line should never wrap at the start of text.
        // http://unicode.org/reports/tr14/#BreakingRules
        //
        // Starting the paragraph ensures that subsequent text nodes create text
        // boxes, even when they consist of only collapsible white-space. This is
        // necessary because empty inline container boxes can justify a line's
        // existence if they have a non-zero margin, border or padding, which
        // means that the collapsible white-space is potentially wrappable
        // regardless of whether any intervening text is added to the paragraph.
        // Not creating the collapsible text box in this case would incorrectly
        // eliminate a wrappable location from the line.
        if ((*paragraph_)->GetTextEndPosition() == 0) {
            (*paragraph_)->AppendCodePoint(Paragraph::kNoBreakSpaceCodePoint);
        }

        container_box_ = base::WrapRefCounted(new InlineContainerBox(
            css_computed_style_declaration_, context_->used_style_provider,
            context_->layout_stat_tracker));
        break;
    // Generate an inline-level block container box. The inside of
    // an inline-block is formatted as a block box, and the element itself
    // is formatted as an atomic inline-level box.
    //   https://www.w3.org/TR/CSS21/visuren.html#inline-boxes
    case cssom::KeywordValue::kInlineBlock: {
        // An inline block is is treated directionally as a neutral character and
        // its line breaking behavior is equivalent to that of the Object
        // Replacement Character.
        //   https://www.w3.org/TR/CSS21/visuren.html#propdef-unicode-bidi
        //   https://www.w3.org/TR/css3-text/#line-break-details
        int32 text_position =
            (*paragraph_)
                ->AppendCodePoint(
                    Paragraph::kObjectReplacementCharacterCodePoint);
        scoped_refptr<Paragraph> prior_paragraph = *paragraph_;

        // The inline block creates a new paragraph, which the old paragraph
        // flows around. Create a new paragraph, which will close with the end
        // of the inline block. However, do not close the old paragraph, because
        // it will continue once the scope of the inline block ends.
        CreateScopedParagraph(kDoNotCloseParagraph);

        container_box_ = base::WrapRefCounted(new InlineLevelBlockContainerBox(
            css_computed_style_declaration_, (*paragraph_)->GetBaseDirection(),
            prior_paragraph, text_position, context_->used_style_provider,
            context_->layout_stat_tracker));
    } break;
    // The element generates no boxes and has no effect on layout.
    case cssom::KeywordValue::kNone:
        // Leave |container_box_| NULL.
        break;
    case cssom::KeywordValue::kAbsolute:
    case cssom::KeywordValue::kAlternate:
    case cssom::KeywordValue::kAlternateReverse:
    case cssom::KeywordValue::kAuto:
    case cssom::KeywordValue::kBackwards:
    case cssom::KeywordValue::kBaseline:
    case cssom::KeywordValue::kBoth:
    case cssom::KeywordValue::kBottom:
    case cssom::KeywordValue::kBreakWord:
    case cssom::KeywordValue::kCenter:
    case cssom::KeywordValue::kClip:
    case cssom::KeywordValue::kCollapse:
    case cssom::KeywordValue::kColumn:
    case cssom::KeywordValue::kColumnReverse:
    case cssom::KeywordValue::kContain:
    case cssom::KeywordValue::kContent:
    case cssom::KeywordValue::kCover:
    case cssom::KeywordValue::kCurrentColor:
    case cssom::KeywordValue::kCursive:
    case cssom::KeywordValue::kEllipsis:
    case cssom::KeywordValue::kEnd:
    case cssom::KeywordValue::kEquirectangular:
    case cssom::KeywordValue::kFantasy:
    case cssom::KeywordValue::kFixed:
    case cssom::KeywordValue::kFlexEnd:
    case cssom::KeywordValue::kFlexStart:
    case cssom::KeywordValue::kForwards:
    case cssom::KeywordValue::kHidden:
    case cssom::KeywordValue::kInfinite:
    case cssom::KeywordValue::kInherit:
    case cssom::KeywordValue::kInitial:
    case cssom::KeywordValue::kLeft:
    case cssom::KeywordValue::kLineThrough:
    case cssom::KeywordValue::kMiddle:
    case cssom::KeywordValue::kMonoscopic:
    case cssom::KeywordValue::kMonospace:
    case cssom::KeywordValue::kNoRepeat:
    case cssom::KeywordValue::kNormal:
    case cssom::KeywordValue::kNowrap:
    case cssom::KeywordValue::kPre:
    case cssom::KeywordValue::kPreLine:
    case cssom::KeywordValue::kPreWrap:
    case cssom::KeywordValue::kRelative:
    case cssom::KeywordValue::kRepeat:
    case cssom::KeywordValue::kReverse:
    case cssom::KeywordValue::kRight:
    case cssom::KeywordValue::kRow:
    case cssom::KeywordValue::kRowReverse:
    case cssom::KeywordValue::kSansSerif:
    case cssom::KeywordValue::kScroll:
    case cssom::KeywordValue::kSerif:
    case cssom::KeywordValue::kSolid:
    case cssom::KeywordValue::kSpaceAround:
    case cssom::KeywordValue::kSpaceBetween:
    case cssom::KeywordValue::kStart:
    case cssom::KeywordValue::kStatic:
    case cssom::KeywordValue::kStereoscopicLeftRight:
    case cssom::KeywordValue::kStereoscopicTopBottom:
    case cssom::KeywordValue::kStretch:
    case cssom::KeywordValue::kTop:
    case cssom::KeywordValue::kUppercase:
    case cssom::KeywordValue::kVisible:
    case cssom::KeywordValue::kWrap:
    case cssom::KeywordValue::kWrapReverse:
        NOTREACHED();
        break;
    }
}

void ComponentGenerator::CreateScopedParagraph(
    CloseParagraph close_prior_paragraph) {
    DCHECK(!paragraph_scoped_);

    paragraph_scoped_ = true;
    prior_paragraph_ = *paragraph_;

    // Determine the base direction of the new paragraph based upon the
    // directionality of the creating HTMLElement. If there was no explicit
    // directionality, then it is based upon the prior paragraph, meaning that
    // it is inherited from the parent element.
    // https://dev.w3.org/html5/spec-preview/global-attributes.html#the-directionality
    BaseDirection base_direction;
    if (directionality_ == dom::kLeftToRightDirectionality) {
        base_direction = kLeftToRightBaseDirection;
    } else if (directionality_ == dom::kRightToLeftDirectionality) {
        base_direction = kRightToLeftBaseDirection;
    } else {
        base_direction = prior_paragraph_->GetDirectionalEmbeddingStackDirection();
    }

    if (close_prior_paragraph == kCloseParagraph) {
        prior_paragraph_->Close();
    }

    *paragraph_ = new Paragraph(prior_paragraph_->GetLocale(), base_direction,
                                Paragraph::DirectionalEmbeddingStack(),
                                context_->line_break_iterator,
                                context_->character_break_iterator);
}
