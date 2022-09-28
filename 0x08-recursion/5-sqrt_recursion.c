#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: int to square root
 * @y: square root
 * Return: int
 */

int square(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y * y < n)
		return (square(n, y + 1));
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
