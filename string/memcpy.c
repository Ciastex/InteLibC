/*
 * File name: memcpy.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

void *memcpy(void *destination, const void *source, size_t length) {
    char *dst = (char *)destination;
    char *src = (char *)source;

    for(size_t i = 0; i < length; i++) {
        *dst++ = *src++;
    }

    return destination;
}
