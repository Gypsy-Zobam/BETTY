#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: source of string
 * @dest: destination of string
 * Return: value *dest
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[j];
		y++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
