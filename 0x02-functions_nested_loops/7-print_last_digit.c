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

	if (i < 0)
	{
		i = (-1 * i);
	}
	_putchar(i + '0');
	return (i);
}
