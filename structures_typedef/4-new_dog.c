#include "dog.h"
#include <stdio.h>
#include "_strdup.c"

/**
 * new_dog - creates a new dog
 * @name:  name of the dog (copied into a new heap string)
 * @age:   age of the dog in years (may be fractional)
 * @owner: name of the dog's owner (copied into a new heap string)
 *
 * Description: Allocates a dog_t on the heap and duplicates the
 * @name and @owner strings so the new struct owns its own copies.
 * The caller is responsible for freeing the returned dog with
 * free_dog (which frees the struct and both strings).
 *
 * Return: pointer to the new dog_t, or NULL on failure
 *         (allocation failure or NULL string argument).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (NULL);

	if (age < 0)
	  return (NULL);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d.name);
		free(d.age);
		free(d.owner);
		free(d);
		return (NULL);
	}

	return (d);
}

