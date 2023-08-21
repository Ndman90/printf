#include "main.h"

// This function was not able to print 0 properly

int printu_int(unsigned int integer)
{
  int number, int_len;
  if (integer < 0)
    ;
  else if (integer == 0) 
  {
    _putchar('0');
  }
  else
  {
    if (integer > 9)
    {
      int_len += _putint(integer / 10);
    }
  }
  _putchar((integer % 10) + '0');
  int_len++;
  return (int_len); 
}
