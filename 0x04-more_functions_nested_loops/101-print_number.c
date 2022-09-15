#include "main.h"

/**
 * print_number - function that print an integer
 *
 * @n: input integer
 * Return: ALways 0
 */

void print_number(int n)
{
	unsigned int u;

	u = n;
	if (n < 0)
	{
		_putchar(45);
		u = -n;
	}
	if (u / 10)
		print_number(u / 10);
	_putchar((u % 10) + '0');
}
