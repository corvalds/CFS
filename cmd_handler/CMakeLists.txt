cmake_minimum_required(VERSION 3.9)

add_subdirectory(handler)

add_library(Cmd_Handler cmd_parsing.c)
target_link_libraries(Cmd_Handler Handler)