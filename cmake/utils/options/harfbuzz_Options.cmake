include_guard( DIRECTORY )

macro(find_harfbuzz)
  if(ENABLE_HARFBUZZ AND NOT USE_CUSTOM_HARFBUZZ)
    # harfbuzz
    set(USE_SHARED_HARFBUZZ "true")
    if(USE_SHARED_HARFBUZZ)
      if(TARGET_WINDOWS OR MSVC)
        # skip
        if(NOT HARFBUZZ_FROM_SKIA)
          find_package(HarfBuzz REQUIRED)
        endif()
      else()
        find_package(HarfBuzz REQUIRED)
      endif()
    else()
      if(TARGET_WINDOWS OR MSVC)
        # NOTE: HarfBuzz from skia on WINDOWS
        if(HARFBUZZ_FROM_SKIA)
          set(HARFBUZZ_LIBRARIES SKIA)
          #add_dependencies(base SKIA) # TODO
        else()
          set(HARFBUZZ_LIBRARIES harfbuzz)
          list(APPEND HARFBUZZ_INCLUDE_DIRS ${harfbuzz_FULL_DIR}/src)
        endif()
      else()
        set(HARFBUZZ_LIBRARIES harfbuzz)
        list(APPEND HARFBUZZ_INCLUDE_DIRS ${harfbuzz_FULL_DIR}/src)
      endif()
    endif()
    # custom flags
    set(COMMON_FLAGS "${COMMON_FLAGS} -DENABLE_HARFBUZZ=1")
  endif(ENABLE_HARFBUZZ AND NOT USE_CUSTOM_HARFBUZZ)
endmacro(find_harfbuzz)
