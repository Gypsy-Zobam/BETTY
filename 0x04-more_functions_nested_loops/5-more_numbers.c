#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 * from 0 to 14, followed by a new line.
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int j, k;

	j = 0;
	while (j < 10)
	{
		k = 0;
		while (k < 15)
		{
			if (k >= 15)
				_putchar('0' + k / 10);
			_putchar('0' + k % 10);
			k++;
		}
		_putchar('\n');
		j++;
	}
}
