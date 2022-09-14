#include <stdio.h>

/**
 * main - all the natural numbers below 10 that are multiples of 3 or 5
 *
 *
 * Return: 0
 */
int main(void)
{
	int j, z = 0;

	while (j < 1024)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			z += j;
		}

		j++;
	}
	printf("%d\n", z);
	return (0);
}
