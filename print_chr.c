#include "main.h"

/**
 * print_chr - writes character c to stdout
 * @v_arguments: input character
 * Return: On success 1
 */
int print_chr(va_list v_arguments)
{
	char ch;

	ch = va_arg(v_arguments, int);
	_putchar(ch);

	return (1);
}
