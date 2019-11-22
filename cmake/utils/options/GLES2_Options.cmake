include_guard( DIRECTORY )

macro(find_GLES2)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    if(USE_OPENGLES2_LIB)
      find_package(OpenGLES2 REQUIRED)
      if(OPENGLES2_FOUND)
        message(STATUS "OPENGLES2_DEFINITIONS = ${OPENGLES2_DEFINITIONS} ")
        message(STATUS "OPENGLES2_LIBRARIES = ${OPENGLES2_LIBRARIES} ")
        message(STATUS "OPENGLES2_INCLUDE_DIRS = ${OPENGLES2_INCLUDE_DIRS} ")
        #set(USE_OPENGLES2_LIB TRUE)
      endif()
    endif(USE_OPENGLES2_LIB)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_GLES2)
