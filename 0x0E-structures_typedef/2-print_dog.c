#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: point to dog structure
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("NAME: (nil)\n");
		else
			printf("NAME: %s\n", d->name);

		printf("AGE: %f\n", d->age);

		if (!(d->owner))
			printf("OWNER: (nil)\n");
		else
			printf("OWNER: %s\n", d->owner);
	}
}
