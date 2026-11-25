#include "function_pointers.h"

/**
 * print_name - Safely invokes a callback with a name string
 * @name: Null-terminated string representing the name; must not be NULL.
 *        The function does not modify or take ownership of this string.
 * @f: Pointer to a callback function that accepts a string and returns void.
 *     Must not be NULL. The callback must not free or retain the pointer
 *     for asynchronous use.
 *
 * Description: This function safely invokes the provided callback @f,
 * passing the @name string to it. It performs basic null-pointer
 * validation before the callback is executed, returning early if either
 * parameter is NULL.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);

}
