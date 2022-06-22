cmake_minimum_required(VERSION 3.16)

project(fgl_LanguageProject
                      DESCRIPTION "Project for the language(s): fgl"
                      LANGUAGES CXX)

option(fgl_ENABLE_COMPILER_GENERATOR "Enable Compiler Generation" OFF)
if (fgl_ENABLE_COMPILER_GENERATOR)
	find_package(Deamer REQUIRED)
	add_subdirectory(CompilerGenerator)
endif()

option(fgl_ENABLE_LANGUAGE_BUILD "Enable Language CMake Build." ON)
if (fgl_ENABLE_LANGUAGE_BUILD)
	add_subdirectory(fgl)

endif()
