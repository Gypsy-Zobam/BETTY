#include "main.h"

/**
 * swap_int - swap the value of two integer
 * @*a: integer pointer
 * @*b: integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
