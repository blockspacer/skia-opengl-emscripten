### --- G_GFX ---###

set(G_GFX_SOURCES
  #${G_GFX_DIR}gfx_export.h
  # TODO # ${G_GFX_DIR}android/java_bitmap.cc
  # TODO # #${G_GFX_DIR}android/java_bitmap.h",
  # TODO # ${G_GFX_DIR}android/view_configuration.cc
  # TODO # #${G_GFX_DIR}android/view_configuration.h",
  #${G_GFX_DIR}break_list.h",
  ${G_GFX_DIR}color_analysis.cc
  #${G_GFX_DIR}color_analysis.h",
  #${G_GFX_DIR}color_palette.h",
  ${G_GFX_DIR}color_transform.cc
  #${G_GFX_DIR}color_transform.h",
  ${G_GFX_DIR}color_utils.cc
  #${G_GFX_DIR}color_utils.h",
  ${G_GFX_DIR}decorated_text.cc # native_widget_types
  #${G_GFX_DIR}decorated_text.h",
  #${G_GFX_DIR}decorated_text_mac.h",
  # TODO # ${G_GFX_DIR}decorated_text_mac.mm",
  ${G_GFX_DIR}extension_set.cc
  #${G_GFX_DIR}extension_set.h",
  ${G_GFX_DIR}favicon_size.cc
  #${G_GFX_DIR}favicon_size.h",
  ${G_GFX_DIR}font.cc # native_widget_types
  #${G_GFX_DIR}font.h",
  #${G_GFX_DIR}font_fallback.h",
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND G_GFX_SOURCES
    ${G_GFX_DIR}font_fallback_linux.cc
  )
endif()

list(APPEND G_GFX_SOURCES
  #${G_GFX_DIR}font_fallback_linux.h",
  # # TODO # ${G_GFX_DIR}font_fallback_mac.mm",
  # # TODO # ${G_GFX_DIR}font_fallback_win.cc
  #${G_GFX_DIR}font_fallback_win.h",
  ${G_GFX_DIR}font_list.cc
  #${G_GFX_DIR}font_list.h", # native_widget_types
  # TODO #
  ${G_GFX_DIR}font_list_impl.cc # native_widget_types
  #${G_GFX_DIR}font_list_impl.h",
  # TODO #
  ${G_GFX_DIR}font_render_params.cc # native_widget_types
  #
  # if (is_android || is_fuchsia)
  #
  #   "font_fallback_skia.cc
  #   "font_render_params_skia.cc
  #
  #
  # !is_ios
  #
  ${G_GFX_DIR}bidi_line_iterator.cc
  #${G_GFX_DIR}bidi_line_iterator.h",
)

if(ENABLE_HARFBUZZ)
  list(APPEND G_GFX_SOURCES
    ${G_GFX_DIR}harfbuzz_font_skia.cc
    #${G_GFX_DIR}harfbuzz_font_skia.h",
    ${G_GFX_DIR}render_text_harfbuzz.cc
    #${G_GFX_DIR}render_text_harfbuzz.h",
    ${G_GFX_DIR}render_text.cc
    #${G_GFX_DIR}render_text.h",
  )
else()
  # message( "HARFBUZZ disabled")
  message(WARNING "HARFBUZZ disabled (ENABLE_HARFBUZZ=${ENABLE_HARFBUZZ})")
endif(ENABLE_HARFBUZZ)

list(APPEND G_GFX_SOURCES
  ${G_GFX_DIR}paint_vector_icon.cc
  #${G_GFX_DIR}paint_vector_icon.h",
  #${G_GFX_DIR}render_text_mac.h",
  # TODO # ${G_GFX_DIR}render_text_mac.mm",
  ${G_GFX_DIR}text_utils_skia.cc
  #${G_GFX_DIR}vector_icon_types.h",
  #
  #${G_GFX_DIR}font_render_params.h",
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND G_GFX_SOURCES
    ${G_GFX_DIR}font_render_params_linux.cc
    #if (is_linux || is_android || is_fuchsia)
    ${G_GFX_DIR}platform_font_skia.cc
    #${G_GFX_DIR}platform_font_skia.h
    ${G_GFX_DIR}skia_font_delegate.cc
    #${G_GFX_DIR}skia_font_delegate.h
    #
    # if ((is_linux || use_ozone) && !is_nacl)
    # TODO # ${G_GFX_DIR}native_pixmap_handle.cc # TODO: libdrm
    #native_pixmap_handle.h",

    #if (is_linux) {
    #  sources += [
    #    "linux/client_native_pixmap_dmabuf.cc",
    #    "linux/client_native_pixmap_dmabuf.h",
    #    "linux/client_native_pixmap_factory_dmabuf.cc",
    #    "linux/client_native_pixmap_factory_dmabuf.h",
    #    "linux/native_pixmap_dmabuf.cc",
    #    "linux/native_pixmap_dmabuf.h",
    #  ]
    #
    #  deps += [ "//build/config/linux/libdrm" ]
    #}
  )
endif()

list(APPEND G_GFX_SOURCES
  # TODO # ${G_GFX_DIR}font_render_params_mac.cc
  # TODO # ${G_GFX_DIR}font_render_params_win.cc
  # TODO win # ${G_GFX_DIR}gdi_util.cc
  # TODO win # #${G_GFX_DIR}gdi_util.h",
  ${G_GFX_DIR}half_float.cc
  #${G_GFX_DIR}half_float.h",
  # TODO win # ${G_GFX_DIR}icon_util.cc
  #${G_GFX_DIR}icon_util.h",
  ${G_GFX_DIR}image/image.cc
  #${G_GFX_DIR}image/image.h",
  ${G_GFX_DIR}image/image_family.cc
  #${G_GFX_DIR}image/image_family.h",
  # TODO # ${G_GFX_DIR}image/image_ios.mm",
  # TODO # ${G_GFX_DIR}image/image_mac.mm",
  #${G_GFX_DIR}image/image_platform.h",
  ${G_GFX_DIR}image/image_png_rep.cc
  #${G_GFX_DIR}image/image_png_rep.h",
  ${G_GFX_DIR}image/image_skia.cc
  #${G_GFX_DIR}image/image_skia.h",
  #${G_GFX_DIR}image/image_skia_rep.h",
  ${G_GFX_DIR}image/image_skia_source.cc
  #${G_GFX_DIR}image/image_skia_source.h",
  #${G_GFX_DIR}image/image_skia_util_ios.h",
  # TODO # ${G_GFX_DIR}image/image_skia_util_ios.mm",
  #${G_GFX_DIR}image/image_skia_util_mac.h",
  # TODO # ${G_GFX_DIR}image/image_skia_util_mac.mm",
  ${G_GFX_DIR}image/image_util.cc
  #${G_GFX_DIR}image/image_util.h",
  # TODO # ${G_GFX_DIR}image/image_util_ios.mm",
  # TODO # ${G_GFX_DIR}image/image_util_mac.mm",
  ${G_GFX_DIR}interpolated_transform.cc
  #${G_GFX_DIR}interpolated_transform.h",
  #${G_GFX_DIR}ios/NSString+CrStringDrawing.h",
  # TODO # ${G_GFX_DIR}ios/NSString+CrStringDrawing.mm",
  #${G_GFX_DIR}ios/uikit_util.h",
  # TODO # ${G_GFX_DIR}ios/uikit_util.mm",
  #${G_GFX_DIR}mac/coordinate_conversion.h",
  # TODO # ${G_GFX_DIR}mac/coordinate_conversion.mm",
  #${G_GFX_DIR}mac/nswindow_frame_controls.h",
  # TODO # ${G_GFX_DIR}mac/nswindow_frame_controls.mm",
  #${G_GFX_DIR}mac/scoped_cocoa_disable_screen_updates.h",
  # TODO # ${G_GFX_DIR}mac/scoped_cocoa_disable_screen_updates.mm",
  #
  # if ((!use_aura && !toolkit_views) || is_ios)
  #
  ${G_GFX_DIR}nine_image_painter.cc
  #${G_GFX_DIR}nine_image_painter.h",
  #
  #${G_GFX_DIR}path_mac.h",
  # TODO # ${G_GFX_DIR}path_mac.mm",
  # TODO # ${G_GFX_DIR}path_win.cc
  #${G_GFX_DIR}path_win.h",
  # TODO # ${G_GFX_DIR}path_x11.cc
  #${G_GFX_DIR}path_x11.h",
  #${G_GFX_DIR}platform_font.h",
  #${G_GFX_DIR}platform_font_ios.h",
  # TODO # ${G_GFX_DIR}platform_font_ios.mm",
  #${G_GFX_DIR}platform_font_mac.h",
  # TODO # ${G_GFX_DIR}platform_font_mac.mm",
  # TODO # ${G_GFX_DIR}platform_font_win.cc
  #${G_GFX_DIR}platform_font_win.h",
  #${G_GFX_DIR}scoped_cg_context_save_gstate_mac.h",
  #${G_GFX_DIR}scoped_ns_graphics_context_save_gstate_mac.h",
  # TODO # ${G_GFX_DIR}scoped_ns_graphics_context_save_gstate_mac.mm",
  #${G_GFX_DIR}scoped_ui_graphics_push_context_ios.h",
  # TODO # ${G_GFX_DIR}scoped_ui_graphics_push_context_ios.mm",
  ${G_GFX_DIR}scrollbar_size.cc
  #${G_GFX_DIR}scrollbar_size.h",
  ${G_GFX_DIR}selection_model.cc
  #${G_GFX_DIR}selection_model.h",
  ${G_GFX_DIR}sequential_id_generator.cc
  #${G_GFX_DIR}sequential_id_generator.h",
  ${G_GFX_DIR}shadow_value.cc
  #${G_GFX_DIR}shadow_value.h",
  ${G_GFX_DIR}skbitmap_operations.cc
  #${G_GFX_DIR}skbitmap_operations.h",
  # TODO: win # ${G_GFX_DIR}sys_color_change_listener.cc
  #${G_GFX_DIR}sys_color_change_listener.h",
  # TODO # ${G_GFX_DIR}system_fonts_win.cc
  #${G_GFX_DIR}system_fonts_win.h",
  #${G_GFX_DIR}text_constants.h",
  # TODO #
  ${G_GFX_DIR}text_elider.cc # native_widget_types
  #${G_GFX_DIR}text_elider.h",
  ${G_GFX_DIR}text_utils.cc
  #${G_GFX_DIR}text_utils.h",
  # TODO # ${G_GFX_DIR}text_utils_ios.mm",
  ${G_GFX_DIR}ui_gfx_exports.cc
  ${G_GFX_DIR}utf16_indexing.cc
  #${G_GFX_DIR}utf16_indexing.h",
  ${G_GFX_DIR}vsync_provider.cc
  #${G_GFX_DIR}vsync_provider.h",
  # TODO # ${G_GFX_DIR}win/direct_write.cc
  # TODO # ${G_GFX_DIR}win/direct_write.h",
  # TODO # ${G_GFX_DIR}win/hwnd_util.cc
  # TODO # ${G_GFX_DIR}win/hwnd_util.h",
  # TODO # ${G_GFX_DIR}win/msg_util.h",
  # TODO # ${G_GFX_DIR}win/physical_size.cc
  # TODO # ${G_GFX_DIR}win/physical_size.h",
  # TODO # ${G_GFX_DIR}win/rendering_window_manager.cc
  # TODO # ${G_GFX_DIR}win/rendering_window_manager.h",
  # TODO # ${G_GFX_DIR}win/scoped_set_map_mode.h",
  # TODO # ${G_GFX_DIR}win/singleton_hwnd.cc
  # TODO # ${G_GFX_DIR}win/singleton_hwnd.h",
  # TODO # ${G_GFX_DIR}win/singleton_hwnd_hot_key_observer.cc
  # TODO # ${G_GFX_DIR}win/singleton_hwnd_hot_key_observer.h",
  # TODO # ${G_GFX_DIR}win/singleton_hwnd_observer.cc
  # TODO # ${G_GFX_DIR}win/singleton_hwnd_observer.h",
  # TODO # ${G_GFX_DIR}win/text_analysis_source.cc
  # TODO # ${G_GFX_DIR}win/text_analysis_source.h",
  # TODO # ${G_GFX_DIR}win/window_impl.cc
  # TODO # ${G_GFX_DIR}win/window_impl.h",
  #
  # !is_ios
  #
  ${G_GFX_DIR}blit.cc
  #${G_GFX_DIR}blit.h",
  ${G_GFX_DIR}canvas.cc
  #${G_GFX_DIR}canvas.h",
  #${G_GFX_DIR}canvas_paint_mac.h",
  # TODO # ${G_GFX_DIR}canvas_paint_mac.mm",
  ${G_GFX_DIR}canvas_skia.cc
  #${G_GFX_DIR}canvas_skia_paint.h",
  ${G_GFX_DIR}image/canvas_image_source.cc
  #${G_GFX_DIR}image/canvas_image_source.h",
  ${G_GFX_DIR}image/image_generic.cc
  ${G_GFX_DIR}image/image_skia_operations.cc
  #${G_GFX_DIR}image/image_skia_operations.h",
  ${G_GFX_DIR}image/image_skia_rep_default.cc
  #${G_GFX_DIR}image/image_skia_rep_default.h",
  ${G_GFX_DIR}paint_throbber.cc
  #${G_GFX_DIR}paint_throbber.h",
  ${G_GFX_DIR}scoped_canvas.cc
  #${G_GFX_DIR}scoped_canvas.h",
  ${G_GFX_DIR}shadow_util.cc
  #${G_GFX_DIR}shadow_util.h",
  ${G_GFX_DIR}skia_paint_util.cc
  #${G_GFX_DIR}skia_paint_util.h",
  ${G_GFX_DIR}skia_vector_animation.cc
  #${G_GFX_DIR}skia_vector_animation.h",
  #${G_GFX_DIR}skia_vector_animation_observer.h",
  #
  # selection_bound
  #${G_GFX_DIR}gfx_export.h",
  ${G_GFX_DIR}selection_bound.cc
  #${G_GFX_DIR}selection_bound.h",
  #
  # memory_buffer_sources
  #
  ${G_GFX_DIR}buffer_format_util.cc
  #${G_GFX_DIR}buffer_format_util.h",
  ${G_GFX_DIR}buffer_usage_util.cc
  #${G_GFX_DIR}buffer_usage_util.h",
  ${G_GFX_DIR}ca_layer_params.cc
  #${G_GFX_DIR}ca_layer_params.h",
  #${G_GFX_DIR}client_native_pixmap.h",
  #${G_GFX_DIR}client_native_pixmap_factory.h",
  ${G_GFX_DIR}generic_shared_memory_id.cc
  #${G_GFX_DIR}generic_shared_memory_id.h",
  #${G_GFX_DIR}gfx_export.h",
  ${G_GFX_DIR}gpu_fence.cc
  #${G_GFX_DIR}gpu_fence.h",
  ${G_GFX_DIR}gpu_fence_handle.cc
  #${G_GFX_DIR}gpu_fence_handle.h",
  #${G_GFX_DIR}native_pixmap.h",
  #${G_GFX_DIR}overlay_transform.h",
  # if (!is_ios)
  ${G_GFX_DIR}gpu_memory_buffer.cc
  #${G_GFX_DIR}gpu_memory_buffer.h",
  #
)

add_library(G_GFX STATIC
  ${G_GFX_SOURCES}
)

if(${CMAKE_SYSTEM_NAME} STREQUAL "Linux")
  list(APPEND EXTRA_DEPS
    fontconfig
  )
endif()

target_link_libraries(G_GFX PUBLIC
  #${BASE_LIBRARIES}
  BASE_CC
  PAINT_CC
  SKIA_EXT
  GFX_ANIMATION
  GFX_CODEC
  GFX_COLOR_SPACE
  GFX_GEOMETRY_SKIA
  GFX_GEOMETRY
  GFX_SWITCHES
  GFX_RANGE
  SKIA
  base
  # linux libsync
  ${libsync_LIB}
  # khronos
  ${khronos_LIB}
  #
  ${EXTRA_DEPS}
)

set_property(TARGET G_GFX PROPERTY CXX_STANDARD 17)

target_include_directories(G_GFX PRIVATE
  ${CMAKE_CURRENT_SOURCE_DIR} # see /device/vr/buildflags/buildflags.h
  ${G_GFX_DIR}
  ${BASE_DIR}
)

target_compile_definitions(G_GFX PRIVATE
  GFX_IMPLEMENTATION=1
)
