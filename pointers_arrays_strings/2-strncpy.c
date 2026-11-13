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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

