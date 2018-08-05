cmake_minimum_required(VERSION 3.9)
project(CFS C)

set(CMAKE_C_STANDARD 99)
set(PROJECT_BINARY_DIR C:/Users/CZZ/CLionProjects/CFS)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

configure_file(
    "${PROJECT_BINARY_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

option(DEBUG_MODE "Switch to debug mode" ON)
option(DEBUG_CMD "Show debug info of cmd parsing module" ON)
option(DEBUG_VFS "Show debug info of virtual file system" ON)

include_directories(.)
include_directories(core)
add_subdirectory(cmd_handler)
add_subdirectory(lib)
add_subdirectory(core/virtual_fs)

add_executable(CFS main.c)
target_link_libraries(CFS Cmd_Handler TopLib)