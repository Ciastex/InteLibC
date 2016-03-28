/*
 * File name: memcmp.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stdint.h>
#include <stddef.h>

int32_t memcmp(const void* a, const void* b, size_t length) {
    const unsigned char *tmp_a = a;
    const unsigned char *tmp_b = b;

    while(length--) {
        if(*tmp_a != *tmp_b) {
            return *tmp_a - *tmp_b;
        } else {
            tmp_a++;
            tmp_b++;
        }
    }

    return 0;
}

