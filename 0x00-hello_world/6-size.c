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
	long d;
	long long e;
	
	printf("size of int = %d bytes\n", sizeof(a));
	printf("size of char = %d bytes\n", sizeof(b));
	printf("size of float = %d bytes\n", sizeof(c));
	printf("size of long = %d bytes\n", sizeof(d));
	printf("size of long long = %d bytes", sizeof(e));
	return (0);
}
