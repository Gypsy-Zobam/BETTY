#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return the lenght of a string
 * @s: character
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;

	return (0);
}
