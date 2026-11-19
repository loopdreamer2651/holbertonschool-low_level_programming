#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d:      pointer to the dog struct to initialize (must not be NULL)
 * @name:   pointer to the dog's name string
 * @age:    dog's age in years (may be fractional)
 * @owner:  pointer to the owner's name string
 *
 * Description: Assigns the given values to the fields of the struct
 * pointed to by @d. No memory is allocated and no strings are copied;
 * the caller retains ownership of @name and @owner.
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
