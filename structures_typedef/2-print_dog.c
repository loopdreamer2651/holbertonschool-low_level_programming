#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * print_dog - prints the contents of a dog struct
 * @d: pointer to the dog struct to print (may be NULL)
 *
 * Description: Prints the name, age, and owner of the dog pointed to
 * by @d, one field per line in the format:
 *     Name: <name>
 *     Age: <age>
 *     Owner: <owner>
 * If @d is NULL, the function does nothing. If any string field is
 * NULL, "(nil)" is printed in its place.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (isnan(d->age))
		printf("(Nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
