#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int
 * @n : pointer to int
 * Return: no
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
