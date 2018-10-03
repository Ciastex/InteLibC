/*
 * File name: printf.c
 * Description: Part of the standard input/output interface implementation.
 *
 * * * */
#include <stddef.h>
#include <stdint.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

extern void tty_write(uint8_t terminal_index, const char *string);

size_t printf(const char *str, ...) {
    char *output = 0;
    uint32_t length = 0;

    va_list args;
    va_start(args, str);

    length = vsprintf(output, str, args);

    va_end(args);
    tty_write(-1, (const char *)output);

    return length;
}
