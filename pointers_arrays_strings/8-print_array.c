#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the selected numbers of a string, followed by a newline
 * @a: pointer to the string to print
 * @n: the number of elements to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf('\n');
}
