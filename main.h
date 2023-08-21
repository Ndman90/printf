#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *string);
int _putint(int integer);
int print_binary(unsigned int number);
int printu_int(unsigned int integer);


#endif /* MAIN_H */
