cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(PROJECT_NAME "CPP Scripting Test")
set(PROJECT_VERSION 1.0.0)

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} LANGUAGES CXX)

include(${CMAKE_SOURCE_DIR}/cmake/platform_defines.cmake)

set(BIN_DIR "${CMAKE_BINARY_DIR}/bin/${PLATFORM_DIR}/${BUILD_TYPE_DIR}")

add_subdirectory(Core)
add_subdirectory(Scripts)
add_subdirectory(App)