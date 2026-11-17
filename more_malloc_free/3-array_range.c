#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers containing all values
 *                from min (inclusive) to max (inclusive)
 * @min: smallest value
 * @max: largest value
 *
 * Return: pointer to the new array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
	int i;
	int n;
	int *ptr;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min + i;

	return (ptr);
}
