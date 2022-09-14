#include "main.h"
/**
 * void print_times_table - print n times table, starting with 0
 * @n: intial value
 * Description: print times table if n is greater than 15 or less than 0
 * Return: Number matrix
 */
void print_times_table(int n)
{
	int x, y z;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)	
