#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Lowercase alphabet in reverse
 *
 * Return: Always (Success)
 */
int main(void)
{
	char y;

	y = 'z';
	while (y >= 'a')
	{
		putchar(y);
		y--;
	}
	putchar('\n');

	return (0);
}
