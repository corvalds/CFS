cmake_minimum_required(VERSION 3.9)

aux_source_directory(./ls_handler HANDLER_DIR_SRC)
aux_source_directory(./exit_handler HANDLER_DIR_SRC)
aux_source_directory(./create_handler HANDLER_DIR_SRC)

add_library(Handler ${HANDLER_DIR_SRC})
target_link_libraries(Handler VirtualFS)