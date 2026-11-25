#include "function_pointers.h"
/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers to iterate over
 * @size: Number of elements in the array
 * @action: Pointer to a callback function that accepts an int and returns void
 *
 * Description: This function iterates over each element of @array and
 * invokes the callback @action on every element. If @array or @action is
 * NULL, the function safely returns early without performing any action.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	long unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
