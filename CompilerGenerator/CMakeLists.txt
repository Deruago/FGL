cmake_minimum_required(VERSION 3.16)

project(fgl_CompilerGenerator
                      DESCRIPTION "Compiler/Ecosystem generator for language(s): fgl. This CompilerGenerator project uses Deamer CC for the generation, and DLDL to generate the definitions."
                      LANGUAGES CXX)

find_package(Deamer REQUIRED)

file(GLOB_RECURSE SOURCE_LIST "${fgl_CompilerGenerator_SOURCE_DIR}/lib/*.cpp")

add_library(fgl_CompilerGenerator_implementation_detail STATIC)
target_sources(fgl_CompilerGenerator_implementation_detail PRIVATE ${SOURCE_LIST})

target_include_directories(fgl_CompilerGenerator_implementation_detail PUBLIC "${fgl_CompilerGenerator_SOURCE_DIR}/include")
target_link_libraries(fgl_CompilerGenerator_implementation_detail PUBLIC Deamer::Deamer)
target_compile_features(fgl_CompilerGenerator_implementation_detail PUBLIC cxx_std_17)
set_target_properties(fgl_CompilerGenerator_implementation_detail PROPERTIES LINKER_LANGUAGE CXX)

add_executable(fgl_CompilerGenerator_Main)
target_sources(fgl_CompilerGenerator_Main PRIVATE "${fgl_CompilerGenerator_SOURCE_DIR}/main.cpp")
target_link_libraries(fgl_CompilerGenerator_Main PRIVATE fgl_CompilerGenerator_implementation_detail)
