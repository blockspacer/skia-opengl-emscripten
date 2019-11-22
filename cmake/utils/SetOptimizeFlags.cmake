include_guard( DIRECTORY )

macro(set_optimize_flags)
  if(NOT TARGET_EMSCRIPTEN)
    # set -DCMAKE_BUILD_TYPE=Debug
    # see https://stackoverflow.com/a/25199377/10904212
    if(NOT RELEASE_BUILD)

      if(NOT DEBUG_LEVEL)
        if(MSVC)
          set(DEBUG_LEVEL "${DEBUG_LEVEL} /DEBUG")
        else()
          set(DEBUG_LEVEL "${DEBUG_LEVEL} -g")
        endif()
      endif(NOT DEBUG_LEVEL)
      if(NOT OPTIMIZE_LEVEL)
        if(MSVC)
          # TODO
          #set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O0")
        else()
          set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O0")
        endif()
      endif(NOT OPTIMIZE_LEVEL)
    else()
      if(NOT OPTIMIZE_LEVEL)
        if(MSVC)
          # TODO
          set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} /RELEASE")
        else()
          set(OPTIMIZE_LEVEL "${OPTIMIZE_LEVEL} -O3")
        endif()
      endif(NOT OPTIMIZE_LEVEL)
      if(NOT DEBUG_LEVEL)
        # Use -s to strip debug info from the binary (and don't use -g).
        # set(DEBUG_LEVEL "${DEBUG_LEVEL} -s") # see LINK_FLAGS_RELEASE
      endif(NOT DEBUG_LEVEL)
    endif(NOT RELEASE_BUILD)
    # see above
    message(STATUS "OPTIMIZE_LEVEL=${OPTIMIZE_LEVEL}")
    set(COMMON_FLAGS "${COMMON_FLAGS} ${OPTIMIZE_LEVEL}")
    message(STATUS "DEBUG_LEVEL=${DEBUG_LEVEL}")
    set(COMMON_FLAGS "${COMMON_FLAGS} ${DEBUG_LEVEL}")

    #message(FATAL_ERROR "OPENGLES2_LIBRARIES = ${OPENGLES2_LIBRARIES} ")
  endif(NOT TARGET_EMSCRIPTEN)
endmacro(set_optimize_flags)
