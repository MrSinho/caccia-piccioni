cmake_minimum_required(VERSION 3.13)
add_definitions(-DCMAKE_EXPORT_COMPILE_COMMANDS=ON)



function(build_cp)

pico_sdk_init()

add_executable(cp 
    ${CP_ROOT_DIR}/cp/src/cp.c
)
target_include_directories(cp PUBLIC 
    ${CP_ROOT_DIR}/cp/include
)
target_link_libraries(cp PUBLIC
    pico_stdlib
    pico_stdio 
    pico_time
)
set_target_properties(cp PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CP_ROOT_DIR}/bin/rp2040
)

pico_enable_stdio_uart(cp 0)
pico_enable_stdio_usb(cp 1)
pico_add_extra_outputs(cp)


endfunction()