#include "main.h"
/**
 * _printf - prints input arguments
 * @format: input argument
 * Return: length of input
 */
int _printf(const char *format, ...)
{
	va_list v_arguments;
	unsigned int i = 0, len = 0;
	int (*f)(va_list);

	va_start(v_arguments, format);
	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				_putchar(format[i]);
				return (-1);
			}
				f = print_func(format, i + 1);
				if (!f)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					else
					{
						_putchar(format[i]), len++, i--;
					}
				} else
				{
					len += f(v_arguments);
				}
			i++;
		} else
		{
			_putchar(format[i]), len++;
		}
	}
	va_end(v_arguments);
	return (len);
}
