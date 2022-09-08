#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long) sizeof(e));
	return (0);
}
