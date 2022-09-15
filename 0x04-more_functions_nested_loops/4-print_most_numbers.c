#include "main.h"

/**
 * print_most_numbers - printe the numbers, from 0 to 9
 * Description: do not print 2 and 4
 * Return: Always to 0
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		if ((ch == 2) || (ch == 4))
		{
			continue;
		}
		_putchar('0' + ch);
	}
	_putchar('\n');
}
