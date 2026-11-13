#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to scan
 * @accept: pointer to the string of accepted bytes
 *
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;
	int found;

	count = 0;

	while (s[count] != '\0')
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
	}
	return (count);
}
