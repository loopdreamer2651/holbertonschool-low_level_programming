#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings into newly allocated memory
 * @s1: first string (NULL treated as "")
 * @s2: second string (NULL treated as "")
 *
 * Return: pointer to new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int i;
	int j;
	int size2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);

	for (size1 = 0; size1 < i; size1++)
		ptr[size1] = s1[size1];
	for (size2 = 0; size2 < j; size2++, size1++)
		ptr[size1] = s2[size2];

	ptr[size1] = '\0';

	return (ptr);
}

