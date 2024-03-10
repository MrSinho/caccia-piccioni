cmake_minimum_required(VERSION 3.13)
add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)



set(CP_ROOT_DIR     ${CMAKE_CURRENT_SOURCE_DIR})
set(CP_BINARIES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/bin)



option(CP_PICO_SDK_PATH CACHE OFF)



if(CP_PICO_SDK_PATH)
    message("caccia piccioni: using flag defined CP_PICO_SDK_PATH " ${CP_PICO_SDK_PATH})
    set(PICO_SDK_PATH ${CP_PICO_SDK_PATH})
elseif (DEFINED ENV{PICO_SDK_PATH})
    message("caccia piccioni: using environment defined PICO_SDK_PATH" $ENV{PICO_SDK_PATH})
    set(CP_PICO_SDK_PATH $ENV{PICO_SDK_PATH})
else()
    message(FATAL_ERROR "caccia piccioni cmake error: missing PICO_SDK_PATH or CP_PICO_SDK_PATH")
endif()



include(${CP_PICO_SDK_PATH}/external/pico_sdk_import.cmake)
include(${CP_ROOT_DIR}/docs/cp-docs.cmake)
include(${CP_ROOT_DIR}/cp/cp.cmake)



project(cp C CXX ASM)



function(main)
build_cp()
build_cp_docs()
endfunction()



main()