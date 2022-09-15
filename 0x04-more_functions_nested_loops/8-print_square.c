#include "main.h"

/**
 * print_square - function that print a square
 * followed by a new line
 * @size: input function
 * Return: Always 0
 */

void print_square(int size)
{
	char ch;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ch = 1; ch <= size; ch++)
		{
			_putchar('#');
			for (j = 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
