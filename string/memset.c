/*
 * File name: memset.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

void *memset(void *buffer, int value, size_t length) {
    char *buf = (char *)buffer;

    for(size_t i = 0;  i < length; i++) {
        buf[i] = value;
    }

    return buffer;
}


