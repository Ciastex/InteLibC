/*
 * File name: memchr.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>
#include <string.h>

void *memchr(const void *source, int32_t target, size_t length) {
    unsigned char *tmp_src = (unsigned char *)source;

    while(length--) {
        if(*tmp_src != (unsigned char)target) {
            tmp_src++;
        } else {
            return tmp_src;
        }
    }
    return NULL;
}

