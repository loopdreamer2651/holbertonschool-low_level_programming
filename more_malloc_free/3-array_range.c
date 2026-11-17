#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int i;
	int n;
	int j;
	int *ptr;

	if (min > max)
		return (NULL);

	n = max - min;
	j = min;

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++, j++)
		ptr[i] = j;

	return (ptr);
}
