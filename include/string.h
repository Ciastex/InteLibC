/*
 * File name: string.h
 * Description: String manipulation functions.
 *
 * * * */

#ifndef STRING_H_
#define STRING_H_

#include <stddef.h>
#include <stdint.h>

#if !defined(NULL)
    #define NULL ((void *)0)
#endif

void *memchr(const void *source, int32_t target, size_t length);
void *memcpy(void *destination, const void *source, size_t length);
void *memmove(void *destination, const void *source, size_t length);
void *memset(void *buffer, int32_t value, size_t length);
int strcmp(const char *s1, const char *s2);
char *strcat(char *destination, const char *source);
char *strcpy(char *destination, const char *source);
char *strncat(char *destination, const char *source, size_t length);
char *strncpy(char *destination, const char *source, size_t length);
size_t strlen(const char *string);

#endif /* STRING_H_ */
