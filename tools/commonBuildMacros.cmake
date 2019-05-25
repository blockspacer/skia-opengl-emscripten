# Helpfull build utils

cmake_minimum_required(VERSION 3.5)

macro(find_program_required ARG_OUT_VAR_NAME ARG_PROGRAM ARG_ERR_MSG)
  find_program(${ARG_OUT_VAR_NAME} "${ARG_PROGRAM}")
  if(NOT ${ARG_OUT_VAR_NAME})
    colored_notify("${ARG_OUT_VAR_NAME}=${${ARG_OUT_VAR_NAME}}" --red --bold)
    colored_fatal("${ARG_ERR_MSG}" --red --bold)
  endif(NOT ${ARG_OUT_VAR_NAME})
  # PARENT_SCOPE: Sets var in the parent scope, but not the current scope!
  set(${ARG_OUT_VAR_NAME} ${${ARG_OUT_VAR_NAME}} PARENT_SCOPE)
endmacro(find_program_required)

macro(check_is_dir ARG_DIR ARG_LOG_NAME)
  if (NOT IS_DIRECTORY ${ARG_DIR})
    colored_fatal("${ARG_LOG_NAME}. must be DIRECTORY ${ARG_LOG_NAME}=${ARG_DIR} ..." --red --bold)
  elseif (NOT EXISTS "${ARG_DIR}")
    colored_fatal("you must set existing ${ARG_LOG_NAME}. current ${ARG_LOG_NAME}=${ARG_DIR} ..." --red --bold)
  else()
    message(INFO "${ARG_LOG_NAME}=${ARG_DIR} ...")
  endif()
endmacro(check_is_dir)

macro(mkdir_with_rm_condition ARG_CLEAN ARG_MAKE_DIR ARG_WORKING_DIR)
  conditional_remove(${ARG_CLEAN} ${ARG_MAKE_DIR} ${ARG_WORKING_DIR})

  execute_process(
    COMMAND ${CMAKE_COMMAND} "-E" "make_directory" "${ARG_MAKE_DIR}"
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
  # checks result of make_directory
  if (NOT EXISTS ${ARG_MAKE_DIR})
    colored_fatal("made invalid directory ${ARG_MAKE_DIR}" --red --bold)
  endif(NOT EXISTS ${ARG_MAKE_DIR})
endmacro(mkdir_with_rm_condition)

macro(conditional_remove ARG_DO_REMOVE ARG_DIR ARG_WORKING_DIR)
  if(${ARG_DO_REMOVE})
    execute_process(
      COMMAND ${CMAKE_COMMAND} "-E" "remove_directory" "${ARG_DIR}"
      WORKING_DIRECTORY ${ARG_WORKING_DIR}
    )
    colored_notify("removed old directory ${ARG_DIR}" --yellow --bold)
    if (EXISTS ${ARG_DIR})
      colored_fatal("can`t remove ${ARG_DIR}" --red --bold)
    endif(EXISTS ${ARG_DIR})
  else(${ARG_DO_REMOVE})
    colored_notify("kept old directory ${ARG_DIR}" --yellow --bold)
  endif(${ARG_DO_REMOVE})
endmacro(conditional_remove)
