#include <stdio.h>

/**
 * main - Alphabet in lowercase
 *
 * Return: Always (Sucess)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
