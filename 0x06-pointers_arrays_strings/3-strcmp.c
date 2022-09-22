#include "main.h"
#include <string.h>

/**
 * _strcmp - compareing two string.
 * @s1 : first compared string.
 * @s2 : second compared string.
 * Return : 0
 */

int _strcmp(char *s1, char *s2)
{
	int x, c = 0;

	if (strlen(s1) == strlen(s2))
	{
		for (x = 0; s2[x]; x++)
		{
			if (s1[x] == s2[x])
				c++;
		}
		if (c == x)
			return (1);
	}
	return (0);
}
