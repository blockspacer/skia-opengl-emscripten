/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 43 "grammar.y" /* yacc.c:1909  */

  float real;
  int integer;
  TrivialIntPair integer_pair;
  TrivialStringPiece string;
#line 482 "grammar.y" /* yacc.c:1909  */
 bool important; 
#line 487 "grammar.y" /* yacc.c:1909  */
 cssom::RGBAColorValue* color; 
#line 491 "grammar.y" /* yacc.c:1909  */
 cssom::ColorStop* color_stop; 
#line 495 "grammar.y" /* yacc.c:1909  */
 cssom::ColorStopList* color_stop_list; 
#line 499 "grammar.y" /* yacc.c:1909  */
 cssom::PercentageValue* percentage; 
#line 503 "grammar.y" /* yacc.c:1909  */
 cssom::LengthValue* length; 
#line 510 "grammar.y" /* yacc.c:1909  */
 cssom::RatioValue* ratio; 
#line 514 "grammar.y" /* yacc.c:1909  */
 cssom::ResolutionValue* resolution; 
#line 518 "grammar.y" /* yacc.c:1909  */
 cssom::StringValue* string_value; 
#line 529 "grammar.y" /* yacc.c:1909  */
 int64 time; 
#line 532 "grammar.y" /* yacc.c:1909  */
 PropertyDeclaration* property_declaration; 
#line 543 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyValue* property_value; 
#line 661 "grammar.y" /* yacc.c:1909  */
 std::vector<float>* number_matrix; 
#line 665 "grammar.y" /* yacc.c:1909  */
 glm::mat4* matrix4x4; 
#line 669 "grammar.y" /* yacc.c:1909  */
 MarginOrPaddingShorthand* margin_or_padding_shorthand; 
#line 673 "grammar.y" /* yacc.c:1909  */
 SingleAnimationShorthand* single_animation; 
#line 677 "grammar.y" /* yacc.c:1909  */
 AnimationShorthandBuilder* animation_builder; 
#line 681 "grammar.y" /* yacc.c:1909  */
 AnimationShorthand* animation; 
#line 685 "grammar.y" /* yacc.c:1909  */
 FontShorthand* font; 
#line 691 "grammar.y" /* yacc.c:1909  */
 TransitionShorthand* transition; 
#line 697 "grammar.y" /* yacc.c:1909  */
 cssom::CSSStyleSheet* style_sheet; 
#line 701 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleList* rule_list; 
#line 705 "grammar.y" /* yacc.c:1909  */
 cssom::AttributeSelector::ValueMatchType attribute_match; 
#line 708 "grammar.y" /* yacc.c:1909  */
 cssom::SimpleSelector* simple_selector; 
#line 719 "grammar.y" /* yacc.c:1909  */
 cssom::CompoundSelector* compound_selector; 
#line 723 "grammar.y" /* yacc.c:1909  */
 cssom::Combinator* combinator; 
#line 727 "grammar.y" /* yacc.c:1909  */
 cssom::ComplexSelector* complex_selector; 
#line 731 "grammar.y" /* yacc.c:1909  */
 cssom::Selectors* selectors; 
#line 735 "grammar.y" /* yacc.c:1909  */
 cssom::LinearGradientValue::SideOrCorner side_or_corner; 
#line 738 "grammar.y" /* yacc.c:1909  */
 int sign; 
#line 743 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyKey property_key; 
#line 746 "grammar.y" /* yacc.c:1909  */
 cssom::CSSDeclaredStyleData* style_declaration_data; 
#line 750 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleStyleDeclaration* style_declaration; 
#line 754 "grammar.y" /* yacc.c:1909  */
 cssom::CSSFontFaceRule* font_face_rule; 
#line 758 "grammar.y" /* yacc.c:1909  */
 cssom::CSSKeyframeRule* keyframe_rule; 
#line 762 "grammar.y" /* yacc.c:1909  */
 cssom::CSSKeyframesRule* keyframes_rule; 
#line 766 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleList* keyframe_rule_list; 
#line 770 "grammar.y" /* yacc.c:1909  */
 float keyframe_offset; 
#line 773 "grammar.y" /* yacc.c:1909  */
 std::vector<float>* keyframe_selector; 
#line 777 "grammar.y" /* yacc.c:1909  */
 cssom::CSSFontFaceDeclarationData* font_face_declaration_data; 
#line 781 "grammar.y" /* yacc.c:1909  */
 cssom::CSSMediaRule* media_rule; 
#line 785 "grammar.y" /* yacc.c:1909  */
 cssom::MediaList* media_list; 
#line 789 "grammar.y" /* yacc.c:1909  */
 cssom::MediaQuery* media_query; 
#line 793 "grammar.y" /* yacc.c:1909  */
 bool evaluated_media_type; 
#line 796 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeatures* media_features; 
#line 800 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeature* media_feature; 
#line 807 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeatureOperator media_feature_operator; 
#line 810 "grammar.y" /* yacc.c:1909  */
 cssom::CSSStyleRule* style_rule; 
#line 814 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRule* css_rule; 
#line 818 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyListValue::Builder* property_list; 
#line 838 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyListValue* property_list_value; 
#line 846 "grammar.y" /* yacc.c:1909  */
 cssom::TransformFunction* transform_function; 
#line 850 "grammar.y" /* yacc.c:1909  */
 cssom::TransformFunctionListValue::Builder* transform_functions; 
#line 854 "grammar.y" /* yacc.c:1909  */
 cssom::FilterFunction* filter_function; 
#line 859 "grammar.y" /* yacc.c:1909  */
 cssom::FilterFunctionListValue::Builder* cobalt_mtm_filter_functions; 
#line 863 "grammar.y" /* yacc.c:1909  */

  cssom::MapToMeshFunction::MeshSpec* cobalt_map_to_mesh_spec; 
#line 868 "grammar.y" /* yacc.c:1909  */

  cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder* cobalt_mtm_resolution_matched_meshes; 
#line 873 "grammar.y" /* yacc.c:1909  */
 cssom::MapToMeshFunction::ResolutionMatchedMesh* cobalt_mtm_resolution_matched_mesh; 
#line 877 "grammar.y" /* yacc.c:1909  */
 cssom::KeywordValue* stereo_mode; 
#line 882 "grammar.y" /* yacc.c:1909  */
 cssom::TimeListValue::Builder* time_list; 
#line 886 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyKeyListValue::Builder* property_name_list; 
#line 890 "grammar.y" /* yacc.c:1909  */

  cssom::SteppingTimingFunction::ValueChangeLocation
      stepping_value_change_location;
#line 896 "grammar.y" /* yacc.c:1909  */
 cssom::TimingFunction* timing_function; 
#line 900 "grammar.y" /* yacc.c:1909  */

  cssom::TimingFunctionListValue::Builder*
      timing_function_list;
#line 908 "grammar.y" /* yacc.c:1909  */
 SingleTransitionShorthand* single_transition; 
#line 912 "grammar.y" /* yacc.c:1909  */
 TransitionShorthandBuilder* transition_builder; 
#line 916 "grammar.y" /* yacc.c:1909  */
 BackgroundShorthandLayer* background_shorthand_layer; 
#line 926 "grammar.y" /* yacc.c:1909  */
 PositionParseStructure* position_structure; 
#line 930 "grammar.y" /* yacc.c:1909  */
 BorderOrOutlineShorthand* border_or_outline_shorthand; 
#line 935 "grammar.y" /* yacc.c:1909  */
 FlexShorthand* flex_shorthand; 
#line 942 "grammar.y" /* yacc.c:1909  */
 FlexFlowShorthand* flex_flow_shorthand; 
#line 946 "grammar.y" /* yacc.c:1909  */
 ShadowPropertyInfo* shadow_info; 
#line 950 "grammar.y" /* yacc.c:1909  */
 TextDecorationShorthand* text_decoration_shorthand; 
#line 955 "grammar.y" /* yacc.c:1909  */
 cssom::RadialGradientValue::SizeKeyword size_keyword; 

#line 576 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_generated.h" /* yacc.c:1909  */
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
