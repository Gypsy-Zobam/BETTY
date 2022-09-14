#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @num: the input to check
 * Return: the absolute value
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num == 0)
	{
		return (num);
	}
	else
	{
		return (-num);
	}
}
