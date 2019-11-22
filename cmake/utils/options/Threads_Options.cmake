include_guard( DIRECTORY )

macro(find_threads)
  if(TARGET_EMSCRIPTEN)
    # skip
  elseif(TARGET_LINUX OR TARGET_WINDOWS)
    find_package( Threads REQUIRED )
    message(STATUS "CMAKE_THREAD_LIBS_INIT = ${CMAKE_THREAD_LIBS_INIT}")
    set(PTHREADS_LIBS ${CMAKE_THREAD_LIBS_INIT}) # note: not set for emscripten
  else()
    message(FATAL_ERROR "platform not supported")
  endif()
endmacro(find_threads)
