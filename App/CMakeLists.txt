cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(PROJECT_NAME App)
set(PROJECT_VERSION 1.0.0)

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} DESCRIPTION "My App" LANGUAGES CXX)

set(MY_EXE_HEADERS
        
)
set(MY_EXE_SOURCES
        main.cpp
)


add_executable(${PROJECT_NAME} ${MY_EXE_HEADERS} ${MY_EXE_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_NAME "shared_library_example"
        RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}")

message(STATUS "Lib = Core")
include_directories(${CMAKE_SOURCE_DIR}/Core/public)
target_link_libraries(${PROJECT_NAME} Core)

message(STATUS "Lib = Scripts")
include_directories(${CMAKE_SOURCE_DIR}/Scripts/public)
target_link_libraries(${PROJECT_NAME} Scripts)