cmake_minimum_required(VERSION 3.18)

project(fgl)

find_package(Deamer_External REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

add_executable(fgltest "main.cpp")
target_link_libraries(fgltest fgl_static_library)