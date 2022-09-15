#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Description: print and followed by a new line
 * Return: Always return (0)
 */

void print_numbers(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
