#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates an array of chars and dupllicate str
 * @str: pointer to array to duplicate
 *
 * Return: pointer to the array, or NULL if str is empty or malloc fails.
 */

char *_strdup(char *str)
{
	int i;
	char *ptr;
	int n;

	i = 0;

	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		ptr[n] = str[n];

	return (ptr);
}
