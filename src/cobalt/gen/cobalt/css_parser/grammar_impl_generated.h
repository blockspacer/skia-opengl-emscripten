/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 27 "grammar.y" /* yacc.c:339  */

// Specify how the location of an action should be calculated in terms
// of its children.
#define YYLLOC_DEFAULT(Current, Rhs, N)          \
  if (N) {                                       \
    Current.first_line   = Rhs[1].first_line;    \
    Current.first_column = Rhs[1].first_column;  \
    Current.line_start   = Rhs[1].line_start;    \
  } else {                                       \
    Current.first_line   = Rhs[0].first_line;    \
    Current.first_column = Rhs[0].first_column;  \
    Current.line_start   = Rhs[0].line_start;    \
  }

#line 81 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar_generated.h".  */
#ifndef YY_YY_OUT_LINUX_X64X11_DEVEL_GEN_COBALT_CSS_PARSER_GRAMMAR_GENERATED_H_INCLUDED
# define YY_YY_OUT_LINUX_X64X11_DEVEL_GEN_COBALT_CSS_PARSER_GRAMMAR_GENERATED_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    kEndOfFileToken = 0,
    kMediaListEntryPointToken = 258,
    kMediaQueryEntryPointToken = 259,
    kStyleSheetEntryPointToken = 260,
    kRuleEntryPointToken = 261,
    kStyleDeclarationListEntryPointToken = 262,
    kFontFaceDeclarationListEntryPointToken = 263,
    kPropertyValueEntryPointToken = 264,
    kPropertyIntoDeclarationDataEntryPointToken = 265,
    kWhitespaceToken = 266,
    kSgmlCommentDelimiterToken = 267,
    kCommentToken = 268,
    kImportantToken = 269,
    kAllToken = 270,
    kAlignContentToken = 271,
    kAlignItemsToken = 272,
    kAlignSelfToken = 273,
    kAnimationDelayToken = 274,
    kAnimationDirectionToken = 275,
    kAnimationDurationToken = 276,
    kAnimationFillModeToken = 277,
    kAnimationIterationCountToken = 278,
    kAnimationNameToken = 279,
    kAnimationTimingFunctionToken = 280,
    kAnimationToken = 281,
    kBackgroundColorToken = 282,
    kBackgroundImageToken = 283,
    kBackgroundPositionToken = 284,
    kBackgroundRepeatToken = 285,
    kBackgroundSizeToken = 286,
    kBackgroundToken = 287,
    kBorderToken = 288,
    kBorderBottomLeftRadiusToken = 289,
    kBorderBottomRightRadiusToken = 290,
    kBorderBottomToken = 291,
    kBorderBottomColorToken = 292,
    kBorderBottomStyleToken = 293,
    kBorderBottomWidthToken = 294,
    kBorderColorToken = 295,
    kBorderLeftToken = 296,
    kBorderLeftColorToken = 297,
    kBorderLeftStyleToken = 298,
    kBorderLeftWidthToken = 299,
    kBorderRadiusToken = 300,
    kBorderRightToken = 301,
    kBorderRightColorToken = 302,
    kBorderRightStyleToken = 303,
    kBorderRightWidthToken = 304,
    kBorderStyleToken = 305,
    kBorderTopToken = 306,
    kBorderTopColorToken = 307,
    kBorderTopLeftRadiusToken = 308,
    kBorderTopRightRadiusToken = 309,
    kBorderTopStyleToken = 310,
    kBorderTopWidthToken = 311,
    kBorderWidthToken = 312,
    kBottomToken = 313,
    kBoxShadowToken = 314,
    kColorToken = 315,
    kContentToken = 316,
    kDisplayToken = 317,
    kFilterToken = 318,
    kFlexToken = 319,
    kFlexBasisToken = 320,
    kFlexDirectionToken = 321,
    kFlexFlowToken = 322,
    kFlexGrowToken = 323,
    kFlexShrinkToken = 324,
    kFlexWrapToken = 325,
    kFontToken = 326,
    kFontFamilyToken = 327,
    kFontSizeToken = 328,
    kFontStyleToken = 329,
    kFontWeightToken = 330,
    kHeightToken = 331,
    kIntersectionObserverRootMarginToken = 332,
    kJustifyContentToken = 333,
    kLeftToken = 334,
    kLineHeightToken = 335,
    kMarginBottomToken = 336,
    kMarginLeftToken = 337,
    kMarginRightToken = 338,
    kMarginToken = 339,
    kMarginTopToken = 340,
    kMaxHeightToken = 341,
    kMaxWidthToken = 342,
    kMinHeightToken = 343,
    kMinWidthToken = 344,
    kOpacityToken = 345,
    kOrderToken = 346,
    kOutlineToken = 347,
    kOutlineColorToken = 348,
    kOutlineStyleToken = 349,
    kOutlineWidthToken = 350,
    kOverflowToken = 351,
    kOverflowWrapToken = 352,
    kPaddingBottomToken = 353,
    kPaddingLeftToken = 354,
    kPaddingRightToken = 355,
    kPaddingToken = 356,
    kPaddingTopToken = 357,
    kPointerEventsToken = 358,
    kPositionToken = 359,
    kRightToken = 360,
    kSrcToken = 361,
    kTextAlignToken = 362,
    kTextDecorationToken = 363,
    kTextDecorationColorToken = 364,
    kTextDecorationLineToken = 365,
    kTextIndentToken = 366,
    kTextOverflowToken = 367,
    kTextShadowToken = 368,
    kTextTransformToken = 369,
    kTopToken = 370,
    kTransformToken = 371,
    kTransformOriginToken = 372,
    kTransitionDelayToken = 373,
    kTransitionDurationToken = 374,
    kTransitionPropertyToken = 375,
    kTransitionTimingFunctionToken = 376,
    kTransitionToken = 377,
    kUnicodeRangePropertyToken = 378,
    kVerticalAlignToken = 379,
    kVisibilityToken = 380,
    kWhiteSpacePropertyToken = 381,
    kWidthToken = 382,
    kWordWrapToken = 383,
    kZIndexToken = 384,
    kAbsoluteToken = 385,
    kAlternateToken = 386,
    kAlternateReverseToken = 387,
    kAquaToken = 388,
    kAtToken = 389,
    kAutoToken = 390,
    kBackwardsToken = 391,
    kBaselineToken = 392,
    kBlackToken = 393,
    kBlockToken = 394,
    kBlueToken = 395,
    kBoldToken = 396,
    kBothToken = 397,
    kBreakWordToken = 398,
    kCenterToken = 399,
    kCircleToken = 400,
    kClipToken = 401,
    kClosestCornerToken = 402,
    kClosestSideToken = 403,
    kCollapseToken = 404,
    kColumnToken = 405,
    kColumnReverseToken = 406,
    kContainToken = 407,
    kCoverToken = 408,
    kCursiveToken = 409,
    kEaseInOutToken = 410,
    kEaseInToken = 411,
    kEaseOutToken = 412,
    kEaseToken = 413,
    kEllipseToken = 414,
    kEllipsisToken = 415,
    kEndToken = 416,
    kEquirectangularToken = 417,
    kFantasyToken = 418,
    kFarthestCornerToken = 419,
    kFarthestSideToken = 420,
    kFixedToken = 421,
    kFlexEndToken = 422,
    kFlexStartToken = 423,
    kForwardsToken = 424,
    kFromToken = 425,
    kFuchsiaToken = 426,
    kGrayToken = 427,
    kGreenToken = 428,
    kHiddenToken = 429,
    kInfiniteToken = 430,
    kInheritToken = 431,
    kInitialToken = 432,
    kInlineBlockToken = 433,
    kInlineToken = 434,
    kInlineFlexToken = 435,
    kInsetToken = 436,
    kItalicToken = 437,
    kLimeToken = 438,
    kLinearToken = 439,
    kLineThroughToken = 440,
    kMaroonToken = 441,
    kMiddleToken = 442,
    kMonoscopicToken = 443,
    kMonospaceToken = 444,
    kNavyToken = 445,
    kNoneToken = 446,
    kNoRepeatToken = 447,
    kNormalToken = 448,
    kNowrapToken = 449,
    kObliqueToken = 450,
    kOliveToken = 451,
    kPreToken = 452,
    kPreLineToken = 453,
    kPreWrapToken = 454,
    kPurpleToken = 455,
    kRectangularToken = 456,
    kRedToken = 457,
    kRepeatToken = 458,
    kRepeatXToken = 459,
    kRepeatYToken = 460,
    kRelativeToken = 461,
    kReverseToken = 462,
    kRowToken = 463,
    kRowReverseToken = 464,
    kSansSerifToken = 465,
    kScrollToken = 466,
    kSerifToken = 467,
    kSilverToken = 468,
    kSolidToken = 469,
    kSpaceAroundToken = 470,
    kSpaceBetweenToken = 471,
    kStartToken = 472,
    kStaticToken = 473,
    kStepEndToken = 474,
    kStepStartToken = 475,
    kStereoscopicLeftRightToken = 476,
    kStereoscopicTopBottomToken = 477,
    kStretchToken = 478,
    kTealToken = 479,
    kToToken = 480,
    kTransparentToken = 481,
    kUppercaseToken = 482,
    kVisibleToken = 483,
    kWhiteToken = 484,
    kWrapToken = 485,
    kWrapReverseToken = 486,
    kYellowToken = 487,
    kActiveToken = 488,
    kEmptyToken = 489,
    kFocusToken = 490,
    kHoverToken = 491,
    kAfterToken = 492,
    kBeforeToken = 493,
    kIncludesToken = 494,
    kDashMatchToken = 495,
    kBeginsWithToken = 496,
    kEndsWithToken = 497,
    kContainsToken = 498,
    kMediaAndToken = 499,
    kMediaNotToken = 500,
    kMediaOnlyToken = 501,
    kMediaMinimumToken = 502,
    kMediaMaximumToken = 503,
    kAllMediaTypeToken = 504,
    kTVMediaTypeToken = 505,
    kScreenMediaTypeToken = 506,
    kLengthMediaFeatureTypeToken = 507,
    kOrientationMediaFeatureTypeToken = 508,
    kRatioMediaFeatureTypeToken = 509,
    kNonNegativeIntegerMediaFeatureTypeToken = 510,
    kResolutionMediaFeatureTypeToken = 511,
    kScanMediaFeatureTypeToken = 512,
    kZeroOrOneMediaFeatureTypeToken = 513,
    kInterlaceMediaFeatureKeywordValueToken = 514,
    kLandscapeMediaFeatureKeywordValueToken = 515,
    kPortraitMediaFeatureKeywordValueToken = 516,
    kProgressiveMediaFeatureKeywordValueToken = 517,
    kSupportsAndToken = 518,
    kSupportsNotToken = 519,
    kSupportsOrToken = 520,
    kImportToken = 521,
    kKeyframesToken = 522,
    kPageToken = 523,
    kMediaToken = 524,
    kFontFaceToken = 525,
    kCharsetToken = 526,
    kNamespaceToken = 527,
    kSupportsToken = 528,
    kTopLeftCornerToken = 529,
    kTopLeftToken = 530,
    kTopCenterToken = 531,
    kTopRightToken = 532,
    kTopRightCornerToken = 533,
    kBottomLeftCornerToken = 534,
    kBottomLeftToken = 535,
    kBottomCenterToken = 536,
    kBottomRightToken = 537,
    kBottomRightCornerToken = 538,
    kLeftTopToken = 539,
    kLeftMiddleToken = 540,
    kLeftBottomToken = 541,
    kRightTopToken = 542,
    kRightMiddleToken = 543,
    kRightBottomToken = 544,
    kCalcFunctionToken = 545,
    kCubicBezierFunctionToken = 546,
    kCueFunctionToken = 547,
    kFormatFunctionToken = 548,
    kLinearGradientFunctionToken = 549,
    kLocalFunctionToken = 550,
    kMapToMeshFunctionToken = 551,
    kMatrixFunctionToken = 552,
    kMatrix3dFunctionToken = 553,
    kNotFunctionToken = 554,
    kNthChildFunctionToken = 555,
    kNthLastChildFunctionToken = 556,
    kNthLastOfTypeFunctionToken = 557,
    kNthOfTypeFunctionToken = 558,
    kRotateFunctionToken = 559,
    kScaleFunctionToken = 560,
    kScaleXFunctionToken = 561,
    kScaleYFunctionToken = 562,
    kStepsFunctionToken = 563,
    kTranslateFunctionToken = 564,
    kTranslateXFunctionToken = 565,
    kTranslateYFunctionToken = 566,
    kTranslateZFunctionToken = 567,
    kRadialGradientFunctionToken = 568,
    kRGBFunctionToken = 569,
    kRGBAFunctionToken = 570,
    kCobaltMtmFunctionToken = 571,
    kCobaltUiNavFocusTransformFunctionToken = 572,
    kCobaltUiNavSpotlightTransformFunctionToken = 573,
    kStringToken = 574,
    kIdentifierToken = 575,
    kNthToken = 576,
    kHexToken = 577,
    kIdSelectorToken = 578,
    kUriToken = 579,
    kInvalidFunctionToken = 580,
    kInvalidNumberToken = 581,
    kInvalidDimensionToken = 582,
    kInvalidAtBlockToken = 583,
    kOtherBrowserAtBlockToken = 584,
    kIntegerToken = 585,
    kRealToken = 586,
    kPercentageToken = 587,
    kRootElementFontSizesAkaRemToken = 588,
    kZeroGlyphWidthsAkaChToken = 589,
    kFontSizesAkaEmToken = 590,
    kXHeightsAkaExToken = 591,
    kPixelsToken = 592,
    kCentimetersToken = 593,
    kMillimetersToken = 594,
    kInchesToken = 595,
    kPointsToken = 596,
    kPicasToken = 597,
    kDegreesToken = 598,
    kRadiansToken = 599,
    kGradiansToken = 600,
    kTurnsToken = 601,
    kMillisecondsToken = 602,
    kSecondsToken = 603,
    kHertzToken = 604,
    kKilohertzToken = 605,
    kViewportWidthPercentsAkaVwToken = 606,
    kViewportHeightPercentsAkaVhToken = 607,
    kViewportSmallerSizePercentsAkaVminToken = 608,
    kViewportLargerSizePercentsAkaVmaxToken = 609,
    kDotsPerPixelToken = 610,
    kDotsPerInchToken = 611,
    kDotsPerCentimeterToken = 612,
    kFractionsToken = 613,
    kUnicodeRangeToken = 614
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "grammar.y" /* yacc.c:355  */

  float real;
  int integer;
  TrivialIntPair integer_pair;
  TrivialStringPiece string;
#line 482 "grammar.y" /* yacc.c:355  */
 bool important; 
#line 487 "grammar.y" /* yacc.c:355  */
 cssom::RGBAColorValue* color; 
#line 491 "grammar.y" /* yacc.c:355  */
 cssom::ColorStop* color_stop; 
#line 495 "grammar.y" /* yacc.c:355  */
 cssom::ColorStopList* color_stop_list; 
#line 499 "grammar.y" /* yacc.c:355  */
 cssom::PercentageValue* percentage; 
#line 503 "grammar.y" /* yacc.c:355  */
 cssom::LengthValue* length; 
#line 510 "grammar.y" /* yacc.c:355  */
 cssom::RatioValue* ratio; 
#line 514 "grammar.y" /* yacc.c:355  */
 cssom::ResolutionValue* resolution; 
#line 518 "grammar.y" /* yacc.c:355  */
 cssom::StringValue* string_value; 
#line 529 "grammar.y" /* yacc.c:355  */
 int64 time; 
#line 532 "grammar.y" /* yacc.c:355  */
 PropertyDeclaration* property_declaration; 
#line 543 "grammar.y" /* yacc.c:355  */
 cssom::PropertyValue* property_value; 
#line 661 "grammar.y" /* yacc.c:355  */
 std::vector<float>* number_matrix; 
#line 665 "grammar.y" /* yacc.c:355  */
 glm::mat4* matrix4x4; 
#line 669 "grammar.y" /* yacc.c:355  */
 MarginOrPaddingShorthand* margin_or_padding_shorthand; 
#line 673 "grammar.y" /* yacc.c:355  */
 SingleAnimationShorthand* single_animation; 
#line 677 "grammar.y" /* yacc.c:355  */
 AnimationShorthandBuilder* animation_builder; 
#line 681 "grammar.y" /* yacc.c:355  */
 AnimationShorthand* animation; 
#line 685 "grammar.y" /* yacc.c:355  */
 FontShorthand* font; 
#line 691 "grammar.y" /* yacc.c:355  */
 TransitionShorthand* transition; 
#line 697 "grammar.y" /* yacc.c:355  */
 cssom::CSSStyleSheet* style_sheet; 
#line 701 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleList* rule_list; 
#line 705 "grammar.y" /* yacc.c:355  */
 cssom::AttributeSelector::ValueMatchType attribute_match; 
#line 708 "grammar.y" /* yacc.c:355  */
 cssom::SimpleSelector* simple_selector; 
#line 719 "grammar.y" /* yacc.c:355  */
 cssom::CompoundSelector* compound_selector; 
#line 723 "grammar.y" /* yacc.c:355  */
 cssom::Combinator* combinator; 
#line 727 "grammar.y" /* yacc.c:355  */
 cssom::ComplexSelector* complex_selector; 
#line 731 "grammar.y" /* yacc.c:355  */
 cssom::Selectors* selectors; 
#line 735 "grammar.y" /* yacc.c:355  */
 cssom::LinearGradientValue::SideOrCorner side_or_corner; 
#line 738 "grammar.y" /* yacc.c:355  */
 int sign; 
#line 743 "grammar.y" /* yacc.c:355  */
 cssom::PropertyKey property_key; 
#line 746 "grammar.y" /* yacc.c:355  */
 cssom::CSSDeclaredStyleData* style_declaration_data; 
#line 750 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleStyleDeclaration* style_declaration; 
#line 754 "grammar.y" /* yacc.c:355  */
 cssom::CSSFontFaceRule* font_face_rule; 
#line 758 "grammar.y" /* yacc.c:355  */
 cssom::CSSKeyframeRule* keyframe_rule; 
#line 762 "grammar.y" /* yacc.c:355  */
 cssom::CSSKeyframesRule* keyframes_rule; 
#line 766 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleList* keyframe_rule_list; 
#line 770 "grammar.y" /* yacc.c:355  */
 float keyframe_offset; 
#line 773 "grammar.y" /* yacc.c:355  */
 std::vector<float>* keyframe_selector; 
#line 777 "grammar.y" /* yacc.c:355  */
 cssom::CSSFontFaceDeclarationData* font_face_declaration_data; 
#line 781 "grammar.y" /* yacc.c:355  */
 cssom::CSSMediaRule* media_rule; 
#line 785 "grammar.y" /* yacc.c:355  */
 cssom::MediaList* media_list; 
#line 789 "grammar.y" /* yacc.c:355  */
 cssom::MediaQuery* media_query; 
#line 793 "grammar.y" /* yacc.c:355  */
 bool evaluated_media_type; 
#line 796 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeatures* media_features; 
#line 800 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeature* media_feature; 
#line 807 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeatureOperator media_feature_operator; 
#line 810 "grammar.y" /* yacc.c:355  */
 cssom::CSSStyleRule* style_rule; 
#line 814 "grammar.y" /* yacc.c:355  */
 cssom::CSSRule* css_rule; 
#line 818 "grammar.y" /* yacc.c:355  */
 cssom::PropertyListValue::Builder* property_list; 
#line 838 "grammar.y" /* yacc.c:355  */
 cssom::PropertyListValue* property_list_value; 
#line 846 "grammar.y" /* yacc.c:355  */
 cssom::TransformFunction* transform_function; 
#line 850 "grammar.y" /* yacc.c:355  */
 cssom::TransformFunctionListValue::Builder* transform_functions; 
#line 854 "grammar.y" /* yacc.c:355  */
 cssom::FilterFunction* filter_function; 
#line 859 "grammar.y" /* yacc.c:355  */
 cssom::FilterFunctionListValue::Builder* cobalt_mtm_filter_functions; 
#line 863 "grammar.y" /* yacc.c:355  */

  cssom::MapToMeshFunction::MeshSpec* cobalt_map_to_mesh_spec; 
#line 868 "grammar.y" /* yacc.c:355  */

  cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder* cobalt_mtm_resolution_matched_meshes; 
#line 873 "grammar.y" /* yacc.c:355  */
 cssom::MapToMeshFunction::ResolutionMatchedMesh* cobalt_mtm_resolution_matched_mesh; 
#line 877 "grammar.y" /* yacc.c:355  */
 cssom::KeywordValue* stereo_mode; 
#line 882 "grammar.y" /* yacc.c:355  */
 cssom::TimeListValue::Builder* time_list; 
#line 886 "grammar.y" /* yacc.c:355  */
 cssom::PropertyKeyListValue::Builder* property_name_list; 
#line 890 "grammar.y" /* yacc.c:355  */

  cssom::SteppingTimingFunction::ValueChangeLocation
      stepping_value_change_location;
#line 896 "grammar.y" /* yacc.c:355  */
 cssom::TimingFunction* timing_function; 
#line 900 "grammar.y" /* yacc.c:355  */

  cssom::TimingFunctionListValue::Builder*
      timing_function_list;
#line 908 "grammar.y" /* yacc.c:355  */
 SingleTransitionShorthand* single_transition; 
#line 912 "grammar.y" /* yacc.c:355  */
 TransitionShorthandBuilder* transition_builder; 
#line 916 "grammar.y" /* yacc.c:355  */
 BackgroundShorthandLayer* background_shorthand_layer; 
#line 926 "grammar.y" /* yacc.c:355  */
 PositionParseStructure* position_structure; 
#line 930 "grammar.y" /* yacc.c:355  */
 BorderOrOutlineShorthand* border_or_outline_shorthand; 
#line 935 "grammar.y" /* yacc.c:355  */
 FlexShorthand* flex_shorthand; 
#line 942 "grammar.y" /* yacc.c:355  */
 FlexFlowShorthand* flex_flow_shorthand; 
#line 946 "grammar.y" /* yacc.c:355  */
 ShadowPropertyInfo* shadow_info; 
#line 950 "grammar.y" /* yacc.c:355  */
 TextDecorationShorthand* text_decoration_shorthand; 
#line 955 "grammar.y" /* yacc.c:355  */
 cssom::RadialGradientValue::SizeKeyword size_keyword; 

#line 643 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ParserImpl* parser_impl, Scanner* scanner);

#endif /* !YY_YY_OUT_LINUX_X64X11_DEVEL_GEN_COBALT_CSS_PARSER_GRAMMAR_GENERATED_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10124

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  377
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  282
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1089
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2033

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   614

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     362,   363,   365,   372,   364,   374,   369,   375,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   370,   376,
       2,   366,   371,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   367,     2,   368,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   360,     2,   361,   373,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   970,   970,   971,   975,   976,   988,  1009,  1027,  1030,
    1038,  1041,  1048,  1049,  1057,  1060,  1063,  1066,  1069,  1072,
    1075,  1082,  1086,  1090,  1097,  1100,  1104,  1107,  1116,  1117,
    1118,  1119,  1127,  1135,  1140,  1148,  1150,  1151,  1152,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1165,  1166,  1167,  1172,
    1175,  1185,  1189,  1193,  1197,  1201,  1212,  1216,  1221,  1225,
    1234,  1243,  1247,  1260,  1269,  1273,  1278,  1289,  1312,  1315,
    1322,  1325,  1328,  1341,  1343,  1347,  1351,  1355,  1359,  1363,
    1367,  1371,  1375,  1379,  1383,  1387,  1391,  1395,  1399,  1403,
    1407,  1411,  1415,  1419,  1423,  1427,  1431,  1435,  1439,  1443,
    1447,  1451,  1455,  1459,  1463,  1467,  1471,  1475,  1479,  1483,
    1487,  1491,  1495,  1499,  1503,  1507,  1511,  1515,  1519,  1523,
    1527,  1531,  1535,  1539,  1543,  1547,  1551,  1555,  1559,  1563,
    1567,  1571,  1575,  1579,  1583,  1587,  1591,  1595,  1599,  1603,
    1607,  1611,  1615,  1619,  1623,  1627,  1631,  1635,  1639,  1643,
    1647,  1651,  1655,  1659,  1663,  1667,  1671,  1675,  1679,  1683,
    1687,  1691,  1695,  1699,  1703,  1707,  1711,  1715,  1719,  1723,
    1727,  1731,  1735,  1739,  1743,  1747,  1751,  1755,  1759,  1763,
    1767,  1771,  1775,  1779,  1783,  1787,  1791,  1795,  1799,  1804,
    1807,  1810,  1813,  1816,  1819,  1822,  1825,  1828,  1831,  1834,
    1837,  1840,  1844,  1847,  1850,  1853,  1856,  1859,  1862,  1865,
    1868,  1871,  1875,  1878,  1881,  1884,  1887,  1890,  1893,  1896,
    1899,  1902,  1905,  1908,  1911,  1914,  1918,  1921,  1924,  1927,
    1930,  1933,  1936,  1939,  1942,  1945,  1948,  1951,  1954,  1957,
    1960,  1963,  1966,  1969,  1972,  1975,  1978,  1981,  1984,  1987,
    1990,  1993,  1996,  1999,  2002,  2005,  2008,  2011,  2014,  2017,
    2020,  2023,  2026,  2029,  2032,  2035,  2039,  2042,  2045,  2048,
    2051,  2054,  2057,  2060,  2063,  2066,  2069,  2072,  2075,  2078,
    2082,  2086,  2089,  2092,  2096,  2099,  2102,  2105,  2108,  2111,
    2114,  2118,  2121,  2124,  2127,  2131,  2134,  2142,  2151,  2157,
    2160,  2163,  2166,  2169,  2172,  2180,  2183,  2187,  2197,  2206,
    2209,  2228,  2238,  2244,  2254,  2261,  2273,  2277,  2293,  2296,
    2299,  2302,  2305,  2314,  2315,  2316,  2317,  2318,  2319,  2320,
    2327,  2337,  2354,  2357,  2360,  2363,  2372,  2382,  2395,  2401,
    2411,  2430,  2439,  2440,  2441,  2448,  2461,  2468,  2479,  2492,
    2493,  2498,  2512,  2519,  2533,  2543,  2551,  2557,  2571,  2574,
    2578,  2582,  2588,  2594,  2607,  2615,  2623,  2636,  2639,  2642,
    2645,  2653,  2662,  2666,  2671,  2677,  2678,  2683,  2684,  2698,
    2701,  2709,  2736,  2745,  2754,  2757,  2760,  2763,  2766,  2769,
    2772,  2775,  2778,  2781,  2784,  2787,  2790,  2793,  2796,  2799,
    2802,  2808,  2819,  2822,  2828,  2831,  2837,  2847,  2865,  2868,
    2874,  2889,  2901,  2902,  2903,  2910,  2920,  2925,  2936,  2941,
    2956,  2967,  2968,  2985,  2986,  2990,  2993,  3001,  3006,  3013,
    3016,  3019,  3022,  3028,  3029,  3067,  3074,  3078,  3086,  3089,
    3092,  3095,  3101,  3104,  3113,  3120,  3127,  3137,  3140,  3143,
    3154,  3163,  3172,  3184,  3190,  3193,  3198,  3207,  3216,  3225,
    3234,  3243,  3252,  3262,  3275,  3276,  3279,  3282,  3288,  3292,
    3303,  3309,  3313,  3316,  3319,  3322,  3325,  3328,  3332,  3338,
    3353,  3384,  3387,  3394,  3397,  3403,  3411,  3419,  3427,  3438,
    3439,  3443,  3444,  3445,  3449,  3456,  3468,  3474,  3477,  3483,
    3484,  3491,  3494,  3502,  3512,  3522,  3525,  3528,  3534,  3535,
    3541,  3544,  3552,  3562,  3573,  3577,  3578,  3582,  3585,  3593,
    3603,  3620,  3630,  3641,  3655,  3658,  3671,  3672,  3687,  3690,
    3691,  3695,  3698,  3706,  3716,  3725,  3739,  3748,  3759,  3762,
    3768,  3782,  3789,  3802,  3808,  3811,  3817,  3818,  3824,  3827,
    3830,  3831,  3834,  3840,  3843,  3846,  3849,  3852,  3855,  3858,
    3865,  3870,  3879,  3887,  3888,  3892,  3896,  3907,  3913,  3921,
    3924,  3931,  3940,  3941,  3948,  3952,  3960,  3977,  3981,  3985,
    3996,  4027,  4033,  4038,  4047,  4048,  4054,  4057,  4065,  4066,
    4069,  4075,  4078,  4118,  4119,  4122,  4135,  4143,  4158,  4165,
    4170,  4174,  4185,  4197,  4220,  4237,  4238,  4239,  4244,  4255,
    4268,  4281,  4297,  4309,  4312,  4313,  4319,  4322,  4323,  4330,
    4333,  4336,  4339,  4342,  4348,  4349,  4356,  4357,  4365,  4372,
    4383,  4396,  4408,  4417,  4418,  4419,  4426,  4427,  4435,  4438,
    4441,  4444,  4447,  4455,  4458,  4461,  4471,  4472,  4480,  4488,
    4500,  4515,  4530,  4543,  4546,  4549,  4556,  4559,  4562,  4565,
    4568,  4574,  4577,  4586,  4589,  4592,  4595,  4598,  4601,  4607,
    4610,  4616,  4617,  4623,  4634,  4648,  4651,  4660,  4661,  4677,
    4680,  4687,  4690,  4693,  4697,  4711,  4724,  4727,  4733,  4747,
    4753,  4765,  4771,  4774,  4780,  4783,  4786,  4793,  4800,  4806,
    4813,  4820,  4828,  4839,  4850,  4859,  4869,  4882,  4897,  4907,
    4910,  4919,  4922,  4929,  4935,  4939,  4958,  4964,  4970,  4979,
    4985,  4988,  4991,  4994,  4997,  5004,  5007,  5010,  5013,  5018,
    5022,  5029,  5035,  5040,  5044,  5047,  5053,  5070,  5081,  5084,
    5087,  5090,  5093,  5096,  5099,  5105,  5109,  5117,  5125,  5130,
    5136,  5139,  5142,  5145,  5151,  5155,  5163,  5169,  5170,  5180,
    5186,  5189,  5192,  5195,  5201,  5205,  5213,  5219,  5220,  5231,
    5234,  5240,  5244,  5252,  5258,  5259,  5269,  5272,  5278,  5282,
    5290,  5296,  5297,  5307,  5313,  5321,  5329,  5337,  5345,  5357,
    5365,  5372,  5376,  5380,  5389,  5415,  5438,  5464,  5481,  5485,
    5489,  5494,  5498,  5506,  5515,  5518,  5524,  5531,  5539,  5550,
    5562,  5570,  5577,  5581,  5585,  5594,  5614,  5633,  5676,  5689,
    5695,  5699,  5703,  5713,  5716,  5719,  5722,  5725,  5728,  5736,
    5737,  5738,  5745,  5748,  5749,  5755,  5758,  5759,  5763,  5764,
    5768,  5771,  5772,  5780,  5783,  5786,  5793,  5796,  5803,  5806,
    5815,  5816,  5817,  5824,  5825,  5826,  5829,  5836,  5837,  5838,
    5845,  5848,  5849,  5850,  5855,  5858,  5869,  5870,  5871,  5877,
    5878,  5881,  5888,  5891,  5894,  5902,  5910,  5920,  5929,  5941,
    5951,  5958,  5968,  5976,  5984,  6002,  6006,  6009,  6010,  6025,
    6028,  6034,  6037,  6044,  6047,  6050,  6053,  6061,  6062,  6068,
    6078,  6091,  6094,  6102,  6103,  6117,  6120,  6123,  6129,  6130,
    6144,  6147,  6150,  6153,  6156,  6159,  6162,  6165,  6168,  6171,
    6174,  6187,  6188,  6194,  6200,  6206,  6212,  6218,  6224,  6230,
    6236,  6242,  6248,  6288,  6323,  6329,  6335,  6341,  6347,  6353,
    6409,  6415,  6421,  6446,  6452,  6458,  6464,  6499,  6524,  6530,
    6536,  6542,  6577,  6602,  6608,  6614,  6620,  6655,  6680,  6686,
    6692,  6698,  6704,  6710,  6745,  6751,  6757,  6763,  6769,  6775,
    6781,  6807,  6813,  6819,  6842,  6848,  6854,  6860,  6891,  6897,
    6903,  6909,  6915,  6921,  6927,  6933,  6939,  6945,  6951,  6957,
    6963,  6969,  6993,  6999,  7005,  7011,  7017,  7023,  7029,  7058,
    7064,  7070,  7076,  7082,  7088,  7094,  7100,  7106,  7112,  7137,
    7143,  7149,  7155,  7161,  7167,  7173,  7196,  7202,  7208,  7214,
    7220,  7226,  7232,  7238,  7244,  7272,  7278,  7284,  7290,  7296,
    7302,  7308,  7314,  7320,  7326,  7333,  7339,  7358,  7364,  7369,
    7385,  7404,  7412,  7423,  7430,  7433,  7446,  7463,  7464,  7473,
    7476,  7484,  7485,  7486,  7487,  7488,  7489,  7493,  7496,  7514,
    7524,  7530,  7536,  7542,  7547,  7554,  7561,  7587,  7606,  7609,
    7613,  7618,  7627,  7634,  7656,  7672,  7676,  7689,  7690,  7694,
    7698,  7705,  7718,  7733,  7736,  7743,  7746,  7752,  7755,  7758
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "kEndOfFileToken", "error", "$undefined", "kMediaListEntryPointToken",
  "kMediaQueryEntryPointToken", "kStyleSheetEntryPointToken",
  "kRuleEntryPointToken", "kStyleDeclarationListEntryPointToken",
  "kFontFaceDeclarationListEntryPointToken",
  "kPropertyValueEntryPointToken",
  "kPropertyIntoDeclarationDataEntryPointToken", "kWhitespaceToken",
  "kSgmlCommentDelimiterToken", "kCommentToken", "kImportantToken",
  "kAllToken", "kAlignContentToken", "kAlignItemsToken", "kAlignSelfToken",
  "kAnimationDelayToken", "kAnimationDirectionToken",
  "kAnimationDurationToken", "kAnimationFillModeToken",
  "kAnimationIterationCountToken", "kAnimationNameToken",
  "kAnimationTimingFunctionToken", "kAnimationToken",
  "kBackgroundColorToken", "kBackgroundImageToken",
  "kBackgroundPositionToken", "kBackgroundRepeatToken",
  "kBackgroundSizeToken", "kBackgroundToken", "kBorderToken",
  "kBorderBottomLeftRadiusToken", "kBorderBottomRightRadiusToken",
  "kBorderBottomToken", "kBorderBottomColorToken",
  "kBorderBottomStyleToken", "kBorderBottomWidthToken",
  "kBorderColorToken", "kBorderLeftToken", "kBorderLeftColorToken",
  "kBorderLeftStyleToken", "kBorderLeftWidthToken", "kBorderRadiusToken",
  "kBorderRightToken", "kBorderRightColorToken", "kBorderRightStyleToken",
  "kBorderRightWidthToken", "kBorderStyleToken", "kBorderTopToken",
  "kBorderTopColorToken", "kBorderTopLeftRadiusToken",
  "kBorderTopRightRadiusToken", "kBorderTopStyleToken",
  "kBorderTopWidthToken", "kBorderWidthToken", "kBottomToken",
  "kBoxShadowToken", "kColorToken", "kContentToken", "kDisplayToken",
  "kFilterToken", "kFlexToken", "kFlexBasisToken", "kFlexDirectionToken",
  "kFlexFlowToken", "kFlexGrowToken", "kFlexShrinkToken", "kFlexWrapToken",
  "kFontToken", "kFontFamilyToken", "kFontSizeToken", "kFontStyleToken",
  "kFontWeightToken", "kHeightToken",
  "kIntersectionObserverRootMarginToken", "kJustifyContentToken",
  "kLeftToken", "kLineHeightToken", "kMarginBottomToken",
  "kMarginLeftToken", "kMarginRightToken", "kMarginToken",
  "kMarginTopToken", "kMaxHeightToken", "kMaxWidthToken",
  "kMinHeightToken", "kMinWidthToken", "kOpacityToken", "kOrderToken",
  "kOutlineToken", "kOutlineColorToken", "kOutlineStyleToken",
  "kOutlineWidthToken", "kOverflowToken", "kOverflowWrapToken",
  "kPaddingBottomToken", "kPaddingLeftToken", "kPaddingRightToken",
  "kPaddingToken", "kPaddingTopToken", "kPointerEventsToken",
  "kPositionToken", "kRightToken", "kSrcToken", "kTextAlignToken",
  "kTextDecorationToken", "kTextDecorationColorToken",
  "kTextDecorationLineToken", "kTextIndentToken", "kTextOverflowToken",
  "kTextShadowToken", "kTextTransformToken", "kTopToken",
  "kTransformToken", "kTransformOriginToken", "kTransitionDelayToken",
  "kTransitionDurationToken", "kTransitionPropertyToken",
  "kTransitionTimingFunctionToken", "kTransitionToken",
  "kUnicodeRangePropertyToken", "kVerticalAlignToken", "kVisibilityToken",
  "kWhiteSpacePropertyToken", "kWidthToken", "kWordWrapToken",
  "kZIndexToken", "kAbsoluteToken", "kAlternateToken",
  "kAlternateReverseToken", "kAquaToken", "kAtToken", "kAutoToken",
  "kBackwardsToken", "kBaselineToken", "kBlackToken", "kBlockToken",
  "kBlueToken", "kBoldToken", "kBothToken", "kBreakWordToken",
  "kCenterToken", "kCircleToken", "kClipToken", "kClosestCornerToken",
  "kClosestSideToken", "kCollapseToken", "kColumnToken",
  "kColumnReverseToken", "kContainToken", "kCoverToken", "kCursiveToken",
  "kEaseInOutToken", "kEaseInToken", "kEaseOutToken", "kEaseToken",
  "kEllipseToken", "kEllipsisToken", "kEndToken", "kEquirectangularToken",
  "kFantasyToken", "kFarthestCornerToken", "kFarthestSideToken",
  "kFixedToken", "kFlexEndToken", "kFlexStartToken", "kForwardsToken",
  "kFromToken", "kFuchsiaToken", "kGrayToken", "kGreenToken",
  "kHiddenToken", "kInfiniteToken", "kInheritToken", "kInitialToken",
  "kInlineBlockToken", "kInlineToken", "kInlineFlexToken", "kInsetToken",
  "kItalicToken", "kLimeToken", "kLinearToken", "kLineThroughToken",
  "kMaroonToken", "kMiddleToken", "kMonoscopicToken", "kMonospaceToken",
  "kNavyToken", "kNoneToken", "kNoRepeatToken", "kNormalToken",
  "kNowrapToken", "kObliqueToken", "kOliveToken", "kPreToken",
  "kPreLineToken", "kPreWrapToken", "kPurpleToken", "kRectangularToken",
  "kRedToken", "kRepeatToken", "kRepeatXToken", "kRepeatYToken",
  "kRelativeToken", "kReverseToken", "kRowToken", "kRowReverseToken",
  "kSansSerifToken", "kScrollToken", "kSerifToken", "kSilverToken",
  "kSolidToken", "kSpaceAroundToken", "kSpaceBetweenToken", "kStartToken",
  "kStaticToken", "kStepEndToken", "kStepStartToken",
  "kStereoscopicLeftRightToken", "kStereoscopicTopBottomToken",
  "kStretchToken", "kTealToken", "kToToken", "kTransparentToken",
  "kUppercaseToken", "kVisibleToken", "kWhiteToken", "kWrapToken",
  "kWrapReverseToken", "kYellowToken", "kActiveToken", "kEmptyToken",
  "kFocusToken", "kHoverToken", "kAfterToken", "kBeforeToken",
  "kIncludesToken", "kDashMatchToken", "kBeginsWithToken",
  "kEndsWithToken", "kContainsToken", "kMediaAndToken", "kMediaNotToken",
  "kMediaOnlyToken", "kMediaMinimumToken", "kMediaMaximumToken",
  "kAllMediaTypeToken", "kTVMediaTypeToken", "kScreenMediaTypeToken",
  "kLengthMediaFeatureTypeToken", "kOrientationMediaFeatureTypeToken",
  "kRatioMediaFeatureTypeToken",
  "kNonNegativeIntegerMediaFeatureTypeToken",
  "kResolutionMediaFeatureTypeToken", "kScanMediaFeatureTypeToken",
  "kZeroOrOneMediaFeatureTypeToken",
  "kInterlaceMediaFeatureKeywordValueToken",
  "kLandscapeMediaFeatureKeywordValueToken",
  "kPortraitMediaFeatureKeywordValueToken",
  "kProgressiveMediaFeatureKeywordValueToken", "kSupportsAndToken",
  "kSupportsNotToken", "kSupportsOrToken", "kImportToken",
  "kKeyframesToken", "kPageToken", "kMediaToken", "kFontFaceToken",
  "kCharsetToken", "kNamespaceToken", "kSupportsToken",
  "kTopLeftCornerToken", "kTopLeftToken", "kTopCenterToken",
  "kTopRightToken", "kTopRightCornerToken", "kBottomLeftCornerToken",
  "kBottomLeftToken", "kBottomCenterToken", "kBottomRightToken",
  "kBottomRightCornerToken", "kLeftTopToken", "kLeftMiddleToken",
  "kLeftBottomToken", "kRightTopToken", "kRightMiddleToken",
  "kRightBottomToken", "kCalcFunctionToken", "kCubicBezierFunctionToken",
  "kCueFunctionToken", "kFormatFunctionToken",
  "kLinearGradientFunctionToken", "kLocalFunctionToken",
  "kMapToMeshFunctionToken", "kMatrixFunctionToken",
  "kMatrix3dFunctionToken", "kNotFunctionToken", "kNthChildFunctionToken",
  "kNthLastChildFunctionToken", "kNthLastOfTypeFunctionToken",
  "kNthOfTypeFunctionToken", "kRotateFunctionToken", "kScaleFunctionToken",
  "kScaleXFunctionToken", "kScaleYFunctionToken", "kStepsFunctionToken",
  "kTranslateFunctionToken", "kTranslateXFunctionToken",
  "kTranslateYFunctionToken", "kTranslateZFunctionToken",
  "kRadialGradientFunctionToken", "kRGBFunctionToken",
  "kRGBAFunctionToken", "kCobaltMtmFunctionToken",
  "kCobaltUiNavFocusTransformFunctionToken",
  "kCobaltUiNavSpotlightTransformFunctionToken", "kStringToken",
  "kIdentifierToken", "kNthToken", "kHexToken", "kIdSelectorToken",
  "kUriToken", "kInvalidFunctionToken", "kInvalidNumberToken",
  "kInvalidDimensionToken", "kInvalidAtBlockToken",
  "kOtherBrowserAtBlockToken", "kIntegerToken", "kRealToken",
  "kPercentageToken", "kRootElementFontSizesAkaRemToken",
  "kZeroGlyphWidthsAkaChToken", "kFontSizesAkaEmToken",
  "kXHeightsAkaExToken", "kPixelsToken", "kCentimetersToken",
  "kMillimetersToken", "kInchesToken", "kPointsToken", "kPicasToken",
  "kDegreesToken", "kRadiansToken", "kGradiansToken", "kTurnsToken",
  "kMillisecondsToken", "kSecondsToken", "kHertzToken", "kKilohertzToken",
  "kViewportWidthPercentsAkaVwToken", "kViewportHeightPercentsAkaVhToken",
  "kViewportSmallerSizePercentsAkaVminToken",
  "kViewportLargerSizePercentsAkaVmaxToken", "kDotsPerPixelToken",
  "kDotsPerInchToken", "kDotsPerCentimeterToken", "kFractionsToken",
  "kUnicodeRangeToken", "'{'", "'}'", "'('", "')'", "','", "'*'", "'='",
  "'['", "']'", "'.'", "':'", "'>'", "'+'", "'~'", "'-'", "'/'", "';'",
  "$accept", "maybe_whitespace", "errors", "at_font_face_rule",
  "at_media_rule", "orientation_media_feature_keyword_value",
  "scan_media_feature_keyword_value", "media_feature_operator",
  "media_feature_without_value", "media_feature_with_value",
  "media_feature_allowing_operator_with_value", "media_feature",
  "media_feature_block", "media_feature_list", "media_type_unknown",
  "media_type_known", "media_type_specified", "evaluated_media_type",
  "media_query", "media_list", "at_keyframes_rule", "keyframe_rule_list",
  "keyframe_rule", "keyframe_selector", "keyframe_offset",
  "identifier_token", "universal_selector_token", "type_selector_token",
  "attribute_match", "attribute_selector_token", "class_selector_token",
  "id_selector_token", "pseudo_class_token", "pseudo_element_token",
  "simple_selector_token", "compound_selector_token", "combinator",
  "complex_selector", "selector_list", "auto", "maybe_sign_token",
  "zero_or_one", "integer", "non_negative_integer", "positive_integer",
  "number", "non_negative_number", "percentage", "positive_percentage",
  "alpha", "length", "non_negative_absolute_or_relative_length",
  "absolute_or_relative_length", "positive_length", "ratio", "resolution",
  "angle", "time", "time_with_units_required", "colon", "comma",
  "common_values", "common_values_without_errors", "color", "url",
  "length_percent_property_value",
  "positive_length_percent_property_value", "background_property_element",
  "maybe_background_size_property_value",
  "background_position_and_size_shorthand_property_value",
  "background_repeat_shorthand_property_value",
  "background_position_and_repeat_combination",
  "final_background_layer_without_position_and_repeat",
  "final_background_layer", "background_property_value",
  "background_color_property_value", "color_stop",
  "comma_separated_color_stop_list", "side", "side_or_corner",
  "linear_gradient_params", "size_keyword", "circle_with_size_keyword",
  "circle_with_positive_length", "maybe_ellipse_with_size_keyword",
  "ellipse_with_2_positive_length_percents", "at_position",
  "maybe_at_position", "radial_gradient_params",
  "background_image_property_list_element",
  "comma_separated_background_image_list",
  "background_image_property_value", "position_list_element",
  "position_list", "validated_position_property",
  "background_position_property_value", "background_repeat_element",
  "background_repeat_property_value_without_common_values",
  "background_repeat_property_value",
  "background_size_property_list_element", "background_size_property_list",
  "background_size_property_value_without_common_values",
  "background_size_property_value", "border_color_property_list",
  "border_color_property_value", "line_style",
  "line_style_with_common_values", "border_style_property_list",
  "border_style_property_value", "border_width_element",
  "border_width_element_with_common_values", "border_width_property_list",
  "border_width_property_value", "border_or_outline_property_element",
  "border_or_outline_property_list", "border_or_outline_property_value",
  "border_radius_element", "border_radius_element_with_common_values",
  "border_radius_property_list", "border_radius_property_value",
  "box_shadow_property_element", "box_shadow_list",
  "validated_box_shadow_list", "comma_separated_box_shadow_list",
  "box_shadow_property_value", "color_property_value",
  "content_property_value", "display_property_value", "font_face_url_src",
  "font_face_local_src", "font_face_src_list_element",
  "comma_separated_font_face_src_list", "font_face_src_property_value",
  "font_family_name_identifier_list", "font_family_string_name",
  "font_family_specific_name",
  "font_family_specific_name_no_single_identifier", "font_family_name",
  "comma_separated_font_family_name_list", "font_family_property_value",
  "font_size_property_value", "font_style_exclusive_property_value",
  "font_style_property_value", "font_weight_exclusive_property_value",
  "font_weight_property_value", "optional_font_element",
  "optional_font_value_list", "non_empty_optional_font_value_list",
  "font_property_value", "height_property_value",
  "intersection_observer_root_margin_property_list",
  "intersection_observer_root_margin_property_value",
  "min_height_property_value", "max_height_property_value",
  "line_height_property_value", "margin_width",
  "margin_side_property_value", "margin_property_value",
  "offset_property_value", "opacity_property_value",
  "overflow_property_value", "overflow_wrap_property_value",
  "padding_side_property_value", "padding_property_value",
  "pointer_events_property_value", "position_property_value",
  "scale_function_parameters", "text_align_property_value",
  "text_decoration_line", "text_decoration_line_property_value",
  "text_decoration_property_element", "text_decoration_property_list",
  "text_decoration_property_value", "text_indent_property_value",
  "text_overflow_property_value", "text_shadow_property_element",
  "text_shadow_list", "validated_text_shadow_list",
  "comma_separated_text_shadow_list", "text_shadow_property_value",
  "text_transform_property_value", "transform_function", "transform_list",
  "transform_property_value", "validated_two_position_list_elements",
  "transform_origin_property_value", "vertical_align_property_value",
  "visibility_property_value", "comma_separated_time_list",
  "time_list_property_value", "maybe_steps_start_or_end_parameter",
  "single_timing_function", "comma_separated_single_timing_function_list",
  "timing_function_list_property_value", "animation_delay_property_value",
  "animation_direction_list_element",
  "comma_separated_animation_direction_list",
  "animation_direction_property_value",
  "animation_duration_property_value", "animation_fill_mode_list_element",
  "comma_separated_animation_fill_mode_list",
  "animation_fill_mode_property_value",
  "animation_iteration_count_list_element",
  "comma_separated_animation_iteration_count_list",
  "animation_iteration_count_property_value",
  "animation_name_list_element", "comma_separated_animation_name_list",
  "animation_name_property_value",
  "animation_timing_function_property_value", "single_animation_element",
  "single_animation", "single_non_empty_animation",
  "comma_separated_animation_list", "animation_property_value",
  "transition_delay_property_value", "transition_duration_property_value",
  "transition_timing_function_property_value",
  "comma_separated_animatable_property_name_list",
  "transition_property_property_value", "single_transition_element",
  "single_transition", "single_non_empty_transition",
  "comma_separated_transition_list", "transition_property_value",
  "unicode_range_property_value", "comma_separated_unicode_range_list",
  "white_space_property_value", "width_property_value",
  "min_width_property_value", "max_width_property_value",
  "maybe_important", "z_index_property_value",
  "flex_start_end_center_property_value",
  "space_between_around_property_value", "baseline_stretch_property_value",
  "justify_content_property_value", "align_content_property_value",
  "align_items_property_value", "align_self_property_value",
  "flex_basis_keywords", "flex_basis_property_value", "flex_basis_element",
  "flex_single_flex_basis_element", "flex_single_property_value",
  "flex_two_property_values", "flex_three_property_values",
  "flex_property_value", "flex_factor_property_value",
  "order_property_value", "flex_direction",
  "flex_direction_property_value", "flex_flow_property_element",
  "flex_flow_property_list", "flex_flow_property_value", "flex_wrap",
  "flex_wrap_property_value", "animatable_property_token",
  "maybe_declaration", "semicolon", "style_declaration_list",
  "font_face_declaration_list", "style_declaration_block",
  "rule_list_block", "style_rule", "qualified_rule", "invalid_rule",
  "rule", "rule_list", "style_sheet", "entry_point",
  "filter_property_value", "filter_function_list", "filter_function",
  "cobalt_mtm_filter_function", "cobalt_map_to_mesh_spec",
  "cobalt_mtm_function_name", "cobalt_mtm_resolution_matched_mesh_list",
  "cobalt_mtm_resolution_matched_mesh", "cobalt_mtm_transform_function",
  "number_matrix", "maybe_cobalt_mtm_stereo_mode",
  "cobalt_mtm_stereo_mode", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     123,   125,    40,    41,    44,    42,    61,    91,    93,    46,
      58,    62,    43,   126,    45,    47,    59
};
# endif

#define YYPACT_NINF -1820

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1820)))

#define YYTABLE_NINF -1077

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    2723, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,    69,
    3291,  3382,    71,  5937,  3391,  3391,  7968,  7968, -1820, -1820,
   -1820, -1820,   111,   118, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,   139, -1820,
     -66, -1820, -1820, -1820, -1820, -1820,  -312, -1820,  5577, -1820,
    -229, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820,  9804,  1257, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,  7613,
     471,  -206, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820,    72, -1820,  -183, -1820,  -183, -1820, -1820,  3425,  3440,
    1272, -1820, -1820,    11, -1820,  1108, -1820, -1820, -1820,    71,
     185,  2212,   127,    71,    71,  8886, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820,  6649,    52,  4838, -1820,  1081, -1820, -1820,
   -1820,  7613,  7613, -1820,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80, -1820,
    3752,  3752, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820,  1060, -1820, -1820, -1820,  -157,
     109, -1820,    71, -1820,  4344, -1820,  -316, -1820, -1820,    58,
    7257, -1820, -1820,  5203,    71,    71,    71,  7613,   471, -1820,
    1583,  1736,  1688,  1881,  1770,  1881,   529,   603,   787,  2763,
     371,  4352,  1149,  2302,  1693,  1557,  2206,  3749,  2311,  2311,
    3749,  4352,    50,  2576,  2014,  3749,  4352,    50,  2576,  1105,
    3749,  4352,    50,  2576,    85,  3749,  4352,  2311,  2311,    50,
    2576,  1370,   794,  3916,  4352,  1428,  2095,   740,  2373,  2266,
    1070,   519,   781,   781,   792,   371,  8274,  2311,  1048,  1013,
     794,  -105,  1320,   794,  1222,   794,   794,   794,   794,   794,
    1847,  2161,  1323,  2277,   781,   729,  3749,  4352,    50,  2576,
    1233,  1814,  2311,  2311,  2311,  2311,  2311,    53,  1627,   794,
     628,  1883,  1592,  4352,   516,  2576,    44,  3982,    24,   794,
    -113,  2302,  1881,  1881,  3552,  2763,   371,   110,  1562,  1412,
    1773,   794,  1814,   959,   233,    71, -1820, -1820,    80,    80,
      80,    80,    80,    80,    80, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820,   109,  -287,   133, -1820, -1820, -1820,  4344,  1300,
   -1820, -1820,    71, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820,   165, -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820,
   -1820, -1820,   242, -1820, -1820, -1820, -1820,   242, -1820, -1820,
     880, -1820, -1820, -1820, -1820, -1820,  -312, -1820,   242, -1820,
   -1820, -1820, -1820,   453, -1820, -1820,  -312,   242, -1820,   242,
   -1820, -1820, -1820, -1820,   462, -1820, -1820,  -312,   242, -1820,
     561,   305, -1820, -1820, -1820, -1820,  -312,   242, -1820, -1820,
     667, -1820, -1820,  -312,   242, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820,  -312, -1820,   242, -1820,
    4478,   583,  -312,   242, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820,
     -69, -1820, -1820, -1820,  -312,   242, -1820, -1820, -1820, -1820,
   -1820,  1648, -1820, -1820, -1820, -1820, -1820, -1820, -1820,  2636,
   -1820,   242, -1820, -1820, -1820, -1820, -1820,   -16, -1820,   242,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,  2347, -1820,
   -1820,   242, -1820,  1917,  4516,   242, -1820,  1944,   242, -1820,
   -1820, -1820, -1820, -1820, -1820,   242,   242,   242, -1820, -1820,
     242, -1820, -1820, -1820, -1820, -1820,   242,  1957, -1820, -1820,
   -1820,   242, -1820,  2819,   242,   242,   242,   242,   242, -1820,
     107,   242,   242,   242,   242,   242, -1820,     3,   242,   242,
     242,   242,   242,   242,   242, -1820,   240,   242, -1820, -1820,
   -1820,   242, -1820, -1820,  3390, -1820,  -312,   242,   242, -1820,
   -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820,   242, -1820, -1820, -1820, -1820,   242, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820,    67,   531,   645, -1820, -1820,
   -1820,  -105, -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820,
   -1820, -1820,   242, -1820, -1820, -1820, -1820, -1820, -1820,   242,
   -1820,  1810,   242, -1820, -1820,   242,   242, -1820, -1820, -1820,
   -1820, -1820,   242, -1820,  1509, -1820,   242, -1820,   703, -1820,
    9804, -1820,   142, -1820,  -312,   242, -1820, -1820,   242, -1820,
   -1820, -1820, -1820, -1820,   242, -1820, -1820,   230, -1820, -1820,
   -1820, -1820,   242, -1820, -1820, -1820,   242,   249, -1820,   242,
   -1820, -1820, -1820,   242,   242, -1820, -1820, -1820, -1820, -1820,
     242, -1820, -1820, -1820, -1820,   242,   242,   242, -1820,   160,
     242,   242, -1820, -1820, -1820,   242, -1820, -1820, -1820,   242,
   -1820, -1820, -1820,   242, -1820, -1820, -1820,   242, -1820, -1820,
   -1820,   242, -1820, -1820,   242,   242,   242,   242,   242, -1820,
   -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820,   242, -1820,
   -1820,   242,   242,   242, -1820,   258,   242,   242, -1820, -1820,
   -1820,   242, -1820, -1820, -1820, -1820, -1820,   242,   242, -1820,
   -1820,   281, -1820, -1820, -1820,  -312,   242, -1820, -1820, -1820,
   -1820, -1820, -1820,   242, -1820,  3819,   242,   242, -1820, -1820,
   -1820, -1820,   242, -1820, -1820,   242, -1820, -1820, -1820,   242,
   -1820, -1820,  2979, -1820,  -312,   242, -1820, -1820, -1820,   242,
     242, -1820, -1820,   246,   242, -1820,   137,   270,   242, -1820,
     242, -1820,   242, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820,    61, -1820,  -312,   242, -1820,
   -1820,   242, -1820,  4474,   719,  -312,   242, -1820, -1820,   242,
    -312, -1820, -1820, -1820, -1820, -1820,   242, -1820, -1820, -1820,
   -1820,   242, -1820, -1820, -1820, -1820, -1820, -1820,   242, -1820,
   -1820, -1820,   242,   242, -1820, -1820, -1820,   242,   265,  -105,
     348,  -105,  -105,  -105,    41,  -105,    80,    80,    80,    80,
      71,   -66, -1820, -1820,    71,  -243, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820,  9192,    71,    71,    71,    71,    71,    71,
      71,    71, -1820, -1820,    71,    71, -1820,    71, -1820, -1820,
   -1820, -1820, -1820,  -105, -1820,    71,    71,    71,    71,   -61,
   -1820, -1820,    71,    71,    71,    71,   -86, -1820,    71,  -149,
   -1820,    71,    71,  -159, -1820,    57,   170,  2142, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    57,    57,    71, -1820,
      71,  6897,  6877, -1820,  -151, -1820,    71,    71,    71,    71,
      71, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,    71,
      71,    71,    71, -1820, -1820,    71,    71,    71, -1820, -1820,
      93,  2636, -1820,   223, -1820, -1820,  6835, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,    71,    71,
      71, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820,    71, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820,    71,    71,    71, -1820,    71,    71,
      71,    71,    71,    71, -1820,    71, -1820,   828,   134,   239,
      71,   153, -1820, -1820, -1820,  -175, -1820,    71,    71, -1820,
      71,    71,    71,    71, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820,    71,    71,    71, -1820, -1820, -1820,  1715,  9498, -1820,
    -105, -1820, -1820,    71,   208, -1820,  9498, -1820, -1820,    71,
      71,    71, -1820,    71,    71, -1820, -1820,   278, -1820, -1820,
   -1820,    71, -1820, -1820, -1820, -1820,   460, -1820, -1820,    71,
   -1820,    71, -1820,    71, -1820,    71, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820,    71,    71,    71,    71, -1820,    71,    71,
   -1820, -1820, -1820, -1820,   459, -1820, -1820,    71,    71, -1820,
      71,    71,    71,    71, -1820, -1820,  8580, -1820,  -259, -1820,
      71,    71,    71,    71,    71, -1820, -1820, -1820, -1820, -1820,
   -1820,    71,    71, -1820, -1820,    71,    71, -1820,    71, -1820,
   -1820, -1820, -1820, -1820,    71,    71, -1820, -1820,    71, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
     715, -1820, -1820, -1820, -1820, -1820, -1820, -1820,    71,  3111,
   -1820,    71, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820,    71, -1820,   243,    71,    71,    71,    71, -1820,    71,
      71,    71, -1820,    71,    71,    71,    71,    71, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820,   245, -1820, -1820, -1820,
     343, -1820, -1820, -1820, -1820, -1820, -1820,    71,   945,  6293,
   -1820,    71,    71,    71,    71,    71,    71, -1820, -1820,    71,
      71,    71,    71,    71, -1820, -1820, -1820, -1820, -1820,  -312,
   -1820, -1820,    71,    71,    71,   724,  -312,  -312,   607,   873,
    -312,   644,  -312,  -312,   264, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820,  -107,  -105,  -312,   132,   515,   515,   515,   515,
    -312,   288,    71, -1820,    71,    71,    71,    71,    71,    71,
   -1820, -1820, -1820, -1820,    71, -1820, -1820,  -312, -1820,  -312,
   -1820, -1820, -1820,    71,    71, -1820, -1820,  -312,  9498,   535,
     291,   663,   554,   666, -1820,  9804, -1820,   309,   257, -1820,
   -1820,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      77,   114, -1820,    71,    71,    71,    71,   756, -1820,    71,
      71, -1820, -1820, -1820,    71,    71, -1820, -1820, -1820, -1820,
     582, -1820,   207, -1820, -1820,    71,    84,    87,  -105,   116,
    -105,  -105, -1820, -1820, -1820, -1820, -1820,  2819, -1820,  2819,
    2819, -1820,  1407,   819,    71,    71,   819,    71,    71, -1820,
     505, -1820, -1820, -1820,  -312,  -312,  -312,  -312,  2819, -1820,
    1006,   485,  -192,  -105,   711,  9498,  -312, -1820, -1820, -1820,
      71, -1820, -1820, -1820,  -312,   328,  -312,   349,   351,   355,
     345,   360,   369,   374, -1820, -1820,    71,    71,    57,    71,
      71,    71,    71,    71, -1820, -1820, -1820, -1820,    71, -1820,
   -1820,  -312,  -120,   376,  -312,  -312,  1154,    71,    71,    71,
      71,  -312, -1820, -1820, -1820, -1820, -1820,  -312,  -105, -1820,
    -312,    71, -1820,    71,    71,  2819,  2819,  2819,  2819,  -312,
   -1820,  -312,  -105, -1820,  -105, -1820,    71,    71,   138,  -105,
   -1820,  -105, -1820, -1820, -1820, -1820,  -105, -1820, -1820, -1820,
      71,    71, -1820,    71,   871,  -105, -1820, -1820, -1820,  -105,
    -105, -1820, -1820, -1820, -1820,   113,  -312,  2819, -1820,  2819,
      71,  -312,  -312,  -312,  -312,   543,   418,  -312, -1820,  -312,
      71, -1820,    71,    71,    71,    71,   388,    71,    71,    71,
   -1820,  -312,    71,    71,   406,  -312,    71,    71,    71,    71,
   -1820,  2819,  -312,  -312,  -312, -1820,   474,    71,  -105, -1820,
    -105, -1820,  -105,  -312,   -38,   414, -1820,  -312,  -312,    71,
     420,    71,   428, -1820, -1820, -1820, -1820, -1820,    57,   431,
    -105, -1820, -1820,    71,    71,    71,    71, -1820,   391, -1820,
    -312,    71, -1820,  -105,    71,  -105,    71, -1820,  -312,  -105,
     433, -1820,    71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       0,     0,  1057,     0,     0,     0,     0,     0,     1,     4,
       3,    36,     0,     0,    37,    38,    46,    47,    48,    39,
      40,    41,    42,    43,    44,    45,    35,     2,     0,    33,
      57,    49,    50,    51,     2,    61,  1061,  1062,     0,  1060,
       0,     2,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   100,    99,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,     2,     2,     2,    73,   310,
     309,     2,     2,   297,     2,     0,     0,  1053,  1054,  1055,
     298,   329,   328,   323,   324,   325,   326,   327,   330,   336,
     339,     0,  1047,  1052,  1056,  1063,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     0,  1039,  1064,  1041,  1065,  1066,  1067,     0,     0,
       0,     5,     2,    58,     2,     0,  1058,     2,  1048,  1051,
       0,     0,     0,  1049,  1050,     0,   308,   311,   312,   313,
     314,   318,   319,     0,     0,     0,   331,   332,     2,     2,
       2,     0,     0,  1046,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     2,
       0,     0,    55,    52,    54,    53,    12,    13,     2,     2,
       2,     2,     2,     2,     2,     0,    28,    29,    30,     0,
       0,     2,   376,    62,     0,     2,     0,     2,     2,     0,
       0,   320,   321,     0,   333,   334,   335,   337,   340,     2,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     791,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   599,     0,     0,     0,     0,
       0,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     709,     0,     0,     0,     0,     0,   812,     0,     0,     0,
       0,     0,     0,     0,     0,  1038,  1040,  1042,    14,    15,
      16,    17,    18,    19,    20,     2,     2,     2,     2,    31,
       2,    34,     0,     0,     0,     2,  1045,     7,     0,     0,
     316,   315,   375,     2,     2,     2,     2,     2,     2,     2,
       2,     0,   856,   377,   853,   854,   838,     2,     2,   859,
     857,   858,   838,     2,   863,   861,   862,   838,   343,   344,
       0,   349,   371,   729,   372,   732,   731,   749,   838,     2,
       2,     2,     2,     0,   757,   754,   756,   838,   759,   838,
       2,     2,     2,     2,     0,   767,   764,   766,   838,     2,
       0,     0,   351,   770,   774,   771,   773,   838,     2,     2,
       0,   781,   778,   780,   838,   738,   739,   740,   741,   742,
     743,   744,     2,     2,   748,   745,   747,   783,   838,   797,
       0,   792,   796,   838,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   424,   423,   838,     2,     2,     2,
       0,   471,   464,   468,   470,   838,     2,     2,     2,     2,
       2,     0,   355,   403,   402,   356,   482,   477,   478,   480,
     481,   838,     2,     2,     2,     2,   490,   485,   489,   838,
       2,     2,     2,   493,   353,   492,   491,   500,   494,   496,
     499,   838,   422,   342,   421,   838,   527,   342,   838,   405,
     363,   404,   530,   528,   529,   838,   838,   838,   547,   546,
     838,     2,     2,     2,   509,   508,   838,     0,   514,   516,
     515,   838,   504,   503,   838,   838,   838,   838,   838,   534,
     342,   838,   838,   838,   838,   838,   513,   512,   838,   838,
     838,   838,   838,   838,   838,   520,   342,   838,   634,   635,
     633,   838,     2,   545,   342,   541,   543,   838,   838,     2,
       2,     2,   552,   550,   838,     2,     2,     2,     2,     2,
       2,   559,   838,     2,  1078,  1077,  1070,   838,  1069,  1071,
    1072,     2,     2,     2,     2,   342,   871,   870,   357,   888,
     869,   342,   875,   885,   886,   887,   838,     2,     2,   868,
     867,   866,   838,     2,     2,     2,     2,   898,   897,   838,
     904,   903,   838,   889,   890,   838,   838,     2,     2,     2,
     909,   908,   838,   604,     0,   600,   838,     2,     0,     2,
       0,   575,   581,   578,     0,   838,   585,   584,   838,     2,
       2,     2,   590,   588,   838,     2,     2,     0,   348,   592,
     595,   593,   838,   606,   607,   605,   838,   342,   612,   838,
     852,   850,   851,   838,   838,     2,   620,   622,   621,   623,
     838,   625,   627,   624,   626,   838,   838,   838,   632,   342,
     838,   838,     2,   618,   617,   838,     2,   837,   836,   838,
       2,   615,   614,   838,     2,   834,   833,   838,   354,   636,
     637,   838,   891,   892,   838,   838,   838,   838,   838,     2,
       2,     2,     2,   642,   838,     2,     2,   645,   838,   647,
     646,   838,   838,   838,   652,   342,   838,   838,     2,     2,
     655,   838,     2,     2,     2,     2,   660,   838,   838,     2,
     568,   561,   563,   564,   565,   567,   838,     2,     2,     2,
       2,     2,   668,   838,   678,   677,   838,   838,     2,     2,
     672,   671,   838,   679,   680,   838,     2,     2,   683,   838,
       2,   693,   342,   689,   691,   838,     2,     2,   696,   838,
     838,     2,   714,     0,   838,   719,   342,   342,   838,   798,
     838,   799,   838,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,     2,     0,   806,   805,   838,     2,
     800,   838,   818,     0,   813,   817,   838,     2,   820,   838,
     819,     2,     2,     2,     2,   724,   838,     2,     2,     2,
     728,   838,     2,     2,     2,     2,     2,   828,   838,   830,
     831,   829,   838,   838,   841,   840,   842,   838,     0,   342,
       0,   342,   342,   342,     0,   342,     0,     0,     0,     0,
      32,    59,     2,     2,  1057,     0,     2,     2,     2,     2,
       2,     2,   305,     0,   845,   844,   843,   379,   380,   847,
     846,   855,     2,   922,   848,   849,   923,   860,   924,     2,
       2,     2,     2,   342,   925,   752,   753,   750,   751,     0,
     926,   927,   762,   763,   761,   760,     0,   928,   769,   342,
     929,   776,   777,     0,   930,   342,     0,     0,   931,     2,
       2,   788,     2,   785,   786,   787,   793,   791,   932,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   342,   342,   381,   934,
     467,   342,   342,     2,     0,   935,   472,   474,   475,   476,
     473,     2,     2,     2,     2,     2,     2,   479,   936,   483,
     484,   487,   488,   486,   937,   341,   497,   498,   495,   938,
     412,   413,   419,   408,   411,   406,   420,   407,   933,   523,
     521,   522,   525,   939,   940,   941,   942,   943,   506,   505,
     507,   944,   945,   502,   946,   947,   948,   949,   950,   532,
     951,   952,   953,   954,   955,   511,   956,   957,   958,   959,
     960,   961,   962,   518,   963,   964,   544,     2,   535,   536,
     539,   538,   965,   966,   548,   549,   551,   967,   554,   553,
     556,   555,   557,   558,   968,  1068,   969,     0,   864,   865,
     878,   342,   871,   870,   880,   881,   970,   864,   865,   971,
     895,   896,   893,   894,   972,   899,   902,   900,   973,   974,
     975,   905,   906,   907,   976,     2,     2,   349,     0,   596,
     342,   601,   977,   571,   569,     2,     0,   978,   979,   586,
     589,   587,   980,   591,   594,   981,   982,   342,   983,   984,
     985,   619,   986,   987,   988,   989,   342,   991,   990,   616,
     992,   835,   993,   613,   994,   832,   995,   996,   997,   998,
     999,  1000,  1001,   638,   639,   640,   641,  1002,   643,   644,
    1003,  1004,  1005,  1006,   342,  1008,  1007,   653,   654,  1009,
     656,   657,   658,   659,  1010,  1011,     0,     2,     0,  1012,
     664,   666,   665,   663,   667,  1013,   674,   673,   676,  1015,
    1016,   670,   669,  1017,  1014,   681,   682,  1018,   692,   684,
     685,   687,   686,  1019,   694,   695,  1020,  1021,   711,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       0,   710,  1022,   715,   718,  1023,  1025,  1026,   804,     0,
    1027,   801,  1028,     2,     2,   809,     2,   814,     2,   812,
    1024,   821,  1029,     0,   720,   721,   723,   722,  1030,   725,
     726,   727,  1031,   823,   824,   825,   826,   827,  1032,  1033,
    1034,  1035,    24,     2,     2,    21,     0,    26,   347,    25,
       0,    27,     2,     2,    22,    23,   345,  1043,     0,     0,
       2,   300,   301,   302,   303,   304,   299,     2,     2,   839,
     346,   350,   374,   373,   730,   755,   765,   772,   779,     0,
       2,   746,   790,   784,   789,   792,     0,     0,     0,     0,
       0,   342,     0,   435,     0,     2,     2,     2,     2,     2,
       2,     2,   404,   342,   463,   449,   454,   454,   454,   454,
       0,     0,   401,   469,   352,   359,   358,   362,   360,   361,
     414,   415,     2,   410,   537,   542,  1075,     0,  1079,     0,
     884,   882,   883,   598,   597,     2,   577,   602,     0,   570,
     582,   342,   342,   342,     2,   572,   573,     0,     0,   566,
     690,   342,   342,   342,   342,   342,   342,   342,   342,   342,
       0,     0,     2,   811,   808,   810,   807,   813,     2,     8,
       9,     2,     2,     2,    10,    11,    65,     2,     2,     2,
       0,    64,     0,    68,     2,     6,     0,     0,   342,   733,
     342,   342,     2,     2,     2,     2,     2,     0,   426,     0,
       0,   465,   342,   342,   440,   438,   342,   441,   439,     2,
     450,     2,     2,   455,     0,     0,     0,     0,     0,   466,
     342,     0,   342,   342,   569,     0,   603,   611,   631,   651,
     569,     2,     2,     2,     0,     0,   661,     0,     0,     0,
       0,     0,     0,     0,     2,     2,   802,   822,   342,   365,
     366,    70,    71,    72,     2,    66,     2,    67,  1044,   306,
     307,     0,     0,     0,     0,     0,     0,   367,   369,   368,
     370,   436,   427,   428,   453,   446,   442,     0,   342,   447,
       0,   445,     2,   443,   448,     0,     0,     0,     0,   462,
     409,     0,   342,  1080,   342,   579,   570,   562,     0,   342,
       2,   342,     2,     2,     2,     2,   342,     2,     2,     2,
     707,   708,   364,    63,     0,   342,     2,     2,   737,   342,
     342,     2,     2,     2,     2,   433,     0,     0,   452,     0,
     451,   458,   456,   459,   457,     0,     0,     0,     2,     0,
     698,   662,   699,   700,   701,   702,     0,   704,   705,   706,
      69,     0,   735,   734,     0,     0,   429,   430,   431,   432,
     434,     0,   460,   461,  1085,  1081,     0,   560,   342,     2,
     342,     2,   342,   437,     0,     0,     2,  1085,     0,   703,
       0,   382,     0,     2,     2,     2,  1086,     2,   342,     0,
     342,   736,     2,  1087,  1088,  1089,  1074,  1083,     0,     2,
       0,   383,     2,   342,  1073,   342,  1082,  1084,     0,   342,
       0,     2,   697
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1820,    -2,   221, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
     211, -1820,   203,    60, -1820, -1820,   330, -1820,     9,   372,
   -1820, -1820,  -985, -1820, -1118,  -242, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820,   -51,  -414, -1820,   357, -1820,  -625,
     752, -1820,  -603, -1819, -1272,    63,  -549,  -476,  -499, -1170,
    -197,   169,  -588,  -501, -1820, -1820, -1739, -1197,   -22,  2318,
     396,  7478,  2274,    -3,  -653,  -139,  -590, -1820, -1820,  -565,
    -560, -1820, -1820, -1820, -1820, -1820, -1030, -1368, -1094, -1820,
   -1820, -1186, -1820, -1820, -1820, -1820,  -509,  -675, -1820,  -906,
   -1820, -1820,  -708, -1820,  -622, -1820,   -33,   255, -1820,   -39,
   -1820,  -957, -1820, -1820, -1820,  -850,   -74, -1820, -1820,   -85,
     301, -1820, -1820, -1820, -1820,  1366,   -62,  -356, -1820, -1820,
   -1820, -1820,  -567, -1820, -1820,  1468, -1820, -1820, -1820, -1820,
    -674, -1820, -1820,  -658,  -657, -1820,   251, -1348, -1487, -1820,
   -1820,  -116, -1820,  -112, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820,  -664,   -29, -1820,   -36, -1820,
   -1820,   219,   -19, -1820, -1820, -1820, -1820, -1820,  -223, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820,  -637, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,  -559,
   -1820,  -819, -1820,   247, -1820,  -833, -1820, -1820, -1820,  -834,
   -1820, -1820,  -835, -1820, -1820,  -370, -1820, -1820, -1820, -1820,
   -1820,  -381, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
   -1820,  -654, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
    2128, -1820,  -512,   310,   377, -1820, -1820, -1820, -1820,   322,
   -1820,  -996, -1820, -1820, -1820, -1820, -1820,   331, -1820,   -28,
   -1820, -1820, -1820, -1820,   -26, -1820, -1209,    13,  -417,   399,
     272,  -294, -1820, -1820, -1820, -1820,  1031,  -246, -1820, -1820,
   -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820, -1820,
    -947, -1820
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   771,   287,   288,  1665,  1674,   595,   596,   597,
     598,   599,    39,    40,    41,    42,    43,    44,    45,    46,
     289,  1800,  1801,  1802,  1803,   290,   291,   292,  1303,   293,
     294,   295,   296,   297,   298,   299,   461,   300,   301,  1101,
     891,  1675,   791,  1669,  1079,   892,   823,   914,   929,  1129,
     930,  1483,   895,   931,  1667,  1671,  1710,   793,   794,  1279,
    1820,   938,   773,  1711,   882,  1103,   933,  1416,  1743,  1410,
    1411,  1412,   923,   924,   925,   876,  1712,  1713,  1945,  1946,
    1714,  1725,  1726,  1727,  1728,  1729,  1833,  1834,  1731,   883,
     884,   885,   898,   899,  1413,   901,   907,  1414,   909,   918,
     919,   920,   921,   953,   954,   945,   946,   967,   968,   950,
     951,   976,   977,  1422,   927,   928,   934,   935,   960,   961,
    1460,   984,   985,   986,   987,   940,   994,  1002,  1172,  1173,
    1174,  1175,  1176,  1060,  1061,  1767,  1756,  1063,  1064,  1065,
    1068,  1073,  1074,  1081,  1082,  1511,  1054,  1055,  1056,  1086,
    1088,  1089,  1123,  1115,  1100,  1104,  1105,  1110,   981,  1131,
    1144,  1148,  1151,  1156,  1161,  1167,  1857,  1183,  1191,  1192,
    1588,  1185,  1186,  1195,  1199,  1601,  1202,  1203,  1204,  1205,
    1209,  1621,  1213,  1214,  1217,  1218,  1256,  1261,   796,   797,
    1883,   845,   846,   847,   798,   805,   806,   807,   809,   816,
     817,   818,   825,   826,   827,   832,   833,   834,   848,  1356,
     850,   851,   852,   853,  1220,  1222,  1241,  1237,  1238,  1637,
    1243,  1244,  1245,  1246,  1249,  1250,  1268,  1272,  1127,  1119,
    1313,  1277,   774,   775,   781,  1093,   776,   782,   787,  1020,
    1032,  1021,  1022,  1023,  1024,  1025,  1026,  1045,  1134,  1038,
    1039,  1496,  1041,  1042,  1051,  1052,  1239,   422,   580,   423,
     425,   438,   757,   302,   303,   304,   436,    48,    49,     9,
    1007,  1008,  1009,  1010,  1749,  1011,  1842,  1913,  1997,  2018,
    1995,  2006
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    12,    13,    14,    15,    16,    17,   463,   581,  1666,
     913,   900,   993,  1216,  1724,  1355,  1354,  1353,  1417,  1484,
      47,  1757,    20,  1912,  1109,    19,   819,  -444,   424,   426,
     427,  1352,   828,  1855,  1638,   430,  1169,   978,  1829,   610,
     877,  1936,   433,   446,   755,    19,  1635,   617,   434,   439,
     810,    19,   434,    19,    19,  1083,   811,  1171,   978,   431,
     579,  -803,   431,   766,   767,   880,   808,  -876,    20,    18,
     799,   800, -1037,   431,  1292,  -803,  1078,  1421,  1211,  1030,
    1018,  -876,    20,   812,   978,  -510,    19,  1067,    20,   579,
    1085,    20,  1132,  1956,   978,    20,  1098,  1937,    20,  -510,
    1114,  1118,  1122,  1126,  1914,   813,  1269,  -533,  1274,   780,
     785,    19,  1150,  1150,  1150,  1155,  1150,  1445,  1680,  1015,
      20,  -533,   428,  1043,  1043,    20,  1694,    20,  1027,   429,
    1275,   437,   801,   579,  -872,  1096,   915,  -716,    20,   -60,
     431,  1271,   948,   878,    20,    20,   802,   948,  -872,    20,
    2003,  -716,   948,  -879,   437,  -342,  -342,   893,   434,   948,
    -628,   829,   879,  1219,  1221,  -378,   431,  -879,  1760,  1016,
    1091,  1941, -1076,   880,  -628,  1957,   902,   941,   432,  -378,
     788,    20,   789,  2004,  2005,  1097,   893,   903,  1158,   756,
    1196,  1397,  1942,   579,   942,   886,    20,   788,   948,   789,
     766,   767,  1028,   608,  1197,   893,   750,   893,  -580,   893,
     893,   893,   893,   893,  1027,  1206,   887,   943,  1943,    20,
     766,   767,  -580,   788,   941,   789,   766,   767,  1944,   766,
     767,    38,    38,   893,    19,   421,   421,   421,   421,  -877,
    -519,   942,   888,   893,  1159,   893,  -712,    19,   456,  -608,
      20,  1207,   889,  -877,  -519,   601,  1312,  -444,  -648,  -510,
    -712,   766,   767,  -608,   943, -1036,   431,   788,    20,   789,
    -717,  1846,  -648,   440,   441,   442,  -510,  1831,  -609,   443,
     444,   890,   445,   936,  -717,   902,   766,   767,  1028,   611,
     612,  1832,  -609,   913,  1383,   910,   903,   904,   905,  -510,
    1672,   971,   972,  1673,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   915,
    1782,   760,  -803,   893,  1636,  -803,  1419,  1018,  -876,   788,
     600,   789,   602, -1037,  1059,   604,   894,  -803,   916,   788,
    1864,   789,   435,  -876,   603,  1536,  -510,   893, -1037,  1891,
     619,  1507,  1879,  -758,   431,  1880,   614,   615,   616,  -649,
    -629,  -510,  -768,   431,  1508,   894,  1481,  -758,  -533,  1247,
    1909,    37,  1485,  -649,  -629,   948,  -768,  1865,  1733,   788,
     434,   789,   457,  -533,   894,  1751,   894,   607,   894,   894,
     894,   894,   894,  1293,   897,  -872,  1695,  1915,  -716,   -60,
    1700,  1958,  1696,   -60,  1697,   605,  -577,   455,  1623,   788,
    -872,   789,   894,  -716,  -879,   -60,  1482,    19,  1193,  -901,
      19,  -628,   894,   980,   894,   788,  -378,   789,  1701,  -879,
      19,  -874,   788,  -901,   789,  -574,  -628,  1951,  1952,  1953,
    1954,  -378,  1087,  1609,   980,  -874,    20,   766,   767,  -574,
    1610,  1611,  1612,  1613,  -630,  1614,  1615,  1616,  1617,   456,
    1319,  -775,   431,  1618,  1619,  1564,   456,   437,  -630,  -580,
     980,  1876,  -576,   957,  1577,  -775,  1853,   735,   964,  1982,
     980,  1983,   897,  -794,  -580,   973,   738,   739,   740,   741,
     742,   743,   744,   736,   737,   910,  1932,  -794,  1742,   752,
    -877,  -519,  1788,   754,    19,   758,   759,  -712,  1663,  1664,
    -608,   893,   788,  1993,   789,  -877,  -519,   762,  1812,  -648,
    1791,   788,  -712,   789,  1137,  -608, -1036,  1821,   875,    19,
     788,  -717,   789,   893,  -648,  1319,  1320,  1896,   939,  -609,
    1899, -1036,   788,   939,   789,  -873,  -717,  1094,   939,  1715,
     788,  1839,   789,   939,  -609,  -579,    38,  1106,  1107,  -873,
    1111,   939,    38,  -610,  1902,   810,  -650,  -782,   431,  -901,
    -901,   811,  1852,  1168,   609,   613,  1911,  -610,  1078,  1668,
    -650,  -782,  1676,  1210,  1152,  1153,   792,  1157,   792,   910,
     822,  1920,   766,   767,   939,   766,   767,   462,   812,  1792,
    1793,  1188,   894,  -583,   431,   766,   767,  1189,  1925,   434,
     939,  -576,  1922,  -901,  1923,  -713,   431,  -583,  1924,  -815,
     813,   916,    20,  1927,  -795,  -576,   894,  -901,  -901,  -713,
      19,   822,  1928,  -815,  1984,   822,   822,  1929,  -795,  1938,
     893,    19,   880,  1286,  1287,  1288,  1289,   822,  1290,  -901,
    -901,  1989,  1797,  1294,  2022,   434,  -816,  1128,   583,   585,
     897,  1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1991,
    -816,   424,  1996,  1706,  1707,  1314,  1315,  2007,   819,   766,
     767,  1317,    19,  2011,   897,   792,   792,  1458,    19,  1892,
    1893,  2012,  1723,    19,  2019,    19,  2031,  1325,  1326,  1327,
    1328,   421,   421,   751,   766,   767,   749,  1798,  1332,  1333,
    1334,  1335,  1291,   606,  -758,  1875,  1970,  1338,  1515,   618,
    -649,  -629,  2002,  -768,  1748,   421,  1341,  1342,  1351,  -758,
      20,   788,   788,   789,   789,  -649,  -629,  1017,  -768,    20,
    1345,  1346,   458,   459,   460,   803,  1741,   814,   820,   830,
    1740,  1980,  1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,
    1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,  1375,  1376,
    1377,  1378,  1762,  1730,  1403,  1380,  1381,  1382,   581,  1408,
    -901,  1722,    20,  1910,  1386,  1387,  1388,  1389,  1390,   908,
     894,  1453,  -874,  1018,  1745,  -901,  -574,  1058,  1439,  -574,
    1399,  1400,  1401,  1402,  1769,   766,   767,  -874,  1405,  1406,
    1407,  -574,   894,   822,  1799,  -630,   766,   767,  1765,  1766,
    1758,  1415,  -775,  1169,  1420,  1171,   788,  1062,   789,   910,
    -630,  1003,  1750,  -342,  -342,   893,  1752,  -775,  1509,  1428,
    1429,  1430,  1510,  1874,  -794,  1235,  1796,  -794,  1527,   958,
    1433,  1273,   880,  1715,   965,  1278,    20,   766,   767,  -794,
      19,   974,  1587,   766,   767,  1770,  1717,  1718,   766,   767,
     766,   767,  1240,  1698,  1763,   788,  1705,   789,   828,   421,
    1456,  1459,  1482,  1720,  1721,  1787,  1047,  1464,  1465,  1466,
    1746,  1031,  1092,  1468,  1469,  1470,  1471,  1472,  1473,   786,
    1138,  1475,   435,   753,  1046,  1599,  -873,  -425,  -425,  1477,
    1478,  1479,  1480,  1495,    19,  1497,   788,    20,   789,   894,
    1624,  -873,  1048,  1049,  -610,  1487,  1488,  -650,  -782,  1747,
    1295,  1490,  1491,  1492,  1493,   788,  1004,   789,   788,  -610,
     789,  1797,  -650,  -782,   305,  1501,  1502,  1503,  1679,    19,
    2009,   893,  1835,  1836,  1837,  1513,  1005,  1514,     0,  -342,
     893,  1688,     0,     0,  -583,     0,     0,  1519,  1520,  1521,
       0,    19,  -576,  1523,  1524,  -576,  -713,   897,   822,  -583,
    -815,     0,  1662,  -815,   822,  -795,     0,  -576,  -795,     0,
       0,  -713,  -338,  1531,   910,  -815,  1798,     0,  1848,     0,
    -795,   788,     0,   789,     0,  -531,    19,   829,   -56,    19,
    1539,  -342,  -342,     0,  1541,  1797,     0,  -816,  1543,  -531,
    -816,     0,  1545,     0,  -342,  -342,  -342,  -342,     0,  -342,
       0,  -342,  -816,  1830,     0,   766,   767,  1553,  1554,  1555,
    1556,   910,     0,  1558,  1559,  -342,  -342,     0,  1897,     0,
      19,  1900,   880,   788,  1075,   789,  1567,  1568,   911,   912,
    1570,  1571,  1572,  1573,     0,    20,   788,  1576,   789,     0,
    1798,     0,     0,  1849,     0,  1580,  1581,  1582,  1583,  1584,
       0,     0,  1586,  -454,     0,     0,  1591,  1592,     0,   766,
     767,   788,  1323,   789,  1595,  1596,     0,     0,  1598,  1600,
    1894,     0,  1329,  1799,  1604,  1605,  1076,  1884,  1885,  1608,
    1319,  1320,  1941,  1336,   894,   913,  1813,  1814,  1815,  1816,
    1033,  1034,  1339,    19,   766,   767,     0,  1321,  1322,  1343,
    1069,     0,  1628,  1942,    19,   893,  1898,  1631,     0,  1668,
       0,  1070,  1347,  1071,     0,  1641,   766,   767,  1357,  1644,
    1645,  1646,  1647,     0,     0,  1649,  1650,  1651,    19,  1943,
    1653,  1654,  1655,  1656,  1657,  1078,  1755,     0,     0,  1944,
       0,     0,   897,     0,  1755,     0,     0,  1799,  1035,  1036,
    1384,   766,   767,    20,     0,   893,   893,     0,     0,  -342,
    1677,  1678,     0,     0,  1681,  1682,  1683,  1684,  1685,  1686,
     893,   893,   893,  1985,     0,     0,   792,     0,  1948,  1668,
    1689,    20,   745,     0,   746,   747,   748,  1690,  1691,  1692,
    1693,    19,  1895,     0,    19,   766,   767,     0,     0,     0,
     894,   788,     0,   789,  1764,     0,  1974,  1975,     0,   894,
     877,   915,     0,  -342,     0,     0,   893,  1702,  1703,     0,
    1704,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,     0,  1139,     0,
    -517,    19,     0,     0,     0,   790,     0,   790,   788,   821,
     789,  1732,  1461,     0,  -517,   788,   792,   789,  1761,  1734,
    1735,  1736,  1737,  1738,  1739,   947,     0,     0,   766,   767,
     947,     0,   822,     0,     0,   947,     0,  1140,  1699,   766,
     767,     0,   947,    19,     0,  1095,     0,     0,    20,     0,
       0,     0,     0,     0,   821,   821,     0,     0,    36,    19,
       0,  1077,     0,     0,  1620,  -531,  -531,  -531,  -531,     0,
    -531,  -338,  -531,   878,  1141,  -338,   821,  1077,     0,     0,
     893,   947,  -338,  -338,  -338,  1744,  -531,  -531,  1120,     0,
    1516,  1142,   879,     0,   763,   886,  -531,   947,   -56,     0,
      37,     0,   -56,   880,   790,   790,     0,  -531,     0,  -531,
       0,  -531,     0,     0,   -56,  1077,   887,   764,   765,     0,
     447,   448,   449,   450,   451,   452,   766,   767,     0,   766,
     767,     0,     0,  1753,  1754,     0,     0,     0,  1877,     0,
    1505,     0,   888,  1759,   894,     0,  1755,     0,     0,   586,
     587,     0,   889,  1851,   588,   589,   590,   591,   592,   593,
     594,     0,     0,     0,     0,   768,   769,     0,     0,  1296,
    1297,  1298,  1299,  1300,   822,     0,   766,   767,   822,     0,
       0,   890,  -342,  -342,  -342,  -342,   453,  -342,    19,  -342,
       0,  1257,     0,    19,   894,   894,     0,     0,     0,     0,
       0,  1578,  1818,  -342,  -342,  1768,     0,     0,     0,   894,
     894,   894,  1863,     0,    19,     0,  1258,     0,   766,   767,
       0,     0,  -675,    19,   788,     0,   789,     0,     0,     0,
    1602,     0,   790,  1755,   766,   767,  -675,  1771,  1772,  1773,
    1774,  1775,  1776,  1777,  1778,  1779,  1780,  1781,     0,   989,
    1251,   990,  1847,     0,     0,   894,     0,   454,    19,     0,
       0,  1783,  1784,  1629,  1785,     0,  1786,  1860,  1861,  1862,
    1259,  1639,     0,   916,     0,     0,  1643,     0,     0,     0,
    1075,     0,     0,  -342,  -342,  -342,  -342,     0,  -342,     0,
    -342,  1789,  1790,     0,     0,     0,  1301,     0,  1302,     0,
    1794,  1795,     0,     0,  -342,  -342,     0,  1252,  1805,   947,
       0,     0,     0,   897,     0,  1806,  1807,     0,     0,    19,
       0,  1069,   910,     0,    19,   788,     0,   789,  1809,  1253,
    -517,  -517,  1506,  -517,  1071,  -517,     0,  -517,     0,   911,
     912,     0,     0,  1822,  1823,  1824,  1825,  1826,  1827,  1828,
       0,  -517,  -517,     0,     0,  -675,     0,   763,   947,   894,
    -675,  -517,  -675,   766,   767,     0,   947,    19,   766,   767,
    1840,     0,  -517,     0,  -517,     0,  -517,   991,     0,  1254,
     764,   765,   880,  1844,     0,     0,     0,  1162,     0,   766,
     767,     0,  1850,  -675,  -675,  -675,     0,     0,   766,   767,
       0,    19,     0,   821,    19,  -675,     0,  -675,  -675,   788,
    1866,   789,  -675,  -675,     0,     0,  1867,  1966,  -675,  1868,
    1869,  1870,  -675,  1163,  -675,  1871,  1872,  1873,   768,   769,
       0,     0,  1878,   766,   767,  -675,   770,     0,     0,     0,
    1886,  1887,  1888,  1889,  1890,    19,  -675,     0,  -675,     0,
       0,  -675,     0,   783,  -675,   777,     0,  1901,     0,  1903,
    1904,     0,   763,  1164,  1854,     0,  1856,  1858,  1859,  -342,
    -342,  -342,  -342,     0,  -342,  1165,  -342,     0,    19,  1916,
    1917,  1918,     0,     0,     0,   764,   765,     0,     0,     0,
    -342,  -342,  1930,  1931,   766,   767,     0,     0,     0,   766,
     767,  1881,  1933,   777,  1934,     0,     0,     0,     0,     0,
     763,   788,    19,   789,    19,   902,     0,  -342,  -342,  -342,
    -342,     0,  -342,     0,  -342,     0,   903,   904,   905,     0,
    1950,   799,   800,   764,   765,     0,  -675,  -675,  -342,  -342,
       0,   778,   766,   767,  -675,     0,     0,     0,  1960,     0,
    1962,  1963,  1964,  1965,     0,  1967,  1968,  1969,     0,   788,
       0,   789,     0,     0,  1972,  1973,     0,     0,     0,  1976,
    1977,  1978,  1979,     0,  -526,     0,   766,   767,     0,   766,
     767,     0,     0,  -675,   947,     0,  1987,  1145,  -526,   778,
    1033,  1034,  1177,   801,     0,     0,  1262,  1263,  -675,   947,
    1264,  1265,  1266,     0,     0,   886,     0,   802,  1319,  1320,
    1391,  1392,  1959,  1393,  1961,  1394,     0,  1999,  1178,  2001,
     766,   767,     0,     0,  2008,   790,   887,     0,  1971,  1395,
    1396,  2013,  2014,  2015,  1047,  2016,   937,  1146,     0,     0,
    2021,   955,     0,     0,  -501,    19,   962,  2024,  1035,  1036,
    2026,   969,   888,   766,   767,     0,     0,  1179,  -501,  2032,
       0,   947,   889,  1077,  1077,  1670,     0,  1077,  1112,     0,
    1048,  1049,     0,     0,  1180,  -348,  -348,  -348,  -348,     0,
    -348,  1998,  -348,  2000,     0,  1128,     0,   766,   767,   766,
     767,   890,  1135,     0,     0,     0,  -348,  -348,     0,     0,
       0,  2017,     0,  2020,     0,   790,     0,   854,     0,     0,
       0,     0,   855,     0,   856,     0,  2027,  -348,  2028,  -348,
       0,   821,  2030,     0,     0,  1808,    19,   821,     0,     0,
    1181,     0,  1810,  1811,     0,     0,  1817,     0,  1819,   902,
       0,     0,     0,     0,   956,   857,   858,   859,   941,   963,
     903,   904,   905,     0,   970,     0,  1838,   860,  1077,  1077,
     861,     0,   988,  1709,   862,   942,     0,     0,     0,     0,
     863,     0,     0,  1841,   864,  1843,   865,  -501,     0,     0,
       0,     0,  -501,  1845,  -501,     0,     0,   866,   943,   995,
       0,     0,    19,     0,     0,  1136,     0,     0,   867,     0,
     868,     0,     0,   869,     0,     0,   870,  -342,  -342,  -342,
    -342,  1187,  -342,     0,  -342,  -501,  -501,  -501,     0,     0,
     766,   767,     0,     0,     0,     0,     0,  -501,  -342,  -342,
    -501,     0,     0,     0,  -501,  1882,  -418,    19,     0,     0,
    -501,  -342,  -342,    19,  -501,     0,  -501,     0,     0,   788,
    -418,   789,     0,    20,     0,     0,     0,  -501,  -342,  -342,
    1905,  1906,  1907,  1908,   996,     0,     0,   821,  -501,     0,
    -501,     0,  1845,  -501,     0,     0,  -501,     0,     0,     0,
    1919,     0,  1921,   788,     0,   789,  1926,     0,   871,   872,
       0,     0,     0,     0,  -416,     0,   873,    19,     0,     0,
       0,   766,   767,   997,   998,   999,     0,  1935,    19,     0,
    1939,  1940,     0,     0,     0,  -416,  1000,  1319,  1320,   788,
    1392,   789,  1393,  1947,  1394,     0,  1949,   835,   836,   837,
     838,     0,     0,    19,     0,  -526,     0,  1955,  1395,  1396,
       0,  -416,    19,     0,     0,     0,   788,     0,   789,     0,
    -526,  -416,     0,     0,     0,     0,   839,  1027,  -501,  -501,
       0,     0,     0,     0,     0,     0,  -501,   766,   767,  -418,
       0,     0,  1981,     0,  -418,     0,  -418,     0,     0,     0,
    -416,     0,  1116,  1986,     0,  1988,     0,     0,     0,     0,
     886,   840,   841,     0,     0,     0,     0,  1990,     0,     0,
       0,  1992,     0,     0,    19,  -501,     0,  -418,  -418,  -418,
    1994,   887,   766,   767,     0,     0,     0,     0,     0,  -418,
    -501,     0,  -418,  1994,  2010,     0,  -418,  -418,  -416,     0,
       0,  1028,  -418,     0,     0,     0,  -418,   888,  -418,  -416,
    -416,  -416,  1124,     0,  2023,     0,  2025,   889,     0,  -418,
       0,     0,     0,     0,  2029,     0,     0,     0,     0,     0,
    -418,     0,  -418,   842,  1012,  -418,     0,     0,  -418,     0,
       0,     0,   766,   767,     0,     0,   890,     0,     0,     0,
     843,     0,     0,   766,   767,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,   766,   767,
       0,     0,   910,     0,     0,     0,     0,   766,   767,     0,
       0,  -342,  -342,  -342,  -342,     0,  -342,     0,  -342,     0,
    -418,     0,     0,     0,     0,     0,     0,     0,  1013,     0,
       0,     0,  -342,  -342,     0,     0,     0,     0,     0,  -418,
    -418,  -418,     0,   821,  1709,   821,   821,   821,  -418,     0,
    -418,   947,    36,   788,     0,   789,  -416,  -416,  -416,  -416,
       0,  -416,     0,  -416,     0,     0,     0,     0,     0,   766,
     767,     0,     0,     0,     0,     0,     0,  -416,  -416,     0,
     821,     0,  1077,  1077,  1014,     0,     0,  -418,     0,     0,
       0,     0,   -56,     0,    37,   947,   -56,    19,  -416,     0,
    -416,     0,  -418,     0,     0,     0,     0,     0,   -56,     0,
       0,     0,     0,     0,  1077,  1709,  -342,  -342,  -342,  -342,
       0,  -342,     0,  -342,     0,     0,     0,  -342,  -342,  -342,
    -342,     0,  -342,     0,  -342,     0,     0,  -342,  -342,     0,
    1077,     0,     0,     0,     0,     0,     0,     0,  -342,  -342,
       0,     0,  -342,  -342,  -342,  -342,     0,  -342,   788,  -342,
     789,  -342,  -342,  -342,  -342,     0,  -342,     0,  -342,   788,
       0,   789,     0,  -342,  -342,     0,     0,     0,     0,     0,
       0,     0,  -342,  -342,  1077,     0,  1709,     0,     0,     0,
       0,   821,     0,   821,   788,     0,   789,  -342,  -342,  -342,
    -342,     0,  -342,   788,  -342,   789,     0,   821,     0,     0,
       0,  1077,  1077,     0,   886,     0,     0,     0,  -342,  -342,
       0,     0,     0,  -342,  -342,  -342,  -342,     0,  -342,     0,
    -342,     0,     0,     0,     0,   887,     0,     0,     0,   788,
       0,   789,     0,     0,  -342,  -342,     1,     2,     3,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     0,     0,
     821,   888,   821,     0,   821,   788,     0,   789,     0,     0,
       0,   889,   766,   767,     0,     0,     0,     0,     0,     0,
     821,     0,   821,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   821,     0,   821,     0,     0,
     890,   821,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,   642,   643,   644,   645,   646,   647,
     648,   649,   650,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   675,   676,   677,
     678,   679,   680,   681,   682,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   703,   704,   705,   706,   707,
     708,   709,   710,   711,   712,   713,   714,   715,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,     0,   804,     0,
     815,   824,   831,     0,   849,     0,  -342,  -342,     0,  -342,
    1316,  -342,     0,  -342,     0,  1318,     0,     0,   835,   836,
     837,   838,     0,     0,     0,     0,  1324,  -342,  -342,     0,
       0,     0,     0,     0,     0,  1330,     0,  1331,     0,   766,
     767,     0,     0,     0,     0,     0,  1337,   839,   788,  1053,
     789,     0,   854,     0,     0,  1340,     0,   855,     0,   856,
       0,     0,  1344,     0,     0,     0,  -342,  -342,  -342,  -342,
       0,  -342,     0,  -342,     0,     0,  1348,     0,     0,  -688,
       0,  1358,   840,   841,     0,     0,     0,  -342,  -342,     0,
     857,   858,   859,  -688,  1212,     0,     0,     0,  1236,     0,
    1242,     0,   860,     0,  1379,   861,     0,     0,   788,   862,
     789,     0,     0,  1385,     0,   863,     0,     0,     0,   864,
       0,   865,     0,     0,     0,     0,     0,     0,     0,  1398,
       0,     0,   866,     0,     0,     0,     0,  1404,     0,     0,
       0,     0,     0,   867,     0,   868,     0,     0,   869,  1409,
       0,   870,     0,  1418,   842,     0,  1423,  1280,  1281,  1282,
    1283,  1284,  1285,  1424,  1425,  1426,     0,     0,  1427,     0,
       0,   843,     0,     0,  1431,     0,     0,     0,     0,  1432,
       0,     0,  1434,  1435,  1436,  1437,  1438,     0,     0,  1440,
    1441,  1442,  1443,  1444,     0,     0,  1446,  1447,  1448,  1449,
    1450,  1451,  1452,     0,     0,  1454,     0,     0,     0,  1455,
       0,     0,   854,     0,     0,  1462,  1463,   855,     0,   856,
       0,     0,  1467,     0,     0,     0,  1223,     0,     0,     0,
    1474,     0,     0,   871,   872,  1476,     0,     0,  1224,     0,
       0,   873,     0,     0,     0,     0,     0,     0,  1225,     0,
     857,   858,   859,  1226,  1486,     0,     0,     0,  1227,     0,
    1489,     0,   860,  1228,     0,   861,     0,  1494,     0,   862,
    1498,  1229,     0,  1499,  1500,   863,     0,     0,     0,   864,
    1504,   865,     0,     0,  1512,     0,     0,     0,     0,     0,
       0,     0,   866,  1517,     0,     0,  1518,     0,     0,     0,
       0,  1230,  1522,   867,  1231,   868,  1232,     0,   869,     0,
    1525,   870,     0,     0,  1526,     0,     0,  1528,     0,     0,
       0,  1529,  1530,     0,     0,     0,     0,  1233,  1532,     0,
       0,     0,     0,  1533,  1534,  1535,     0,     0,  1537,  1538,
       0,     0,     0,  1540,     0,     0,     0,  1542,     0,     0,
       0,  1544,     0,     0,     0,  1546,     0,     0,     0,  1547,
       0,     0,  1548,  1549,  1550,  1551,  1552,     0,     0,     0,
       0,     0,  1557,     0,     0,     0,  1560,     0,     0,  1561,
    1562,  1563,     0,     0,  1565,  1566,     0,     0,     0,  1569,
       0,   -56,    19,   871,   872,  1574,  1575,     0,     0,     0,
       0,   873,    20,     0,  1579,     0,     0,     0,     0,     0,
       0,  1585,     0,     0,  1589,  1590,     0,     0,     0,     0,
    1593,     0,     0,  1594,     0,     0,     0,  1597,     0,     0,
       0,     0,     0,  1603,     0,     0,     0,  1606,  1607,     0,
    -688,     0,  1622,  -688,     0,     0,  1625,     0,  1626,     0,
    1627,   788,     0,   789,     0,  -688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1630,     0,     0,  1632,
       0,     0,     0,     0,  1640,     0,     0,  1642,     0,     0,
       0,     0,   -56,    19,  1648,     0,     0,     0,     0,  1652,
    -540,  -921,    19,    20,     0,     0,  1658,     0,     0,     0,
    1659,  1660,    20,     0,  -540,  1661,     0,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,     0,     0,   854,     0,     0,     0,     0,   855,     0,
     856,     0,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,   857,   858,   859,     0,     0,     0,  1223,     0,     0,
       0,  1457,     0,   860,     0,     0,   861,     0,     0,  1224,
     862,     0,     0,     0,     0,     0,   863,     0,     0,  1225,
     864,     0,   865,     0,  1226,     0,     0,     0,     0,  1227,
       0,     0,     0,   866,  1228,  1281,  1282,  1283,     0,     0,
       0,    36,  1229,     0,   867,     0,   868,     0,     0,   869,
       0,     0,   870,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,  1230,     0,     0,  1231,     0,  1232,     0,     0,
       0,     0,     0,    37,     0,   -56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1233,    21,
       0,   582,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    21,   584,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,    36,     0,   871,   872,     0,     0,     0,     0,
       0,   420,   873,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   766,   767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1234,    37,    36,     0,     0,     0,  -524,
      19,  -540,  -921,    19,  -540,     0,     0,     0,     0,     0,
      36,     0,   788,  -524,   789,     0,  -540,  -921,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,  -524,     0,     0,     0,     0,  -524,     0,  -524,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -538,    19,     0,     0,
    -524,  -524,  -524,  -524,     0,   766,   767,     0,     0,     0,
    -538,     0,  -524,     0,     0,  -524,     0,     0,     0,  -524,
    -524,     0,     0,     0,     0,  -524,     0,     0,     0,  -524,
       0,  -524,   854,     0,     0,     0,     0,   855,     0,   856,
       0,     0,  -524,  -524,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -524,     0,  -524,     0,     0,  -524,     0,
       0,  -524,  -686,    19,     0,     0,     0,     0,     0,     0,
     857,   858,   859,     0,     0,     0,  -686,     0,     0,     0,
       0,     0,   860,     0,  1188,   861,     0,     0,     0,   862,
    1189,     0,     0,     0,     0,   863,     0,     0,     0,   864,
       0,   865,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   866,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   867,     0,   868,     0,     0,   869,  -538,
       0,   870,     0,     0,  -538,     0,  -538,     0,     0,     0,
       0,     0,     0,  -524,  -524,     0,     0,     0,     0,     0,
       0,  -524,   420,     0,     0,     0,     0,     0,     0,  -524,
    -524,     0,  -524,     0,  -524,     0,  -524,  -538,  -538,  -538,
       0,     0,   766,   767,     0,     0,     0,  -538,     0,  -538,
    -524,  -524,  -538,     0,     0,     0,  -538,   982,     0,     0,
    -524,     0,  -538,  -921,     0,  -686,  -538,     0,  -538,     0,
    -686,  -524,  -686,  -524,     0,  -524,     0,     0,  -921,  -538,
       0,     0,     0,   871,   872,     0,     0,     0,     0,     0,
    -538,   873,  -538,     0,     0,  -538,     0,     0,  -538,     0,
       0,     0,     0,  -686,  -686,  -686,     0,     0,   766,   767,
       0,     0,     0,     0,     0,  -686,     0,     0,  -686,     0,
       0,     0,  -686,  1200,     0,     0,     0,     0,  -686,     0,
       0,     0,  -686,     0,  -686,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -686,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -686,     0,  -686,     0,
       0,  -686,     0,     0,  -686,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -538,  -538,     0,     0,     0,     0,     0,     0,  -538,     0,
       0,     0,     0,     0,     0,     0,  -538,  -538,     0,  -538,
       0,  -538,     0,  -538,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -538,  -538,     0,
       0,     0,     0,     0,     0,     0,     0,  -538,     0,     0,
    -538,     0,     0,     0,     0,     0,     0,     0,  -538,     0,
    -538,     0,  -538,     0,     0,     0,  -686,  -686,     0,     0,
       0,     0,     0,     0,  -686,     0,     0,     0,     0,     0,
       0,     0,  -686,  -686,     0,  -686,     0,  -686,     0,  -686,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -686,  -686,     0,     0,     0,     0,     0,
       0,     0,     0,  -686,     0,    19,  -686,     0,     0,     0,
       0,     0,     0,    19,  -686,    20,  -686,     0,  -686,     0,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,     0,  1633,     0,     0,     0,  1349,
       0,     0,     0,     0,     0,   854,     0,     0,     0,  1223,
     855,     0,   856,     0,     0,     0,     0,     0,     0,     0,
       0,  1224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1225,     0,     0,     0,     0,  1226,     0,     0,     0,
       0,  1227,     0,   857,   858,   859,  1228,     0,   766,   767,
       0,     0,     0,     0,  1229,   860,     0,     0,   861,     0,
       0,     0,   862,     0,     0,     0,     0,     0,   863,     0,
       0,     0,   864,     0,   865,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1230,   866,     0,  1231,     0,  1232,
       0,     0,     0,     0,     0,     0,   867,     0,   868,     0,
       0,   869,     0,     0,   870,     0,     0,     0,     0,     0,
    1233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   799,
     800,     0,     0,     0,   810,     0,     0,     0,     0,     0,
     811,     0,     0,     0,     0,     0,     0,     0,     0,   835,
     836,   837,   838,   835,   836,   837,   838,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   812,     0,   854,
       0,     0,     0,   819,   855,     0,   856,     0,   839,     0,
       0,     0,   839,     0,   420,  1634,   871,   872,     0,   813,
       0,   801,     0,     0,   873,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   802,     0,   857,   858,   859,
       0,     0,     0,   840,   841,     0,     0,   840,   841,   860,
       0,     0,   861,     0,     0,  -921,   862,   877,     0,     0,
       0,     0,   863,     0,     0,     0,   864,     0,   865,     0,
    -921,     0,     0,     0,     0,     0,     0,     0,     0,   866,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     867,     0,   868,     0,     0,   869,     0,     0,   870,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   842,     0,     0,     0,   842,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   843,     0,     0,     0,   843,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1350,     0,
       0,     0,     0,     0,  -342,  -342,     0,     0,  -342,  -342,
     878,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -342,  -342,     0,     0,  -342,  -342,     0,     0,   879,
     871,   872,     0,     0,     0,     0,     0,     0,   873,   431,
     880,     0,     0,     0,     0,     0,   788,     0,   789,  -317,
     788,     0,   789,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,     0,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,  -317,  -317,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -317,     0,
    -317,  -317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -317,     0,
       0,  -317,  -317,  -317,   431,  -317,     0,  -317,  -317,  -317,
    -317,  -317,     0,     0,  -322,     0,     0,     0,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,     0,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,  -322,
    -322,  -322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -322,     0,  -322,  -322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -322,     0,     0,  -322,  -322,  -322,     0,
    -322,     0,  -322,  -322,  -322,  -322,  -322, -1059,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,   279,
     280,     0,     0,     0,     0,   281,   282,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,   283,     0,   284,     0,   285,   286,    20,    51,
       0,     0,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,   276,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,   279,
     280,     0,     0,     0,     0,   281,   282,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,   283,     0,   284,    51,   285,   286,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     275,     0,   276,   277,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,   279,   280,     0,     0,     0,
       0,   281,   282,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,  1804,     0,     0,     0,   283,     0,
     284,     0,   285,   286,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
       0,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,    20,     0,
       0,     0,     0,  -417,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,  -417,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -417,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
       0,   279,   280,     0,     0,     0,     0,     0,     0,  -417,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     854,  1715,     0,     0,   283,   855,   284,   856,   285,   286,
       0,     0,  1716,     0,  1717,  1718,     0,  -417,     0,     0,
     854,     0,     0,     0,     0,   855,  1719,   856,  -417,  -417,
    -417,  1720,  1721,     0,     0,     0,     0,     0,   857,   858,
     859,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     860,     0,     0,   861,     0,     0,     0,   862,   857,   858,
     859,     0,     0,   863,     0,     0,     0,   864,     0,   865,
     860,     0,     0,   861,     0,     0,     0,   862,     0,     0,
     866,     0,     0,   863,     0,     0,     0,   864,     0,   865,
       0,   867,     0,   868,     0,     0,   869,     0,     0,   870,
     866,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   867,  1708,   868,     0,     0,   869,     0,     0,   870,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -417,  -417,  -417,  -417,     0,
    -417,     0,  -417,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -417,  -417,     0,     0,
       0,   871,   872,     0,     0,     0,     0,     0,     0,   873,
       0,     0,     0,     0,     0,     0,     0,  -417,     0,  -417,
       0,   871,   872,     0,     0,     0,     0,     0,     0,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   788,
       0,   789,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   788,
       0,   789,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,     0,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   278,     0,   279,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     761,     0,   283,     0,   284,     0,   285,   286,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,     0,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,     0,   279,   280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -921,    19,
       0,     0,     0,     0,     0,     0,     0,     0,   283,    20,
     284,     0,   285,   286,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   772,   779,
     784,   795,     0,   795,     0,     0,     0,   844,     0,   874,
     881,   896,   906,   917,   922,   926,   932,   932,   926,     0,
     944,   949,   952,   926,     0,   944,   949,   959,   926,     0,
     944,   949,   966,   926,     0,   932,   932,   944,   949,   975,
     979,   983,     0,   992,  1001,  1006,  1019,  1029,  1037,  1040,
    1044,  1044,  1050,     0,     0,  1066,  1072,  1080,  1084,     0,
    1090,   979,  1099,  1102,  1102,  1102,  1108,  1102,  1113,  1117,
    1121,  1125,  1130,  1133,   926,     0,   944,   949,  1143,  1147,
    1149,  1149,  1149,  1154,  1149,  1160,  1166,   979,  1170,  1182,
    1184,     0,  1190,  1194,  1198,  1201,  1208,   979,     0,  1215,
     795,   795,     0,   844,     0,  1248,  1255,  1260,  1267,  1270,
    1147,  1276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   420,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,  1057,   278,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,     0,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,  1057,
     278,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,     0,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   278,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,     0,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1687,   278,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,     0,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1057,   278,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,     0,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,   301,   425,  1281,
     635,   633,   665,   721,  1382,   850,   850,   850,   924,  1015,
      11,  1508,    11,  1842,   688,     1,   175,   134,    15,    16,
      17,   850,   191,  1772,  1243,    37,   295,   662,   145,   453,
     191,   161,    44,   285,   360,     1,  1243,   461,   364,    51,
     136,     1,   364,     1,     1,   680,   142,   710,   683,     1,
     376,     0,     1,   176,   177,   324,   625,     0,    11,     0,
     131,   132,     0,     1,   361,    14,   679,   927,   191,   669,
     668,    14,    11,   169,   709,     0,     1,   677,    11,   376,
     680,    11,   695,  1912,   719,    11,   684,   217,    11,    14,
     690,   691,   692,   693,  1843,   191,   731,     0,   733,   621,
     622,     1,   702,   703,   704,   705,   706,   967,   361,   668,
      11,    14,    11,   672,   673,    11,  1323,    11,    61,    11,
     733,   360,   193,   376,     0,   684,   635,     0,    11,     0,
       1,   731,   643,   294,    11,    11,   207,   648,    14,    11,
     188,    14,   653,     0,   360,   330,   331,   633,   364,   660,
       0,   320,   313,   722,   723,     0,     1,    14,  1516,   668,
     682,    58,   364,   324,    14,  1914,   192,   174,   244,    14,
     372,    11,   374,   221,   222,   684,   662,   203,   135,   606,
     146,   899,    79,   376,   191,    58,    11,   372,   699,   374,
     176,   177,   135,   445,   160,   681,   363,   683,     0,   685,
     686,   687,   688,   689,    61,   191,    79,   214,   105,    11,
     176,   177,    14,   372,   174,   374,   176,   177,   115,   176,
     177,    10,    11,   709,     1,    14,    15,    16,    17,     0,
       0,   191,   105,   719,   191,   721,     0,     1,   299,     0,
      11,   227,   115,    14,    14,   244,    14,   364,     0,   174,
      14,   176,   177,    14,   214,     0,     1,   372,    11,   374,
       0,  1758,    14,   275,   276,   277,   191,   145,     0,   281,
     282,   144,   284,   639,    14,   192,   176,   177,   135,   237,
     238,   159,    14,   918,   363,   135,   203,   204,   205,   214,
     259,   657,   658,   262,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   918,
    1629,   363,   361,   899,  1243,   364,   927,  1015,   361,   372,
     432,   374,   434,   361,   676,   437,   633,   376,   635,   372,
     363,   374,    46,   376,   435,  1109,   361,   923,   376,  1817,
     370,  1054,   368,     0,     1,   368,   458,   459,   460,     0,
       0,   376,     0,     1,  1054,   662,  1015,    14,   361,   359,
    1838,   362,  1021,    14,    14,   976,    14,   363,  1384,   372,
     364,   374,    11,   376,   681,  1481,   683,   360,   685,   686,
     687,   688,   689,   360,   633,   361,  1329,  1845,   361,   360,
     330,   363,  1336,   364,  1339,   320,   364,   286,  1216,   372,
     376,   374,   709,   376,   361,   376,  1015,     1,   715,     0,
       1,   361,   719,   662,   721,   372,   361,   374,  1347,   376,
       1,     0,   372,    14,   374,     0,   376,  1905,  1906,  1907,
    1908,   376,   681,   297,   683,    14,    11,   176,   177,    14,
     304,   305,   306,   307,     0,   309,   310,   311,   312,   610,
     330,     0,     1,   317,   318,  1155,   617,   360,    14,   361,
     709,   364,   364,   647,   293,    14,   319,   579,   652,  1947,
     719,  1949,   721,     0,   376,   659,   588,   589,   590,   591,
     592,   593,   594,   580,   581,   135,  1868,    14,   375,   601,
     361,   361,   359,   605,     1,   607,   608,   361,   260,   261,
     361,  1087,   372,  1981,   374,   376,   376,   619,    11,   361,
     375,   372,   376,   374,   698,   376,   361,   363,   631,     1,
     372,   361,   374,  1109,   376,   330,   331,  1823,   641,   361,
    1826,   376,   372,   646,   374,     0,   376,   683,   651,   134,
     372,   363,   374,   656,   376,   364,   435,   686,   687,    14,
     689,   664,   441,     0,   159,   136,     0,     0,     1,   150,
     151,   142,   363,   709,   453,   454,   191,    14,  1281,  1282,
      14,    14,  1285,   719,   703,   704,   623,   706,   625,   135,
     627,   363,   176,   177,   697,   176,   177,   301,   169,   356,
     357,   185,   899,     0,     1,   176,   177,   191,   363,   364,
     713,     0,   363,   194,   363,     0,     1,    14,   363,     0,
     191,   918,    11,   363,     0,    14,   923,   208,   209,    14,
       1,   668,   363,    14,   191,   672,   673,   363,    14,   363,
    1216,     1,   324,   745,   746,   747,   748,   684,   750,   230,
     231,   363,   170,   755,   363,   364,     0,   694,   428,   429,
     899,   763,   764,   765,   766,   767,   768,   769,   770,   363,
      14,   758,   298,  1376,  1377,   777,   778,   363,   175,   176,
     177,   783,     1,   363,   923,   722,   723,   984,     1,  1819,
    1820,   363,  1382,     1,   363,     1,   363,   799,   800,   801,
     802,   580,   581,   600,   176,   177,   595,   225,   810,   811,
     812,   813,   752,   441,   361,  1800,  1934,   819,  1060,   462,
     361,   361,  1992,   361,  1477,   604,   828,   829,   850,   376,
      11,   372,   372,   374,   374,   376,   376,   668,   376,    11,
     842,   843,   371,   372,   373,   624,  1411,   626,   627,   628,
    1410,  1945,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,   870,   871,
     872,   873,  1536,  1382,   907,   877,   878,   879,  1295,   918,
     361,  1382,    11,  1840,   886,   887,   888,   889,   890,   634,
    1087,   976,   361,  1481,  1461,   376,   361,   676,   960,   364,
     902,   903,   904,   905,  1578,   176,   177,   376,   910,   911,
     912,   376,  1109,   850,   332,   361,   176,   177,  1576,  1576,
    1510,   924,   361,   295,   927,  1578,   372,   676,   374,   135,
     376,   191,  1481,   330,   331,  1411,  1485,   376,  1054,   941,
     942,   943,  1054,   361,   361,   724,     1,   364,  1087,   648,
     953,   732,   324,   134,   653,   734,    11,   176,   177,   376,
       1,   660,  1185,   176,   177,  1602,   147,   148,   176,   177,
     176,   177,   725,  1343,  1564,   372,  1357,   374,   191,   758,
     982,   984,  1481,   164,   165,  1639,   194,   989,   990,   991,
     162,   669,   682,   995,   996,   997,   998,   999,  1000,   622,
     699,  1003,   606,   604,   673,  1202,   361,   363,   364,  1011,
    1012,  1013,  1014,  1041,     1,  1041,   372,    11,   374,  1216,
    1217,   376,   230,   231,   361,  1027,  1028,   361,   361,   201,
     758,  1033,  1034,  1035,  1036,   372,   296,   374,   372,   376,
     374,   170,   376,   376,    13,  1047,  1048,  1049,  1294,     1,
    1997,  1527,  1727,  1728,  1729,  1057,   316,  1059,    -1,   330,
    1536,  1303,    -1,    -1,   361,    -1,    -1,  1069,  1070,  1071,
      -1,     1,   361,  1075,  1076,   364,   361,  1216,  1015,   376,
     361,    -1,  1279,   364,  1021,   361,    -1,   376,   364,    -1,
      -1,   376,    11,  1095,   135,   376,   225,    -1,  1762,    -1,
     376,   372,    -1,   374,    -1,     0,     1,   320,     0,     1,
    1112,   330,   331,    -1,  1116,   170,    -1,   361,  1120,    14,
     364,    -1,  1124,    -1,   330,   331,   332,   333,    -1,   335,
      -1,   337,   376,  1723,    -1,   176,   177,  1139,  1140,  1141,
    1142,   135,    -1,  1145,  1146,   351,   352,    -1,  1823,    -1,
       1,  1826,   324,   372,   141,   374,  1158,  1159,   152,   153,
    1162,  1163,  1164,  1165,    -1,    11,   372,  1169,   374,    -1,
     225,    -1,    -1,  1763,    -1,  1177,  1178,  1179,  1180,  1181,
      -1,    -1,  1185,   364,    -1,    -1,  1188,  1189,    -1,   176,
     177,   372,   796,   374,  1196,  1197,    -1,    -1,  1200,  1202,
    1822,    -1,   806,   332,  1206,  1207,   193,  1810,  1811,  1211,
     330,   331,    58,   817,  1411,  1840,   343,   344,   345,   346,
     150,   151,   826,     1,   176,   177,    -1,   347,   348,   833,
     182,    -1,  1234,    79,     1,  1711,  1826,  1239,    -1,  1842,
      -1,   193,   846,   195,    -1,  1247,   176,   177,   852,  1251,
    1252,  1253,  1254,    -1,    -1,  1257,  1258,  1259,     1,   105,
    1262,  1263,  1264,  1265,  1266,  1868,  1508,    -1,    -1,   115,
      -1,    -1,  1411,    -1,  1516,    -1,    -1,   332,   208,   209,
     884,   176,   177,    11,    -1,  1761,  1762,    -1,    -1,   330,
    1292,  1293,    -1,    -1,  1296,  1297,  1298,  1299,  1300,  1301,
    1776,  1777,  1778,  1956,    -1,    -1,  1243,    -1,  1898,  1912,
    1312,    11,   252,    -1,   254,   255,   256,  1319,  1320,  1321,
    1322,     1,  1823,    -1,     1,   176,   177,    -1,    -1,    -1,
    1527,   372,    -1,   374,  1576,    -1,  1939,  1940,    -1,  1536,
     191,  1840,    -1,   330,    -1,    -1,  1822,  1349,  1350,    -1,
    1352,    -1,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,    -1,   135,    -1,
       0,     1,    -1,    -1,    -1,   623,    -1,   625,   372,   627,
     374,  1383,   986,    -1,    14,   372,  1323,   374,  1527,  1391,
    1392,  1393,  1394,  1395,  1396,   643,    -1,    -1,   176,   177,
     648,    -1,  1339,    -1,    -1,   653,    -1,   174,  1345,   176,
     177,    -1,   660,     1,    -1,   193,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,   672,   673,    -1,    -1,   320,     1,
      -1,   679,    -1,    -1,  1213,   330,   331,   332,   333,    -1,
     335,   360,   337,   294,   211,   364,   694,   695,    -1,    -1,
    1926,   699,   371,   372,   373,  1457,   351,   352,   135,    -1,
    1064,   228,   313,    -1,   144,    58,   361,   715,   360,    -1,
     362,    -1,   364,   324,   722,   723,    -1,   372,    -1,   374,
      -1,   376,    -1,    -1,   376,   733,    79,   167,   168,    -1,
     233,   234,   235,   236,   237,   238,   176,   177,    -1,   176,
     177,    -1,    -1,  1505,  1506,    -1,    -1,    -1,  1802,    -1,
       1,    -1,   105,  1515,  1711,    -1,  1758,    -1,    -1,   247,
     248,    -1,   115,  1765,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,    -1,   215,   216,    -1,    -1,   239,
     240,   241,   242,   243,  1481,    -1,   176,   177,  1485,    -1,
      -1,   144,   330,   331,   332,   333,   299,   335,     1,   337,
      -1,   149,    -1,     1,  1761,  1762,    -1,    -1,    -1,    -1,
      -1,  1175,  1711,   351,   352,  1577,    -1,    -1,    -1,  1776,
    1777,  1778,  1779,    -1,     1,    -1,   174,    -1,   176,   177,
      -1,    -1,     0,     1,   372,    -1,   374,    -1,    -1,    -1,
    1204,    -1,   850,  1845,   176,   177,    14,  1609,  1610,  1611,
    1612,  1613,  1614,  1615,  1616,  1617,  1618,  1619,    -1,   191,
      58,   193,  1761,    -1,    -1,  1822,    -1,   370,     1,    -1,
      -1,  1633,  1634,  1237,  1636,    -1,  1638,  1776,  1777,  1778,
     228,  1245,    -1,  1840,    -1,    -1,  1250,    -1,    -1,    -1,
     141,    -1,    -1,   330,   331,   332,   333,    -1,   335,    -1,
     337,  1663,  1664,    -1,    -1,    -1,   366,    -1,   368,    -1,
    1672,  1673,    -1,    -1,   351,   352,    -1,   115,  1680,   927,
      -1,    -1,    -1,  1822,    -1,  1687,  1688,    -1,    -1,     1,
      -1,   182,   135,    -1,     1,   372,    -1,   374,  1700,   137,
     330,   331,   193,   333,   195,   335,    -1,   337,    -1,   152,
     153,    -1,    -1,  1715,  1716,  1717,  1718,  1719,  1720,  1721,
      -1,   351,   352,    -1,    -1,   133,    -1,   144,   976,  1926,
     138,   361,   140,   176,   177,    -1,   984,     1,   176,   177,
    1742,    -1,   372,    -1,   374,    -1,   376,   319,    -1,   187,
     167,   168,   324,  1755,    -1,    -1,    -1,   130,    -1,   176,
     177,    -1,  1764,   171,   172,   173,    -1,    -1,   176,   177,
      -1,     1,    -1,  1021,     1,   183,    -1,   185,   186,   372,
    1782,   374,   190,   191,    -1,    -1,  1788,  1926,   196,  1791,
    1792,  1793,   200,   166,   202,  1797,  1798,  1799,   215,   216,
      -1,    -1,  1804,   176,   177,   213,   223,    -1,    -1,    -1,
    1812,  1813,  1814,  1815,  1816,     1,   224,    -1,   226,    -1,
      -1,   229,    -1,   135,   232,   137,    -1,  1829,    -1,  1831,
    1832,    -1,   144,   206,  1771,    -1,  1773,  1774,  1775,   330,
     331,   332,   333,    -1,   335,   218,   337,    -1,     1,  1851,
    1852,  1853,    -1,    -1,    -1,   167,   168,    -1,    -1,    -1,
     351,   352,  1864,  1865,   176,   177,    -1,    -1,    -1,   176,
     177,  1808,  1874,   137,  1876,    -1,    -1,    -1,    -1,    -1,
     144,   372,     1,   374,     1,   192,    -1,   330,   331,   332,
     333,    -1,   335,    -1,   337,    -1,   203,   204,   205,    -1,
    1902,   131,   132,   167,   168,    -1,   314,   315,   351,   352,
      -1,   223,   176,   177,   322,    -1,    -1,    -1,  1920,    -1,
    1922,  1923,  1924,  1925,    -1,  1927,  1928,  1929,    -1,   372,
      -1,   374,    -1,    -1,  1936,  1937,    -1,    -1,    -1,  1941,
    1942,  1943,  1944,    -1,     0,    -1,   176,   177,    -1,   176,
     177,    -1,    -1,   361,  1202,    -1,  1958,   143,    14,   223,
     150,   151,    79,   193,    -1,    -1,   193,   194,   376,  1217,
     197,   198,   199,    -1,    -1,    58,    -1,   207,   330,   331,
     332,   333,  1919,   335,  1921,   337,    -1,  1989,   105,  1991,
     176,   177,    -1,    -1,  1996,  1243,    79,    -1,  1935,   351,
     352,  2003,  2004,  2005,   194,  2007,   640,   193,    -1,    -1,
    2012,   645,    -1,    -1,     0,     1,   650,  2019,   208,   209,
    2022,   655,   105,   176,   177,    -1,    -1,   144,    14,  2031,
      -1,  1279,   115,  1281,  1282,  1283,    -1,  1285,   191,    -1,
     230,   231,    -1,    -1,   161,   330,   331,   332,   333,    -1,
     335,  1988,   337,  1990,    -1,  1992,    -1,   176,   177,   176,
     177,   144,   696,    -1,    -1,    -1,   351,   352,    -1,    -1,
      -1,  2008,    -1,  2010,    -1,  1323,    -1,   133,    -1,    -1,
      -1,    -1,   138,    -1,   140,    -1,  2023,   372,  2025,   374,
      -1,  1339,  2029,    -1,    -1,  1699,     1,  1345,    -1,    -1,
     217,    -1,  1706,  1707,    -1,    -1,  1710,    -1,  1712,   192,
      -1,    -1,    -1,    -1,   646,   171,   172,   173,   174,   651,
     203,   204,   205,    -1,   656,    -1,  1730,   183,  1376,  1377,
     186,    -1,   664,  1381,   190,   191,    -1,    -1,    -1,    -1,
     196,    -1,    -1,  1747,   200,  1749,   202,   133,    -1,    -1,
      -1,    -1,   138,  1757,   140,    -1,    -1,   213,   214,    64,
      -1,    -1,     1,    -1,    -1,   697,    -1,    -1,   224,    -1,
     226,    -1,    -1,   229,    -1,    -1,   232,   330,   331,   332,
     333,   713,   335,    -1,   337,   171,   172,   173,    -1,    -1,
     176,   177,    -1,    -1,    -1,    -1,    -1,   183,   351,   352,
     186,    -1,    -1,    -1,   190,  1809,     0,     1,    -1,    -1,
     196,   330,   331,     1,   200,    -1,   202,    -1,    -1,   372,
      14,   374,    -1,    11,    -1,    -1,    -1,   213,   347,   348,
    1834,  1835,  1836,  1837,   139,    -1,    -1,  1485,   224,    -1,
     226,    -1,  1846,   229,    -1,    -1,   232,    -1,    -1,    -1,
    1854,    -1,  1856,   372,    -1,   374,  1860,    -1,   314,   315,
      -1,    -1,    -1,    -1,    58,    -1,   322,     1,    -1,    -1,
      -1,   176,   177,   178,   179,   180,    -1,  1881,     1,    -1,
    1884,  1885,    -1,    -1,    -1,    79,   191,   330,   331,   372,
     333,   374,   335,  1897,   337,    -1,  1900,   155,   156,   157,
     158,    -1,    -1,     1,    -1,   361,    -1,  1911,   351,   352,
      -1,   105,     1,    -1,    -1,    -1,   372,    -1,   374,    -1,
     376,   115,    -1,    -1,    -1,    -1,   184,    61,   314,   315,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   176,   177,   133,
      -1,    -1,  1946,    -1,   138,    -1,   140,    -1,    -1,    -1,
     144,    -1,   191,  1957,    -1,  1959,    -1,    -1,    -1,    -1,
      58,   219,   220,    -1,    -1,    -1,    -1,  1971,    -1,    -1,
      -1,  1975,    -1,    -1,     1,   361,    -1,   171,   172,   173,
    1984,    79,   176,   177,    -1,    -1,    -1,    -1,    -1,   183,
     376,    -1,   186,  1997,  1998,    -1,   190,   191,   192,    -1,
      -1,   135,   196,    -1,    -1,    -1,   200,   105,   202,   203,
     204,   205,   135,    -1,  2018,    -1,  2020,   115,    -1,   213,
      -1,    -1,    -1,    -1,  2028,    -1,    -1,    -1,    -1,    -1,
     224,    -1,   226,   291,    61,   229,    -1,    -1,   232,    -1,
      -1,    -1,   176,   177,    -1,    -1,   144,    -1,    -1,    -1,
     308,    -1,    -1,   176,   177,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
      -1,    -1,   135,    -1,    -1,    -1,    -1,   176,   177,    -1,
      -1,   330,   331,   332,   333,    -1,   335,    -1,   337,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,   351,   352,    -1,    -1,    -1,    -1,    -1,   313,
     314,   315,    -1,  1771,  1772,  1773,  1774,  1775,   322,    -1,
     324,  1779,   320,   372,    -1,   374,   330,   331,   332,   333,
      -1,   335,    -1,   337,    -1,    -1,    -1,    -1,    -1,   176,
     177,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,    -1,
    1808,    -1,  1810,  1811,   191,    -1,    -1,   361,    -1,    -1,
      -1,    -1,   360,    -1,   362,  1823,   364,     1,   372,    -1,
     374,    -1,   376,    -1,    -1,    -1,    -1,    -1,   376,    -1,
      -1,    -1,    -1,    -1,  1842,  1843,   330,   331,   332,   333,
      -1,   335,    -1,   337,    -1,    -1,    -1,   330,   331,   332,
     333,    -1,   335,    -1,   337,    -1,    -1,   351,   352,    -1,
    1868,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
      -1,    -1,   330,   331,   332,   333,    -1,   335,   372,   337,
     374,   330,   331,   332,   333,    -1,   335,    -1,   337,   372,
      -1,   374,    -1,   351,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   351,   352,  1912,    -1,  1914,    -1,    -1,    -1,
      -1,  1919,    -1,  1921,   372,    -1,   374,   330,   331,   332,
     333,    -1,   335,   372,   337,   374,    -1,  1935,    -1,    -1,
      -1,  1939,  1940,    -1,    58,    -1,    -1,    -1,   351,   352,
      -1,    -1,    -1,   330,   331,   332,   333,    -1,   335,    -1,
     337,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,   372,
      -1,   374,    -1,    -1,   351,   352,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
    1988,   105,  1990,    -1,  1992,   372,    -1,   374,    -1,    -1,
      -1,   115,   176,   177,    -1,    -1,    -1,    -1,    -1,    -1,
    2008,    -1,  2010,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2023,    -1,  2025,    -1,    -1,
     144,  2029,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,    -1,   624,    -1,
     626,   627,   628,    -1,   630,    -1,   330,   331,    -1,   333,
     782,   335,    -1,   337,    -1,   787,    -1,    -1,   155,   156,
     157,   158,    -1,    -1,    -1,    -1,   798,   351,   352,    -1,
      -1,    -1,    -1,    -1,    -1,   807,    -1,   809,    -1,   176,
     177,    -1,    -1,    -1,    -1,    -1,   818,   184,   372,   675,
     374,    -1,   133,    -1,    -1,   827,    -1,   138,    -1,   140,
      -1,    -1,   834,    -1,    -1,    -1,   330,   331,   332,   333,
      -1,   335,    -1,   337,    -1,    -1,   848,    -1,    -1,     0,
      -1,   853,   219,   220,    -1,    -1,    -1,   351,   352,    -1,
     171,   172,   173,    14,   720,    -1,    -1,    -1,   724,    -1,
     726,    -1,   183,    -1,   876,   186,    -1,    -1,   372,   190,
     374,    -1,    -1,   885,    -1,   196,    -1,    -1,    -1,   200,
      -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   901,
      -1,    -1,   213,    -1,    -1,    -1,    -1,   909,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,    -1,   229,   921,
      -1,   232,    -1,   925,   291,    -1,   928,   739,   740,   741,
     742,   743,   744,   935,   936,   937,    -1,    -1,   940,    -1,
      -1,   308,    -1,    -1,   946,    -1,    -1,    -1,    -1,   951,
      -1,    -1,   954,   955,   956,   957,   958,    -1,    -1,   961,
     962,   963,   964,   965,    -1,    -1,   968,   969,   970,   971,
     972,   973,   974,    -1,    -1,   977,    -1,    -1,    -1,   981,
      -1,    -1,   133,    -1,    -1,   987,   988,   138,    -1,   140,
      -1,    -1,   994,    -1,    -1,    -1,    15,    -1,    -1,    -1,
    1002,    -1,    -1,   314,   315,  1007,    -1,    -1,    27,    -1,
      -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
     171,   172,   173,    42,  1026,    -1,    -1,    -1,    47,    -1,
    1032,    -1,   183,    52,    -1,   186,    -1,  1039,    -1,   190,
    1042,    60,    -1,  1045,  1046,   196,    -1,    -1,    -1,   200,
    1052,   202,    -1,    -1,  1056,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,  1065,    -1,    -1,  1068,    -1,    -1,    -1,
      -1,    90,  1074,   224,    93,   226,    95,    -1,   229,    -1,
    1082,   232,    -1,    -1,  1086,    -1,    -1,  1089,    -1,    -1,
      -1,  1093,  1094,    -1,    -1,    -1,    -1,   116,  1100,    -1,
      -1,    -1,    -1,  1105,  1106,  1107,    -1,    -1,  1110,  1111,
      -1,    -1,    -1,  1115,    -1,    -1,    -1,  1119,    -1,    -1,
      -1,  1123,    -1,    -1,    -1,  1127,    -1,    -1,    -1,  1131,
      -1,    -1,  1134,  1135,  1136,  1137,  1138,    -1,    -1,    -1,
      -1,    -1,  1144,    -1,    -1,    -1,  1148,    -1,    -1,  1151,
    1152,  1153,    -1,    -1,  1156,  1157,    -1,    -1,    -1,  1161,
      -1,     0,     1,   314,   315,  1167,  1168,    -1,    -1,    -1,
      -1,   322,    11,    -1,  1176,    -1,    -1,    -1,    -1,    -1,
      -1,  1183,    -1,    -1,  1186,  1187,    -1,    -1,    -1,    -1,
    1192,    -1,    -1,  1195,    -1,    -1,    -1,  1199,    -1,    -1,
      -1,    -1,    -1,  1205,    -1,    -1,    -1,  1209,  1210,    -1,
     361,    -1,  1214,   364,    -1,    -1,  1218,    -1,  1220,    -1,
    1222,   372,    -1,   374,    -1,   376,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1238,    -1,    -1,  1241,
      -1,    -1,    -1,    -1,  1246,    -1,    -1,  1249,    -1,    -1,
      -1,    -1,     0,     1,  1256,    -1,    -1,    -1,    -1,  1261,
       0,     0,     1,    11,    -1,    -1,  1268,    -1,    -1,    -1,
    1272,  1273,    11,    -1,    14,  1277,    -1,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,   133,    -1,    -1,    -1,    -1,   138,    -1,
     140,    -1,    -1,    -1,    -1,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   171,   172,   173,    -1,    -1,    -1,    15,    -1,    -1,
      -1,   181,    -1,   183,    -1,    -1,   186,    -1,    -1,    27,
     190,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,    37,
     200,    -1,   202,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,   213,    52,  1287,  1288,  1289,    -1,    -1,
      -1,   320,    60,    -1,   224,    -1,   226,    -1,    -1,   229,
      -1,    -1,   232,    -1,    -1,    -1,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,    -1,    90,    -1,    -1,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,   362,    -1,   364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,   244,
      -1,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   244,   245,    -1,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    -1,
      -1,    -1,   320,    -1,   314,   315,    -1,    -1,    -1,    -1,
      -1,   320,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   191,   362,   320,    -1,    -1,    -1,     0,
       1,   361,     0,     1,   364,    -1,    -1,    -1,    -1,    -1,
     320,    -1,   372,    14,   374,    -1,   376,   376,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   133,    -1,    -1,    -1,    -1,   138,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,
     171,   172,   173,   174,    -1,   176,   177,    -1,    -1,    -1,
      14,    -1,   183,    -1,    -1,   186,    -1,    -1,    -1,   190,
     191,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
      -1,   202,   133,    -1,    -1,    -1,    -1,   138,    -1,   140,
      -1,    -1,   213,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,    -1,   229,    -1,
      -1,   232,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,   172,   173,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,    -1,    -1,    -1,   190,
     191,    -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,   200,
      -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,    -1,   229,   133,
      -1,   232,    -1,    -1,   138,    -1,   140,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   315,    -1,    -1,    -1,    -1,    -1,
      -1,   322,   320,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     331,    -1,   333,    -1,   335,    -1,   337,   171,   172,   173,
      -1,    -1,   176,   177,    -1,    -1,    -1,   181,    -1,   183,
     351,   352,   186,    -1,    -1,    -1,   190,   191,    -1,    -1,
     361,    -1,   196,   361,    -1,   133,   200,    -1,   202,    -1,
     138,   372,   140,   374,    -1,   376,    -1,    -1,   376,   213,
      -1,    -1,    -1,   314,   315,    -1,    -1,    -1,    -1,    -1,
     224,   322,   226,    -1,    -1,   229,    -1,    -1,   232,    -1,
      -1,    -1,    -1,   171,   172,   173,    -1,    -1,   176,   177,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,   186,    -1,
      -1,    -1,   190,   191,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,   315,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   330,   331,    -1,   333,
      -1,   335,    -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,    -1,    -1,
     364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,
     374,    -1,   376,    -1,    -1,    -1,   314,   315,    -1,    -1,
      -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,   331,    -1,   333,    -1,   335,    -1,   337,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,   352,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   361,    -1,     1,   364,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   372,    11,   374,    -1,   376,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,    -1,     1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    15,
     138,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,   171,   172,   173,    52,    -1,   176,   177,
      -1,    -1,    -1,    -1,    60,   183,    -1,    -1,   186,    -1,
      -1,    -1,   190,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   200,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,   213,    -1,    93,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
     156,   157,   158,   155,   156,   157,   158,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   169,    -1,   133,
      -1,    -1,    -1,   175,   138,    -1,   140,    -1,   184,    -1,
      -1,    -1,   184,    -1,   320,   191,   314,   315,    -1,   191,
      -1,   193,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,    -1,   171,   172,   173,
      -1,    -1,    -1,   219,   220,    -1,    -1,   219,   220,   183,
      -1,    -1,   186,    -1,    -1,   361,   190,   191,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,   200,    -1,   202,    -1,
     376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,   226,    -1,    -1,   229,    -1,    -1,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,   291,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
      -1,    -1,    -1,    -1,   330,   331,    -1,    -1,   330,   331,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,   348,    -1,    -1,   347,   348,    -1,    -1,   313,
     314,   315,    -1,    -1,    -1,    -1,    -1,    -1,   322,     1,
     324,    -1,    -1,    -1,    -1,    -1,   372,    -1,   374,    11,
     372,    -1,   374,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
     322,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,
      -1,   363,   364,   365,     1,   367,    -1,   369,   370,   371,
     372,   373,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   322,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,    -1,    -1,   363,   364,   365,    -1,
     367,    -1,   369,   370,   371,   372,   373,     0,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,   269,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   322,
     323,    -1,    -1,    -1,    -1,   328,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,   365,    -1,   367,    -1,   369,   370,    11,    12,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   267,    -1,   269,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   322,
     323,    -1,    -1,    -1,    -1,   328,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,   367,    12,   369,   370,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,   269,   270,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   322,   323,    -1,    -1,    -1,
      -1,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,   361,    -1,    -1,    -1,   365,    -1,
     367,    -1,   369,   370,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
      -1,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,    11,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,
      -1,   322,   323,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,    -1,    -1,   365,   138,   367,   140,   369,   370,
      -1,    -1,   145,    -1,   147,   148,    -1,   192,    -1,    -1,
     133,    -1,    -1,    -1,    -1,   138,   159,   140,   203,   204,
     205,   164,   165,    -1,    -1,    -1,    -1,    -1,   171,   172,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,   186,    -1,    -1,    -1,   190,   171,   172,
     173,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,   202,
     183,    -1,    -1,   186,    -1,    -1,    -1,   190,    -1,    -1,
     213,    -1,    -1,   196,    -1,    -1,    -1,   200,    -1,   202,
      -1,   224,    -1,   226,    -1,    -1,   229,    -1,    -1,   232,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,   225,   226,    -1,    -1,   229,    -1,    -1,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   330,   331,   332,   333,    -1,
     335,    -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   352,    -1,    -1,
      -1,   314,   315,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,   374,
      -1,   314,   315,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,
      -1,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,
      -1,   374,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   322,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     363,    -1,   365,    -1,   367,    -1,   369,   370,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,    -1,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,   322,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    11,
     367,    -1,   369,   370,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   620,   621,
     622,   623,    -1,   625,    -1,    -1,    -1,   629,    -1,   631,
     632,   633,   634,   635,   636,   637,   638,   639,   640,    -1,
     642,   643,   644,   645,    -1,   647,   648,   649,   650,    -1,
     652,   653,   654,   655,    -1,   657,   658,   659,   660,   661,
     662,   663,    -1,   665,   666,   667,   668,   669,   670,   671,
     672,   673,   674,    -1,    -1,   677,   678,   679,   680,    -1,
     682,   683,   684,   685,   686,   687,   688,   689,   690,   691,
     692,   693,   694,   695,   696,    -1,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,   711,
     712,    -1,   714,   715,   716,   717,   718,   719,    -1,   721,
     722,   723,    -1,   725,    -1,   727,   728,   729,   730,   731,
     732,   733,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,   319,   320,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,   319,
     320,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    -1,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,    -1,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,   320,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    -1,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   320
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,   646,
     378,   378,   378,   378,   378,   378,   378,   378,     0,     1,
      11,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   320,   362,   379,   389,
     390,   391,   392,   393,   394,   395,   396,   395,   644,   645,
       1,    12,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   267,   269,   270,   320,   322,
     323,   328,   329,   365,   367,   369,   370,   380,   381,   397,
     402,   403,   404,   406,   407,   408,   409,   410,   411,   412,
     414,   415,   640,   641,   642,   643,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     320,   379,   634,   636,   634,   637,   634,   634,    11,    11,
     378,     1,   244,   378,   364,   437,   643,   360,   638,   378,
     378,   378,   378,   378,   378,   378,   402,   233,   234,   235,
     236,   237,   238,   299,   370,   379,   411,    11,   371,   372,
     373,   413,   437,   638,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   376,
     635,   635,   246,   393,   245,   393,   247,   248,   252,   253,
     254,   255,   256,   257,   258,   384,   385,   386,   387,   388,
     378,   244,   378,   395,   378,   320,   396,   360,   402,   379,
     412,   237,   238,   379,   378,   378,   378,   412,   414,   370,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     436,   436,   436,   436,   436,   378,   634,   634,   378,   378,
     378,   378,   378,   378,   378,   252,   254,   255,   256,   387,
     363,   389,   378,   636,   378,   360,   635,   639,   378,   378,
     363,   363,   378,   144,   167,   168,   176,   177,   215,   216,
     223,   379,   438,   439,   609,   610,   613,   137,   223,   438,
     609,   611,   614,   135,   438,   609,   611,   615,   372,   374,
     417,   419,   422,   434,   435,   438,   565,   566,   571,   131,
     132,   193,   207,   379,   439,   572,   573,   574,   566,   575,
     136,   142,   169,   191,   379,   439,   576,   577,   578,   175,
     379,   417,   422,   423,   439,   579,   580,   581,   191,   320,
     379,   439,   582,   583,   584,   155,   156,   157,   158,   184,
     219,   220,   291,   308,   438,   568,   569,   570,   585,   439,
     587,   588,   589,   590,   133,   138,   140,   171,   172,   173,
     183,   186,   190,   196,   200,   202,   213,   224,   226,   229,
     232,   314,   315,   322,   438,   440,   452,   191,   294,   313,
     324,   438,   441,   466,   467,   468,    58,    79,   105,   115,
     144,   417,   422,   424,   427,   429,   438,   442,   469,   470,
     471,   472,   192,   203,   204,   205,   438,   473,   474,   475,
     135,   152,   153,   416,   424,   425,   427,   438,   476,   477,
     478,   479,   438,   449,   450,   451,   438,   491,   492,   425,
     427,   430,   438,   443,   493,   494,   494,   492,   438,   440,
     502,   174,   191,   214,   438,   482,   483,   417,   430,   438,
     486,   487,   438,   480,   481,   492,   502,   483,   487,   438,
     495,   496,   492,   502,   483,   487,   438,   484,   485,   492,
     502,   494,   494,   483,   487,   438,   488,   489,   416,   438,
     442,   535,   191,   438,   498,   499,   500,   501,   502,   191,
     193,   319,   438,   441,   503,    64,   139,   178,   179,   180,
     191,   438,   504,   191,   296,   316,   438,   647,   648,   649,
     650,   652,    61,   135,   191,   423,   425,   428,   429,   438,
     616,   618,   619,   620,   621,   622,   623,    61,   135,   438,
     443,   616,   617,   150,   151,   208,   209,   438,   626,   627,
     438,   629,   630,   423,   438,   624,   624,   194,   230,   231,
     438,   631,   632,   439,   523,   524,   525,   319,   379,   402,
     510,   511,   513,   514,   515,   516,   438,   443,   517,   182,
     193,   195,   438,   518,   519,   141,   193,   417,   419,   421,
     438,   520,   521,   416,   438,   443,   526,   442,   527,   528,
     438,   609,   610,   612,   535,   193,   423,   425,   429,   438,
     531,   416,   438,   442,   532,   533,   533,   533,   438,   532,
     534,   533,   191,   438,   443,   530,   191,   438,   443,   606,
     135,   438,   443,   529,   135,   438,   443,   605,   422,   426,
     438,   536,   419,   438,   625,   492,   502,   483,   487,   135,
     174,   211,   228,   438,   537,   143,   193,   438,   538,   438,
     443,   539,   539,   539,   438,   443,   540,   539,   135,   191,
     438,   541,   130,   166,   206,   218,   438,   542,   535,   295,
     438,   441,   505,   506,   507,   508,   509,    79,   105,   144,
     161,   217,   438,   544,   438,   548,   549,   502,   185,   191,
     438,   545,   546,   427,   438,   550,   146,   160,   438,   551,
     191,   438,   553,   554,   555,   556,   191,   227,   438,   557,
     535,   191,   439,   559,   560,   438,   469,   561,   562,   566,
     591,   566,   592,    15,    27,    37,    42,    47,    52,    60,
      90,    93,    95,   116,   191,   379,   439,   594,   595,   633,
     570,   593,   439,   597,   598,   599,   600,   359,   438,   601,
     602,    58,   115,   137,   187,   438,   563,   149,   174,   228,
     438,   564,   193,   194,   197,   198,   199,   438,   603,   416,
     438,   443,   604,   538,   416,   419,   438,   608,   379,   436,
     436,   436,   436,   436,   436,   436,   378,   378,   378,   378,
     378,   390,   361,   360,   378,   637,   239,   240,   241,   242,
     243,   366,   368,   405,   378,   378,   378,   378,   378,   378,
     378,   378,    14,   607,   378,   378,   607,   378,   607,   330,
     331,   347,   348,   437,   607,   378,   378,   378,   378,   437,
     607,   607,   378,   378,   378,   378,   437,   607,   378,   437,
     607,   378,   378,   437,   607,   378,   378,   437,   607,     1,
     320,   435,   568,   572,   576,   579,   586,   437,   607,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   607,
     378,   378,   378,   363,   437,   607,   378,   378,   378,   378,
     378,   332,   333,   335,   337,   351,   352,   469,   607,   378,
     378,   378,   378,   473,   607,   378,   378,   378,   476,   607,
     446,   447,   448,   471,   474,   440,   444,   466,   607,   430,
     440,   482,   490,   607,   607,   607,   607,   607,   378,   378,
     378,   607,   607,   440,   607,   607,   607,   607,   607,   493,
     607,   607,   607,   607,   607,   482,   607,   607,   607,   607,
     607,   607,   607,   486,   607,   607,   378,   181,   427,   440,
     497,   437,   607,   607,   378,   378,   378,   607,   378,   378,
     378,   378,   378,   378,   607,   378,   607,   378,   378,   378,
     378,   423,   425,   428,   618,   423,   607,   378,   378,   607,
     378,   378,   378,   378,   607,   626,   628,   631,   607,   607,
     607,   378,   378,   378,   607,     1,   193,   419,   443,   518,
     520,   522,   607,   378,   378,   402,   437,   607,   607,   378,
     378,   378,   607,   378,   378,   607,   607,   442,   607,   607,
     607,   378,   607,   607,   607,   607,   532,   607,   607,   378,
     607,   378,   607,   378,   607,   378,   607,   607,   607,   607,
     607,   607,   607,   378,   378,   378,   378,   607,   378,   378,
     607,   607,   607,   607,   443,   607,   607,   378,   378,   607,
     378,   378,   378,   378,   607,   607,   378,   293,   437,   607,
     378,   378,   378,   378,   378,   607,   440,   545,   547,   607,
     607,   378,   378,   607,   607,   378,   378,   607,   378,   427,
     440,   552,   437,   607,   378,   378,   607,   607,   378,   297,
     304,   305,   306,   307,   309,   310,   311,   312,   317,   318,
     379,   558,   607,   469,   427,   607,   607,   607,   378,   437,
     607,   378,   607,     1,   191,   434,   568,   596,   633,   437,
     607,   378,   607,   437,   378,   378,   378,   378,   607,   378,
     378,   378,   607,   378,   378,   378,   378,   378,   607,   607,
     607,   607,   427,   260,   261,   382,   421,   431,   419,   420,
     417,   432,   259,   262,   383,   418,   419,   378,   378,   644,
     361,   378,   378,   378,   378,   378,   378,   319,   402,   378,
     378,   378,   378,   378,   434,   572,   576,   579,   582,   422,
     330,   568,   378,   378,   378,   588,   419,   419,   225,   417,
     433,   440,   453,   454,   457,   134,   145,   147,   148,   159,
     164,   165,   430,   443,   454,   458,   459,   460,   461,   462,
     463,   465,   378,   466,   378,   378,   378,   378,   378,   378,
     447,   446,   375,   445,   378,   499,   162,   201,   441,   651,
     423,   618,   423,   378,   378,   402,   513,   515,   443,   378,
     514,   442,   532,   443,   402,   510,   511,   512,   378,   507,
     554,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   633,   378,   378,   378,   378,   598,   359,   378,
     378,   375,   356,   357,   378,   378,     1,   170,   225,   332,
     398,   399,   400,   401,   361,   378,   378,   378,   437,   378,
     437,   437,    11,   343,   344,   345,   346,   437,   442,   437,
     437,   363,   378,   378,   378,   378,   378,   378,   378,   145,
     443,   145,   159,   463,   464,   464,   464,   464,   437,   363,
     378,   437,   653,   437,   378,   437,   515,   442,   532,   443,
     378,   402,   363,   319,   422,   433,   422,   543,   422,   422,
     442,   442,   442,   427,   363,   363,   378,   378,   378,   378,
     378,   378,   378,   378,   361,   399,   364,   638,   378,   368,
     368,   422,   437,   567,   419,   419,   378,   378,   378,   378,
     378,   454,   453,   453,   471,   430,   458,   464,   443,   458,
     464,   378,   159,   378,   378,   437,   437,   437,   437,   454,
     478,   191,   420,   654,   433,   514,   378,   378,   378,   437,
     363,   437,   363,   363,   363,   363,   437,   363,   363,   363,
     378,   378,   421,   378,   378,   437,   161,   217,   363,   437,
     437,    58,    79,   105,   115,   455,   456,   437,   443,   437,
     378,   454,   454,   454,   454,   437,   420,   433,   363,   422,
     378,   422,   378,   378,   378,   378,   442,   378,   378,   378,
     401,   422,   378,   378,   419,   419,   378,   378,   378,   378,
     455,   437,   454,   454,   191,   441,   437,   378,   437,   363,
     437,   363,   437,   454,   437,   657,   298,   655,   422,   378,
     422,   378,   426,   188,   221,   222,   658,   363,   378,   657,
     437,   363,   363,   378,   378,   378,   378,   422,   656,   363,
     422,   378,   363,   437,   378,   437,   378,   422,   422,   437,
     422,   363,   378
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   377,   378,   378,   379,   379,   380,   381,   382,   382,
     383,   383,   384,   384,   385,   385,   385,   385,   385,   385,
     385,   386,   386,   386,   387,   387,   387,   387,   388,   388,
     388,   388,   389,   390,   390,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   392,   392,   392,   393,
     393,   394,   394,   394,   394,   394,   395,   395,   395,   395,
     395,   396,   396,   397,   398,   398,   398,   399,   400,   400,
     401,   401,   401,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   402,   402,   402,   402,   402,   402,   403,   404,   405,
     405,   405,   405,   405,   405,   406,   406,   406,   407,   408,
     408,   409,   409,   409,   409,   409,   409,   409,   410,   410,
     410,   410,   410,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   413,   413,   413,   413,   414,   414,   414,   415,
     415,   416,   417,   417,   417,   418,   419,   420,   421,   422,
     422,   423,   424,   425,   426,   427,   427,   428,   429,   429,
     429,   429,   429,   430,   431,   432,   432,   433,   433,   433,
     433,   434,   434,   435,   435,   436,   437,   438,   438,   439,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   441,   442,   442,   443,   443,   444,   444,   445,   445,
     446,   447,   448,   448,   448,   448,   449,   449,   450,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   455,   455,   456,   456,   457,   457,   457,   458,   458,
     458,   458,   459,   459,   460,   460,   460,   461,   461,   461,
     462,   462,   462,   463,   464,   464,   465,   465,   465,   465,
     465,   465,   465,   465,   466,   466,   466,   466,   467,   467,
     468,   468,   469,   469,   469,   469,   469,   469,   470,   470,
     471,   472,   472,   473,   473,   474,   474,   474,   474,   475,
     475,   476,   476,   476,   477,   477,   478,   478,   478,   479,
     479,   480,   480,   481,   481,   482,   482,   482,   483,   483,
     484,   484,   485,   485,   486,   487,   487,   488,   488,   489,
     489,   490,   490,   490,   491,   491,   492,   492,   493,   494,
     494,   495,   495,   496,   496,   497,   497,   497,   498,   498,
     499,   500,   500,   501,   501,   501,   502,   502,   503,   503,
     503,   503,   503,   504,   504,   504,   504,   504,   504,   504,
     505,   505,   506,   507,   507,   508,   508,   509,   509,   510,
     510,   511,   512,   512,   513,   513,   514,   514,   515,   515,
     516,   516,   516,   516,   517,   517,   518,   518,   519,   519,
     519,   520,   520,   521,   521,   521,   522,   522,   522,   523,
     523,   524,   525,   525,   525,   526,   526,   526,   527,   527,
     527,   527,   528,   529,   529,   529,   530,   530,   530,   531,
     531,   531,   531,   531,   532,   532,   533,   533,   534,   534,
     534,   534,   534,   535,   535,   535,   536,   536,   537,   537,
     537,   537,   537,   538,   538,   538,   539,   539,   540,   540,
     540,   540,   540,   541,   541,   541,   542,   542,   542,   542,
     542,   543,   543,   544,   544,   544,   544,   544,   544,   545,
     545,   546,   546,   547,   547,   548,   548,   549,   549,   550,
     550,   551,   551,   551,   552,   552,   553,   553,   554,   555,
     555,   556,   556,   556,   557,   557,   557,   558,   558,   558,
     558,   558,   558,   558,   558,   558,   558,   558,   558,   559,
     559,   560,   560,   560,   560,   561,   562,   562,   562,   562,
     563,   563,   563,   563,   563,   564,   564,   564,   564,   565,
     565,   566,   566,   567,   567,   567,   568,   568,   568,   568,
     568,   568,   568,   568,   568,   569,   569,   570,   570,   571,
     572,   572,   572,   572,   573,   573,   574,   574,   574,   575,
     576,   576,   576,   576,   577,   577,   578,   578,   578,   579,
     579,   580,   580,   581,   581,   581,   582,   582,   583,   583,
     584,   584,   584,   585,   586,   586,   586,   586,   586,   586,
     586,   587,   587,   588,   589,   589,   590,   590,   591,   592,
     593,   594,   594,   594,   595,   595,   595,   596,   596,   596,
     596,   596,   597,   597,   598,   599,   599,   600,   600,   601,
     601,   602,   602,   603,   603,   603,   603,   603,   603,   604,
     604,   604,   605,   605,   605,   606,   606,   606,   607,   607,
     608,   608,   608,   609,   609,   609,   610,   610,   611,   611,
     612,   612,   612,   613,   613,   613,   613,   614,   614,   614,
     615,   615,   615,   615,   616,   616,   617,   617,   617,   618,
     618,   618,   619,   619,   619,   620,   620,   620,   620,   621,
     621,   621,   622,   622,   622,   623,   623,   623,   623,   624,
     624,   625,   625,   626,   626,   626,   626,   627,   627,   628,
     628,   629,   629,   630,   630,   631,   631,   631,   632,   632,
     633,   633,   633,   633,   633,   633,   633,   633,   633,   633,
     633,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   634,   634,
     634,   634,   634,   634,   634,   634,   634,   634,   635,   636,
     636,   637,   637,   638,   639,   639,   640,   641,   641,   642,
     642,   643,   643,   643,   643,   643,   643,   644,   644,   645,
     646,   646,   646,   646,   646,   646,   646,   646,   647,   647,
     647,   648,   649,   650,   650,   651,   651,   652,   652,   653,
     653,   654,   655,   656,   656,   657,   657,   658,   658,   658
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     7,     4,     2,     2,
       2,     2,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     4,     4,     4,     4,     1,     1,
       1,     2,     5,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     0,     1,     2,     5,
       1,     1,     3,     9,     1,     1,     2,     2,     1,     4,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     5,     8,     8,     2,     1,
       1,     2,     2,     2,     2,     4,     4,     2,     2,     2,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     1,     3,     2,     1,
       3,     2,     0,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     4,     3,     3,     3,     3,     3,
       3,     1,     1,     3,     3,     2,     2,     1,     1,     2,
       2,     2,     9,    11,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     0,     3,
       2,     1,     1,     1,     2,     2,     0,     2,     0,     2,
       2,     1,     1,     1,     1,     1,     2,     3,     3,     2,
       2,     2,     2,     1,     2,     1,     3,     6,     2,     2,
       2,     2,     3,     3,     1,     3,     3,     3,     3,     1,
       2,     4,     4,     3,     0,     1,     4,     4,     4,     4,
       5,     5,     3,     1,     1,     4,     4,     2,     1,     3,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     2,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       1,     0,     2,     1,     1,     2,     2,     2,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     2,     0,     2,
       1,     1,     3,     1,     2,     1,     1,     1,     2,     2,
       1,     2,     1,     2,     2,     2,     2,     2,     2,     1,
       7,     1,     5,     1,     1,     1,     3,     1,     1,     2,
       3,     2,     1,     1,     3,     1,     2,     1,     1,     3,
       2,     1,     3,     1,     1,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     2,     1,     1,     2,     2,     0,
       1,     2,     3,     4,     1,     1,     1,     1,     1,     2,
       3,     4,     1,     2,     1,     1,     2,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     4,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     2,
       3,     4,     1,     2,     2,     1,     2,     2,     2,     2,
       1,     1,     3,     2,     2,     2,     2,     2,     1,     2,
       2,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     0,     2,     1,     1,
       3,     1,     2,     1,     2,     2,     1,    15,     5,     5,
       5,     5,     5,     7,     5,     5,     5,     4,     4,     0,
       2,     2,     1,     2,     1,     2,     1,     1,     2,     1,
       2,     2,     2,     2,     1,     2,     2,     2,     1,     1,
       3,     1,     1,     0,     3,     3,    10,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       2,     2,     2,     2,     1,     3,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     3,     1,     1,     1,     2,
       1,     1,     3,     1,     1,     1,     2,     2,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     0,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     2,     4,     1,     2,     1,     1,     2,     2,     1,
       2,     2,     0,     1,     2,     1,     3,     1,     1,     1,
       1,     2,     4,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     2,     1,     1,     0,     2,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       1,     0,     2,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     4,     1,     2,     1,
       3,     1,     3,     5,     5,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     0,     2,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     1,    11,    10,     1,     2,     1,     1,     0,
       2,     3,     5,     1,     3,     0,     2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, parser_impl, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, parser_impl, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserImpl* parser_impl, Scanner* scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (parser_impl);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserImpl* parser_impl, Scanner* scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, parser_impl, scanner);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserImpl* parser_impl, Scanner* scanner)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , parser_impl, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, parser_impl, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserImpl* parser_impl, Scanner* scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (parser_impl);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 380: /* at_font_face_rule  */
#line 756 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).font_face_rule)); }
#line 4908 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 381: /* at_media_rule  */
#line 783 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_rule)); }
#line 4914 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 382: /* orientation_media_feature_keyword_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 4920 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 383: /* scan_media_feature_keyword_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 4926 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 385: /* media_feature_without_value  */
#line 805 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4932 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 386: /* media_feature_with_value  */
#line 805 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4938 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 387: /* media_feature_allowing_operator_with_value  */
#line 805 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4944 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 388: /* media_feature  */
#line 805 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4950 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 389: /* media_feature_block  */
#line 805 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4956 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 390: /* media_feature_list  */
#line 798 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).media_features); }
#line 4962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 395: /* media_query  */
#line 791 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_query)); }
#line 4968 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 396: /* media_list  */
#line 787 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_list)); }
#line 4974 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 397: /* at_keyframes_rule  */
#line 764 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframes_rule)); }
#line 4980 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 398: /* keyframe_rule_list  */
#line 768 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframe_rule_list)); }
#line 4986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 399: /* keyframe_rule  */
#line 760 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframe_rule)); }
#line 4992 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 400: /* keyframe_selector  */
#line 775 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).keyframe_selector); }
#line 4998 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 403: /* universal_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5004 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 404: /* type_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5010 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 406: /* attribute_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5016 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 407: /* class_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5022 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 408: /* id_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5028 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 409: /* pseudo_class_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5034 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 410: /* pseudo_element_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5040 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 411: /* simple_selector_token  */
#line 717 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5046 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 412: /* compound_selector_token  */
#line 721 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).compound_selector); }
#line 5052 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 413: /* combinator  */
#line 725 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).combinator); }
#line 5058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 414: /* complex_selector  */
#line 729 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).complex_selector); }
#line 5064 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 415: /* selector_list  */
#line 733 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).selectors); }
#line 5070 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 416: /* auto  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5076 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 424: /* percentage  */
#line 501 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).percentage)); }
#line 5082 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 425: /* positive_percentage  */
#line 501 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).percentage)); }
#line 5088 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 427: /* length  */
#line 508 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5094 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 428: /* non_negative_absolute_or_relative_length  */
#line 508 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5100 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 429: /* absolute_or_relative_length  */
#line 508 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5106 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 430: /* positive_length  */
#line 508 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5112 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 431: /* ratio  */
#line 512 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).ratio)); }
#line 5118 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 432: /* resolution  */
#line 516 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).resolution)); }
#line 5124 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 438: /* common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5130 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 439: /* common_values_without_errors  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5136 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 440: /* color  */
#line 489 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).color)); }
#line 5142 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 441: /* url  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5148 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 442: /* length_percent_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5154 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 443: /* positive_length_percent_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5160 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 445: /* maybe_background_size_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5166 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 446: /* background_position_and_size_shorthand_property_value  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5172 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 447: /* background_repeat_shorthand_property_value  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5178 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 448: /* background_position_and_repeat_combination  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5184 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 449: /* final_background_layer_without_position_and_repeat  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5190 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 450: /* final_background_layer  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5196 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 451: /* background_property_value  */
#line 924 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5202 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 452: /* background_color_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5208 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 453: /* color_stop  */
#line 493 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).color_stop); }
#line 5214 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 454: /* comma_separated_color_stop_list  */
#line 497 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).color_stop_list); }
#line 5220 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 457: /* linear_gradient_params  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5226 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 460: /* circle_with_positive_length  */
#line 844 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5232 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 462: /* ellipse_with_2_positive_length_percents  */
#line 844 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5238 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 463: /* at_position  */
#line 844 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5244 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 464: /* maybe_at_position  */
#line 844 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5250 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 465: /* radial_gradient_params  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5256 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 466: /* background_image_property_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5262 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 467: /* comma_separated_background_image_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5268 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 468: /* background_image_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5274 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 469: /* position_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5280 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 470: /* position_list  */
#line 928 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).position_structure); }
#line 5286 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 471: /* validated_position_property  */
#line 844 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5292 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 472: /* background_position_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5298 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 473: /* background_repeat_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5304 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 474: /* background_repeat_property_value_without_common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5310 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 475: /* background_repeat_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5316 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 476: /* background_size_property_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5322 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 477: /* background_size_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5328 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 478: /* background_size_property_value_without_common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5334 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 479: /* background_size_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5340 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 480: /* border_color_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5346 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 481: /* border_color_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5352 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 482: /* line_style  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5358 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 483: /* line_style_with_common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5364 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 484: /* border_style_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5370 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 485: /* border_style_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5376 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 486: /* border_width_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5382 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 487: /* border_width_element_with_common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5388 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 488: /* border_width_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5394 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 489: /* border_width_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5400 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 491: /* border_or_outline_property_list  */
#line 933 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).border_or_outline_shorthand); }
#line 5406 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 492: /* border_or_outline_property_value  */
#line 933 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).border_or_outline_shorthand); }
#line 5412 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 493: /* border_radius_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5418 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 494: /* border_radius_element_with_common_values  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5424 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 495: /* border_radius_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5430 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 496: /* border_radius_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5436 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 498: /* box_shadow_list  */
#line 948 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).shadow_info); }
#line 5442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 499: /* validated_box_shadow_list  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5448 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 500: /* comma_separated_box_shadow_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5454 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 501: /* box_shadow_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5460 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 502: /* color_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5466 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 503: /* content_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5472 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 504: /* display_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5478 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 505: /* font_face_url_src  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5484 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 506: /* font_face_local_src  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5490 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 507: /* font_face_src_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 508: /* comma_separated_font_face_src_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5502 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 509: /* font_face_src_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5508 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 510: /* font_family_name_identifier_list  */
#line 523 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5514 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 511: /* font_family_string_name  */
#line 523 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5520 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 512: /* font_family_specific_name  */
#line 523 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5526 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 513: /* font_family_specific_name_no_single_identifier  */
#line 523 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5532 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 514: /* font_family_name  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5538 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 515: /* comma_separated_font_family_name_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5544 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 516: /* font_family_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5550 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 517: /* font_size_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5556 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 518: /* font_style_exclusive_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5562 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 519: /* font_style_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5568 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 520: /* font_weight_exclusive_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5574 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 521: /* font_weight_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5580 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 523: /* optional_font_value_list  */
#line 689 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5586 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 524: /* non_empty_optional_font_value_list  */
#line 689 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 525: /* font_property_value  */
#line 689 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5598 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 526: /* height_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5604 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 527: /* intersection_observer_root_margin_property_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5610 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 528: /* intersection_observer_root_margin_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5616 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 529: /* min_height_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5622 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 530: /* max_height_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5628 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 531: /* line_height_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5634 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 532: /* margin_width  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5640 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 533: /* margin_side_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5646 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 534: /* margin_property_value  */
#line 671 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).margin_or_padding_shorthand); }
#line 5652 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 535: /* offset_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5658 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 536: /* opacity_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5664 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 537: /* overflow_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5670 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 538: /* overflow_wrap_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5676 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 539: /* padding_side_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5682 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 540: /* padding_property_value  */
#line 671 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).margin_or_padding_shorthand); }
#line 5688 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 541: /* pointer_events_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5694 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 542: /* position_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5700 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 543: /* scale_function_parameters  */
#line 848 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transform_function); }
#line 5706 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 544: /* text_align_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5712 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 545: /* text_decoration_line  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5718 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 546: /* text_decoration_line_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5724 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 548: /* text_decoration_property_list  */
#line 952 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).text_decoration_shorthand); }
#line 5730 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 549: /* text_decoration_property_value  */
#line 952 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).text_decoration_shorthand); }
#line 5736 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 550: /* text_indent_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5742 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 551: /* text_overflow_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5748 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 553: /* text_shadow_list  */
#line 948 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).shadow_info); }
#line 5754 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 554: /* validated_text_shadow_list  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5760 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 555: /* comma_separated_text_shadow_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5766 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 556: /* text_shadow_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5772 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 557: /* text_transform_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5778 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 559: /* transform_list  */
#line 852 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transform_functions); }
#line 5784 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 560: /* transform_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5790 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 561: /* validated_two_position_list_elements  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5796 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 562: /* transform_origin_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5802 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 563: /* vertical_align_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5808 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 564: /* visibility_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5814 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 565: /* comma_separated_time_list  */
#line 884 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).time_list); }
#line 5820 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 566: /* time_list_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5826 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 568: /* single_timing_function  */
#line 898 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).timing_function)); }
#line 5832 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 569: /* comma_separated_single_timing_function_list  */
#line 906 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).timing_function_list); }
#line 5838 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 570: /* timing_function_list_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5844 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 571: /* animation_delay_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5850 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 572: /* animation_direction_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5856 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 573: /* comma_separated_animation_direction_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5862 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 574: /* animation_direction_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5868 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 575: /* animation_duration_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5874 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 576: /* animation_fill_mode_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5880 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 577: /* comma_separated_animation_fill_mode_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5886 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 578: /* animation_fill_mode_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5892 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 579: /* animation_iteration_count_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5898 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 580: /* comma_separated_animation_iteration_count_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5904 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 581: /* animation_iteration_count_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5910 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 582: /* animation_name_list_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 583: /* comma_separated_animation_name_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5922 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 584: /* animation_name_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5928 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 585: /* animation_timing_function_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5934 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 587: /* single_animation  */
#line 675 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_animation); }
#line 5940 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 588: /* single_non_empty_animation  */
#line 675 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_animation); }
#line 5946 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 589: /* comma_separated_animation_list  */
#line 679 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).animation_builder); }
#line 5952 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 590: /* animation_property_value  */
#line 683 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).animation); }
#line 5958 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 591: /* transition_delay_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5964 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 592: /* transition_duration_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5970 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 593: /* transition_timing_function_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5976 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 594: /* comma_separated_animatable_property_name_list  */
#line 888 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_name_list); }
#line 5982 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 595: /* transition_property_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5988 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 597: /* single_transition  */
#line 910 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_transition); }
#line 5994 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 598: /* single_non_empty_transition  */
#line 910 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_transition); }
#line 6000 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 599: /* comma_separated_transition_list  */
#line 914 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transition_builder); }
#line 6006 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 600: /* transition_property_value  */
#line 693 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transition); }
#line 6012 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 601: /* unicode_range_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 602: /* comma_separated_unicode_range_list  */
#line 836 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 6024 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 603: /* white_space_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6030 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 604: /* width_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6036 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 605: /* min_width_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6042 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 606: /* max_width_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6048 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 608: /* z_index_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6054 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 609: /* flex_start_end_center_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6060 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 610: /* space_between_around_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6066 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 611: /* baseline_stretch_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6072 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 612: /* justify_content_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6078 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 613: /* align_content_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6084 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 614: /* align_items_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6090 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 615: /* align_self_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6096 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 616: /* flex_basis_keywords  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6102 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 617: /* flex_basis_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6108 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 618: /* flex_basis_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6114 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 619: /* flex_single_flex_basis_element  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6120 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 620: /* flex_single_property_value  */
#line 940 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6126 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 621: /* flex_two_property_values  */
#line 940 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6132 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 622: /* flex_three_property_values  */
#line 940 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6138 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 623: /* flex_property_value  */
#line 940 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6144 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 624: /* flex_factor_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6150 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 625: /* order_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6156 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 626: /* flex_direction  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6162 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 627: /* flex_direction_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6168 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 629: /* flex_flow_property_list  */
#line 944 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_flow_shorthand); }
#line 6174 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 630: /* flex_flow_property_value  */
#line 944 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_flow_shorthand); }
#line 6180 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 631: /* flex_wrap  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6186 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 632: /* flex_wrap_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6192 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 634: /* maybe_declaration  */
#line 534 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_declaration); }
#line 6198 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 636: /* style_declaration_list  */
#line 748 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_declaration_data)); }
#line 6204 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 637: /* font_face_declaration_list  */
#line 779 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).font_face_declaration_data)); }
#line 6210 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 638: /* style_declaration_block  */
#line 752 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_declaration)); }
#line 6216 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 639: /* rule_list_block  */
#line 703 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).rule_list)); }
#line 6222 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 640: /* style_rule  */
#line 812 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_rule)); }
#line 6228 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 641: /* qualified_rule  */
#line 812 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_rule)); }
#line 6234 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 643: /* rule  */
#line 816 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).css_rule)); }
#line 6240 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 644: /* rule_list  */
#line 703 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).rule_list)); }
#line 6246 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 645: /* style_sheet  */
#line 699 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_sheet)); }
#line 6252 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 647: /* filter_property_value  */
#line 659 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6258 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 648: /* filter_function_list  */
#line 861 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_filter_functions); }
#line 6264 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 649: /* filter_function  */
#line 857 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).filter_function); }
#line 6270 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 650: /* cobalt_mtm_filter_function  */
#line 857 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).filter_function); }
#line 6276 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 651: /* cobalt_map_to_mesh_spec  */
#line 866 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_map_to_mesh_spec); }
#line 6282 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 653: /* cobalt_mtm_resolution_matched_mesh_list  */
#line 871 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_resolution_matched_meshes); }
#line 6288 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 654: /* cobalt_mtm_resolution_matched_mesh  */
#line 875 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_resolution_matched_mesh); }
#line 6294 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 655: /* cobalt_mtm_transform_function  */
#line 667 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).matrix4x4); }
#line 6300 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 656: /* number_matrix  */
#line 663 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).number_matrix); }
#line 6306 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 657: /* maybe_cobalt_mtm_stereo_mode  */
#line 880 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).stereo_mode)); }
#line 6312 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 658: /* cobalt_mtm_stereo_mode  */
#line 880 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).stereo_mode)); }
#line 6318 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ParserImpl* parser_impl, Scanner* scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 989 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSFontFaceRule>
        font_face_rule(
            new cssom::CSSFontFaceRule(MakeScopedRefPtrAndRelease((yyvsp[-2].font_face_declaration_data))));
    if (font_face_rule->IsValid()) {
      (yyval.font_face_rule) = AddRef(font_face_rule.get());
    } else {
      parser_impl->LogWarning((yylsp[-6]), "invalid font-face");
      (yyval.font_face_rule) = NULL;
    }
  }
#line 6622 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 7:
#line 1009 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_rule) = AddRef(new cssom::CSSMediaRule(MakeScopedRefPtrAndRelease((yyvsp[-1].media_list)),
                                        MakeScopedRefPtrAndRelease((yyvsp[0].rule_list))));
  }
#line 6631 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 8:
#line 1027 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetLandscape().get());
  }
#line 6639 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 9:
#line 1030 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetPortrait().get());
  }
#line 6647 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 10:
#line 1038 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetInterlace().get());
  }
#line 6655 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 11:
#line 1041 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetProgressive().get());
  }
#line 6663 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 12:
#line 1048 "grammar.y" /* yacc.c:1646  */
    { (yyval.media_feature_operator) = cssom::kMinimum; }
#line 6669 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 13:
#line 1049 "grammar.y" /* yacc.c:1646  */
    { (yyval.media_feature_operator) = cssom::kMaximum; }
#line 6675 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 14:
#line 1057 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6683 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 15:
#line 1060 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6691 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 16:
#line 1063 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6699 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 17:
#line 1066 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6707 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 18:
#line 1069 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6715 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 19:
#line 1072 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6723 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 20:
#line 1075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6731 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 21:
#line 1083 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), (yyvsp[0].property_value)));
  }
#line 6739 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 22:
#line 1087 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), (yyvsp[0].property_value)));
  }
#line 6747 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 23:
#line 1090 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), new cssom::IntegerValue((yyvsp[0].integer))));
  }
#line 6755 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 24:
#line 1097 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].length))));
  }
#line 6763 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 25:
#line 1101 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), new cssom::IntegerValue((yyvsp[0].integer))));
  }
#line 6771 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 26:
#line 1104 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].ratio))));
  }
#line 6779 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 27:
#line 1107 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].resolution))));
  }
#line 6787 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 31:
#line 1119 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = (yyvsp[0].media_feature);
    (yyval.media_feature)->set_operator((yyvsp[-1].media_feature_operator));
  }
#line 6796 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 32:
#line 1127 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = (yyvsp[-2].media_feature);
  }
#line 6804 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 33:
#line 1135 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_features) = new cssom::MediaFeatures();
    (yyval.media_features)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].media_feature)));
  }
#line 6813 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 34:
#line 1140 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_features) = (yyvsp[-3].media_features);
    (yyval.media_features)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].media_feature)));
  }
#line 6822 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 49:
#line 1172 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = false;
  }
#line 6830 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 50:
#line 1175 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = true;
  }
#line 6838 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 51:
#line 1185 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = (yyvsp[0].evaluated_media_type);
  }
#line 6846 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 52:
#line 1189 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = !(yyvsp[0].evaluated_media_type);
  }
#line 6854 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 53:
#line 1193 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = (yyvsp[0].evaluated_media_type);
  }
#line 6862 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 54:
#line 1197 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = false;
  }
#line 6870 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 55:
#line 1201 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = true;
  }
#line 6878 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 56:
#line 1212 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true));
  }
#line 6886 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 57:
#line 1216 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::MediaFeatures> media_features((yyvsp[0].media_features));
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true, std::move(media_features)));
  }
#line 6895 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 58:
#line 1221 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery((yyvsp[-1].evaluated_media_type)));
  }
#line 6903 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 59:
#line 1226 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::MediaFeatures> media_features((yyvsp[0].media_features));
    (yyval.media_query) = AddRef(new cssom::MediaQuery((yyvsp[-4].evaluated_media_type), std::move(media_features)));
  }
#line 6912 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 60:
#line 1234 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true));
  }
#line 6920 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 61:
#line 1243 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_list) = AddRef(new cssom::MediaList(parser_impl->css_parser()));
    (yyval.media_list)->Append(MakeScopedRefPtrAndRelease((yyvsp[0].media_query)));
  }
#line 6929 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 62:
#line 1247 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_list) = (yyvsp[-2].media_list);
    (yyval.media_list)->Append(MakeScopedRefPtrAndRelease((yyvsp[0].media_query)));
  }
#line 6938 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 63:
#line 1261 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframes_rule) = (yyvsp[-2].keyframe_rule_list) ? AddRef(
        new cssom::CSSKeyframesRule((yyvsp[-6].string).ToString(),
                                    MakeScopedRefPtrAndRelease((yyvsp[-2].keyframe_rule_list)))) : NULL;
  }
#line 6948 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 64:
#line 1269 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_rule_list) = AddRef(new cssom::CSSRuleList());
    (yyval.keyframe_rule_list)->AppendCSSRule(MakeScopedRefPtrAndRelease((yyvsp[0].keyframe_rule)));
  }
#line 6957 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 65:
#line 1273 "grammar.y" /* yacc.c:1646  */
    {
    // The error message is logged by |keyframe_rule|, so it is not necessary to
    // log it again.
    (yyval.keyframe_rule_list) = NULL;
  }
#line 6967 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 66:
#line 1278 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_rule_list) = (yyvsp[-1].keyframe_rule_list);
    scoped_refptr<cssom::CSSKeyframeRule> keyframe_rule(
        MakeScopedRefPtrAndRelease((yyvsp[0].keyframe_rule)));
    if ((yyval.keyframe_rule_list)) {
      (yyval.keyframe_rule_list)->AppendCSSRule(keyframe_rule);
    }
  }
#line 6980 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 67:
#line 1289 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<std::vector<float> > offsets((yyvsp[-1].keyframe_selector));

    scoped_refptr<cssom::CSSRuleStyleDeclaration> style(
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration)));
    const cssom::CSSDeclaredStyleData::PropertyValues& property_values = style->data()->declared_property_values();
    for (cssom::CSSDeclaredStyleData::PropertyValues::const_iterator
             property_iterator = property_values.begin();
             property_iterator != property_values.end();
             ++property_iterator) {
      if (property_iterator->second == cssom::KeywordValue::GetInherit() ||
          property_iterator->second == cssom::KeywordValue::GetInitial()) {
        parser_impl->LogError(
            (yylsp[0]), "keyframe properties with initial or inherit are not supported");
        YYERROR;
      }
    }

    (yyval.keyframe_rule) = AddRef(new cssom::CSSKeyframeRule(*offsets, style));
  }
#line 7005 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 68:
#line 1312 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_selector) = new std::vector<float>(1, (yyvsp[0].keyframe_offset));
  }
#line 7013 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 69:
#line 1315 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_selector) = (yyvsp[-3].keyframe_selector);
    (yyval.keyframe_selector)->push_back((yyvsp[0].keyframe_offset));
  }
#line 7022 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 70:
#line 1322 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = 0.0f;
  }
#line 7030 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 71:
#line 1325 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = 1.0f;
  }
#line 7038 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 72:
#line 1328 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = (yyvsp[-1].real) / 100.0f;
  }
#line 7046 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 74:
#line 1343 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAllProperty));
  }
#line 7055 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 75:
#line 1347 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignContentProperty));
  }
#line 7064 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 76:
#line 1351 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignItemsProperty));
  }
#line 7073 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 77:
#line 1355 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignSelfProperty));
  }
#line 7082 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 78:
#line 1359 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDelayProperty));
  }
#line 7091 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 79:
#line 1363 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDirectionProperty));
  }
#line 7100 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 80:
#line 1367 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDurationProperty));
  }
#line 7109 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 81:
#line 1371 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationFillModeProperty));
  }
#line 7118 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 82:
#line 1375 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationIterationCountProperty));
  }
#line 7127 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 83:
#line 1379 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationNameProperty));
  }
#line 7136 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 84:
#line 1383 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationTimingFunctionProperty));
  }
#line 7145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 85:
#line 1387 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationProperty));
  }
#line 7154 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 86:
#line 1391 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundColorProperty));
  }
#line 7163 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 87:
#line 1395 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundImageProperty));
  }
#line 7172 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 88:
#line 1399 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundPositionProperty));
  }
#line 7181 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 89:
#line 1403 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundRepeatProperty));
  }
#line 7190 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 90:
#line 1407 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundSizeProperty));
  }
#line 7199 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 91:
#line 1411 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundProperty));
  }
#line 7208 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 92:
#line 1415 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderProperty));
  }
#line 7217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 93:
#line 1419 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomLeftRadiusProperty));
  }
#line 7226 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 94:
#line 1423 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomRightRadiusProperty));
  }
#line 7235 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 95:
#line 1427 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomProperty));
  }
#line 7244 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 96:
#line 1431 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomColorProperty));
  }
#line 7253 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 97:
#line 1435 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomStyleProperty));
  }
#line 7262 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 98:
#line 1439 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomWidthProperty));
  }
#line 7271 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 99:
#line 1443 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftProperty));
  }
#line 7280 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 100:
#line 1447 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderColorProperty));
  }
#line 7289 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 101:
#line 1451 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftColorProperty));
  }
#line 7298 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 102:
#line 1455 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftStyleProperty));
  }
#line 7307 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 103:
#line 1459 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftWidthProperty));
  }
#line 7316 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 104:
#line 1463 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRadiusProperty));
  }
#line 7325 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 105:
#line 1467 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightProperty));
  }
#line 7334 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 106:
#line 1471 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightColorProperty));
  }
#line 7343 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 107:
#line 1475 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightStyleProperty));
  }
#line 7352 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 108:
#line 1479 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightWidthProperty));
  }
#line 7361 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 109:
#line 1483 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderStyleProperty));
  }
#line 7370 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 110:
#line 1487 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopProperty));
  }
#line 7379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 111:
#line 1491 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopColorProperty));
  }
#line 7388 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 112:
#line 1495 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopLeftRadiusProperty));
  }
#line 7397 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 113:
#line 1499 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
          cssom::GetPropertyName(cssom::kBorderTopRightRadiusProperty));
  }
#line 7406 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 114:
#line 1503 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopStyleProperty));
  }
#line 7415 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 115:
#line 1507 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopWidthProperty));
  }
#line 7424 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 116:
#line 1511 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderWidthProperty));
  }
#line 7433 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 117:
#line 1515 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBottomProperty));
  }
#line 7442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 118:
#line 1519 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBoxShadowProperty));
  }
#line 7451 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 119:
#line 1523 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kColorProperty));
  }
#line 7460 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 120:
#line 1527 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kContentProperty));
  }
#line 7469 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 121:
#line 1531 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kDisplayProperty));
  }
#line 7478 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 122:
#line 1535 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFilterProperty));
  }
#line 7487 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 123:
#line 1539 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexProperty));
  }
#line 7496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 124:
#line 1543 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexBasisProperty));
  }
#line 7505 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 125:
#line 1547 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexDirectionProperty));
  }
#line 7514 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 126:
#line 1551 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexFlowProperty));
  }
#line 7523 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 127:
#line 1555 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexGrowProperty));
  }
#line 7532 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 128:
#line 1559 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexShrinkProperty));
  }
#line 7541 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 129:
#line 1563 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexWrapProperty));
  }
#line 7550 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 130:
#line 1567 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontProperty));
  }
#line 7559 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 131:
#line 1571 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontFamilyProperty));
  }
#line 7568 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 132:
#line 1575 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontSizeProperty));
  }
#line 7577 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 133:
#line 1579 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontStyleProperty));
  }
#line 7586 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 134:
#line 1583 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontWeightProperty));
  }
#line 7595 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 135:
#line 1587 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kHeightProperty));
  }
#line 7604 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 136:
#line 1591 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kIntersectionObserverRootMarginProperty));
  }
#line 7613 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 137:
#line 1595 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kJustifyContentProperty));
  }
#line 7622 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 138:
#line 1599 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kLeftProperty));
  }
#line 7631 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 139:
#line 1603 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kLineHeightProperty));
  }
#line 7640 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 140:
#line 1607 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginBottomProperty));
  }
#line 7649 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 141:
#line 1611 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginLeftProperty));
  }
#line 7658 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 142:
#line 1615 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginRightProperty));
  }
#line 7667 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 143:
#line 1619 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginProperty));
  }
#line 7676 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 144:
#line 1623 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginTopProperty));
  }
#line 7685 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 145:
#line 1627 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMaxHeightProperty));
  }
#line 7694 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 146:
#line 1631 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMaxWidthProperty));
  }
#line 7703 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 147:
#line 1635 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMinHeightProperty));
  }
#line 7712 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 148:
#line 1639 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMinWidthProperty));
  }
#line 7721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 149:
#line 1643 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOpacityProperty));
  }
#line 7730 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 150:
#line 1647 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOrderProperty));
  }
#line 7739 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 151:
#line 1651 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineProperty));
  }
#line 7748 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 152:
#line 1655 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineColorProperty));
  }
#line 7757 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 153:
#line 1659 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineStyleProperty));
  }
#line 7766 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 154:
#line 1663 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineWidthProperty));
  }
#line 7775 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 155:
#line 1667 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOverflowProperty));
  }
#line 7784 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 156:
#line 1671 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOverflowWrapProperty));
  }
#line 7793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 157:
#line 1675 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingBottomProperty));
  }
#line 7802 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 158:
#line 1679 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingLeftProperty));
  }
#line 7811 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 159:
#line 1683 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingRightProperty));
  }
#line 7820 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 160:
#line 1687 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingProperty));
  }
#line 7829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 161:
#line 1691 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingTopProperty));
  }
#line 7838 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 162:
#line 1695 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPointerEventsProperty));
  }
#line 7847 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 163:
#line 1699 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPositionProperty));
  }
#line 7856 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 164:
#line 1703 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kRightProperty));
  }
#line 7865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 165:
#line 1707 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kSrcProperty));
  }
#line 7874 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 166:
#line 1711 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextAlignProperty));
  }
#line 7883 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 167:
#line 1715 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationProperty));
  }
#line 7892 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 168:
#line 1719 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationColorProperty));
  }
#line 7901 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 169:
#line 1723 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationLineProperty));
  }
#line 7910 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 170:
#line 1727 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextIndentProperty));
  }
#line 7919 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 171:
#line 1731 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextOverflowProperty));
  }
#line 7928 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 172:
#line 1735 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextShadowProperty));
  }
#line 7937 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 173:
#line 1739 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextTransformProperty));
  }
#line 7946 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 174:
#line 1743 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTopProperty));
  }
#line 7955 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 175:
#line 1747 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransformProperty));
  }
#line 7964 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 176:
#line 1751 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransformOriginProperty));
  }
#line 7973 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 177:
#line 1755 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionDelayProperty));
  }
#line 7982 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 178:
#line 1759 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionDurationProperty));
  }
#line 7991 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 179:
#line 1763 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionPropertyProperty));
  }
#line 8000 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 180:
#line 1767 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionTimingFunctionProperty));
  }
#line 8009 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 181:
#line 1771 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionProperty));
  }
#line 8018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 182:
#line 1775 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kUnicodeRangeProperty));
  }
#line 8027 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 183:
#line 1779 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kVerticalAlignProperty));
  }
#line 8036 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 184:
#line 1783 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kVisibilityProperty));
  }
#line 8045 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 185:
#line 1787 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWhiteSpaceProperty));
  }
#line 8054 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 186:
#line 1791 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWidthProperty));
  }
#line 8063 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 187:
#line 1795 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWordWrapProperty));
  }
#line 8072 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 188:
#line 1799 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kZIndexProperty));
  }
#line 8081 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 189:
#line 1804 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAbsoluteKeywordName);
  }
#line 8089 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 190:
#line 1807 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAlternateKeywordName);
  }
#line 8097 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 191:
#line 1810 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAlternateReverseKeywordName);
  }
#line 8105 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 192:
#line 1813 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAquaKeywordName);
  }
#line 8113 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 193:
#line 1816 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAtKeywordName);
  }
#line 8121 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 194:
#line 1819 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAutoKeywordName);
  }
#line 8129 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 195:
#line 1822 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBackwardsKeywordName);
  }
#line 8137 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 196:
#line 1825 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBaselineKeywordName);
  }
#line 8145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 197:
#line 1828 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlackKeywordName);
  }
#line 8153 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 198:
#line 1831 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlockKeywordName);
  }
#line 8161 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 199:
#line 1834 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlueKeywordName);
  }
#line 8169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 200:
#line 1837 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBoldKeywordName);
  }
#line 8177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 201:
#line 1840 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBothKeywordName);
  }
#line 8185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 202:
#line 1844 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBreakWordKeywordName);
  }
#line 8193 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 203:
#line 1847 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCenterKeywordName);
  }
#line 8201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 204:
#line 1850 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCircleKeywordName);
  }
#line 8209 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 205:
#line 1853 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClipKeywordName);
  }
#line 8217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 206:
#line 1856 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClosestCornerKeywordName);
  }
#line 8225 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 207:
#line 1859 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClosestSideKeywordName);
  }
#line 8233 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 208:
#line 1862 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCollapseKeywordName);
  }
#line 8241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 209:
#line 1865 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kColumnKeywordName);
  }
#line 8249 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 210:
#line 1868 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kColumnReverseKeywordName);
  }
#line 8257 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 211:
#line 1871 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kContainKeywordName);
  }
#line 8265 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 212:
#line 1875 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCoverKeywordName);
  }
#line 8273 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 213:
#line 1878 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCursiveKeywordName);
  }
#line 8281 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 214:
#line 1881 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseInOutKeywordName);
  }
#line 8289 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 215:
#line 1884 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseInKeywordName);
  }
#line 8297 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 216:
#line 1887 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseOutKeywordName);
  }
#line 8305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 217:
#line 1890 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseKeywordName);
  }
#line 8313 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 218:
#line 1893 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEllipseKeywordName);
  }
#line 8321 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 219:
#line 1896 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEllipsisKeywordName);
  }
#line 8329 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 220:
#line 1899 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEndKeywordName);
  }
#line 8337 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 221:
#line 1902 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEquirectangularKeywordName);
  }
#line 8345 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 222:
#line 1905 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFantasyKeywordName);
  }
#line 8353 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 223:
#line 1908 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFarthestCornerKeywordName);
  }
#line 8361 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 224:
#line 1911 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFarthestSideKeywordName);
  }
#line 8369 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 225:
#line 1914 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFixedKeywordName);
  }
#line 8377 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 226:
#line 1918 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFlexEndKeywordName);
  }
#line 8385 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 227:
#line 1921 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFlexStartKeywordName);
  }
#line 8393 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 228:
#line 1924 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kForwardsKeywordName);
  }
#line 8401 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 229:
#line 1927 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFromKeywordName);
  }
#line 8409 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 230:
#line 1930 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFuchsiaKeywordName);
  }
#line 8417 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 231:
#line 1933 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kGrayKeywordName);
  }
#line 8425 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 232:
#line 1936 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kGreenKeywordName);
  }
#line 8433 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 233:
#line 1939 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kHiddenKeywordName);
  }
#line 8441 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 234:
#line 1942 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInfiniteKeywordName);
  }
#line 8449 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 235:
#line 1945 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInheritKeywordName);
  }
#line 8457 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 236:
#line 1948 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInitialKeywordName);
  }
#line 8465 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 237:
#line 1951 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineBlockKeywordName);
  }
#line 8473 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 238:
#line 1954 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineKeywordName);
  }
#line 8481 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 239:
#line 1957 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineFlexKeywordName);
  }
#line 8489 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 240:
#line 1960 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInsetKeywordName);
  }
#line 8497 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 241:
#line 1963 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kItalicKeywordName);
  }
#line 8505 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 242:
#line 1966 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLimeKeywordName);
  }
#line 8513 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 243:
#line 1969 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLinearKeywordName);
  }
#line 8521 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 244:
#line 1972 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLineThroughKeywordName);
  }
#line 8529 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 245:
#line 1975 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMaroonKeywordName);
  }
#line 8537 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 246:
#line 1978 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMiddleKeywordName);
  }
#line 8545 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 247:
#line 1981 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMonoscopicKeywordName);
  }
#line 8553 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 248:
#line 1984 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMonospaceKeywordName);
  }
#line 8561 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 249:
#line 1987 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNavyKeywordName);
  }
#line 8569 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 250:
#line 1990 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNoneKeywordName);
  }
#line 8577 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 251:
#line 1993 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNoRepeatKeywordName);
  }
#line 8585 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 252:
#line 1996 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNormalKeywordName);
  }
#line 8593 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 253:
#line 1999 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNowrapKeywordName);
  }
#line 8601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 254:
#line 2002 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kObliqueKeywordName);
  }
#line 8609 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 255:
#line 2005 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kOliveKeywordName);
  }
#line 8617 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 256:
#line 2008 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreKeywordName);
  }
#line 8625 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 257:
#line 2011 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreLineKeywordName);
  }
#line 8633 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 258:
#line 2014 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreWrapKeywordName);
  }
#line 8641 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 259:
#line 2017 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPurpleKeywordName);
  }
#line 8649 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 260:
#line 2020 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRedKeywordName);
  }
#line 8657 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 261:
#line 2023 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatKeywordName);
  }
#line 8665 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 262:
#line 2026 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatXKeywordName);
  }
#line 8673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 263:
#line 2029 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatYKeywordName);
  }
#line 8681 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 264:
#line 2032 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRelativeKeywordName);
  }
#line 8689 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 265:
#line 2035 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kReverseKeywordName);
  }
#line 8697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 266:
#line 2039 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRowKeywordName);
  }
#line 8705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 267:
#line 2042 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRowReverseKeywordName);
  }
#line 8713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 268:
#line 2045 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSansSerifKeywordName);
  }
#line 8721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 269:
#line 2048 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kScrollKeywordName);
  }
#line 8729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 270:
#line 2051 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSerifKeywordName);
  }
#line 8737 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 271:
#line 2054 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSilverKeywordName);
  }
#line 8745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 272:
#line 2057 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSolidKeywordName);
  }
#line 8753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 273:
#line 2060 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSpaceAroundKeywordName);
  }
#line 8761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 274:
#line 2063 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSpaceBetweenKeywordName);
  }
#line 8769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 275:
#line 2066 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStartKeywordName);
  }
#line 8777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 276:
#line 2069 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStaticKeywordName);
  }
#line 8785 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 277:
#line 2072 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStepEndKeywordName);
  }
#line 8793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 278:
#line 2075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStepStartKeywordName);
  }
#line 8801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 279:
#line 2078 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
             cssom::kStereoscopicLeftRightKeywordName);
  }
#line 8810 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 280:
#line 2082 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
             cssom::kStereoscopicTopBottomKeywordName);
  }
#line 8819 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 281:
#line 2086 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStretchKeywordName);
  }
#line 8827 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 282:
#line 2089 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kTealKeywordName);
  }
#line 8835 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 283:
#line 2092 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kToKeywordName);
  }
#line 8843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 284:
#line 2096 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kTransparentKeywordName);
  }
#line 8851 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 285:
#line 2099 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kUppercaseKeywordName);
  }
#line 8859 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 286:
#line 2102 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kVisibleKeywordName);
  }
#line 8867 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 287:
#line 2105 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWhiteKeywordName);
  }
#line 8875 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 288:
#line 2108 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWrapKeywordName);
  }
#line 8883 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 289:
#line 2111 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWrapReverseKeywordName);
  }
#line 8891 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 290:
#line 2114 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kYellowKeywordName);
  }
#line 8899 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 291:
#line 2118 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kActivePseudoClassName);
  }
#line 8907 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 292:
#line 2121 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEmptyPseudoClassName);
  }
#line 8915 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 293:
#line 2124 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFocusPseudoClassName);
  }
#line 8923 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 294:
#line 2127 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kHoverPseudoClassName);
  }
#line 8931 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 295:
#line 2131 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAfterPseudoElementName);
  }
#line 8939 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 296:
#line 2134 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBeforePseudoElementName);
  }
#line 8947 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 297:
#line 2142 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::UniversalSelector();
  }
#line 8955 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 298:
#line 2151 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::TypeSelector((yyvsp[0].string).ToString());
  }
#line 8963 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 299:
#line 2157 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kEquals;
  }
#line 8971 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 300:
#line 2160 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kIncludes;
  }
#line 8979 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 301:
#line 2163 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kDashMatch;
  }
#line 8987 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 302:
#line 2166 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kBeginsWith;
  }
#line 8995 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 303:
#line 2169 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kEndsWith;
  }
#line 9003 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 304:
#line 2172 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kContains;
  }
#line 9011 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 305:
#line 2180 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-2].string).ToString());
  }
#line 9019 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 306:
#line 2184 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-5].string).ToString(), (yyvsp[-3].attribute_match), (yyvsp[-2].string).ToString());
  }
#line 9027 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 307:
#line 2188 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-5].string).ToString(), (yyvsp[-3].attribute_match), (yyvsp[-2].string).ToString());
  }
#line 9035 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 308:
#line 2197 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::ClassSelector((yyvsp[0].string).ToString());
  }
#line 9043 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 309:
#line 2206 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::IdSelector((yyvsp[0].string).ToString());
  }
#line 9051 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 310:
#line 2209 "grammar.y" /* yacc.c:1646  */
    {
    if (::base::IsAsciiDigit(*(yyvsp[0].string).begin)) {
      YYERROR;
    }
    (yyval.simple_selector) = new cssom::IdSelector((yyvsp[0].string).ToString());
  }
#line 9062 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 311:
#line 2228 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::ActivePseudoClass();
  }
#line 9070 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 312:
#line 2238 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::EmptyPseudoClass();
  }
#line 9078 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 313:
#line 2244 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::FocusPseudoClass();
  }
#line 9086 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 314:
#line 2254 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::HoverPseudoClass();
  }
#line 9094 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 315:
#line 2261 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::CompoundSelector> compound_selector((yyvsp[-1].compound_selector));
    if (compound_selector) {
      std::unique_ptr<cssom::NotPseudoClass> not_pseudo_class(new
          cssom::NotPseudoClass());
      not_pseudo_class->set_selector(std::move(compound_selector));
      (yyval.simple_selector) = not_pseudo_class.release();
    } else {
      parser_impl->LogWarning((yylsp[-3]), "unsupported selector within :not()");
      (yyval.simple_selector) = NULL;
    }
  }
#line 9111 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 316:
#line 2273 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-3]), "unsupported selector within :not()");
    (yyval.simple_selector) = NULL;
  }
#line 9120 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 317:
#line 2277 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-1]), "unsupported pseudo-class");
    (yyval.simple_selector) = NULL;
  }
#line 9129 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 318:
#line 2293 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AfterPseudoElement();
  }
#line 9137 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 319:
#line 2296 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::BeforePseudoElement();
  }
#line 9145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 320:
#line 2299 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AfterPseudoElement();
  }
#line 9153 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 321:
#line 2302 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::BeforePseudoElement();
  }
#line 9161 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 322:
#line 2305 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-2]), "unsupported pseudo-element");
    (yyval.simple_selector) = NULL;
  }
#line 9170 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 330:
#line 2327 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::SimpleSelector> simple_selector((yyvsp[0].simple_selector));

    if (simple_selector) {
      (yyval.compound_selector) = new cssom::CompoundSelector();
      (yyval.compound_selector)->AppendSelector(std::move(simple_selector));
    } else {
      (yyval.compound_selector) = NULL;
    }
  }
#line 9185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 331:
#line 2337 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::CompoundSelector> compound_selector((yyvsp[-1].compound_selector));
    std::unique_ptr<cssom::SimpleSelector> simple_selector((yyvsp[0].simple_selector));

    if (compound_selector && simple_selector) {
      (yyval.compound_selector) = compound_selector.release();
      (yyval.compound_selector)->AppendSelector(std::move(simple_selector));
    } else {
      (yyval.compound_selector) = NULL;
    }
  }
#line 9201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 332:
#line 2354 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::DescendantCombinator();
  }
#line 9209 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 333:
#line 2357 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::ChildCombinator();
  }
#line 9217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 334:
#line 2360 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::NextSiblingCombinator();
  }
#line 9225 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 335:
#line 2363 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::FollowingSiblingCombinator();
  }
#line 9233 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 336:
#line 2372 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::CompoundSelector> compound_selector((yyvsp[0].compound_selector));

    if (compound_selector) {
      (yyval.complex_selector) = new cssom::ComplexSelector();
      (yyval.complex_selector)->AppendSelector(std::move(compound_selector));
    } else {
      (yyval.complex_selector) = NULL;
    }
  }
#line 9248 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 337:
#line 2382 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ComplexSelector> complex_selector((yyvsp[-2].complex_selector));
    std::unique_ptr<cssom::Combinator> combinator((yyvsp[-1].combinator));
    std::unique_ptr<cssom::CompoundSelector> compound_selector((yyvsp[0].compound_selector));

    if (complex_selector && compound_selector) {
      (yyval.complex_selector) = complex_selector.release();
      (yyval.complex_selector)->AppendCombinatorAndSelector(std::move(combinator),
          std::move(compound_selector));
    } else {
      (yyval.complex_selector) = NULL;
    }
  }
#line 9266 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 339:
#line 2401 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ComplexSelector> complex_selector((yyvsp[0].complex_selector));

    if (complex_selector) {
      (yyval.selectors) = new cssom::Selectors();
      (yyval.selectors)->emplace_back(complex_selector.release());
    } else {
      (yyval.selectors) = NULL;
    }
  }
#line 9281 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 340:
#line 2411 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::Selectors> selector_list((yyvsp[-2].selectors));
    std::unique_ptr<cssom::ComplexSelector> complex_selector((yyvsp[0].complex_selector));

    if (selector_list && complex_selector) {
      (yyval.selectors) = selector_list.release();
      (yyval.selectors)->emplace_back(complex_selector.release());
    } else {
      (yyval.selectors) = NULL;
    }
  }
#line 9297 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 341:
#line 2430 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 9305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 342:
#line 2439 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = 1; }
#line 9311 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 343:
#line 2440 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = 1; }
#line 9317 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 344:
#line 2441 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = -1; }
#line 9323 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 345:
#line 2448 "grammar.y" /* yacc.c:1646  */
    {
    if (((yyvsp[0].integer) < 0) || ((yyvsp[0].integer) > 1)) {
      parser_impl->LogError((yylsp[0]), "integer value must be 0 or 1");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9335 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 346:
#line 2461 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.integer) = (yyvsp[-2].sign) * (yyvsp[-1].integer);
  }
#line 9343 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 347:
#line 2468 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].integer) < 0) {
      parser_impl->LogError((yylsp[0]), "integer value must not be negative");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9355 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 348:
#line 2479 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].integer) < 1) {
      parser_impl->LogError((yylsp[0]), "integer value must be positive");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9367 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 349:
#line 2492 "grammar.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].integer); }
#line 9373 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 350:
#line 2493 "grammar.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real); }
#line 9379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 351:
#line 2498 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].real) < 0) {
      parser_impl->LogError((yylsp[0]), "number value must not be negative");
      YYERROR;
    }
    (yyval.real) = (yyvsp[0].real);
  }
#line 9391 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 352:
#line 2512 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.percentage) = AddRef(new cssom::PercentageValue((yyvsp[-2].sign) * (yyvsp[-1].real) / 100));
  }
#line 9399 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 353:
#line 2519 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PercentageValue> percentage =
        MakeScopedRefPtrAndRelease((yyvsp[0].percentage));
    if (percentage && percentage->value() < 0) {
      parser_impl->LogError((yylsp[0]), "negative values of percentage are illegal");
      YYERROR;
    }
    (yyval.percentage) = AddRef(percentage.get());
  }
#line 9413 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 354:
#line 2533 "grammar.y" /* yacc.c:1646  */
    {
    // Any values outside the range 0.0 (fully transparent)
    // to 1.0 (fully opaque) will be clamped to this range.
    (yyval.real) = ClampToRange(0.0f, 1.0f, (yyvsp[0].real));
  }
#line 9423 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 355:
#line 2543 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].real) != 0) {
      parser_impl->LogError(
          (yylsp[0]), "non-zero length is not allowed without unit identifier");
      YYERROR;
    }
    (yyval.length) = AddRef(new cssom::LengthValue(0, cssom::kPixelsUnit));
  }
#line 9436 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 356:
#line 2551 "grammar.y" /* yacc.c:1646  */
    { (yyval.length) = (yyvsp[0].length); }
#line 9442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 357:
#line 2557 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    DCHECK(length);
    if (length->value() < 0) {
      parser_impl->LogError((yylsp[0]), "length value must not be negative");
      YYERROR;
    }
    (yyval.length) = AddRef(length.get());
  }
#line 9456 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 358:
#line 2571 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real), cssom::kFontSizesAkaEmUnit));
  }
#line 9464 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 359:
#line 2574 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kRootElementFontSizesAkaRemUnit));
  }
#line 9473 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 360:
#line 2578 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kViewportWidthPercentsAkaVwUnit));
  }
#line 9482 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 361:
#line 2582 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kViewportHeightPercentsAkaVhUnit));
  }
#line 9491 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 362:
#line 2588 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real), cssom::kPixelsUnit));
  }
#line 9499 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 363:
#line 2594 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    if (length && length->value() < 0) {
      parser_impl->LogError((yylsp[0]), "length value must not be negative");
      YYERROR;
    }
    (yyval.length) = AddRef(length.get());
  }
#line 9512 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 364:
#line 2607 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.ratio) = AddRef(new cssom::RatioValue(math::Rational((yyvsp[-3].integer), (yyvsp[0].integer))));
  }
#line 9520 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 365:
#line 2615 "grammar.y" /* yacc.c:1646  */
    {
    float value = (yyvsp[-2].sign) * (yyvsp[-1].real);
    if (value <= 0) {
      parser_impl->LogError((yylsp[-2]), "resolution value must be positive");
      YYERROR;
    }
    (yyval.resolution) = AddRef(new cssom::ResolutionValue(value, cssom::kDPIUnit));
  }
#line 9533 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 366:
#line 2623 "grammar.y" /* yacc.c:1646  */
    {
    float value = (yyvsp[-2].sign) * (yyvsp[-1].real);
    if (value <= 0) {
      parser_impl->LogError((yylsp[-2]), "resolution value must be positive");
      YYERROR;
    }
    (yyval.resolution) = AddRef(new cssom::ResolutionValue(value, cssom::kDPCMUnit));
  }
#line 9546 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 367:
#line 2636 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * (2 * static_cast<float>(M_PI) / 360.0f);
  }
#line 9554 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 368:
#line 2639 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * (2 * static_cast<float>(M_PI) / 400.0f);
  }
#line 9562 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 369:
#line 2642 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real);
  }
#line 9570 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 370:
#line 2645 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * 2 * static_cast<float>(M_PI);
  }
#line 9578 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 371:
#line 2653 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(
             static_cast<int64>((yyvsp[0].real) * ::base::Time::kMillisecondsPerSecond)).
             ToInternalValue();
    if ((yyvsp[0].real) != 0) {
      parser_impl->LogWarning(
          (yylsp[0]), "non-zero time is not allowed without unit identifier");
    }
  }
#line 9592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 373:
#line 2666 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(
             static_cast<int64>((yyvsp[-2].sign) * (yyvsp[-1].real) * ::base::Time::kMillisecondsPerSecond)).
             ToInternalValue();
  }
#line 9602 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 374:
#line 2671 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(static_cast<int64>((yyvsp[-2].sign) * (yyvsp[-1].real))).
             ToInternalValue();
  }
#line 9611 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 378:
#line 2684 "grammar.y" /* yacc.c:1646  */
    {
    // If a user agent does not support a particular value, it should ignore
    // that value when parsing style sheets, as if that value was an illegal
    // value.
    //   https://www.w3.org/TR/CSS21/syndata.html#unsupported-values
    //
    // User agents must ignore a declaration with an illegal value.
    //   https://www.w3.org/TR/CSS21/syndata.html#illegalvalues
    parser_impl->LogWarning((yylsp[0]), "unsupported value");
    (yyval.property_value) = NULL;
  }
#line 9627 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 379:
#line 2698 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInherit().get());
  }
#line 9635 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 380:
#line 2701 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInitial().get());
  }
#line 9643 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 381:
#line 2709 "grammar.y" /* yacc.c:1646  */
    {
    switch ((yyvsp[-1].string).size()) {
      // The three-digit RGB notation (#rgb) is converted into six-digit
      // form (#rrggbb) by replicating digits.
      case 3: {
        uint32 rgb = ParseHexToken((yyvsp[-1].string));
        uint32 r = (rgb & 0xf00) >> 8;
        uint32 g = (rgb & 0x0f0) >> 4;
        uint32 b = (rgb & 0x00f);
        (yyval.color) = AddRef(new cssom::RGBAColorValue((r << 28) | (r << 24) |
                                              (g << 20) | (g << 16) |
                                              (b << 12) | (b << 8) |
                                              0xff));
        break;
      }
      case 6: {
        uint32 rgb = ParseHexToken((yyvsp[-1].string));
        (yyval.color) = AddRef(new cssom::RGBAColorValue((rgb << 8) | 0xff));
        break;
      }
      default:
        YYERROR;
        break;
    }
  }
#line 9673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 382:
#line 2737 "grammar.y" /* yacc.c:1646  */
    {
    uint8 r = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-6].integer)));
    uint8 g = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-4].integer)));
    uint8 b = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-2].integer)));
    (yyval.color) = AddRef(new cssom::RGBAColorValue(r, g, b, 0xff));
  }
#line 9684 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 383:
#line 2746 "grammar.y" /* yacc.c:1646  */
    {
    uint8 r = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-8].integer)));
    uint8 g = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-6].integer)));
    uint8 b = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-4].integer)));
    float a = (yyvsp[-2].real);  // Already clamped.
    (yyval.color) = AddRef(
        new cssom::RGBAColorValue(r, g, b, static_cast<uint8>(a * 0xff)));
  }
#line 9697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 384:
#line 2754 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetAqua().get());
  }
#line 9705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 385:
#line 2757 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetBlack().get());
  }
#line 9713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 386:
#line 2760 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetBlue().get());
  }
#line 9721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 387:
#line 2763 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetFuchsia().get());
  }
#line 9729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 388:
#line 2766 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetGray().get());
  }
#line 9737 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 389:
#line 2769 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetGreen().get());
  }
#line 9745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 390:
#line 2772 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetLime().get());
  }
#line 9753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 391:
#line 2775 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetMaroon().get());
  }
#line 9761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 392:
#line 2778 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetNavy().get());
  }
#line 9769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 393:
#line 2781 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetOlive().get());
  }
#line 9777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 394:
#line 2784 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetPurple().get());
  }
#line 9785 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 395:
#line 2787 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetRed().get());
  }
#line 9793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 396:
#line 2790 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetSilver().get());
  }
#line 9801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 397:
#line 2793 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetTeal().get());
  }
#line 9809 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 398:
#line 2796 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetTransparent().get());
  }
#line 9817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 399:
#line 2799 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetWhite().get());
  }
#line 9825 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 400:
#line 2802 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetYellow().get());
  }
#line 9833 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 401:
#line 2808 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::URLValue((yyvsp[-2].string).ToString()));
  }
#line 9841 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 402:
#line 2819 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 9849 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 403:
#line 2822 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 9857 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 404:
#line 2828 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 9865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 405:
#line 2831 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 9873 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 406:
#line 2837 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> color(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].background_shorthand_layer)->background_color) {
      (yyvsp[-1].background_shorthand_layer)->background_color = color;
    } else {
      parser_impl->LogError(
          (yylsp[0]), "background-color value declared twice in background.");
      (yyvsp[-1].background_shorthand_layer)->error = true;
    }
  }
#line 9888 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 407:
#line 2847 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> image(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    if (!(yyvsp[-1].background_shorthand_layer)->background_image) {
      std::unique_ptr<cssom::PropertyListValue::Builder>
          background_image_builder(new cssom::PropertyListValue::Builder());
      background_image_builder->reserve(1);
      background_image_builder->push_back(image);
      (yyvsp[-1].background_shorthand_layer)->background_image =
          new cssom::PropertyListValue(std::move(background_image_builder));
    } else {
      parser_impl->LogError(
          (yylsp[0]), "background-image value declared twice in background.");
      (yyvsp[-1].background_shorthand_layer)->error = true;
    }
  }
#line 9908 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 408:
#line 2865 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = NULL;
  }
#line 9916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 409:
#line 2868 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].property_value);
  }
#line 9924 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 410:
#line 2875 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer(
        new BackgroundShorthandLayer());

    shorthand_layer->background_position = MakeScopedRefPtrAndRelease((yyvsp[-1].property_list_value));
    if ((yyvsp[0].property_value)) {
      shorthand_layer->background_size = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    }

    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9940 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 411:
#line 2889 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer(
        new BackgroundShorthandLayer());
    shorthand_layer->background_repeat = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9951 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 414:
#line 2904 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer((yyvsp[-1].background_shorthand_layer));
    std::unique_ptr<BackgroundShorthandLayer> non_overlapped((yyvsp[0].background_shorthand_layer));
    shorthand_layer->IntegrateNonOverlapped(*non_overlapped);
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 415:
#line 2911 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer((yyvsp[-1].background_shorthand_layer));
    std::unique_ptr<BackgroundShorthandLayer> non_overlapped((yyvsp[0].background_shorthand_layer));
    shorthand_layer->IntegrateNonOverlapped(*non_overlapped);
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9973 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 416:
#line 2920 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the background shorthand which is to be filled in by
    // subsequent reductions.
    (yyval.background_shorthand_layer) = new BackgroundShorthandLayer();
  }
#line 9983 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 417:
#line 2925 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the return value from the reduced list.
    // Appending of the new background_property_element to the list is done
    // within background_property_element's reduction.
    (yyval.background_shorthand_layer) = (yyvsp[-1].background_shorthand_layer);
  }
#line 9994 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 418:
#line 2936 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the background shorthand which is to be filled in by
    // subsequent reductions.
    (yyval.background_shorthand_layer) = new BackgroundShorthandLayer();
  }
#line 10004 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 419:
#line 2942 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand((yyvsp[-1].background_shorthand_layer));
    std::unique_ptr<BackgroundShorthandLayer> background_values((yyvsp[0].background_shorthand_layer));
    if (!shorthand->IsBackgroundPropertyOverlapped(*background_values.get())) {
      shorthand->IntegrateNonOverlapped(*background_values.get());
      (yyval.background_shorthand_layer) = shorthand.release();
    } else {
      parser_impl->LogError(
          (yylsp[-1]), "background-position or background-repeat declared twice in "
              "background.");
      (yyval.background_shorthand_layer) = new BackgroundShorthandLayer();
      (yyval.background_shorthand_layer)->error = true;
    }
  }
#line 10023 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 420:
#line 2956 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the return value from the reduced list.
    // Appending of the new background_property_element to the list is done
    // within background_property_element's reduction.
    (yyval.background_shorthand_layer) = (yyvsp[-1].background_shorthand_layer);
  }
#line 10034 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 422:
#line 2968 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that background
    // is a shorthand for.
    std::unique_ptr<BackgroundShorthandLayer> background(
        new BackgroundShorthandLayer());
    background->background_color = (yyvsp[0].property_value);
    background->background_image = (yyvsp[0].property_value);
    background->background_repeat = (yyvsp[0].property_value);
    background->background_position = (yyvsp[0].property_value);
    background->background_size = (yyvsp[0].property_value);
    (yyval.background_shorthand_layer) = background.release();
  }
#line 10051 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 423:
#line 2985 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].color); }
#line 10057 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 425:
#line 2990 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop) = new cssom::ColorStop(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
  }
#line 10065 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 426:
#line 2993 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop) = new cssom::ColorStop(MakeScopedRefPtrAndRelease((yyvsp[-1].color)),
                              MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10074 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 427:
#line 3001 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop_list) = new cssom::ColorStopList();
    (yyval.color_stop_list)->emplace_back((yyvsp[-2].color_stop));
    (yyval.color_stop_list)->emplace_back((yyvsp[0].color_stop));
  }
#line 10084 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 428:
#line 3006 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop_list) = (yyvsp[-2].color_stop_list);
    (yyval.color_stop_list)->emplace_back((yyvsp[0].color_stop));
  }
#line 10093 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 429:
#line 3013 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kBottom;
  }
#line 10101 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 430:
#line 3016 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kLeft;
  }
#line 10109 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 431:
#line 3019 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kRight;
  }
#line 10117 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 432:
#line 3022 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kTop;
  }
#line 10125 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 434:
#line 3029 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].side_or_corner) == cssom::LinearGradientValue::kBottom) {
      if((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kLeft) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kBottomLeft;
      } else if ((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kRight) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kBottomRight;
      } else {
        parser_impl->LogWarning((yylsp[-1]), "Illegal corner value.");
      }
    } else if ((yyvsp[-1].side_or_corner) == cssom::LinearGradientValue::kLeft) {
      if((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kBottom) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kBottomLeft;
      } else if ((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kTop) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kTopLeft;
      } else {
        parser_impl->LogWarning((yylsp[-1]), "Illegal corner value.");
      }
    } else if ((yyvsp[-1].side_or_corner) == cssom::LinearGradientValue::kRight) {
      if((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kBottom) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kBottomRight;
      } else if ((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kTop) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kTopRight;
      } else {
        parser_impl->LogWarning((yylsp[-1]), "Illegal corner value.");
      }
    } else if ((yyvsp[-1].side_or_corner) == cssom::LinearGradientValue::kTop) {
      if((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kLeft) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kTopLeft;
      } else if ((yyvsp[0].side_or_corner) == cssom::LinearGradientValue::kRight) {
        (yyval.side_or_corner) = cssom::LinearGradientValue::kTopRight;
      } else {
        parser_impl->LogWarning((yylsp[-1]), "Illegal corner value.");
      }
    }
  }
#line 10165 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 435:
#line 3067 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    // If the first argument to the linear gradient function is omitted, it
    // defaults to 'to bottom'.
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue(
             cssom::LinearGradientValue::kBottom, std::move(*color_stop_list)));
  }
#line 10177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 436:
#line 3074 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue((yyvsp[-2].real), std::move(*color_stop_list)));
  }
#line 10186 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 437:
#line 3079 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue((yyvsp[-2].side_or_corner), std::move(*color_stop_list)));
  }
#line 10195 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 438:
#line 3086 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kClosestSide;
  }
#line 10203 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 439:
#line 3089 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kFarthestSide;
  }
#line 10211 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 440:
#line 3092 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kClosestCorner;
  }
#line 10219 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 441:
#line 3095 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kFarthestCorner;
  }
#line 10227 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 442:
#line 3101 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10235 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 443:
#line 3104 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[-2].size_keyword);
  }
#line 10243 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 444:
#line 3113 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10255 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 445:
#line 3120 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10267 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 446:
#line 3127 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10279 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 447:
#line 3137 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10287 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 448:
#line 3140 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[-2].size_keyword);
  }
#line 10295 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 449:
#line 3143 "grammar.y" /* yacc.c:1646  */
    {
    // If only a size keyword is specified, the ending shape defaults to an
    // ellipse.
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 450:
#line 3155 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10318 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 451:
#line 3164 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-3].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10331 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 452:
#line 3173 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10344 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 453:
#line 3184 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list_value) = (yyvsp[0].property_list_value);
  }
#line 10352 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 454:
#line 3190 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list_value) = NULL;
  }
#line 10360 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 456:
#line 3199 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kCircle,
                                       MakeScopedRefPtrAndRelease((yyvsp[-3].property_list_value)),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10373 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 457:
#line 3208 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kEllipse,
                                       MakeScopedRefPtrAndRelease((yyvsp[-3].property_list_value)),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10386 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 458:
#line 3217 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kCircle,
                                       (yyvsp[-3].size_keyword),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10399 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 459:
#line 3226 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kEllipse,
                                       (yyvsp[-3].size_keyword),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10412 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 460:
#line 3235 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kCircle,
            cssom::RadialGradientValue::kFarthestCorner,
            MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
            std::move(*color_stop_list)));
  }
#line 10425 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 461:
#line 3244 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kEllipse,
            cssom::RadialGradientValue::kFarthestCorner,
            MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
            std::move(*color_stop_list)));
  }
#line 10438 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 462:
#line 3252 "grammar.y" /* yacc.c:1646  */
    {
    // If no size or shape is specified, the ending shape defaults to an ellipse
    // and the size defaults to 'farthest-corner'.
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kEllipse,
            cssom::RadialGradientValue::kFarthestCorner,
            MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
            std::move(*color_stop_list)));
  }
#line 10453 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 463:
#line 3262 "grammar.y" /* yacc.c:1646  */
    {
    // If position is omitted as well, it defaults to 'center', indicated by
    // passing in NULL.
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kEllipse,
            cssom::RadialGradientValue::kFarthestCorner,
            NULL,
            std::move(*color_stop_list)));
  }
#line 10468 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 464:
#line 3275 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 10474 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 465:
#line 3276 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[-1].property_value);
  }
#line 10482 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 466:
#line 3279 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[-1].property_value);
  }
#line 10490 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 467:
#line 3282 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 10498 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 468:
#line 3288 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10507 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 469:
#line 3293 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10516 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 470:
#line 3303 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 10527 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 472:
#line 3313 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBottom().get());
  }
#line 10535 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 473:
#line 3316 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 10543 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 474:
#line 3319 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLeft().get());
  }
#line 10551 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 475:
#line 3322 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRight().get());
  }
#line 10559 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 476:
#line 3325 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetTop().get());
  }
#line 10567 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 478:
#line 3332 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PositionParseStructure> position_info(
        new PositionParseStructure());
    position_info->PushBackElement(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.position_structure) = position_info.release();
  }
#line 10578 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 479:
#line 3339 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PositionParseStructure> position_info((yyvsp[-1].position_structure));
    scoped_refptr<cssom::PropertyValue> element(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    if (position_info &&
        !position_info->PushBackElement(element)) {
      parser_impl->LogWarning((yylsp[0]), "invalid background position value");
      (yyval.position_structure) = NULL;
    } else {
      (yyval.position_structure) = position_info.release();
    }
  }
#line 10594 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 480:
#line 3353 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PositionParseStructure> position_info((yyvsp[0].position_structure));
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value;

    if (!position_info) {
      // No-ops.
    } else if (position_info->position_builder().size() == 1) {
      property_value.reset(new cssom::PropertyListValue::Builder(
          position_info->position_builder()));
    } else if (position_info->position_builder().size() == 2 &&
               !position_info->IsPositionValidOnSizeTwo()) {
      parser_impl->LogWarning((yylsp[0]), "invalid background position value");
      // No-ops.
    } else {
      DCHECK_GE(position_info->position_builder().size(), 2u);
      DCHECK_LE(position_info->position_builder().size(), 4u);
      property_value.reset(new cssom::PropertyListValue::Builder(
          position_info->position_builder()));
    }

    (yyval.property_list_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 10623 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 481:
#line 3384 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].property_list_value);
  }
#line 10631 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 483:
#line 3394 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNoRepeat().get());
  }
#line 10639 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 484:
#line 3397 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRepeat().get());
  }
#line 10647 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 485:
#line 3403 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    builder->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10660 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 486:
#line 3411 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 487:
#line 3419 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(cssom::KeywordValue::GetRepeat().get());
    builder->push_back(cssom::KeywordValue::GetNoRepeat().get());
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10686 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 488:
#line 3427 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(cssom::KeywordValue::GetNoRepeat().get());
    builder->push_back(cssom::KeywordValue::GetRepeat().get());
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10699 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 491:
#line 3443 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].length); }
#line 10705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 492:
#line 3444 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].percentage); }
#line 10711 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 494:
#line 3449 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(2);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    // Fill in the omitted 'auto'.
    (yyval.property_list)->push_back(cssom::KeywordValue::GetAuto().get());
  }
#line 10723 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 495:
#line 3457 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(2);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10734 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 496:
#line 3468 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 10745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 497:
#line 3474 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContain().get());
  }
#line 10753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 498:
#line 3477 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCover().get());
  }
#line 10761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 501:
#line 3491 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 502:
#line 3494 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    (yyval.property_list) = property_value.release();
  }
#line 10779 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 503:
#line 3502 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    if (property_value->size() > 0u &&
        property_value->size() <= 4u) {
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      parser_impl->LogWarning((yylsp[0]), "invalid number of border color values");
      (yyval.property_value) = NULL;
    }
  }
#line 10794 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 504:
#line 3512 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10805 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 505:
#line 3522 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 10813 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 506:
#line 3525 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 10821 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 507:
#line 3528 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSolid().get());
  }
#line 10829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 510:
#line 3541 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10837 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 511:
#line 3544 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 10847 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 512:
#line 3552 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    if (property_value->size() > 0u &&
        property_value->size() <= 4u) {
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      parser_impl->LogWarning((yylsp[0]), "invalid number of border style values");
      (yyval.property_value) = NULL;
    }
  }
#line 10862 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 513:
#line 3562 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10873 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 514:
#line 3573 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].length); }
#line 10879 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 517:
#line 3582 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10887 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 518:
#line 3585 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 10897 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 519:
#line 3593 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    if (property_value->size() > 0u &&
        property_value->size() <= 4u) {
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      parser_impl->LogWarning((yylsp[0]), "invalid number of border width values");
      (yyval.property_value) = NULL;
    }
  }
#line 10912 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 520:
#line 3603 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10923 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 521:
#line 3620 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> color(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].border_or_outline_shorthand)->color) {
      (yyvsp[-1].border_or_outline_shorthand)->color = color;
    } else {
      parser_impl->LogError(
          (yylsp[0]), "color value declared twice in border or outline.");
      (yyvsp[-1].border_or_outline_shorthand)->error = true;
    }
  }
#line 10938 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 522:
#line 3630 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> line_style =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    if (!(yyvsp[-1].border_or_outline_shorthand)->style) {
      (yyvsp[-1].border_or_outline_shorthand)->style = line_style;
    } else {
      parser_impl->LogError(
          (yylsp[0]), "style value declared twice in border or outline.");
      (yyvsp[-1].border_or_outline_shorthand)->error = true;
    }
  }
#line 10954 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 523:
#line 3641 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> positive_length =
        MakeScopedRefPtrAndRelease((yyvsp[0].length));
    if (!(yyvsp[-1].border_or_outline_shorthand)->width) {
      (yyvsp[-1].border_or_outline_shorthand)->width = positive_length;
    } else {
      parser_impl->LogError(
          (yylsp[0]), "width value declared twice in border or outline.");
      (yyvsp[-1].border_or_outline_shorthand)->error = true;
    }
  }
#line 10970 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 524:
#line 3655 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.border_or_outline_shorthand) = new BorderOrOutlineShorthand();
  }
#line 10978 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 525:
#line 3658 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.border_or_outline_shorthand) = (yyvsp[-1].border_or_outline_shorthand);
  }
#line 10986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 527:
#line 3672 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that border is a
    // shorthand for.
    std::unique_ptr<BorderOrOutlineShorthand> border(new BorderOrOutlineShorthand());
    border->color = (yyvsp[0].property_value);
    border->style = (yyvsp[0].property_value);
    border->width = (yyvsp[0].property_value);
    (yyval.border_or_outline_shorthand) = border.release();
  }
#line 11000 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 528:
#line 3687 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 11006 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 531:
#line 3695 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 11014 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 532:
#line 3698 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 11024 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 533:
#line 3706 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    if (property_value->size() > 0u &&
        property_value->size() <= 4u) {
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      parser_impl->LogWarning((yylsp[0]), "invalid number of border radius values");
      (yyval.property_value) = NULL;
    }
  }
#line 11039 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 534:
#line 3716 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 11050 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 535:
#line 3725 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].shadow_info)->length_vector.size() == 2) {
      scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
      // Negative values are not allowed for blur radius.
      if (length && length->value() < 0) {
        parser_impl->LogError((yylsp[0]), "negative values of blur radius are illegal");
        (yyvsp[-1].shadow_info)->error = true;
      }
      (yyvsp[-1].shadow_info)->length_vector.push_back(length);
    } else {
      (yyvsp[-1].shadow_info)->length_vector.push_back(
          MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    }
  }
#line 11069 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 536:
#line 3739 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::RGBAColorValue> color(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].shadow_info)->color) {
      (yyvsp[-1].shadow_info)->color = color;
    } else {
      parser_impl->LogError((yylsp[0]), "color value declared twice in box shadow.");
      (yyvsp[-1].shadow_info)->error = true;
    }
  }
#line 11083 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 537:
#line 3748 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].shadow_info)->has_inset) {
      (yyvsp[-2].shadow_info)->has_inset = true;
    } else {
      parser_impl->LogError((yylsp[-1]), "inset value declared twice in box shadow.");
      (yyvsp[-2].shadow_info)->error = true;
    }
  }
#line 11096 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 538:
#line 3759 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = new ShadowPropertyInfo();
  }
#line 11104 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 539:
#line 3762 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = (yyvsp[-1].shadow_info);
  }
#line 11112 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 540:
#line 3768 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<ShadowPropertyInfo> shadow_property_info((yyvsp[0].shadow_info));
    if (!shadow_property_info->IsShadowPropertyValid(kBoxShadow)) {
      parser_impl->LogWarning((yylsp[0]), "invalid box shadow property.");
      (yyval.property_value) = NULL;
    } else {
      (yyval.property_value) = AddRef(new cssom::ShadowValue(
              shadow_property_info->length_vector, shadow_property_info->color,
              shadow_property_info->has_inset));
    }
  }
#line 11128 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 541:
#line 3782 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> shadow = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    if (shadow) {
      (yyval.property_list) = new cssom::PropertyListValue::Builder();
      (yyval.property_list)->push_back(shadow);
    }
  }
#line 11140 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 542:
#line 3789 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    scoped_refptr<cssom::PropertyValue> shadow = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    if ((yyval.property_list) && shadow) {
      (yyval.property_list)->push_back(shadow);
    }
  }
#line 11152 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 543:
#line 3802 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_list)) {
      std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    }
  }
#line 11163 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 544:
#line 3808 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11171 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 546:
#line 3817 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].color); }
#line 11177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 548:
#line 3824 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 549:
#line 3827 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11193 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 550:
#line 3830 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 11199 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 551:
#line 3831 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11207 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 553:
#line 3840 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBlock().get());
  }
#line 11215 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 554:
#line 3843 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlex().get());
  }
#line 11223 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 555:
#line 3846 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInline().get());
  }
#line 11231 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 556:
#line 3849 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInlineBlock().get());
  }
#line 11239 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 557:
#line 3852 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInlineFlex().get());
  }
#line 11247 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 558:
#line 3855 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11255 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 560:
#line 3866 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::UrlSrcValue(MakeScopedRefPtrAndRelease((yyvsp[-6].property_value)),
                                       (yyvsp[-3].string).ToString()));
  }
#line 11264 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 561:
#line 3870 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::UrlSrcValue(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)), ""));
  }
#line 11272 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 562:
#line 3880 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::LocalSrcValue((yyvsp[-2].string_value)->value()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11281 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 565:
#line 3892 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11290 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 566:
#line 3896 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11299 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 567:
#line 3907 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 11310 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 569:
#line 3921 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11318 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 570:
#line 3924 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-2].string_value)->value() + " " + (yyvsp[-1].string).ToString()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11327 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 571:
#line 3931 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11335 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 574:
#line 3948 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-2].string_value)->value() + " " + (yyvsp[-1].string).ToString()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11344 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 576:
#line 3960 "grammar.y" /* yacc.c:1646  */
    {
    // Generic families are defined in all CSS implementations.
    //   https://www.w3.org/TR/css3-fonts/#generic-font-families
    if ((yyvsp[-1].string) == cssom::kCursiveKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetCursive().get());
    } else if ((yyvsp[-1].string) == cssom::kFantasyKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetFantasy().get());
    } else if ((yyvsp[-1].string) == cssom::kMonospaceKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetMonospace().get());
    } else if ((yyvsp[-1].string) == cssom::kSansSerifKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetSansSerif().get());
    } else if ((yyvsp[-1].string) == cssom::kSerifKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetSerif().get());
    } else {
      (yyval.property_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
    }
  }
#line 11366 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 577:
#line 3977 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].string_value); }
#line 11372 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 578:
#line 3981 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11381 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 579:
#line 3985 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11390 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 580:
#line 3996 "grammar.y" /* yacc.c:1646  */
    {
    // "inherit" and "initial" are reserved values and not allowed as font
    // family names.
    //   https://www.w3.org/TR/css3-fonts/#propdef-font-family
    if ((yyvsp[-1].string) == cssom::kInheritKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetInherit().get());
    } else if ((yyvsp[-1].string) == cssom::kInitialKeywordName) {
      (yyval.property_value) = AddRef(cssom::KeywordValue::GetInitial().get());
    } else {
      std::unique_ptr<cssom::PropertyListValue::Builder>
          builder(new cssom::PropertyListValue::Builder());

      // Generic families are defined in all CSS implementations.
      //   https://www.w3.org/TR/css3-fonts/#generic-font-families
      if ((yyvsp[-1].string) == cssom::kCursiveKeywordName) {
        builder->push_back(cssom::KeywordValue::GetCursive().get());
      } else if ((yyvsp[-1].string) == cssom::kFantasyKeywordName) {
        builder->push_back(cssom::KeywordValue::GetFantasy().get());
      } else if ((yyvsp[-1].string) == cssom::kMonospaceKeywordName) {
        builder->push_back(cssom::KeywordValue::GetMonospace().get());
      } else if ((yyvsp[-1].string) == cssom::kSansSerifKeywordName) {
        builder->push_back(cssom::KeywordValue::GetSansSerif().get());
      } else if ((yyvsp[-1].string) == cssom::kSerifKeywordName) {
        builder->push_back(cssom::KeywordValue::GetSerif().get());
      } else {
        builder->push_back(new cssom::StringValue((yyvsp[-1].string).ToString()));
      }

      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
    }
  }
#line 11426 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 581:
#line 4027 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder>
        builder(new cssom::PropertyListValue::Builder());
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].string_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 11437 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 582:
#line 4033 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder((yyvsp[-2].property_list));
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 11447 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 583:
#line 4038 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[0]), "unsupported property value for font-family");
    (yyval.property_value) = NULL;
  }
#line 11456 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 586:
#line 4054 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetItalic().get());
  }
#line 11464 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 587:
#line 4057 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetOblique().get());
  }
#line 11472 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 589:
#line 4066 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetNormal().get());
  }
#line 11480 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 591:
#line 4075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontWeightValue::GetBoldAka700().get());
  }
#line 11488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 592:
#line 4078 "grammar.y" /* yacc.c:1646  */
    {
    switch ((yyvsp[0].integer)) {
      case 100:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetThinAka100().get());
        break;
      case 200:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetExtraLightAka200().get());
        break;
      case 300:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetLightAka300().get());
        break;
      case 400:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetNormalAka400().get());
        break;
      case 500:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetMediumAka500().get());
        break;
      case 600:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetSemiBoldAka600().get());
        break;
      case 700:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetBoldAka700().get());
        break;
      case 800:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetExtraBoldAka800().get());
        break;
      case 900:
        (yyval.property_value) = AddRef(cssom::FontWeightValue::GetBlackAka900().get());
        break;
      default:
        parser_impl->LogError((yylsp[0]), "unsupported property value for font-weight");
        (yyval.property_value) = NULL;
    }
  }
#line 11527 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 594:
#line 4119 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontWeightValue::GetNormalAka400().get());
  }
#line 11535 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 596:
#line 4135 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].font)->font_style) {
      (yyvsp[-1].font)->font_style = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "font-style value declared twice in font.");
    }
  }
#line 11548 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 597:
#line 4143 "grammar.y" /* yacc.c:1646  */
    {
    // The normal token is treated as representing font style if it is
    // encountered before the style is set. Otherwise, it is treated as the
    // font weight.
    if (!(yyvsp[-2].font)->font_style) {
      (yyvsp[-2].font)->font_style =
        AddRef(cssom::FontStyleValue::GetNormal().get());
    } else if (!(yyvsp[-2].font)->font_weight) {
      (yyvsp[-2].font)->font_weight =
        AddRef(cssom::FontWeightValue::GetNormalAka400().get());
    } else {
      parser_impl->LogWarning(
        (yylsp[-1]), "too many font values declared in font.");
    }
  }
#line 11568 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 598:
#line 4158 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for font");
    (yyvsp[-2].font)->error = true;
  }
#line 11577 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 599:
#line 4165 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by
    // non_empty_optional_font_value_list
    (yyval.font) = new FontShorthand();
  }
#line 11587 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 601:
#line 4174 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent.
    // optional_font_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.font) = (yyvsp[-1].font);
  }
#line 11598 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 602:
#line 4186 "grammar.y" /* yacc.c:1646  */
    {
    // Font shorthand properties without a non-normal weight value.
    std::unique_ptr<FontShorthand> font((yyvsp[-2].font));

    font->font_size = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));

    std::unique_ptr<cssom::PropertyListValue::Builder> builder((yyvsp[0].property_list));
    font->font_family = new cssom::PropertyListValue(std::move(builder));

    (yyval.font) = font.release();
  }
#line 11614 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 603:
#line 4199 "grammar.y" /* yacc.c:1646  */
    {
    // Font shorthand properties with a non-normal weight value. This and the
    // preceding without expression are not simply combined into a single
    // maybe_font_weight_exclusive_property_value as a result of Bison having
    // parsing conflicts when the weight value appears in that form.
    std::unique_ptr<FontShorthand> font((yyvsp[-3].font));

    if (!font->font_weight) {
      font->font_weight = MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[-3]), "font-weight value declared twice in font.");
    }

    font->font_size = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));

    std::unique_ptr<cssom::PropertyListValue::Builder> builder((yyvsp[0].property_list));
    font->font_family = new cssom::PropertyListValue(std::move(builder));

    (yyval.font) = font.release();
  }
#line 11640 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 604:
#line 4220 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that font
    // is a shorthand for.
    std::unique_ptr<FontShorthand> font(new FontShorthand());
    font->font_style = (yyvsp[0].property_value);
    font->font_weight = (yyvsp[0].property_value);
    font->font_size = (yyvsp[0].property_value);
    font->font_family = (yyvsp[0].property_value);
    (yyvsp[0].property_value)->Release();

    (yyval.font) = font.release();
  }
#line 11657 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 608:
#line 4244 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(4);
    auto all_margins = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.property_list)->push_back(all_margins);
    (yyval.property_list)->push_back(all_margins);
    (yyval.property_list)->push_back(all_margins);
    (yyval.property_list)->push_back(all_margins);
  }
#line 11671 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 609:
#line 4256 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(4);
    auto top_and_bottom_margins = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    auto right_and_left_margins = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.property_list)->push_back(top_and_bottom_margins);
    (yyval.property_list)->push_back(right_and_left_margins);
    (yyval.property_list)->push_back(top_and_bottom_margins);
    (yyval.property_list)->push_back(right_and_left_margins);
  }
#line 11686 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 610:
#line 4270 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(4);
    auto right_and_left_margins = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].property_value)));
    (yyval.property_list)->push_back(right_and_left_margins);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list)->push_back(right_and_left_margins);
  }
#line 11700 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 611:
#line 4284 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(4);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-3].property_value)));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].property_value)));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 612:
#line 4297 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 11724 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 613:
#line 4309 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 11732 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 616:
#line 4319 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11740 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 619:
#line 4330 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11748 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 620:
#line 4333 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 11756 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 621:
#line 4336 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 11764 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 622:
#line 4339 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 11772 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 628:
#line 4365 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> width(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
        width, width, width, width).release();
  }
#line 11782 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 629:
#line 4372 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> vertical_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             vertical_width, horizontal_width,
             vertical_width, horizontal_width).release();
  }
#line 11796 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 630:
#line 4383 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> top_width =
        MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> bottom_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             top_width, horizontal_width,
             bottom_width, horizontal_width).release();
  }
#line 11812 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 631:
#line 4396 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> top_width =
        MakeScopedRefPtrAndRelease((yyvsp[-3].property_value));
    scoped_refptr<cssom::PropertyValue> left_width =
        MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    scoped_refptr<cssom::PropertyValue> bottom_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> right_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             top_width, left_width, bottom_width, right_width).release();
  }
#line 11829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 632:
#line 4408 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate((yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value)).release();
  }
#line 11837 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 636:
#line 4426 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real))); }
#line 11843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 638:
#line 4435 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 11851 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 639:
#line 4438 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 11859 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 640:
#line 4441 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetScroll().get());
  }
#line 11867 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 641:
#line 4444 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetVisible().get());
  }
#line 11875 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 643:
#line 4455 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBreakWord().get());
  }
#line 11883 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 644:
#line 4458 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11891 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 648:
#line 4480 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             width, width, width, width).release();
  }
#line 11902 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 649:
#line 4489 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> vertical_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             vertical_width, horizontal_width,
             vertical_width, horizontal_width).release();
  }
#line 11916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 650:
#line 4502 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> top_width =
        MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> bottom_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             top_width, horizontal_width,
             bottom_width, horizontal_width).release();
  }
#line 11932 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 651:
#line 4518 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> top_width =
        MakeScopedRefPtrAndRelease((yyvsp[-3].property_value));
    scoped_refptr<cssom::PropertyValue> left_width =
        MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    scoped_refptr<cssom::PropertyValue> bottom_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> right_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             top_width, left_width, bottom_width, right_width).release();
  }
#line 11949 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 652:
#line 4530 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate((yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value)).release();
  }
#line 11957 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 653:
#line 4543 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 11965 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 654:
#line 4546 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11973 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 656:
#line 4556 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAbsolute().get());
  }
#line 11981 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 657:
#line 4559 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFixed().get());
  }
#line 11989 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 658:
#line 4562 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRelative().get());
  }
#line 11997 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 659:
#line 4565 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStatic().get());
  }
#line 12005 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 661:
#line 4574 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_function) = new cssom::ScaleFunction((yyvsp[0].real), (yyvsp[0].real));
  }
#line 12013 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 662:
#line 4577 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_function) = new cssom::ScaleFunction((yyvsp[-2].real), (yyvsp[0].real));
  }
#line 12021 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 663:
#line 4586 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetEnd().get());
  }
#line 12029 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 664:
#line 4589 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLeft().get());
  }
#line 12037 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 665:
#line 4592 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 12045 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 666:
#line 4595 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRight().get());
  }
#line 12053 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 667:
#line 4598 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStart().get());
  }
#line 12061 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 669:
#line 4607 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12069 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 670:
#line 4610 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLineThrough().get());
  }
#line 12077 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 673:
#line 4623 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> line(
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    if (!(yyvsp[-1].text_decoration_shorthand)->line) {
      (yyvsp[-1].text_decoration_shorthand)->line = line;
    } else {
      parser_impl->LogError((yylsp[0]),
          "text-decoration-line value declared twice in text-decoration.");
      (yyvsp[-1].text_decoration_shorthand)->error = true;
    }
  }
#line 12093 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 674:
#line 4634 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> color(
        MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].text_decoration_shorthand)->color) {
      (yyvsp[-1].text_decoration_shorthand)->color = color;
    } else {
      parser_impl->LogError((yylsp[0]),
          "color value declared twice in text-decoration.");
      (yyvsp[-1].text_decoration_shorthand)->error = true;
    }
  }
#line 12109 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 675:
#line 4648 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.text_decoration_shorthand) = new TextDecorationShorthand();
  }
#line 12117 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 676:
#line 4651 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.text_decoration_shorthand) = (yyvsp[-1].text_decoration_shorthand);
  }
#line 12125 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 678:
#line 4661 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex_ flow is
    // a shorthand for.
    std::unique_ptr<TextDecorationShorthand> text_decoration(
        new TextDecorationShorthand());
    text_decoration->line = (yyvsp[0].property_value);
    text_decoration->color = (yyvsp[0].property_value);
    (yyval.text_decoration_shorthand) = text_decoration.release();
  }
#line 12139 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 679:
#line 4677 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 12147 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 681:
#line 4687 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetClip().get());
  }
#line 12155 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 682:
#line 4690 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetEllipsis().get());
  }
#line 12163 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 684:
#line 4697 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].shadow_info)->length_vector.size() == 2) {
      scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
      // Negative values are not allowed for blur radius.
      if (length && length->value() < 0) {
        parser_impl->LogError((yylsp[0]), "negative values of blur radius are illegal");
        (yyvsp[-1].shadow_info)->error = true;
      }
      (yyvsp[-1].shadow_info)->length_vector.push_back(length);
    } else {
      (yyvsp[-1].shadow_info)->length_vector.push_back(
          MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    }
  }
#line 12182 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 685:
#line 4711 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::RGBAColorValue> color(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].shadow_info)->color) {
      (yyvsp[-1].shadow_info)->color = color;
    } else {
      parser_impl->LogError(
          (yylsp[0]), "color value declared twice in text shadow.");
      (yyvsp[-1].shadow_info)->error = true;
    }
  }
#line 12197 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 686:
#line 4724 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = new ShadowPropertyInfo();
  }
#line 12205 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 687:
#line 4727 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = (yyvsp[-1].shadow_info);
  }
#line 12213 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 688:
#line 4733 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<ShadowPropertyInfo> shadow_property_info((yyvsp[0].shadow_info));
    if (!shadow_property_info->IsShadowPropertyValid(kTextShadow)) {
      parser_impl->LogWarning((yylsp[0]), "invalid text shadow property.");
      (yyval.property_value) = NULL;
    } else {
      (yyval.property_value) = AddRef(new cssom::ShadowValue(
              shadow_property_info->length_vector, shadow_property_info->color,
              false));
    }
  }
#line 12229 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 689:
#line 4747 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_value)) {
      (yyval.property_list) = new cssom::PropertyListValue::Builder();
      (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    }
  }
#line 12240 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 690:
#line 4753 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    if ((yyval.property_list) && (yyvsp[0].property_value)) {
      (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    }
  }
#line 12251 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 691:
#line 4765 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_list)) {
      std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    }
  }
#line 12262 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 692:
#line 4771 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12270 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 694:
#line 4780 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12278 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 695:
#line 4783 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetUppercase().get());
  }
#line 12286 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 697:
#line 4794 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-15].transform_functions)->emplace_back(
        new cssom::MatrixFunction((yyvsp[-12].real), (yyvsp[-10].real), (yyvsp[-8].real), (yyvsp[-6].real), (yyvsp[-4].real), (yyvsp[-2].real)));
  }
#line 12295 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 698:
#line 4801 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::RotateFunction((yyvsp[-2].real)));
  }
#line 12303 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 699:
#line 4807 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back((yyvsp[-2].transform_function));
  }
#line 12311 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 700:
#line 4814 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::ScaleFunction((yyvsp[-2].real), 1.0f));
  }
#line 12319 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 701:
#line 4821 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::ScaleFunction(1.0f, (yyvsp[-2].real)));
  }
#line 12327 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 702:
#line 4829 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].property_value)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kXAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kYAxis,
          scoped_refptr<cssom::LengthValue>(
              new cssom::LengthValue(0, cssom::kPixelsUnit))));
    }
  }
#line 12342 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 703:
#line 4840 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-4].property_value) && (yyvsp[-2].property_value)) {
      (yyvsp[-7].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kXAxis, MakeScopedRefPtrAndRelease((yyvsp[-4].property_value))));
      (yyvsp[-7].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kYAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12355 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 704:
#line 4851 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].property_value)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kXAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12366 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 705:
#line 4860 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].property_value)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kYAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12377 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 706:
#line 4870 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].length)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kZAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].length))));
    }
  }
#line 12388 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 707:
#line 4883 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-4].transform_functions)->emplace_back(
        new cssom::CobaltUiNavFocusTransformFunction);
  }
#line 12397 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 708:
#line 4898 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-4].transform_functions)->emplace_back(
        new cssom::CobaltUiNavSpotlightTransformFunction);
  }
#line 12406 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 709:
#line 4907 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_functions) = new cssom::TransformFunctionListValue::Builder();
  }
#line 12414 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 710:
#line 4910 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_functions) = (yyvsp[-1].transform_functions);
  }
#line 12422 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 711:
#line 4919 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12430 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 712:
#line 4922 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TransformFunctionListValue::Builder>
        transform_functions((yyvsp[0].transform_functions));
    (yyval.property_value) = transform_functions->size() == 0u ? NULL :
            AddRef(new cssom::TransformFunctionListValue(
                std::move(*transform_functions)));
  }
#line 12442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 713:
#line 4929 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TransformFunctionListValue::Builder>
        transform_functions((yyvsp[-1].transform_functions));
    parser_impl->LogWarning((yylsp[0]), "invalid transform function");
    (yyval.property_value) = NULL;
  }
#line 12453 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 715:
#line 4939 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PositionParseStructure> position_info(
        new PositionParseStructure());
    position_info->PushBackElement(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    if (position_info->PushBackElement(MakeScopedRefPtrAndRelease((yyvsp[0].property_value))) &&
        position_info->IsPositionValidOnSizeTwo()) {
      (yyval.property_list) = new cssom::PropertyListValue::Builder(
              position_info->position_builder());
    } else {
      parser_impl->LogWarning((yylsp[0]), "invalid transform-origin value");
      (yyval.property_list) = NULL;
    }
  }
#line 12471 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 716:
#line 4958 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 12482 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 717:
#line 4964 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 12493 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 718:
#line 4970 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    if (property_value) {
      property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      (yyval.property_value) = NULL;
    }
  }
#line 12507 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 720:
#line 4985 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBottom().get());
  }
#line 12515 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 721:
#line 4988 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetTop().get());
  }
#line 12523 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 722:
#line 4991 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetMiddle().get());
  }
#line 12531 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 723:
#line 4994 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBaseline().get());
  }
#line 12539 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 725:
#line 5004 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCollapse().get());
  }
#line 12547 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 726:
#line 5007 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 12555 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 727:
#line 5010 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetVisible().get());
  }
#line 12563 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 729:
#line 5018 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time_list) = new cssom::TimeListValue::Builder();
    (yyval.time_list)->push_back(::base::TimeDelta::FromInternalValue((yyvsp[0].time)));
  }
#line 12572 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 730:
#line 5022 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time_list) = (yyvsp[-2].time_list);
    (yyval.time_list)->push_back(::base::TimeDelta::FromInternalValue((yyvsp[0].time)));
  }
#line 12581 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 731:
#line 5029 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ListValue<::base::TimeDelta>::Builder> time_list((yyvsp[0].time_list));
    (yyval.property_value) = time_list
         ? AddRef(new cssom::TimeListValue(std::move(time_list)))
         : NULL;
  }
#line 12592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 733:
#line 5040 "grammar.y" /* yacc.c:1646  */
    {
    // Default value is 'end'.
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kEnd;
  }
#line 12601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 734:
#line 5044 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kStart;
  }
#line 12609 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 735:
#line 5047 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kEnd;
  }
#line 12617 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 736:
#line 5054 "grammar.y" /* yacc.c:1646  */
    {
    float p1_x = (yyvsp[-7].real);
    float p1_y = (yyvsp[-5].real);
    float p2_x = (yyvsp[-3].real);
    float p2_y = (yyvsp[-1].real);

    if (p1_x < 0 || p1_x > 1 || p2_x < 0 || p2_x > 1) {
      parser_impl->LogError(
          (yylsp[-9]),
          "cubic-bezier control point x values must be in the range [0, 1].");
      // In the case of an error, return the ease function as a default.
      (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEase().get());
    } else {
      (yyval.timing_function) = AddRef(new cssom::CubicBezierTimingFunction(p1_x, p1_y, p2_x, p2_y));
    }
  }
#line 12638 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 737:
#line 5071 "grammar.y" /* yacc.c:1646  */
    {
    int number_of_steps = (yyvsp[-3].integer);
    if (number_of_steps <= 0) {
      parser_impl->LogError(
          (yylsp[-5]),
          "The steps() number of steps parameter must be greater than 0.");
      number_of_steps = 1;
    }
    (yyval.timing_function) = AddRef(new cssom::SteppingTimingFunction(number_of_steps, (yyvsp[-1].stepping_value_change_location)));
  }
#line 12653 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 738:
#line 5081 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseInOut().get());
  }
#line 12661 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 739:
#line 5084 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseIn().get());
  }
#line 12669 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 740:
#line 5087 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseOut().get());
  }
#line 12677 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 741:
#line 5090 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEase().get());
  }
#line 12685 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 742:
#line 5093 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetLinear().get());
  }
#line 12693 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 743:
#line 5096 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetStepEnd().get());
  }
#line 12701 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 744:
#line 5099 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetStepStart().get());
  }
#line 12709 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 745:
#line 5105 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function_list) = new cssom::TimingFunctionListValue::Builder();
    (yyval.timing_function_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].timing_function)));
  }
#line 12718 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 746:
#line 5110 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function_list) = (yyvsp[-2].timing_function_list);
    (yyval.timing_function_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].timing_function)));
  }
#line 12727 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 747:
#line 5117 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TimingFunctionListValue::Builder>
        timing_function_list((yyvsp[0].timing_function_list));
    (yyval.property_value) = timing_function_list
         ? AddRef(new cssom::TimingFunctionListValue(
               std::move(timing_function_list)))
         : NULL;
  }
#line 12740 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 750:
#line 5136 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 12748 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 751:
#line 5139 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetReverse().get());
  }
#line 12756 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 752:
#line 5142 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAlternate().get());
  }
#line 12764 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 753:
#line 5145 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAlternateReverse().get());
  }
#line 12772 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 754:
#line 5151 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12781 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 755:
#line 5156 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12790 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 756:
#line 5163 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> direction_list((yyvsp[0].property_list));
    (yyval.property_value) = direction_list
         ? AddRef(new cssom::PropertyListValue(std::move(direction_list)))
         : NULL;
  }
#line 12801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 758:
#line 5170 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-direction");
    (yyval.property_value) = NULL;
  }
#line 12811 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 760:
#line 5186 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12819 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 761:
#line 5189 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetForwards().get());
  }
#line 12827 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 762:
#line 5192 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBackwards().get());
  }
#line 12835 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 763:
#line 5195 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBoth().get());
  }
#line 12843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 764:
#line 5201 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12852 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 765:
#line 5206 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12861 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 766:
#line 5213 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> fill_mode_list((yyvsp[0].property_list));
    (yyval.property_value) = fill_mode_list
         ? AddRef(new cssom::PropertyListValue(std::move(fill_mode_list)))
         : NULL;
  }
#line 12872 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 768:
#line 5220 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-fill-mode");
    (yyval.property_value) = NULL;
  }
#line 12882 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 769:
#line 5231 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInfinite().get());
  }
#line 12890 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 770:
#line 5234 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 12898 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 771:
#line 5240 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12907 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 772:
#line 5245 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 773:
#line 5252 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> iteration_count_list((yyvsp[0].property_list));
    (yyval.property_value) = iteration_count_list
         ? AddRef(new cssom::PropertyListValue(std::move(iteration_count_list)))
         : NULL;
  }
#line 12927 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 775:
#line 5259 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-iteration-count");
    (yyval.property_value) = NULL;
  }
#line 12937 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 776:
#line 5269 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12945 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 777:
#line 5272 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 12953 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 778:
#line 5278 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 779:
#line 5283 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12971 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 780:
#line 5290 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> name_list((yyvsp[0].property_list));
    (yyval.property_value) = name_list
         ? AddRef(new cssom::PropertyListValue(std::move(name_list)))
         : NULL;
  }
#line 12982 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 782:
#line 5297 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-name");
    (yyval.property_value) = NULL;
  }
#line 12992 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 784:
#line 5313 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_animation)->name) {
      (yyvsp[-2].single_animation)->name = new cssom::StringValue((yyvsp[-1].string).ToString());
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "animation-name value declared twice in animation.");
    }
  }
#line 13005 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 785:
#line 5321 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->direction) {
      (yyvsp[-1].single_animation)->direction = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-direction value declared twice in animation.");
    }
  }
#line 13018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 786:
#line 5329 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->fill_mode) {
      (yyvsp[-1].single_animation)->fill_mode = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-fill-mode value declared twice in animation.");
    }
  }
#line 13031 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 787:
#line 5337 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->iteration_count) {
      (yyvsp[-1].single_animation)->iteration_count = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-iteration-count value declared twice in animation.");
    }
  }
#line 13044 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 788:
#line 5345 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->duration) {
      // The first time encountered sets the duration.
      (yyvsp[-1].single_animation)->duration = ::base::TimeDelta::FromInternalValue((yyvsp[0].time));
    } else if (!(yyvsp[-1].single_animation)->delay) {
      // The second time encountered sets the delay.
      (yyvsp[-1].single_animation)->delay = ::base::TimeDelta::FromInternalValue((yyvsp[0].time));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "time value declared too many times in animation.");
    }
  }
#line 13061 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 789:
#line 5357 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_animation)->timing_function) {
      (yyvsp[-2].single_animation)->timing_function = MakeScopedRefPtrAndRelease((yyvsp[-1].timing_function));
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "animation-timing-function value declared twice in animation.");
    }
  }
#line 13074 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 790:
#line 5365 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for animation");
    (yyvsp[-2].single_animation)->error = true;
  }
#line 13083 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 791:
#line 5372 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by single_animation_element
    (yyval.single_animation) = new SingleAnimationShorthand();
  }
#line 13092 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 793:
#line 5380 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent single_animation.
    // single_animation_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.single_animation) = (yyvsp[-1].single_animation);
  }
#line 13103 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 794:
#line 5389 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<SingleAnimationShorthand> single_animation((yyvsp[0].single_animation));
    std::unique_ptr<AnimationShorthandBuilder> animation_builder(
        new AnimationShorthandBuilder());

    if (!single_animation->error) {
      single_animation->ReplaceNullWithInitialValues();

      animation_builder->delay_list_builder->push_back(
          *single_animation->delay);
      animation_builder->direction_list_builder->push_back(
          single_animation->direction);
      animation_builder->duration_list_builder->push_back(
          *single_animation->duration);
      animation_builder->fill_mode_list_builder->push_back(
          single_animation->fill_mode);
      animation_builder->iteration_count_list_builder->push_back(
          single_animation->iteration_count);
      animation_builder->name_list_builder->push_back(
          single_animation->name);
      animation_builder->timing_function_list_builder->push_back(
          single_animation->timing_function);
    }

    (yyval.animation_builder) = animation_builder.release();
  }
#line 13134 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 795:
#line 5415 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<SingleAnimationShorthand> single_animation((yyvsp[0].single_animation));
    (yyval.animation_builder) = (yyvsp[-2].animation_builder);

    if (!single_animation->error) {
      single_animation->ReplaceNullWithInitialValues();

      (yyval.animation_builder)->delay_list_builder->push_back(*single_animation->delay);
      (yyval.animation_builder)->direction_list_builder->push_back(single_animation->direction);
      (yyval.animation_builder)->duration_list_builder->push_back(*single_animation->duration);
      (yyval.animation_builder)->fill_mode_list_builder->push_back(single_animation->fill_mode);
      (yyval.animation_builder)->iteration_count_list_builder->push_back(
          single_animation->iteration_count);
      (yyval.animation_builder)->name_list_builder->push_back(single_animation->name);
      (yyval.animation_builder)->timing_function_list_builder->push_back(
          single_animation->timing_function);
    }
  }
#line 13157 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 796:
#line 5438 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<AnimationShorthandBuilder> animation_builder((yyvsp[0].animation_builder));

    if (animation_builder->empty()) {
      YYERROR;
    }

    std::unique_ptr<AnimationShorthand> animation(new AnimationShorthand());

    animation->delay_list = new cssom::TimeListValue(
        std::move(animation_builder->delay_list_builder));
    animation->direction_list = new cssom::PropertyListValue(
        std::move(animation_builder->direction_list_builder));
    animation->duration_list = new cssom::TimeListValue(
        std::move(animation_builder->duration_list_builder));
    animation->fill_mode_list = new cssom::PropertyListValue(
        std::move(animation_builder->fill_mode_list_builder));
    animation->iteration_count_list = new cssom::PropertyListValue(
        std::move(animation_builder->iteration_count_list_builder));
    animation->name_list = new cssom::PropertyListValue(
        std::move(animation_builder->name_list_builder));
    animation->timing_function_list = new cssom::TimingFunctionListValue(
        std::move(animation_builder->timing_function_list_builder));

    (yyval.animation) = animation.release();
  }
#line 13188 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 797:
#line 5464 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that animation
    // is a shorthand for.
    std::unique_ptr<AnimationShorthand> animation(new AnimationShorthand());
    animation->delay_list = (yyvsp[0].property_value);
    animation->direction_list = (yyvsp[0].property_value);
    animation->duration_list = (yyvsp[0].property_value);
    animation->fill_mode_list = (yyvsp[0].property_value);
    animation->iteration_count_list = (yyvsp[0].property_value);
    animation->name_list = (yyvsp[0].property_value);
    animation->timing_function_list = (yyvsp[0].property_value);
    (yyval.animation) = animation.release();
  }
#line 13206 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 801:
#line 5494 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_name_list) = new cssom::PropertyKeyListValue::Builder();
    (yyval.property_name_list)->push_back((yyvsp[-1].property_key));
  }
#line 13215 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 802:
#line 5499 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyKeyListValue::Builder> property_name_list((yyvsp[-3].property_name_list));
    if (property_name_list) {
      property_name_list->push_back((yyvsp[-1].property_key));
    }
    (yyval.property_name_list) = property_name_list.release();
  }
#line 13227 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 803:
#line 5506 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[0]), "unsupported property value for animation");
    (yyval.property_name_list) = NULL;
  }
#line 13236 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 804:
#line 5515 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 13244 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 805:
#line 5518 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyKeyListValue::Builder> property_name_list((yyvsp[0].property_name_list));
    (yyval.property_value) = property_name_list
         ? AddRef(new cssom::PropertyKeyListValue(std::move(property_name_list)))
         : NULL;
  }
#line 13255 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 807:
#line 5531 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_transition)->property) {
      (yyvsp[-2].single_transition)->property = (yyvsp[-1].property_key);
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "transition-property value declared twice in transition.");
    }
  }
#line 13268 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 808:
#line 5539 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_transition)->property) {
      // We use cssom::kNoneProperty as a symbol that 'none' was specified
      // here and that the entire transition-property list value should be set
      // to the None keyword.
      (yyvsp[-2].single_transition)->property = cssom::kNoneProperty;
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "transition-property value declared twice in transition.");
    }
  }
#line 13284 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 809:
#line 5550 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_transition)->duration) {
      // The first time encountered sets the duration.
      (yyvsp[-1].single_transition)->duration = ::base::TimeDelta::FromInternalValue((yyvsp[0].time));
    } else if (!(yyvsp[-1].single_transition)->delay) {
      // The second time encountered sets the delay.
      (yyvsp[-1].single_transition)->delay = ::base::TimeDelta::FromInternalValue((yyvsp[0].time));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "time value declared twice in transition.");
    }
  }
#line 13301 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 810:
#line 5562 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_transition)->timing_function) {
      (yyvsp[-2].single_transition)->timing_function = MakeScopedRefPtrAndRelease((yyvsp[-1].timing_function));
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "transition-timing-function value declared twice in transition.");
    }
  }
#line 13314 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 811:
#line 5570 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for animation");
    (yyvsp[-2].single_transition)->error = true;
  }
#line 13323 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 812:
#line 5577 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by single_transition_element
    (yyval.single_transition) = new SingleTransitionShorthand();
  }
#line 13332 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 814:
#line 5585 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent single_transition.
    // single_transition_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.single_transition) = (yyvsp[-1].single_transition);
  }
#line 13343 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 815:
#line 5594 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<SingleTransitionShorthand> single_transition((yyvsp[0].single_transition));
    std::unique_ptr<TransitionShorthandBuilder> transition_builder(
        new TransitionShorthandBuilder());

    if (!single_transition->error) {
      single_transition->ReplaceNullWithInitialValues();

      transition_builder->property_list_builder->push_back(
          *single_transition->property);
      transition_builder->duration_list_builder->push_back(
          *single_transition->duration);
      transition_builder->timing_function_list_builder->push_back(
          single_transition->timing_function);
      transition_builder->delay_list_builder->push_back(
          *single_transition->delay);
    }

    (yyval.transition_builder) = transition_builder.release();
  }
#line 13368 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 816:
#line 5614 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<SingleTransitionShorthand> single_transition((yyvsp[0].single_transition));
    (yyval.transition_builder) = (yyvsp[-2].transition_builder);

    if (!single_transition->error) {
      single_transition->ReplaceNullWithInitialValues();

      (yyval.transition_builder)->property_list_builder->push_back(*single_transition->property);
      (yyval.transition_builder)->duration_list_builder->push_back(*single_transition->duration);
      (yyval.transition_builder)->timing_function_list_builder->push_back(
          single_transition->timing_function);
      (yyval.transition_builder)->delay_list_builder->push_back(*single_transition->delay);
    }
  }
#line 13387 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 817:
#line 5633 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<TransitionShorthandBuilder> transition_builder((yyvsp[0].transition_builder));

    // Before proceeding, check that 'none' is not specified if the
    // number of transition statements is larger than 1, as per the
    // specification.
    const cssom::PropertyKeyListValue::Builder& property_list_builder =
        *(transition_builder->property_list_builder);
    if (property_list_builder.size() > 1) {
      for (int i = 0; i < static_cast<int>(property_list_builder.size()); ++i) {
        if (property_list_builder[i] == cssom::kNoneProperty) {
          parser_impl->LogWarning(
              (yylsp[0]), "If 'none' is specified, transition can only have one item.");
          break;
        }
      }
    }

    std::unique_ptr<TransitionShorthand> transition(new TransitionShorthand());

    if (property_list_builder.empty() ||
        (property_list_builder.size() == 1 &&
         property_list_builder[0] == cssom::kNoneProperty)) {
      transition->property_list = cssom::KeywordValue::GetNone();
    } else {
      transition->property_list = new cssom::PropertyKeyListValue(
          std::move(transition_builder->property_list_builder));
    }
    if (!transition_builder->duration_list_builder->empty()) {
      transition->duration_list = new cssom::TimeListValue(
          std::move(transition_builder->duration_list_builder));
    }
    if (!transition_builder->timing_function_list_builder->empty()) {
      transition->timing_function_list = new cssom::TimingFunctionListValue(
          std::move(transition_builder->timing_function_list_builder));
    }
    if (!transition_builder->delay_list_builder->empty()) {
      transition->delay_list = new cssom::TimeListValue(
          std::move(transition_builder->delay_list_builder));
    }

    (yyval.transition) = transition.release();
  }
#line 13435 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 818:
#line 5676 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that transition
    // is a shorthand for.
    std::unique_ptr<TransitionShorthand> transition(new TransitionShorthand());
    transition->property_list = (yyvsp[0].property_value);
    transition->duration_list = (yyvsp[0].property_value);
    transition->timing_function_list = (yyvsp[0].property_value);
    transition->delay_list = (yyvsp[0].property_value);
    (yyval.transition) = transition.release();
  }
#line 13450 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 819:
#line 5689 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 13461 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 821:
#line 5699 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(new cssom::UnicodeRangeValue((yyvsp[-1].integer_pair).first, (yyvsp[-1].integer_pair).second));
  }
#line 13470 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 822:
#line 5704 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-3].property_list);
    (yyval.property_list)->push_back(new cssom::UnicodeRangeValue((yyvsp[-1].integer_pair).first, (yyvsp[-1].integer_pair).second));
  }
#line 13479 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 823:
#line 5713 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 13487 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 824:
#line 5716 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNowrap().get());
  }
#line 13495 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 825:
#line 5719 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPre().get());
  }
#line 13503 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 826:
#line 5722 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPreLine().get());
  }
#line 13511 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 827:
#line 5725 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPreWrap().get());
  }
#line 13519 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 832:
#line 5745 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 13527 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 835:
#line 5755 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 13535 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 838:
#line 5763 "grammar.y" /* yacc.c:1646  */
    { (yyval.important) = false; }
#line 13541 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 839:
#line 5764 "grammar.y" /* yacc.c:1646  */
    { (yyval.important) = true; }
#line 13547 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 840:
#line 5768 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::IntegerValue((yyvsp[0].integer)));
  }
#line 13555 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 843:
#line 5780 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlexStart().get());
  }
#line 13563 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 844:
#line 5783 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlexEnd().get());
  }
#line 13571 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 845:
#line 5786 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 13579 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 846:
#line 5793 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSpaceBetween().get());
  }
#line 13587 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 847:
#line 5796 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSpaceAround().get());
  }
#line 13595 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 848:
#line 5803 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBaseline().get());
  }
#line 13603 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 849:
#line 5806 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStretch().get());
  }
#line 13611 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 855:
#line 5826 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStretch().get());
  }
#line 13619 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 860:
#line 5845 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 13627 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 864:
#line 5855 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContent().get());
  }
#line 13635 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 865:
#line 5858 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 13643 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 870:
#line 5878 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 13651 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 871:
#line 5881 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 13659 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 872:
#line 5888 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContent().get());
  }
#line 13667 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 873:
#line 5891 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 13675 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 874:
#line 5894 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 13683 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 875:
#line 5902 "grammar.y" /* yacc.c:1646  */
    {
    // One single flex property element as a flex-basis value.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = cssom::KeywordValue::GetInitial();
    flex->shrink = cssom::KeywordValue::GetInitial();
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13696 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 876:
#line 5910 "grammar.y" /* yacc.c:1646  */
    {
    // Shorthand 'flex: <positive number>' expands to
    // 'flex: <positive-number> 1 0'.
    //   https://www.w3.org/TR/css-flexbox-1/#flex-common
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[0].real));
    flex->shrink = new cssom::NumberValue(1);
    flex->basis = new cssom::LengthValue(0, cssom::kPixelsUnit);
    (yyval.flex_shorthand) = flex.release();
  }
#line 13711 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 877:
#line 5920 "grammar.y" /* yacc.c:1646  */
    {
    // The keyword auto expands to 1 1 auto.
    //   https://www.w3.org/TR/css-flexbox-1/#flex-common
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue(1);
    flex->shrink = new cssom::NumberValue(1);
    flex->basis = cssom::KeywordValue::GetAuto();
    (yyval.flex_shorthand) = flex.release();
  }
#line 13725 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 878:
#line 5929 "grammar.y" /* yacc.c:1646  */
    {
    // The keyword none expands to 0 0 auto.
    //   https://www.w3.org/TR/css-flexbox-1/#valdef-flex-none
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue(0);
    flex->shrink = new cssom::NumberValue(0);
    flex->basis = cssom::KeywordValue::GetAuto();
    (yyval.flex_shorthand) = flex.release();
  }
#line 13739 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 879:
#line 5941 "grammar.y" /* yacc.c:1646  */
    {
    // Two flex factors.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->shrink = new cssom::NumberValue((yyvsp[0].real));
    // When omitted from the flex shorthand, flex-basis specified value is 0.
    //  https://www.w3.org/TR/css-flexbox-1/#valdef-flex-flex-basis
    flex->basis = new cssom::LengthValue(0, cssom::kPixelsUnit);
    (yyval.flex_shorthand) = flex.release();
  }
#line 13754 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 880:
#line 5951 "grammar.y" /* yacc.c:1646  */
    {
    // One flex factor and one flex basis.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13766 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 881:
#line 5958 "grammar.y" /* yacc.c:1646  */
    {
    // One flex basis and one flex factor.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[0].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13778 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 882:
#line 5968 "grammar.y" /* yacc.c:1646  */
    {
    // Two flex factors and a flex basis.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-2].real));
    flex->shrink= new cssom::NumberValue((yyvsp[-1].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13791 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 883:
#line 5976 "grammar.y" /* yacc.c:1646  */
    {
    // One flex basis and two flex factors.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->shrink= new cssom::NumberValue((yyvsp[0].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13804 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 884:
#line 5984 "grammar.y" /* yacc.c:1646  */
    {
    // A unitless zero that is not already preceded by two flex factors must be
    // interpreted as a flex factor.
    //   https://www.w3.org/TR/css-flexbox-1/#flex-property
    if ((yyvsp[0].real) != 0) {
      parser_impl->LogError(
          (yylsp[-2]), "non-zero flex basis is not allowed without unit identifier");
      YYERROR;
    }
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-2].real));
    flex->shrink= new cssom::NumberValue((yyvsp[-1].real));
    flex->basis = new cssom::LengthValue((yyvsp[0].real), cssom::kPixelsUnit);
    (yyval.flex_shorthand) = flex.release();
  }
#line 13824 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 885:
#line 6002 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<FlexShorthand> flex((yyvsp[0].flex_shorthand));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13833 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 886:
#line 6006 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_shorthand) = (yyvsp[0].flex_shorthand);
  }
#line 13841 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 888:
#line 6010 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex is a
    // shorthand for.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = (yyvsp[0].property_value);
    flex->shrink= (yyvsp[0].property_value);
    flex->basis = (yyvsp[0].property_value);
    (yyval.flex_shorthand) = flex.release();
  }
#line 13855 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 889:
#line 6025 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 13863 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 891:
#line 6034 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::IntegerValue((yyvsp[0].integer)));
  }
#line 13871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 893:
#line 6044 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRow().get());
  }
#line 13879 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 894:
#line 6047 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRowReverse().get());
  }
#line 13887 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 895:
#line 6050 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetColumn().get());
  }
#line 13895 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 896:
#line 6053 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetColumnReverse().get());
  }
#line 13903 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 899:
#line 6068 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> direction(
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    if (!(yyvsp[-1].flex_flow_shorthand)->direction) {
      (yyvsp[-1].flex_flow_shorthand)->direction = direction;
    } else {
      parser_impl->LogError((yylsp[0]), "flex-direction value declared twice in flex.");
      (yyvsp[-1].flex_flow_shorthand)->error = true;
    }
  }
#line 13918 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 900:
#line 6078 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> wrap(
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    if (!(yyvsp[-1].flex_flow_shorthand)->wrap) {
      (yyvsp[-1].flex_flow_shorthand)->wrap = wrap;
    } else {
      parser_impl->LogError((yylsp[0]), "flex-wrap value declared twice in flex.");
      (yyvsp[-1].flex_flow_shorthand)->error = true;
    }
  }
#line 13933 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 901:
#line 6091 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_flow_shorthand) = new FlexFlowShorthand();
  }
#line 13941 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 902:
#line 6094 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_flow_shorthand) = (yyvsp[-1].flex_flow_shorthand);
  }
#line 13949 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 904:
#line 6103 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex_ flow is
    // a shorthand for.
    std::unique_ptr<FlexFlowShorthand> flex_flow(new FlexFlowShorthand());
    flex_flow->direction = (yyvsp[0].property_value);
    flex_flow->wrap = (yyvsp[0].property_value);
    (yyval.flex_flow_shorthand) = flex_flow.release();
  }
#line 13962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 905:
#line 6117 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNowrap().get());
  }
#line 13970 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 906:
#line 6120 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetWrap().get());
  }
#line 13978 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 907:
#line 6123 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetWrapReverse().get());
  }
#line 13986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 910:
#line 6144 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kAllProperty;
  }
#line 13994 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 911:
#line 6147 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBackgroundColorProperty;
  }
#line 14002 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 912:
#line 6150 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderBottomColorProperty;
  }
#line 14010 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 913:
#line 6153 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderLeftColorProperty;
  }
#line 14018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 914:
#line 6156 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderRightColorProperty;
  }
#line 14026 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 915:
#line 6159 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderTopColorProperty;
  }
#line 14034 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 916:
#line 6162 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kColorProperty;
  }
#line 14042 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 917:
#line 6165 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOpacityProperty;
  }
#line 14050 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 918:
#line 6168 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOutlineColorProperty;
  }
#line 14058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 919:
#line 6171 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOutlineWidthProperty;
  }
#line 14066 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 920:
#line 6174 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kTransformProperty;
  }
#line 14074 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 921:
#line 6187 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_declaration) = NULL; }
#line 14080 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 922:
#line 6189 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14090 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 923:
#line 6195 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignItemsProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14100 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 924:
#line 6201 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignSelfProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14110 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 925:
#line 6207 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDelayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14120 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 926:
#line 6213 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDirectionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14130 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 927:
#line 6219 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDurationProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14140 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 928:
#line 6225 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationFillModeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14150 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 929:
#line 6231 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationIterationCountProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14160 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 930:
#line 6237 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationNameProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14170 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 931:
#line 6243 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationTimingFunctionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14180 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 932:
#line 6249 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<AnimationShorthand> animation((yyvsp[-1].animation));
    DCHECK(animation);

    std::unique_ptr<PropertyDeclaration> property_declaration(
        new PropertyDeclaration((yyvsp[0].important)));

    // Unpack the animation shorthand property values.
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationDelayProperty,
            animation->delay_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationDirectionProperty,
            animation->direction_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationDurationProperty,
            animation->duration_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationFillModeProperty,
            animation->fill_mode_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationIterationCountProperty,
            animation->iteration_count_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationNameProperty,
            animation->name_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kAnimationTimingFunctionProperty,
            animation->timing_function_list));

    (yyval.property_declaration) = property_declaration.release();
  }
#line 14224 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 933:
#line 6289 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> background((yyvsp[-1].background_shorthand_layer));
    if (background && !background->error) {
      background->ReplaceNullWithInitialValues();
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack the background shorthand property values.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBackgroundColorProperty,
              background->background_color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBackgroundImageProperty,
              background->background_image));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBackgroundPositionProperty,
              background->background_position));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBackgroundRepeatProperty,
              background->background_repeat));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBackgroundSizeProperty,
              background->background_size));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 14263 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 934:
#line 6324 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14273 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 935:
#line 6330 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundImageProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14283 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 936:
#line 6336 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundPositionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14293 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 937:
#line 6342 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundRepeatProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14303 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 938:
#line 6348 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundSizeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14313 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 939:
#line 6354 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> border((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(border);
    if (!border->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border color.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftColorProperty, border->color));

      // Unpack border style.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftStyleProperty, border->style));

      // Unpack border width.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopWidthProperty, border->width));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightWidthProperty, border->width));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomWidthProperty, border->width));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftWidthProperty, border->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid border");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14373 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 940:
#line 6410 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomLeftRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14383 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 941:
#line 6416 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomRightRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14393 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 942:
#line 6422 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> border((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(border);
    if (!border->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border bottom.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomWidthProperty, border->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid border-bottom");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14422 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 943:
#line 6447 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14432 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 944:
#line 6453 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 945:
#line 6459 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14452 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 946:
#line 6465 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> property_list_value(
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    if (property_list_value) {
      BorderShorthandToLonghand shorthand_to_longhand;
      shorthand_to_longhand.Assign4BordersBasedOnPropertyList(
            property_list_value);

      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border color.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopColorProperty,
              shorthand_to_longhand.border_top));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightColorProperty,
              shorthand_to_longhand.border_right));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomColorProperty,
              shorthand_to_longhand.border_bottom));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftColorProperty,
              shorthand_to_longhand.border_left));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 14491 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 947:
#line 6500 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> border((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(border);
    if (!border->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border left.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftWidthProperty, border->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid border-left");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14520 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 948:
#line 6525 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14530 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 949:
#line 6531 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14540 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 950:
#line 6537 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14550 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 951:
#line 6543 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> property_list_value(
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    if (property_list_value) {
      BorderShorthandToLonghand shorthand_to_longhand;
      shorthand_to_longhand.Assign4BordersBasedOnPropertyList(
            property_list_value);

      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border radius.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopLeftRadiusProperty,
              shorthand_to_longhand.border_top));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopRightRadiusProperty,
              shorthand_to_longhand.border_right));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomRightRadiusProperty,
              shorthand_to_longhand.border_bottom));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomLeftRadiusProperty,
              shorthand_to_longhand.border_left));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 14589 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 952:
#line 6578 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> border((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(border);
    if (!border->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border right.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightWidthProperty, border->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid border-right");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14618 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 953:
#line 6603 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14628 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 954:
#line 6609 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14638 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 955:
#line 6615 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14648 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 956:
#line 6621 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> property_list_value(
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    if (property_list_value) {
      BorderShorthandToLonghand shorthand_to_longhand;
      shorthand_to_longhand.Assign4BordersBasedOnPropertyList(
            property_list_value);

      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border style.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopStyleProperty,
              shorthand_to_longhand.border_top));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderRightStyleProperty,
              shorthand_to_longhand.border_right));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderBottomStyleProperty,
              shorthand_to_longhand.border_bottom));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderLeftStyleProperty,
              shorthand_to_longhand.border_left));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 14687 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 957:
#line 6656 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> border((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(border);
    if (!border->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack border top.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopColorProperty, border->color));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopStyleProperty, border->style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kBorderTopWidthProperty, border->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid border-right");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14716 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 958:
#line 6681 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14726 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 959:
#line 6687 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopLeftRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14736 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 960:
#line 6693 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopRightRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14746 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 961:
#line 6699 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14756 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 962:
#line 6705 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14766 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 963:
#line 6711 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> property_list_value(
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
      if (property_list_value) {
        BorderShorthandToLonghand shorthand_to_longhand;
        shorthand_to_longhand.Assign4BordersBasedOnPropertyList(
            property_list_value);

        std::unique_ptr<PropertyDeclaration> property_declaration(
            new PropertyDeclaration((yyvsp[0].important)));

        // Unpack border width.
        property_declaration->property_values.push_back(
            PropertyDeclaration::PropertyKeyValuePair(
                cssom::kBorderTopWidthProperty,
                shorthand_to_longhand.border_top));
        property_declaration->property_values.push_back(
            PropertyDeclaration::PropertyKeyValuePair(
                cssom::kBorderRightWidthProperty,
                shorthand_to_longhand.border_right));
        property_declaration->property_values.push_back(
            PropertyDeclaration::PropertyKeyValuePair(
                cssom::kBorderBottomWidthProperty,
                shorthand_to_longhand.border_bottom));
        property_declaration->property_values.push_back(
            PropertyDeclaration::PropertyKeyValuePair(
                cssom::kBorderLeftWidthProperty,
                shorthand_to_longhand.border_left));

        (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 14805 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 964:
#line 6746 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14815 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 965:
#line 6752 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBoxShadowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14825 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 966:
#line 6758 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14835 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 967:
#line 6764 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14845 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 968:
#line 6770 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kDisplayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14855 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 969:
#line 6776 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFilterProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 970:
#line 6782 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<FlexShorthand> flex((yyvsp[-1].flex_shorthand));
    DCHECK(flex);
    if (!flex->error) {
      flex->ReplaceNullWithInitialValues();
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack flex.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFlexGrowProperty, flex->grow));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFlexShrinkProperty, flex->shrink));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFlexBasisProperty, flex->basis));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid flex");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14895 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 971:
#line 6808 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexBasisProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14905 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 972:
#line 6814 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexDirectionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14915 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 973:
#line 6820 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<FlexFlowShorthand> flex_flow((yyvsp[-1].flex_flow_shorthand));
    DCHECK(flex_flow);
    if (!flex_flow->error) {
      flex_flow->ReplaceNullWithInitialValues();
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack flex-flow.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFlexDirectionProperty, flex_flow->direction));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFlexWrapProperty, flex_flow->wrap));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid flex-flow");
      (yyval.property_declaration) = NULL;
    }
  }
#line 14942 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 974:
#line 6843 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexGrowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14952 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 975:
#line 6849 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexShrinkProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 976:
#line 6855 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14972 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 977:
#line 6860 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<FontShorthand> font((yyvsp[-1].font));
    DCHECK(font);

    std::unique_ptr<PropertyDeclaration> property_declaration(
        new PropertyDeclaration((yyvsp[0].important)));

    if (!font->error) {
      font->ReplaceNullWithInitialValues();

      // Unpack the font shorthand property values.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFontStyleProperty,
              font->font_style));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFontWeightProperty,
              font->font_weight));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFontSizeProperty,
              font->font_size));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kFontFamilyProperty,
              font->font_family));
    }

    (yyval.property_declaration) = property_declaration.release();
  }
#line 15008 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 978:
#line 6892 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontFamilyProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 979:
#line 6898 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontSizeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15028 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 980:
#line 6904 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15038 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 981:
#line 6910 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontWeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15048 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 982:
#line 6916 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 983:
#line 6922 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kIntersectionObserverRootMarginProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15068 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 984:
#line 6928 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kJustifyContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15078 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 985:
#line 6934 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15088 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 986:
#line 6940 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kLineHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15098 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 987:
#line 6946 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15108 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 988:
#line 6952 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15118 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 989:
#line 6958 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15128 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 990:
#line 6964 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15138 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 991:
#line 6969 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<MarginOrPaddingShorthand> margin((yyvsp[-1].margin_or_padding_shorthand));
    if (margin) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kMarginTopProperty, margin->top));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kMarginRightProperty, margin->right));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kMarginBottomProperty, margin->bottom));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kMarginLeftProperty, margin->left));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 15167 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 992:
#line 6994 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMaxHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 993:
#line 7000 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMaxWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15187 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 994:
#line 7006 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMinHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15197 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 995:
#line 7012 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMinWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15207 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 996:
#line 7018 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOpacityProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 997:
#line 7024 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOrderProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15227 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 998:
#line 7030 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BorderOrOutlineShorthand> outline((yyvsp[-1].border_or_outline_shorthand));
    DCHECK(outline);
    if (!outline->error) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack outline color.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kOutlineColorProperty, outline->color));

      // Unpack outline style.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kOutlineStyleProperty, outline->style));

      // Unpack outline width.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kOutlineWidthProperty, outline->width));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid outline");
      (yyval.property_declaration) = NULL;
    }
  }
#line 15260 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 999:
#line 7059 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15270 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1000:
#line 7065 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15280 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1001:
#line 7071 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15290 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1002:
#line 7077 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15300 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1003:
#line 7083 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15310 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1004:
#line 7089 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15320 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1005:
#line 7095 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15330 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1006:
#line 7101 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15340 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1007:
#line 7107 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15350 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1008:
#line 7113 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<MarginOrPaddingShorthand> padding((yyvsp[-1].margin_or_padding_shorthand));
    if (padding) {
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kPaddingTopProperty, padding->top));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kPaddingRightProperty, padding->right));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kPaddingBottomProperty, padding->bottom));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kPaddingLeftProperty, padding->left));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      (yyval.property_declaration) = NULL;
    }
  }
#line 15379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1009:
#line 7138 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPointerEventsProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15389 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1010:
#line 7144 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPositionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15399 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1011:
#line 7150 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15409 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1012:
#line 7156 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kSrcProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15419 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1013:
#line 7162 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextAlignProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15429 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1014:
#line 7168 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextIndentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15439 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1015:
#line 7174 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<TextDecorationShorthand> text_decoration((yyvsp[-1].text_decoration_shorthand));
    DCHECK(text_decoration);
    if (!text_decoration->error) {
      text_decoration->ReplaceNullWithInitialValues();
      std::unique_ptr<PropertyDeclaration> property_declaration(
          new PropertyDeclaration((yyvsp[0].important)));

      // Unpack text-decoration.
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kTextDecorationLineProperty, text_decoration->line));
      property_declaration->property_values.push_back(
          PropertyDeclaration::PropertyKeyValuePair(
              cssom::kTextDecorationColorProperty, text_decoration->color));

      (yyval.property_declaration) = property_declaration.release();
    } else {
      parser_impl->LogWarning((yylsp[-4]), "invalid text-decoration");
      (yyval.property_declaration) = NULL;
    }
  }
#line 15466 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1016:
#line 7197 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextDecorationColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15476 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1017:
#line 7203 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextDecorationLineProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15486 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1018:
#line 7209 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextOverflowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1019:
#line 7215 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextShadowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15506 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1020:
#line 7221 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextTransformProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15516 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1021:
#line 7227 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15526 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1022:
#line 7233 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransformProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15536 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1023:
#line 7239 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransformOriginProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15546 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1024:
#line 7245 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<TransitionShorthand> transition((yyvsp[-1].transition));
    DCHECK(transition);

    std::unique_ptr<PropertyDeclaration> property_declaration(
        new PropertyDeclaration((yyvsp[0].important)));

    // Unpack the transition shorthand property values.
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kTransitionPropertyProperty,
            transition->property_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kTransitionDurationProperty,
            transition->duration_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kTransitionTimingFunctionProperty,
            transition->timing_function_list));
    property_declaration->property_values.push_back(
        PropertyDeclaration::PropertyKeyValuePair(
            cssom::kTransitionDelayProperty,
            transition->delay_list));

    (yyval.property_declaration) = property_declaration.release();
  }
#line 15578 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1025:
#line 7273 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionDelayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15588 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1026:
#line 7279 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionDurationProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15598 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1027:
#line 7285 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionPropertyProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15608 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1028:
#line 7291 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionTimingFunctionProperty,
                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15618 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1029:
#line 7297 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kUnicodeRangeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15628 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1030:
#line 7303 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kVerticalAlignProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15638 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1031:
#line 7309 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kVisibilityProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15648 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1032:
#line 7315 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kWhiteSpaceProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15658 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1033:
#line 7321 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15668 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1034:
#line 7327 "grammar.y" /* yacc.c:1646  */
    {
    // NOTE: word-wrap is treated as an alias for overflow-wrap
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15679 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1035:
#line 7334 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kZIndexProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15689 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1036:
#line 7339 "grammar.y" /* yacc.c:1646  */
    {
    std::string property_name = (yyvsp[-3].string).ToString();
    DCHECK_GT(property_name.size(), 0U);

    // Do not warn about non-standard or non-WebKit properties.
    if (property_name[0] != '-') {
      ::base::AutoLock lock(non_trivial_static_fields.Get().lock);
      ::base::hash_set<std::string>& properties_warned_about =
          non_trivial_static_fields.Get().properties_warned_about;

      if (properties_warned_about.find(property_name) ==
          properties_warned_about.end()) {
        properties_warned_about.insert(property_name);
        parser_impl->LogWarning((yylsp[-3]), "unsupported property " + property_name);
      }
    }

    (yyval.property_declaration) = NULL;
  }
#line 15713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1037:
#line 7358 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[0]), "invalid declaration");
    (yyval.property_declaration) = NULL;
  }
#line 15722 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1039:
#line 7369 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_declaration_data) = AddRef(new cssom::CSSDeclaredStyleData());

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.style_declaration_data));
      for (size_t i = 0;
           i < property_declaration->unsupported_property_keys.size(); ++i) {
        std::string unsupported_property_name =
            cssom::GetPropertyName(
                property_declaration->unsupported_property_keys[i]);
        parser_impl->LogWarning(
            (yylsp[0]), "unsupported style property: "  + unsupported_property_name);
      }
    }
  }
#line 15743 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1040:
#line 7385 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_declaration_data) = (yyvsp[-2].style_declaration_data);

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.style_declaration_data));
      for (size_t i = 0;
           i < property_declaration->unsupported_property_keys.size(); ++i) {
        std::string unsupported_property_name =
            cssom::GetPropertyName(
                property_declaration->unsupported_property_keys[i]);
        parser_impl->LogWarning(
            (yylsp[-2]), "unsupported style property: "  + unsupported_property_name);
      }
    }
  }
#line 15764 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1041:
#line 7404 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.font_face_declaration_data) = AddRef(new cssom::CSSFontFaceDeclarationData());

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.font_face_declaration_data));
    }
  }
#line 15777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1042:
#line 7412 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.font_face_declaration_data) = (yyvsp[-2].font_face_declaration_data);

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.font_face_declaration_data));
    }
  }
#line 15790 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1043:
#line 7423 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_declaration) = AddRef(new cssom::CSSRuleStyleDeclaration(
             MakeScopedRefPtrAndRelease((yyvsp[-2].style_declaration_data)), parser_impl->css_parser()));
  }
#line 15799 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1044:
#line 7430 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = (yyvsp[-2].rule_list);
  }
#line 15807 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1045:
#line 7433 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = AddRef(new cssom::CSSRuleList());
  }
#line 15815 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1046:
#line 7446 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::Selectors> selectors((yyvsp[-1].selectors));
    scoped_refptr<cssom::CSSRuleStyleDeclaration> style =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration));

    if (selectors) {
      (yyval.style_rule) = AddRef(new cssom::CSSStyleRule(std::move(*selectors), style));
    } else {
      (yyval.style_rule) = NULL;
    }
  }
#line 15831 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1048:
#line 7464 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSRuleStyleDeclaration> unused_style =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration));
    parser_impl->LogWarning((yylsp[-1]), "invalid qualified rule");
    (yyval.style_rule) = NULL;
  }
#line 15842 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1049:
#line 7473 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-1]), "invalid rule " + (yyvsp[-1].string).ToString());
  }
#line 15850 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1050:
#line 7476 "grammar.y" /* yacc.c:1646  */
    {
    // Do not warn about other browser at rules.
  }
#line 15858 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1051:
#line 7484 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = NULL; }
#line 15864 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1052:
#line 7485 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].style_rule); }
#line 15870 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1053:
#line 7486 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].font_face_rule); }
#line 15876 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1054:
#line 7487 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].media_rule); }
#line 15882 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1055:
#line 7488 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].keyframes_rule); }
#line 15888 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1056:
#line 7489 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = NULL; }
#line 15894 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1057:
#line 7493 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = AddRef(new cssom::CSSRuleList());
  }
#line 15902 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1058:
#line 7496 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = (yyvsp[-1].rule_list);
    scoped_refptr<cssom::CSSRule> css_rule =
        MakeScopedRefPtrAndRelease((yyvsp[0].css_rule));
    if (css_rule) {
      (yyval.rule_list)->AppendCSSRule(css_rule);
    }
  }
#line 15915 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1059:
#line 7514 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_sheet) = AddRef(new cssom::CSSStyleSheet(parser_impl->css_parser()));
    (yyval.style_sheet)->set_css_rules(MakeScopedRefPtrAndRelease((yyvsp[0].rule_list)));
  }
#line 15924 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1060:
#line 7524 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSStyleSheet> style_sheet =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_sheet));
    parser_impl->set_style_sheet(style_sheet);
  }
#line 15934 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1061:
#line 7530 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::MediaList> media_list =
        MakeScopedRefPtrAndRelease((yyvsp[0].media_list));
    parser_impl->set_media_list(media_list);
  }
#line 15944 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1062:
#line 7536 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::MediaQuery> media_query =
        MakeScopedRefPtrAndRelease((yyvsp[0].media_query));
    parser_impl->set_media_query(media_query);
  }
#line 15954 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1063:
#line 7542 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSRule> rule(MakeScopedRefPtrAndRelease((yyvsp[0].css_rule)));
    parser_impl->set_rule(rule);
  }
#line 15963 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1064:
#line 7548 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSDeclaredStyleData> declaration_data =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration_data));
    parser_impl->set_style_declaration_data(declaration_data);
  }
#line 15973 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1065:
#line 7555 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSFontFaceDeclarationData> declaration_data =
        MakeScopedRefPtrAndRelease((yyvsp[0].font_face_declaration_data));
    parser_impl->set_font_face_declaration_data(declaration_data);
  }
#line 15983 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1066:
#line 7561 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration != NULL) {
      if (property_declaration->property_values.size() != 1) {
        parser_impl->LogError(
            (yylsp[-2]), "Cannot parse shorthand properties as single property values.");
      } else {
        if (property_declaration->is_important) {
          parser_impl->LogWarning(
            (yylsp[-2]),
            "!important is not allowed when setting single property values.");
        } else {
          if (!property_declaration->property_values[0].value) {
            parser_impl->LogWarning(
              (yylsp[-2]), "declaration must have a property value.");
          } else {
            parser_impl->set_property_value(
                property_declaration->property_values[0].value);
          }
        }
      }
    }
  }
#line 16011 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1067:
#line 7588 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration != NULL) {
      if (property_declaration->is_important) {
        parser_impl->LogError(
            (yylsp[-2]), "!important is not allowed when setting single property value");
      } else {
        DCHECK(parser_impl->into_declaration_data());
        property_declaration->Apply(
            parser_impl->into_declaration_data());
      }
    }
  }
#line 16029 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1068:
#line 7606 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 16037 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1069:
#line 7609 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::FilterFunctionListValue::Builder> property_value((yyvsp[0].cobalt_mtm_filter_functions));
    (yyval.property_value) = AddRef(new cssom::FilterFunctionListValue(std::move(*property_value)));
  }
#line 16046 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1071:
#line 7618 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_filter_functions) = new cssom::FilterFunctionListValue::Builder();
    (yyval.cobalt_mtm_filter_functions)->emplace_back((yyvsp[0].filter_function));
  }
#line 16055 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1072:
#line 7627 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.filter_function) = (yyvsp[0].filter_function);
  }
#line 16063 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1073:
#line 7636 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::MapToMeshFunction::MeshSpec>
        mesh_spec((yyvsp[-8].cobalt_map_to_mesh_spec));
    std::unique_ptr<glm::mat4> transform((yyvsp[-3].matrix4x4));
    scoped_refptr<cssom::KeywordValue> stereo_mode =
        MakeScopedRefPtrAndRelease((yyvsp[-2].stereo_mode));

    if (!parser_impl->supports_map_to_mesh()) {
      YYERROR;
    } else {
      (yyval.filter_function) = new cssom::MapToMeshFunction(
          std::move(mesh_spec),
          (yyvsp[-6].real),
          (yyvsp[-5].real),
          *transform,
          stereo_mode);
    }
  }
#line 16086 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1074:
#line 7658 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::KeywordValue> stereo_mode =
        MakeScopedRefPtrAndRelease((yyvsp[-2].stereo_mode));

    if (!parser_impl->supports_map_to_mesh_rectangular()) {
      YYERROR;
    } else {
      (yyval.filter_function) = new cssom::MapToMeshFunction(cssom::MapToMeshFunction::kRectangular,
                                        stereo_mode);
    }
  }
#line 16102 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1075:
#line 7672 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_map_to_mesh_spec) = new cssom::MapToMeshFunction::MeshSpec(
        cssom::MapToMeshFunction::kEquirectangular);
  }
#line 16111 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1076:
#line 7676 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> url = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    std::unique_ptr<cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder>
        resolution_matched_mesh_urls((yyvsp[0].cobalt_mtm_resolution_matched_meshes));

    (yyval.cobalt_map_to_mesh_spec) = new cssom::MapToMeshFunction::MeshSpec(
        cssom::MapToMeshFunction::kUrls,
        url,
        std::move(*resolution_matched_mesh_urls));
  }
#line 16126 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1079:
#line 7694 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_meshes) = new cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder();
  }
#line 16134 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1080:
#line 7698 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_meshes) = (yyvsp[-1].cobalt_mtm_resolution_matched_meshes);
    (yyval.cobalt_mtm_resolution_matched_meshes)->emplace_back((yyvsp[0].cobalt_mtm_resolution_matched_mesh));
  }
#line 16143 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1081:
#line 7705 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_mesh) = new cssom::MapToMeshFunction::ResolutionMatchedMesh((yyvsp[-2].integer), (yyvsp[-1].integer),
      MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 16152 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1082:
#line 7718 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<std::vector<float> > matrix((yyvsp[-2].number_matrix));
    if (matrix == NULL || matrix->size() !=  16) {
      parser_impl->LogError(
          (yylsp[-2]),
          "matrix3d function expects 16 floating-point numbers as arguments");
      YYERROR;
    } else {
      // GLM and the W3 spec both use column-major order.
      (yyval.matrix4x4) = new glm::mat4(glm::make_mat4(&(*matrix)[0]));
    }
  }
#line 16169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1083:
#line 7733 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.number_matrix) = new std::vector<float>(1, (yyvsp[0].real));
  }
#line 16177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1084:
#line 7736 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.number_matrix) = (yyvsp[-2].number_matrix);
    (yyval.number_matrix)->push_back((yyvsp[0].real));
  }
#line 16186 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1085:
#line 7743 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetMonoscopic().get());
  }
#line 16194 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1086:
#line 7746 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = (yyvsp[0].stereo_mode);
  }
#line 16202 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1087:
#line 7752 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetMonoscopic().get());
  }
#line 16210 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1088:
#line 7755 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetStereoscopicLeftRight().get());
  }
#line 16218 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1089:
#line 7758 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetStereoscopicTopBottom().get());
  }
#line 16226 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;


#line 16230 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, parser_impl, scanner, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, parser_impl, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, parser_impl, scanner);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, parser_impl, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, parser_impl, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, parser_impl, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, parser_impl, scanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
