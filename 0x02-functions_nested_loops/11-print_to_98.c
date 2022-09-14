#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natures from n to 98
 * @n: input integer
 *
 * Description: print all nature number followed by new line
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
