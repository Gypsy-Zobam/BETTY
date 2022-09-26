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
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
