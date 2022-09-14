#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: function print_alphabet, in lower case followed by \n
 * Return: void
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
