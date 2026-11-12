#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a newline
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length_half;
	int n;

	n = 0;

	while (str[n] != '\0')
		n++;

	if (n % 2 != 0)
		length_half = (n + 1) / 2;
	else
		length_half = n / 2;

	while (length_half < n)
	{
		_putchar(str[length_half]);
		length_half++;
	}
	_putchar('\n');
}
