#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != c)
		i++;

	if (s[i] == c)
		return(s + i);
	else
		return (NULL);
}
