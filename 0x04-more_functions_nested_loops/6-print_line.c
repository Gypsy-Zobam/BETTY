#include "main.h"

/**
 * print_line - function that draws a straight line in
 * the terminal
 * @n: input sign
 * Return: Always 0
 */

void print_line(int n)
{
	int o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 1; o <= n; o++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
