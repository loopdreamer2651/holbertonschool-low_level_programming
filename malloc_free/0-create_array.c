#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with c
 * @size: number of characters
 * @c: the character to fill the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	ptr[size] = '\0';

	return (ptr);
}
