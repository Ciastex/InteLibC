/*
 * File name: string.h
 * Description: String manipulation functions.
 *
 * * * */

#ifndef STRING_H_
#define STRING_H_

#include <stddef.h>

void *memset(void *buffer, int value, size_t length);
void *memcpy(void *destination, const void *source, size_t length);
char *strcpy(char *destination, const char *source);
char *strncpy(char *destination, const char *source, size_t length);

#endif /* STRING_H_ */
