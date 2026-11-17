#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings into newly allocated memory
 * @s1: first string (NULL treated as "")
 * @s2: second string (NULL treated as "")
 * @n: number of char of second string to concat
 *
 * Return: pointer to new string, or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;
	if (n > j)
		n = j;

	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];

	for (m = 0; m < n; m++, k++)
		ptr[k] = s2[m];

	ptr[k] = '\0';

	return (ptr);
}

