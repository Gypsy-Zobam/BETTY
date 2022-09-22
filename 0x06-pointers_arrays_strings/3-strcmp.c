#include "main.h"

/**
 * _strcmp - compareing two string.
 * @s1 : first compared string.
 * @s2 : second compared string.
 * Return : *dest
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int I;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	I = s1[x] - s2[x];
	return (I);
}
