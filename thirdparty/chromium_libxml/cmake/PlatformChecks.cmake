include_guard( DIRECTORY )

restrict_supported_platforms(LINUX EMSCRIPTEN WINDOWS)

#if(TARGET_EMSCRIPTEN)
#  # from https://github.com/emscripten-core/emscripten/blob/0a1d02df9f19eb04a113e3eec8567d8a4e1191de/emcc.py#L1178
#  set(COMMON_FLAGS "${COMMON_FLAGS} -D__EMSCRIPTEN__=1")
#  # The preprocessor define EMSCRIPTEN is deprecated. Don't pass it to code
#  # in strict mode. Code should use the define __EMSCRIPTEN__ instead.
#  set(COMMON_FLAGS "${COMMON_FLAGS} -DEMSCRIPTEN=1")
#  #
#  # see https://github.com/emscripten-core/emscripten/issues/6034
#  set(COMMON_FLAGS "${COMMON_FLAGS} -D__GNUC_GNU_INLINE__=1")
#  set(COMMON_FLAGS "${COMMON_FLAGS} -D__GNUC_MINOR__=2")
#  set(COMMON_FLAGS "${COMMON_FLAGS} -D__GNUC_PATCHLEVEL__=1")
#  set(COMMON_FLAGS "${COMMON_FLAGS} -D____GNUC__=4")
#  #
#  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${COMMON_FLAGS}")
#  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${COMMON_FLAGS}")
#endif(TARGET_EMSCRIPTEN)
