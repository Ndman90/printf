#include "main.h"
#include <stdio.h>

int print_binary(unsigned int number)
{
  int value, bi_len, len = 0;
  
  
  if (number < 0)
    ;
  else 
  {
    if (number < 2)
      _putchar(number + '0');
    else
    {
      value = (number / 2);
      print_binary(value);
      _putchar((number % 2) + '0');
      bi_len = len + 1;
    }
  }
  return(bi_len);
}
