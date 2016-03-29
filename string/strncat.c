/*
 * File name: strncat.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

char *strncat(char *destination, const char *source, size_t length) {
    char *tmp_dest = destination;

    while(*destination) {
        destination++;
    }

    while(length--) {
        if(*destination++ != *source++) {
            return tmp_dest;
        }
    }
    *destination = '\0';

    return tmp_dest;
}

