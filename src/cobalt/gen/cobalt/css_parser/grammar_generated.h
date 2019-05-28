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
#line 43 "grammar.y" /* yacc.c:1909  */

  float real;
  int integer;
  TrivialIntPair integer_pair;
  TrivialStringPiece string;
#line 481 "grammar.y" /* yacc.c:1909  */
 bool important; 
#line 486 "grammar.y" /* yacc.c:1909  */
 cssom::RGBAColorValue* color; 
#line 490 "grammar.y" /* yacc.c:1909  */
 cssom::ColorStop* color_stop; 
#line 494 "grammar.y" /* yacc.c:1909  */
 cssom::ColorStopList* color_stop_list; 
#line 498 "grammar.y" /* yacc.c:1909  */
 cssom::PercentageValue* percentage; 
#line 502 "grammar.y" /* yacc.c:1909  */
 cssom::LengthValue* length; 
#line 509 "grammar.y" /* yacc.c:1909  */
 cssom::RatioValue* ratio; 
#line 513 "grammar.y" /* yacc.c:1909  */
 cssom::ResolutionValue* resolution; 
#line 517 "grammar.y" /* yacc.c:1909  */
 cssom::StringValue* string_value; 
#line 528 "grammar.y" /* yacc.c:1909  */
 int64 time; 
#line 531 "grammar.y" /* yacc.c:1909  */
 PropertyDeclaration* property_declaration; 
#line 542 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyValue* property_value; 
#line 659 "grammar.y" /* yacc.c:1909  */
 std::vector<float>* number_matrix; 
#line 663 "grammar.y" /* yacc.c:1909  */
 glm::mat4* matrix4x4; 
#line 667 "grammar.y" /* yacc.c:1909  */
 MarginOrPaddingShorthand* margin_or_padding_shorthand; 
#line 671 "grammar.y" /* yacc.c:1909  */
 SingleAnimationShorthand* single_animation; 
#line 675 "grammar.y" /* yacc.c:1909  */
 AnimationShorthandBuilder* animation_builder; 
#line 679 "grammar.y" /* yacc.c:1909  */
 AnimationShorthand* animation; 
#line 683 "grammar.y" /* yacc.c:1909  */
 FontShorthand* font; 
#line 689 "grammar.y" /* yacc.c:1909  */
 TransitionShorthand* transition; 
#line 695 "grammar.y" /* yacc.c:1909  */
 cssom::CSSStyleSheet* style_sheet; 
#line 699 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleList* rule_list; 
#line 703 "grammar.y" /* yacc.c:1909  */
 cssom::AttributeSelector::ValueMatchType attribute_match; 
#line 706 "grammar.y" /* yacc.c:1909  */
 cssom::SimpleSelector* simple_selector; 
#line 717 "grammar.y" /* yacc.c:1909  */
 cssom::CompoundSelector* compound_selector; 
#line 721 "grammar.y" /* yacc.c:1909  */
 cssom::Combinator* combinator; 
#line 725 "grammar.y" /* yacc.c:1909  */
 cssom::ComplexSelector* complex_selector; 
#line 729 "grammar.y" /* yacc.c:1909  */
 cssom::Selectors* selectors; 
#line 733 "grammar.y" /* yacc.c:1909  */
 cssom::LinearGradientValue::SideOrCorner side_or_corner; 
#line 736 "grammar.y" /* yacc.c:1909  */
 int sign; 
#line 741 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyKey property_key; 
#line 744 "grammar.y" /* yacc.c:1909  */
 cssom::CSSDeclaredStyleData* style_declaration_data; 
#line 748 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleStyleDeclaration* style_declaration; 
#line 752 "grammar.y" /* yacc.c:1909  */
 cssom::CSSFontFaceRule* font_face_rule; 
#line 756 "grammar.y" /* yacc.c:1909  */
 cssom::CSSKeyframeRule* keyframe_rule; 
#line 760 "grammar.y" /* yacc.c:1909  */
 cssom::CSSKeyframesRule* keyframes_rule; 
#line 764 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRuleList* keyframe_rule_list; 
#line 768 "grammar.y" /* yacc.c:1909  */
 float keyframe_offset; 
#line 771 "grammar.y" /* yacc.c:1909  */
 std::vector<float>* keyframe_selector; 
#line 775 "grammar.y" /* yacc.c:1909  */
 cssom::CSSFontFaceDeclarationData* font_face_declaration_data; 
#line 779 "grammar.y" /* yacc.c:1909  */
 cssom::CSSMediaRule* media_rule; 
#line 783 "grammar.y" /* yacc.c:1909  */
 cssom::MediaList* media_list; 
#line 787 "grammar.y" /* yacc.c:1909  */
 cssom::MediaQuery* media_query; 
#line 791 "grammar.y" /* yacc.c:1909  */
 bool evaluated_media_type; 
#line 794 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeatures* media_features; 
#line 798 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeature* media_feature; 
#line 805 "grammar.y" /* yacc.c:1909  */
 cssom::MediaFeatureOperator media_feature_operator; 
#line 808 "grammar.y" /* yacc.c:1909  */
 cssom::CSSStyleRule* style_rule; 
#line 812 "grammar.y" /* yacc.c:1909  */
 cssom::CSSRule* css_rule; 
#line 816 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyListValue::Builder* property_list; 
#line 835 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyListValue* property_list_value; 
#line 843 "grammar.y" /* yacc.c:1909  */
 cssom::TransformFunction* transform_function; 
#line 847 "grammar.y" /* yacc.c:1909  */
 cssom::TransformFunctionListValue::Builder* transform_functions; 
#line 851 "grammar.y" /* yacc.c:1909  */
 cssom::FilterFunction* filter_function; 
#line 856 "grammar.y" /* yacc.c:1909  */
 cssom::FilterFunctionListValue::Builder* cobalt_mtm_filter_functions; 
#line 860 "grammar.y" /* yacc.c:1909  */

  cssom::MapToMeshFunction::MeshSpec* cobalt_map_to_mesh_spec; 
#line 865 "grammar.y" /* yacc.c:1909  */

  cssom::MapToMeshFunction::ResolutionMatchedMeshListBuilder* cobalt_mtm_resolution_matched_meshes; 
#line 870 "grammar.y" /* yacc.c:1909  */
 cssom::MapToMeshFunction::ResolutionMatchedMesh* cobalt_mtm_resolution_matched_mesh; 
#line 874 "grammar.y" /* yacc.c:1909  */
 cssom::KeywordValue* stereo_mode; 
#line 879 "grammar.y" /* yacc.c:1909  */
 cssom::TimeListValue::Builder* time_list; 
#line 883 "grammar.y" /* yacc.c:1909  */
 cssom::PropertyKeyListValue::Builder* property_name_list; 
#line 887 "grammar.y" /* yacc.c:1909  */

  cssom::SteppingTimingFunction::ValueChangeLocation
      stepping_value_change_location;
#line 893 "grammar.y" /* yacc.c:1909  */
 cssom::TimingFunction* timing_function; 
#line 897 "grammar.y" /* yacc.c:1909  */

  cssom::TimingFunctionListValue::Builder*
      timing_function_list;
#line 905 "grammar.y" /* yacc.c:1909  */
 SingleTransitionShorthand* single_transition; 
#line 909 "grammar.y" /* yacc.c:1909  */
 TransitionShorthandBuilder* transition_builder; 
#line 913 "grammar.y" /* yacc.c:1909  */
 BackgroundShorthandLayer* background_shorthand_layer; 
#line 923 "grammar.y" /* yacc.c:1909  */
 PositionParseStructure* position_structure; 
#line 927 "grammar.y" /* yacc.c:1909  */
 BorderOrOutlineShorthand* border_or_outline_shorthand; 
#line 932 "grammar.y" /* yacc.c:1909  */
 FlexShorthand* flex_shorthand; 
#line 939 "grammar.y" /* yacc.c:1909  */
 FlexFlowShorthand* flex_flow_shorthand; 
#line 943 "grammar.y" /* yacc.c:1909  */
 ShadowPropertyInfo* shadow_info; 
#line 947 "grammar.y" /* yacc.c:1909  */
 TextDecorationShorthand* text_decoration_shorthand; 
#line 952 "grammar.y" /* yacc.c:1909  */
 cssom::RadialGradientValue::SizeKeyword size_keyword; 

#line 575 "../../out/linux-x64x11_devel/gen/cobalt/css_parser/grammar_generated.h" /* yacc.c:1909  */
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
