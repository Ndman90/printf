#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdio.h>


int _printf(const char *format, ...)
{
  va_list v_arguments;

  if (format == NULL)
    return (-1);

  va_start(v_arguments, format);

  unsigned int i, len = 0, value = 0, str_len = 0, int_len, bi_len;
  
  for (i = 0; format[i] != '\0'; i++,  len++)
    {
      if (format[i] != '%')
      {
        _putchar(format[i]);
      }
      else
      {
        if (format[i + 1] == 'c')
         _putchar(va_arg(v_arguments, int));
        if (format[i + 1] == 's')
        {
          str_len = _putstr(va_arg(v_arguments, char *));
          len = (len + str_len - 2);
        }
        if (format[i + 1] == '%')
          _putchar(format[i + 1]);
        if (format[i + 1] == 'd' || format[i + 1] == 'i')
        {
          int_len = _putint(va_arg(v_arguments, int));
          len = len + int_len;
        }
        if (format[i + 1] == 'b')
        {
          print_binary(va_arg(v_arguments, int));
          len = len + bi_len;
        }  
        if (format[i + 1] == 'u')
        {
          int_len = printu_int(va_arg(v_arguments, unsigned int));
          len = len + int_len;
        }
        i++;
      }
    }
  va_end(v_arguments);
  return (len);
}
