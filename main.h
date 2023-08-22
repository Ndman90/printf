#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct formatP - struct for print format
 * @op: identifier
 * @f: pointer to a function
 */
typedef struct formatP
{
	char *op;
	int (*f)(va_list);
} formatP_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(va_list v_arguments);
int _putint(va_list v_arguments);
int print_binary(unsigned int number);
int printu_int(va_list v_arguments);
int (*print_func(const char *c, int idx))(va_list);
int print_chr(va_list v_arguments);
int print_mod(va_list v_arguments);

#endif
