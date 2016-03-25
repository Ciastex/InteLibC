/*
 * File name: strncpy.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

char *strncpy(char *destination, char *source, size_t length) {
    char *dst = destination;

    while((*dst++ = *source++)) {
        if(!length--)
            return destination;
    }

    while(length--)
        *dst++ = 0;

    return destination;
}
