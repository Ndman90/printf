#include "main.h"

/**
 * printu_int - print unsigned integer
 * @v_arguments: integer argument
 * Return: length of integer
 */
int printu_int(va_list v_arguments)
{
	unsigned int int_in, int_len, div, i;

	int_in = va_arg(v_arguments, unsigned int);
	int_len = int_in;
	div = 1;
	while (int_len > 9)
	{
		div *= 10;
		int_len /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		_putchar((int_in / div) % 10 + '0');
	}
	return (i);
}
