#include "main.h"

/**rev_string - reverses a string
 * @s: pointer
 * Return: Always 0
 */

void rev_string(char *s)
{
	int x, y, z, temp;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	z = 0;
	y = x - 1;

	while (z < y)
	{
		temp = s[z];
		s[z] = s[y]
		s[y] = temp;
		z++;
		y--;
	}
}
