#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n is the number of underscore to prin
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
