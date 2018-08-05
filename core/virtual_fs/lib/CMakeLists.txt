cmake_minimum_required(VERSION 3.9)

aux_source_directory(. VFS_LIB_DIR)

add_library(VirtualFSLib ${VFS_LIB_DIR})