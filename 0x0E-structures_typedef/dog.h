#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

/**
 * struct dog - short description
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
