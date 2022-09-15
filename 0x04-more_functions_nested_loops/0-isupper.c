#include "main.h"

/**
 * _isupper - function that checks uppercase character
 *
 * @c: integer of uppercase character
 * Return: 1 if c and zero if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
