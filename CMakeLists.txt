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
    set(CMAKE_CXX_FLAGS "-o test.html -O3 -s EXPORT_ES6=1 --std=c++17 -s WASM=1 -s USE_SDL=2 -s FULL_ES2=1 -s ALLOW_MEMORY_GROWTH=1 -s USE_SDL_IMAGE=2 -s USE_SDL_TTF=2 -s SDL2_IMAGE_FORMATS=\"['png']\" -s EXPORTED_FUNCTIONS=\"['_main']\" -std=c++17 -s NO_EXIT_RUNTIME=1")

    #set(EM_TARGET_JS ${PROJECT_NAME}.js)
    #configure_file(shell.html index.html @ONLY)
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
  target_include_directories(${PROJECT_NAME} PRIVATE
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
