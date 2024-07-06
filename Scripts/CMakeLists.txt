cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

set(PROJECT_NAME Scripts)
set(PROJECT_VERSION 1.0.0)

project(${PROJECT_NAME} VERSION ${PROJECT_VERSION} DESCRIPTION "My Library" LANGUAGES C CXX)

set(MY_LIB_HEADERS
        public/mylib.hh
)

set(PUBLIC_HEADERS
        public/mylib.hh
)

set(MY_LIB_SOURCES
        private/mylib.cpp
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(${PROJECT_NAME} SHARED ${MY_LIB_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
        PUBLIC_HEADER ${PUBLIC_HEADERS}
        RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
        VERSION ${PROJECT_VERSION})

include(GNUInstallDirs)

install(TARGETS ${PROJECT_NAME}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

message(STATUS "Lib = Core")
include_directories(${CMAKE_SOURCE_DIR}/Core/public)
target_link_libraries(${PROJECT_NAME} Core)