/*
 * File name: itoa.c
 * Description: 
 *
 * * * */
#include <stdint.h>

static char tbuf[32];
static char bchars[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

char *itoa(uint32_t number, char *destination, uint32_t base) {
   int32_t pos = 0;
   int32_t opos = 0;
   int32_t top = 0;

   char *tmpdest = destination;

   if (number == 0 || base < 2 || base > 36) {
      destination[0] = '0';
      destination[1] = '\0';
      return tmpdest;
   }

   while (number != 0) {
      tbuf[pos] = bchars[number % base];
      pos++;
      number /= base;
   }

   top = pos--;
   for (opos = 0; opos < top; pos--, opos++) {
      destination[opos] = tbuf[pos];
   }
   destination[opos] = 0;

   return tmpdest;
}
