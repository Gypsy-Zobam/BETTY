#include "main.h"

/**
 * _islower - function that checks lowercase character
 *@c: check lowercase
 * Return: 1 if c is lowercase, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
