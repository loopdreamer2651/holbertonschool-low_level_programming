#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 *
 * Return: pointer to the located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
	return (NULL);
}
