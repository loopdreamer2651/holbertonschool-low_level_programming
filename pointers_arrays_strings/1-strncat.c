#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string to append
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int byte;

	i = 0;
	j = 0;
	byte = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && byte < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		byte++;
	}
	return (dest);
}
