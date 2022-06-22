# Alias Target
add_library(Deamer::fgl ALIAS fgl)

# Install Targets

install(TARGETS fgl
    EXPORT fgl_Exports
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}/fgl"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}/fgl"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}/fgl"
    )

export(TARGETS
	fgl
    NAMESPACE Deamer::
	FILE "${CMAKE_CURRENT_BINARY_DIR}/fgl_Exports.cmake"
)

install(EXPORT
	fgl_Exports
    NAMESPACE Deamer::
	DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/fgl"
)

# Install Headers

install(DIRECTORY ${fgl_SOURCE_DIR}/include/Deamer
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING
    PATTERN "*.h"
    PATTERN "LICENSE"
    )

install(DIRECTORY ${fgl_SOURCE_DIR}/include/fgl
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
    FILES_MATCHING
    PATTERN "*.h"
    PATTERN "LICENSE"
    )