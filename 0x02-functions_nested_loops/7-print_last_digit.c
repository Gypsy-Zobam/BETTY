#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @i: input digit
 *
 * Return: to the last number
 */
int print_last_digit(int i)
{
	int last = i % 10;

	if (last < 0)
	{
		last = (-1 * last);
	}
	_putchar(last + '0');
	return (last);
}
