#include "main.h"

/**
 * print_mod - writes character to stdout
 * @v_arguments: input character
 * Return: length
 */
int print_mod(va_list v_arguments)
{
	unsigned int len = 0;
	char c = va_arg(v_arguments, int);

	if (c)
	{
		_putchar('%');
		len++;
	}
	return (len);
}
