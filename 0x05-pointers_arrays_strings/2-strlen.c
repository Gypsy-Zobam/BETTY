#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return the lenght of a string
 * @s: character
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
