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

	if (str == NULL)
                return (NULL);

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		ptr[n] = str[n];

	ptr[i] = '\0';

	return (ptr);
}
