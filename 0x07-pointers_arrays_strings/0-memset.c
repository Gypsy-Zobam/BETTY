#include "main.h"

/**
 * _memset - fill memory with a constant byte.
 * @s : pointed destination.
 * @b : constant byte.
 * @n : byte.
 * Return : Always return 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
