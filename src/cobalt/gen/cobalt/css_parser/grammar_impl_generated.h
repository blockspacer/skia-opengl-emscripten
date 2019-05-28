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
    kJustifyContentToken = 332,
    kLeftToken = 333,
    kLineHeightToken = 334,
    kMarginBottomToken = 335,
    kMarginLeftToken = 336,
    kMarginRightToken = 337,
    kMarginToken = 338,
    kMarginTopToken = 339,
    kMaxHeightToken = 340,
    kMaxWidthToken = 341,
    kMinHeightToken = 342,
    kMinWidthToken = 343,
    kOpacityToken = 344,
    kOrderToken = 345,
    kOutlineToken = 346,
    kOutlineColorToken = 347,
    kOutlineStyleToken = 348,
    kOutlineWidthToken = 349,
    kOverflowToken = 350,
    kOverflowWrapToken = 351,
    kPaddingBottomToken = 352,
    kPaddingLeftToken = 353,
    kPaddingRightToken = 354,
    kPaddingToken = 355,
    kPaddingTopToken = 356,
    kPointerEventsToken = 357,
    kPositionToken = 358,
    kRightToken = 359,
    kSrcToken = 360,
    kTextAlignToken = 361,
    kTextDecorationToken = 362,
    kTextDecorationColorToken = 363,
    kTextDecorationLineToken = 364,
    kTextIndentToken = 365,
    kTextOverflowToken = 366,
    kTextShadowToken = 367,
    kTextTransformToken = 368,
    kTopToken = 369,
    kTransformToken = 370,
    kTransformOriginToken = 371,
    kTransitionDelayToken = 372,
    kTransitionDurationToken = 373,
    kTransitionPropertyToken = 374,
    kTransitionTimingFunctionToken = 375,
    kTransitionToken = 376,
    kUnicodeRangePropertyToken = 377,
    kVerticalAlignToken = 378,
    kVisibilityToken = 379,
    kWhiteSpacePropertyToken = 380,
    kWidthToken = 381,
    kWordWrapToken = 382,
    kZIndexToken = 383,
    kAbsoluteToken = 384,
    kAlternateToken = 385,
    kAlternateReverseToken = 386,
    kAquaToken = 387,
    kAtToken = 388,
    kAutoToken = 389,
    kBackwardsToken = 390,
    kBaselineToken = 391,
    kBlackToken = 392,
    kBlockToken = 393,
    kBlueToken = 394,
    kBoldToken = 395,
    kBothToken = 396,
    kBreakWordToken = 397,
    kCenterToken = 398,
    kCircleToken = 399,
    kClipToken = 400,
    kClosestCornerToken = 401,
    kClosestSideToken = 402,
    kCollapseToken = 403,
    kColumnToken = 404,
    kColumnReverseToken = 405,
    kContainToken = 406,
    kCoverToken = 407,
    kCursiveToken = 408,
    kEaseInOutToken = 409,
    kEaseInToken = 410,
    kEaseOutToken = 411,
    kEaseToken = 412,
    kEllipseToken = 413,
    kEllipsisToken = 414,
    kEndToken = 415,
    kEquirectangularToken = 416,
    kFantasyToken = 417,
    kFarthestCornerToken = 418,
    kFarthestSideToken = 419,
    kFixedToken = 420,
    kFlexEndToken = 421,
    kFlexStartToken = 422,
    kForwardsToken = 423,
    kFromToken = 424,
    kFuchsiaToken = 425,
    kGrayToken = 426,
    kGreenToken = 427,
    kHiddenToken = 428,
    kInfiniteToken = 429,
    kInheritToken = 430,
    kInitialToken = 431,
    kInlineBlockToken = 432,
    kInlineToken = 433,
    kInlineFlexToken = 434,
    kInsetToken = 435,
    kItalicToken = 436,
    kLimeToken = 437,
    kLinearToken = 438,
    kLineThroughToken = 439,
    kMaroonToken = 440,
    kMiddleToken = 441,
    kMonoscopicToken = 442,
    kMonospaceToken = 443,
    kNavyToken = 444,
    kNoneToken = 445,
    kNoRepeatToken = 446,
    kNormalToken = 447,
    kNowrapToken = 448,
    kObliqueToken = 449,
    kOliveToken = 450,
    kPreToken = 451,
    kPreLineToken = 452,
    kPreWrapToken = 453,
    kPurpleToken = 454,
    kRectangularToken = 455,
    kRedToken = 456,
    kRepeatToken = 457,
    kRepeatXToken = 458,
    kRepeatYToken = 459,
    kRelativeToken = 460,
    kReverseToken = 461,
    kRowToken = 462,
    kRowReverseToken = 463,
    kSansSerifToken = 464,
    kScrollToken = 465,
    kSerifToken = 466,
    kSilverToken = 467,
    kSolidToken = 468,
    kSpaceAroundToken = 469,
    kSpaceBetweenToken = 470,
    kStartToken = 471,
    kStaticToken = 472,
    kStepEndToken = 473,
    kStepStartToken = 474,
    kStereoscopicLeftRightToken = 475,
    kStereoscopicTopBottomToken = 476,
    kStretchToken = 477,
    kTealToken = 478,
    kToToken = 479,
    kTransparentToken = 480,
    kUppercaseToken = 481,
    kVisibleToken = 482,
    kWhiteToken = 483,
    kWrapToken = 484,
    kWrapReverseToken = 485,
    kYellowToken = 486,
    kActiveToken = 487,
    kEmptyToken = 488,
    kFocusToken = 489,
    kHoverToken = 490,
    kAfterToken = 491,
    kBeforeToken = 492,
    kIncludesToken = 493,
    kDashMatchToken = 494,
    kBeginsWithToken = 495,
    kEndsWithToken = 496,
    kContainsToken = 497,
    kMediaAndToken = 498,
    kMediaNotToken = 499,
    kMediaOnlyToken = 500,
    kMediaMinimumToken = 501,
    kMediaMaximumToken = 502,
    kAllMediaTypeToken = 503,
    kTVMediaTypeToken = 504,
    kScreenMediaTypeToken = 505,
    kLengthMediaFeatureTypeToken = 506,
    kOrientationMediaFeatureTypeToken = 507,
    kRatioMediaFeatureTypeToken = 508,
    kNonNegativeIntegerMediaFeatureTypeToken = 509,
    kResolutionMediaFeatureTypeToken = 510,
    kScanMediaFeatureTypeToken = 511,
    kZeroOrOneMediaFeatureTypeToken = 512,
    kInterlaceMediaFeatureKeywordValueToken = 513,
    kLandscapeMediaFeatureKeywordValueToken = 514,
    kPortraitMediaFeatureKeywordValueToken = 515,
    kProgressiveMediaFeatureKeywordValueToken = 516,
    kSupportsAndToken = 517,
    kSupportsNotToken = 518,
    kSupportsOrToken = 519,
    kImportToken = 520,
    kKeyframesToken = 521,
    kPageToken = 522,
    kMediaToken = 523,
    kFontFaceToken = 524,
    kCharsetToken = 525,
    kNamespaceToken = 526,
    kSupportsToken = 527,
    kTopLeftCornerToken = 528,
    kTopLeftToken = 529,
    kTopCenterToken = 530,
    kTopRightToken = 531,
    kTopRightCornerToken = 532,
    kBottomLeftCornerToken = 533,
    kBottomLeftToken = 534,
    kBottomCenterToken = 535,
    kBottomRightToken = 536,
    kBottomRightCornerToken = 537,
    kLeftTopToken = 538,
    kLeftMiddleToken = 539,
    kLeftBottomToken = 540,
    kRightTopToken = 541,
    kRightMiddleToken = 542,
    kRightBottomToken = 543,
    kCalcFunctionToken = 544,
    kCubicBezierFunctionToken = 545,
    kCueFunctionToken = 546,
    kFormatFunctionToken = 547,
    kLinearGradientFunctionToken = 548,
    kLocalFunctionToken = 549,
    kMapToMeshFunctionToken = 550,
    kMatrixFunctionToken = 551,
    kMatrix3dFunctionToken = 552,
    kNotFunctionToken = 553,
    kNthChildFunctionToken = 554,
    kNthLastChildFunctionToken = 555,
    kNthLastOfTypeFunctionToken = 556,
    kNthOfTypeFunctionToken = 557,
    kRotateFunctionToken = 558,
    kScaleFunctionToken = 559,
    kScaleXFunctionToken = 560,
    kScaleYFunctionToken = 561,
    kStepsFunctionToken = 562,
    kTranslateFunctionToken = 563,
    kTranslateXFunctionToken = 564,
    kTranslateYFunctionToken = 565,
    kTranslateZFunctionToken = 566,
    kRadialGradientFunctionToken = 567,
    kRGBFunctionToken = 568,
    kRGBAFunctionToken = 569,
    kCobaltMtmFunctionToken = 570,
    kCobaltUiNavFocusTransformFunctionToken = 571,
    kCobaltUiNavSpotlightTransformFunctionToken = 572,
    kStringToken = 573,
    kIdentifierToken = 574,
    kNthToken = 575,
    kHexToken = 576,
    kIdSelectorToken = 577,
    kUriToken = 578,
    kInvalidFunctionToken = 579,
    kInvalidNumberToken = 580,
    kInvalidDimensionToken = 581,
    kInvalidAtBlockToken = 582,
    kOtherBrowserAtBlockToken = 583,
    kIntegerToken = 584,
    kRealToken = 585,
    kPercentageToken = 586,
    kRootElementFontSizesAkaRemToken = 587,
    kZeroGlyphWidthsAkaChToken = 588,
    kFontSizesAkaEmToken = 589,
    kXHeightsAkaExToken = 590,
    kPixelsToken = 591,
    kCentimetersToken = 592,
    kMillimetersToken = 593,
    kInchesToken = 594,
    kPointsToken = 595,
    kPicasToken = 596,
    kDegreesToken = 597,
    kRadiansToken = 598,
    kGradiansToken = 599,
    kTurnsToken = 600,
    kMillisecondsToken = 601,
    kSecondsToken = 602,
    kHertzToken = 603,
    kKilohertzToken = 604,
    kViewportWidthPercentsAkaVwToken = 605,
    kViewportHeightPercentsAkaVhToken = 606,
    kViewportSmallerSizePercentsAkaVminToken = 607,
    kViewportLargerSizePercentsAkaVmaxToken = 608,
    kDotsPerPixelToken = 609,
    kDotsPerInchToken = 610,
    kDotsPerCentimeterToken = 611,
    kFractionsToken = 612,
    kUnicodeRangeToken = 613
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
#line 481 "grammar.y" /* yacc.c:355  */
 bool important; 
#line 486 "grammar.y" /* yacc.c:355  */
 cssom::RGBAColorValue* color; 
#line 490 "grammar.y" /* yacc.c:355  */
 cssom::ColorStop* color_stop; 
#line 494 "grammar.y" /* yacc.c:355  */
 cssom::ColorStopList* color_stop_list; 
#line 498 "grammar.y" /* yacc.c:355  */
 cssom::PercentageValue* percentage; 
#line 502 "grammar.y" /* yacc.c:355  */
 cssom::LengthValue* length; 
#line 509 "grammar.y" /* yacc.c:355  */
 cssom::RatioValue* ratio; 
#line 513 "grammar.y" /* yacc.c:355  */
 cssom::ResolutionValue* resolution; 
#line 517 "grammar.y" /* yacc.c:355  */
 cssom::StringValue* string_value; 
#line 528 "grammar.y" /* yacc.c:355  */
 int64 time; 
#line 531 "grammar.y" /* yacc.c:355  */
 PropertyDeclaration* property_declaration; 
#line 542 "grammar.y" /* yacc.c:355  */
 cssom::PropertyValue* property_value; 
#line 659 "grammar.y" /* yacc.c:355  */
 std::vector<float>* number_matrix; 
#line 663 "grammar.y" /* yacc.c:355  */
 glm::mat4* matrix4x4; 
#line 667 "grammar.y" /* yacc.c:355  */
 MarginOrPaddingShorthand* margin_or_padding_shorthand; 
#line 671 "grammar.y" /* yacc.c:355  */
 SingleAnimationShorthand* single_animation; 
#line 675 "grammar.y" /* yacc.c:355  */
 AnimationShorthandBuilder* animation_builder; 
#line 679 "grammar.y" /* yacc.c:355  */
 AnimationShorthand* animation; 
#line 683 "grammar.y" /* yacc.c:355  */
 FontShorthand* font; 
#line 689 "grammar.y" /* yacc.c:355  */
 TransitionShorthand* transition; 
#line 695 "grammar.y" /* yacc.c:355  */
 cssom::CSSStyleSheet* style_sheet; 
#line 699 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleList* rule_list; 
#line 703 "grammar.y" /* yacc.c:355  */
 cssom::AttributeSelector::ValueMatchType attribute_match; 
#line 706 "grammar.y" /* yacc.c:355  */
 cssom::SimpleSelector* simple_selector; 
#line 717 "grammar.y" /* yacc.c:355  */
 cssom::CompoundSelector* compound_selector; 
#line 721 "grammar.y" /* yacc.c:355  */
 cssom::Combinator* combinator; 
#line 725 "grammar.y" /* yacc.c:355  */
 cssom::ComplexSelector* complex_selector; 
#line 729 "grammar.y" /* yacc.c:355  */
 cssom::Selectors* selectors; 
#line 733 "grammar.y" /* yacc.c:355  */
 cssom::LinearGradientValue::SideOrCorner side_or_corner; 
#line 736 "grammar.y" /* yacc.c:355  */
 int sign; 
#line 741 "grammar.y" /* yacc.c:355  */
 cssom::PropertyKey property_key; 
#line 744 "grammar.y" /* yacc.c:355  */
 cssom::CSSDeclaredStyleData* style_declaration_data; 
#line 748 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleStyleDeclaration* style_declaration; 
#line 752 "grammar.y" /* yacc.c:355  */
 cssom::CSSFontFaceRule* font_face_rule; 
#line 756 "grammar.y" /* yacc.c:355  */
 cssom::CSSKeyframeRule* keyframe_rule; 
#line 760 "grammar.y" /* yacc.c:355  */
 cssom::CSSKeyframesRule* keyframes_rule; 
#line 764 "grammar.y" /* yacc.c:355  */
 cssom::CSSRuleList* keyframe_rule_list; 
#line 768 "grammar.y" /* yacc.c:355  */
 float keyframe_offset; 
#line 771 "grammar.y" /* yacc.c:355  */
 std::vector<float>* keyframe_selector; 
#line 775 "grammar.y" /* yacc.c:355  */
 cssom::CSSFontFaceDeclarationData* font_face_declaration_data; 
#line 779 "grammar.y" /* yacc.c:355  */
 cssom::CSSMediaRule* media_rule; 
#line 783 "grammar.y" /* yacc.c:355  */
 cssom::MediaList* media_list; 
#line 787 "grammar.y" /* yacc.c:355  */
 cssom::MediaQuery* media_query; 
#line 791 "grammar.y" /* yacc.c:355  */
 bool evaluated_media_type; 
#line 794 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeatures* media_features; 
#line 798 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeature* media_feature; 
#line 805 "grammar.y" /* yacc.c:355  */
 cssom::MediaFeatureOperator media_feature_operator; 
#line 808 "grammar.y" /* yacc.c:355  */
 cssom::CSSStyleRule* style_rule; 
#line 812 "grammar.y" /* yacc.c:355  */
 cssom::CSSRule* css_rule; 
#line 816 "grammar.y" /* yacc.c:355  */
 cssom::PropertyListValue::Builder* property_list; 
#line 835 "grammar.y" /* yacc.c:355  */
 cssom::PropertyListValue* property_list_value; 
#line 843 "grammar.y" /* yacc.c:355  */
 cssom::TransformFunction* transform_function; 
#line 847 "grammar.y" /* yacc.c:355  */
 cssom::TransformFunctionListValue::Builder* transform_functions; 
#line 851 "grammar.y" /* yacc.c:355  */
 cssom::FilterFunction* filter_function; 
#line 856 "grammar.y" /* yacc.c:355  */
 cssom::FilterFunctionListValue::Builder* cobalt_mtm_filter_functions; 
#line 860 "grammar.y" /* yacc.c:355  */

  cssom::MapToMeshFunction::MeshSpec* cobalt_map_to_mesh_spec; 
#line 865 "grammar.y" /* yacc.c:355  */

  cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder* cobalt_mtm_resolution_matched_meshes; 
#line 870 "grammar.y" /* yacc.c:355  */
 cssom::MapToMeshFunction::ResolutionMatchedMesh* cobalt_mtm_resolution_matched_mesh; 
#line 874 "grammar.y" /* yacc.c:355  */
 cssom::KeywordValue* stereo_mode; 
#line 879 "grammar.y" /* yacc.c:355  */
 cssom::TimeListValue::Builder* time_list; 
#line 883 "grammar.y" /* yacc.c:355  */
 cssom::PropertyKeyListValue::Builder* property_name_list; 
#line 887 "grammar.y" /* yacc.c:355  */

  cssom::SteppingTimingFunction::ValueChangeLocation
      stepping_value_change_location;
#line 893 "grammar.y" /* yacc.c:355  */
 cssom::TimingFunction* timing_function; 
#line 897 "grammar.y" /* yacc.c:355  */

  cssom::TimingFunctionListValue::Builder*
      timing_function_list;
#line 905 "grammar.y" /* yacc.c:355  */
 SingleTransitionShorthand* single_transition; 
#line 909 "grammar.y" /* yacc.c:355  */
 TransitionShorthandBuilder* transition_builder; 
#line 913 "grammar.y" /* yacc.c:355  */
 BackgroundShorthandLayer* background_shorthand_layer; 
#line 923 "grammar.y" /* yacc.c:355  */
 PositionParseStructure* position_structure; 
#line 927 "grammar.y" /* yacc.c:355  */
 BorderOrOutlineShorthand* border_or_outline_shorthand; 
#line 932 "grammar.y" /* yacc.c:355  */
 FlexShorthand* flex_shorthand; 
#line 939 "grammar.y" /* yacc.c:355  */
 FlexFlowShorthand* flex_flow_shorthand; 
#line 943 "grammar.y" /* yacc.c:355  */
 ShadowPropertyInfo* shadow_info; 
#line 947 "grammar.y" /* yacc.c:355  */
 TextDecorationShorthand* text_decoration_shorthand; 
#line 952 "grammar.y" /* yacc.c:355  */
 cssom::RadialGradientValue::SizeKeyword size_keyword; 

#line 642 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:355  */
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

#line 672 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:358  */

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
#define YYLAST   10413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  376
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  280
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1080
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2018

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   613

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
     361,   362,   364,   371,   363,   373,   368,   374,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   369,   375,
       2,   365,   370,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   366,     2,   367,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   359,     2,   360,   372,     2,     2,     2,
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
     355,   356,   357,   358
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   967,   967,   968,   972,   973,   985,  1006,  1024,  1027,
    1035,  1038,  1045,  1046,  1054,  1057,  1060,  1063,  1066,  1069,
    1072,  1079,  1083,  1087,  1094,  1097,  1101,  1104,  1113,  1114,
    1115,  1116,  1124,  1132,  1137,  1145,  1147,  1148,  1149,  1151,
    1152,  1153,  1154,  1155,  1156,  1157,  1162,  1163,  1164,  1169,
    1172,  1182,  1186,  1190,  1194,  1198,  1209,  1213,  1218,  1222,
    1231,  1240,  1244,  1257,  1266,  1270,  1275,  1286,  1309,  1312,
    1319,  1322,  1325,  1338,  1340,  1344,  1348,  1352,  1356,  1360,
    1364,  1368,  1372,  1376,  1380,  1384,  1388,  1392,  1396,  1400,
    1404,  1408,  1412,  1416,  1420,  1424,  1428,  1432,  1436,  1440,
    1444,  1448,  1452,  1456,  1460,  1464,  1468,  1472,  1476,  1480,
    1484,  1488,  1492,  1496,  1500,  1504,  1508,  1512,  1516,  1520,
    1524,  1528,  1532,  1536,  1540,  1544,  1548,  1552,  1556,  1560,
    1564,  1568,  1572,  1576,  1580,  1584,  1588,  1592,  1596,  1600,
    1604,  1608,  1612,  1616,  1620,  1624,  1628,  1632,  1636,  1640,
    1644,  1648,  1652,  1656,  1660,  1664,  1668,  1672,  1676,  1680,
    1684,  1688,  1692,  1696,  1700,  1704,  1708,  1712,  1716,  1720,
    1724,  1728,  1732,  1736,  1740,  1744,  1748,  1752,  1756,  1760,
    1764,  1768,  1772,  1776,  1780,  1784,  1788,  1792,  1797,  1800,
    1803,  1806,  1809,  1812,  1815,  1818,  1821,  1824,  1827,  1830,
    1833,  1837,  1840,  1843,  1846,  1849,  1852,  1855,  1858,  1861,
    1864,  1868,  1871,  1874,  1877,  1880,  1883,  1886,  1889,  1892,
    1895,  1898,  1901,  1904,  1907,  1911,  1914,  1917,  1920,  1923,
    1926,  1929,  1932,  1935,  1938,  1941,  1944,  1947,  1950,  1953,
    1956,  1959,  1962,  1965,  1968,  1971,  1974,  1977,  1980,  1983,
    1986,  1989,  1992,  1995,  1998,  2001,  2004,  2007,  2010,  2013,
    2016,  2019,  2022,  2025,  2028,  2032,  2035,  2038,  2041,  2044,
    2047,  2050,  2053,  2056,  2059,  2062,  2065,  2068,  2071,  2075,
    2079,  2082,  2085,  2089,  2092,  2095,  2098,  2101,  2104,  2107,
    2111,  2114,  2117,  2120,  2124,  2127,  2135,  2144,  2150,  2153,
    2156,  2159,  2162,  2165,  2173,  2176,  2180,  2190,  2199,  2202,
    2221,  2231,  2237,  2247,  2254,  2266,  2270,  2286,  2289,  2292,
    2295,  2298,  2307,  2308,  2309,  2310,  2311,  2312,  2313,  2320,
    2330,  2347,  2350,  2353,  2356,  2365,  2375,  2388,  2394,  2404,
    2423,  2432,  2433,  2434,  2441,  2454,  2461,  2472,  2485,  2486,
    2491,  2505,  2512,  2526,  2536,  2544,  2550,  2564,  2567,  2571,
    2575,  2581,  2587,  2600,  2608,  2616,  2629,  2632,  2635,  2638,
    2646,  2655,  2659,  2664,  2670,  2671,  2676,  2677,  2691,  2694,
    2702,  2729,  2738,  2747,  2750,  2753,  2756,  2759,  2762,  2765,
    2768,  2771,  2774,  2777,  2780,  2783,  2786,  2789,  2792,  2795,
    2801,  2812,  2815,  2821,  2824,  2830,  2840,  2858,  2861,  2867,
    2882,  2894,  2895,  2896,  2903,  2913,  2918,  2929,  2934,  2949,
    2960,  2961,  2978,  2979,  2983,  2986,  2994,  2999,  3006,  3009,
    3012,  3015,  3021,  3022,  3060,  3067,  3071,  3079,  3082,  3085,
    3088,  3094,  3097,  3106,  3113,  3120,  3130,  3133,  3136,  3147,
    3156,  3165,  3177,  3183,  3186,  3191,  3200,  3209,  3218,  3227,
    3236,  3245,  3255,  3268,  3269,  3272,  3275,  3281,  3285,  3296,
    3302,  3306,  3309,  3312,  3315,  3318,  3321,  3325,  3331,  3346,
    3377,  3380,  3387,  3390,  3396,  3404,  3412,  3420,  3431,  3432,
    3436,  3437,  3438,  3442,  3449,  3461,  3467,  3470,  3476,  3477,
    3484,  3487,  3495,  3505,  3515,  3518,  3521,  3527,  3528,  3534,
    3537,  3545,  3555,  3566,  3570,  3571,  3575,  3578,  3586,  3596,
    3613,  3623,  3634,  3648,  3651,  3664,  3665,  3680,  3683,  3684,
    3688,  3691,  3699,  3709,  3718,  3732,  3741,  3752,  3755,  3761,
    3775,  3782,  3795,  3801,  3804,  3810,  3811,  3817,  3820,  3823,
    3824,  3827,  3833,  3836,  3839,  3842,  3845,  3848,  3851,  3858,
    3863,  3872,  3880,  3881,  3885,  3889,  3900,  3906,  3914,  3917,
    3924,  3933,  3934,  3941,  3945,  3953,  3970,  3974,  3978,  3989,
    4020,  4026,  4031,  4040,  4041,  4047,  4050,  4058,  4059,  4062,
    4068,  4071,  4111,  4112,  4115,  4128,  4136,  4151,  4158,  4163,
    4167,  4178,  4190,  4213,  4230,  4231,  4232,  4238,  4239,  4245,
    4248,  4249,  4256,  4259,  4262,  4265,  4268,  4274,  4275,  4282,
    4283,  4291,  4298,  4309,  4322,  4334,  4343,  4344,  4345,  4352,
    4353,  4361,  4364,  4367,  4370,  4373,  4381,  4384,  4387,  4397,
    4398,  4406,  4414,  4426,  4441,  4456,  4469,  4472,  4475,  4482,
    4485,  4488,  4491,  4494,  4500,  4503,  4512,  4515,  4518,  4521,
    4524,  4527,  4533,  4536,  4542,  4543,  4549,  4560,  4574,  4577,
    4586,  4587,  4603,  4606,  4613,  4616,  4619,  4623,  4637,  4650,
    4653,  4659,  4673,  4679,  4691,  4697,  4700,  4706,  4709,  4712,
    4719,  4726,  4732,  4739,  4746,  4754,  4765,  4776,  4785,  4795,
    4808,  4823,  4833,  4836,  4845,  4848,  4855,  4861,  4865,  4884,
    4890,  4896,  4905,  4911,  4914,  4917,  4920,  4923,  4930,  4933,
    4936,  4939,  4944,  4948,  4955,  4961,  4966,  4970,  4973,  4979,
    4996,  5007,  5010,  5013,  5016,  5019,  5022,  5025,  5031,  5035,
    5043,  5051,  5056,  5062,  5065,  5068,  5071,  5077,  5081,  5089,
    5095,  5096,  5106,  5112,  5115,  5118,  5121,  5127,  5131,  5139,
    5145,  5146,  5157,  5160,  5166,  5170,  5178,  5184,  5185,  5195,
    5198,  5204,  5208,  5216,  5222,  5223,  5233,  5239,  5247,  5255,
    5263,  5271,  5283,  5291,  5298,  5302,  5306,  5315,  5341,  5364,
    5390,  5407,  5411,  5415,  5420,  5424,  5432,  5441,  5444,  5450,
    5457,  5465,  5476,  5488,  5496,  5503,  5507,  5511,  5520,  5540,
    5559,  5602,  5615,  5621,  5625,  5629,  5639,  5642,  5645,  5648,
    5651,  5654,  5662,  5663,  5664,  5670,  5671,  5677,  5680,  5681,
    5685,  5686,  5690,  5693,  5694,  5702,  5705,  5708,  5715,  5718,
    5725,  5728,  5737,  5738,  5739,  5746,  5747,  5748,  5751,  5758,
    5759,  5760,  5767,  5770,  5771,  5772,  5777,  5780,  5791,  5792,
    5793,  5799,  5800,  5803,  5810,  5813,  5816,  5824,  5832,  5842,
    5851,  5863,  5870,  5877,  5887,  5895,  5903,  5921,  5925,  5928,
    5929,  5944,  5947,  5953,  5956,  5963,  5966,  5969,  5972,  5980,
    5981,  5987,  5997,  6010,  6013,  6021,  6022,  6036,  6039,  6042,
    6048,  6049,  6063,  6066,  6069,  6072,  6075,  6078,  6081,  6084,
    6087,  6090,  6093,  6106,  6107,  6113,  6119,  6125,  6131,  6137,
    6143,  6149,  6155,  6161,  6167,  6207,  6242,  6248,  6254,  6260,
    6266,  6272,  6328,  6334,  6340,  6365,  6371,  6377,  6383,  6418,
    6443,  6449,  6455,  6461,  6496,  6521,  6527,  6533,  6539,  6574,
    6599,  6605,  6611,  6617,  6623,  6629,  6664,  6670,  6676,  6682,
    6688,  6694,  6700,  6726,  6732,  6738,  6761,  6767,  6773,  6779,
    6810,  6816,  6822,  6828,  6834,  6840,  6846,  6852,  6858,  6864,
    6870,  6876,  6882,  6906,  6912,  6918,  6924,  6930,  6936,  6942,
    6971,  6977,  6983,  6989,  6995,  7001,  7007,  7013,  7019,  7025,
    7050,  7056,  7062,  7068,  7074,  7080,  7086,  7109,  7115,  7121,
    7127,  7133,  7139,  7145,  7151,  7157,  7185,  7191,  7197,  7203,
    7209,  7215,  7221,  7227,  7233,  7239,  7246,  7252,  7271,  7277,
    7282,  7298,  7317,  7325,  7336,  7343,  7346,  7359,  7376,  7377,
    7386,  7389,  7397,  7398,  7399,  7400,  7401,  7402,  7406,  7409,
    7427,  7437,  7443,  7449,  7455,  7460,  7467,  7474,  7500,  7519,
    7522,  7526,  7531,  7540,  7547,  7569,  7585,  7589,  7602,  7603,
    7607,  7611,  7618,  7631,  7646,  7649,  7656,  7659,  7665,  7668,
    7671
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
  "kFontWeightToken", "kHeightToken", "kJustifyContentToken", "kLeftToken",
  "kLineHeightToken", "kMarginBottomToken", "kMarginLeftToken",
  "kMarginRightToken", "kMarginToken", "kMarginTopToken",
  "kMaxHeightToken", "kMaxWidthToken", "kMinHeightToken", "kMinWidthToken",
  "kOpacityToken", "kOrderToken", "kOutlineToken", "kOutlineColorToken",
  "kOutlineStyleToken", "kOutlineWidthToken", "kOverflowToken",
  "kOverflowWrapToken", "kPaddingBottomToken", "kPaddingLeftToken",
  "kPaddingRightToken", "kPaddingToken", "kPaddingTopToken",
  "kPointerEventsToken", "kPositionToken", "kRightToken", "kSrcToken",
  "kTextAlignToken", "kTextDecorationToken", "kTextDecorationColorToken",
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
     605,   606,   607,   608,   609,   610,   611,   612,   613,   123,
     125,    40,    41,    44,    42,    61,    91,    93,    46,    58,
      62,    43,   126,    45,    47,    59
};
# endif

#define YYPACT_NINF -1796

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1796)))

#define YYTABLE_NINF -1068

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1857, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,    78,
    2269,  2314,    73,  6258,  3196,  3196,  8264,  8264, -1796, -1796,
   -1796, -1796,    80,   108, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,    64, -1796,
    -118, -1796, -1796, -1796, -1796, -1796,  -222, -1796,  5899, -1796,
    -210, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, 10094,  1120, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,  7910,    96,
    -183, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,   132,
   -1796,  -196, -1796,  -196, -1796, -1796,  2863,  3225,  2122, -1796,
   -1796,    14, -1796,  1575, -1796, -1796, -1796,    73,   185,  1784,
      87,    73,    73,  9179, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796,  6968,    27,  5162, -1796,   175, -1796, -1796, -1796,  7910,
    7910, -1796,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63, -1796,  3325,  3325, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796,   463, -1796, -1796, -1796,  -165,   104, -1796,    73,
   -1796,  4675, -1796,  -313, -1796, -1796,    76,  7555, -1796, -1796,
    5526,    73,    73,    73,  7910,    96, -1796,  1785,  1257,  1532,
     754,  1708,   754,  1714,   789,   495,  2354,  -124,  4677,  1086,
    1311,  1588,  1717,  3456,  3532,  1192,  1192,  3532,  4677,   933,
    1396,  4249,  3532,  4677,   933,  1396,   275,  3532,  4677,   933,
    1396,   553,  3532,  4677,  1192,  1192,   933,  1396,   283,  1953,
    3738,  4677,  1081,  2526,  1212,  1545,  1908,  1292,  1198,   969,
     969,   780,  -124,  8569,  1192,   980,   749,  1953,  2864,  1953,
    1140,  1953,  1953,  1953,  1953,  1953,  1836,  2015,  1192,  1192,
     969,   571,  3532,  4677,   933,  1396,  1449,   702,  1192,  1192,
    1192,  1192,  1192,  1039,  1636,  1953,   774,  1976,  4009,  4677,
    1088,  1396,   802,  3803,    75,  1953,   454,  1311,   754,   754,
    3583,  2354,  -124,    85,  2003,    66,  1363,  1953,   702,   598,
     286,    73, -1796, -1796,    63,    63,    63,    63,    63,    63,
      63, -1796, -1796, -1796, -1796, -1796, -1796, -1796,   104,  -285,
      98, -1796, -1796, -1796,  4675,   586, -1796, -1796,    73, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796,   164, -1796, -1796,
   -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796,   189, -1796,
   -1796, -1796, -1796,   189, -1796, -1796,   361, -1796, -1796, -1796,
   -1796, -1796,  -222, -1796,   189, -1796, -1796, -1796, -1796,   235,
   -1796, -1796,  -222,   189, -1796,   189, -1796, -1796, -1796, -1796,
     285, -1796, -1796,  -222,   189, -1796,   698,   -60, -1796, -1796,
   -1796, -1796,  -222,   189, -1796, -1796,   751, -1796, -1796,  -222,
     189, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796,  -222, -1796,   189, -1796,  1802,   201,  -222,   189,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796,   189, -1796, -1796, -1796,   149, -1796, -1796, -1796,
    -222,   189, -1796, -1796, -1796, -1796, -1796,  1896, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796,  3464, -1796,   189, -1796, -1796,
   -1796, -1796, -1796,  -143, -1796,   189, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796,  1407, -1796, -1796,   189, -1796,  2691,
    4743,   189, -1796,  4030,   189, -1796, -1796, -1796, -1796, -1796,
   -1796,   189,   189,   189, -1796, -1796,   189, -1796, -1796, -1796,
   -1796, -1796,   189,  1883, -1796, -1796, -1796,   189, -1796,  3380,
     189,   189,   189,   189,   189, -1796,   195,   189,   189,   189,
     189,   189, -1796,   -50,   189,   189,   189,   189,   189,   189,
     189, -1796,   198,   189, -1796, -1796, -1796,   189, -1796, -1796,
    4096, -1796,  -222,   189,   189, -1796, -1796, -1796, -1796, -1796,
     189, -1796, -1796, -1796, -1796, -1796, -1796, -1796,   189, -1796,
   -1796, -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796,   146,   542,   663, -1796, -1796, -1796,   -77, -1796, -1796,
   -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796,   189, -1796,
   -1796, -1796, -1796, -1796, -1796,   189, -1796,   -19,   189, -1796,
   -1796,   189,   189, -1796, -1796, -1796, -1796, -1796,   189, -1796,
    1961, -1796,   189, -1796,   815, -1796, 10094, -1796,  -144, -1796,
    -222,   189, -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796,
     189, -1796, -1796,   207, -1796, -1796, -1796, -1796,   189, -1796,
   -1796, -1796,   189, -1796, -1796, -1796,   189,   189, -1796, -1796,
   -1796, -1796, -1796,   189, -1796, -1796, -1796, -1796,   189,   189,
     189, -1796,   110,   189,   189, -1796, -1796, -1796,   189, -1796,
   -1796, -1796,   189, -1796, -1796,   189, -1796, -1796,   189, -1796,
   -1796, -1796,   189, -1796, -1796,   189,   189,   189,   189,   189,
   -1796, -1796, -1796, -1796, -1796,   189, -1796, -1796, -1796,   189,
   -1796, -1796,   189,   189,   189, -1796,   628,   189,   189, -1796,
   -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796,   189,   189,
   -1796, -1796,   260, -1796, -1796, -1796,  -222,   189, -1796, -1796,
   -1796, -1796, -1796, -1796,   189, -1796,  4817,   189,   189, -1796,
   -1796, -1796, -1796,   189, -1796, -1796,   189, -1796, -1796, -1796,
     189, -1796, -1796,  4314, -1796,  -222,   189, -1796, -1796, -1796,
     189,   189, -1796, -1796,  1017,   189, -1796,   543,   673,   189,
   -1796,   189, -1796,   189, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796,   152, -1796,  -222,   189,
   -1796, -1796,   189, -1796,  4803,   651,  -222,   189, -1796, -1796,
     189,  -222, -1796, -1796, -1796, -1796, -1796,   189, -1796, -1796,
   -1796, -1796,   189, -1796, -1796, -1796, -1796, -1796, -1796,   189,
   -1796, -1796, -1796,   189,   189, -1796, -1796, -1796,   189,   138,
     -77,   424,   -77,   -77,   -77,   -34,   -77,    63,    63,    63,
      63,    73,  -118, -1796, -1796,    73,   -93, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796,  9484,    73,    73,    73,    73,    73,
      73,    73,    73, -1796, -1796,    73,    73, -1796,    73, -1796,
   -1796, -1796, -1796, -1796,   -77, -1796,    73,    73,    73,    73,
      25, -1796, -1796,    73,    73,    73,    73,    40, -1796,    73,
    -148, -1796,    73,    73,  -158, -1796,    58,   134,  2422, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    58,    58,    73,
   -1796,    73,  7196,  2589, -1796,  -150, -1796,    73,    73,    73,
      73,    73, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
      73,    73,    73,    73, -1796, -1796,    73,    73,    73, -1796,
   -1796,   478,  3464, -1796,   208, -1796, -1796,  2577, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,    73,
      73,    73, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796,    73, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796,    73,    73,    73, -1796,    73,
      73,    73,    73,    73,    73, -1796,    73, -1796,   772,   248,
     627,    73,   664, -1796, -1796, -1796,   338, -1796,    73,    73,
   -1796,    73,    73,    73,    73, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796,    73,    73,    73, -1796, -1796, -1796,  1360,  9789,
   -1796,   -77, -1796, -1796,    73,   202, -1796,  9789, -1796, -1796,
      73,    73,    73, -1796,    73,    73, -1796, -1796, -1796, -1796,
      73, -1796, -1796, -1796, -1796,   426, -1796, -1796,    73, -1796,
      73, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
      73,    73,    73,    73, -1796,    73,    73, -1796, -1796, -1796,
   -1796,   701, -1796, -1796,    73,    73, -1796,    73,    73,    73,
      73, -1796, -1796,  8874, -1796,  -250, -1796,    73,    73,    73,
      73,    73, -1796, -1796, -1796, -1796, -1796, -1796,    73,    73,
   -1796, -1796,    73,    73, -1796,    73, -1796, -1796, -1796, -1796,
   -1796,    73,    73, -1796, -1796,    73, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796,   819, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796,    73,  2565, -1796,    73, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,    73, -1796,
     205,    73,    73,    73,    73, -1796,    73,    73,    73, -1796,
      73,    73,    73,    73,    73, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796,   220, -1796, -1796, -1796,   398, -1796, -1796,
   -1796, -1796, -1796, -1796,    73,   507,  6613, -1796,    73,    73,
      73,    73,    73,    73, -1796, -1796,    73,    73,    73,    73,
      73, -1796, -1796, -1796, -1796, -1796,  -222, -1796, -1796,    73,
      73,    73,   696,  -222,  -222,   548,   391,  -222,   407,  -222,
    -222,   213, -1796, -1796, -1796, -1796, -1796, -1796, -1796,  -110,
     -77,  -222,    41,   485,   485,   485,   485,  -222,   287,    73,
   -1796,    73,    73,    73,    73,    73,    73, -1796, -1796, -1796,
   -1796,    73, -1796, -1796,  -222, -1796,  -222, -1796, -1796, -1796,
      73,    73, -1796, -1796,  -222,  9789,   218,   259,   674,   706,
   -1796, 10094, -1796,   291,   223, -1796, -1796,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    59,   111, -1796,    73,
      73,    73,    73,   932, -1796,    73,    73, -1796, -1796, -1796,
      73,    73, -1796, -1796, -1796, -1796,   -65, -1796,  -116, -1796,
   -1796,    73,    55,    74,   -77,   109,   -77,   -77, -1796, -1796,
   -1796, -1796, -1796,  3380, -1796,  3380,  3380, -1796,  1574,  1351,
      73,    73,  1351,    73,    73, -1796,   481, -1796, -1796, -1796,
    -222,  -222,  -222,  -222,  3380, -1796,   103,   465,   -71,   -77,
     277,  9789,  -222, -1796, -1796,    73, -1796, -1796, -1796,  -222,
     297,  -222,   299,   304,   333,   429,   340,   342,   359, -1796,
   -1796,    73,    73,    58,    73,    73,    73,    73,    73, -1796,
   -1796, -1796, -1796,    73, -1796, -1796,  -222,  -113,   365,  -222,
    -222,    30,    73,    73,    73,    73,  -222, -1796, -1796, -1796,
   -1796, -1796,  -222,   -77, -1796,  -222,    73, -1796,    73,    73,
    3380,  3380,  3380,  3380,  -222, -1796,  -222,   -77, -1796,   -77,
   -1796,    73,    73,   118,   -77, -1796,   -77, -1796, -1796, -1796,
   -1796,   -77, -1796, -1796, -1796,    73,    73, -1796,    73,   451,
     -77, -1796, -1796, -1796,   -77,   -77, -1796, -1796, -1796, -1796,
     558,  -222,  3380, -1796,  3380,    73,  -222,  -222,  -222,  -222,
     533,   415,  -222, -1796,  -222,    73, -1796,    73,    73,    73,
      73,   368,    73,    73,    73, -1796,  -222,    73,    73,   383,
    -222,    73,    73,    73,    73, -1796,  3380,  -222,  -222,  -222,
   -1796,   471,    73,   -77, -1796,   -77, -1796,   -77,  -222,   411,
     414, -1796,  -222,  -222,    73,   417,    73,   422, -1796, -1796,
   -1796, -1796, -1796,    58,   425,   -77, -1796, -1796,    73,    73,
      73,    73, -1796,   468, -1796,  -222,    73, -1796,   -77,    73,
     -77,    73, -1796,  -222,   -77,   440, -1796,    73
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       0,     0,  1048,     0,     0,     0,     0,     0,     1,     4,
       3,    36,     0,     0,    37,    38,    46,    47,    48,    39,
      40,    41,    42,    43,    44,    45,    35,     2,     0,    33,
      57,    49,    50,    51,     2,    61,  1052,  1053,     0,  1051,
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
     292,   293,   294,   295,     2,     2,     2,    73,   309,   308,
       2,     2,   296,     2,     0,     0,  1044,  1045,  1046,   297,
     328,   327,   322,   323,   324,   325,   326,   329,   335,   338,
       0,  1038,  1043,  1047,  1054,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    1030,  1055,  1032,  1056,  1057,  1058,     0,     0,     0,     5,
       2,    58,     2,     0,  1049,     2,  1039,  1042,     0,     0,
       0,  1040,  1041,     0,   307,   310,   311,   312,   313,   317,
     318,     0,     0,     0,   330,   331,     2,     2,     2,     0,
       0,  1037,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     2,     0,     0,    55,
      52,    54,    53,    12,    13,     2,     2,     2,     2,     2,
       2,     2,     0,    28,    29,    30,     0,     0,     2,   375,
      62,     0,     2,     0,     2,     2,     0,     0,   319,   320,
       0,   332,   333,   334,   336,   339,     2,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   784,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   598,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   702,     0,     0,     0,
       0,     0,   805,     0,     0,     0,     0,     0,     0,     0,
       0,  1029,  1031,  1033,    14,    15,    16,    17,    18,    19,
      20,     2,     2,     2,     2,    31,     2,    34,     0,     0,
       0,     2,  1036,     7,     0,     0,   315,   314,   374,     2,
       2,     2,     2,     2,     2,     2,     2,     0,   848,   376,
     845,   846,   830,     2,     2,   851,   849,   850,   830,     2,
     855,   853,   854,   830,   342,   343,     0,   348,   370,   722,
     371,   725,   724,   742,   830,     2,     2,     2,     2,     0,
     750,   747,   749,   830,   752,   830,     2,     2,     2,     2,
       0,   760,   757,   759,   830,     2,     0,     0,   350,   763,
     767,   764,   766,   830,     2,     2,     0,   774,   771,   773,
     830,   731,   732,   733,   734,   735,   736,   737,     2,     2,
     741,   738,   740,   776,   830,   790,     0,   785,   789,   830,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     423,   422,   830,     2,     2,     2,     0,   470,   463,   467,
     469,   830,     2,     2,     2,     2,     2,     0,   354,   402,
     401,   355,   481,   476,   477,   479,   480,   830,     2,     2,
       2,     2,   489,   484,   488,   830,     2,     2,     2,   492,
     352,   491,   490,   499,   493,   495,   498,   830,   421,   341,
     420,   830,   526,   341,   830,   404,   362,   403,   529,   527,
     528,   830,   830,   830,   546,   545,   830,     2,     2,     2,
     508,   507,   830,     0,   513,   515,   514,   830,   503,   502,
     830,   830,   830,   830,   830,   533,   341,   830,   830,   830,
     830,   830,   512,   511,   830,   830,   830,   830,   830,   830,
     830,   519,   341,   830,   627,   628,   626,   830,     2,   544,
     341,   540,   542,   830,   830,     2,     2,     2,   551,   549,
     830,     2,     2,     2,     2,     2,     2,   558,   830,     2,
    1069,  1068,  1061,   830,  1060,  1062,  1063,     2,     2,     2,
       2,   341,   863,   862,   356,   880,   861,   341,   867,   877,
     878,   879,   830,     2,     2,   860,   859,   858,   830,     2,
       2,     2,     2,   890,   889,   830,   896,   895,   830,   881,
     882,   830,   830,     2,     2,     2,   901,   900,   830,   603,
       0,   599,   830,     2,     0,     2,     0,   574,   580,   577,
       0,   830,   584,   583,   830,     2,     2,     2,   589,   587,
     830,     2,     2,     0,   347,   591,   594,   592,   830,   605,
     606,   604,   830,   844,   842,   843,   830,   830,     2,   613,
     615,   614,   616,   830,   618,   620,   617,   619,   830,   830,
     830,   625,   341,   830,   830,     2,   611,   610,   830,     2,
     829,   828,   830,   608,   607,   830,   826,   825,   830,   353,
     629,   630,   830,   883,   884,   830,   830,   830,   830,   830,
       2,     2,     2,     2,   635,   830,     2,     2,   638,   830,
     640,   639,   830,   830,   830,   645,   341,   830,   830,     2,
       2,   648,   830,     2,     2,     2,     2,   653,   830,   830,
       2,   567,   560,   562,   563,   564,   566,   830,     2,     2,
       2,     2,     2,   661,   830,   671,   670,   830,   830,     2,
       2,   665,   664,   830,   672,   673,   830,     2,     2,   676,
     830,     2,   686,   341,   682,   684,   830,     2,     2,   689,
     830,   830,     2,   707,     0,   830,   712,   341,   341,   830,
     791,   830,   792,   830,   902,   903,   904,   905,   906,   907,
     908,   909,   910,   911,   912,     2,     0,   799,   798,   830,
       2,   793,   830,   811,     0,   806,   810,   830,     2,   813,
     830,   812,     2,     2,     2,     2,   717,   830,     2,     2,
       2,   721,   830,     2,     2,     2,     2,     2,   821,   830,
     823,   824,   822,   830,   830,   833,   832,   834,   830,     0,
     341,     0,   341,   341,   341,     0,   341,     0,     0,     0,
       0,    32,    59,     2,     2,  1048,     0,     2,     2,     2,
       2,     2,     2,   304,     0,   837,   836,   835,   378,   379,
     839,   838,   847,     2,   914,   840,   841,   915,   852,   916,
       2,     2,     2,     2,   341,   917,   745,   746,   743,   744,
       0,   918,   919,   755,   756,   754,   753,     0,   920,   762,
     341,   921,   769,   770,     0,   922,   341,     0,     0,   923,
       2,     2,   781,     2,   778,   779,   780,   786,   784,   924,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   341,   341,   380,
     926,   466,   341,   341,     2,     0,   927,   471,   473,   474,
     475,   472,     2,     2,     2,     2,     2,     2,   478,   928,
     482,   483,   486,   487,   485,   929,   340,   496,   497,   494,
     930,   411,   412,   418,   407,   410,   405,   419,   406,   925,
     522,   520,   521,   524,   931,   932,   933,   934,   935,   505,
     504,   506,   936,   937,   501,   938,   939,   940,   941,   942,
     531,   943,   944,   945,   946,   947,   510,   948,   949,   950,
     951,   952,   953,   954,   517,   955,   956,   543,     2,   534,
     535,   538,   537,   957,   958,   547,   548,   550,   959,   553,
     552,   555,   554,   556,   557,   960,  1059,   961,     0,   856,
     857,   870,   341,   863,   862,   872,   873,   962,   856,   857,
     963,   887,   888,   885,   886,   964,   891,   894,   892,   965,
     966,   967,   897,   898,   899,   968,     2,     2,   348,     0,
     595,   341,   600,   969,   570,   568,     2,     0,   970,   971,
     585,   588,   586,   972,   590,   593,   973,   974,   975,   976,
     612,   977,   978,   979,   980,   341,   982,   981,   609,   983,
     827,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     631,   632,   633,   634,   993,   636,   637,   994,   995,   996,
     997,   341,   999,   998,   646,   647,  1000,   649,   650,   651,
     652,  1001,  1002,     0,     2,     0,  1003,   657,   659,   658,
     656,   660,  1004,   667,   666,   669,  1006,  1007,   663,   662,
    1008,  1005,   674,   675,  1009,   685,   677,   678,   680,   679,
    1010,   687,   688,  1011,  1012,   704,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,   703,  1013,
     708,   711,  1014,  1016,  1017,   797,     0,  1018,   794,  1019,
       2,     2,   802,     2,   807,     2,   805,  1015,   814,  1020,
       0,   713,   714,   716,   715,  1021,   718,   719,   720,  1022,
     816,   817,   818,   819,   820,  1023,  1024,  1025,  1026,    24,
       2,     2,    21,     0,    26,   346,    25,     0,    27,     2,
       2,    22,    23,   344,  1034,     0,     0,     2,   299,   300,
     301,   302,   303,   298,     2,     2,   831,   345,   349,   373,
     372,   723,   748,   758,   765,   772,     0,     2,   739,   783,
     777,   782,   785,     0,     0,     0,     0,     0,   341,     0,
     434,     0,     2,     2,     2,     2,     2,     2,     2,   403,
     341,   462,   448,   453,   453,   453,   453,     0,     0,   400,
     468,   351,   358,   357,   361,   359,   360,   413,   414,     2,
     409,   536,   541,  1066,     0,  1070,     0,   876,   874,   875,
     597,   596,     2,   576,   601,     0,   569,   581,   341,   341,
       2,   571,   572,     0,     0,   565,   683,   341,   341,   341,
     341,   341,   341,   341,   341,   341,     0,     0,     2,   804,
     801,   803,   800,   806,     2,     8,     9,     2,     2,     2,
      10,    11,    65,     2,     2,     2,     0,    64,     0,    68,
       2,     6,     0,     0,   341,   726,   341,   341,     2,     2,
       2,     2,     2,     0,   425,     0,     0,   464,   341,   341,
     439,   437,   341,   440,   438,     2,   449,     2,     2,   454,
       0,     0,     0,     0,     0,   465,   341,     0,   341,   341,
     568,     0,   602,   624,   644,   568,     2,     2,     2,     0,
       0,   654,     0,     0,     0,     0,     0,     0,     0,     2,
       2,   795,   815,   341,   364,   365,    70,    71,    72,     2,
      66,     2,    67,  1035,   305,   306,     0,     0,     0,     0,
       0,     0,   366,   368,   367,   369,   435,   426,   427,   452,
     445,   441,     0,   341,   446,     0,   444,     2,   442,   447,
       0,     0,     0,     0,   461,   408,     0,   341,  1071,   341,
     578,   569,   561,     0,   341,     2,   341,     2,     2,     2,
       2,   341,     2,     2,     2,   700,   701,   363,    63,     0,
     341,     2,     2,   730,   341,   341,     2,     2,     2,     2,
     432,     0,     0,   451,     0,   450,   457,   455,   458,   456,
       0,     0,     0,     2,     0,   691,   655,   692,   693,   694,
     695,     0,   697,   698,   699,    69,     0,   728,   727,     0,
       0,   428,   429,   430,   431,   433,     0,   459,   460,  1076,
    1072,     0,   559,   341,     2,   341,     2,   341,   436,     0,
       0,     2,  1076,     0,   696,     0,   381,     0,     2,     2,
       2,  1077,     2,   341,     0,   341,   729,     2,  1078,  1079,
    1080,  1065,  1074,     0,     2,     0,   382,     2,   341,  1064,
     341,  1073,  1075,     0,   341,     0,     2,   690
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1796,    -2,   515, -1796, -1796, -1796, -1796, -1796, -1796, -1796,
     219, -1796,   224,    84, -1796, -1796,   408, -1796,     9,   430,
   -1796, -1796,  -911, -1796, -1043,  -239, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796,   -70,  -323, -1796,   427, -1796,  -616,
     790, -1796,  -579, -1795, -1262,   221,  -564,  -182,  -497, -1092,
    -195,   227,  -593,  -503, -1796, -1796, -1729, -1196,    42,  1931,
     379,  7776,  1970,  -471,  -650,  -459,  -606, -1796, -1796,  -509,
    -492, -1796, -1796, -1796, -1796, -1796,  -959, -1342, -1020, -1796,
   -1796, -1120, -1796, -1796, -1796, -1796,  -454, -1661, -1796,  -896,
   -1796, -1796,  -702, -1796,  -621, -1796,    18,   292, -1796,     8,
   -1796,  -900, -1796, -1796, -1796,  -884,  -423, -1796, -1796,   -41,
    -405, -1796, -1796, -1796, -1796,   801,   -18,  -449, -1796, -1796,
   -1796, -1796,  -500, -1796, -1796,   768, -1796, -1796, -1796, -1796,
    -608, -1796, -1796,  -605,  -604, -1796,   289, -1338, -1477, -1796,
   -1796,   -90, -1796,   -82, -1796, -1796, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796,  -657,   127, -1796,  -521, -1796, -1796,   246,
     140, -1796, -1796, -1796, -1796, -1796,  -197, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796,  -609, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796,  -592, -1796,  -810,
   -1796,   265, -1796,  -825, -1796, -1796, -1796,  -833, -1796, -1796,
    -839, -1796, -1796,  -339, -1796, -1796, -1796, -1796, -1796,  -352,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,  -626,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,  1894, -1796,
    -561,   326,   396, -1796, -1796, -1796, -1796,   350, -1796,  -997,
   -1796, -1796, -1796, -1796, -1796,   349, -1796,   -17, -1796, -1796,
   -1796, -1796,    -5, -1796, -1197,     2,  -412,   435,   296,  -292,
   -1796, -1796, -1796, -1796,  1041,  -233, -1796, -1796, -1796, -1796,
   -1796, -1796, -1796, -1796, -1796, -1796, -1796, -1796,  -925, -1796
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   767,   286,   287,  1652,  1661,   592,   593,   594,
     595,   596,    39,    40,    41,    42,    43,    44,    45,    46,
     288,  1786,  1787,  1788,  1789,   289,   290,   291,  1294,   292,
     293,   294,   295,   296,   297,   298,   459,   299,   300,  1094,
     887,  1662,   787,  1656,  1075,   888,   819,   910,   925,  1120,
     926,  1474,   891,   927,  1654,  1658,  1697,   789,   790,  1270,
    1806,   934,   769,  1698,   878,  1096,   929,  1407,  1730,  1401,
    1402,  1403,   919,   920,   921,   872,  1699,  1700,  1930,  1931,
    1701,  1712,  1713,  1714,  1715,  1716,  1819,  1820,  1718,   879,
     880,   881,   894,   895,  1404,   897,   903,  1405,   905,   914,
     915,   916,   917,   949,   950,   941,   942,   963,   964,   946,
     947,   972,   973,  1413,   923,   924,   930,   931,   956,   957,
    1451,   980,   981,   982,   983,   936,   990,   998,  1163,  1164,
    1165,  1166,  1167,  1056,  1057,  1753,  1743,  1059,  1060,  1061,
    1064,  1069,  1070,  1077,  1078,  1502,  1050,  1051,  1052,  1082,
    1115,  1108,  1093,  1097,  1098,  1103,   977,  1122,  1135,  1139,
    1142,  1147,  1152,  1158,  1842,  1174,  1182,  1183,  1575,  1176,
    1177,  1186,  1190,  1588,  1193,  1194,  1195,  1196,  1200,  1608,
    1204,  1205,  1208,  1209,  1247,  1252,   792,   793,  1868,   841,
     842,   843,   794,   801,   802,   803,   805,   812,   813,   814,
     821,   822,   823,   828,   829,   830,   844,  1347,   846,   847,
     848,   849,  1211,  1213,  1232,  1228,  1229,  1624,  1234,  1235,
    1236,  1237,  1240,  1241,  1259,  1263,  1118,  1112,  1304,  1268,
     770,   771,   777,  1086,   772,   778,   783,  1016,  1028,  1017,
    1018,  1019,  1020,  1021,  1022,  1041,  1125,  1034,  1035,  1487,
    1037,  1038,  1047,  1048,  1230,   420,   577,   421,   423,   436,
     753,   301,   302,   303,   434,    48,    49,     9,  1003,  1004,
    1005,  1006,  1736,  1007,  1828,  1898,  1982,  2003,  1980,  1991
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,    12,    13,    14,    15,    16,    17,  1346,   461,   896,
    1653,   578,   989,  1345,  1475,  1207,   909,   422,   424,   425,
      47,  1344,  1744,  -443,  1408,    20,   815,  1102,    19,  1840,
     804,  1711,   824,  1897,  1815,   428,  1343,  1625,  1622,  1412,
     873,    20,   431,   974,  1160,   444,   751,  1921,   898,   437,
     432,   762,   763,  1821,  1822,  1823,  1162,   776,   781,   899,
    1026,  1079,   576,   974,   -60,   429,    20,    19,  1063,    20,
      20,  1081,  1014,   876,    20,  1283,    19,   429,    18,  1436,
    1107,  1111,  1114,  1117,    20,    20,    19,  1091,  1926,   974,
     576,   426,  1141,  1141,  1141,  1146,  1141,  1074,    20,   974,
    1899,  1011,  1941,  1922,  1783,  1039,  1039,   455,  1927,    20,
    -621,  1260,  1123,  1265,    20,    20,  1089,  1084,  1681,   427,
      20,  1262,    20,   937,  -621,   430,  1210,  1212,   607,    20,
    1029,  1030, -1028,   429,  1928,   911,   614,   944, -1027,   429,
     938,   432,   944,   874,  1929,    20,  -868,   944,  1882,   435,
    1266,  1885,  -796,   429,   944,   795,   796,   871,  1087,  1784,
    -868,   825,   875,   939,  -377,   429,  -796,   935,  1012,  1747,
    1942,   893,   935,   876,  1043,   806,   435,   935,  -377,   576,
     432,   807,   935,  1090,  1159,  1817,  -337,   932,  1031,  1032,
     935,   752,   944,  1388,  1201,  -532,    20,   746,  -518,  1818,
     976,  -787,  -579,  1303,   605,   967,   968,  1023,   808,  -532,
    1044,  1045,  -518,    20,  1248,  -787,  -579,   797,  -573,  -576,
     976,   953,   935,   784,  1659,   785,   960,  1660,   454,    20,
     809,   798,  -573,   969,    20,  -751,   429,   906,   935,  1249,
     954,   762,   763,   435,   906,   961,   976,  1861,  -864,  -751,
     762,   763,   970,  -443,   907,   908,   976,   598,   893,    20,
     762,   763,  -864,   608,   609,  1197,  1785,  1667,  1832,  1310,
    1311,  1128,   438,   439,   440,  -530,    19,  -575,   441,   442,
    1024,   443,   576,  -516,    19,  -761,   429,    19,    20,  -530,
    1129,  -575, -1067,  1250,   784,  1859,   785,  -516,   909,  -761,
     784,  1198,   785,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   911,  1014,  1768,
    1410,  1849,  1864,   -60,  1623,   433,  -622,   -60,   597,   784,
     599,   785,   616,   601,  1055,   890,   893,   912,   756,   -60,
    -622,  1865,   600,  1238,  1499,  1525,   604,  1472,   889,  1406,
     762,   763,  1411,  1476,   611,   612,   613,  1284,   762,   763,
     893,  1876,    20,  1687,   890,    37,   456,   457,   458,   944,
    -621,  1498,   432,  1850,   784,  1738,   785,   889,  1424,  1720,
    1943,   784,  1894,   785,   890,  -621,   890,   890,   890,   890,
     890,  1684, -1028,  1900,  1683,  1682,    19,   889, -1027,   889,
     889,   889,   889,   889,   602,  1610,  -868, -1028,  1782,  1450,
     890,  1374,  -796, -1027,  1473,  -796,  1184,   784,    20,   785,
     890,  -868,   890,   889,  -377,    38,    38,  -796,  1688,   419,
     419,   419,   419,   889,  -337,   889,  1310,   454,  -337,  -377,
    1551,  1838,  -866,  -709,   454,  -337,  -337,  -337,  1936,  1937,
    1938,  1939,  1564,  -509,    19,  -532,  -866,  -709,  -518,  1798,
     906,  -787,  -579,  1774,  -787,  -575,   784,  -509,   785,   784,
    -532,   785,    19,  -518,   731,  1807,  -787,  -579,  -573,   732,
     733,  -573,  1729,   734,   735,   736,   737,   738,   739,   740,
    1967,  1917,  1968,  -573,  1777,  -751,   748,    20,  1988,    19,
     750,   882,   754,   755,  -530,  -530,  -530,  -530,  -864,  -530,
    -751,  -530,  -516,  -516,   758,  -516,  1926,  -516,  1702,  -516,
    1783,   883,  -578,  -864,  1978,  -530,  -530,  -869,  -641,   762,
     763,  1989,  1990,  -516,  -516,  -530,  1927,  -575,    20,  1887,
    -575,  -869,  -641,  -516,  1202,  -761,  -530,   884,  -530,  1825,
    -530,  -808,  -575,  1837,  -516,  1896,  -516,   885,  -516,  1905,
    -761,  1907,  1928,  -865,  -871,  -808,  1908,  -341,  -341,   898,
     762,   763,  1929,  -710,  -623,  1784,  1783,  -865,  -871,   460,
     899,   900,   901,  1650,  1651,   824,   886,  -710,  -623,  1881,
    1310,  1311,  1884,  1074,  1655,  1909,  -788,  1663,  -768,   429,
     890,  -642,  1912,    19,  1913,  1573,  -643,  1312,  1313,   784,
    -788,   785,  -768,   889,   741,  -642,   742,   743,   744,   912,
    -643,  1914,  1587,  1969,   890,  1023,  -509,  1923,   762,   763,
    1974,  1784,   906,  1799,  1800,  1801,  1802,   889,   876,  1277,
    1278,  1279,  1280,  -509,  1281,  1976,   762,   763,   893,  1285,
      19,  -775,   429,  1778,  1779,    19,   422,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  -775,  -509,  1710,  1981,  -424,
    -424,  1305,  1306,   762,   763,    19,  1992,  1308,   784,  1996,
     785,    19,  1785,    20,  1997,  1449,  -622,  2004,  1693,  1694,
      19,  1910,   432,  1316,  1317,  1318,  1319,   784,  1024,   785,
     453,  -622,  2016,    19,  1323,  1324,  1325,  1326,   906,  1099,
    1100,   745,  1104,  1329,   825,  -582,   429,  1506,  1735,  -706,
     429,   747,  1332,  1333,  1287,  1288,  1289,  1290,  1291,  -582,
    2007,   432,  1282,  -706,   580,   582,  1336,  1337,  1785,  1143,
    1144,   788,  1148,   788,  1136,   818,  1877,  1878,  1350,  1351,
    1352,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1361,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,  1748,   603,
    1709,  1371,  1372,  1373,   578,  1860,  1955,   762,   763,  1014,
    1377,  1378,  1379,  1380,  1381,  1987,   818,   615,  1342,  1071,
     818,   818,  1013,  1728,  1137,  1745,  1390,  1391,  1392,  1393,
    -341,   818,  -866,  -709,  1396,  1397,  1398,   890,  1737,  1727,
    1965,  1119,  1739,  -509,   784,  1162,   785,  -866,  -709,  1717,
     889,  1394,  1399,   904,   762,   763,  1895,  -341,  -509,   762,
     763,  1444,  -809,  1733,    19,  1419,  1420,  1421,  1430,   788,
     788,  1072,   784,   893,   785,  1749,  -809,  1187,    38,   762,
     763,  1292,  1732,  1293,    38,   762,   763,  1755,  1751,  1752,
    1500,  1188,  1058,   815,   762,   763,   606,   610,  1501,   784,
      19,   785,  1734,  1043,  1264,  1473,  1447,   762,   763,  1574,
    1756,    19,   433,  1455,  1456,  1457,  1231,  -869,  -641,  1459,
    1460,  1461,  1462,  1463,  1464,  1685,  1692,  1466,  1586,   784,
    1773,   785,  -869,  -641,  1085,  1468,  1469,  1470,  1471,  1044,
    1045,  -808,   890,  1611,  -808,   782,  1027,  -705,    19,  1042,
    1486,  1478,  1479,  -865,  -871,   889,  -808,  1481,  1482,  1483,
    1484,  -705,  1488,  -710,  -623,   784,   749,   785,  -865,  -871,
      19,  1492,  1493,  1494,   784,   784,   785,   785,  -710,  -623,
    1286,  1504,  1666,  1505,   304,  1675,  -788,  1994,  -768,  -788,
       0,  -642,     0,  1510,  1511,  1512,  -643,   818,  1160,  1514,
    1515,  -788,   784,  -768,   785,  1649,  -642,   784,  -341,   785,
       0,  -643,    19,  -341,  -341,     0,  1520,    19,     0,    19,
       0,  1833,   419,   419,     0,   876,     0,   876,     0,     0,
    -341,  -341,     0,  1528,  1816,     0,   937,  1530,   762,   763,
       0,  -775,     0,     0,     0,     0,   419,     0,  -341,  -341,
     784,    19,   785,   938,     0,   784,  -775,   785,  1540,  1541,
    1542,  1543,     0,     0,  1545,  1546,   799,     0,   810,   816,
     826,    19,     0,  1834,   762,   763,   939,  1554,  1555,     0,
       0,  1557,  1558,  1559,  1560,   762,   763,     0,  1563,     0,
     784,  1065,   785,     0,     0,     0,  1567,  1568,  1569,  1570,
    1571,  1314,  1066,  1149,  1067,  -582,     0,  1578,  1579,  -706,
       0,  1320,     0,     0,     0,  1582,  1583,  1879,  1054,  1585,
    -582,     0,  1327,    19,  -706,  1591,  1592,     0,  -893,    19,
    1595,  1330,     0,     0,     0,     0,  1883,   890,  1334,     0,
     909,     0,  -893,    19,   762,   763,     0,  1869,  1870,     0,
     889,  1338,     0,  1615,     0,     0,     0,  1348,  1618,  1150,
       0,     0,   818,     0,     0,  1226,  1628,     0,   818,  1804,
    1631,  1632,  1633,  1634,     0,  1269,  1636,  1637,  1638,  1655,
       0,  1640,  1641,  1642,  1643,  1644,   762,   763,    19,  1375,
    1742,   762,   763,   762,   763,     0,     0,     0,  1742,   419,
       0,   985,  1179,   986,  1074,     0,   873,  1933,  1180,     0,
       0,  1664,  1665,     0,     0,  1668,  1669,  1670,  1671,  1672,
    1673,  1970,  -809,    19,     0,  -809,     0,     0,  -341,  -341,
       0,  1676,     0,  1845,  1846,  1847,  1880,  -809,  1677,  1678,
    1679,  1680,    19,  1596,     0,   762,   763,     0,  1655,     0,
    1597,  1598,  1599,  1600,  1750,  1601,  1602,  1603,  1604,   911,
     890,     0,  1088,  1605,  1606,     0,     0,     0,  1689,  1690,
     784,  1691,   785,   889,     0,  1959,  1960,  -893,  -893,   893,
       0,     0,   445,   446,   447,   448,   449,   450,     0,     0,
       0,  1452,    20,     0,    19,     0,     0,   762,   763,   882,
       0,     0,  1719,   762,   763,     0,     0,  -705,     0,   874,
    1721,  1722,  1723,  1724,  1725,  1726,     0,   762,   763,   883,
       0,  -893,  -705,   773,     0,     0,     0,    19,   875,   987,
     759,     0,   999,     0,   876,  -893,  -893,     0,     0,   876,
     786,   952,   786,     0,   817,   884,   959,     0,   451,     0,
       0,   966,     0,   760,   761,   885,     0,  -893,  -893,   984,
     943,     0,   762,   763,     0,   943,     0,     0,   933,  1507,
     943,  1029,  1030,   951,     0,     0,  1731,   943,   958,     0,
      19,     0,  1951,   965,   886,   788,     0,     0,     0,   817,
     817,  1127,     0,     0,     0,     0,  1073,   762,   763,  -341,
    -341,  -341,  -341,     0,  -341,     0,  -341,  1178,     0,   774,
     817,  1073,     0,     0,  1702,   943,   762,   763,     0,   452,
    -341,  -341,     0,  1126,  1740,  1741,  1862,  1704,  1705,  1031,
    1032,   943,     0,   890,  1746,     0,  1742,  1000,   786,   786,
       0,   784,  1836,   785,  1707,  1708,   889,     0,     0,  1073,
       0,  -341,  -341,  -341,  -341,     0,  -341,  1001,  -341,     0,
       0,     0,     0,    19,     0,   788,     0,     0,   762,   763,
       0,   906,  -341,  -341,     0,  1565,    19,     0,     0,     0,
       0,   818,     0,   890,     0,  1253,  1254,  1686,  -893,  1255,
    1256,  1257,  1754,   784,     0,   785,   889,   890,   890,   890,
    1848,   762,   763,  -893,  1589,   -56,    19,     0,     0,     0,
     889,   889,   889,  1130,     0,    20,     0,     0,     0,    19,
       0,     0,  1742,     0,  1757,  1758,  1759,  1760,  1761,  1762,
    1763,  1764,  1765,  1766,  1767,     0,  1008,  1616,     0,     0,
       0,     0,     0,   890,     0,  1626,     0,     0,  1769,  1770,
    1630,  1771,  1131,  1772,   762,   763,   889,     0,     0,     0,
       0,   912,   882,     0,     0,     0,   786,    19,     0,     0,
    -341,  -341,  -341,  -341,     0,  -341,     0,  -341,  1775,  1776,
       0,     0,   883,     0,     0,     0,     0,  1780,  1781,  1132,
       0,  -341,  -341,     0,     0,  1791,   779,     0,   773,     0,
       0,     0,  1792,  1793,     0,   759,  1133,     0,   884,  1009,
       0,     0,   784,     0,   785,  1795,     0,     0,   885,  -347,
    -347,  -347,  -347,   818,  -347,     0,  -347,   818,   760,   761,
    1808,  1809,  1810,  1811,  1812,  1813,  1814,   762,   763,    19,
    -347,  -347,     0,   943,  -453,    19,   890,   886,    19,  1607,
     762,   763,   784,     0,   785,  -341,  -341,  1826,  -341,   889,
    -341,  -347,  -341,  -347,     0,  1010,  -341,  -341,  -341,  -341,
    1830,  -341,     0,  -341,     0,     0,  -341,  -341,  1835,     0,
       0,     0,     0,     0,   774,     0,     0,  -341,  -341,     0,
       0,     0,   943,   762,   763,  1153,  1851,   784,     0,   785,
     943,     0,  1852,     0,     0,  1853,  1854,  1855,   784,   898,
     785,  1856,  1857,  1858,     0,    19,    19,     0,  1863,     0,
     899,   900,   901,     0,     0,    20,  1871,  1872,  1873,  1874,
    1875,  1154,     0,  1340,     0,     0,     0,   817,     0,     0,
       0,   762,   763,  1886,     0,  1888,  1889,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,  1901,  1902,  1903,    19,   795,   796,
       0,  1155,     0,     0,     0,     0,     0,  1915,  1916,   806,
       0,   906,     0,  1156,     0,   807,     0,  1918,     0,  1919,
       1,     2,     3,     4,     5,     6,     7,     8,   907,   908,
       0,     0,     0,     0,  -341,  -341,  -341,  -341,     0,  -341,
       0,  -341,   808,   762,   763,  1935,     0,     0,     0,   762,
     763,     0,   762,   763,    36,  -341,  -341,     0,     0,     0,
     797,     0,     0,  1945,   809,  1947,  1948,  1949,  1950,    19,
    1952,  1953,  1954,     0,   798,     0,   784,     0,   785,  1957,
    1958,     0,     0,     0,  1961,  1962,  1963,  1964,   759,     0,
       0,     0,   795,   796,   -56,     0,    37,   806,   -56,     0,
       0,  1972,     0,   807,     0,   784,     0,   785,     0,     0,
     -56,   760,   761,     0,    19,     0,   831,   832,   833,   834,
     762,   763,  1496,     0,     0,     0,     0,     0,     0,  1023,
     808,     0,  1984,     0,  1986,     0,   815,    19,  1839,  1993,
    1841,  1843,  1844,   943,     0,   835,  1998,  1999,  2000,     0,
    2001,     0,   809,     0,   797,  2006,     0,     0,   943,   764,
     765,     0,  2009,     0,    19,  2011,     0,   766,   798,     0,
       0,   762,   763,     0,  2017,  1866,    19,     0,     0,     0,
     836,   837,     0,     0,   786,     0,  1105,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,  1024,     0,     0,     0,  -341,  -341,  -341,  -341,
       0,  -341,     0,  -341,  1168,     0,     0,     0,     0,     0,
     943,  1242,  1073,  1073,  1657,  1794,  1073,  -341,  -341,     0,
       0,     0,  1796,  1797,     0,     0,  1803,     0,  1805,     0,
    1169,     0,     0,   762,   763,     0,     0,   906,   784,     0,
     785,     0,   838,     0,     0,     0,  1824,     0,     0,     0,
       0,  1071,     0,    36,   786,     0,     0,     0,     0,   839,
       0,     0,     0,  1827,     0,  1829,     0,  1243,     0,  1170,
     817,  1341,     0,  1831,     0,  1944,   817,  1946,   762,   763,
       0,  -341,  -341,    20,     0,     0,  1171,     0,     0,  1244,
       0,  1956,  1065,   -56,     0,    37,     0,   -56,  -341,  -341,
       0,   762,   763,  1497,     0,  1067,     0,  1073,  1073,   -56,
       0,     0,  1696,     0,     0,  -341,  -341,  -341,  -341,     0,
    -341,     0,  -341,   784,  1867,   785,     0,     0,   762,   763,
       0,     0,     0,     0,     0,     0,  -341,  -341,     0,  1245,
     762,   763,  1172,     0,  1983,     0,  1985,     0,  1119,  1890,
    1891,  1892,  1893,     0,     0,  1109,     0,   784,     0,   785,
       0,  1831,  1310,  1311,  2002,  1383,  2005,  1384,  1904,  1385,
    1906,     0,     0,     0,  1911,  1310,  1311,  1382,  1383,  2012,
    1384,  2013,  1385,  1386,  1387,  2015,     0,  -341,  -341,  -341,
    -341,     0,  -341,     0,  -341,  1920,  1386,  1387,  1924,  1925,
       0,     0,     0,     0,     0,     0,     0,     0,  -341,  -341,
       0,  1932,     0,     0,  1934,     0,   817,     0,     0,   -56,
      19,     0,     0,     0,     0,  1940,     0,     0,     0,   784,
      20,   785,  -341,  -341,  -341,  -341,     0,  -341,     0,  -341,
    -341,  -341,  -341,  -341,     0,  -341,     0,  -341,     0,     0,
       0,     0,     0,  -341,  -341,     0,     0,     0,     0,     0,
    1966,  -341,  -341,     0,   -56,    19,     0,     0,     0,     0,
       0,  1971,     0,  1973,   784,    20,   785,     0,     0,     0,
       0,     0,   784,     0,   785,  1975,     0,     0,     0,  1977,
       0,     0,     0,     0,  -341,  -341,  -341,  -341,  1979,  -341,
       0,  -341,     0,     0,     0,    19,     0,     0,     0,     0,
       0,  1979,  1995,     0,     0,  -341,  -341,     0,   583,   584,
       0,     0,     0,   585,   586,   587,   588,   589,   590,   591,
       0,     0,  2008,     0,  2010,     0,   784,     0,   785,     0,
       0,     0,  2014,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,   709,   710,   711,   712,   713,
     714,   715,   716,   717,   718,   719,   720,   721,   722,   723,
     724,   725,   726,   727,   728,   729,   730,     0,   831,   832,
     833,   834,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    19,     0,   762,
     763,     0,     0,     0,     0,     0,     0,   835,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   817,  1696,   817,
     817,   817,     0,     0,     0,   943,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,   836,   837,     0,     0,   831,   832,   833,   834,
    1214,     0,     0,     0,   817,     0,  1073,  1073,    36,     0,
     991,   800,  1215,   811,   820,   827,     0,   845,     0,   943,
      20,     0,  1216,     0,     0,   835,     0,  1217,     0,     0,
       0,     0,  1218,     0,     0,     0,     0,  1219,  1073,  1696,
       0,     0,     0,     0,     0,  1220,     0,     0,     0,     0,
      37,     0,   -56,    36,     0,  -416,     0,     0,     0,     0,
     836,   837,  1049,  1073,   838,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1221,  -416,     0,  1222,     0,  1223,
       0,   839,     0,     0,   992,     0,  1271,  1272,  1273,  1274,
    1275,  1276,  1307,     0,     0,    37,     0,  1309,     0,     0,
    1224,  -416,     0,     0,     0,     0,  1203,  1073,  1315,  1696,
    1227,  -416,  1233,     0,   817,     0,   817,  1321,     0,  1322,
       0,   762,   763,   993,   994,   995,     0,     0,  1328,     0,
     817,     0,   838,     0,  1073,  1073,   996,  1331,     0,     0,
    -416,   850,  1702,     0,  1335,     0,   851,     0,   852,   839,
       0,     0,     0,  1703,     0,  1704,  1705,     0,  1339,     0,
       0,     0,     0,  1349,     0,     0,     0,  1706,     0,   882,
       0,     0,  1707,  1708,     0,     0,     0,     0,     0,   853,
     854,   855,     0,   817,     0,   817,  1370,   817,  -416,   883,
       0,   856,     0,     0,   857,  1376,     0,     0,   858,  -416,
    -416,  -416,     0,   817,   859,   817,     0,     0,   860,     0,
     861,  1389,     0,     0,     0,   884,     0,     0,   817,  1395,
     817,   862,     0,     0,   817,   885,     0,     0,     0,     0,
       0,  1400,   863,     0,   864,  1409,     0,   865,  1414,     0,
     866,     0,     0,     0,     0,  1415,  1416,  1417,     0,     0,
    1418,     0,     0,     0,   886,     0,  1422,     0,     0,     0,
       0,  1423,     0,     0,  1425,  1426,  1427,  1428,  1429,     0,
       0,  1431,  1432,  1433,  1434,  1435,     0,     0,  1437,  1438,
    1439,  1440,  1441,  1442,  1443,    19,     0,  1445,     0,     0,
       0,  1446,     0,     0,     0,     0,     0,  1453,  1454,     0,
       0,     0,   898,     0,  1458,     0,     0,     0,     0,     0,
       0,     0,  1465,   899,   900,   901,     0,  1467,     0,     0,
       0,     0,   867,   868,     0,     0,  -416,  -416,  -416,  -416,
     869,  -416,     0,  -416,     0,     0,  1477,     0,     0,     0,
       0,     0,  1480,     0,     0,     0,     0,  -416,  -416,  1485,
       0,     0,  1489,     0,     0,  1490,  1491,     0,     0,     0,
       0,     0,  1495,     0,     0,     0,  1503,     0,  -416,     0,
    -416,     0,     0,     0,     0,  1508,     0,     0,  1509,     0,
     784,     0,   785,     0,  1513,     0,     0,     0,     0,     0,
       0,     0,  1516,     0,     0,     0,  1517,     0,     0,     0,
    1518,  1519,     0,     0,     0,     0,     0,  1521,     0,     0,
       0,     0,  1522,  1523,  1524,     0,     0,  1526,  1527,     0,
       0,     0,  1529,     0,     0,     0,  1531,   759,     0,  1532,
       0,     0,  1533,     0,     0,     0,  1534,     0,     0,  1535,
    1536,  1537,  1538,  1539,     0,     0,     0,     0,     0,  1544,
     760,   761,     0,  1547,     0,     0,  1548,  1549,  1550,   762,
     763,  1552,  1553,     0,     0,     0,  1556,     0,     0,     0,
       0,     0,  1561,  1562,     0,     0,     0,     0,     0,     0,
       0,  1566,   784,     0,   785,     0,     0,     0,  1572,     0,
       0,  1576,  1577,     0,     0,     0,     0,  1580,   764,   765,
    1581,     0,     0,     0,  1584,     0,     0,     0,     0,     0,
    1590,     0,     0,     0,  1593,  1594,     0,     0,     0,  1609,
       0,     0,     0,  1612,     0,  1613,    21,  1614,   579,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,  1617,     0,     0,  1619,     0,     0,     0,
       0,  1627,     0,     0,  1629,     0,     0,     0,     0,     0,
       0,  1635,     0,     0,     0,     0,  1639,     0,     0,     0,
       0,     0,     0,  1645,     0,     0,     0,  1646,  1647,     0,
       0,     0,  1648,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -913,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,  1272,
    1273,  1274,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,  -913,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,     0,     0,  -417,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,   581,
    -417,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   850,     0,  -415,   418,     0,   851,     0,   852,
       0,     0,   882,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -523,    19,  -415,     0,     0,     0,     0,     0,
       0,     0,   883,     0,    36,     0,  -523,     0,     0,     0,
     853,   854,   855,     0,     0,     0,     0,     0,     0,     0,
    -415,     0,   856,     0,     0,   857,     0,     0,   884,   858,
    -415,  -913,     0,     0,     0,   859,     0,     0,   885,   860,
       0,   861,     0,     0,    19,     0,     0,     0,  -417,     0,
       0,     0,   862,  -417,     0,  -417,     0,     0,  1214,  -415,
       0,     0,     0,   863,     0,   864,     0,   886,   865,     0,
    1215,   866,     0,     0,     0,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,  1217,  -417,  -417,  -417,     0,
    1218,   762,   763,     0,     0,  1219,     0,     0,  -417,     0,
       0,  -417,     0,  1220,   418,  -417,  -417,  -415,     0,     0,
       0,  -417,     0,     0,     0,  -417,     0,  -417,  -415,  -415,
    -415,     0,     0,     0,  -523,     0,     0,     0,  -417,  -523,
       0,  -523,  1221,     0,     0,  1222,     0,  1223,     0,  -417,
       0,  -417,     0,     0,  -417,  -913,     0,  -417,     0,     0,
       0,     0,     0,   867,   868,     0,     0,     0,  1224,     0,
    -913,   869,  -523,  -523,  -523,  -523,     0,   762,   763,     0,
       0,     0,     0,     0,  -523,     0,     0,  -523,     0,     0,
       0,  -523,  -523,     0,     0,     0,     0,  -523,     0,     0,
       0,  -523,     0,  -523,     0,     0,     0,     0,  -537,    19,
       0,     0,     0,     0,  -523,  -523,     0,     0,     0,  -417,
       0,     0,  -537,     0,     0,  -523,     0,  -523,   762,   763,
    -523,     0,     0,  -523,     0,     0,     0,     0,  -417,  -417,
    -417,     0,     0,  1225,     0,     0,     0,  -417,     0,  -417,
       0,     0,     0,     0,     0,  -415,  -415,  -415,  -415,     0,
    -415,     0,  -415,  -341,  -341,  -341,  -341,     0,  -341,     0,
    -341,     0,     0,  -679,    19,     0,  -415,  -415,     0,     0,
       0,     0,     0,     0,  -341,  -341,  -417,  -679,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -415,     0,  -415,
       0,  -417,     0,     0,     0,   784,     0,   785,     0,     0,
       0,     0,     0,     0,     0,  -523,  -523,     0,     0,     0,
       0,     0,     0,  -523,     0,     0,     0,     0,     0,     0,
       0,  -523,  -523,     0,  -523,     0,  -523,     0,  -523,     0,
    -537,     0,     0,     0,     0,  -537,     0,  -537,     0,     0,
       0,     0,  -523,  -523,     0,     0,     0,     0,     0,     0,
       0,     0,  -523,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -523,     0,  -523,     0,  -523,  -537,  -537,
    -537,     0,     0,   762,   763,     0,     0,     0,  -537,     0,
    -537,     0,     0,  -537,     0,     0,     0,  -537,   978,     0,
       0,     0,     0,  -537,     0,  -679,     0,  -537,     0,  -537,
    -679,     0,  -679,     0,     0,     0,     0,     0,     0,     0,
    -537,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -537,     0,  -537,     0,     0,  -537,     0,     0,  -537,
       0,     0,     0,  -679,  -679,  -679,     0,     0,   762,   763,
       0,     0,     0,     0,     0,  -679,     0,     0,  -679,     0,
       0,     0,  -679,  1191,     0,     0,     0,     0,  -679,     0,
       0,     0,  -679,     0,  -679,     0,     0,     0,     0,  -668,
      19,     0,     0,     0,     0,  -679,     0,     0,     0,     0,
       0,     0,     0,  -668,     0,     0,  -679,     0,  -679,     0,
    -525,  -679,     0,     0,  -679,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -525,     0,     0,     0,     0,     0,
       0,  -537,  -537,     0,     0,     0,     0,     0,     0,  -537,
       0,     0,     0,     0,     0,     0,     0,  -537,  -537,     0,
    -537,     0,  -537,     0,  -537,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -537,  -537,
       0,     0,     0,     0,     0,     0,  -539,     0,  -537,     0,
       0,  -537,     0,     0,     0,     0,     0,     0,     0,  -537,
    -539,  -537,     0,  -537,     0,     0,  -679,  -679,     0,     0,
       0,     0,     0,     0,  -679,     0,     0,     0,     0,     0,
       0,     0,  -679,  -679,     0,  -679,     0,  -679,     0,  -679,
       0,  -668,     0,     0,     0,     0,  -668,     0,  -668,     0,
       0,     0,     0,  -679,  -679,     0,     0,     0,     0,     0,
       0,     0,   850,  -679,     0,     0,  -679,   851,     0,   852,
       0,     0,     0,     0,  -679,     0,  -679,     0,  -679,  -668,
    -668,  -668,     0,     0,   762,   763,     0,     0,     0,     0,
       0,  -668,     0,  -668,  -668,     0,     0,     0,  -668,  -668,
     853,   854,   855,   937,  -668,     0,     0,     0,  -668,     0,
    -668,     0,   856,     0,     0,   857,     0,     0,     0,   858,
     938,  -668,     0,     0,     0,   859,     0,     0,   850,   860,
       0,   861,  -668,   851,  -668,   852,     0,  -668,     0,     0,
    -668,     0,   862,   939,     0,     0,     0,     0,     0,  -500,
      19,     0,     0,   863,     0,   864,     0,     0,   865,     0,
       0,   866,     0,  -500,     0,     0,   853,   854,   855,     0,
       0,     0,     0,     0,     0,     0,  1448,     0,   856,     0,
       0,   857,     0,     0,     0,   858,     0,     0,     0,     0,
       0,   859,     0,     0,     0,   860,     0,   861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   862,     0,
       0,     0,     0,     0,  -681,     0,     0,     0,     0,   863,
       0,   864,  -668,  -668,   865,     0,     0,   866,  -681,     0,
    -668,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   867,   868,     0,     0,     0,     0,     0,
       0,   869,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -668,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -500,     0,     0,  -668,     0,  -500,     0,  -500,     0,
    -525,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   784,     0,   785,     0,  -525,     0,     0,     0,   867,
     868,     0,     0,     0,     0,     0,     0,   869,     0,  -500,
    -500,  -500,     0,     0,   762,   763,     0,     0,     0,     0,
       0,  -500,     0,     0,  -500,     0,     0,     0,  -500,     0,
       0,     0,     0,     0,  -500,     0,   850,     0,  -500,     0,
    -500,   851,     0,   852,     0,     0,  -539,     0,     0,  -539,
       0,  -500,     0,     0,     0,     0,     0,   784,     0,   785,
       0,  -539,  -500,     0,  -500,     0,     0,  -500,     0,     0,
    -500,     0,     0,     0,   853,   854,   855,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   856,     0,     0,   857,
       0,     0,     0,   858,     0,     0,     0,     0,     0,   859,
       0,     0,     0,   860,     0,   861,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   862,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   863,     0,   864,
       0,     0,   865,     0,     0,   866,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -500,  -500,     0,     0,     0,     0,     0,     0,
    -500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -500,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -500,     0,     0,   867,   868,     0,
       0,     0,     0,     0,     0,   869,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -681,     0,    19,  -681,    19,     0,
       0,     0,     0,     0,     0,   784,    20,   785,     0,  -681,
       0,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,  1620,     0,     0,     0,     0,   850,
       0,     0,     0,     0,   851,     0,   852,     0,  1214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1215,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,  1217,     0,   853,   854,   855,
    1218,     0,   762,   763,     0,  1219,     0,     0,     0,   856,
       0,     0,   857,  1220,     0,     0,   858,     0,     0,     0,
       0,     0,   859,     0,     0,   850,   860,     0,   861,     0,
     851,     0,   852,     0,     0,     0,     0,     0,     0,   862,
       0,     0,  1221,     0,     0,  1222,     0,  1223,     0,     0,
     863,     0,   864,     0,     0,   865,     0,     0,   866,     0,
       0,     0,     0,   853,   854,   855,     0,     0,  1224,     0,
       0,     0,     0,     0,     0,   856,     0,     0,   857,     0,
       0,     0,   858,   873,     0,     0,     0,     0,   859,     0,
       0,     0,   860,     0,   861,     0,     0,     0,     0,   850,
       0,     0,     0,     0,   851,   862,   852,   831,   832,   833,
     834,     0,     0,     0,     0,     0,   863,     0,   864,     0,
       0,   865,     0,     0,   866,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,   853,   854,   855,
     867,   868,     0,  1621,   418,     0,     0,     0,   869,   856,
       0,  1179,   857,     0,     0,     0,   858,  1180,     0,     0,
       0,     0,   859,     0,     0,     0,   860,     0,   861,     0,
       0,   836,   837,     0,     0,     0,     0,     0,     0,   862,
       0,     0,     0,     0,     0,  -913,   874,     0,     0,     0,
     863,     0,   864,     0,     0,   865,     0,     0,   866,     0,
    -913,     0,     0,     0,     0,   875,   867,   868,     0,     0,
       0,     0,     0,     0,   869,     0,   876,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   838,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     839,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     867,   868,  -341,  -341,     0,     0,     0,     0,   869,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -341,
    -341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   429,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -316,   784,     0,   785,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,     0,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
    -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,  -316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -316,     0,  -316,  -316,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -316,     0,     0,  -316,  -316,  -316,   429,  -316,     0,
    -316,  -316,  -316,  -316,  -316,     0,     0,  -321,     0,     0,
       0,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,     0,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,  -321,
    -321,  -321,  -321,  -321,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -321,     0,  -321,  -321,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -321,     0,     0,  -321,  -321,
    -321,     0,  -321,     0,  -321,  -321,  -321,  -321,  -321, -1050,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,    52,    53,    54,    55,    56,    57,
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
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   274,     0,   275,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,     0,
     278,   279,     0,     0,     0,     0,   280,   281,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,   282,     0,   283,     0,   284,   285,    20,
      51,     0,     0,    52,    53,    54,    55,    56,    57,    58,
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
     229,   230,   231,   232,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   274,     0,   275,   276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     279,     0,     0,     0,     0,   280,   281,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,   282,     0,   283,    51,   284,   285,    52,    53,
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
     234,   235,   236,     0,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
       0,   275,   276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,     0,   278,   279,     0,     0,     0,     0,
     280,   281,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,  1790,     0,     0,     0,   282,     0,   283,
       0,   284,   285,    52,    53,    54,    55,    56,    57,    58,
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
     229,   230,   231,   232,   233,   234,   235,   236,     0,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   277,     0,   278,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   850,     0,
       0,     0,   282,   851,   283,   852,   284,   285,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   853,   854,   855,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   856,     0,
       0,   857,     0,     0,     0,   858,     0,     0,     0,     0,
       0,   859,     0,     0,     0,   860,     0,   861,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   862,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   863,
    1695,   864,     0,     0,   865,     0,     0,   866,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   867,
     868,     0,     0,     0,     0,     0,     0,   869,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   784,     0,   785,
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
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,     0,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   277,     0,   278,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   757,     0,   282,
       0,   283,     0,   284,   285,    52,    53,    54,    55,    56,
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
       0,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   277,
       0,   278,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -913,    19,     0,     0,     0,     0,
       0,     0,     0,     0,   282,    20,   283,     0,   284,   285,
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
     415,   416,   417,   768,   775,   780,   791,     0,   791,     0,
       0,     0,   840,     0,   870,   877,   892,   902,   913,   918,
     922,   928,   928,   922,     0,   940,   945,   948,   922,     0,
     940,   945,   955,   922,     0,   940,   945,   962,   922,     0,
     928,   928,   940,   945,   971,   975,   979,     0,   988,   997,
    1002,  1015,  1025,  1033,  1036,  1040,  1040,  1046,     0,     0,
    1062,  1068,  1076,  1080,  1083,   975,  1092,  1095,  1095,  1095,
    1101,  1095,  1106,  1110,  1113,  1116,  1121,  1124,   922,     0,
     940,   945,  1134,  1138,  1140,  1140,  1140,  1145,  1140,  1151,
    1157,   975,  1161,  1173,  1175,     0,  1181,  1185,  1189,  1192,
    1199,   975,     0,  1206,   791,   791,     0,   840,     0,  1239,
    1246,  1251,  1258,  1261,  1138,  1267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   418,    52,    53,    54,    55,    56,    57,
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
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,  1053,   277,    52,
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
     233,   234,   235,   236,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,  1053,   277,    52,    53,    54,    55,    56,    57,
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
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   277,    52,
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
     233,   234,   235,   236,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1674,   277,    52,    53,    54,    55,    56,    57,
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
     228,   229,   230,   231,   232,   233,   234,   235,   236,     0,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1053,   277,    52,
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
     233,   234,   235,   236,     0,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   277
};

static const yytype_int16 yycheck[] =
{
       2,     3,     4,     5,     6,     7,     8,   846,   300,   630,
    1272,   423,   662,   846,  1011,   717,   632,    15,    16,    17,
      11,   846,  1499,   133,   920,    11,   174,   684,     1,  1758,
     622,  1373,   190,  1828,   144,    37,   846,  1234,  1234,   923,
     190,    11,    44,   659,   294,   284,   359,   160,   191,    51,
     363,   175,   176,  1714,  1715,  1716,   706,   618,   619,   202,
     666,   677,   375,   679,     0,     1,    11,     1,   674,    11,
      11,   677,   665,   323,    11,   360,     1,     1,     0,   963,
     686,   687,   688,   689,    11,    11,     1,   680,    58,   705,
     375,    11,   698,   699,   700,   701,   702,   676,    11,   715,
    1829,   665,  1897,   216,   169,   669,   670,    11,    78,    11,
       0,   727,   691,   729,    11,    11,   680,   678,  1314,    11,
      11,   727,    11,   173,    14,   243,   718,   719,   451,    11,
     149,   150,     0,     1,   104,   632,   459,   640,     0,     1,
     190,   363,   645,   293,   114,    11,     0,   650,  1809,   359,
     729,  1812,     0,     1,   657,   130,   131,   628,   679,   224,
      14,   319,   312,   213,     0,     1,    14,   638,   665,  1507,
    1899,   630,   643,   323,   193,   135,   359,   648,    14,   375,
     363,   141,   653,   680,   705,   144,    11,   636,   207,   208,
     661,   603,   695,   895,   715,     0,    11,   362,     0,   158,
     659,     0,     0,    14,   443,   654,   655,    61,   168,    14,
     229,   230,    14,    11,   148,    14,    14,   192,     0,   363,
     679,   644,   693,   371,   258,   373,   649,   261,   298,    11,
     190,   206,    14,   656,    11,     0,     1,   134,   709,   173,
     645,   175,   176,   359,   134,   650,   705,   363,     0,    14,
     175,   176,   657,   363,   151,   152,   715,   243,   717,    11,
     175,   176,    14,   236,   237,   190,   331,   360,  1745,   329,
     330,   694,   274,   275,   276,     0,     1,     0,   280,   281,
     134,   283,   375,     0,     1,     0,     1,     1,    11,    14,
     695,    14,   363,   227,   371,   360,   373,    14,   914,    14,
     371,   226,   373,   305,   306,   307,   308,   309,   310,   311,
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
     412,   413,   414,   415,   416,   417,   418,   914,  1011,  1616,
     923,   362,   367,   359,  1234,    46,     0,   363,   430,   371,
     432,   373,   369,   435,   673,   630,   895,   632,   362,   375,
      14,   367,   433,   358,  1050,  1102,   359,  1011,   630,   920,
     175,   176,   923,  1017,   456,   457,   458,   359,   175,   176,
     919,  1803,    11,   329,   659,   361,   370,   371,   372,   972,
     360,  1050,   363,   362,   371,  1472,   373,   659,   949,  1375,
     362,   371,  1824,   373,   679,   375,   681,   682,   683,   684,
     685,  1330,   360,  1831,  1327,  1320,     1,   679,   360,   681,
     682,   683,   684,   685,   319,  1207,   360,   375,     1,   980,
     705,   362,   360,   375,  1011,   363,   711,   371,    11,   373,
     715,   375,   717,   705,   360,    10,    11,   375,  1338,    14,
      15,    16,    17,   715,   359,   717,   329,   607,   363,   375,
    1146,   318,     0,     0,   614,   370,   371,   372,  1890,  1891,
    1892,  1893,   292,     0,     1,   360,    14,    14,   360,    11,
     134,   360,   360,   358,   363,   363,   371,    14,   373,   371,
     375,   373,     1,   375,   576,   362,   375,   375,   360,   577,
     578,   363,   374,   585,   586,   587,   588,   589,   590,   591,
    1932,  1853,  1934,   375,   374,   360,   598,    11,   187,     1,
     602,    58,   604,   605,   329,   330,   331,   332,   360,   334,
     375,   336,   329,   330,   616,   332,    58,   334,   133,   336,
     169,    78,   363,   375,  1966,   350,   351,     0,     0,   175,
     176,   220,   221,   350,   351,   360,    78,   360,    11,   158,
     363,    14,    14,   360,   190,   360,   371,   104,   373,   362,
     375,     0,   375,   362,   371,   190,   373,   114,   375,   362,
     375,   362,   104,     0,     0,    14,   362,   329,   330,   191,
     175,   176,   114,     0,     0,   224,   169,    14,    14,   300,
     202,   203,   204,   259,   260,   190,   143,    14,    14,  1809,
     329,   330,  1812,  1272,  1273,   362,     0,  1276,     0,     1,
     895,     0,   362,     1,   362,  1176,     0,   346,   347,   371,
      14,   373,    14,   895,   251,    14,   253,   254,   255,   914,
      14,   362,  1193,   190,   919,    61,   173,   362,   175,   176,
     362,   224,   134,   342,   343,   344,   345,   919,   323,   741,
     742,   743,   744,   190,   746,   362,   175,   176,  1207,   751,
       1,     0,     1,   355,   356,     1,   754,   759,   760,   761,
     762,   763,   764,   765,   766,    14,   213,  1373,   297,   362,
     363,   773,   774,   175,   176,     1,   362,   779,   371,   362,
     373,     1,   331,    11,   362,   980,   360,   362,  1367,  1368,
       1,   362,   363,   795,   796,   797,   798,   371,   134,   373,
     285,   375,   362,     1,   806,   807,   808,   809,   134,   682,
     683,   592,   685,   815,   319,     0,     1,  1056,  1468,     0,
       1,   597,   824,   825,   238,   239,   240,   241,   242,    14,
     362,   363,   748,    14,   426,   427,   838,   839,   331,   699,
     700,   620,   702,   622,   142,   624,  1805,  1806,   850,   851,
     852,   853,   854,   855,   856,   857,   858,   859,   860,   861,
     862,   863,   864,   865,   866,   867,   868,   869,  1525,   439,
    1373,   873,   874,   875,  1286,  1786,  1919,   175,   176,  1472,
     882,   883,   884,   885,   886,  1977,   665,   460,   846,   140,
     669,   670,   665,  1402,   192,  1501,   898,   899,   900,   901,
     329,   680,   360,   360,   906,   907,   908,  1102,  1472,  1401,
    1930,   690,  1476,   360,   371,  1565,   373,   375,   375,  1373,
    1102,   903,   914,   631,   175,   176,  1826,   329,   375,   175,
     176,   972,     0,   161,     1,   937,   938,   939,   956,   718,
     719,   192,   371,  1402,   373,  1551,    14,   145,   433,   175,
     176,   365,  1452,   367,   439,   175,   176,  1565,  1563,  1563,
    1050,   159,   673,   174,   175,   176,   451,   452,  1050,   371,
       1,   373,   200,   193,   728,  1472,   978,   175,   176,  1176,
    1589,     1,   603,   985,   986,   987,   721,   360,   360,   991,
     992,   993,   994,   995,   996,  1334,  1348,   999,  1193,   371,
    1626,   373,   375,   375,   678,  1007,  1008,  1009,  1010,   229,
     230,   360,  1207,  1208,   363,   619,   666,     0,     1,   670,
    1037,  1023,  1024,   360,   360,  1207,   375,  1029,  1030,  1031,
    1032,    14,  1037,   360,   360,   371,   601,   373,   375,   375,
       1,  1043,  1044,  1045,   371,   371,   373,   373,   375,   375,
     754,  1053,  1285,  1055,    13,  1294,   360,  1982,   360,   363,
      -1,   360,    -1,  1065,  1066,  1067,   360,   846,   294,  1071,
    1072,   375,   371,   375,   373,  1270,   375,   371,   329,   373,
      -1,   375,     1,   329,   330,    -1,  1088,     1,    -1,     1,
      -1,  1748,   577,   578,    -1,   323,    -1,   323,    -1,    -1,
     346,   347,    -1,  1105,  1710,    -1,   173,  1109,   175,   176,
      -1,   360,    -1,    -1,    -1,    -1,   601,    -1,   329,   330,
     371,     1,   373,   190,    -1,   371,   375,   373,  1130,  1131,
    1132,  1133,    -1,    -1,  1136,  1137,   621,    -1,   623,   624,
     625,     1,    -1,  1749,   175,   176,   213,  1149,  1150,    -1,
      -1,  1153,  1154,  1155,  1156,   175,   176,    -1,  1160,    -1,
     371,   181,   373,    -1,    -1,    -1,  1168,  1169,  1170,  1171,
    1172,   792,   192,   134,   194,   360,    -1,  1179,  1180,   360,
      -1,   802,    -1,    -1,    -1,  1187,  1188,  1808,   673,  1191,
     375,    -1,   813,     1,   375,  1197,  1198,    -1,     0,     1,
    1202,   822,    -1,    -1,    -1,    -1,  1812,  1402,   829,    -1,
    1826,    -1,    14,     1,   175,   176,    -1,  1796,  1797,    -1,
    1402,   842,    -1,  1225,    -1,    -1,    -1,   848,  1230,   190,
      -1,    -1,  1011,    -1,    -1,   720,  1238,    -1,  1017,  1698,
    1242,  1243,  1244,  1245,    -1,   730,  1248,  1249,  1250,  1828,
      -1,  1253,  1254,  1255,  1256,  1257,   175,   176,     1,   880,
    1499,   175,   176,   175,   176,    -1,    -1,    -1,  1507,   754,
      -1,   190,   184,   192,  1853,    -1,   190,  1883,   190,    -1,
      -1,  1283,  1284,    -1,    -1,  1287,  1288,  1289,  1290,  1291,
    1292,  1941,   360,     1,    -1,   363,    -1,    -1,   329,   330,
      -1,  1303,    -1,  1762,  1763,  1764,  1809,   375,  1310,  1311,
    1312,  1313,     1,   296,    -1,   175,   176,    -1,  1897,    -1,
     303,   304,   305,   306,  1563,   308,   309,   310,   311,  1826,
    1525,    -1,   192,   316,   317,    -1,    -1,    -1,  1340,  1341,
     371,  1343,   373,  1525,    -1,  1924,  1925,   149,   150,  1808,
      -1,    -1,   232,   233,   234,   235,   236,   237,    -1,    -1,
      -1,   982,    11,    -1,     1,    -1,    -1,   175,   176,    58,
      -1,    -1,  1374,   175,   176,    -1,    -1,   360,    -1,   293,
    1382,  1383,  1384,  1385,  1386,  1387,    -1,   175,   176,    78,
      -1,   193,   375,   136,    -1,    -1,    -1,     1,   312,   318,
     143,    -1,   190,    -1,   323,   207,   208,    -1,    -1,   323,
     620,   643,   622,    -1,   624,   104,   648,    -1,   298,    -1,
      -1,   653,    -1,   166,   167,   114,    -1,   229,   230,   661,
     640,    -1,   175,   176,    -1,   645,    -1,    -1,   637,  1060,
     650,   149,   150,   642,    -1,    -1,  1448,   657,   647,    -1,
       1,    -1,  1911,   652,   143,  1234,    -1,    -1,    -1,   669,
     670,   693,    -1,    -1,    -1,    -1,   676,   175,   176,   329,
     330,   331,   332,    -1,   334,    -1,   336,   709,    -1,   222,
     690,   691,    -1,    -1,   133,   695,   175,   176,    -1,   369,
     350,   351,    -1,   692,  1496,  1497,  1788,   146,   147,   207,
     208,   711,    -1,  1698,  1506,    -1,  1745,   295,   718,   719,
      -1,   371,  1751,   373,   163,   164,  1698,    -1,    -1,   729,
      -1,   329,   330,   331,   332,    -1,   334,   315,   336,    -1,
      -1,    -1,    -1,     1,    -1,  1314,    -1,    -1,   175,   176,
      -1,   134,   350,   351,    -1,  1166,     1,    -1,    -1,    -1,
      -1,  1330,    -1,  1748,    -1,   192,   193,  1336,   360,   196,
     197,   198,  1564,   371,    -1,   373,  1748,  1762,  1763,  1764,
    1765,   175,   176,   375,  1195,     0,     1,    -1,    -1,    -1,
    1762,  1763,  1764,   134,    -1,    11,    -1,    -1,    -1,     1,
      -1,    -1,  1831,    -1,  1596,  1597,  1598,  1599,  1600,  1601,
    1602,  1603,  1604,  1605,  1606,    -1,    61,  1228,    -1,    -1,
      -1,    -1,    -1,  1808,    -1,  1236,    -1,    -1,  1620,  1621,
    1241,  1623,   173,  1625,   175,   176,  1808,    -1,    -1,    -1,
      -1,  1826,    58,    -1,    -1,    -1,   846,     1,    -1,    -1,
     329,   330,   331,   332,    -1,   334,    -1,   336,  1650,  1651,
      -1,    -1,    78,    -1,    -1,    -1,    -1,  1659,  1660,   210,
      -1,   350,   351,    -1,    -1,  1667,   134,    -1,   136,    -1,
      -1,    -1,  1674,  1675,    -1,   143,   227,    -1,   104,   134,
      -1,    -1,   371,    -1,   373,  1687,    -1,    -1,   114,   329,
     330,   331,   332,  1472,   334,    -1,   336,  1476,   166,   167,
    1702,  1703,  1704,  1705,  1706,  1707,  1708,   175,   176,     1,
     350,   351,    -1,   923,   363,     1,  1911,   143,     1,  1204,
     175,   176,   371,    -1,   373,   329,   330,  1729,   332,  1911,
     334,   371,   336,   373,    -1,   190,   329,   330,   331,   332,
    1742,   334,    -1,   336,    -1,    -1,   350,   351,  1750,    -1,
      -1,    -1,    -1,    -1,   222,    -1,    -1,   350,   351,    -1,
      -1,    -1,   972,   175,   176,   129,  1768,   371,    -1,   373,
     980,    -1,  1774,    -1,    -1,  1777,  1778,  1779,   371,   191,
     373,  1783,  1784,  1785,    -1,     1,     1,    -1,  1790,    -1,
     202,   203,   204,    -1,    -1,    11,  1798,  1799,  1800,  1801,
    1802,   165,    -1,     1,    -1,    -1,    -1,  1017,    -1,    -1,
      -1,   175,   176,  1815,    -1,  1817,  1818,    -1,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,  1836,  1837,  1838,     1,   130,   131,
      -1,   205,    -1,    -1,    -1,    -1,    -1,  1849,  1850,   135,
      -1,   134,    -1,   217,    -1,   141,    -1,  1859,    -1,  1861,
       3,     4,     5,     6,     7,     8,     9,    10,   151,   152,
      -1,    -1,    -1,    -1,   329,   330,   331,   332,    -1,   334,
      -1,   336,   168,   175,   176,  1887,    -1,    -1,    -1,   175,
     176,    -1,   175,   176,   319,   350,   351,    -1,    -1,    -1,
     192,    -1,    -1,  1905,   190,  1907,  1908,  1909,  1910,     1,
    1912,  1913,  1914,    -1,   206,    -1,   371,    -1,   373,  1921,
    1922,    -1,    -1,    -1,  1926,  1927,  1928,  1929,   143,    -1,
      -1,    -1,   130,   131,   359,    -1,   361,   135,   363,    -1,
      -1,  1943,    -1,   141,    -1,   371,    -1,   373,    -1,    -1,
     375,   166,   167,    -1,     1,    -1,   154,   155,   156,   157,
     175,   176,     1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
     168,    -1,  1974,    -1,  1976,    -1,   174,     1,  1757,  1981,
    1759,  1760,  1761,  1193,    -1,   183,  1988,  1989,  1990,    -1,
    1992,    -1,   190,    -1,   192,  1997,    -1,    -1,  1208,   214,
     215,    -1,  2004,    -1,     1,  2007,    -1,   222,   206,    -1,
      -1,   175,   176,    -1,  2016,  1794,     1,    -1,    -1,    -1,
     218,   219,    -1,    -1,  1234,    -1,   190,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   134,    -1,    -1,    -1,   329,   330,   331,   332,
      -1,   334,    -1,   336,    78,    -1,    -1,    -1,    -1,    -1,
    1270,    58,  1272,  1273,  1274,  1686,  1276,   350,   351,    -1,
      -1,    -1,  1693,  1694,    -1,    -1,  1697,    -1,  1699,    -1,
     104,    -1,    -1,   175,   176,    -1,    -1,   134,   371,    -1,
     373,    -1,   290,    -1,    -1,    -1,  1717,    -1,    -1,    -1,
      -1,   140,    -1,   319,  1314,    -1,    -1,    -1,    -1,   307,
      -1,    -1,    -1,  1734,    -1,  1736,    -1,   114,    -1,   143,
    1330,   319,    -1,  1744,    -1,  1904,  1336,  1906,   175,   176,
      -1,   329,   330,    11,    -1,    -1,   160,    -1,    -1,   136,
      -1,  1920,   181,   359,    -1,   361,    -1,   363,   346,   347,
      -1,   175,   176,   192,    -1,   194,    -1,  1367,  1368,   375,
      -1,    -1,  1372,    -1,    -1,   329,   330,   331,   332,    -1,
     334,    -1,   336,   371,  1795,   373,    -1,    -1,   175,   176,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,   186,
     175,   176,   216,    -1,  1973,    -1,  1975,    -1,  1977,  1820,
    1821,  1822,  1823,    -1,    -1,   190,    -1,   371,    -1,   373,
      -1,  1832,   329,   330,  1993,   332,  1995,   334,  1839,   336,
    1841,    -1,    -1,    -1,  1845,   329,   330,   331,   332,  2008,
     334,  2010,   336,   350,   351,  2014,    -1,   329,   330,   331,
     332,    -1,   334,    -1,   336,  1866,   350,   351,  1869,  1870,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,   351,
      -1,  1882,    -1,    -1,  1885,    -1,  1476,    -1,    -1,     0,
       1,    -1,    -1,    -1,    -1,  1896,    -1,    -1,    -1,   371,
      11,   373,   329,   330,   331,   332,    -1,   334,    -1,   336,
     329,   330,   331,   332,    -1,   334,    -1,   336,    -1,    -1,
      -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,
    1931,   350,   351,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,  1942,    -1,  1944,   371,    11,   373,    -1,    -1,    -1,
      -1,    -1,   371,    -1,   373,  1956,    -1,    -1,    -1,  1960,
      -1,    -1,    -1,    -1,   329,   330,   331,   332,  1969,   334,
      -1,   336,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,  1982,  1983,    -1,    -1,   350,   351,    -1,   246,   247,
      -1,    -1,    -1,   251,   252,   253,   254,   255,   256,   257,
      -1,    -1,  2003,    -1,  2005,    -1,   371,    -1,   373,    -1,
      -1,    -1,  2013,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,    -1,   154,   155,
     156,   157,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,     1,    -1,   175,
     176,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1757,  1758,  1759,
    1760,  1761,    -1,    -1,    -1,  1765,    -1,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   218,   219,    -1,    -1,   154,   155,   156,   157,
      15,    -1,    -1,    -1,  1794,    -1,  1796,  1797,   319,    -1,
      64,   621,    27,   623,   624,   625,    -1,   627,    -1,  1809,
      11,    -1,    37,    -1,    -1,   183,    -1,    42,    -1,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    52,  1828,  1829,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
     361,    -1,   363,   319,    -1,    58,    -1,    -1,    -1,    -1,
     218,   219,   672,  1853,   290,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    78,    -1,    92,    -1,    94,
      -1,   307,    -1,    -1,   138,    -1,   735,   736,   737,   738,
     739,   740,   778,    -1,    -1,   361,    -1,   783,    -1,    -1,
     115,   104,    -1,    -1,    -1,    -1,   716,  1897,   794,  1899,
     720,   114,   722,    -1,  1904,    -1,  1906,   803,    -1,   805,
      -1,   175,   176,   177,   178,   179,    -1,    -1,   814,    -1,
    1920,    -1,   290,    -1,  1924,  1925,   190,   823,    -1,    -1,
     143,   132,   133,    -1,   830,    -1,   137,    -1,   139,   307,
      -1,    -1,    -1,   144,    -1,   146,   147,    -1,   844,    -1,
      -1,    -1,    -1,   849,    -1,    -1,    -1,   158,    -1,    58,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,   170,
     171,   172,    -1,  1973,    -1,  1975,   872,  1977,   191,    78,
      -1,   182,    -1,    -1,   185,   881,    -1,    -1,   189,   202,
     203,   204,    -1,  1993,   195,  1995,    -1,    -1,   199,    -1,
     201,   897,    -1,    -1,    -1,   104,    -1,    -1,  2008,   905,
    2010,   212,    -1,    -1,  2014,   114,    -1,    -1,    -1,    -1,
      -1,   917,   223,    -1,   225,   921,    -1,   228,   924,    -1,
     231,    -1,    -1,    -1,    -1,   931,   932,   933,    -1,    -1,
     936,    -1,    -1,    -1,   143,    -1,   942,    -1,    -1,    -1,
      -1,   947,    -1,    -1,   950,   951,   952,   953,   954,    -1,
      -1,   957,   958,   959,   960,   961,    -1,    -1,   964,   965,
     966,   967,   968,   969,   970,     1,    -1,   973,    -1,    -1,
      -1,   977,    -1,    -1,    -1,    -1,    -1,   983,   984,    -1,
      -1,    -1,   191,    -1,   990,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   998,   202,   203,   204,    -1,  1003,    -1,    -1,
      -1,    -1,   313,   314,    -1,    -1,   329,   330,   331,   332,
     321,   334,    -1,   336,    -1,    -1,  1022,    -1,    -1,    -1,
      -1,    -1,  1028,    -1,    -1,    -1,    -1,   350,   351,  1035,
      -1,    -1,  1038,    -1,    -1,  1041,  1042,    -1,    -1,    -1,
      -1,    -1,  1048,    -1,    -1,    -1,  1052,    -1,   371,    -1,
     373,    -1,    -1,    -1,    -1,  1061,    -1,    -1,  1064,    -1,
     371,    -1,   373,    -1,  1070,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1078,    -1,    -1,    -1,  1082,    -1,    -1,    -1,
    1086,  1087,    -1,    -1,    -1,    -1,    -1,  1093,    -1,    -1,
      -1,    -1,  1098,  1099,  1100,    -1,    -1,  1103,  1104,    -1,
      -1,    -1,  1108,    -1,    -1,    -1,  1112,   143,    -1,  1115,
      -1,    -1,  1118,    -1,    -1,    -1,  1122,    -1,    -1,  1125,
    1126,  1127,  1128,  1129,    -1,    -1,    -1,    -1,    -1,  1135,
     166,   167,    -1,  1139,    -1,    -1,  1142,  1143,  1144,   175,
     176,  1147,  1148,    -1,    -1,    -1,  1152,    -1,    -1,    -1,
      -1,    -1,  1158,  1159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1167,   371,    -1,   373,    -1,    -1,    -1,  1174,    -1,
      -1,  1177,  1178,    -1,    -1,    -1,    -1,  1183,   214,   215,
    1186,    -1,    -1,    -1,  1190,    -1,    -1,    -1,    -1,    -1,
    1196,    -1,    -1,    -1,  1200,  1201,    -1,    -1,    -1,  1205,
      -1,    -1,    -1,  1209,    -1,  1211,   243,  1213,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,    -1,    -1,  1229,    -1,    -1,  1232,    -1,    -1,    -1,
      -1,  1237,    -1,    -1,  1240,    -1,    -1,    -1,    -1,    -1,
      -1,  1247,    -1,    -1,    -1,    -1,  1252,    -1,    -1,    -1,
      -1,    -1,    -1,  1259,    -1,    -1,    -1,  1263,  1264,    -1,
      -1,    -1,  1268,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,  1278,
    1279,  1280,    16,    17,    18,    19,    20,    21,    22,    23,
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
     124,   125,   126,   127,   128,     0,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
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
     125,   126,   127,   128,    -1,    -1,     0,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,   244,
      14,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    58,   319,    -1,   137,    -1,   139,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     0,     1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,   319,    -1,    14,    -1,    -1,    -1,
     170,   171,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,    -1,   182,    -1,    -1,   185,    -1,    -1,   104,   189,
     114,   375,    -1,    -1,    -1,   195,    -1,    -1,   114,   199,
      -1,   201,    -1,    -1,     1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,   212,   137,    -1,   139,    -1,    -1,    15,   143,
      -1,    -1,    -1,   223,    -1,   225,    -1,   143,   228,    -1,
      27,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,   170,   171,   172,    -1,
      47,   175,   176,    -1,    -1,    52,    -1,    -1,   182,    -1,
      -1,   185,    -1,    60,   319,   189,   190,   191,    -1,    -1,
      -1,   195,    -1,    -1,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,    -1,   132,    -1,    -1,    -1,   212,   137,
      -1,   139,    89,    -1,    -1,    92,    -1,    94,    -1,   223,
      -1,   225,    -1,    -1,   228,   360,    -1,   231,    -1,    -1,
      -1,    -1,    -1,   313,   314,    -1,    -1,    -1,   115,    -1,
     375,   321,   170,   171,   172,   173,    -1,   175,   176,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,    -1,
      -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,    -1,
      -1,   199,    -1,   201,    -1,    -1,    -1,    -1,     0,     1,
      -1,    -1,    -1,    -1,   212,   213,    -1,    -1,    -1,   293,
      -1,    -1,    14,    -1,    -1,   223,    -1,   225,   175,   176,
     228,    -1,    -1,   231,    -1,    -1,    -1,    -1,   312,   313,
     314,    -1,    -1,   190,    -1,    -1,    -1,   321,    -1,   323,
      -1,    -1,    -1,    -1,    -1,   329,   330,   331,   332,    -1,
     334,    -1,   336,   329,   330,   331,   332,    -1,   334,    -1,
     336,    -1,    -1,     0,     1,    -1,   350,   351,    -1,    -1,
      -1,    -1,    -1,    -1,   350,   351,   360,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,   373,
      -1,   375,    -1,    -1,    -1,   371,    -1,   373,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   313,   314,    -1,    -1,    -1,
      -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   330,    -1,   332,    -1,   334,    -1,   336,    -1,
     132,    -1,    -1,    -1,    -1,   137,    -1,   139,    -1,    -1,
      -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,    -1,   373,    -1,   375,   170,   171,
     172,    -1,    -1,   175,   176,    -1,    -1,    -1,   180,    -1,
     182,    -1,    -1,   185,    -1,    -1,    -1,   189,   190,    -1,
      -1,    -1,    -1,   195,    -1,   132,    -1,   199,    -1,   201,
     137,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,   231,
      -1,    -1,    -1,   170,   171,   172,    -1,    -1,   175,   176,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,
      -1,    -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    -1,     0,
       1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,   223,    -1,   225,    -1,
       0,   228,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,   313,   314,    -1,    -1,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,
     332,    -1,   334,    -1,   336,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,   351,
      -1,    -1,    -1,    -1,    -1,    -1,     0,    -1,   360,    -1,
      -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,
      14,   373,    -1,   375,    -1,    -1,   313,   314,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   329,   330,    -1,   332,    -1,   334,    -1,   336,
      -1,   132,    -1,    -1,    -1,    -1,   137,    -1,   139,    -1,
      -1,    -1,    -1,   350,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   360,    -1,    -1,   363,   137,    -1,   139,
      -1,    -1,    -1,    -1,   371,    -1,   373,    -1,   375,   170,
     171,   172,    -1,    -1,   175,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,   184,   185,    -1,    -1,    -1,   189,   190,
     170,   171,   172,   173,   195,    -1,    -1,    -1,   199,    -1,
     201,    -1,   182,    -1,    -1,   185,    -1,    -1,    -1,   189,
     190,   212,    -1,    -1,    -1,   195,    -1,    -1,   132,   199,
      -1,   201,   223,   137,   225,   139,    -1,   228,    -1,    -1,
     231,    -1,   212,   213,    -1,    -1,    -1,    -1,    -1,     0,
       1,    -1,    -1,   223,    -1,   225,    -1,    -1,   228,    -1,
      -1,   231,    -1,    14,    -1,    -1,   170,   171,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,   182,    -1,
      -1,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,   199,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,     0,    -1,    -1,    -1,    -1,   223,
      -1,   225,   313,   314,   228,    -1,    -1,   231,    14,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,   314,    -1,    -1,    -1,    -1,    -1,
      -1,   321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,    -1,   375,    -1,   137,    -1,   139,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   371,    -1,   373,    -1,   375,    -1,    -1,    -1,   313,
     314,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,   170,
     171,   172,    -1,    -1,   175,   176,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,   185,    -1,    -1,    -1,   189,    -1,
      -1,    -1,    -1,    -1,   195,    -1,   132,    -1,   199,    -1,
     201,   137,    -1,   139,    -1,    -1,   360,    -1,    -1,   363,
      -1,   212,    -1,    -1,    -1,    -1,    -1,   371,    -1,   373,
      -1,   375,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,
     231,    -1,    -1,    -1,   170,   171,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,
      -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,
      -1,    -1,   228,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,   314,    -1,    -1,    -1,    -1,    -1,    -1,
     321,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   375,    -1,    -1,   313,   314,    -1,
      -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   360,    -1,     1,   363,     1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,    11,   373,    -1,   375,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
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
     125,   126,   127,   128,     1,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,   137,    -1,   139,    -1,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,   170,   171,   172,
      47,    -1,   175,   176,    -1,    52,    -1,    -1,    -1,   182,
      -1,    -1,   185,    60,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,   195,    -1,    -1,   132,   199,    -1,   201,    -1,
     137,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,    -1,
     223,    -1,   225,    -1,    -1,   228,    -1,    -1,   231,    -1,
      -1,    -1,    -1,   170,   171,   172,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,    -1,   182,    -1,    -1,   185,    -1,
      -1,    -1,   189,   190,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    -1,   199,    -1,   201,    -1,    -1,    -1,    -1,   132,
      -1,    -1,    -1,    -1,   137,   212,   139,   154,   155,   156,
     157,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,
      -1,   228,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,   170,   171,   172,
     313,   314,    -1,   190,   319,    -1,    -1,    -1,   321,   182,
      -1,   184,   185,    -1,    -1,    -1,   189,   190,    -1,    -1,
      -1,    -1,   195,    -1,    -1,    -1,   199,    -1,   201,    -1,
      -1,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,   360,   293,    -1,    -1,    -1,
     223,    -1,   225,    -1,    -1,   228,    -1,    -1,   231,    -1,
     375,    -1,    -1,    -1,    -1,   312,   313,   314,    -1,    -1,
      -1,    -1,    -1,    -1,   321,    -1,   323,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     313,   314,   329,   330,    -1,    -1,    -1,    -1,   321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,   371,    -1,   373,    15,    16,    17,
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
     198,   199,    -1,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   359,    -1,    -1,   362,   363,   364,     1,   366,    -1,
     368,   369,   370,   371,   372,    -1,    -1,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
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
     194,   195,   196,   197,   198,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   319,    -1,   321,   322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,    -1,    -1,   362,   363,
     364,    -1,   366,    -1,   368,   369,   370,   371,   372,     0,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
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
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   266,    -1,   268,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
     321,   322,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,   364,    -1,   366,    -1,   368,   369,    11,
      12,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
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
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   266,    -1,   268,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,   321,
     322,    -1,    -1,    -1,    -1,   327,   328,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   364,    -1,   366,    12,   368,   369,    15,    16,
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
     197,   198,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   266,
      -1,   268,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,    -1,   321,   322,    -1,    -1,    -1,    -1,
     327,   328,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    -1,    -1,   360,    -1,    -1,    -1,   364,    -1,   366,
      -1,   368,   369,    15,    16,    17,    18,    19,    20,    21,
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
     192,   193,   194,   195,   196,   197,   198,   199,    -1,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,   321,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,   364,   137,   366,   139,   368,   369,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,   171,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   182,    -1,
      -1,   185,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,   199,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   223,
     224,   225,    -1,    -1,   228,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
     314,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,   373,
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
     195,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   319,    -1,   321,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   362,    -1,   364,
      -1,   366,    -1,   368,   369,    15,    16,    17,    18,    19,
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
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   364,    11,   366,    -1,   368,   369,
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
     126,   127,   128,   617,   618,   619,   620,    -1,   622,    -1,
      -1,    -1,   626,    -1,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,    -1,   639,   640,   641,   642,    -1,
     644,   645,   646,   647,    -1,   649,   650,   651,   652,    -1,
     654,   655,   656,   657,   658,   659,   660,    -1,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,    -1,    -1,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,    -1,
     694,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   705,   706,   707,   708,    -1,   710,   711,   712,   713,
     714,   715,    -1,   717,   718,   719,    -1,   721,    -1,   723,
     724,   725,   726,   727,   728,   729,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,    15,    16,    17,    18,    19,    20,
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
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,   318,   319,    15,
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
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,   318,   319,    15,    16,    17,    18,    19,    20,
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
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    15,
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
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   318,   319,    15,    16,    17,    18,    19,    20,
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
     191,   192,   193,   194,   195,   196,   197,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   318,   319,    15,
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
     196,   197,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,   643,
     377,   377,   377,   377,   377,   377,   377,   377,     0,     1,
      11,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   319,   361,   378,   388,
     389,   390,   391,   392,   393,   394,   395,   394,   641,   642,
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
     193,   194,   195,   196,   197,   198,   199,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   266,   268,   269,   319,   321,   322,
     327,   328,   364,   366,   368,   369,   379,   380,   396,   401,
     402,   403,   405,   406,   407,   408,   409,   410,   411,   413,
     414,   637,   638,   639,   640,    16,    17,    18,    19,    20,
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
     121,   122,   123,   124,   125,   126,   127,   128,   319,   378,
     631,   633,   631,   634,   631,   631,    11,    11,   377,     1,
     243,   377,   363,   436,   640,   359,   635,   377,   377,   377,
     377,   377,   377,   377,   401,   232,   233,   234,   235,   236,
     237,   298,   369,   378,   410,    11,   370,   371,   372,   412,
     436,   635,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   375,   632,   632,   245,
     392,   244,   392,   246,   247,   251,   252,   253,   254,   255,
     256,   257,   383,   384,   385,   386,   387,   377,   243,   377,
     394,   377,   319,   395,   359,   401,   378,   411,   236,   237,
     378,   377,   377,   377,   411,   413,   369,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   377,   631,   631,   377,   377,   377,   377,   377,   377,
     377,   251,   253,   254,   255,   386,   362,   388,   377,   633,
     377,   359,   632,   636,   377,   377,   362,   362,   377,   143,
     166,   167,   175,   176,   214,   215,   222,   378,   437,   438,
     606,   607,   610,   136,   222,   437,   606,   608,   611,   134,
     437,   606,   608,   612,   371,   373,   416,   418,   421,   433,
     434,   437,   562,   563,   568,   130,   131,   192,   206,   378,
     438,   569,   570,   571,   563,   572,   135,   141,   168,   190,
     378,   438,   573,   574,   575,   174,   378,   416,   421,   422,
     438,   576,   577,   578,   190,   319,   378,   438,   579,   580,
     581,   154,   155,   156,   157,   183,   218,   219,   290,   307,
     437,   565,   566,   567,   582,   438,   584,   585,   586,   587,
     132,   137,   139,   170,   171,   172,   182,   185,   189,   195,
     199,   201,   212,   223,   225,   228,   231,   313,   314,   321,
     437,   439,   451,   190,   293,   312,   323,   437,   440,   465,
     466,   467,    58,    78,   104,   114,   143,   416,   421,   423,
     426,   428,   437,   441,   468,   469,   470,   471,   191,   202,
     203,   204,   437,   472,   473,   474,   134,   151,   152,   415,
     423,   424,   426,   437,   475,   476,   477,   478,   437,   448,
     449,   450,   437,   490,   491,   424,   426,   429,   437,   442,
     492,   493,   493,   491,   437,   439,   501,   173,   190,   213,
     437,   481,   482,   416,   429,   437,   485,   486,   437,   479,
     480,   491,   501,   482,   486,   437,   494,   495,   491,   501,
     482,   486,   437,   483,   484,   491,   501,   493,   493,   482,
     486,   437,   487,   488,   415,   437,   441,   532,   190,   437,
     497,   498,   499,   500,   501,   190,   192,   318,   437,   440,
     502,    64,   138,   177,   178,   179,   190,   437,   503,   190,
     295,   315,   437,   644,   645,   646,   647,   649,    61,   134,
     190,   422,   424,   427,   428,   437,   613,   615,   616,   617,
     618,   619,   620,    61,   134,   437,   442,   613,   614,   149,
     150,   207,   208,   437,   623,   624,   437,   626,   627,   422,
     437,   621,   621,   193,   229,   230,   437,   628,   629,   438,
     522,   523,   524,   318,   378,   401,   509,   510,   512,   513,
     514,   515,   437,   442,   516,   181,   192,   194,   437,   517,
     518,   140,   192,   416,   418,   420,   437,   519,   520,   415,
     437,   442,   525,   437,   606,   607,   609,   532,   192,   422,
     424,   428,   437,   528,   415,   437,   441,   529,   530,   530,
     530,   437,   529,   531,   530,   190,   437,   442,   527,   190,
     437,   442,   603,   437,   442,   526,   437,   442,   602,   421,
     425,   437,   533,   418,   437,   622,   491,   501,   482,   486,
     134,   173,   210,   227,   437,   534,   142,   192,   437,   535,
     437,   442,   536,   536,   536,   437,   442,   537,   536,   134,
     190,   437,   538,   129,   165,   205,   217,   437,   539,   532,
     294,   437,   440,   504,   505,   506,   507,   508,    78,   104,
     143,   160,   216,   437,   541,   437,   545,   546,   501,   184,
     190,   437,   542,   543,   426,   437,   547,   145,   159,   437,
     548,   190,   437,   550,   551,   552,   553,   190,   226,   437,
     554,   532,   190,   438,   556,   557,   437,   468,   558,   559,
     563,   588,   563,   589,    15,    27,    37,    42,    47,    52,
      60,    89,    92,    94,   115,   190,   378,   438,   591,   592,
     630,   567,   590,   438,   594,   595,   596,   597,   358,   437,
     598,   599,    58,   114,   136,   186,   437,   560,   148,   173,
     227,   437,   561,   192,   193,   196,   197,   198,   437,   600,
     415,   437,   442,   601,   535,   415,   418,   437,   605,   378,
     435,   435,   435,   435,   435,   435,   435,   377,   377,   377,
     377,   377,   389,   360,   359,   377,   634,   238,   239,   240,
     241,   242,   365,   367,   404,   377,   377,   377,   377,   377,
     377,   377,   377,    14,   604,   377,   377,   604,   377,   604,
     329,   330,   346,   347,   436,   604,   377,   377,   377,   377,
     436,   604,   604,   377,   377,   377,   377,   436,   604,   377,
     436,   604,   377,   377,   436,   604,   377,   377,   436,   604,
       1,   319,   434,   565,   569,   573,   576,   583,   436,   604,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   377,   377,
     604,   377,   377,   377,   362,   436,   604,   377,   377,   377,
     377,   377,   331,   332,   334,   336,   350,   351,   468,   604,
     377,   377,   377,   377,   472,   604,   377,   377,   377,   475,
     604,   445,   446,   447,   470,   473,   439,   443,   465,   604,
     429,   439,   481,   489,   604,   604,   604,   604,   604,   377,
     377,   377,   604,   604,   439,   604,   604,   604,   604,   604,
     492,   604,   604,   604,   604,   604,   481,   604,   604,   604,
     604,   604,   604,   604,   485,   604,   604,   377,   180,   426,
     439,   496,   436,   604,   604,   377,   377,   377,   604,   377,
     377,   377,   377,   377,   377,   604,   377,   604,   377,   377,
     377,   377,   422,   424,   427,   615,   422,   604,   377,   377,
     604,   377,   377,   377,   377,   604,   623,   625,   628,   604,
     604,   604,   377,   377,   377,   604,     1,   192,   418,   442,
     517,   519,   521,   604,   377,   377,   401,   436,   604,   604,
     377,   377,   377,   604,   377,   377,   604,   604,   604,   604,
     377,   604,   604,   604,   604,   529,   604,   604,   377,   604,
     377,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     377,   377,   377,   377,   604,   377,   377,   604,   604,   604,
     604,   442,   604,   604,   377,   377,   604,   377,   377,   377,
     377,   604,   604,   377,   292,   436,   604,   377,   377,   377,
     377,   377,   604,   439,   542,   544,   604,   604,   377,   377,
     604,   604,   377,   377,   604,   377,   426,   439,   549,   436,
     604,   377,   377,   604,   604,   377,   296,   303,   304,   305,
     306,   308,   309,   310,   311,   316,   317,   378,   555,   604,
     468,   426,   604,   604,   604,   377,   436,   604,   377,   604,
       1,   190,   433,   565,   593,   630,   436,   604,   377,   604,
     436,   377,   377,   377,   377,   604,   377,   377,   377,   604,
     377,   377,   377,   377,   377,   604,   604,   604,   604,   426,
     259,   260,   381,   420,   430,   418,   419,   416,   431,   258,
     261,   382,   417,   418,   377,   377,   641,   360,   377,   377,
     377,   377,   377,   377,   318,   401,   377,   377,   377,   377,
     377,   433,   569,   573,   576,   579,   421,   329,   565,   377,
     377,   377,   585,   418,   418,   224,   416,   432,   439,   452,
     453,   456,   133,   144,   146,   147,   158,   163,   164,   429,
     442,   453,   457,   458,   459,   460,   461,   462,   464,   377,
     465,   377,   377,   377,   377,   377,   377,   446,   445,   374,
     444,   377,   498,   161,   200,   440,   648,   422,   615,   422,
     377,   377,   401,   512,   514,   442,   377,   513,   529,   442,
     401,   509,   510,   511,   377,   506,   551,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   377,   377,   630,   377,
     377,   377,   377,   595,   358,   377,   377,   374,   355,   356,
     377,   377,     1,   169,   224,   331,   397,   398,   399,   400,
     360,   377,   377,   377,   436,   377,   436,   436,    11,   342,
     343,   344,   345,   436,   441,   436,   436,   362,   377,   377,
     377,   377,   377,   377,   377,   144,   442,   144,   158,   462,
     463,   463,   463,   463,   436,   362,   377,   436,   650,   436,
     377,   436,   514,   529,   442,   377,   401,   362,   318,   421,
     432,   421,   540,   421,   421,   441,   441,   441,   426,   362,
     362,   377,   377,   377,   377,   377,   377,   377,   377,   360,
     398,   363,   635,   377,   367,   367,   421,   436,   564,   418,
     418,   377,   377,   377,   377,   377,   453,   452,   452,   470,
     429,   457,   463,   442,   457,   463,   377,   158,   377,   377,
     436,   436,   436,   436,   453,   477,   190,   419,   651,   432,
     513,   377,   377,   377,   436,   362,   436,   362,   362,   362,
     362,   436,   362,   362,   362,   377,   377,   420,   377,   377,
     436,   160,   216,   362,   436,   436,    58,    78,   104,   114,
     454,   455,   436,   442,   436,   377,   453,   453,   453,   453,
     436,   419,   432,   362,   421,   377,   421,   377,   377,   377,
     377,   441,   377,   377,   377,   400,   421,   377,   377,   418,
     418,   377,   377,   377,   377,   454,   436,   453,   453,   190,
     440,   436,   377,   436,   362,   436,   362,   436,   453,   436,
     654,   297,   652,   421,   377,   421,   377,   425,   187,   220,
     221,   655,   362,   377,   654,   436,   362,   362,   377,   377,
     377,   377,   421,   653,   362,   421,   377,   362,   436,   377,
     436,   377,   421,   421,   436,   421,   362,   377
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   376,   377,   377,   378,   378,   379,   380,   381,   381,
     382,   382,   383,   383,   384,   384,   384,   384,   384,   384,
     384,   385,   385,   385,   386,   386,   386,   386,   387,   387,
     387,   387,   388,   389,   389,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   391,   391,   391,   392,
     392,   393,   393,   393,   393,   393,   394,   394,   394,   394,
     394,   395,   395,   396,   397,   397,   397,   398,   399,   399,
     400,   400,   400,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   402,   403,   404,   404,
     404,   404,   404,   404,   405,   405,   405,   406,   407,   407,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   411,
     411,   412,   412,   412,   412,   413,   413,   413,   414,   414,
     415,   416,   416,   416,   417,   418,   419,   420,   421,   421,
     422,   423,   424,   425,   426,   426,   427,   428,   428,   428,
     428,   428,   429,   430,   431,   431,   432,   432,   432,   432,
     433,   433,   434,   434,   435,   436,   437,   437,   438,   438,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     440,   441,   441,   442,   442,   443,   443,   444,   444,   445,
     446,   447,   447,   447,   447,   448,   448,   449,   449,   449,
     450,   450,   451,   451,   452,   452,   453,   453,   454,   454,
     454,   454,   455,   455,   456,   456,   456,   457,   457,   457,
     457,   458,   458,   459,   459,   459,   460,   460,   460,   461,
     461,   461,   462,   463,   463,   464,   464,   464,   464,   464,
     464,   464,   464,   465,   465,   465,   465,   466,   466,   467,
     467,   468,   468,   468,   468,   468,   468,   469,   469,   470,
     471,   471,   472,   472,   473,   473,   473,   473,   474,   474,
     475,   475,   475,   476,   476,   477,   477,   477,   478,   478,
     479,   479,   480,   480,   481,   481,   481,   482,   482,   483,
     483,   484,   484,   485,   486,   486,   487,   487,   488,   488,
     489,   489,   489,   490,   490,   491,   491,   492,   493,   493,
     494,   494,   495,   495,   496,   496,   496,   497,   497,   498,
     499,   499,   500,   500,   500,   501,   501,   502,   502,   502,
     502,   502,   503,   503,   503,   503,   503,   503,   503,   504,
     504,   505,   506,   506,   507,   507,   508,   508,   509,   509,
     510,   511,   511,   512,   512,   513,   513,   514,   514,   515,
     515,   515,   515,   516,   516,   517,   517,   518,   518,   518,
     519,   519,   520,   520,   520,   521,   521,   521,   522,   522,
     523,   524,   524,   524,   525,   525,   525,   526,   526,   527,
     527,   527,   528,   528,   528,   528,   528,   529,   529,   530,
     530,   531,   531,   531,   531,   531,   532,   532,   532,   533,
     533,   534,   534,   534,   534,   534,   535,   535,   535,   536,
     536,   537,   537,   537,   537,   537,   538,   538,   538,   539,
     539,   539,   539,   539,   540,   540,   541,   541,   541,   541,
     541,   541,   542,   542,   543,   543,   544,   544,   545,   545,
     546,   546,   547,   547,   548,   548,   548,   549,   549,   550,
     550,   551,   552,   552,   553,   553,   553,   554,   554,   554,
     555,   555,   555,   555,   555,   555,   555,   555,   555,   555,
     555,   555,   556,   556,   557,   557,   557,   557,   558,   559,
     559,   559,   559,   560,   560,   560,   560,   560,   561,   561,
     561,   561,   562,   562,   563,   563,   564,   564,   564,   565,
     565,   565,   565,   565,   565,   565,   565,   565,   566,   566,
     567,   567,   568,   569,   569,   569,   569,   570,   570,   571,
     571,   571,   572,   573,   573,   573,   573,   574,   574,   575,
     575,   575,   576,   576,   577,   577,   578,   578,   578,   579,
     579,   580,   580,   581,   581,   581,   582,   583,   583,   583,
     583,   583,   583,   583,   584,   584,   585,   586,   586,   587,
     587,   588,   589,   590,   591,   591,   591,   592,   592,   592,
     593,   593,   593,   593,   593,   594,   594,   595,   596,   596,
     597,   597,   598,   598,   599,   599,   600,   600,   600,   600,
     600,   600,   601,   601,   601,   602,   602,   603,   603,   603,
     604,   604,   605,   605,   605,   606,   606,   606,   607,   607,
     608,   608,   609,   609,   609,   610,   610,   610,   610,   611,
     611,   611,   612,   612,   612,   612,   613,   613,   614,   614,
     614,   615,   615,   615,   616,   616,   616,   617,   617,   617,
     617,   618,   618,   618,   619,   619,   619,   620,   620,   620,
     620,   621,   621,   622,   622,   623,   623,   623,   623,   624,
     624,   625,   625,   626,   626,   627,   627,   628,   628,   628,
     629,   629,   630,   630,   630,   630,   630,   630,   630,   630,
     630,   630,   630,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   631,   632,
     633,   633,   634,   634,   635,   636,   636,   637,   638,   638,
     639,   639,   640,   640,   640,   640,   640,   640,   641,   641,
     642,   643,   643,   643,   643,   643,   643,   643,   643,   644,
     644,   644,   645,   646,   647,   647,   648,   648,   649,   649,
     650,   650,   651,   652,   653,   653,   654,   654,   655,   655,
     655
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
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     5,     8,     8,     2,     1,     1,
       2,     2,     2,     2,     4,     4,     2,     2,     2,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     1,     3,     2,     1,     3,
       2,     0,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     1,     4,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     2,     2,     1,     1,     2,     2,
       2,     9,    11,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     0,     3,     2,
       1,     1,     1,     2,     2,     0,     2,     0,     2,     2,
       1,     1,     1,     1,     1,     2,     3,     3,     2,     2,
       2,     2,     1,     2,     1,     3,     6,     2,     2,     2,
       2,     3,     3,     1,     3,     3,     3,     3,     1,     2,
       4,     4,     3,     0,     1,     4,     4,     4,     4,     5,
       5,     3,     1,     1,     4,     4,     2,     1,     3,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     2,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     1,
       0,     2,     1,     1,     2,     2,     2,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     2,     0,     2,     1,
       1,     3,     1,     2,     1,     1,     1,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     2,     2,     1,     7,
       1,     5,     1,     1,     1,     3,     1,     1,     2,     3,
       2,     1,     1,     3,     1,     2,     1,     1,     3,     2,
       1,     3,     1,     1,     1,     2,     2,     1,     2,     1,
       2,     1,     1,     2,     1,     1,     2,     2,     0,     1,
       2,     3,     4,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     2,     2,     1,     1,
       1,     1,     2,     3,     4,     1,     2,     2,     1,     2,
       2,     2,     2,     1,     1,     3,     2,     2,     2,     2,
       2,     1,     2,     2,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     0,
       2,     1,     1,     3,     1,     2,     1,     2,     2,     1,
      15,     5,     5,     5,     5,     5,     7,     5,     5,     5,
       4,     4,     0,     2,     2,     1,     2,     1,     2,     1,
       1,     2,     1,     2,     2,     2,     2,     1,     2,     2,
       2,     1,     1,     3,     1,     1,     0,     3,     3,    10,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     3,     1,
       1,     1,     2,     1,     1,     3,     1,     1,     1,     2,
       2,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     2,     2,     0,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     2,     4,     1,     2,     1,     1,
       2,     2,     1,     2,     2,     0,     1,     2,     1,     3,
       1,     1,     1,     1,     2,     4,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       0,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     0,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     5,     5,     5,     5,     5,
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
       5,     5,     5,     5,     5,     5,     5,     4,     1,     2,
       1,     3,     1,     3,     5,     5,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     0,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     1,     1,    11,    10,     1,     2,     1,     1,
       0,     2,     3,     5,     1,     3,     0,     2,     2,     2,
       2
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
          case 379: /* at_font_face_rule  */
#line 754 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).font_face_rule)); }
#line 4953 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 380: /* at_media_rule  */
#line 781 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_rule)); }
#line 4959 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 381: /* orientation_media_feature_keyword_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 4965 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 382: /* scan_media_feature_keyword_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 4971 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 384: /* media_feature_without_value  */
#line 803 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4977 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 385: /* media_feature_with_value  */
#line 803 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4983 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 386: /* media_feature_allowing_operator_with_value  */
#line 803 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4989 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 387: /* media_feature  */
#line 803 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 4995 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 388: /* media_feature_block  */
#line 803 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_feature)); }
#line 5001 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 389: /* media_feature_list  */
#line 796 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).media_features); }
#line 5007 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 394: /* media_query  */
#line 789 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_query)); }
#line 5013 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 395: /* media_list  */
#line 785 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).media_list)); }
#line 5019 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 396: /* at_keyframes_rule  */
#line 762 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframes_rule)); }
#line 5025 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 397: /* keyframe_rule_list  */
#line 766 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframe_rule_list)); }
#line 5031 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 398: /* keyframe_rule  */
#line 758 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).keyframe_rule)); }
#line 5037 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 399: /* keyframe_selector  */
#line 773 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).keyframe_selector); }
#line 5043 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 402: /* universal_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5049 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 403: /* type_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5055 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 405: /* attribute_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5061 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 406: /* class_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5067 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 407: /* id_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5073 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 408: /* pseudo_class_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5079 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 409: /* pseudo_element_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5085 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 410: /* simple_selector_token  */
#line 715 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).simple_selector); }
#line 5091 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 411: /* compound_selector_token  */
#line 719 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).compound_selector); }
#line 5097 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 412: /* combinator  */
#line 723 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).combinator); }
#line 5103 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 413: /* complex_selector  */
#line 727 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).complex_selector); }
#line 5109 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 414: /* selector_list  */
#line 731 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).selectors); }
#line 5115 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 415: /* auto  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5121 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 423: /* percentage  */
#line 500 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).percentage)); }
#line 5127 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 424: /* positive_percentage  */
#line 500 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).percentage)); }
#line 5133 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 426: /* length  */
#line 507 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5139 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 427: /* non_negative_absolute_or_relative_length  */
#line 507 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 428: /* absolute_or_relative_length  */
#line 507 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5151 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 429: /* positive_length  */
#line 507 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).length)); }
#line 5157 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 430: /* ratio  */
#line 511 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).ratio)); }
#line 5163 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 431: /* resolution  */
#line 515 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).resolution)); }
#line 5169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 437: /* common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5175 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 438: /* common_values_without_errors  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5181 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 439: /* color  */
#line 488 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).color)); }
#line 5187 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 440: /* url  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5193 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 441: /* length_percent_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5199 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 442: /* positive_length_percent_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5205 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 444: /* maybe_background_size_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5211 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 445: /* background_position_and_size_shorthand_property_value  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 446: /* background_repeat_shorthand_property_value  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5223 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 447: /* background_position_and_repeat_combination  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5229 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 448: /* final_background_layer_without_position_and_repeat  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5235 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 449: /* final_background_layer  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 450: /* background_property_value  */
#line 921 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).background_shorthand_layer); }
#line 5247 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 451: /* background_color_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5253 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 452: /* color_stop  */
#line 492 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).color_stop); }
#line 5259 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 453: /* comma_separated_color_stop_list  */
#line 496 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).color_stop_list); }
#line 5265 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 456: /* linear_gradient_params  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5271 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 459: /* circle_with_positive_length  */
#line 841 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5277 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 461: /* ellipse_with_2_positive_length_percents  */
#line 841 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5283 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 462: /* at_position  */
#line 841 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5289 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 463: /* maybe_at_position  */
#line 841 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5295 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 464: /* radial_gradient_params  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5301 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 465: /* background_image_property_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5307 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 466: /* comma_separated_background_image_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5313 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 467: /* background_image_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5319 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 468: /* position_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5325 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 469: /* position_list  */
#line 925 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).position_structure); }
#line 5331 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 470: /* validated_position_property  */
#line 841 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_list_value)); }
#line 5337 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 471: /* background_position_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5343 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 472: /* background_repeat_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5349 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 473: /* background_repeat_property_value_without_common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5355 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 474: /* background_repeat_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5361 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 475: /* background_size_property_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5367 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 476: /* background_size_property_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5373 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 477: /* background_size_property_value_without_common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 478: /* background_size_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5385 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 479: /* border_color_property_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5391 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 480: /* border_color_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5397 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 481: /* line_style  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5403 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 482: /* line_style_with_common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5409 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 483: /* border_style_property_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5415 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 484: /* border_style_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5421 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 485: /* border_width_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5427 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 486: /* border_width_element_with_common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5433 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 487: /* border_width_property_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5439 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 488: /* border_width_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5445 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 490: /* border_or_outline_property_list  */
#line 930 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).border_or_outline_shorthand); }
#line 5451 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 491: /* border_or_outline_property_value  */
#line 930 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).border_or_outline_shorthand); }
#line 5457 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 492: /* border_radius_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5463 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 493: /* border_radius_element_with_common_values  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5469 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 494: /* border_radius_property_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5475 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 495: /* border_radius_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5481 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 497: /* box_shadow_list  */
#line 945 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).shadow_info); }
#line 5487 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 498: /* validated_box_shadow_list  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5493 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 499: /* comma_separated_box_shadow_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5499 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 500: /* box_shadow_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5505 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 501: /* color_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5511 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 502: /* content_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5517 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 503: /* display_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5523 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 504: /* font_face_url_src  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5529 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 505: /* font_face_local_src  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5535 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 506: /* font_face_src_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5541 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 507: /* comma_separated_font_face_src_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5547 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 508: /* font_face_src_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5553 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 509: /* font_family_name_identifier_list  */
#line 522 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5559 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 510: /* font_family_string_name  */
#line 522 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5565 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 511: /* font_family_specific_name  */
#line 522 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5571 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 512: /* font_family_specific_name_no_single_identifier  */
#line 522 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).string_value)); }
#line 5577 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 513: /* font_family_name  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5583 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 514: /* comma_separated_font_family_name_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5589 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 515: /* font_family_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5595 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 516: /* font_size_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 517: /* font_style_exclusive_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5607 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 518: /* font_style_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5613 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 519: /* font_weight_exclusive_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5619 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 520: /* font_weight_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5625 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 522: /* optional_font_value_list  */
#line 687 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5631 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 523: /* non_empty_optional_font_value_list  */
#line 687 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5637 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 524: /* font_property_value  */
#line 687 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).font); }
#line 5643 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 525: /* height_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5649 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 526: /* min_height_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5655 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 527: /* max_height_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5661 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 528: /* line_height_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5667 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 529: /* margin_width  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 530: /* margin_side_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5679 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 531: /* margin_property_value  */
#line 669 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).margin_or_padding_shorthand); }
#line 5685 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 532: /* offset_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5691 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 533: /* opacity_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 534: /* overflow_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5703 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 535: /* overflow_wrap_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5709 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 536: /* padding_side_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5715 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 537: /* padding_property_value  */
#line 669 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).margin_or_padding_shorthand); }
#line 5721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 538: /* pointer_events_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5727 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 539: /* position_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5733 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 540: /* scale_function_parameters  */
#line 845 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transform_function); }
#line 5739 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 541: /* text_align_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 542: /* text_decoration_line  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5751 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 543: /* text_decoration_line_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5757 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 545: /* text_decoration_property_list  */
#line 949 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).text_decoration_shorthand); }
#line 5763 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 546: /* text_decoration_property_value  */
#line 949 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).text_decoration_shorthand); }
#line 5769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 547: /* text_indent_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5775 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 548: /* text_overflow_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5781 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 550: /* text_shadow_list  */
#line 945 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).shadow_info); }
#line 5787 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 551: /* validated_text_shadow_list  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 552: /* comma_separated_text_shadow_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5799 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 553: /* text_shadow_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5805 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 554: /* text_transform_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5811 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 556: /* transform_list  */
#line 849 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transform_functions); }
#line 5817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 557: /* transform_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5823 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 558: /* validated_two_position_list_elements  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 559: /* transform_origin_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5835 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 560: /* vertical_align_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5841 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 561: /* visibility_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5847 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 562: /* comma_separated_time_list  */
#line 881 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).time_list); }
#line 5853 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 563: /* time_list_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5859 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 565: /* single_timing_function  */
#line 895 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).timing_function)); }
#line 5865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 566: /* comma_separated_single_timing_function_list  */
#line 903 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).timing_function_list); }
#line 5871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 567: /* timing_function_list_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5877 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 568: /* animation_delay_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5883 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 569: /* animation_direction_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5889 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 570: /* comma_separated_animation_direction_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5895 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 571: /* animation_direction_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5901 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 572: /* animation_duration_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5907 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 573: /* animation_fill_mode_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5913 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 574: /* comma_separated_animation_fill_mode_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5919 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 575: /* animation_fill_mode_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5925 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 576: /* animation_iteration_count_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5931 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 577: /* comma_separated_animation_iteration_count_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5937 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 578: /* animation_iteration_count_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5943 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 579: /* animation_name_list_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5949 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 580: /* comma_separated_animation_name_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 5955 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 581: /* animation_name_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5961 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 582: /* animation_timing_function_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5967 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 584: /* single_animation  */
#line 673 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_animation); }
#line 5973 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 585: /* single_non_empty_animation  */
#line 673 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_animation); }
#line 5979 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 586: /* comma_separated_animation_list  */
#line 677 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).animation_builder); }
#line 5985 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 587: /* animation_property_value  */
#line 681 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).animation); }
#line 5991 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 588: /* transition_delay_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 5997 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 589: /* transition_duration_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6003 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 590: /* transition_timing_function_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6009 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 591: /* comma_separated_animatable_property_name_list  */
#line 885 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_name_list); }
#line 6015 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 592: /* transition_property_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6021 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 594: /* single_transition  */
#line 907 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_transition); }
#line 6027 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 595: /* single_non_empty_transition  */
#line 907 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).single_transition); }
#line 6033 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 596: /* comma_separated_transition_list  */
#line 911 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transition_builder); }
#line 6039 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 597: /* transition_property_value  */
#line 691 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).transition); }
#line 6045 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 598: /* unicode_range_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6051 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 599: /* comma_separated_unicode_range_list  */
#line 833 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_list); }
#line 6057 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 600: /* white_space_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6063 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 601: /* width_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6069 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 602: /* min_width_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6075 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 603: /* max_width_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6081 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 605: /* z_index_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6087 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 606: /* flex_start_end_center_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6093 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 607: /* space_between_around_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6099 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 608: /* baseline_stretch_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6105 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 609: /* justify_content_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6111 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 610: /* align_content_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6117 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 611: /* align_items_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6123 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 612: /* align_self_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6129 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 613: /* flex_basis_keywords  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6135 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 614: /* flex_basis_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6141 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 615: /* flex_basis_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6147 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 616: /* flex_single_flex_basis_element  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6153 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 617: /* flex_single_property_value  */
#line 937 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6159 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 618: /* flex_two_property_values  */
#line 937 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6165 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 619: /* flex_three_property_values  */
#line 937 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6171 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 620: /* flex_property_value  */
#line 937 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_shorthand); }
#line 6177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 621: /* flex_factor_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6183 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 622: /* order_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6189 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 623: /* flex_direction  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6195 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 624: /* flex_direction_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 626: /* flex_flow_property_list  */
#line 941 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_flow_shorthand); }
#line 6207 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 627: /* flex_flow_property_value  */
#line 941 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).flex_flow_shorthand); }
#line 6213 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 628: /* flex_wrap  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6219 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 629: /* flex_wrap_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6225 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 631: /* maybe_declaration  */
#line 533 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).property_declaration); }
#line 6231 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 633: /* style_declaration_list  */
#line 746 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_declaration_data)); }
#line 6237 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 634: /* font_face_declaration_list  */
#line 777 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).font_face_declaration_data)); }
#line 6243 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 635: /* style_declaration_block  */
#line 750 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_declaration)); }
#line 6249 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 636: /* rule_list_block  */
#line 701 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).rule_list)); }
#line 6255 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 637: /* style_rule  */
#line 810 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_rule)); }
#line 6261 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 638: /* qualified_rule  */
#line 810 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_rule)); }
#line 6267 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 640: /* rule  */
#line 814 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).css_rule)); }
#line 6273 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 641: /* rule_list  */
#line 701 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).rule_list)); }
#line 6279 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 642: /* style_sheet  */
#line 697 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).style_sheet)); }
#line 6285 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 644: /* filter_property_value  */
#line 657 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).property_value)); }
#line 6291 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 645: /* filter_function_list  */
#line 858 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_filter_functions); }
#line 6297 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 646: /* filter_function  */
#line 854 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).filter_function); }
#line 6303 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 647: /* cobalt_mtm_filter_function  */
#line 854 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).filter_function); }
#line 6309 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 648: /* cobalt_map_to_mesh_spec  */
#line 863 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_map_to_mesh_spec); }
#line 6315 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 650: /* cobalt_mtm_resolution_matched_mesh_list  */
#line 868 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_resolution_matched_meshes); }
#line 6321 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 651: /* cobalt_mtm_resolution_matched_mesh  */
#line 872 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).cobalt_mtm_resolution_matched_mesh); }
#line 6327 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 652: /* cobalt_mtm_transform_function  */
#line 665 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).matrix4x4); }
#line 6333 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 653: /* number_matrix  */
#line 661 "grammar.y" /* yacc.c:1257  */
      { delete ((*yyvaluep).number_matrix); }
#line 6339 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 654: /* maybe_cobalt_mtm_stereo_mode  */
#line 877 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).stereo_mode)); }
#line 6345 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
        break;

    case 655: /* cobalt_mtm_stereo_mode  */
#line 877 "grammar.y" /* yacc.c:1257  */
      { SafeRelease(((*yyvaluep).stereo_mode)); }
#line 6351 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1257  */
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
#line 986 "grammar.y" /* yacc.c:1646  */
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
#line 6655 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 7:
#line 1006 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_rule) = AddRef(new cssom::CSSMediaRule(MakeScopedRefPtrAndRelease((yyvsp[-1].media_list)),
                                        MakeScopedRefPtrAndRelease((yyvsp[0].rule_list))));
  }
#line 6664 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 8:
#line 1024 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetLandscape().get());
  }
#line 6672 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 9:
#line 1027 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetPortrait().get());
  }
#line 6680 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 10:
#line 1035 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetInterlace().get());
  }
#line 6688 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 11:
#line 1038 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::MediaFeatureKeywordValue::GetProgressive().get());
  }
#line 6696 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 12:
#line 1045 "grammar.y" /* yacc.c:1646  */
    { (yyval.media_feature_operator) = cssom::kMinimum; }
#line 6702 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 13:
#line 1046 "grammar.y" /* yacc.c:1646  */
    { (yyval.media_feature_operator) = cssom::kMaximum; }
#line 6708 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 14:
#line 1054 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6716 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 15:
#line 1057 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6724 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 16:
#line 1060 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6732 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 17:
#line 1063 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6740 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 18:
#line 1066 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6748 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 19:
#line 1069 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6756 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 20:
#line 1072 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-1].integer)));
  }
#line 6764 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 21:
#line 1080 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), (yyvsp[0].property_value)));
  }
#line 6772 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 22:
#line 1084 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), (yyvsp[0].property_value)));
  }
#line 6780 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 23:
#line 1087 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), new cssom::IntegerValue((yyvsp[0].integer))));
  }
#line 6788 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 24:
#line 1094 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].length))));
  }
#line 6796 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 25:
#line 1098 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), new cssom::IntegerValue((yyvsp[0].integer))));
  }
#line 6804 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 26:
#line 1101 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].ratio))));
  }
#line 6812 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 27:
#line 1104 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = AddRef(new cssom::MediaFeature((yyvsp[-3].integer), MakeScopedRefPtrAndRelease((yyvsp[0].resolution))));
  }
#line 6820 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 31:
#line 1116 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = (yyvsp[0].media_feature);
    (yyval.media_feature)->set_operator((yyvsp[-1].media_feature_operator));
  }
#line 6829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 32:
#line 1124 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_feature) = (yyvsp[-2].media_feature);
  }
#line 6837 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 33:
#line 1132 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_features) = new cssom::MediaFeatures();
    (yyval.media_features)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].media_feature)));
  }
#line 6846 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 34:
#line 1137 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_features) = (yyvsp[-3].media_features);
    (yyval.media_features)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].media_feature)));
  }
#line 6855 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 49:
#line 1169 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = false;
  }
#line 6863 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 50:
#line 1172 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = true;
  }
#line 6871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 51:
#line 1182 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = (yyvsp[0].evaluated_media_type);
  }
#line 6879 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 52:
#line 1186 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = !(yyvsp[0].evaluated_media_type);
  }
#line 6887 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 53:
#line 1190 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = (yyvsp[0].evaluated_media_type);
  }
#line 6895 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 54:
#line 1194 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = false;
  }
#line 6903 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 55:
#line 1198 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.evaluated_media_type) = true;
  }
#line 6911 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 56:
#line 1209 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true));
  }
#line 6919 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 57:
#line 1213 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::MediaFeatures> media_features((yyvsp[0].media_features));
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true, std::move(media_features)));
  }
#line 6928 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 58:
#line 1218 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery((yyvsp[-1].evaluated_media_type)));
  }
#line 6936 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 59:
#line 1223 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::MediaFeatures> media_features((yyvsp[0].media_features));
    (yyval.media_query) = AddRef(new cssom::MediaQuery((yyvsp[-4].evaluated_media_type), std::move(media_features)));
  }
#line 6945 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 60:
#line 1231 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_query) = AddRef(new cssom::MediaQuery(true));
  }
#line 6953 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 61:
#line 1240 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_list) = AddRef(new cssom::MediaList(parser_impl->css_parser()));
    (yyval.media_list)->Append(MakeScopedRefPtrAndRelease((yyvsp[0].media_query)));
  }
#line 6962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 62:
#line 1244 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.media_list) = (yyvsp[-2].media_list);
    (yyval.media_list)->Append(MakeScopedRefPtrAndRelease((yyvsp[0].media_query)));
  }
#line 6971 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 63:
#line 1258 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframes_rule) = (yyvsp[-2].keyframe_rule_list) ? AddRef(
        new cssom::CSSKeyframesRule((yyvsp[-6].string).ToString(),
                                    MakeScopedRefPtrAndRelease((yyvsp[-2].keyframe_rule_list)))) : NULL;
  }
#line 6981 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 64:
#line 1266 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_rule_list) = AddRef(new cssom::CSSRuleList());
    (yyval.keyframe_rule_list)->AppendCSSRule(MakeScopedRefPtrAndRelease((yyvsp[0].keyframe_rule)));
  }
#line 6990 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 65:
#line 1270 "grammar.y" /* yacc.c:1646  */
    {
    // The error message is logged by |keyframe_rule|, so it is not necessary to
    // log it again.
    (yyval.keyframe_rule_list) = NULL;
  }
#line 7000 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 66:
#line 1275 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_rule_list) = (yyvsp[-1].keyframe_rule_list);
    scoped_refptr<cssom::CSSKeyframeRule> keyframe_rule(
        MakeScopedRefPtrAndRelease((yyvsp[0].keyframe_rule)));
    if ((yyval.keyframe_rule_list)) {
      (yyval.keyframe_rule_list)->AppendCSSRule(keyframe_rule);
    }
  }
#line 7013 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 67:
#line 1286 "grammar.y" /* yacc.c:1646  */
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
#line 7038 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 68:
#line 1309 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_selector) = new std::vector<float>(1, (yyvsp[0].keyframe_offset));
  }
#line 7046 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 69:
#line 1312 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_selector) = (yyvsp[-3].keyframe_selector);
    (yyval.keyframe_selector)->push_back((yyvsp[0].keyframe_offset));
  }
#line 7055 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 70:
#line 1319 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = 0.0f;
  }
#line 7063 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 71:
#line 1322 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = 1.0f;
  }
#line 7071 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 72:
#line 1325 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.keyframe_offset) = (yyvsp[-1].real) / 100.0f;
  }
#line 7079 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 74:
#line 1340 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAllProperty));
  }
#line 7088 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 75:
#line 1344 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignContentProperty));
  }
#line 7097 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 76:
#line 1348 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignItemsProperty));
  }
#line 7106 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 77:
#line 1352 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAlignSelfProperty));
  }
#line 7115 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 78:
#line 1356 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDelayProperty));
  }
#line 7124 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 79:
#line 1360 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDirectionProperty));
  }
#line 7133 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 80:
#line 1364 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationDurationProperty));
  }
#line 7142 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 81:
#line 1368 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationFillModeProperty));
  }
#line 7151 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 82:
#line 1372 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationIterationCountProperty));
  }
#line 7160 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 83:
#line 1376 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationNameProperty));
  }
#line 7169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 84:
#line 1380 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationTimingFunctionProperty));
  }
#line 7178 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 85:
#line 1384 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kAnimationProperty));
  }
#line 7187 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 86:
#line 1388 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundColorProperty));
  }
#line 7196 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 87:
#line 1392 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundImageProperty));
  }
#line 7205 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 88:
#line 1396 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundPositionProperty));
  }
#line 7214 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 89:
#line 1400 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundRepeatProperty));
  }
#line 7223 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 90:
#line 1404 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundSizeProperty));
  }
#line 7232 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 91:
#line 1408 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBackgroundProperty));
  }
#line 7241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 92:
#line 1412 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderProperty));
  }
#line 7250 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 93:
#line 1416 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomLeftRadiusProperty));
  }
#line 7259 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 94:
#line 1420 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomRightRadiusProperty));
  }
#line 7268 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 95:
#line 1424 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomProperty));
  }
#line 7277 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 96:
#line 1428 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomColorProperty));
  }
#line 7286 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 97:
#line 1432 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomStyleProperty));
  }
#line 7295 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 98:
#line 1436 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderBottomWidthProperty));
  }
#line 7304 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 99:
#line 1440 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftProperty));
  }
#line 7313 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 100:
#line 1444 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderColorProperty));
  }
#line 7322 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 101:
#line 1448 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftColorProperty));
  }
#line 7331 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 102:
#line 1452 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftStyleProperty));
  }
#line 7340 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 103:
#line 1456 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderLeftWidthProperty));
  }
#line 7349 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 104:
#line 1460 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRadiusProperty));
  }
#line 7358 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 105:
#line 1464 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightProperty));
  }
#line 7367 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 106:
#line 1468 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightColorProperty));
  }
#line 7376 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 107:
#line 1472 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightStyleProperty));
  }
#line 7385 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 108:
#line 1476 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderRightWidthProperty));
  }
#line 7394 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 109:
#line 1480 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderStyleProperty));
  }
#line 7403 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 110:
#line 1484 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopProperty));
  }
#line 7412 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 111:
#line 1488 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopColorProperty));
  }
#line 7421 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 112:
#line 1492 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopLeftRadiusProperty));
  }
#line 7430 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 113:
#line 1496 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
          cssom::GetPropertyName(cssom::kBorderTopRightRadiusProperty));
  }
#line 7439 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 114:
#line 1500 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopStyleProperty));
  }
#line 7448 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 115:
#line 1504 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderTopWidthProperty));
  }
#line 7457 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 116:
#line 1508 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBorderWidthProperty));
  }
#line 7466 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 117:
#line 1512 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBottomProperty));
  }
#line 7475 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 118:
#line 1516 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kBoxShadowProperty));
  }
#line 7484 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 119:
#line 1520 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kColorProperty));
  }
#line 7493 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 120:
#line 1524 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kContentProperty));
  }
#line 7502 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 121:
#line 1528 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kDisplayProperty));
  }
#line 7511 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 122:
#line 1532 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFilterProperty));
  }
#line 7520 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 123:
#line 1536 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexProperty));
  }
#line 7529 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 124:
#line 1540 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexBasisProperty));
  }
#line 7538 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 125:
#line 1544 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexDirectionProperty));
  }
#line 7547 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 126:
#line 1548 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexFlowProperty));
  }
#line 7556 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 127:
#line 1552 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexGrowProperty));
  }
#line 7565 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 128:
#line 1556 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexShrinkProperty));
  }
#line 7574 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 129:
#line 1560 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFlexWrapProperty));
  }
#line 7583 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 130:
#line 1564 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontProperty));
  }
#line 7592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 131:
#line 1568 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontFamilyProperty));
  }
#line 7601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 132:
#line 1572 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontSizeProperty));
  }
#line 7610 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 133:
#line 1576 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontStyleProperty));
  }
#line 7619 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 134:
#line 1580 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kFontWeightProperty));
  }
#line 7628 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 135:
#line 1584 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kHeightProperty));
  }
#line 7637 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 136:
#line 1588 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kJustifyContentProperty));
  }
#line 7646 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 137:
#line 1592 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kLeftProperty));
  }
#line 7655 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 138:
#line 1596 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kLineHeightProperty));
  }
#line 7664 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 139:
#line 1600 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginBottomProperty));
  }
#line 7673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 140:
#line 1604 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginLeftProperty));
  }
#line 7682 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 141:
#line 1608 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginRightProperty));
  }
#line 7691 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 142:
#line 1612 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginProperty));
  }
#line 7700 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 143:
#line 1616 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMarginTopProperty));
  }
#line 7709 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 144:
#line 1620 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMaxHeightProperty));
  }
#line 7718 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 145:
#line 1624 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMaxWidthProperty));
  }
#line 7727 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 146:
#line 1628 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMinHeightProperty));
  }
#line 7736 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 147:
#line 1632 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kMinWidthProperty));
  }
#line 7745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 148:
#line 1636 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOpacityProperty));
  }
#line 7754 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 149:
#line 1640 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOrderProperty));
  }
#line 7763 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 150:
#line 1644 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineProperty));
  }
#line 7772 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 151:
#line 1648 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineColorProperty));
  }
#line 7781 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 152:
#line 1652 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineStyleProperty));
  }
#line 7790 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 153:
#line 1656 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOutlineWidthProperty));
  }
#line 7799 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 154:
#line 1660 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOverflowProperty));
  }
#line 7808 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 155:
#line 1664 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kOverflowWrapProperty));
  }
#line 7817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 156:
#line 1668 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingBottomProperty));
  }
#line 7826 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 157:
#line 1672 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingLeftProperty));
  }
#line 7835 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 158:
#line 1676 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingRightProperty));
  }
#line 7844 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 159:
#line 1680 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingProperty));
  }
#line 7853 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 160:
#line 1684 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPaddingTopProperty));
  }
#line 7862 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 161:
#line 1688 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPointerEventsProperty));
  }
#line 7871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 162:
#line 1692 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kPositionProperty));
  }
#line 7880 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 163:
#line 1696 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kRightProperty));
  }
#line 7889 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 164:
#line 1700 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kSrcProperty));
  }
#line 7898 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 165:
#line 1704 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextAlignProperty));
  }
#line 7907 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 166:
#line 1708 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationProperty));
  }
#line 7916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 167:
#line 1712 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationColorProperty));
  }
#line 7925 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 168:
#line 1716 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextDecorationLineProperty));
  }
#line 7934 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 169:
#line 1720 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextIndentProperty));
  }
#line 7943 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 170:
#line 1724 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextOverflowProperty));
  }
#line 7952 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 171:
#line 1728 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextShadowProperty));
  }
#line 7961 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 172:
#line 1732 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTextTransformProperty));
  }
#line 7970 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 173:
#line 1736 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTopProperty));
  }
#line 7979 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 174:
#line 1740 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransformProperty));
  }
#line 7988 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 175:
#line 1744 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransformOriginProperty));
  }
#line 7997 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 176:
#line 1748 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionDelayProperty));
  }
#line 8006 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 177:
#line 1752 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionDurationProperty));
  }
#line 8015 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 178:
#line 1756 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionPropertyProperty));
  }
#line 8024 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 179:
#line 1760 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionTimingFunctionProperty));
  }
#line 8033 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 180:
#line 1764 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kTransitionProperty));
  }
#line 8042 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 181:
#line 1768 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kUnicodeRangeProperty));
  }
#line 8051 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 182:
#line 1772 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kVerticalAlignProperty));
  }
#line 8060 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 183:
#line 1776 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kVisibilityProperty));
  }
#line 8069 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 184:
#line 1780 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWhiteSpaceProperty));
  }
#line 8078 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 185:
#line 1784 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWidthProperty));
  }
#line 8087 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 186:
#line 1788 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kWordWrapProperty));
  }
#line 8096 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 187:
#line 1792 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
            cssom::GetPropertyName(cssom::kZIndexProperty));
  }
#line 8105 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 188:
#line 1797 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAbsoluteKeywordName);
  }
#line 8113 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 189:
#line 1800 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAlternateKeywordName);
  }
#line 8121 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 190:
#line 1803 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAlternateReverseKeywordName);
  }
#line 8129 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 191:
#line 1806 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAquaKeywordName);
  }
#line 8137 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 192:
#line 1809 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAtKeywordName);
  }
#line 8145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 193:
#line 1812 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAutoKeywordName);
  }
#line 8153 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 194:
#line 1815 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBackwardsKeywordName);
  }
#line 8161 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 195:
#line 1818 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBaselineKeywordName);
  }
#line 8169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 196:
#line 1821 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlackKeywordName);
  }
#line 8177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 197:
#line 1824 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlockKeywordName);
  }
#line 8185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 198:
#line 1827 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBlueKeywordName);
  }
#line 8193 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 199:
#line 1830 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBoldKeywordName);
  }
#line 8201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 200:
#line 1833 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBothKeywordName);
  }
#line 8209 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 201:
#line 1837 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBreakWordKeywordName);
  }
#line 8217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 202:
#line 1840 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCenterKeywordName);
  }
#line 8225 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 203:
#line 1843 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCircleKeywordName);
  }
#line 8233 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 204:
#line 1846 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClipKeywordName);
  }
#line 8241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 205:
#line 1849 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClosestCornerKeywordName);
  }
#line 8249 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 206:
#line 1852 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kClosestSideKeywordName);
  }
#line 8257 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 207:
#line 1855 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCollapseKeywordName);
  }
#line 8265 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 208:
#line 1858 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kColumnKeywordName);
  }
#line 8273 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 209:
#line 1861 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kColumnReverseKeywordName);
  }
#line 8281 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 210:
#line 1864 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kContainKeywordName);
  }
#line 8289 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 211:
#line 1868 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCoverKeywordName);
  }
#line 8297 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 212:
#line 1871 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kCursiveKeywordName);
  }
#line 8305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 213:
#line 1874 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseInOutKeywordName);
  }
#line 8313 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 214:
#line 1877 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseInKeywordName);
  }
#line 8321 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 215:
#line 1880 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseOutKeywordName);
  }
#line 8329 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 216:
#line 1883 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEaseKeywordName);
  }
#line 8337 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 217:
#line 1886 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEllipseKeywordName);
  }
#line 8345 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 218:
#line 1889 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEllipsisKeywordName);
  }
#line 8353 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 219:
#line 1892 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEndKeywordName);
  }
#line 8361 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 220:
#line 1895 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEquirectangularKeywordName);
  }
#line 8369 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 221:
#line 1898 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFantasyKeywordName);
  }
#line 8377 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 222:
#line 1901 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFarthestCornerKeywordName);
  }
#line 8385 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 223:
#line 1904 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFarthestSideKeywordName);
  }
#line 8393 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 224:
#line 1907 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFixedKeywordName);
  }
#line 8401 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 225:
#line 1911 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFlexEndKeywordName);
  }
#line 8409 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 226:
#line 1914 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFlexStartKeywordName);
  }
#line 8417 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 227:
#line 1917 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kForwardsKeywordName);
  }
#line 8425 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 228:
#line 1920 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFromKeywordName);
  }
#line 8433 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 229:
#line 1923 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFuchsiaKeywordName);
  }
#line 8441 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 230:
#line 1926 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kGrayKeywordName);
  }
#line 8449 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 231:
#line 1929 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kGreenKeywordName);
  }
#line 8457 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 232:
#line 1932 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kHiddenKeywordName);
  }
#line 8465 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 233:
#line 1935 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInfiniteKeywordName);
  }
#line 8473 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 234:
#line 1938 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInheritKeywordName);
  }
#line 8481 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 235:
#line 1941 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInitialKeywordName);
  }
#line 8489 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 236:
#line 1944 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineBlockKeywordName);
  }
#line 8497 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 237:
#line 1947 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineKeywordName);
  }
#line 8505 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 238:
#line 1950 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInlineFlexKeywordName);
  }
#line 8513 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 239:
#line 1953 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kInsetKeywordName);
  }
#line 8521 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 240:
#line 1956 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kItalicKeywordName);
  }
#line 8529 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 241:
#line 1959 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLimeKeywordName);
  }
#line 8537 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 242:
#line 1962 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLinearKeywordName);
  }
#line 8545 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 243:
#line 1965 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kLineThroughKeywordName);
  }
#line 8553 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 244:
#line 1968 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMaroonKeywordName);
  }
#line 8561 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 245:
#line 1971 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMiddleKeywordName);
  }
#line 8569 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 246:
#line 1974 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMonoscopicKeywordName);
  }
#line 8577 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 247:
#line 1977 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kMonospaceKeywordName);
  }
#line 8585 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 248:
#line 1980 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNavyKeywordName);
  }
#line 8593 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 249:
#line 1983 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNoneKeywordName);
  }
#line 8601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 250:
#line 1986 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNoRepeatKeywordName);
  }
#line 8609 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 251:
#line 1989 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNormalKeywordName);
  }
#line 8617 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 252:
#line 1992 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kNowrapKeywordName);
  }
#line 8625 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 253:
#line 1995 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kObliqueKeywordName);
  }
#line 8633 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 254:
#line 1998 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kOliveKeywordName);
  }
#line 8641 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 255:
#line 2001 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreKeywordName);
  }
#line 8649 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 256:
#line 2004 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreLineKeywordName);
  }
#line 8657 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 257:
#line 2007 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPreWrapKeywordName);
  }
#line 8665 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 258:
#line 2010 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kPurpleKeywordName);
  }
#line 8673 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 259:
#line 2013 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRedKeywordName);
  }
#line 8681 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 260:
#line 2016 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatKeywordName);
  }
#line 8689 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 261:
#line 2019 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatXKeywordName);
  }
#line 8697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 262:
#line 2022 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRepeatYKeywordName);
  }
#line 8705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 263:
#line 2025 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRelativeKeywordName);
  }
#line 8713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 264:
#line 2028 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kReverseKeywordName);
  }
#line 8721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 265:
#line 2032 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRowKeywordName);
  }
#line 8729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 266:
#line 2035 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kRowReverseKeywordName);
  }
#line 8737 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 267:
#line 2038 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSansSerifKeywordName);
  }
#line 8745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 268:
#line 2041 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kScrollKeywordName);
  }
#line 8753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 269:
#line 2044 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSerifKeywordName);
  }
#line 8761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 270:
#line 2047 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSilverKeywordName);
  }
#line 8769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 271:
#line 2050 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSolidKeywordName);
  }
#line 8777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 272:
#line 2053 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSpaceAroundKeywordName);
  }
#line 8785 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 273:
#line 2056 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kSpaceBetweenKeywordName);
  }
#line 8793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 274:
#line 2059 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStartKeywordName);
  }
#line 8801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 275:
#line 2062 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStaticKeywordName);
  }
#line 8809 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 276:
#line 2065 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStepEndKeywordName);
  }
#line 8817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 277:
#line 2068 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStepStartKeywordName);
  }
#line 8825 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 278:
#line 2071 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
             cssom::kStereoscopicLeftRightKeywordName);
  }
#line 8834 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 279:
#line 2075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(
             cssom::kStereoscopicTopBottomKeywordName);
  }
#line 8843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 280:
#line 2079 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kStretchKeywordName);
  }
#line 8851 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 281:
#line 2082 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kTealKeywordName);
  }
#line 8859 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 282:
#line 2085 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kToKeywordName);
  }
#line 8867 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 283:
#line 2089 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kTransparentKeywordName);
  }
#line 8875 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 284:
#line 2092 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kUppercaseKeywordName);
  }
#line 8883 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 285:
#line 2095 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kVisibleKeywordName);
  }
#line 8891 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 286:
#line 2098 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWhiteKeywordName);
  }
#line 8899 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 287:
#line 2101 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWrapKeywordName);
  }
#line 8907 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 288:
#line 2104 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kWrapReverseKeywordName);
  }
#line 8915 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 289:
#line 2107 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kYellowKeywordName);
  }
#line 8923 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 290:
#line 2111 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kActivePseudoClassName);
  }
#line 8931 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 291:
#line 2114 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kEmptyPseudoClassName);
  }
#line 8939 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 292:
#line 2117 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kFocusPseudoClassName);
  }
#line 8947 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 293:
#line 2120 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kHoverPseudoClassName);
  }
#line 8955 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 294:
#line 2124 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kAfterPseudoElementName);
  }
#line 8963 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 295:
#line 2127 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string) = TrivialStringPiece::FromCString(cssom::kBeforePseudoElementName);
  }
#line 8971 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 296:
#line 2135 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::UniversalSelector();
  }
#line 8979 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 297:
#line 2144 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::TypeSelector((yyvsp[0].string).ToString());
  }
#line 8987 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 298:
#line 2150 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kEquals;
  }
#line 8995 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 299:
#line 2153 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kIncludes;
  }
#line 9003 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 300:
#line 2156 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kDashMatch;
  }
#line 9011 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 301:
#line 2159 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kBeginsWith;
  }
#line 9019 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 302:
#line 2162 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kEndsWith;
  }
#line 9027 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 303:
#line 2165 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.attribute_match) = cssom::AttributeSelector::kContains;
  }
#line 9035 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 304:
#line 2173 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-2].string).ToString());
  }
#line 9043 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 305:
#line 2177 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-5].string).ToString(), (yyvsp[-3].attribute_match), (yyvsp[-2].string).ToString());
  }
#line 9051 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 306:
#line 2181 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AttributeSelector((yyvsp[-5].string).ToString(), (yyvsp[-3].attribute_match), (yyvsp[-2].string).ToString());
  }
#line 9059 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 307:
#line 2190 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::ClassSelector((yyvsp[0].string).ToString());
  }
#line 9067 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 308:
#line 2199 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::IdSelector((yyvsp[0].string).ToString());
  }
#line 9075 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 309:
#line 2202 "grammar.y" /* yacc.c:1646  */
    {
    if (::base::IsAsciiDigit(*(yyvsp[0].string).begin)) {
      YYERROR;
    }
    (yyval.simple_selector) = new cssom::IdSelector((yyvsp[0].string).ToString());
  }
#line 9086 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 310:
#line 2221 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::ActivePseudoClass();
  }
#line 9094 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 311:
#line 2231 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::EmptyPseudoClass();
  }
#line 9102 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 312:
#line 2237 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::FocusPseudoClass();
  }
#line 9110 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 313:
#line 2247 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::HoverPseudoClass();
  }
#line 9118 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 314:
#line 2254 "grammar.y" /* yacc.c:1646  */
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
#line 9135 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 315:
#line 2266 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-3]), "unsupported selector within :not()");
    (yyval.simple_selector) = NULL;
  }
#line 9144 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 316:
#line 2270 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-1]), "unsupported pseudo-class");
    (yyval.simple_selector) = NULL;
  }
#line 9153 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 317:
#line 2286 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AfterPseudoElement();
  }
#line 9161 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 318:
#line 2289 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::BeforePseudoElement();
  }
#line 9169 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 319:
#line 2292 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::AfterPseudoElement();
  }
#line 9177 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 320:
#line 2295 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.simple_selector) = new cssom::BeforePseudoElement();
  }
#line 9185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 321:
#line 2298 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-2]), "unsupported pseudo-element");
    (yyval.simple_selector) = NULL;
  }
#line 9194 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 329:
#line 2320 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::SimpleSelector> simple_selector((yyvsp[0].simple_selector));

    if (simple_selector) {
      (yyval.compound_selector) = new cssom::CompoundSelector();
      (yyval.compound_selector)->AppendSelector(std::move(simple_selector));
    } else {
      (yyval.compound_selector) = NULL;
    }
  }
#line 9209 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 330:
#line 2330 "grammar.y" /* yacc.c:1646  */
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
#line 9225 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 331:
#line 2347 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::DescendantCombinator();
  }
#line 9233 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 332:
#line 2350 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::ChildCombinator();
  }
#line 9241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 333:
#line 2353 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::NextSiblingCombinator();
  }
#line 9249 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 334:
#line 2356 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.combinator) = new cssom::FollowingSiblingCombinator();
  }
#line 9257 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 335:
#line 2365 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::CompoundSelector> compound_selector((yyvsp[0].compound_selector));

    if (compound_selector) {
      (yyval.complex_selector) = new cssom::ComplexSelector();
      (yyval.complex_selector)->AppendSelector(std::move(compound_selector));
    } else {
      (yyval.complex_selector) = NULL;
    }
  }
#line 9272 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 336:
#line 2375 "grammar.y" /* yacc.c:1646  */
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
#line 9290 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 338:
#line 2394 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ComplexSelector> complex_selector((yyvsp[0].complex_selector));

    if (complex_selector) {
      (yyval.selectors) = new cssom::Selectors();
      (yyval.selectors)->emplace_back(complex_selector.release());
    } else {
      (yyval.selectors) = NULL;
    }
  }
#line 9305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 339:
#line 2404 "grammar.y" /* yacc.c:1646  */
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
#line 9321 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 340:
#line 2423 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 9329 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 341:
#line 2432 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = 1; }
#line 9335 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 342:
#line 2433 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = 1; }
#line 9341 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 343:
#line 2434 "grammar.y" /* yacc.c:1646  */
    { (yyval.sign) = -1; }
#line 9347 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 344:
#line 2441 "grammar.y" /* yacc.c:1646  */
    {
    if (((yyvsp[0].integer) < 0) || ((yyvsp[0].integer) > 1)) {
      parser_impl->LogError((yylsp[0]), "integer value must be 0 or 1");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9359 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 345:
#line 2454 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.integer) = (yyvsp[-2].sign) * (yyvsp[-1].integer);
  }
#line 9367 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 346:
#line 2461 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].integer) < 0) {
      parser_impl->LogError((yylsp[0]), "integer value must not be negative");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 347:
#line 2472 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].integer) < 1) {
      parser_impl->LogError((yylsp[0]), "integer value must be positive");
      YYERROR;
    }
    (yyval.integer) = (yyvsp[0].integer);
  }
#line 9391 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 348:
#line 2485 "grammar.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[0].integer); }
#line 9397 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 349:
#line 2486 "grammar.y" /* yacc.c:1646  */
    { (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real); }
#line 9403 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 350:
#line 2491 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].real) < 0) {
      parser_impl->LogError((yylsp[0]), "number value must not be negative");
      YYERROR;
    }
    (yyval.real) = (yyvsp[0].real);
  }
#line 9415 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 351:
#line 2505 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.percentage) = AddRef(new cssom::PercentageValue((yyvsp[-2].sign) * (yyvsp[-1].real) / 100));
  }
#line 9423 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 352:
#line 2512 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PercentageValue> percentage =
        MakeScopedRefPtrAndRelease((yyvsp[0].percentage));
    if (percentage && percentage->value() < 0) {
      parser_impl->LogError((yylsp[0]), "negative values of percentage are illegal");
      YYERROR;
    }
    (yyval.percentage) = AddRef(percentage.get());
  }
#line 9437 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 353:
#line 2526 "grammar.y" /* yacc.c:1646  */
    {
    // Any values outside the range 0.0 (fully transparent)
    // to 1.0 (fully opaque) will be clamped to this range.
    (yyval.real) = ClampToRange(0.0f, 1.0f, (yyvsp[0].real));
  }
#line 9447 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 354:
#line 2536 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].real) != 0) {
      parser_impl->LogError(
          (yylsp[0]), "non-zero length is not allowed without unit identifier");
      YYERROR;
    }
    (yyval.length) = AddRef(new cssom::LengthValue(0, cssom::kPixelsUnit));
  }
#line 9460 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 355:
#line 2544 "grammar.y" /* yacc.c:1646  */
    { (yyval.length) = (yyvsp[0].length); }
#line 9466 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 356:
#line 2550 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    DCHECK(length);
    if (length->value() < 0) {
      parser_impl->LogError((yylsp[0]), "length value must not be negative");
      YYERROR;
    }
    (yyval.length) = AddRef(length.get());
  }
#line 9480 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 357:
#line 2564 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real), cssom::kFontSizesAkaEmUnit));
  }
#line 9488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 358:
#line 2567 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kRootElementFontSizesAkaRemUnit));
  }
#line 9497 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 359:
#line 2571 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kViewportWidthPercentsAkaVwUnit));
  }
#line 9506 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 360:
#line 2575 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real),
        cssom::kViewportHeightPercentsAkaVhUnit));
  }
#line 9515 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 361:
#line 2581 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.length) = AddRef(new cssom::LengthValue((yyvsp[-2].sign) * (yyvsp[-1].real), cssom::kPixelsUnit));
  }
#line 9523 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 362:
#line 2587 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::LengthValue> length(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    if (length && length->value() < 0) {
      parser_impl->LogError((yylsp[0]), "length value must not be negative");
      YYERROR;
    }
    (yyval.length) = AddRef(length.get());
  }
#line 9536 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 363:
#line 2600 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.ratio) = AddRef(new cssom::RatioValue(math::Rational((yyvsp[-3].integer), (yyvsp[0].integer))));
  }
#line 9544 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 364:
#line 2608 "grammar.y" /* yacc.c:1646  */
    {
    float value = (yyvsp[-2].sign) * (yyvsp[-1].real);
    if (value <= 0) {
      parser_impl->LogError((yylsp[-2]), "resolution value must be positive");
      YYERROR;
    }
    (yyval.resolution) = AddRef(new cssom::ResolutionValue(value, cssom::kDPIUnit));
  }
#line 9557 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 365:
#line 2616 "grammar.y" /* yacc.c:1646  */
    {
    float value = (yyvsp[-2].sign) * (yyvsp[-1].real);
    if (value <= 0) {
      parser_impl->LogError((yylsp[-2]), "resolution value must be positive");
      YYERROR;
    }
    (yyval.resolution) = AddRef(new cssom::ResolutionValue(value, cssom::kDPCMUnit));
  }
#line 9570 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 366:
#line 2629 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * (2 * static_cast<float>(M_PI) / 360.0f);
  }
#line 9578 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 367:
#line 2632 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * (2 * static_cast<float>(M_PI) / 400.0f);
  }
#line 9586 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 368:
#line 2635 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real);
  }
#line 9594 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 369:
#line 2638 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.real) = (yyvsp[-2].sign) * (yyvsp[-1].real) * 2 * static_cast<float>(M_PI);
  }
#line 9602 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 370:
#line 2646 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(
             static_cast<int64>((yyvsp[0].real) * ::base::Time::kMillisecondsPerSecond)).
             ToInternalValue();
    if ((yyvsp[0].real) != 0) {
      parser_impl->LogWarning(
          (yylsp[0]), "non-zero time is not allowed without unit identifier");
    }
  }
#line 9616 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 372:
#line 2659 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(
             static_cast<int64>((yyvsp[-2].sign) * (yyvsp[-1].real) * ::base::Time::kMillisecondsPerSecond)).
             ToInternalValue();
  }
#line 9626 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 373:
#line 2664 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time) = ::base::TimeDelta::FromMilliseconds(static_cast<int64>((yyvsp[-2].sign) * (yyvsp[-1].real))).
             ToInternalValue();
  }
#line 9635 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 377:
#line 2677 "grammar.y" /* yacc.c:1646  */
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
#line 9651 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 378:
#line 2691 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInherit().get());
  }
#line 9659 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 379:
#line 2694 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInitial().get());
  }
#line 9667 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 380:
#line 2702 "grammar.y" /* yacc.c:1646  */
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
#line 9697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 381:
#line 2730 "grammar.y" /* yacc.c:1646  */
    {
    uint8 r = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-6].integer)));
    uint8 g = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-4].integer)));
    uint8 b = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-2].integer)));
    (yyval.color) = AddRef(new cssom::RGBAColorValue(r, g, b, 0xff));
  }
#line 9708 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 382:
#line 2739 "grammar.y" /* yacc.c:1646  */
    {
    uint8 r = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-8].integer)));
    uint8 g = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-6].integer)));
    uint8 b = static_cast<uint8>(ClampToRange(0, 255, (yyvsp[-4].integer)));
    float a = (yyvsp[-2].real);  // Already clamped.
    (yyval.color) = AddRef(
        new cssom::RGBAColorValue(r, g, b, static_cast<uint8>(a * 0xff)));
  }
#line 9721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 383:
#line 2747 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetAqua().get());
  }
#line 9729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 384:
#line 2750 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetBlack().get());
  }
#line 9737 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 385:
#line 2753 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetBlue().get());
  }
#line 9745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 386:
#line 2756 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetFuchsia().get());
  }
#line 9753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 387:
#line 2759 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetGray().get());
  }
#line 9761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 388:
#line 2762 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetGreen().get());
  }
#line 9769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 389:
#line 2765 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetLime().get());
  }
#line 9777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 390:
#line 2768 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetMaroon().get());
  }
#line 9785 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 391:
#line 2771 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetNavy().get());
  }
#line 9793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 392:
#line 2774 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetOlive().get());
  }
#line 9801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 393:
#line 2777 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetPurple().get());
  }
#line 9809 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 394:
#line 2780 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetRed().get());
  }
#line 9817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 395:
#line 2783 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetSilver().get());
  }
#line 9825 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 396:
#line 2786 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetTeal().get());
  }
#line 9833 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 397:
#line 2789 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetTransparent().get());
  }
#line 9841 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 398:
#line 2792 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetWhite().get());
  }
#line 9849 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 399:
#line 2795 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color) = AddRef(cssom::RGBAColorValue::GetYellow().get());
  }
#line 9857 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 400:
#line 2801 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::URLValue((yyvsp[-2].string).ToString()));
  }
#line 9865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 401:
#line 2812 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 9873 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 402:
#line 2815 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 9881 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 403:
#line 2821 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 9889 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 404:
#line 2824 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 9897 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 405:
#line 2830 "grammar.y" /* yacc.c:1646  */
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
#line 9912 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 406:
#line 2840 "grammar.y" /* yacc.c:1646  */
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
#line 9932 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 407:
#line 2858 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = NULL;
  }
#line 9940 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 408:
#line 2861 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].property_value);
  }
#line 9948 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 409:
#line 2868 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer(
        new BackgroundShorthandLayer());

    shorthand_layer->background_position = MakeScopedRefPtrAndRelease((yyvsp[-1].property_list_value));
    if ((yyvsp[0].property_value)) {
      shorthand_layer->background_size = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    }

    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9964 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 410:
#line 2882 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer(
        new BackgroundShorthandLayer());
    shorthand_layer->background_repeat = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9975 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 413:
#line 2897 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer((yyvsp[-1].background_shorthand_layer));
    std::unique_ptr<BackgroundShorthandLayer> non_overlapped((yyvsp[0].background_shorthand_layer));
    shorthand_layer->IntegrateNonOverlapped(*non_overlapped);
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 414:
#line 2904 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<BackgroundShorthandLayer> shorthand_layer((yyvsp[-1].background_shorthand_layer));
    std::unique_ptr<BackgroundShorthandLayer> non_overlapped((yyvsp[0].background_shorthand_layer));
    shorthand_layer->IntegrateNonOverlapped(*non_overlapped);
    (yyval.background_shorthand_layer) = shorthand_layer.release();
  }
#line 9997 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 415:
#line 2913 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the background shorthand which is to be filled in by
    // subsequent reductions.
    (yyval.background_shorthand_layer) = new BackgroundShorthandLayer();
  }
#line 10007 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 416:
#line 2918 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the return value from the reduced list.
    // Appending of the new background_property_element to the list is done
    // within background_property_element's reduction.
    (yyval.background_shorthand_layer) = (yyvsp[-1].background_shorthand_layer);
  }
#line 10018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 417:
#line 2929 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the background shorthand which is to be filled in by
    // subsequent reductions.
    (yyval.background_shorthand_layer) = new BackgroundShorthandLayer();
  }
#line 10028 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 418:
#line 2935 "grammar.y" /* yacc.c:1646  */
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
#line 10047 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 419:
#line 2949 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the return value from the reduced list.
    // Appending of the new background_property_element to the list is done
    // within background_property_element's reduction.
    (yyval.background_shorthand_layer) = (yyvsp[-1].background_shorthand_layer);
  }
#line 10058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 421:
#line 2961 "grammar.y" /* yacc.c:1646  */
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
#line 10075 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 422:
#line 2978 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].color); }
#line 10081 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 424:
#line 2983 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop) = new cssom::ColorStop(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
  }
#line 10089 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 425:
#line 2986 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop) = new cssom::ColorStop(MakeScopedRefPtrAndRelease((yyvsp[-1].color)),
                              MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10098 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 426:
#line 2994 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop_list) = new cssom::ColorStopList();
    (yyval.color_stop_list)->emplace_back((yyvsp[-2].color_stop));
    (yyval.color_stop_list)->emplace_back((yyvsp[0].color_stop));
  }
#line 10108 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 427:
#line 2999 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.color_stop_list) = (yyvsp[-2].color_stop_list);
    (yyval.color_stop_list)->emplace_back((yyvsp[0].color_stop));
  }
#line 10117 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 428:
#line 3006 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kBottom;
  }
#line 10125 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 429:
#line 3009 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kLeft;
  }
#line 10133 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 430:
#line 3012 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kRight;
  }
#line 10141 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 431:
#line 3015 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.side_or_corner) = cssom::LinearGradientValue::kTop;
  }
#line 10149 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 433:
#line 3022 "grammar.y" /* yacc.c:1646  */
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
#line 10189 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 434:
#line 3060 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    // If the first argument to the linear gradient function is omitted, it
    // defaults to 'to bottom'.
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue(
             cssom::LinearGradientValue::kBottom, std::move(*color_stop_list)));
  }
#line 10201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 435:
#line 3067 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue((yyvsp[-2].real), std::move(*color_stop_list)));
  }
#line 10210 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 436:
#line 3072 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::LinearGradientValue((yyvsp[-2].side_or_corner), std::move(*color_stop_list)));
  }
#line 10219 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 437:
#line 3079 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kClosestSide;
  }
#line 10227 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 438:
#line 3082 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kFarthestSide;
  }
#line 10235 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 439:
#line 3085 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kClosestCorner;
  }
#line 10243 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 440:
#line 3088 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = cssom::RadialGradientValue::kFarthestCorner;
  }
#line 10251 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 441:
#line 3094 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10259 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 442:
#line 3097 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[-2].size_keyword);
  }
#line 10267 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 443:
#line 3106 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10279 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 444:
#line 3113 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10291 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 445:
#line 3120 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
       new cssom::PropertyListValue::Builder());
    property_value->reserve(1);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10303 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 446:
#line 3130 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10311 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 447:
#line 3133 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.size_keyword) = (yyvsp[-2].size_keyword);
  }
#line 10319 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 448:
#line 3136 "grammar.y" /* yacc.c:1646  */
    {
    // If only a size keyword is specified, the ending shape defaults to an
    // ellipse.
    (yyval.size_keyword) = (yyvsp[0].size_keyword);
  }
#line 10329 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 449:
#line 3148 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10342 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 450:
#line 3157 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-3].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-2].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10355 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 451:
#line 3166 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->reserve(2);
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10368 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 452:
#line 3177 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list_value) = (yyvsp[0].property_list_value);
  }
#line 10376 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 453:
#line 3183 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list_value) = NULL;
  }
#line 10384 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 455:
#line 3192 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kCircle,
                                       MakeScopedRefPtrAndRelease((yyvsp[-3].property_list_value)),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10397 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 456:
#line 3201 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kEllipse,
                                       MakeScopedRefPtrAndRelease((yyvsp[-3].property_list_value)),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10410 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 457:
#line 3210 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kCircle,
                                       (yyvsp[-3].size_keyword),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10423 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 458:
#line 3219 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(
        new cssom::RadialGradientValue(cssom::RadialGradientValue::kEllipse,
                                       (yyvsp[-3].size_keyword),
                                       MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
                                       std::move(*color_stop_list)));
  }
#line 10436 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 459:
#line 3228 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kCircle,
            cssom::RadialGradientValue::kFarthestCorner,
            MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
            std::move(*color_stop_list)));
  }
#line 10449 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 460:
#line 3237 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ColorStopList> color_stop_list((yyvsp[0].color_stop_list));
    (yyval.property_value) = AddRef(new cssom::RadialGradientValue(
            cssom::RadialGradientValue::kEllipse,
            cssom::RadialGradientValue::kFarthestCorner,
            MakeScopedRefPtrAndRelease((yyvsp[-2].property_list_value)),
            std::move(*color_stop_list)));
  }
#line 10462 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 461:
#line 3245 "grammar.y" /* yacc.c:1646  */
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
#line 10477 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 462:
#line 3255 "grammar.y" /* yacc.c:1646  */
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
#line 10492 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 463:
#line 3268 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 10498 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 464:
#line 3269 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[-1].property_value);
  }
#line 10506 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 465:
#line 3272 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[-1].property_value);
  }
#line 10514 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 466:
#line 3275 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 10522 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 467:
#line 3281 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10531 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 468:
#line 3286 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10540 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 469:
#line 3296 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 10551 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 471:
#line 3306 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBottom().get());
  }
#line 10559 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 472:
#line 3309 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 10567 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 473:
#line 3312 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLeft().get());
  }
#line 10575 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 474:
#line 3315 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRight().get());
  }
#line 10583 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 475:
#line 3318 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetTop().get());
  }
#line 10591 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 477:
#line 3325 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<PositionParseStructure> position_info(
        new PositionParseStructure());
    position_info->PushBackElement(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.position_structure) = position_info.release();
  }
#line 10602 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 478:
#line 3332 "grammar.y" /* yacc.c:1646  */
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
#line 10618 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 479:
#line 3346 "grammar.y" /* yacc.c:1646  */
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
#line 10647 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 480:
#line 3377 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].property_list_value);
  }
#line 10655 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 482:
#line 3387 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNoRepeat().get());
  }
#line 10663 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 483:
#line 3390 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRepeat().get());
  }
#line 10671 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 484:
#line 3396 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    builder->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10684 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 485:
#line 3404 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 486:
#line 3412 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(cssom::KeywordValue::GetRepeat().get());
    builder->push_back(cssom::KeywordValue::GetNoRepeat().get());
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10710 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 487:
#line 3420 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder(
        new cssom::PropertyListValue::Builder());
    builder->reserve(2);
    builder->push_back(cssom::KeywordValue::GetNoRepeat().get());
    builder->push_back(cssom::KeywordValue::GetRepeat().get());
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 10723 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 490:
#line 3436 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].length); }
#line 10729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 491:
#line 3437 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].percentage); }
#line 10735 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 493:
#line 3442 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(2);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    // Fill in the omitted 'auto'.
    (yyval.property_list)->push_back(cssom::KeywordValue::GetAuto().get());
  }
#line 10747 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 494:
#line 3450 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->reserve(2);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)));
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 10758 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 495:
#line 3461 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 10769 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 496:
#line 3467 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContain().get());
  }
#line 10777 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 497:
#line 3470 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCover().get());
  }
#line 10785 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 500:
#line 3484 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 501:
#line 3487 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    (yyval.property_list) = property_value.release();
  }
#line 10803 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 502:
#line 3495 "grammar.y" /* yacc.c:1646  */
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
#line 10818 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 503:
#line 3505 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10829 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 504:
#line 3515 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 10837 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 505:
#line 3518 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 10845 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 506:
#line 3521 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSolid().get());
  }
#line 10853 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 509:
#line 3534 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10861 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 510:
#line 3537 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 10871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 511:
#line 3545 "grammar.y" /* yacc.c:1646  */
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
#line 10886 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 512:
#line 3555 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10897 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 513:
#line 3566 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].length); }
#line 10903 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 516:
#line 3575 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 10911 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 517:
#line 3578 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 10921 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 518:
#line 3586 "grammar.y" /* yacc.c:1646  */
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
#line 10936 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 519:
#line 3596 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 10947 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 520:
#line 3613 "grammar.y" /* yacc.c:1646  */
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
#line 10962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 521:
#line 3623 "grammar.y" /* yacc.c:1646  */
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
#line 10978 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 522:
#line 3634 "grammar.y" /* yacc.c:1646  */
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
#line 10994 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 523:
#line 3648 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.border_or_outline_shorthand) = new BorderOrOutlineShorthand();
  }
#line 11002 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 524:
#line 3651 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.border_or_outline_shorthand) = (yyvsp[-1].border_or_outline_shorthand);
  }
#line 11010 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 526:
#line 3665 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that border is a
    // shorthand for.
    std::unique_ptr<BorderOrOutlineShorthand> border(new BorderOrOutlineShorthand());
    border->color = (yyvsp[0].property_value);
    border->style = (yyvsp[0].property_value);
    border->width = (yyvsp[0].property_value);
    (yyval.border_or_outline_shorthand) = border.release();
  }
#line 11024 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 527:
#line 3680 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 11030 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 530:
#line 3688 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
  }
#line 11038 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 531:
#line 3691 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_list) = property_value.release();
  }
#line 11048 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 532:
#line 3699 "grammar.y" /* yacc.c:1646  */
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
#line 11063 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 533:
#line 3709 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back((yyvsp[0].property_value));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 11074 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 534:
#line 3718 "grammar.y" /* yacc.c:1646  */
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
#line 11093 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 535:
#line 3732 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::RGBAColorValue> color(MakeScopedRefPtrAndRelease((yyvsp[0].color)));
    if (!(yyvsp[-1].shadow_info)->color) {
      (yyvsp[-1].shadow_info)->color = color;
    } else {
      parser_impl->LogError((yylsp[0]), "color value declared twice in box shadow.");
      (yyvsp[-1].shadow_info)->error = true;
    }
  }
#line 11107 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 536:
#line 3741 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].shadow_info)->has_inset) {
      (yyvsp[-2].shadow_info)->has_inset = true;
    } else {
      parser_impl->LogError((yylsp[-1]), "inset value declared twice in box shadow.");
      (yyvsp[-2].shadow_info)->error = true;
    }
  }
#line 11120 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 537:
#line 3752 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = new ShadowPropertyInfo();
  }
#line 11128 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 538:
#line 3755 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = (yyvsp[-1].shadow_info);
  }
#line 11136 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 539:
#line 3761 "grammar.y" /* yacc.c:1646  */
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
#line 11152 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 540:
#line 3775 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> shadow = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    if (shadow) {
      (yyval.property_list) = new cssom::PropertyListValue::Builder();
      (yyval.property_list)->push_back(shadow);
    }
  }
#line 11164 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 541:
#line 3782 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    scoped_refptr<cssom::PropertyValue> shadow = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    if ((yyval.property_list) && shadow) {
      (yyval.property_list)->push_back(shadow);
    }
  }
#line 11176 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 542:
#line 3795 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_list)) {
      std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    }
  }
#line 11187 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 543:
#line 3801 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11195 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 545:
#line 3810 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].color); }
#line 11201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 547:
#line 3817 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11209 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 548:
#line 3820 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 549:
#line 3823 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].property_value); }
#line 11223 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 550:
#line 3824 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11231 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 552:
#line 3833 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBlock().get());
  }
#line 11239 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 553:
#line 3836 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlex().get());
  }
#line 11247 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 554:
#line 3839 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInline().get());
  }
#line 11255 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 555:
#line 3842 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInlineBlock().get());
  }
#line 11263 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 556:
#line 3845 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInlineFlex().get());
  }
#line 11271 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 557:
#line 3848 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11279 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 559:
#line 3859 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::UrlSrcValue(MakeScopedRefPtrAndRelease((yyvsp[-6].property_value)),
                                       (yyvsp[-3].string).ToString()));
  }
#line 11288 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 560:
#line 3863 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::UrlSrcValue(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)), ""));
  }
#line 11296 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 561:
#line 3873 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::LocalSrcValue((yyvsp[-2].string_value)->value()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11305 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 564:
#line 3885 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11314 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 565:
#line 3889 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11323 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 566:
#line 3900 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 11334 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 568:
#line 3914 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11342 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 569:
#line 3917 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-2].string_value)->value() + " " + (yyvsp[-1].string).ToString()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11351 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 570:
#line 3924 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 11359 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 573:
#line 3941 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.string_value) = AddRef(new cssom::StringValue((yyvsp[-2].string_value)->value() + " " + (yyvsp[-1].string).ToString()));
    (yyvsp[-2].string_value)->Release();
  }
#line 11368 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 575:
#line 3953 "grammar.y" /* yacc.c:1646  */
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
#line 11390 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 576:
#line 3970 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = (yyvsp[0].string_value); }
#line 11396 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 577:
#line 3974 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11405 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 578:
#line 3978 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 11414 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 579:
#line 3989 "grammar.y" /* yacc.c:1646  */
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
#line 11450 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 580:
#line 4020 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder>
        builder(new cssom::PropertyListValue::Builder());
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].string_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 11461 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 581:
#line 4026 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> builder((yyvsp[-2].property_list));
    builder->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(builder)));
  }
#line 11471 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 582:
#line 4031 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[0]), "unsupported property value for font-family");
    (yyval.property_value) = NULL;
  }
#line 11480 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 585:
#line 4047 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetItalic().get());
  }
#line 11488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 586:
#line 4050 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetOblique().get());
  }
#line 11496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 588:
#line 4059 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontStyleValue::GetNormal().get());
  }
#line 11504 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 590:
#line 4068 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontWeightValue::GetBoldAka700().get());
  }
#line 11512 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 591:
#line 4071 "grammar.y" /* yacc.c:1646  */
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
#line 11551 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 593:
#line 4112 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::FontWeightValue::GetNormalAka400().get());
  }
#line 11559 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 595:
#line 4128 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].font)->font_style) {
      (yyvsp[-1].font)->font_style = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "font-style value declared twice in font.");
    }
  }
#line 11572 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 596:
#line 4136 "grammar.y" /* yacc.c:1646  */
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
#line 11592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 597:
#line 4151 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for font");
    (yyvsp[-2].font)->error = true;
  }
#line 11601 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 598:
#line 4158 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by
    // non_empty_optional_font_value_list
    (yyval.font) = new FontShorthand();
  }
#line 11611 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 600:
#line 4167 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent.
    // optional_font_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.font) = (yyvsp[-1].font);
  }
#line 11622 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 601:
#line 4179 "grammar.y" /* yacc.c:1646  */
    {
    // Font shorthand properties without a non-normal weight value.
    std::unique_ptr<FontShorthand> font((yyvsp[-2].font));

    font->font_size = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));

    std::unique_ptr<cssom::PropertyListValue::Builder> builder((yyvsp[0].property_list));
    font->font_family = new cssom::PropertyListValue(std::move(builder));

    (yyval.font) = font.release();
  }
#line 11638 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 602:
#line 4192 "grammar.y" /* yacc.c:1646  */
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
#line 11664 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 603:
#line 4213 "grammar.y" /* yacc.c:1646  */
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
#line 11681 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 609:
#line 4245 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11689 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 612:
#line 4256 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 613:
#line 4259 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 11705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 614:
#line 4262 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 11713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 615:
#line 4265 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 11721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 621:
#line 4291 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> width(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
        width, width, width, width).release();
  }
#line 11731 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 622:
#line 4298 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> vertical_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             vertical_width, horizontal_width,
             vertical_width, horizontal_width).release();
  }
#line 11745 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 623:
#line 4309 "grammar.y" /* yacc.c:1646  */
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
#line 11761 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 624:
#line 4322 "grammar.y" /* yacc.c:1646  */
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
#line 11778 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 625:
#line 4334 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate((yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value)).release();
  }
#line 11786 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 629:
#line 4352 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real))); }
#line 11792 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 631:
#line 4361 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 11800 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 632:
#line 4364 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 11808 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 633:
#line 4367 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetScroll().get());
  }
#line 11816 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 634:
#line 4370 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetVisible().get());
  }
#line 11824 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 636:
#line 4381 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBreakWord().get());
  }
#line 11832 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 637:
#line 4384 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 11840 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 641:
#line 4406 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             width, width, width, width).release();
  }
#line 11851 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 642:
#line 4415 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> vertical_width =
        MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    scoped_refptr<cssom::PropertyValue> horizontal_width =
        MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate(
             vertical_width, horizontal_width,
             vertical_width, horizontal_width).release();
  }
#line 11865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 643:
#line 4428 "grammar.y" /* yacc.c:1646  */
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
#line 11881 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 644:
#line 4444 "grammar.y" /* yacc.c:1646  */
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
#line 11898 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 645:
#line 4456 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.margin_or_padding_shorthand) = MarginOrPaddingShorthand::TryCreate((yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value), (yyvsp[0].property_value)).release();
  }
#line 11906 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 646:
#line 4469 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 11914 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 647:
#line 4472 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 11922 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 649:
#line 4482 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAbsolute().get());
  }
#line 11930 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 650:
#line 4485 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFixed().get());
  }
#line 11938 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 651:
#line 4488 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRelative().get());
  }
#line 11946 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 652:
#line 4491 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStatic().get());
  }
#line 11954 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 654:
#line 4500 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_function) = new cssom::ScaleFunction((yyvsp[0].real), (yyvsp[0].real));
  }
#line 11962 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 655:
#line 4503 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_function) = new cssom::ScaleFunction((yyvsp[-2].real), (yyvsp[0].real));
  }
#line 11970 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 656:
#line 4512 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetEnd().get());
  }
#line 11978 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 657:
#line 4515 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLeft().get());
  }
#line 11986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 658:
#line 4518 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 11994 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 659:
#line 4521 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRight().get());
  }
#line 12002 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 660:
#line 4524 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStart().get());
  }
#line 12010 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 662:
#line 4533 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 663:
#line 4536 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetLineThrough().get());
  }
#line 12026 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 666:
#line 4549 "grammar.y" /* yacc.c:1646  */
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
#line 12042 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 667:
#line 4560 "grammar.y" /* yacc.c:1646  */
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
#line 12058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 668:
#line 4574 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.text_decoration_shorthand) = new TextDecorationShorthand();
  }
#line 12066 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 669:
#line 4577 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.text_decoration_shorthand) = (yyvsp[-1].text_decoration_shorthand);
  }
#line 12074 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 671:
#line 4587 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex_ flow is
    // a shorthand for.
    std::unique_ptr<TextDecorationShorthand> text_decoration(
        new TextDecorationShorthand());
    text_decoration->line = (yyvsp[0].property_value);
    text_decoration->color = (yyvsp[0].property_value);
    (yyval.text_decoration_shorthand) = text_decoration.release();
  }
#line 12088 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 672:
#line 4603 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 12096 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 674:
#line 4613 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetClip().get());
  }
#line 12104 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 675:
#line 4616 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetEllipsis().get());
  }
#line 12112 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 677:
#line 4623 "grammar.y" /* yacc.c:1646  */
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
#line 12131 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 678:
#line 4637 "grammar.y" /* yacc.c:1646  */
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
#line 12146 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 679:
#line 4650 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = new ShadowPropertyInfo();
  }
#line 12154 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 680:
#line 4653 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.shadow_info) = (yyvsp[-1].shadow_info);
  }
#line 12162 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 681:
#line 4659 "grammar.y" /* yacc.c:1646  */
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
#line 12178 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 682:
#line 4673 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_value)) {
      (yyval.property_list) = new cssom::PropertyListValue::Builder();
      (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    }
  }
#line 12189 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 683:
#line 4679 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    if ((yyval.property_list) && (yyvsp[0].property_value)) {
      (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    }
  }
#line 12200 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 684:
#line 4691 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].property_list)) {
      std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    }
  }
#line 12211 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 685:
#line 4697 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12219 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 687:
#line 4706 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12227 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 688:
#line 4709 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetUppercase().get());
  }
#line 12235 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 690:
#line 4720 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-15].transform_functions)->emplace_back(
        new cssom::MatrixFunction((yyvsp[-12].real), (yyvsp[-10].real), (yyvsp[-8].real), (yyvsp[-6].real), (yyvsp[-4].real), (yyvsp[-2].real)));
  }
#line 12244 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 691:
#line 4727 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::RotateFunction((yyvsp[-2].real)));
  }
#line 12252 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 692:
#line 4733 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back((yyvsp[-2].transform_function));
  }
#line 12260 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 693:
#line 4740 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::ScaleFunction((yyvsp[-2].real), 1.0f));
  }
#line 12268 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 694:
#line 4747 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-5].transform_functions)->emplace_back(new cssom::ScaleFunction(1.0f, (yyvsp[-2].real)));
  }
#line 12276 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 695:
#line 4755 "grammar.y" /* yacc.c:1646  */
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
#line 12291 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 696:
#line 4766 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-4].property_value) && (yyvsp[-2].property_value)) {
      (yyvsp[-7].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kXAxis, MakeScopedRefPtrAndRelease((yyvsp[-4].property_value))));
      (yyvsp[-7].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kYAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12304 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 697:
#line 4777 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].property_value)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kXAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12315 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 698:
#line 4786 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].property_value)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kYAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].property_value))));
    }
  }
#line 12326 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 699:
#line 4796 "grammar.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-2].length)) {
      (yyvsp[-5].transform_functions)->emplace_back(new cssom::TranslateFunction(
          cssom::TranslateFunction::kZAxis, MakeScopedRefPtrAndRelease((yyvsp[-2].length))));
    }
  }
#line 12337 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 700:
#line 4809 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-4].transform_functions)->emplace_back(
        new cssom::CobaltUiNavFocusTransformFunction);
  }
#line 12346 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 701:
#line 4824 "grammar.y" /* yacc.c:1646  */
    {
    (yyvsp[-4].transform_functions)->emplace_back(
        new cssom::CobaltUiNavSpotlightTransformFunction);
  }
#line 12355 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 702:
#line 4833 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_functions) = new cssom::TransformFunctionListValue::Builder();
  }
#line 12363 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 703:
#line 4836 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.transform_functions) = (yyvsp[-1].transform_functions);
  }
#line 12371 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 704:
#line 4845 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12379 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 705:
#line 4848 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TransformFunctionListValue::Builder>
        transform_functions((yyvsp[0].transform_functions));
    (yyval.property_value) = transform_functions->size() == 0u ? NULL :
            AddRef(new cssom::TransformFunctionListValue(
                std::move(*transform_functions)));
  }
#line 12391 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 706:
#line 4855 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TransformFunctionListValue::Builder>
        transform_functions((yyvsp[-1].transform_functions));
    parser_impl->LogWarning((yylsp[0]), "invalid transform function");
    (yyval.property_value) = NULL;
  }
#line 12402 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 708:
#line 4865 "grammar.y" /* yacc.c:1646  */
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
#line 12420 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 709:
#line 4884 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value(
        new cssom::PropertyListValue::Builder());
    property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
    (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
  }
#line 12431 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 710:
#line 4890 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 12442 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 711:
#line 4896 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[-1].property_list));
    if (property_value) {
      property_value->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].length)));
      (yyval.property_value) = AddRef(new cssom::PropertyListValue(std::move(property_value)));
    } else {
      (yyval.property_value) = NULL;
    }
  }
#line 12456 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 713:
#line 4911 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBottom().get());
  }
#line 12464 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 714:
#line 4914 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetTop().get());
  }
#line 12472 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 715:
#line 4917 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetMiddle().get());
  }
#line 12480 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 716:
#line 4920 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBaseline().get());
  }
#line 12488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 718:
#line 4930 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCollapse().get());
  }
#line 12496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 719:
#line 4933 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetHidden().get());
  }
#line 12504 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 720:
#line 4936 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetVisible().get());
  }
#line 12512 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 722:
#line 4944 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time_list) = new cssom::TimeListValue::Builder();
    (yyval.time_list)->push_back(::base::TimeDelta::FromInternalValue((yyvsp[0].time)));
  }
#line 12521 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 723:
#line 4948 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.time_list) = (yyvsp[-2].time_list);
    (yyval.time_list)->push_back(::base::TimeDelta::FromInternalValue((yyvsp[0].time)));
  }
#line 12530 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 724:
#line 4955 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::ListValue<::base::TimeDelta>::Builder> time_list((yyvsp[0].time_list));
    (yyval.property_value) = time_list
         ? AddRef(new cssom::TimeListValue(std::move(time_list)))
         : NULL;
  }
#line 12541 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 726:
#line 4966 "grammar.y" /* yacc.c:1646  */
    {
    // Default value is 'end'.
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kEnd;
  }
#line 12550 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 727:
#line 4970 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kStart;
  }
#line 12558 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 728:
#line 4973 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stepping_value_change_location) = cssom::SteppingTimingFunction::kEnd;
  }
#line 12566 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 729:
#line 4980 "grammar.y" /* yacc.c:1646  */
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
#line 12587 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 730:
#line 4997 "grammar.y" /* yacc.c:1646  */
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
#line 12602 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 731:
#line 5007 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseInOut().get());
  }
#line 12610 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 732:
#line 5010 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseIn().get());
  }
#line 12618 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 733:
#line 5013 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEaseOut().get());
  }
#line 12626 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 734:
#line 5016 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetEase().get());
  }
#line 12634 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 735:
#line 5019 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetLinear().get());
  }
#line 12642 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 736:
#line 5022 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetStepEnd().get());
  }
#line 12650 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 737:
#line 5025 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function) = AddRef(cssom::TimingFunction::GetStepStart().get());
  }
#line 12658 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 738:
#line 5031 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function_list) = new cssom::TimingFunctionListValue::Builder();
    (yyval.timing_function_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].timing_function)));
  }
#line 12667 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 739:
#line 5036 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.timing_function_list) = (yyvsp[-2].timing_function_list);
    (yyval.timing_function_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].timing_function)));
  }
#line 12676 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 740:
#line 5043 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::TimingFunctionListValue::Builder>
        timing_function_list((yyvsp[0].timing_function_list));
    (yyval.property_value) = timing_function_list
         ? AddRef(new cssom::TimingFunctionListValue(
               std::move(timing_function_list)))
         : NULL;
  }
#line 12689 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 743:
#line 5062 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 12697 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 744:
#line 5065 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetReverse().get());
  }
#line 12705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 745:
#line 5068 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAlternate().get());
  }
#line 12713 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 746:
#line 5071 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAlternateReverse().get());
  }
#line 12721 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 747:
#line 5077 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12730 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 748:
#line 5082 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12739 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 749:
#line 5089 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> direction_list((yyvsp[0].property_list));
    (yyval.property_value) = direction_list
         ? AddRef(new cssom::PropertyListValue(std::move(direction_list)))
         : NULL;
  }
#line 12750 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 751:
#line 5096 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-direction");
    (yyval.property_value) = NULL;
  }
#line 12760 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 753:
#line 5112 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12768 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 754:
#line 5115 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetForwards().get());
  }
#line 12776 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 755:
#line 5118 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBackwards().get());
  }
#line 12784 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 756:
#line 5121 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBoth().get());
  }
#line 12792 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 757:
#line 5127 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 758:
#line 5132 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12810 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 759:
#line 5139 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> fill_mode_list((yyvsp[0].property_list));
    (yyval.property_value) = fill_mode_list
         ? AddRef(new cssom::PropertyListValue(std::move(fill_mode_list)))
         : NULL;
  }
#line 12821 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 761:
#line 5146 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-fill-mode");
    (yyval.property_value) = NULL;
  }
#line 12831 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 762:
#line 5157 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetInfinite().get());
  }
#line 12839 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 763:
#line 5160 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 12847 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 764:
#line 5166 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12856 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 765:
#line 5171 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12865 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 766:
#line 5178 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> iteration_count_list((yyvsp[0].property_list));
    (yyval.property_value) = iteration_count_list
         ? AddRef(new cssom::PropertyListValue(std::move(iteration_count_list)))
         : NULL;
  }
#line 12876 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 768:
#line 5185 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-iteration-count");
    (yyval.property_value) = NULL;
  }
#line 12886 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 769:
#line 5195 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 12894 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 770:
#line 5198 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::StringValue((yyvsp[-1].string).ToString()));
  }
#line 12902 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 771:
#line 5204 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12911 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 772:
#line 5209 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-2].property_list);
    (yyval.property_list)->push_back(MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 12920 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 773:
#line 5216 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> name_list((yyvsp[0].property_list));
    (yyval.property_value) = name_list
         ? AddRef(new cssom::PropertyListValue(std::move(name_list)))
         : NULL;
  }
#line 12931 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 775:
#line 5223 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError(
        (yylsp[0]), "unsupported property value for animation-name");
    (yyval.property_value) = NULL;
  }
#line 12941 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 777:
#line 5239 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_animation)->name) {
      (yyvsp[-2].single_animation)->name = new cssom::StringValue((yyvsp[-1].string).ToString());
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "animation-name value declared twice in animation.");
    }
  }
#line 12954 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 778:
#line 5247 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->direction) {
      (yyvsp[-1].single_animation)->direction = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-direction value declared twice in animation.");
    }
  }
#line 12967 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 779:
#line 5255 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->fill_mode) {
      (yyvsp[-1].single_animation)->fill_mode = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-fill-mode value declared twice in animation.");
    }
  }
#line 12980 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 780:
#line 5263 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-1].single_animation)->iteration_count) {
      (yyvsp[-1].single_animation)->iteration_count = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    } else {
      parser_impl->LogWarning(
          (yylsp[0]), "animation-iteration-count value declared twice in animation.");
    }
  }
#line 12993 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 781:
#line 5271 "grammar.y" /* yacc.c:1646  */
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
#line 13010 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 782:
#line 5283 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_animation)->timing_function) {
      (yyvsp[-2].single_animation)->timing_function = MakeScopedRefPtrAndRelease((yyvsp[-1].timing_function));
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "animation-timing-function value declared twice in animation.");
    }
  }
#line 13023 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 783:
#line 5291 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for animation");
    (yyvsp[-2].single_animation)->error = true;
  }
#line 13032 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 784:
#line 5298 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by single_animation_element
    (yyval.single_animation) = new SingleAnimationShorthand();
  }
#line 13041 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 786:
#line 5306 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent single_animation.
    // single_animation_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.single_animation) = (yyvsp[-1].single_animation);
  }
#line 13052 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 787:
#line 5315 "grammar.y" /* yacc.c:1646  */
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
#line 13083 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 788:
#line 5341 "grammar.y" /* yacc.c:1646  */
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
#line 13106 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 789:
#line 5364 "grammar.y" /* yacc.c:1646  */
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
#line 13137 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 790:
#line 5390 "grammar.y" /* yacc.c:1646  */
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
#line 13155 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 794:
#line 5420 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_name_list) = new cssom::PropertyKeyListValue::Builder();
    (yyval.property_name_list)->push_back((yyvsp[-1].property_key));
  }
#line 13164 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 795:
#line 5425 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyKeyListValue::Builder> property_name_list((yyvsp[-3].property_name_list));
    if (property_name_list) {
      property_name_list->push_back((yyvsp[-1].property_key));
    }
    (yyval.property_name_list) = property_name_list.release();
  }
#line 13176 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 796:
#line 5432 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[0]), "unsupported property value for animation");
    (yyval.property_name_list) = NULL;
  }
#line 13185 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 797:
#line 5441 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 13193 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 798:
#line 5444 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyKeyListValue::Builder> property_name_list((yyvsp[0].property_name_list));
    (yyval.property_value) = property_name_list
         ? AddRef(new cssom::PropertyKeyListValue(std::move(property_name_list)))
         : NULL;
  }
#line 13204 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 800:
#line 5457 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_transition)->property) {
      (yyvsp[-2].single_transition)->property = (yyvsp[-1].property_key);
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "transition-property value declared twice in transition.");
    }
  }
#line 13217 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 801:
#line 5465 "grammar.y" /* yacc.c:1646  */
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
#line 13233 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 802:
#line 5476 "grammar.y" /* yacc.c:1646  */
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
#line 13250 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 803:
#line 5488 "grammar.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[-2].single_transition)->timing_function) {
      (yyvsp[-2].single_transition)->timing_function = MakeScopedRefPtrAndRelease((yyvsp[-1].timing_function));
    } else {
      parser_impl->LogWarning(
          (yylsp[-1]), "transition-timing-function value declared twice in transition.");
    }
  }
#line 13263 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 804:
#line 5496 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogError((yylsp[-1]), "unsupported property value for animation");
    (yyvsp[-2].single_transition)->error = true;
  }
#line 13272 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 805:
#line 5503 "grammar.y" /* yacc.c:1646  */
    {
    // Initialize the result, to be filled in by single_transition_element
    (yyval.single_transition) = new SingleTransitionShorthand();
  }
#line 13281 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 807:
#line 5511 "grammar.y" /* yacc.c:1646  */
    {
    // Propagate the list from our parent single_transition.
    // single_transition_element will have already taken care of adding itself
    // to the list via $0.
    (yyval.single_transition) = (yyvsp[-1].single_transition);
  }
#line 13292 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 808:
#line 5520 "grammar.y" /* yacc.c:1646  */
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
#line 13317 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 809:
#line 5540 "grammar.y" /* yacc.c:1646  */
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
#line 13336 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 810:
#line 5559 "grammar.y" /* yacc.c:1646  */
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
#line 13384 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 811:
#line 5602 "grammar.y" /* yacc.c:1646  */
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
#line 13399 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 812:
#line 5615 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::PropertyListValue::Builder> property_value((yyvsp[0].property_list));
    (yyval.property_value) = property_value
         ? AddRef(new cssom::PropertyListValue(std::move(property_value)))
         : NULL;
  }
#line 13410 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 814:
#line 5625 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = new cssom::PropertyListValue::Builder();
    (yyval.property_list)->push_back(new cssom::UnicodeRangeValue((yyvsp[-1].integer_pair).first, (yyvsp[-1].integer_pair).second));
  }
#line 13419 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 815:
#line 5630 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_list) = (yyvsp[-3].property_list);
    (yyval.property_list)->push_back(new cssom::UnicodeRangeValue((yyvsp[-1].integer_pair).first, (yyvsp[-1].integer_pair).second));
  }
#line 13428 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 816:
#line 5639 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNormal().get());
  }
#line 13436 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 817:
#line 5642 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNowrap().get());
  }
#line 13444 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 818:
#line 5645 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPre().get());
  }
#line 13452 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 819:
#line 5648 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPreLine().get());
  }
#line 13460 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 820:
#line 5651 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetPreWrap().get());
  }
#line 13468 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 827:
#line 5677 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 13476 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 830:
#line 5685 "grammar.y" /* yacc.c:1646  */
    { (yyval.important) = false; }
#line 13482 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 831:
#line 5686 "grammar.y" /* yacc.c:1646  */
    { (yyval.important) = true; }
#line 13488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 832:
#line 5690 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::IntegerValue((yyvsp[0].integer)));
  }
#line 13496 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 835:
#line 5702 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlexStart().get());
  }
#line 13504 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 836:
#line 5705 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetFlexEnd().get());
  }
#line 13512 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 837:
#line 5708 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetCenter().get());
  }
#line 13520 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 838:
#line 5715 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSpaceBetween().get());
  }
#line 13528 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 839:
#line 5718 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetSpaceAround().get());
  }
#line 13536 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 840:
#line 5725 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetBaseline().get());
  }
#line 13544 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 841:
#line 5728 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStretch().get());
  }
#line 13552 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 847:
#line 5748 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetStretch().get());
  }
#line 13560 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 852:
#line 5767 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 13568 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 856:
#line 5777 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContent().get());
  }
#line 13576 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 857:
#line 5780 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetAuto().get());
  }
#line 13584 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 862:
#line 5800 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 13592 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 863:
#line 5803 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 13600 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 864:
#line 5810 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetContent().get());
  }
#line 13608 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 865:
#line 5813 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].length);
  }
#line 13616 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 866:
#line 5816 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = (yyvsp[0].percentage);
  }
#line 13624 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 867:
#line 5824 "grammar.y" /* yacc.c:1646  */
    {
    // One single flex property element as a flex-basis value.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = cssom::KeywordValue::GetInitial();
    flex->shrink = cssom::KeywordValue::GetInitial();
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13637 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 868:
#line 5832 "grammar.y" /* yacc.c:1646  */
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
#line 13652 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 869:
#line 5842 "grammar.y" /* yacc.c:1646  */
    {
    // The keyword auto expands to 1 1 auto.
    //   https://www.w3.org/TR/css-flexbox-1/#flex-common
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue(1);
    flex->shrink = new cssom::NumberValue(1);
    flex->basis = cssom::KeywordValue::GetAuto();
    (yyval.flex_shorthand) = flex.release();
  }
#line 13666 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 870:
#line 5851 "grammar.y" /* yacc.c:1646  */
    {
    // The keyword none expands to 0 0 auto.
    //   https://www.w3.org/TR/css-flexbox-1/#valdef-flex-none
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue(0);
    flex->shrink = new cssom::NumberValue(0);
    flex->basis = cssom::KeywordValue::GetAuto();
    (yyval.flex_shorthand) = flex.release();
  }
#line 13680 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 871:
#line 5863 "grammar.y" /* yacc.c:1646  */
    {
    // Two flex factors.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->shrink = new cssom::NumberValue((yyvsp[0].real));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13692 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 872:
#line 5870 "grammar.y" /* yacc.c:1646  */
    {
    // One flex factor and one flex basis.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13704 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 873:
#line 5877 "grammar.y" /* yacc.c:1646  */
    {
    // One flex basis and one flex factor.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[0].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13716 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 874:
#line 5887 "grammar.y" /* yacc.c:1646  */
    {
    // Two flex factors and a flex basis.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-2].real));
    flex->shrink= new cssom::NumberValue((yyvsp[-1].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[0].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13729 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 875:
#line 5895 "grammar.y" /* yacc.c:1646  */
    {
    // One flex basis and two flex factors.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = new cssom::NumberValue((yyvsp[-1].real));
    flex->shrink= new cssom::NumberValue((yyvsp[0].real));
    flex->basis = MakeScopedRefPtrAndRelease((yyvsp[-2].property_value));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13742 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 876:
#line 5903 "grammar.y" /* yacc.c:1646  */
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
#line 13762 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 877:
#line 5921 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<FlexShorthand> flex((yyvsp[0].flex_shorthand));
    (yyval.flex_shorthand) = flex.release();
  }
#line 13771 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 878:
#line 5925 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_shorthand) = (yyvsp[0].flex_shorthand);
  }
#line 13779 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 880:
#line 5929 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex is a
    // shorthand for.
    std::unique_ptr<FlexShorthand> flex(new FlexShorthand());
    flex->grow = (yyvsp[0].property_value);
    flex->shrink= (yyvsp[0].property_value);
    flex->basis = (yyvsp[0].property_value);
    (yyval.flex_shorthand) = flex.release();
  }
#line 13793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 881:
#line 5944 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::NumberValue((yyvsp[0].real)));
  }
#line 13801 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 883:
#line 5953 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(new cssom::IntegerValue((yyvsp[0].integer)));
  }
#line 13809 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 885:
#line 5963 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRow().get());
  }
#line 13817 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 886:
#line 5966 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetRowReverse().get());
  }
#line 13825 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 887:
#line 5969 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetColumn().get());
  }
#line 13833 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 888:
#line 5972 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetColumnReverse().get());
  }
#line 13841 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 891:
#line 5987 "grammar.y" /* yacc.c:1646  */
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
#line 13856 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 892:
#line 5997 "grammar.y" /* yacc.c:1646  */
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
#line 13871 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 893:
#line 6010 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_flow_shorthand) = new FlexFlowShorthand();
  }
#line 13879 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 894:
#line 6013 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.flex_flow_shorthand) = (yyvsp[-1].flex_flow_shorthand);
  }
#line 13887 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 896:
#line 6022 "grammar.y" /* yacc.c:1646  */
    {
    // Replicate the common value into each of the properties that flex_ flow is
    // a shorthand for.
    std::unique_ptr<FlexFlowShorthand> flex_flow(new FlexFlowShorthand());
    flex_flow->direction = (yyvsp[0].property_value);
    flex_flow->wrap = (yyvsp[0].property_value);
    (yyval.flex_flow_shorthand) = flex_flow.release();
  }
#line 13900 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 897:
#line 6036 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNowrap().get());
  }
#line 13908 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 898:
#line 6039 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetWrap().get());
  }
#line 13916 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 899:
#line 6042 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetWrapReverse().get());
  }
#line 13924 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 902:
#line 6063 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kAllProperty;
  }
#line 13932 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 903:
#line 6066 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBackgroundColorProperty;
  }
#line 13940 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 904:
#line 6069 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderBottomColorProperty;
  }
#line 13948 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 905:
#line 6072 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderLeftColorProperty;
  }
#line 13956 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 906:
#line 6075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderRightColorProperty;
  }
#line 13964 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 907:
#line 6078 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kBorderTopColorProperty;
  }
#line 13972 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 908:
#line 6081 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kColorProperty;
  }
#line 13980 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 909:
#line 6084 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOpacityProperty;
  }
#line 13988 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 910:
#line 6087 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOutlineColorProperty;
  }
#line 13996 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 911:
#line 6090 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kOutlineWidthProperty;
  }
#line 14004 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 912:
#line 6093 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_key) = cssom::kTransformProperty;
  }
#line 14012 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 913:
#line 6106 "grammar.y" /* yacc.c:1646  */
    { (yyval.property_declaration) = NULL; }
#line 14018 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 914:
#line 6108 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14028 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 915:
#line 6114 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignItemsProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14038 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 916:
#line 6120 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAlignSelfProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14048 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 917:
#line 6126 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDelayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14058 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 918:
#line 6132 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDirectionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14068 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 919:
#line 6138 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationDurationProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14078 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 920:
#line 6144 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationFillModeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14088 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 921:
#line 6150 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationIterationCountProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14098 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 922:
#line 6156 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationNameProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14108 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 923:
#line 6162 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kAnimationTimingFunctionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14118 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 924:
#line 6168 "grammar.y" /* yacc.c:1646  */
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
#line 14162 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 925:
#line 6208 "grammar.y" /* yacc.c:1646  */
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
#line 14201 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 926:
#line 6243 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14211 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 927:
#line 6249 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundImageProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14221 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 928:
#line 6255 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundPositionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14231 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 929:
#line 6261 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundRepeatProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14241 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 930:
#line 6267 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBackgroundSizeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14251 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 931:
#line 6273 "grammar.y" /* yacc.c:1646  */
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
#line 14311 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 932:
#line 6329 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomLeftRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14321 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 933:
#line 6335 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomRightRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14331 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 934:
#line 6341 "grammar.y" /* yacc.c:1646  */
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
#line 14360 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 935:
#line 6366 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14370 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 936:
#line 6372 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14380 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 937:
#line 6378 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderBottomWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14390 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 938:
#line 6384 "grammar.y" /* yacc.c:1646  */
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
#line 14429 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 939:
#line 6419 "grammar.y" /* yacc.c:1646  */
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
#line 14458 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 940:
#line 6444 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14468 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 941:
#line 6450 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14478 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 942:
#line 6456 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderLeftWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14488 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 943:
#line 6462 "grammar.y" /* yacc.c:1646  */
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
#line 14527 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 944:
#line 6497 "grammar.y" /* yacc.c:1646  */
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
#line 14556 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 945:
#line 6522 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14566 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 946:
#line 6528 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14576 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 947:
#line 6534 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderRightWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14586 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 948:
#line 6540 "grammar.y" /* yacc.c:1646  */
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
#line 14625 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 949:
#line 6575 "grammar.y" /* yacc.c:1646  */
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
#line 14654 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 950:
#line 6600 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14664 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 951:
#line 6606 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopLeftRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14674 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 952:
#line 6612 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopRightRadiusProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14684 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 953:
#line 6618 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14694 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 954:
#line 6624 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBorderTopWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14704 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 955:
#line 6630 "grammar.y" /* yacc.c:1646  */
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
#line 14743 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 956:
#line 6665 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14753 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 957:
#line 6671 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kBoxShadowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14763 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 958:
#line 6677 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14773 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 959:
#line 6683 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14783 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 960:
#line 6689 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kDisplayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14793 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 961:
#line 6695 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFilterProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14803 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 962:
#line 6701 "grammar.y" /* yacc.c:1646  */
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
#line 14833 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 963:
#line 6727 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexBasisProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 964:
#line 6733 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexDirectionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14853 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 965:
#line 6739 "grammar.y" /* yacc.c:1646  */
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
#line 14880 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 966:
#line 6762 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexGrowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14890 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 967:
#line 6768 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexShrinkProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14900 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 968:
#line 6774 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFlexWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14910 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 969:
#line 6779 "grammar.y" /* yacc.c:1646  */
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
#line 14946 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 970:
#line 6811 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontFamilyProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14956 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 971:
#line 6817 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontSizeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14966 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 972:
#line 6823 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14976 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 973:
#line 6829 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kFontWeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14986 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 974:
#line 6835 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 14996 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 975:
#line 6841 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kJustifyContentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15006 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 976:
#line 6847 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15016 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 977:
#line 6853 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kLineHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15026 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 978:
#line 6859 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15036 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 979:
#line 6865 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15046 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 980:
#line 6871 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15056 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 981:
#line 6877 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMarginTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15066 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 982:
#line 6882 "grammar.y" /* yacc.c:1646  */
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
#line 15095 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 983:
#line 6907 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMaxHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15105 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 984:
#line 6913 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMaxWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15115 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 985:
#line 6919 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMinHeightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15125 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 986:
#line 6925 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kMinWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15135 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 987:
#line 6931 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOpacityProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15145 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 988:
#line 6937 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOrderProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15155 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 989:
#line 6943 "grammar.y" /* yacc.c:1646  */
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
#line 15188 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 990:
#line 6972 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15198 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 991:
#line 6978 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineStyleProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15208 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 992:
#line 6984 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOutlineWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15218 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 993:
#line 6990 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15228 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 994:
#line 6996 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15238 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 995:
#line 7002 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingBottomProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15248 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 996:
#line 7008 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingLeftProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15258 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 997:
#line 7014 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15268 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 998:
#line 7020 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPaddingTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15278 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 999:
#line 7026 "grammar.y" /* yacc.c:1646  */
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
#line 15307 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1000:
#line 7051 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPointerEventsProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15317 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1001:
#line 7057 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kPositionProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15327 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1002:
#line 7063 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kRightProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15337 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1003:
#line 7069 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kSrcProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15347 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1004:
#line 7075 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextAlignProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15357 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1005:
#line 7081 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextIndentProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15367 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1006:
#line 7087 "grammar.y" /* yacc.c:1646  */
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
#line 15394 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1007:
#line 7110 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextDecorationColorProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15404 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1008:
#line 7116 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextDecorationLineProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15414 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1009:
#line 7122 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextOverflowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15424 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1010:
#line 7128 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextShadowProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15434 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1011:
#line 7134 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTextTransformProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15444 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1012:
#line 7140 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTopProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15454 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1013:
#line 7146 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransformProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15464 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1014:
#line 7152 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransformOriginProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15474 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1015:
#line 7158 "grammar.y" /* yacc.c:1646  */
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
#line 15506 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1016:
#line 7186 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionDelayProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15516 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1017:
#line 7192 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionDurationProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15526 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1018:
#line 7198 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionPropertyProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15536 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1019:
#line 7204 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kTransitionTimingFunctionProperty,
                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15546 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1020:
#line 7210 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kUnicodeRangeProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15556 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1021:
#line 7216 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kVerticalAlignProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15566 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1022:
#line 7222 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kVisibilityProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15576 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1023:
#line 7228 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kWhiteSpaceProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15586 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1024:
#line 7234 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kWidthProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15596 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1025:
#line 7240 "grammar.y" /* yacc.c:1646  */
    {
    // NOTE: word-wrap is treated as an alias for overflow-wrap
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kOverflowWrapProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15607 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1026:
#line 7247 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_declaration) = (yyvsp[-1].property_value) ? new PropertyDeclaration(cssom::kZIndexProperty,
                                      MakeScopedRefPtrAndRelease((yyvsp[-1].property_value)), (yyvsp[0].important))
            : NULL;
  }
#line 15617 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1027:
#line 7252 "grammar.y" /* yacc.c:1646  */
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
#line 15641 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1028:
#line 7271 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[0]), "invalid declaration");
    (yyval.property_declaration) = NULL;
  }
#line 15650 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1030:
#line 7282 "grammar.y" /* yacc.c:1646  */
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
#line 15671 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1031:
#line 7298 "grammar.y" /* yacc.c:1646  */
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
#line 15692 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1032:
#line 7317 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.font_face_declaration_data) = AddRef(new cssom::CSSFontFaceDeclarationData());

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.font_face_declaration_data));
    }
  }
#line 15705 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1033:
#line 7325 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.font_face_declaration_data) = (yyvsp[-2].font_face_declaration_data);

    std::unique_ptr<PropertyDeclaration> property_declaration((yyvsp[0].property_declaration));
    if (property_declaration) {
      property_declaration->Apply((yyval.font_face_declaration_data));
    }
  }
#line 15718 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1034:
#line 7336 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_declaration) = AddRef(new cssom::CSSRuleStyleDeclaration(
             MakeScopedRefPtrAndRelease((yyvsp[-2].style_declaration_data)), parser_impl->css_parser()));
  }
#line 15727 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1035:
#line 7343 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = (yyvsp[-2].rule_list);
  }
#line 15735 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1036:
#line 7346 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = AddRef(new cssom::CSSRuleList());
  }
#line 15743 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1037:
#line 7359 "grammar.y" /* yacc.c:1646  */
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
#line 15759 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1039:
#line 7377 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSRuleStyleDeclaration> unused_style =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration));
    parser_impl->LogWarning((yylsp[-1]), "invalid qualified rule");
    (yyval.style_rule) = NULL;
  }
#line 15770 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1040:
#line 7386 "grammar.y" /* yacc.c:1646  */
    {
    parser_impl->LogWarning((yylsp[-1]), "invalid rule " + (yyvsp[-1].string).ToString());
  }
#line 15778 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1041:
#line 7389 "grammar.y" /* yacc.c:1646  */
    {
    // Do not warn about other browser at rules.
  }
#line 15786 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1042:
#line 7397 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = NULL; }
#line 15792 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1043:
#line 7398 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].style_rule); }
#line 15798 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1044:
#line 7399 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].font_face_rule); }
#line 15804 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1045:
#line 7400 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].media_rule); }
#line 15810 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1046:
#line 7401 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = (yyvsp[0].keyframes_rule); }
#line 15816 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1047:
#line 7402 "grammar.y" /* yacc.c:1646  */
    { (yyval.css_rule) = NULL; }
#line 15822 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1048:
#line 7406 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = AddRef(new cssom::CSSRuleList());
  }
#line 15830 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1049:
#line 7409 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.rule_list) = (yyvsp[-1].rule_list);
    scoped_refptr<cssom::CSSRule> css_rule =
        MakeScopedRefPtrAndRelease((yyvsp[0].css_rule));
    if (css_rule) {
      (yyval.rule_list)->AppendCSSRule(css_rule);
    }
  }
#line 15843 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1050:
#line 7427 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.style_sheet) = AddRef(new cssom::CSSStyleSheet(parser_impl->css_parser()));
    (yyval.style_sheet)->set_css_rules(MakeScopedRefPtrAndRelease((yyvsp[0].rule_list)));
  }
#line 15852 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1051:
#line 7437 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSStyleSheet> style_sheet =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_sheet));
    parser_impl->set_style_sheet(style_sheet);
  }
#line 15862 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1052:
#line 7443 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::MediaList> media_list =
        MakeScopedRefPtrAndRelease((yyvsp[0].media_list));
    parser_impl->set_media_list(media_list);
  }
#line 15872 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1053:
#line 7449 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::MediaQuery> media_query =
        MakeScopedRefPtrAndRelease((yyvsp[0].media_query));
    parser_impl->set_media_query(media_query);
  }
#line 15882 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1054:
#line 7455 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSRule> rule(MakeScopedRefPtrAndRelease((yyvsp[0].css_rule)));
    parser_impl->set_rule(rule);
  }
#line 15891 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1055:
#line 7461 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSDeclaredStyleData> declaration_data =
        MakeScopedRefPtrAndRelease((yyvsp[0].style_declaration_data));
    parser_impl->set_style_declaration_data(declaration_data);
  }
#line 15901 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1056:
#line 7468 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::CSSFontFaceDeclarationData> declaration_data =
        MakeScopedRefPtrAndRelease((yyvsp[0].font_face_declaration_data));
    parser_impl->set_font_face_declaration_data(declaration_data);
  }
#line 15911 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1057:
#line 7474 "grammar.y" /* yacc.c:1646  */
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
#line 15939 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1058:
#line 7501 "grammar.y" /* yacc.c:1646  */
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
#line 15957 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1059:
#line 7519 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.property_value) = AddRef(cssom::KeywordValue::GetNone().get());
  }
#line 15965 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1060:
#line 7522 "grammar.y" /* yacc.c:1646  */
    {
    std::unique_ptr<cssom::FilterFunctionListValue::Builder> property_value((yyvsp[0].cobalt_mtm_filter_functions));
    (yyval.property_value) = AddRef(new cssom::FilterFunctionListValue(std::move(*property_value)));
  }
#line 15974 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1062:
#line 7531 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_filter_functions) = new cssom::FilterFunctionListValue::Builder();
    (yyval.cobalt_mtm_filter_functions)->emplace_back((yyvsp[0].filter_function));
  }
#line 15983 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1063:
#line 7540 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.filter_function) = (yyvsp[0].filter_function);
  }
#line 15991 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1064:
#line 7549 "grammar.y" /* yacc.c:1646  */
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
#line 16014 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1065:
#line 7571 "grammar.y" /* yacc.c:1646  */
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
#line 16030 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1066:
#line 7585 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_map_to_mesh_spec) = new cssom::MapToMeshFunction::MeshSpec(
        cssom::MapToMeshFunction::kEquirectangular);
  }
#line 16039 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1067:
#line 7589 "grammar.y" /* yacc.c:1646  */
    {
    scoped_refptr<cssom::PropertyValue> url = MakeScopedRefPtrAndRelease((yyvsp[-1].property_value));
    std::unique_ptr<cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder>
        resolution_matched_mesh_urls((yyvsp[0].cobalt_mtm_resolution_matched_meshes));

    (yyval.cobalt_map_to_mesh_spec) = new cssom::MapToMeshFunction::MeshSpec(
        cssom::MapToMeshFunction::kUrls,
        url,
        std::move(*resolution_matched_mesh_urls));
  }
#line 16054 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1070:
#line 7607 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_meshes) = new cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder();
  }
#line 16062 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1071:
#line 7611 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_meshes) = (yyvsp[-1].cobalt_mtm_resolution_matched_meshes);
    (yyval.cobalt_mtm_resolution_matched_meshes)->emplace_back((yyvsp[0].cobalt_mtm_resolution_matched_mesh));
  }
#line 16071 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1072:
#line 7618 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.cobalt_mtm_resolution_matched_mesh) = new cssom::MapToMeshFunction::ResolutionMatchedMesh((yyvsp[-2].integer), (yyvsp[-1].integer),
      MakeScopedRefPtrAndRelease((yyvsp[0].property_value)));
  }
#line 16080 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1073:
#line 7631 "grammar.y" /* yacc.c:1646  */
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
#line 16097 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1074:
#line 7646 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.number_matrix) = new std::vector<float>(1, (yyvsp[0].real));
  }
#line 16105 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1075:
#line 7649 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.number_matrix) = (yyvsp[-2].number_matrix);
    (yyval.number_matrix)->push_back((yyvsp[0].real));
  }
#line 16114 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1076:
#line 7656 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetMonoscopic().get());
  }
#line 16122 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1077:
#line 7659 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = (yyvsp[0].stereo_mode);
  }
#line 16130 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1078:
#line 7665 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetMonoscopic().get());
  }
#line 16138 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1079:
#line 7668 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetStereoscopicLeftRight().get());
  }
#line 16146 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;

  case 1080:
#line 7671 "grammar.y" /* yacc.c:1646  */
    {
    (yyval.stereo_mode) = AddRef(cssom::KeywordValue::GetStereoscopicTopBottom().get());
  }
#line 16154 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
    break;


#line 16158 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_impl_generated.h" /* yacc.c:1646  */
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
