include_guard( DIRECTORY )

macro(find_LibDL)
  if(TARGET_LINUX)
    find_package(LibDL REQUIRED)
    set(libDL_LIB LIBDL::LIBDL)
  elseif(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_WINDOWS)
    # skip
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_LibDL)
