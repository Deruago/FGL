# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 

include(GNUInstallDirs)





add_library(fgl STATIC)
target_compile_features(fgl PUBLIC cxx_std_17)
set_target_properties(fgl PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(fgl PUBLIC 
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_link_libraries(fgl PUBLIC Deamer::External Deamer::Algorithm)


function(fgl_root_library_extend projectname extern_directory include_directory source_files)
	target_sources(fgl PRIVATE ${source_files})

	target_include_directories(fgl PUBLIC 
		$<BUILD_INTERFACE:${include_directory}>
		$<BUILD_INTERFACE:${extern_directory}>
	)
endfunction()


add_library(deamer_reserved_fgl_core_library ALIAS fgl)

function(fgl_add_external_library external_library_name source_files)
	target_sources(fgl PRIVATE ${source_files})
endfunction()




