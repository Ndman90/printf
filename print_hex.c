#include "main.h"

/**
 * print_hex - prints small hexadecimal number
 * @number: input argument
 * Return: length of input
 */
int print_hex(unsigned int number)
{
	int value, hex_len = 0;

	if (number < 16)
	{
		if (number < 10)
		{
			_putchar(number + '0');
			hex_len = 1;
		}
		else
		{
			_putchar((number - 10) + 97);
			hex_len = 1;
		}
	}
	else
	{
		value = (number / 16);
		hex_len += print_hex(value);
		if ((number % 16) < 10)
			_putchar((number % 16) + '0');
		else
			_putchar((number % 16) + 97 - 10);
		hex_len++;
	}
	return (hex_len);
}
