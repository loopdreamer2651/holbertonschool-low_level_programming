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
/**
 * dog_t - typedef for struct dog
 *
 * Description: Alias so callers can write `dog_t` instead of
 * `struct dog` or `dog`.
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
