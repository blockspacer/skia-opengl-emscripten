include_guard( DIRECTORY )

macro(strip_debug_symbols TARGET_NAME TARGET_OUTPUT_FILE)
  # same as set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS_RELEASE -s)
  # see https://stackoverflow.com/a/53692364
  if(NOT CMAKE_STRIP)
    message(WARNING "NOT FOUND CMAKE_STRIP=${CMAKE_STRIP}")
  endif(NOT CMAKE_STRIP)
  add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
          COMMAND ${CMAKE_STRIP} -g -S -d --strip-debug --verbose ${TARGET_OUTPUT_FILE}
          COMMENT "Strip debug symbols done on final binary.")
endmacro(strip_debug_symbols)
