# Helpfull build utils

macro(build_dir_step ARG_BUILD_DIR ARG_WORKING_DIR)
  # todo: pass CLEAN_BUILD as arg, check if`s
  if(CLEAN_BUILD)
    execute_process(
      COMMAND ${CMAKE_COMMAND} "-E" "remove_directory" "${ARG_BUILD_DIR}"
      WORKING_DIRECTORY ${ARG_WORKING_DIR}
    )
    colored_notify("removed old output directory ${ARG_BUILD_DIR}" --yellow --bold)
  else(CLEAN_BUILD)
    colored_notify("kept old output directory, do full rebuild for production" --yellow --bold)
  endif(CLEAN_BUILD)

  execute_process(
    COMMAND ${CMAKE_COMMAND} "-E" "make_directory" "${ARG_BUILD_DIR}"
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
  )
  # checks result of make_directory
  if (NOT EXISTS ${ARG_BUILD_DIR})
    colored_fatal("invalid output directory ${ARG_BUILD_DIR}" --red --bold)
  endif(NOT EXISTS ${ARG_BUILD_DIR})
endmacro(build_dir_step)
