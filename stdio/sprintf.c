/*
 * File name: sprintf.c
 * Description: Part of the standard input/output interface implementation.
 *  
 * * * * */
#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

size_t sprintf(char *buffer, const char *string, ...) {
    char *output = 0;
    uint32_t length = 0;

    va_list args;
    va_start(args, string);

    length = vsprintf(output, string, args);

    va_end(args);
    return length;
}
