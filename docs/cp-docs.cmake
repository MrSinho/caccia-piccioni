cmake_minimum_required(VERSION 3.13)
add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)



function(build_cp_docs)



if (NOT DEFINED CP_BINARIES_DIR)
message(FATAL_ERROR "caccia piccioni cmake error: missing CP_BINARIES_DIR")
endif()

if (NOT DEFINED CP_ROOT_DIR)
message(FATAL_ERROR "caccia piccioni cmake error: missing CP_ROOT_DIR")
endif()




find_package(Doxygen)


if (DOXYGEN_FOUND)

    set(CP_DOXYFILE_SRC ${CP_ROOT_DIR}/docs/Doxyfile.in)
    set(CP_DOXYFILE_DST ${CP_ROOT_DIR}/docs/Doxyfile)

    message(STATUS "Configuring " ${CP_DOXYFILE_DST} " from " ${CP_DOXYFILE_SRC})

    configure_file(
        ${CP_DOXYFILE_SRC} 
        ${CP_DOXYFILE_DST}
    )

    message(STATUS "Creating custom docs command: " ${DOXYGEN_EXECUTABLE} " " ${CP_DOXYFILE_DST})

    add_custom_target(docs-cp
        COMMAND ${DOXYGEN_EXECUTABLE} ${CP_DOXYFILE_DST}
        WORKING_DIRECTORY ${CP_ROOT_DIR}
        COMMENT "Generating HTML documentation"
        VERBATIM
    )

endif(DOXYGEN_FOUND)

endfunction()