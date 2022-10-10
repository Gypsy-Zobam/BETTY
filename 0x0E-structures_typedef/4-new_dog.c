#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: a new dog name
 * @age: a new dog age
 * @owner: a new dog owner
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *skully;
	int i, tname, t_owner;

	skully = malloc(sizeof(*skully));
	if (skully == NULL || !(name) || !(owner))
	{
		free(skully);
		return (NULL);
	}
	for (tname = 0; name[tname]; tname++)
		;

	for (t_owner = 0; owner[t_owner]; t_owner++)
		;

	skully->name = malloc(tname + 1);
	skully->owner = malloc(t_owner + 1);
	{
		free(skully->name);
		free(skully->owner);
		return (NULL);
	}

	for (i = 0; i < tname; i++)
		skully->name[i] = name[i];
	skully->name[i] = '\0';

	skully->age = age;

	for (i = 0; i < t_owner; i++)
		skully->owner[i] = owner[i];
	skully->owner[i] = '\0';

	return (skully);
}
