#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = 0;

	if (s == NULL)
		return;
	while (s[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
