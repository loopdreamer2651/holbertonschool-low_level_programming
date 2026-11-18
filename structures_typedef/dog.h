#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <string.h>

/**
 * struct dog - represents a dog
 * @name:  pointer to dog's name (heap-allocated)
 * @age:   dog's age in years (may be fractional)
 * @owner: pointer to owner's name (heap-allocated)
 */
typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog;

#endif
