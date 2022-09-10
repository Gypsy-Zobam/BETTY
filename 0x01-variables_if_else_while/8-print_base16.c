#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		putchar(y);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
