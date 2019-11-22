include_guard( DIRECTORY )

macro(find_freetype)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    find_package(Freetype)
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_freetype)
