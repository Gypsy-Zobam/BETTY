#include "main.h"

/**
 * main - print _putchar
 *
 * Description: It prints the word, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
	return (0);
}
