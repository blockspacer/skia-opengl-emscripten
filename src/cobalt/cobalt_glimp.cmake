cmake_minimum_required(VERSION 2.8)

list(APPEND cobalt_glimp_SOURCES
 ${COBALT_ROOT_DIR}glimp/egl/attrib_map.cc
 ${COBALT_ROOT_DIR}glimp/egl/attrib_map.h
 ${COBALT_ROOT_DIR}glimp/egl/config.cc
 ${COBALT_ROOT_DIR}glimp/egl/config.h
 ${COBALT_ROOT_DIR}glimp/egl/display.cc
 ${COBALT_ROOT_DIR}glimp/egl/display.h
 ${COBALT_ROOT_DIR}glimp/egl/display_impl.h
 ${COBALT_ROOT_DIR}glimp/egl/display_registry.cc
 ${COBALT_ROOT_DIR}glimp/egl/display_registry.h
 ${COBALT_ROOT_DIR}glimp/egl/error.cc
 ${COBALT_ROOT_DIR}glimp/egl/error.h
 ${COBALT_ROOT_DIR}glimp/egl/get_proc_address_impl.h
 ${COBALT_ROOT_DIR}glimp/egl/scoped_egl_lock.cc
 ${COBALT_ROOT_DIR}glimp/egl/scoped_egl_lock.h
 ${COBALT_ROOT_DIR}glimp/egl/surface.cc
 ${COBALT_ROOT_DIR}glimp/egl/surface.h
 ${COBALT_ROOT_DIR}glimp/egl/surface_impl.h
 # wasm: error: unknown type name 'EGLSync'; did you mean 'GLsync'?
 ## TODO ##
)

if (TARGET_EMSCRIPTEN)
  list(APPEND cobalt_glimp_SOURCES
   ${COBALT_ROOT_DIR}glimp/entry_points/egl_webgl2.cc
  )
elseif(TARGET_LINUX)
  list(APPEND cobalt_glimp_SOURCES
   ${COBALT_ROOT_DIR}glimp/entry_points/egl.cc
   ${COBALT_ROOT_DIR}glimp/entry_points/egl_ext.cc
   ${COBALT_ROOT_DIR}glimp/entry_points/gles_2_0.cc
   ${COBALT_ROOT_DIR}glimp/entry_points/gles_2_0_ext.cc
   ${COBALT_ROOT_DIR}glimp/entry_points/gles_3_0.cc
  )
else()
  message(FATAL_ERROR "platform not supported")
endif()

# TODO
list(APPEND cobalt_glimp_SOURCES
 ${COBALT_ROOT_DIR}glimp/stub/egl/display_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/egl/get_proc_address_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/egl/pbuffer_surface_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/egl/surface_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/egl/window_surface_impl.cc
 #
 ${COBALT_ROOT_DIR}glimp/stub/gles/buffer_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/gles/context_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/gles/program_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/gles/shader_impl.cc
 ${COBALT_ROOT_DIR}glimp/stub/gles/texture_impl.cc
)

list(APPEND cobalt_glimp_SOURCES
 ${COBALT_ROOT_DIR}glimp/gles/blend_state.h
 ${COBALT_ROOT_DIR}glimp/gles/buffer.cc
 ${COBALT_ROOT_DIR}glimp/gles/buffer.h
 ${COBALT_ROOT_DIR}glimp/gles/buffer_impl.h
 ${COBALT_ROOT_DIR}glimp/gles/context.cc
 ${COBALT_ROOT_DIR}glimp/gles/context.h
 ${COBALT_ROOT_DIR}glimp/gles/context_impl.h
 ${COBALT_ROOT_DIR}glimp/gles/convert_pixel_data.cc
 ${COBALT_ROOT_DIR}glimp/gles/convert_pixel_data.h
 ${COBALT_ROOT_DIR}glimp/gles/cull_face_state.h
 ${COBALT_ROOT_DIR}glimp/gles/draw_mode.h
 ${COBALT_ROOT_DIR}glimp/gles/draw_state.cc
 ${COBALT_ROOT_DIR}glimp/gles/draw_state.h
 ${COBALT_ROOT_DIR}glimp/gles/framebuffer.cc
 ${COBALT_ROOT_DIR}glimp/gles/framebuffer.h
 ${COBALT_ROOT_DIR}glimp/gles/index_data_type.h
 ${COBALT_ROOT_DIR}glimp/gles/pixel_format.cc
 ${COBALT_ROOT_DIR}glimp/gles/pixel_format.h
 ${COBALT_ROOT_DIR}glimp/gles/program.cc
 ${COBALT_ROOT_DIR}glimp/gles/program.h
 ${COBALT_ROOT_DIR}glimp/gles/program_impl.h
 ${COBALT_ROOT_DIR}glimp/gles/ref_counted_resource_map.h
 ${COBALT_ROOT_DIR}glimp/gles/renderbuffer.cc
 ${COBALT_ROOT_DIR}glimp/gles/renderbuffer.h
 ${COBALT_ROOT_DIR}glimp/gles/resource_manager.cc
 ${COBALT_ROOT_DIR}glimp/gles/resource_manager.h
 ${COBALT_ROOT_DIR}glimp/gles/sampler.h
 ${COBALT_ROOT_DIR}glimp/gles/shader.cc
 ${COBALT_ROOT_DIR}glimp/gles/shader.h
 ${COBALT_ROOT_DIR}glimp/gles/shader_impl.h
 ${COBALT_ROOT_DIR}glimp/gles/texture.cc
 ${COBALT_ROOT_DIR}glimp/gles/texture.h
 ${COBALT_ROOT_DIR}glimp/gles/texture_impl.h
 ${COBALT_ROOT_DIR}glimp/gles/uniform_info.h
 ${COBALT_ROOT_DIR}glimp/gles/unique_id_generator.cc
 ${COBALT_ROOT_DIR}glimp/gles/unique_id_generator.h
 ${COBALT_ROOT_DIR}glimp/gles/vertex_attribute.h
 ${COBALT_ROOT_DIR}glimp/shaders/glsl_shader_map_helpers.h
 ${COBALT_ROOT_DIR}glimp/shaders/hash_glsl_source.cc
 ${COBALT_ROOT_DIR}glimp/shaders/hash_glsl_source.h
)

add_library(cobalt_glimp STATIC
  ${cobalt_glimp_SOURCES}
)

#message(WARNING OPENGL_EGL_INCLUDE_DIRS=
#  ${OPENGL_EGL_INCLUDE_DIRS})
#message(FATAL_ERROR OPENGL_LIBRARIES=
#  ${OPENGL_LIBRARIES}
#  ${OPENGLES2_LIBRARIES})

if(TARGET_LINUX)
  list(APPEND EXTRA_cobalt_glimp_LIBS
    ${OPENGL_LIBRARIES}
    #OpenGL::EGL
  )
endif(TARGET_LINUX)

target_link_libraries(cobalt_glimp PRIVATE
  base # TODO
  cobalt_base
  cobalt_nanobase
  ${EXTRA_cobalt_glimp_LIBS}
  ${OPENGLES2_LIBRARIES}
  #cobalt_dom
  #cobalt_loader
  #${GNET_LIBS}
  #${GLIBXML_LIB}
  #cobalt_nanobase
  #${COBALT_CSP_LIB_NAME}
  #${COBALT_LOADER_LIB_NAME}
  #${COBALT_MEDIA_LIB}
  #cobalt_page_visibility
  #cobalt_script
  #v8_stub
  #cobalt_ui_navigation
  #cobalt_web_animations
  ##cobalt_browser ## TODO ##
  #modp_b64
  #dynamic_annotations
  #GURL
  #${GLIBXML_LIB}
  #icu
  #ced
  #glm
)

set_property(TARGET cobalt_glimp PROPERTY CXX_STANDARD 17)

if(TARGET_LINUX)
  target_include_directories(cobalt_glimp PUBLIC
    ${COBALT_ROOT_DIR}/glimp/port/include
  )
endif(TARGET_LINUX)

target_include_directories(cobalt_glimp PRIVATE
  #${UI_PARENT_DIR}
  ${COBALT_CORE_DIR}
  ${COBALT_CORE_PARENT_DIR}
  ${COBALT_COMMON_INCLUDES}
  ${CHROMIUM_DIR} # to third_party/skia/include/core/SkWriteBuffer.h
  ${COBALT_GEN_glimp_PARENT_DIR}
)

target_compile_definitions(cobalt_glimp PRIVATE
  #GLIMP_EGLPLATFORM_INCLUDE=../../<(target_arch)/eglplatform_public.h
  #GLIMP_KHRPLATFORM_INCLUDE=../../<(target_arch)/khrplatform_public.h
  #
  ${COBALT_COMMON_DEFINES}
)
