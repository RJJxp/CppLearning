cmake_minimum_required(VERSION 2.8.1)
project(cpp_learn)
add_compile_options(-std=c++11)

set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR})
# set(ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/test/static_lib)
# set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/test/dynamic_lib)
# set(RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/test/bin)

add_subdirectory(src)