/*
 * File name: itoa_s.c
 * Description: Part of Standard Library implementation.
 *
 * * * */
#include <stdint.h>
#include <stdlib.h>

char *itoa_s(int32_t number, char *destination, uint32_t base) {
   char *buf = destination;

   if (base < 2 || base > 36) {
       buf[0] = '\0';
       return buf;
   }

   if (number < 0 && base == 10) {
      *buf++ = '-';
      number = (uint32_t)-number;
   }
   return itoa(number, buf, base);
}
