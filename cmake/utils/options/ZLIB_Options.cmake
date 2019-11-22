include_guard( DIRECTORY )

macro(find_ZLIB)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    if(ENABLE_ZLIB)
      if(USE_SYSTEM_ZLIB)
        #message(FATAL_ERROR "NOT SUPPORTED") # TODO
        find_package(ZLIB REQUIRED) # ZLIB::ZLIB
        set(libZLIB_LIB ZLIB::ZLIB)
        # see chromium/third_party/zlib/google/compression_utils.cc
        # TODO
        # set(COMMON_FLAGS "${COMMON_FLAGS} -DUSE_SYSTEM_ZLIB=1")
        list(APPEND APP_DEFINITIONS USE_SYSTEM_ZLIB=1)
      else()
        set(libZLIB_LIB GZLIB)
      endif()
    endif()
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_ZLIB)
