#include "main.h"

/**
 * _putint - prints length of input
 * @v_arguments: input argument
 * Return: length
 */
int _putint(va_list v_arguments)
{
	int int_input;
	unsigned int int_in, int_tmp, i, div, isneg;

	int_input = va_arg(v_arguments, int);

	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		_putchar('-');
		isneg = 1;
	} else
	{
		int_in = int_input;
	}

	int_tmp = int_in;
	div = 1;
	while (int_tmp > 9)
	{
		div *= 10;
		int_tmp /= 10;
	}
	for (i = 0; div > 0; div /= 10, i++)
	{
		_putchar(((int_in / div) % 10) + '0');
	}

	return (i + isneg);
}
