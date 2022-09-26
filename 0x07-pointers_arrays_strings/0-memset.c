#include "main.h"

/**
 * _memset - fill memory with a constant byte.
 * @s : pointed destination.
 * @b : constant byte.
 * @n : byte.
 * Return : to destination s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
