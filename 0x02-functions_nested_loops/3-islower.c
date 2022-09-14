#include "main.h"

/**
 * int _islower - function that check for lowercasechar
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return (0);
}
