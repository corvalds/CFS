cmake_minimum_required(VERSION 3.9)
project(CFS C)

set(CMAKE_C_STANDARD 99)
set(PROJECT_BINARY_DIR C:/Users/CZZ/CLionProjects/CFS)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

include_directories(.)
add_subdirectory(cmd_handler)
add_subdirectory(lib)

add_executable(CFS main.c)
target_link_libraries(CFS Cmd_Handler)
target_link_libraries(CFS TopLib)