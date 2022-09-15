#include "main.h"

/**
 * print_diagonal - function that draws a diagonal in on the terminal
 * @n: input character
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (space = 0; space < j; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
