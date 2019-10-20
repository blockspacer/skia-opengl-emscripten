# see https://github.com/chromium/chromium/blob/87f2e0fdc7004e428e4e6216e79bf6938fe0e23f/ui/gfx/BUILD.gn

### --- UI_GFX ---###

set(UI_GFX_SOURCES
  #${UI_GFX_DIR}gfx_export.h
  # TODO # ${UI_GFX_DIR}android/java_bitmap.cc
  # TODO # #${UI_GFX_DIR}android/java_bitmap.h",
  # TODO # ${UI_GFX_DIR}android/view_configuration.cc
  # TODO # #${UI_GFX_DIR}android/view_configuration.h",
  #${UI_GFX_DIR}break_list.h",
  ${UI_GFX_DIR}color_analysis.cc
  #${UI_GFX_DIR}color_analysis.h",
  #${UI_GFX_DIR}color_palette.h",
  ${UI_GFX_DIR}color_transform.cc
  #${UI_GFX_DIR}color_transform.h",
  ${UI_GFX_DIR}color_utils.cc
  #${UI_GFX_DIR}color_utils.h",
  ${UI_GFX_DIR}decorated_text.cc # native_widget_types
  #${UI_GFX_DIR}decorated_text.h",
  #${UI_GFX_DIR}decorated_text_mac.h",
  # TODO # ${UI_GFX_DIR}decorated_text_mac.mm",
  ${UI_GFX_DIR}extension_set.cc
  #${UI_GFX_DIR}extension_set.h",
  ${UI_GFX_DIR}favicon_size.cc
  #${UI_GFX_DIR}favicon_size.h",
  ${UI_GFX_DIR}font.cc # native_widget_types
  #${UI_GFX_DIR}font.h",
  #${UI_GFX_DIR}font_fallback.h",
)

#if(TARGET_LINUX AND ENABLE_HARFBUZZ)
if(ENABLE_HARFBUZZ)# AND TARGET_LINUX)
  if(TARGET_EMSCRIPTEN OR TARGET_LINUX)
    list(APPEND UI_GFX_SOURCES
      ${UI_GFX_DIR}font_render_params_linux.cc # requires fontconfig
      ${UI_GFX_DIR}font_fallback_linux.cc # requires fontconfig
    )
  elseif(TARGET_WINDOWS)
    list(APPEND UI_GFX_SOURCES
      ${UI_GFX_DIR}font_render_params_win.cc # requires fontconfig
      ${UI_GFX_DIR}font_fallback_win.cc # requires fontconfig
    )
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endif(ENABLE_HARFBUZZ)# AND TARGET_LINUX)

list(APPEND UI_GFX_SOURCES
  #${UI_GFX_DIR}font_fallback_linux.h",
  # # TODO # ${UI_GFX_DIR}font_fallback_mac.mm",
  # # TODO # ${UI_GFX_DIR}font_fallback_win.cc
  #${UI_GFX_DIR}font_fallback_win.h",
  ${UI_GFX_DIR}font_list.cc
  #${UI_GFX_DIR}font_list.h", # native_widget_types
  # TODO #
  ${UI_GFX_DIR}font_list_impl.cc # native_widget_types
  #${UI_GFX_DIR}font_list_impl.h",
  # TODO #
  ${UI_GFX_DIR}font_render_params.cc # native_widget_types
  #
  # if (is_android || is_fuchsia)
  #
  #   "font_fallback_skia.cc
  #   "font_render_params_skia.cc
  #
  #
  # !is_ios
  #
  ${UI_GFX_DIR}bidi_line_iterator.cc
  #${UI_GFX_DIR}bidi_line_iterator.h",
)

if(ENABLE_HARFBUZZ)
  list(APPEND UI_GFX_SOURCES
    ${UI_GFX_DIR}harfbuzz_font_skia.cc
    #${UI_GFX_DIR}harfbuzz_font_skia.h",
    ${UI_GFX_DIR}render_text_harfbuzz.cc
    #${UI_GFX_DIR}render_text_harfbuzz.h",
    ${UI_GFX_DIR}render_text.cc
    #${UI_GFX_DIR}render_text.h",
  )
else()
  # message( "HARFBUZZ disabled")
  message(WARNING "HARFBUZZ disabled (ENABLE_HARFBUZZ=${ENABLE_HARFBUZZ})")
endif(ENABLE_HARFBUZZ)

list(APPEND UI_GFX_SOURCES
  ${UI_GFX_DIR}paint_vector_icon.cc
  #${UI_GFX_DIR}paint_vector_icon.h",
  #${UI_GFX_DIR}render_text_mac.h",
  # TODO # ${UI_GFX_DIR}render_text_mac.mm",
  ${UI_GFX_DIR}text_utils_skia.cc
  #${UI_GFX_DIR}vector_icon_types.h",
  #
  #${UI_GFX_DIR}font_render_params.h",
)

if(ENABLE_HARFBUZZ)
  list(APPEND UI_GFX_SOURCES
    #if (is_linux || is_android || is_fuchsia)
    ${UI_GFX_DIR}platform_font_skia.cc
    #${UI_GFX_DIR}platform_font_skia.h
    ${UI_GFX_DIR}skia_font_delegate.cc
    #${UI_GFX_DIR}skia_font_delegate.h
    #
    # if ((is_linux || use_ozone) && !is_nacl)
    # TODO # ${UI_GFX_DIR}native_pixmap_handle.cc # TODO: libdrm
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
endif(ENABLE_HARFBUZZ)

list(APPEND UI_GFX_SOURCES
  # TODO # ${UI_GFX_DIR}font_render_params_mac.cc
  # TODO # ${UI_GFX_DIR}font_render_params_win.cc
  # TODO win # ${UI_GFX_DIR}gdi_util.cc
  # TODO win # #${UI_GFX_DIR}gdi_util.h",
  ${UI_GFX_DIR}half_float.cc
  #${UI_GFX_DIR}half_float.h",
  # TODO win # ${UI_GFX_DIR}icon_util.cc
  #${UI_GFX_DIR}icon_util.h",
  ${UI_GFX_DIR}image/image.cc
  #${UI_GFX_DIR}image/image.h",
  ${UI_GFX_DIR}image/image_family.cc
  #${UI_GFX_DIR}image/image_family.h",
  # TODO # ${UI_GFX_DIR}image/image_ios.mm",
  # TODO # ${UI_GFX_DIR}image/image_mac.mm",
  #${UI_GFX_DIR}image/image_platform.h",
  ${UI_GFX_DIR}image/image_png_rep.cc
  #${UI_GFX_DIR}image/image_png_rep.h",
  ${UI_GFX_DIR}image/image_skia.cc
  #${UI_GFX_DIR}image/image_skia.h",
  #${UI_GFX_DIR}image/image_skia_rep.h",
  ${UI_GFX_DIR}image/image_skia_source.cc
  #${UI_GFX_DIR}image/image_skia_source.h",
  #${UI_GFX_DIR}image/image_skia_util_ios.h",
  # TODO # ${UI_GFX_DIR}image/image_skia_util_ios.mm",
  #${UI_GFX_DIR}image/image_skia_util_mac.h",
  # TODO # ${UI_GFX_DIR}image/image_skia_util_mac.mm",
  ${UI_GFX_DIR}image/image_util.cc
  #${UI_GFX_DIR}image/image_util.h",
  # TODO # ${UI_GFX_DIR}image/image_util_ios.mm",
  # TODO # ${UI_GFX_DIR}image/image_util_mac.mm",
  ${UI_GFX_DIR}interpolated_transform.cc
  #${UI_GFX_DIR}interpolated_transform.h",
  #${UI_GFX_DIR}ios/NSString+CrStringDrawing.h",
  # TODO # ${UI_GFX_DIR}ios/NSString+CrStringDrawing.mm",
  #${UI_GFX_DIR}ios/uikit_util.h",
  # TODO # ${UI_GFX_DIR}ios/uikit_util.mm",
  #${UI_GFX_DIR}mac/coordinate_conversion.h",
  # TODO # ${UI_GFX_DIR}mac/coordinate_conversion.mm",
  #${UI_GFX_DIR}mac/nswindow_frame_controls.h",
  # TODO # ${UI_GFX_DIR}mac/nswindow_frame_controls.mm",
  #${UI_GFX_DIR}mac/scoped_cocoa_disable_screen_updates.h",
  # TODO # ${UI_GFX_DIR}mac/scoped_cocoa_disable_screen_updates.mm",
  #
  # if ((!use_aura && !toolkit_views) || is_ios)
  #
  ${UI_GFX_DIR}nine_image_painter.cc
  #${UI_GFX_DIR}nine_image_painter.h",
  #
  #${UI_GFX_DIR}path_mac.h",
  # TODO # ${UI_GFX_DIR}path_mac.mm",
  # TODO # ${UI_GFX_DIR}path_win.cc
  #${UI_GFX_DIR}path_win.h",
  # TODO # ${UI_GFX_DIR}path_x11.cc
  #${UI_GFX_DIR}path_x11.h",
  #${UI_GFX_DIR}platform_font.h",
  #${UI_GFX_DIR}platform_font_ios.h",
  # TODO # ${UI_GFX_DIR}platform_font_ios.mm",
  #${UI_GFX_DIR}platform_font_mac.h",
  # TODO # ${UI_GFX_DIR}platform_font_mac.mm",
  # TODO # ${UI_GFX_DIR}platform_font_win.cc
  #${UI_GFX_DIR}platform_font_win.h",
  #${UI_GFX_DIR}scoped_cg_context_save_gstate_mac.h",
  #${UI_GFX_DIR}scoped_ns_graphics_context_save_gstate_mac.h",
  # TODO # ${UI_GFX_DIR}scoped_ns_graphics_context_save_gstate_mac.mm",
  #${UI_GFX_DIR}scoped_ui_graphics_push_context_ios.h",
  # TODO # ${UI_GFX_DIR}scoped_ui_graphics_push_context_ios.mm",
  ${UI_GFX_DIR}scrollbar_size.cc
  #${UI_GFX_DIR}scrollbar_size.h",
  ${UI_GFX_DIR}selection_model.cc
  #${UI_GFX_DIR}selection_model.h",
  ${UI_GFX_DIR}sequential_id_generator.cc
  #${UI_GFX_DIR}sequential_id_generator.h",
  ${UI_GFX_DIR}shadow_value.cc
  #${UI_GFX_DIR}shadow_value.h",
  ${UI_GFX_DIR}skbitmap_operations.cc
  #${UI_GFX_DIR}skbitmap_operations.h",
  # TODO: win # ${UI_GFX_DIR}sys_color_change_listener.cc
  #${UI_GFX_DIR}sys_color_change_listener.h",
  # TODO # ${UI_GFX_DIR}system_fonts_win.cc
  #${UI_GFX_DIR}system_fonts_win.h",
  #${UI_GFX_DIR}text_constants.h",
  # TODO #
  ${UI_GFX_DIR}text_elider.cc # native_widget_types
  #${UI_GFX_DIR}text_elider.h",
  ${UI_GFX_DIR}text_utils.cc
  #${UI_GFX_DIR}text_utils.h",
  # TODO # ${UI_GFX_DIR}text_utils_ios.mm",
  ${UI_GFX_DIR}ui_gfx_exports.cc
  ${UI_GFX_DIR}utf16_indexing.cc
  #${UI_GFX_DIR}utf16_indexing.h",
  ${UI_GFX_DIR}vsync_provider.cc
  #${UI_GFX_DIR}vsync_provider.h",
  # TODO # ${UI_GFX_DIR}win/direct_write.cc
  # TODO # ${UI_GFX_DIR}win/direct_write.h",
  # TODO # ${UI_GFX_DIR}win/hwnd_util.cc
  # TODO # ${UI_GFX_DIR}win/hwnd_util.h",
  # TODO # ${UI_GFX_DIR}win/msg_util.h",
  # TODO # ${UI_GFX_DIR}win/physical_size.cc
  # TODO # ${UI_GFX_DIR}win/physical_size.h",
  # TODO # ${UI_GFX_DIR}win/rendering_window_manager.cc
  # TODO # ${UI_GFX_DIR}win/rendering_window_manager.h",
  # TODO # ${UI_GFX_DIR}win/scoped_set_map_mode.h",
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd.cc
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd.h",
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd_hot_key_observer.cc
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd_hot_key_observer.h",
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd_observer.cc
  # TODO # ${UI_GFX_DIR}win/singleton_hwnd_observer.h",
  # TODO # ${UI_GFX_DIR}win/text_analysis_source.cc
  # TODO # ${UI_GFX_DIR}win/text_analysis_source.h",
  # TODO # ${UI_GFX_DIR}win/window_impl.cc
  # TODO # ${UI_GFX_DIR}win/window_impl.h",
  #
  # !is_ios
  #
  ${UI_GFX_DIR}blit.cc
  #${UI_GFX_DIR}blit.h",
  ${UI_GFX_DIR}canvas.cc
  #${UI_GFX_DIR}canvas.h",
  #${UI_GFX_DIR}canvas_paint_mac.h",
  # TODO # ${UI_GFX_DIR}canvas_paint_mac.mm",
  ${UI_GFX_DIR}canvas_skia.cc
  #${UI_GFX_DIR}canvas_skia_paint.h",
  ${UI_GFX_DIR}image/canvas_image_source.cc
  #${UI_GFX_DIR}image/canvas_image_source.h",
  ${UI_GFX_DIR}image/image_generic.cc
  ${UI_GFX_DIR}image/image_skia_operations.cc
  #${UI_GFX_DIR}image/image_skia_operations.h",
  ${UI_GFX_DIR}image/image_skia_rep_default.cc
  #${UI_GFX_DIR}image/image_skia_rep_default.h",
  ${UI_GFX_DIR}paint_throbber.cc
  #${UI_GFX_DIR}paint_throbber.h",
  ${UI_GFX_DIR}scoped_canvas.cc
  #${UI_GFX_DIR}scoped_canvas.h",
  ${UI_GFX_DIR}shadow_util.cc
  #${UI_GFX_DIR}shadow_util.h",
  ${UI_GFX_DIR}skia_paint_util.cc
  #${UI_GFX_DIR}skia_paint_util.h",
  ${UI_GFX_DIR}skia_vector_animation.cc
  #${UI_GFX_DIR}skia_vector_animation.h",
  #${UI_GFX_DIR}skia_vector_animation_observer.h",
  #
  # selection_bound
  #${UI_GFX_DIR}gfx_export.h",
  ${UI_GFX_DIR}selection_bound.cc
  #${UI_GFX_DIR}selection_bound.h",
  #
  # memory_buffer_sources
  #
  ${UI_GFX_DIR}buffer_format_util.cc
  #${UI_GFX_DIR}buffer_format_util.h",
  ${UI_GFX_DIR}buffer_usage_util.cc
  #${UI_GFX_DIR}buffer_usage_util.h",
  ${UI_GFX_DIR}ca_layer_params.cc
  #${UI_GFX_DIR}ca_layer_params.h",
  #${UI_GFX_DIR}client_native_pixmap.h",
  #${UI_GFX_DIR}client_native_pixmap_factory.h",
  ${UI_GFX_DIR}generic_shared_memory_id.cc
  #${UI_GFX_DIR}generic_shared_memory_id.h",
  #${UI_GFX_DIR}gfx_export.h",
  ${UI_GFX_DIR}gpu_fence.cc
  #${UI_GFX_DIR}gpu_fence.h",
  ${UI_GFX_DIR}gpu_fence_handle.cc
  #${UI_GFX_DIR}gpu_fence_handle.h",
  #${UI_GFX_DIR}native_pixmap.h",
  #${UI_GFX_DIR}overlay_transform.h",
  # if (!is_ios)
  ${UI_GFX_DIR}gpu_memory_buffer.cc
  #${UI_GFX_DIR}gpu_memory_buffer.h",
  #
)

add_library(UI_GFX STATIC
  ${UI_GFX_SOURCES}
)

#if(TARGET_LINUX)
if(ENABLE_HARFBUZZ AND TARGET_LINUX)
  list(APPEND EXTRA_DEPS
    fontconfig
  )
endif(ENABLE_HARFBUZZ AND TARGET_LINUX)

target_link_libraries(UI_GFX PUBLIC
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
  #
  ${EXTRA_DEPS}
)

target_link_libraries(UI_GFX PRIVATE
  # khronos
  ${khronos_LIB}
)

set_property(TARGET UI_GFX PROPERTY CXX_STANDARD 17)

target_include_directories(UI_GFX PRIVATE
  ${CHROMIUM_DIR} # see /device/vr/buildflags/buildflags.h
  ${UI_GFX_DIR}
  ${BASE_DIR}
)

target_compile_definitions(UI_GFX PRIVATE
  GFX_IMPLEMENTATION=1
)
