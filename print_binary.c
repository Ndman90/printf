#include "main.h"

/**
 * print_binary - prints binary number
 * @number: input argument
 * Return: length of input
 */
int print_binary(unsigned int number)
{
	int len = 0;

	if (number == 0)
	{
		_putchar('0');
		len++;
	}
		print_binary(number / 2);
		_putchar(number % 2 + '0');
		len++;

	return (len);
}
