#include "main.h"

/**
 * _isdigit - function that checks for a digit(0 to 9)
 *
 * @c: is a digit
 * Return: 1 if c, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
