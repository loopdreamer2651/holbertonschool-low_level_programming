#include "variadic_functions.h"
/**
 * print_numbers - Prints a list of integers separated by a string
 * @separator: String printed between numbers; may be NULL (nothing printed)
 * @n: Number of integers to print
 * ...: The integers to print, passed as variadic arguments
 *
 * Description: This function prints @n integers to stdout, separating
 * each pair of consecutive numbers with @separator. If @separator is
 * NULL, the numbers are printed with no separator between them.
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
