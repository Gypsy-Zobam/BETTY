#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints its name.
 * @argc: number of command line grgument.
 * @argv: array name
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
