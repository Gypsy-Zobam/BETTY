#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, o;

	for (n = '0'; n <= '8'; n++)
	{
		for (o = '1'; o <= 9; o++)
		{
			if (n < o)
			{
				putchar(n + '0');
				putchar(o + '0');
				if (n != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
