#include "main.h"

/**
 * *_memcpy -copy momory area.
 * @dest: memory area copied to
 * @src: memory area copied to
 * @n: bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
