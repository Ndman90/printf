#include "main.h"

int _putint(int integer)
{
  int number, int_len = 0;

   if (integer < 0)
   {
     _putchar('-');
     integer = -integer;
     int_len++;
   }

    if (integer > 9)
    {
      int_len += _putint(integer / 10);
    }
  _putchar((integer % 10) + '0');
  int_len++;
  return (int_len);
}
