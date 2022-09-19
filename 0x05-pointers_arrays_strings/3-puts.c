#include "main.h"

/**
 * _puts - print a string , followed by a new line, to stdout
 * @str: character
 * Return: Always 0.
 */

void _puts(char *str)
{
	int a;

	while (*str != '\0')
	{
		_putchar(*str);
		a++;
		str++;
	}
	_putchar('\n');
}

