#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int and updates the value it points to 98
 * @*a: pointer to the first int
 * @*b: pointer to the second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int holder;
	holder = *a;
	*a = *b;
	*b = holder;
}
