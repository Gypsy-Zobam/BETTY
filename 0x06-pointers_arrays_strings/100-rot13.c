#include "main.h"

/**
 * rot13 - Encoding a string using rot13.
 * One if, Two loops only...
 * @v: input pointer
 * Return: decrypted string
 */

char *rot13(char *v)
{
	int x;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = v;

	while (*v)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*v == rot13[x])
			{
				*v = ROT13[x];
				break;
			}
		}
		v++;
	}
	return (ptr);
}
