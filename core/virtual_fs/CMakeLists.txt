cmake_minimum_required(VERSION 3.9)

add_subdirectory(lib)

add_library(VirtualFS vfs.c)
target_link_libraries(VirtualFS VirtualFSLib)