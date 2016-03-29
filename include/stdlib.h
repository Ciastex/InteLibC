/*
 * File name: stdlib.h
 * Description: Standard Library interface.
 *
 * * * */

#ifndef STDLIB_H_
#define STDLIB_H_

#include <stdint.h>

#define SET_BIT(number, bit_no)     (number |= 1 << bit_no)
#define CLEAR_BIT(number, bit_no)   (number &= ~(1 << bit_no))
#define TOGGLE_BIT(number, bit_no)  (number ^= 1 << bit_no)
#define CHECK_BIT(number, bit_no)   (number >> x) & 1;

char *itoa(uint32_t number, char *destination, uint32_t base);
char *itoa_s(int32_t number, char *destination, uint32_t base);

#endif /* STDLIB_H_ */
