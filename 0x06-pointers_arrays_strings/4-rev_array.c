#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int 
 * @n : pointer to int 
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int tmp;

	x = 0;
	y = n - 1;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[x] = tmp;
		x++;
		y--;
	}
}
