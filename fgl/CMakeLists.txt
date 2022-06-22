cmake_minimum_required(VERSION 3.16)

project(fgl VERSION 1.0.0)

include(GNUInstallDirs)

find_package(Deamer_External REQUIRED)
find_package(Deamer_Algorithm REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

option(TESTS "Enables all the tests" ON)
if(TESTS)
	message(STATUS "Tests are now available.")
	add_subdirectory(tests)
endif()

option(APPLICATIONS "Enables all the applications" ON)
if(APPLICATIONS)
	message(STATUS "Applications are now available.")
	add_subdirectory(sources)
endif()

add_executable(FGL)
target_sources(FGL PRIVATE "main.cpp")
target_link_libraries(FGL PRIVATE fgl)

install(TARGETS FGL)

include(CMakePackageConfigHelpers)

configure_package_config_file(${fgl_SOURCE_DIR}/cmake/fglConfig.cmake.in
  "${fgl_BINARY_DIR}/fglConfig.cmake"
  INSTALL_DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/fgl
)

write_basic_package_version_file(
	"fglConfigVersion.cmake"
	VERSION ${PROJECT_VERSION}
	COMPATIBILITY SameMajorVersion
)

install(FILES
	${fgl_BINARY_DIR}/fglConfig.cmake
	${fgl_BINARY_DIR}/fglConfigVersion.cmake
	DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/fgl
)