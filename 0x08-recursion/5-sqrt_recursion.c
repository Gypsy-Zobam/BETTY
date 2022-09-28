#include "main.h"

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: input
 * Return: Always 0 success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
/**
 * squareroot - checks if perfect square
 * @x: input
 * @y: counter
 * Return: squareroot
 */

int squareroot(int x, int y)
{
	if (y < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (squareroot(n, i -1));
}
