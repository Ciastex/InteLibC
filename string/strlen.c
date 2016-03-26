/*
 * File name: strlen.c
 * Description: Part of the string interface implementation.
 *
 * * * */
#include <stddef.h>

size_t strlen(const char *string) {
    const char *tmp;
    for (tmp = string; *tmp; ++tmp);

    return tmp - string;
}
