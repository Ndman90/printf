#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

int _putstr(char *string)
{
  unsigned int i, _str = 0;
  
	for (i = 0; string[i] != '\0'; i++)
    {
      _putchar(string[i]);
        _str++;
    }
  // _putchar('\n');
  return (_str);
}
