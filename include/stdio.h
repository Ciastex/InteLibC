/*
 * File name: stdio.h
 * Description: Standard input/output interface.
 *
 * * * */

#ifndef STDIO_H_
#define STDIO_H_

#include <stddef.h>
#include <stdarg.h>

size_t printf(const char *string, ...);
size_t sprintf(char *buffer, const char *string, ...);
size_t vsprintf(char *buf, const char *fmt, va_list args);

#endif /* STDIO_H_ */
