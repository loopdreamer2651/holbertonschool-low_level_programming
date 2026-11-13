#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string, using at most n bytes from src
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string to copy
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int byte;

	i = 0;
	byte = 0;

	while (dest[i] != '\0'&& src[i] != '\0' && byte < n)
	{
		dest[i] = src[i];
		i++;
		byte++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}
	return (dest);
}

