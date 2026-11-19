#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function to print out elements of struct dog
 * @d - pointer to struct
 *
 * Return: void
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	printf("Owner: %s", d->owner);

}
