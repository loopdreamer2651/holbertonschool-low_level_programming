#include "function_pointers.h"
/**
 * int_index - Searches an array for the first matching element
 * @array: Pointer to the array of integers to search
 * @size: Number of elements in the array
 * @cmp: Pointer to a comparison function that accepts an int and
 *       returns a non-zero value if the element matches, 0 otherwise
 *
 * Description: This function iterates over @array and applies @cmp to
 * each element. It returns the index of the first element for which
 * @cmp returns a non-zero value. If @array or @cmp is NULL, if @size is
 * less than or equal to 0, or if no element matches, the function
 * returns -1.
 *
 * Return: The index of the first matching element, or -1 on failure.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int result;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
