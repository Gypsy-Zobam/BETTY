#include "main.h"

/**
 * char *_memcpy -copy momory area.
 * @dest: memory area copied to
 * @src: memory area copied to
 * @n: bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	while (x < n)
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	return (dest);
}
