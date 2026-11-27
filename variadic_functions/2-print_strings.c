#include "variadic_functions.h"
/**
 * print_strings - Prints a list of strings separated by a string
 * @separator: String printed between strings; may be NULL (nothing printed)
 * @n: Number of strings to print
 * ...: The strings to print, passed as variadic arguments (char *)
 *
 * Description: This function prints @n strings to stdout, separating
 * each pair of consecutive strings with @separator. If a string is NULL,
 * "(nil)" is printed in its place. If @separator is NULL, the strings are
 * printed with no separator between them.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
