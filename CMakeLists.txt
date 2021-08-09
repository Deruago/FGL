cmake_minimum_required(VERSION 3.16)

project(fgl_LanguageProject
                      DESCRIPTION "Project for the language(s): fgl"
                      LANGUAGES CXX)

find_package(Deamer REQUIRED)

add_subdirectory(CompilerGenerator)
add_subdirectory(fgl)
