#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocate memory to given size, initalising with 0
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to array
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
