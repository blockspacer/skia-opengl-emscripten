# Helpfull build utils

cmake_minimum_required(VERSION 3.5)

macro(set_parent_scoped ARG_OUT_VAR_NAME ARG_VALUE)
  # see https://stackoverflow.com/a/25217937
  get_directory_property(hasParent PARENT_DIRECTORY)
  if(hasParent)
    set(HAS_PARENT_SCOPE TRUE)
  else()
    set(HAS_PARENT_SCOPE FALSE)
  endif()
  # PARENT_SCOPE: Sets var in the parent scope, but not the current scope!
  if(HAS_PARENT_SCOPE)
    set(${ARG_OUT_VAR_NAME} ${ARG_VALUE} PARENT_SCOPE)
  else(HAS_PARENT_SCOPE)
    set(${ARG_OUT_VAR_NAME} ${ARG_VALUE})
  endif(HAS_PARENT_SCOPE)
endmacro(set_parent_scoped)

macro(find_program_required ARG_OUT_VAR_NAME ARG_PROGRAM ARG_ERR_MSG)
  find_program(${ARG_OUT_VAR_NAME} "${ARG_PROGRAM}")
  if(NOT ${ARG_OUT_VAR_NAME})
    colored_notify("${ARG_OUT_VAR_NAME}=${${ARG_OUT_VAR_NAME}}" --red --bold)
    colored_fatal("${ARG_ERR_MSG}" --red --bold)
  endif(NOT ${ARG_OUT_VAR_NAME})
  set_parent_scoped(${ARG_OUT_VAR_NAME} ${${ARG_OUT_VAR_NAME}})
endmacro(find_program_required)

macro(check_is_dir ARG_DIR ARG_LOG_NAME)
  if (NOT IS_DIRECTORY ${ARG_DIR})
    colored_fatal("${ARG_LOG_NAME}. must be DIRECTORY ${ARG_LOG_NAME}=${ARG_DIR} ..." --red --bold)
  elseif (NOT EXISTS "${ARG_DIR}")
    colored_fatal("you must set existing ${ARG_LOG_NAME}. current ${ARG_LOG_NAME}=${ARG_DIR} ..." --red --bold)
  else()
    message(STATUS "${ARG_LOG_NAME}=${ARG_DIR} ...")
  endif()
endmacro(check_is_dir)

macro(mkdir_with_rm_condition ARG_CLEAN ARG_MAKE_DIR ARG_WORKING_DIR)
  conditional_remove(${ARG_CLEAN} ${ARG_MAKE_DIR} ${ARG_WORKING_DIR})

  message(STATUS "make_directory for ${ARG_MAKE_DIR}")
  execute_process(
    COMMAND ${CMAKE_COMMAND} "-E" "make_directory" "${ARG_MAKE_DIR}"
    WORKING_DIRECTORY ${ARG_WORKING_DIR}
    TIMEOUT 7200 # sec
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
    if (NOT EXISTS ${ARG_DIR})
      colored_notify("not existent: ${ARG_DIR}" --yellow --bold)
    endif (NOT EXISTS ${ARG_DIR})

    if(IS_DIRECTORY ${ARG_DIR})
      execute_process(
        COMMAND ${CMAKE_COMMAND} "-E" "remove_directory" "${ARG_DIR}"
        WORKING_DIRECTORY ${ARG_WORKING_DIR}
        TIMEOUT 7200 # sec
      )
      colored_notify("removed old directory ${ARG_DIR}" --yellow --bold)
      if (EXISTS ${ARG_DIR})
        colored_fatal("can`t remove directory ${ARG_DIR}" --red --bold)
      endif(EXISTS ${ARG_DIR})
    else(IS_DIRECTORY ${ARG_DIR})
      execute_process(
        COMMAND ${CMAKE_COMMAND} "-E" "remove" "${ARG_DIR}"
        WORKING_DIRECTORY ${ARG_WORKING_DIR}
        TIMEOUT 7200 # sec
      )
      colored_notify("removed old file ${ARG_DIR}" --yellow --bold)
      if (EXISTS ${ARG_DIR})
        colored_fatal("can`t remove file ${ARG_DIR}" --red --bold)
      endif(EXISTS ${ARG_DIR})
    endif(IS_DIRECTORY ${ARG_DIR})
  else(${ARG_DO_REMOVE})
    colored_notify("kept old path: ${ARG_DIR}" --yellow --bold)
  endif(${ARG_DO_REMOVE})
endmacro(conditional_remove)

macro(wasm_opt_metrics ARG_WASM_FILE_PATH ARG_DIR)
  # NOTE: funcs count must not exceed browser limit
  # see https://github.com/emscripten-core/emscripten/issues/8755

  message(STATUS "printing debug metrics ...")

  # TODO: bin/wasm-opt --func-metrics split.wast --print --debug
  # SEE: https://github.com/gonowa/wasm-opt/blob/master/README.md
  execute_process(
    COMMAND
    ${COLORED_OUTPUT_ENABLER}
      ${EMSCRIPTEN_WASM_OPT} ${ARG_WASM_FILE_PATH} "--metrics"
    WORKING_DIRECTORY ${ARG_DIR}
    TIMEOUT 7200 # sec
    RESULT_VARIABLE retcode
    ERROR_VARIABLE _ERROR_VARIABLE
  )
  if(NOT "${retcode}" STREQUAL "0")
    message( FATAL_ERROR "Bad exit status ${retcode} ${_ERROR_VARIABLE}")
  endif()
endmacro(wasm_opt_metrics)
