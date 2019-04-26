cmake_minimum_required(VERSION 3.5)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_CURRENT_BINARY_DIR)
    message(FATAL_ERROR "You must set your binary directory different from your source")
endif()

# this sets the paths that cmake will use to locate libs (via the FindXXX.cmake or XXConfig.cmake scripts)
LIST(APPEND CMAKE_PREFIX_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/SDL2 )
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/sdl2)

set (PROJECT_NAME "projmake")

project(${PROJECT_NAME} CXX)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_FLAGS "-Wall -std=c++11")

set(PROJECT_SRC main.cpp)

add_executable(${PROJECT_NAME}
  ${PROJECT_SRC}
)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)

if(EMSCRIPTEN)
    set(HTML_TEMPLATE "assets/index.html")

    #message("using template " ${HTML_TEMPLATE})

    #set(TEMPLATE_OPTION "--shell-file ${HTML_TEMPLATE}")

    set(CMAKE_CXX_FLAGS "--emrun -O3 -std=c++17")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s WASM=1")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s GL_UNSAFE_OPTS=0 -s GL_ASSERTIONS=1")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ASSERTIONS=1")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s USE_SDL=2")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s FULL_ES2=1")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s ALLOW_MEMORY_GROWTH=1")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -s NO_EXIT_RUNTIME=1")

    set(EM_TARGET_JS ${PROJECT_NAME}.asm.js)
    configure_file(${HTML_TEMPLATE} index.html @ONLY)

  if (WASM)
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES SUFFIX .html)
  else()
    SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES SUFFIX .asm.js)
  endif()
else()
  ### Find Libraries
  include(FindOpenGL)
  find_package(OpenGL REQUIRED)

  #find_package(OpenGLES2 REQUIRED)

  #find_package( ZLIB REQUIRED )

  #find_package( PNG REQUIRED )

  include(FindSDL2)
  find_package(SDL2 REQUIRED)
  #find_package(SDL2_net REQUIRED)

  include(FindGLEW)
message(${GLEW_INCLUDE_PATH})
  target_include_directories(${PROJECT_NAME} SYSTEM INTERFACE
    ${GLEW_INCLUDE_PATH}
    ${OPENGL_INCLUDE_DIR}
    ${SDL2_INCLUDE_DIRS}
  )
  target_link_libraries(${PROJECT_NAME}
    ${OPENGL_LIBRARIES}
    ${GLEW_LIBRARY}
    SDL2::Main
  )
  target_compile_definitions(${PROJECT_NAME} PRIVATE
    GLEW_NO_GLU
  )
endif()
