#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 34; a <= 63; a++)
	{
		for (b = 34; b <= 63; b++)
		{
			for (c = 34; c <= 63; c++)
			{
				for (d = 34; d <= 63; d++)
				{
					if (((c + d) > (a + b) && c >= a) || a < c)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(c);
						putchar(d);

					if (a + b + c + d == 252 && a == 63)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
