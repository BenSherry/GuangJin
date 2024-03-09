cmake_minimum_required(VERSION 3.18.2)
project(Match)

set(CMAKE_CXX_STANDARD 17)
aux_source_directory(. DIRECTORS)
include_directories(./ ./util)

add_subdirectory(util)
add_subdirectory(Google_tests)


add_executable(Match ${DIRECTORS})
target_link_libraries(Match util)