#include "main.h"

/**
 * main - Print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char word[8] = "_putchar";
	int k;

	for (k = 0; k < 8; k++)
	{
		_putchar(word[k]);
	}
	_putchar('\n');
	return (0);
}
