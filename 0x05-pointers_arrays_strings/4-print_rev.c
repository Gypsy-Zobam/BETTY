#include "main.h"

/**
 * print_rev - pinrts a string, in reverse, following by a new line
 * @s: pointer
 * Return: Always 0
 */

void print_rev(char *s)
{
	int length, last;

	length = 0; 
	while (s[length] != '\0')
	{
		length++;
	}
	
	last = length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
