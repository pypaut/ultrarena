cmake_minimum_required(VERSION 3.0)
project(UltrArena LANGUAGES C)

include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/includes
    )

add_compile_options(-Wall -Werror -Wextra -pedantic -std=c99 -g)
add_compile_options(-fsanitize=address)

add_executable(ultrarena src/main.c
    )


target_link_libraries(ultrarena PRIVATE -lasan)
