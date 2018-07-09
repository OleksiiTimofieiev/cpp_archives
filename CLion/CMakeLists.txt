cmake_minimum_required(VERSION 3.9)
project(filler)

set(CMAKE_CXX_STANDARD 11)

add_executable(filler
        includes/filler.h
        srcs/filler.c
        srcs/read_map.c
        srcs/find_move.c
        srcs/init_structs.c)

include_directories(${CMAKE_HOME_DIRECTORY}/includes)
include_directories(${CMAKE_HOME_DIRECTORY}/libft/includes)
target_link_libraries(filler ${CMAKE_SOURCE_DIR}/libft/libft.a)