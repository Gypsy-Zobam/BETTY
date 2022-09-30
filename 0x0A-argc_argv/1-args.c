#include "main.h"
#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it
 * @argc: number of command line argument
 * @argv: array name
 * Return: Alway 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	printf("%d\n", argc - 1);

	return (0);
}
