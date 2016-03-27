/*
 * File name: stdlib.h
 * Description: Standard Library interface.
 *
 * * * */

#ifndef STDLIB_H_
#define STDLIB_H_

char *itoa(uint32_t number, char *destination, uint32_t base);
char *itoa_s(int32_t number, char *destination, uint32_t base);

#endif /* STDLIB_H_ */
