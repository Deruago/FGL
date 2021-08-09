# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 
#
# This file is part of the directory: lib

file(GLOB_RECURSE SOURCE_LIST "${fgl_SOURCE_DIR}/lib/*.cpp")

add_library(fgl_static_library STATIC ${SOURCE_LIST})

target_include_directories(fgl_static_library PUBLIC "${fgl_SOURCE_DIR}/extern" "${fgl_SOURCE_DIR}/include")
target_compile_features(fgl_static_library PUBLIC cxx_std_17)
set_target_properties(fgl_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(fgl_static_library PUBLIC fgl_external_libraries)

add_library(fgl_shared_library SHARED ${SOURCE_LIST})

target_include_directories(fgl_shared_library PUBLIC "${fgl_SOURCE_DIR}/extern" "${fgl_SOURCE_DIR}/include")
target_compile_features(fgl_shared_library PUBLIC cxx_std_17)
set_target_properties(fgl_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(fgl_shared_library PUBLIC fgl_external_libraries)

add_subdirectory(Ast)
add_subdirectory(Flex)
add_subdirectory(Bison)
