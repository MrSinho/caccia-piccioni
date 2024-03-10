#ifndef CP_PICO_H
#define CP_PICO_H



/**
* @file cp-pico.h
* @brief cp-pico.h contains all the required declarations and the documentation
* to build the Pico Host Extender application (pico side).
*
* @author MrSinho <https://github.com/mrsinho>
*/



#ifdef __cplusplus
extern "C" {
#endif//__cplusplus



#include <stdio.h>

#include <pico/stdio.h>
#include <pico/stdlib.h>
#include <pico/time.h>

#include <stdint.h>



#ifndef NULL
#define NULL ((void*)0)
#endif//NULL



#ifdef __cplusplus
}
#endif//_cplusplus

#endif//CP_PICO_H