include_guard( DIRECTORY )

# Load addional modules
include(ProcessorCount)
ProcessorCount(NUM_PROCESSORS)
set(NUM_PROCESSORS ${NUM_PROCESSORS} CACHE STRING "Processor count")
message("CMAKE_CTEST_COMMAND=${CMAKE_CTEST_COMMAND}")

macro(prevent_in_source_builds)
  if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "
ERROR: CMake generation is not allowed within the source directory!
You *MUST* remove the CMakeCache.txt file and try again from another
directory..")
  endif()
endmacro()


# see https://www.virag.si/2015/07/use-ccache-with-cmake-for-faster-compilation/
# TODO: Xcode support https://stackoverflow.com/a/36515503
# TODO: CMAKE_XCODE_ATTRIBUTE_CC https://crascit.com/2016/04/09/using-ccache-with-cmake/
macro(add_ccache)
  if(USE_CCACHE)
    find_program(CCACHE_PROGRAM ccache)
    #
    if(CCACHE_PROGRAM)
      set_property(GLOBAL PROPERTY
        RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
      set_property(GLOBAL PROPERTY
        RULE_LAUNCH_LINK "${CCACHE_PROGRAM}")
      message(STATUS "Using CCACHE. To see if ccache is really working, you can use ccache -s command, which will display ccache statistics.")
      message(STATUS "CCACHE: On second and all subsequent compilations the �cache hit� values should increase and thus show that ccache is working.")
    else()
      message(WARNING "CCACHE not found, see https://askubuntu.com/a/470636 (also note /usr/sbin/update-ccache-symlinks).")
    endif()
  else(USE_CCACHE)
    message(WARNING "CCACHE disabled.")
  endif(USE_CCACHE)
endmacro()

function(target_ccache_summary TARGET)
    if(USE_CCACHE AND CCACHE_PROGRAM)
        message("cmake summary: add_custom_target: ccache -s")
        # NOTE: clean old build dirs to get fresh ccache summary
        add_custom_target(ccache_stats ALL
            COMMAND ${CCACHE_PROGRAM} -s
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            COMMENT "!!!!!!!!!!!!!!!!!!!! getting ccache stats !!!!!!!!!!!!!!!!!!!!!!!!!!"
            DEPENDS ${TARGET}
        )
    endif()
endfunction()

# see https://cristianadam.eu/20170709/speeding-up-cmake/
# TODO: use with gold: "--threads", "--thread-count COUNT", "--preread-archive-symbols"
# NOTE: gold not threaded by default, configure with "--enable-threads"
# NOTE: lld threaded by default, may be faster than gold
macro(add_gold_linker)
  if(USE_LD_GOLD AND "${CMAKE_C_COMPILER_ID}" STREQUAL "GNU")
    execute_process(COMMAND ${CMAKE_C_COMPILER} -fuse-ld=gold -Wl,--version OUTPUT_VARIABLE stdout ERROR_QUIET)
    if("${stdout}" MATCHES "GNU gold")
      set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fuse-ld=gold")
      set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fuse-ld=gold")
      message(STATUS "Using GNU gold linker.")
    else()
      message(WARNING "GNU gold linker isn't available, using the default system linker.")
      message(WARNING "To install gold linker: sudo apt-get install binutils-gold")
    endif()
  else()
    message(WARNING "GNU gold linker disabled.")
  endif()
endmacro()

macro(add_compile_options target)
  if(ENABLE_CMAKE_COMPILE_WARNINGS)
    set(ENABLED_WARNINGS
      -Wall
      -Wextra
      "$<$<CONFIG:RELEASE>:-Werror>"
      "$<$<CONFIG:RELEASE>:-Wpedantic>"
    )
  else(ENABLE_CMAKE_COMPILE_WARNINGS)
    if(MSVC) 
      # TODO
    else()
      list(APPEND ENABLED_WARNINGS
        -Wno-error # clang
      )
    endif()
  endif(ENABLE_CMAKE_COMPILE_WARNINGS)

  # @see https://stackoverflow.com/a/46132078/10904212
  message( "CMAKE_CXX_COMPILER_ID=${CMAKE_CXX_COMPILER_ID}" )
  if( CMAKE_COMPILER_IS_GNUCXX OR MINGW )
    target_compile_options( ${target} PRIVATE
      -Wno-unused-variable
      -Wno-unused-parameter
      -Wno-deprecated
      -Wno-reorder
      -fdiagnostics-color=always
      "$<$<CONFIG:RELEASE>:-O3>"
      "$<$<CONFIG:DEBUG>:-g>"
      "$<$<CONFIG:DEBUG>:-fno-omit-frame-pointer>" # https://github.com/google/sanitizers/wiki/AddressSanitizer#using-addresssanitizer
      )
    message( "detected compiler: UNIX OR MINGW" )
  elseif("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang|AppleClang" )
    target_compile_options( ${target} PRIVATE
      -Wall
      -Wextra
      -Wthread-safety
      -Wimplicit-fallthrough
      -Wheader-hygiene
      -Wstring-conversion
      -Wtautological-overlap-compare
      "$<$<CONFIG:RELEASE>:-Werror>"
      -Wno-unused-variable
      -Wno-unused-parameter
      -Wno-deprecated
      -Wno-reorder
      "$<$<CONFIG:RELEASE>:-pedantic>"
      "$<$<CONFIG:RELEASE>:-O3>"
      )
    message( "detected compiler: Clang" )
  elseif( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
    # TODO
    #target_compile_options( ${PROJECT_NAME}_lib PRIVATE /W4 /WX )
  else()
    message( FATAL_ERROR "unsupported compiler" )
  endif()
endmacro()

macro(add_test_command_targets target)
  # Run tests with print on failure
  add_custom_target(${target}_check
      ${CMAKE_COMMAND} -E echo CWD=${CMAKE_BINARY_DIR}
      COMMAND ${CMAKE_COMMAND} -E echo CMD=${CMAKE_CTEST_COMMAND} -C $<CONFIG>
      COMMAND ${CMAKE_COMMAND} -E echo ----------------------------------
      COMMAND ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 ${CMAKE_CTEST_COMMAND}
        --repeat-until-fail 5 # Require each test to run <n> times without failing in order to pass.
        --build-target ${target}
        --target ${target}
        --config $<CONFIG>
      COMMAND ${CMAKE_COMMAND} -E echo ----------------------------------
      DEPENDS ${target}
      #DEPENDS ${target} boostander
  )

  # Run tests with verbose output
  add_custom_target(${target}_check_verbose
      COMMAND ${CMAKE_COMMAND} -E echo ----------------------------------
      COMMAND ${CMAKE_CTEST_COMMAND}
          --repeat-until-fail 5 # Require each test to run <n> times without failing in order to pass.
          --build-target ${target}
          --force-new-ctest-process
          --verbose
          --output-on-failure
          --target ${target}
          --config $<CONFIG>
          --parallel ${NUM_PROCESSORS}
          #--test-action test
      COMMAND ${CMAKE_COMMAND} -E echo ----------------------------------
      DEPENDS ${target}
      #DEPENDS ${target} boostander
  )

  list(APPEND ALL_TESTS_LIST ${target})
  list(APPEND ALL_TESTS_LIST_NORMAL ${target}_check)
  list(APPEND ALL_TESTS_LIST_VERBOSE ${target}_check_verbose)

endmacro()

macro(print_cmake_system_info)
  message(STATUS "cmake: CC:  " $ENV{CC})
  message(STATUS "cmake: CXX: " $ENV{CXX})
  message(STATUS "cmake: CXXFLAGS: " $ENV{CXXFLAGS})
  message(STATUS "cmake: CMAKE_CXX_COMPILER: " ${CMAKE_CXX_COMPILER})
  message(STATUS "cmake: CMAKE_CXX_FLAGS: " ${CMAKE_CXX_FLAGS})
  message(STATUS "Building ${PROJECT_NAME} project v${${PROJECT_NAME}_VERSION_MAJOR}.${${PROJECT_NAME}_VERSION_MINOR}.${${PROJECT_NAME}_VERSION_PATCH}")
  message(STATUS "System: " ${CMAKE_SYSTEM_NAME} " " ${CMAKE_SYSTEM_VERSION})
  message(STATUS "Processor: " ${CMAKE_HOST_SYSTEM_PROCESSOR})
  message(STATUS "CMake generates: " ${CMAKE_GENERATOR})
  message(STATUS "Build type:" ${CMAKE_BUILD_TYPE})

  message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
  message(STATUS "CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
  message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
  message(STATUS "CMAKE_STATIC_LIBRARY_SUFFIX: ${CMAKE_STATIC_LIBRARY_SUFFIX}")
endmacro(print_cmake_system_info)

macro(check_supported_os)
  if (NOT WIN32 AND NOT CMAKE_HOST_WIN32
      AND NOT EMSCRIPTEN
      AND NOT UNIX AND NOT CMAKE_HOST_UNIX
      AND NOT APPLE)
    message(FATAL_ERROR "Unsupported operating system.")
  endif ()
endmacro(check_supported_os)

# Function to download zip files, then extracting them and then deleting them
function(download_zip FILE_NAME URL DOWNLOAD_PATH CHECKSUM)
  set(FULL_FILE_PATH "${DOWNLOAD_PATH}/${FILE_NAME}")
  if (NOT EXISTS ${FULL_FILE_PATH})
    message(STATUS "Downloading ${URL}...")
    file(DOWNLOAD "${URL}/${FILE_NAME}" "${DOWNLOAD_PATH}/${FILE_NAME}"
        EXPECTED_MD5 ${CHECKSUM})
    message(STATUS "Extracting ${FULL_FILE_PATH}...")
    execute_process(COMMAND ${CMAKE_COMMAND} -E tar xf ${FILE_NAME} WORKING_DIRECTORY ${DOWNLOAD_PATH})
    else (NOT EXISTS ${FULL_FILE_PATH})
      message(STATUS "${FILE_NAME} already exists.")
  endif (NOT EXISTS ${FULL_FILE_PATH})
endfunction(download_zip)

# add item at the beginning of the list
function(prepend var prefix)
   set(listVar "")
   list(APPEND listVar "${prefix}")
   list(APPEND listVar ${${var}})
   list(REMOVE_DUPLICATES listVar)
   set(${var} "${listVar}" PARENT_SCOPE)
endfunction(prepend)

macro(set_project_version vmajor vminor vpatch)
  # The version number.
  set (${PROJECT_NAME}_VERSION_MAJOR vmajor)
  set (${PROJECT_NAME}_VERSION_MINOR vminor)
  set (${PROJECT_NAME}_VERSION_PATCH vpatch)
  set (${PROJECT_NAME}_VERSION "${vmajor}.${vminor}.${vpatch}")
endmacro(set_project_version)

macro(set_cmake_module_paths target module_paths)
  list(APPEND CMAKE_MODULE_PATH "${module_paths}")
  list(REMOVE_DUPLICATES CMAKE_MODULE_PATH)
  set( ${target}_CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} CACHE INTERNAL "${target}_CMAKE_MODULE_PATH" )
  message("CMAKE_MODULE_PATH=${CMAKE_MODULE_PATH}")
endmacro(set_cmake_module_paths)

# Get names of subdirectories in directory
macro(subdirlist result curdir)
  FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
  SET(dirlist "")
  foreach (child ${children})
    if (IS_DIRECTORY ${curdir}/${child} AND NOT ${child} STREQUAL "CMakeFiles")
      list(APPEND dirlist ${child})
    endif()
  endforeach ()
  set(${result} ${dirlist})
endmacro()

# Performs searching and adding of files to source list
# Appends source files to ${${PROJECT_NAME}_SRCS}
# Appends header files to ${${PROJECT_NAME}_HEADERS}
# Appends dir (argument) to ${${PROJECT_NAME}_DIRS}
# Appends extra_patterns (argument) to ${${PROJECT_NAME}_EXTRA}
# Example of extra_patterns: "cmake/*.cmake;cmake/*.imp"
macro(addFolder dir prefix extra_patterns)
  if (NOT EXISTS "${dir}")
    message(FATAL_ERROR "${dir} doesn`t exist!")
  endif()

  set(src_files "")
  set(header_files "")
  set(globType GLOB)
  if(${ARGC} GREATER 1 AND "${ARGV1}" STREQUAL "RECURSIVE")
      set(globType GLOB_RECURSE)
  endif()
  # Note: Certain IDEs will only display files that belong to a target, so add .h files too.
  file(${globType} src_files ABSOLUTE
      ${dir}/*.c
      ${dir}/*.cc
      ${dir}/*.cpp
      ${dir}/*.asm
      ${extra_patterns}
  )
  file(${globType} header_files ABSOLUTE
      ${dir}/*.h
      ${dir}/*.hpp
      ${extra_patterns}
  )
  file(${globType} extra_files ABSOLUTE
      ${extra_patterns}
  )
  LIST(APPEND ${prefix}_SRCS ${src_files})
  LIST(APPEND ${prefix}_HEADERS ${header_files})
  LIST(APPEND ${prefix}_EXTRA ${extra_files})
  LIST(APPEND ${prefix}_DIRS ${dir})
endmacro()

# Performs searching recursively and adding of files to source list
macro(addFolderRecursive dir prefix)
  addFolder("${dir}" "${prefix}" "" "RECURSIVE")
endmacro()

# This macro lets you find executable programs on the host system
# Usefull for emscripten
macro(find_host_package)
  set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
  set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER)
  set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER)
  find_package(${ARGN})
  set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM BOTH)
  set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY BOTH)
  set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE BOTH)
endmacro(find_host_package)

# Useful cause some systems don`t allow easy package finding
macro(findPackageCrossPlatform)
  if(EMSCRIPTEN)
      find_host_package(${ARGN})
  elseif(ANDROID)
      find_host_package(${ARGN})
  elseif(CMAKE_HOST_WIN32)
      find_package(${ARGN})
  elseif(CMAKE_HOST_UNIX)
    find_package(${ARGN})
  else()
      message( "Unknown platform, using find_package" )
      find_package(${ARGN})
  endif()
endmacro(findPackageCrossPlatform)

# Group source files in folders (IDE filters)
function(assign_source_group)
  foreach(_source IN ITEMS ${ARGN})
      if (IS_ABSOLUTE "${_source}")
          file(RELATIVE_PATH _source_rel "${CMAKE_CURRENT_SOURCE_DIR}" "${_source}")
      else()
          set(source_rel "${_source}")
      endif()
      get_filename_component(_source_path "${_source_rel}" PATH)
      string(REPLACE "../../" "" _source_path "${_source_path}")
      string(REPLACE "/" "\\" _source_path_msvc "${_source_path}")
      source_group("${_source_path_msvc}" FILES "${_source}")
  endforeach()
endfunction(assign_source_group)

macro(add_iwyu target_name)
  message("iwyu mapping_file at ${IWYU_IMP}")

  find_program(iwyu_path
    NAMES include-what-you-use iwyu
    PATHS
    ${CMAKE_SOURCE_DIR}/submodules/build-iwyu
    ${CMAKE_SOURCE_DIR}/include-what-you-use/build
    ~/Library/Frameworks
    /Library/Frameworks
    /sw # Fink
    /opt/local # DarwinPorts
    /usr/local/include
    /usr/local
    /usr
    /usr/bin/
    /opt/csw # Blastwave
    /opt)
  if(NOT iwyu_path)
    message(WARNING "Could not find the program include-what-you-use")
  else()
  #message(FATAL_ERROR ${CMAKE_SOURCE_DIR}/src)
    # see https://github.com/aferrero2707/PhotoFlow/blob/master/src/external/rawspeed/cmake/iwyu.cmake#L7
    set(iwyu_path_and_options
        ${iwyu_path}
#        -Xiwyu --cwd=${CMAKE_SOURCE_DIR}/src
#        -Xiwyu --basedir=${CMAKE_SOURCE_DIR}/src
#        -Xiwyu --suggest-shortest-paths
#        -Xiwyu --separate_project_includes
#       -Xiwyu --transitive_includes_only
        -Xiwyu --no_comments
        -Xiwyu --mapping_file=${IWYU_IMP}
        -Xiwyu --max_line_length=120
        -Xiwyu --check_also=${CMAKE_SOURCE_DIR}/src/*
        -Xiwyu --check_also=${CMAKE_SOURCE_DIR}/src/*/*
        -Xiwyu --check_also=${CMAKE_SOURCE_DIR}/src/*/*/*
        -Xiwyu --check_also=${CMAKE_SOURCE_DIR}/src/*/*/*/*)
    #set_property(TARGET ${target_name} PROPERTY C_INCLUDE_WHAT_YOU_USE ${iwyu_path_and_options})
    set_property(TARGET ${target_name} PROPERTY CXX_INCLUDE_WHAT_YOU_USE ${iwyu_path_and_options})
    message("iwyu FOUND at ${iwyu_path}")
  endif()

  # run with --target 'iwyu'
  #find_program(iwyu_tool_path NAMES iwyu_tool.py)
  #if (iwyu_tool_path AND PYTHONINTERP_FOUND)
  #  add_custom_target(iwyu
  #    ALL      # Remove ALL if you don't iwyu to be run by default.
  #    COMMAND "${PYTHON_EXECUTABLE}" "${iwyu_tool_path}" -p "${CMAKE_BINARY_DIR}" -- --mapping_file=${IWYU_IMP}
  #    COMMENT "Running include-what-you-use tool"
  #    VERBATIM
  #  )
  #endif()
endmacro(add_iwyu)
