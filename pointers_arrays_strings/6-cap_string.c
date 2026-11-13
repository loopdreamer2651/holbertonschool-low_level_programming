#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to capitalize
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char *delim = " \t\n,;.!?\"(){}";
	int isdelim;

	i = 0;
	isdelim = 0;

	while (s[i] != '\0')
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (s[i - 1] == delim[j] || i == 0)
				isdelim = 1;
		}

	if (isdelim && s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - ('a' - 'A');

	isdelim = 0;
	i++;
	}
	return (s);
}
