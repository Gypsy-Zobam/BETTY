#include "main.h"

/**
 * 3-islower.c - function that checks lowercase character
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
