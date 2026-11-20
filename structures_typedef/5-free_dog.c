#include "dog.h"

/**
 * free_dog - free memory in heaps used for dog_t
 * @d: pointer to the struct in heap
 *
 * Return: void
**/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
