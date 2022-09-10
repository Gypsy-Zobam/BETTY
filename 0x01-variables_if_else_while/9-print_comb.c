#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - All possible combination of single-digit
 *
 * Return: Always (Success)
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);

		if (l != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
