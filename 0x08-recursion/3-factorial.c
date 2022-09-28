#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: input
 *
 * Return: Always 0
 */

int factorial(int n)
{
	if (n <= 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
