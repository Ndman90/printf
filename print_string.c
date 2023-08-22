#include "main.h"

/**
 * _putstr - writes the character c to stdout
 * @v_arguments: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putstr(va_list v_arguments)
{
	unsigned int i;
	char *str;
	char nill[] = "(null)";

	str = va_arg(v_arguments, char *);
	if (!str)
	{
		for (i = 0; nill[i]; i++)
			_putchar(nill[i]);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		return (i);
}
