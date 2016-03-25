/*
 * File name: strcpy.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

char *strcpy(char *destination, char *source) {
    char *src = source;
    char *dst = destination;

    size_t i = 0;
    while((dst[i] = src[i]) != '\0') {
        i++;
    }

    return destination;
}
