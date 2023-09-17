#ifndef _AT_printf
#define _AT_printf

#include <stdio.h>
#include <stdarg.h>

/**
 * struct at - struct pa
 * @at:the format
 * @fu:the functions
 *
*/
struct at
{
        char *at
        int (*fu)(va_list, char, int , int)
};
/**
 * typedef struct at at_t - struct ap
 * @at:the format
 * @at_t:the functions
*/
typedef struct at at_t
int _printf(const char *format, ...);
int print_char(va_list argu)
int print_string(va_list argu)
int print_precent(va_list argu)
int print_int(va_list argu)

#endif
