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

extern void write(const char *string);
extern void put_char(char character);

int printf(const char* str, ...) {
    if(!str)
        return 0;

    va_list args;
    va_start(args, str);

    size_t length = 0;

    for (size_t i = 0; i < strlen(str); i++) {
        switch (str[i]) {
            case '%':
                switch (str[i + 1]) {
                    case 'b': {
                        int c = va_arg(args, int);
                        char str[32] = { 0 };
                        itoa_s(c, str, 2);
                        write(str);
                        length += strlen(str);
                        i++;
                        break;
                    }

                    case 'c': {
                        char c = va_arg(args, int);
                        put_char(c);
                        length++;
                        i++;
                        break;
                    }

                    case 'i':
                    case 'd': {
                        int c = va_arg(args, int);
                        char str[32] = { 0 };
                        itoa_s(c, str, 10);
                        write(str);
                        length += strlen(str);
                        i++;
                        break;
                    }

                    case 'x': {
                        int c = va_arg(args, int);
                        char str[32] = { 0 };
                        itoa_s(c, str, 16);
                        write(str);
                        length += strlen(str);
                        i++;
                        break;
                    }

                    case 's': {
                        const char *str = va_arg(args, char*);
                        write(str);
                        length += strlen(str);
                        i++;
                        break;
                    }

                    default:
                        va_end(args);
                        return length;
                }
                break;
            default:
                put_char(str[i]);
                length++;
                break;
        }
    }
    va_end(args);
    return length;
}
