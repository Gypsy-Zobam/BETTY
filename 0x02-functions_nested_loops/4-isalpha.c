#include "main.h"

/**
 * _isalpha - function that checks for alphabet character
 *
 * @c: check character
 * Return: 1 if true, if false return to 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
