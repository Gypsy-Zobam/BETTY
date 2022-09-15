#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the largest prime factor
 *
 * Return: Always 0
 */

int main(void)
{
	long int i, j, su;

	su = -1;
	i = 612852475143;

	while (i % 2 == 0)
	{
		su = 2;
		i = i / 2;
	}
	for (j = 3; j <= i / 2; j = j + 2)
	{
		while (i % j == 0)
		{
			su = i;
			i = i / j;
		}
	}
	if (i > 2)
		su = i;
	printf("%ld\n", su);
	return (0);
}

