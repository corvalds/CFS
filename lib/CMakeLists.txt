cmake_minimum_required(VERSION 3.9)

aux_source_directory(./String LIB_DIR_SRC)

add_library(TopLib ${LIB_DIR_SRC})