#include "variadic_functions.h"
/**
 * print_all - Prints arguments of various types based on a format string
 * @format: String of type specifiers; each char selects the type of the
 *          next variadic argument:
 *          'c' = char, 'i' = int, 'f' = float, 's' = char * (string).
 *          Any other character is ignored. May be NULL.
 * ...: The values to print, in the order their specifiers appear in @format
 *
 * Description: This function prints each variadic argument according to
 * the corresponding character in @format. A NULL string is printed as
 * "(nil)". Printed values are separated by ", ". If @format is NULL,
 * nothing is printed.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	unsigned int i;
	char *sep = "";

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			sep = ", ";
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			sep = ", ";
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
			break;
		default:
			break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
