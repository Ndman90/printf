#include "main.h"

/**
 * print_octal - prints octal number
 * @number: input argument
 * Return: length of input
 */
int print_octal(unsigned int number)
{
	int value, oct_len = 0;

	if (number < 8)
	{
		_putchar(number + '0');
		oct_len = 1;
	}
	else
	{
		value = (number / 8);
		oct_len += print_octal(value);
		_putchar((number % 8) + '0');
		oct_len++;
	}
	return (oct_len);
}
