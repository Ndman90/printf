#include "main.h"

/**
 * print_func - selects function to carry out operation
 * @c: identifier argument
 * @idx: index for identifier argument
 * Return: pointer to a function
 */
int (*print_func(const char *c, int idx))(va_list)
{
	formatP_t ops[] = {
		{"c", print_chr},
		{"s", _putstr},
		{"d", _putint},
		{"i", _putint},
		{"%", print_mod},
		{"u", printu_int},
		{NULL, NULL}
	};
	int i = 0, j = 0, f_i;

	f_i = idx;
	while (ops[i].op)
	{
		if (c[idx] == ops[i].op[j])
		{
			if (ops[i].op[j + 1] != '\0')
			{
				idx++;
				j++;
			} else
				break;
		} else
		{
			j = 0;
			i++;
			idx = f_i;
		}
	}
	return (ops[i].f);
}
