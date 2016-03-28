/*
 * File name: memmove.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>
#include <string.h>

void *memmove(void *destination, const void *source, size_t length) {
    unsigned char tmp[length];

    memcpy(tmp, source, length);
    memcpy(destination, tmp, length);

    return destination;
}

