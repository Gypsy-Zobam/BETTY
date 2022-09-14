#include "main.h"

/**
 * times_table - print the multiplication table
 * Description: Print 0 - 9 multiplication table
 * Return:
 */
void times_table(void)
{
	int j = 0, i;

	for (j = '0'; j < '10'; j++)
	{
		for (i = '0'; i < '10'; i++)
		{
			_putchar(i);
			_putchar(' ');

		}

		_putchar('\n');
		_putchar(',');
		j++;
	}
}
