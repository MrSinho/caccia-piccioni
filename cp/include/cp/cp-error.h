#ifndef CP_ERROR_H
#define CP_ERROR_H



/**
* @file cp-error.h
* @brief cp-error.h contains all the macros and functions required 
* to manage errors using the Pico Host Extender api.
*
* @author MrSinho <https://github.com/mrsinho>
*/



#ifdef __cplusplus
extern "C" {
#endif//__cplusplus



/**
* @brief Error handling macro. Prints out an error message and executes a failure expression 
* when the condition is satisfied
* 
* @param condition          automatically casted to an int type.
* @param error_msg          string to print out when the condition is true.
* @param failure_expression piece of code to run when the condition is true.
*/
#define cpError(condition, error_msg, failure_expression)\
    if ((int)(condition)) {\
        printf("cp error: %s\n", error_msg); failure_expression;\
    }



/**
* @brief Error handling macro. Executes a failure expression
* when the condition is satisfied
*
* @param condition          automatically casted to an int type.
* @param failure_expression piece of code to run when the condition is true.
*/
#define cpSilentError(condition, failure_expression)\
    if ((int)(condition)) {\
        failure_expression;\
    }



#ifdef __cplusplus
}
#endif//_cplusplus

#endif//CP_ERROR_H