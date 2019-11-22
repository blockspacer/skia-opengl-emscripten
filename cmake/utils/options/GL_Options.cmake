include_guard( DIRECTORY )

macro(find_GL)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    if(USE_OPENGL_LIB)
      find_package(OpenGL
        COMPONENTS OpenGL EGL
        REQUIRED)
      if(OPENGL_FOUND)
        if(OPENGL_gl_LIBRARY)
          list(APPEND FOUND_OPENGL_LIBRARIES ${OPENGL_gl_LIBRARY})
        endif(OPENGL_gl_LIBRARY)
        if(OPENGL_LIBRARIES AND NOT MSVC) # need only opengl32.lib
          list(APPEND FOUND_OPENGL_LIBRARIES ${OPENGL_LIBRARIES})
        endif(OPENGL_LIBRARIES AND NOT MSVC)
        set(FOUND_OPENGL_INCLUDE_DIR ${OPENGL_INCLUDE_DIR})
        #
        #message(STATUS "OPENGL_LIBRARIES = ${OPENGL_LIBRARIES} ")
        #message(STATUS "OPENGL_gl_LIBRARY = ${OPENGL_gl_LIBRARY} ")
        #message(STATUS "OPENGL_INCLUDE_DIR = ${OPENGL_INCLUDE_DIR} ")
        #if(MSVC)
        #  list(APPEND FOUND_OPENGL_LIBRARIES
        #    "opengl32.lib"
        #  )
        #endif(MSVC)
      endif()
      message(STATUS "OPENGL_gl_LIBRARY = ${OPENGL_gl_LIBRARY} ")
      message(STATUS "OPENGL_LIBRARIES = ${OPENGL_LIBRARIES} ")
      message(STATUS "OPENGL_INCLUDE_DIR = ${OPENGL_INCLUDE_DIR} ")
    endif(USE_OPENGL_LIB)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_GL)
