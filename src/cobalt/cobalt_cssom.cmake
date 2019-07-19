cmake_minimum_required(VERSION 2.8)

#'export_dependent_settings': [
#  # Additionally, ensure that the include directories for generated
#  # headers are put on the include directories for targets that depend
#  # on this one.
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#],
#'dependencies': [
#  '<(DEPTH)/cobalt/base/base.gyp:base',
#  '<(DEPTH)/cobalt/network/network.gyp:network',
#  '<(DEPTH)/cobalt/browser/browser_bindings_gen.gyp:generated_types',
#  '<(DEPTH)/cobalt/dom/dom_exception.gyp:dom_exception',
#  '<(DEPTH)/cobalt/math/math.gyp:math',
#  '<(DEPTH)/cobalt/ui_navigation/ui_navigation.gyp:ui_navigation',
#  '<(DEPTH)/url/url.gyp:url',
#  'embed_resources_as_header_files',
#],
set(cobalt_cssom_SOURCES
  ${COBALT_CORE_DIR}cssom/absolute_url_value.cc
  ${COBALT_CORE_DIR}cssom/absolute_url_value.h
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/active_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/after_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/animation.h
  ${COBALT_CORE_DIR}cssom/animation_set.cc
  ${COBALT_CORE_DIR}cssom/animation_set.h
  ${COBALT_CORE_DIR}cssom/attribute_selector.cc
  ${COBALT_CORE_DIR}cssom/attribute_selector.h
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.cc
  ${COBALT_CORE_DIR}cssom/before_pseudo_element.h
  ${COBALT_CORE_DIR}cssom/calc_value.cc
  ${COBALT_CORE_DIR}cssom/calc_value.h
  ${COBALT_CORE_DIR}cssom/cascade_precedence.h
  ${COBALT_CORE_DIR}cssom/cascaded_style.cc
  ${COBALT_CORE_DIR}cssom/cascaded_style.h
  ${COBALT_CORE_DIR}cssom/character_classification.h
  ${COBALT_CORE_DIR}cssom/child_combinator.cc
  ${COBALT_CORE_DIR}cssom/child_combinator.h
  ${COBALT_CORE_DIR}cssom/class_selector.cc
  ${COBALT_CORE_DIR}cssom/class_selector.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_focus_transform_function.h
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.cc
  ${COBALT_CORE_DIR}cssom/cobalt_ui_nav_spotlight_transform_function.h
  ${COBALT_CORE_DIR}cssom/color_stop.cc
  ${COBALT_CORE_DIR}cssom/color_stop.h
  ${COBALT_CORE_DIR}cssom/combinator.cc
  ${COBALT_CORE_DIR}cssom/combinator.h
  ${COBALT_CORE_DIR}cssom/combinator_visitor.h
  ${COBALT_CORE_DIR}cssom/complex_selector.cc
  ${COBALT_CORE_DIR}cssom/complex_selector.h
  ${COBALT_CORE_DIR}cssom/compound_selector.cc
  ${COBALT_CORE_DIR}cssom/compound_selector.h
  ${COBALT_CORE_DIR}cssom/computed_style.cc
  ${COBALT_CORE_DIR}cssom/computed_style.h
  ${COBALT_CORE_DIR}cssom/css.cc
  ${COBALT_CORE_DIR}cssom/css.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_data.h
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_computed_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_condition_rule.cc
  ${COBALT_CORE_DIR}cssom/css_condition_rule.h
  ${COBALT_CORE_DIR}cssom/css_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_declaration_util.cc
  ${COBALT_CORE_DIR}cssom/css_declaration_util.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_data.h
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_declared_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_declaration_data.h
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.cc
  ${COBALT_CORE_DIR}cssom/css_font_face_rule.h
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.cc
  ${COBALT_CORE_DIR}cssom/css_grouping_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframe_rule.h
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.cc
  ${COBALT_CORE_DIR}cssom/css_keyframes_rule.h
  ${COBALT_CORE_DIR}cssom/css_media_rule.cc
  ${COBALT_CORE_DIR}cssom/css_media_rule.h
  ${COBALT_CORE_DIR}cssom/css_parser.h
  ${COBALT_CORE_DIR}cssom/css_rule.cc
  ${COBALT_CORE_DIR}cssom/css_rule.h
  ${COBALT_CORE_DIR}cssom/css_rule_list.cc
  ${COBALT_CORE_DIR}cssom/css_rule_list.h
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_rule_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_rule_visitor.h
  ${COBALT_CORE_DIR}cssom/css_style_declaration.cc
  ${COBALT_CORE_DIR}cssom/css_style_declaration.h
  ${COBALT_CORE_DIR}cssom/css_style_rule.cc
  ${COBALT_CORE_DIR}cssom/css_style_rule.h
  ${COBALT_CORE_DIR}cssom/css_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/css_style_sheet.h
  ${COBALT_CORE_DIR}cssom/css_transition.cc
  ${COBALT_CORE_DIR}cssom/css_transition.h
  ${COBALT_CORE_DIR}cssom/css_transition_set.cc
  ${COBALT_CORE_DIR}cssom/css_transition_set.h
  ${COBALT_CORE_DIR}cssom/descendant_combinator.cc
  ${COBALT_CORE_DIR}cssom/descendant_combinator.h
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/empty_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/filter_function.h
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/filter_function_list_value.h
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/focus_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/following_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/font_style_value.cc
  ${COBALT_CORE_DIR}cssom/font_style_value.h
  ${COBALT_CORE_DIR}cssom/font_weight_value.cc
  ${COBALT_CORE_DIR}cssom/font_weight_value.h
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/hover_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/id_selector.cc
  ${COBALT_CORE_DIR}cssom/id_selector.h
  ${COBALT_CORE_DIR}cssom/integer_value.cc
  ${COBALT_CORE_DIR}cssom/integer_value.h
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolate_property_value.h
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.cc
  ${COBALT_CORE_DIR}cssom/interpolated_transform_property_value.h
  ${COBALT_CORE_DIR}cssom/keyword_names.cc
  ${COBALT_CORE_DIR}cssom/keyword_names.h
  ${COBALT_CORE_DIR}cssom/keyword_value.cc
  ${COBALT_CORE_DIR}cssom/keyword_value.h
  ${COBALT_CORE_DIR}cssom/length_value.cc
  ${COBALT_CORE_DIR}cssom/length_value.h
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/linear_gradient_value.h
  ${COBALT_CORE_DIR}cssom/list_value.h
  ${COBALT_CORE_DIR}cssom/local_src_value.cc
  ${COBALT_CORE_DIR}cssom/local_src_value.h
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.cc
  ${COBALT_CORE_DIR}cssom/map_to_mesh_function.h
  ${COBALT_CORE_DIR}cssom/matrix_function.cc
  ${COBALT_CORE_DIR}cssom/matrix_function.h
  ${COBALT_CORE_DIR}cssom/media_feature.cc
  ${COBALT_CORE_DIR}cssom/media_feature.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value.h
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_keyword_value_names.h
  ${COBALT_CORE_DIR}cssom/media_feature_names.cc
  ${COBALT_CORE_DIR}cssom/media_feature_names.h
  ${COBALT_CORE_DIR}cssom/media_list.cc
  ${COBALT_CORE_DIR}cssom/media_list.h
  ${COBALT_CORE_DIR}cssom/media_query.cc
  ${COBALT_CORE_DIR}cssom/media_query.h
  ${COBALT_CORE_DIR}cssom/media_type_names.cc
  ${COBALT_CORE_DIR}cssom/media_type_names.h
  ${COBALT_CORE_DIR}cssom/mutation_observer.h
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.cc
  ${COBALT_CORE_DIR}cssom/next_sibling_combinator.h
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.cc
  ${COBALT_CORE_DIR}cssom/not_pseudo_class.h
  ${COBALT_CORE_DIR}cssom/number_value.cc
  ${COBALT_CORE_DIR}cssom/number_value.h
  ${COBALT_CORE_DIR}cssom/percentage_value.cc
  ${COBALT_CORE_DIR}cssom/percentage_value.h
  ${COBALT_CORE_DIR}cssom/property_definitions.cc
  ${COBALT_CORE_DIR}cssom/property_definitions.h
  ${COBALT_CORE_DIR}cssom/property_key_list_value.cc
  ${COBALT_CORE_DIR}cssom/property_key_list_value.h
  ${COBALT_CORE_DIR}cssom/property_list_value.h
  ${COBALT_CORE_DIR}cssom/property_value.h
  ${COBALT_CORE_DIR}cssom/property_value_visitor.cc
  ${COBALT_CORE_DIR}cssom/property_value_visitor.h
  ${COBALT_CORE_DIR}cssom/pseudo_class.h
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_class_names.h
  ${COBALT_CORE_DIR}cssom/pseudo_element.h
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.cc
  ${COBALT_CORE_DIR}cssom/pseudo_element_names.h
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.cc
  ${COBALT_CORE_DIR}cssom/radial_gradient_value.h
  ${COBALT_CORE_DIR}cssom/ratio_value.cc
  ${COBALT_CORE_DIR}cssom/ratio_value.h
  ${COBALT_CORE_DIR}cssom/resolution_value.cc
  ${COBALT_CORE_DIR}cssom/resolution_value.h
  ${COBALT_CORE_DIR}cssom/rgba_color_value.cc
  ${COBALT_CORE_DIR}cssom/rgba_color_value.h
  ${COBALT_CORE_DIR}cssom/rotate_function.cc
  ${COBALT_CORE_DIR}cssom/rotate_function.h
  ${COBALT_CORE_DIR}cssom/scale_function.cc
  ${COBALT_CORE_DIR}cssom/scale_function.h
  ${COBALT_CORE_DIR}cssom/scoped_list_value.h
  ${COBALT_CORE_DIR}cssom/scoped_ref_list_value.h
  ${COBALT_CORE_DIR}cssom/selector.h
  ${COBALT_CORE_DIR}cssom/selector_tree.cc
  ${COBALT_CORE_DIR}cssom/selector_tree.h
  ${COBALT_CORE_DIR}cssom/selector_visitor.h
  ${COBALT_CORE_DIR}cssom/shadow_value.cc
  ${COBALT_CORE_DIR}cssom/shadow_value.h
  ${COBALT_CORE_DIR}cssom/simple_selector.h
  ${COBALT_CORE_DIR}cssom/specificity.cc
  ${COBALT_CORE_DIR}cssom/specificity.h
  ${COBALT_CORE_DIR}cssom/serializer.cc
  ${COBALT_CORE_DIR}cssom/serializer.h
  ${COBALT_CORE_DIR}cssom/string_value.cc
  ${COBALT_CORE_DIR}cssom/string_value.h
  ${COBALT_CORE_DIR}cssom/style_sheet.cc
  ${COBALT_CORE_DIR}cssom/style_sheet.h
  ${COBALT_CORE_DIR}cssom/style_sheet_list.cc
  ${COBALT_CORE_DIR}cssom/style_sheet_list.h
  ${COBALT_CORE_DIR}cssom/testing/mock_css_parser.h
  ${COBALT_CORE_DIR}cssom/time_list_value.cc
  ${COBALT_CORE_DIR}cssom/time_list_value.h
  ${COBALT_CORE_DIR}cssom/timing_function.cc
  ${COBALT_CORE_DIR}cssom/timing_function.h
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/timing_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function.h
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.cc
  ${COBALT_CORE_DIR}cssom/transform_function_list_value.h
  ${COBALT_CORE_DIR}cssom/transform_function_visitor.h
  ${COBALT_CORE_DIR}cssom/transform_property_value.h
  ${COBALT_CORE_DIR}cssom/translate_function.cc
  ${COBALT_CORE_DIR}cssom/translate_function.h
  ${COBALT_CORE_DIR}cssom/type_selector.cc
  ${COBALT_CORE_DIR}cssom/type_selector.h
  ${COBALT_CORE_DIR}cssom/unicode_range_value.cc
  ${COBALT_CORE_DIR}cssom/unicode_range_value.h
  ${COBALT_CORE_DIR}cssom/universal_selector.cc
  ${COBALT_CORE_DIR}cssom/universal_selector.h
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.cc
  ${COBALT_CORE_DIR}cssom/user_agent_style_sheet.h
  ${COBALT_CORE_DIR}cssom/url_src_value.cc
  ${COBALT_CORE_DIR}cssom/url_src_value.h
  ${COBALT_CORE_DIR}cssom/url_value.cc
  ${COBALT_CORE_DIR}cssom/url_value.h
  ${COBALT_CORE_DIR}cssom/viewport_size.h
)

add_library(cobalt_cssom STATIC
  ${cobalt_cssom_SOURCES}
)

target_link_libraries(cobalt_cssom PUBLIC
  base # TODO
  # cobalt_network # TODO
  # cobalt_browser # TODO
  cobalt_dom_exception
  cobalt_math
  cobalt_ui_navigation
  cobalt_base
  cobalt_nanobase
  #cobalt_script
  #${COBALT_V8_STUB_LIB}
  ${COBALT_CSP_LIB_NAME}
  starboard_icu_init
  starboard_eztime  # requires starboard_icu_init
  #starboard_stub
  starboard_platform # requires starboard_stub
  starboard_common
  #starboard_core
  base # TODO
  modp_b64
  dynamic_annotations
  GURL
  ${GNET_LIBS}
  ${GLIBXML_LIB}
  icu
  ced
  glm
  #${WEBP_LIB} # requires libpng
  #${libjpeg_LIB}
  #${libjpeg_TURBO_LIB}
  #${libpng_LIB}
  #${iccjpeg_LIB}
)

set_property(TARGET cobalt_cssom PROPERTY CXX_STANDARD 17)

target_include_directories(cobalt_cssom PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
)

target_compile_definitions(cobalt_cssom PRIVATE
  # starboard/linux/shared/BUILD.gn
  #STARBOARD_IMPLEMENTATION=1
  #
  #BASE_IMPLEMENTATION=1
  #BASE_I18N_IMPLEMENTATION=1
  #
  #COBALT_ENABLE_VERSION_COMPATIBILITY_VALIDATIONS=1
  #
  ${COBALT_COMMON_DEFINES}
)
