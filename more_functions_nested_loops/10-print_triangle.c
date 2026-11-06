#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_triangle - draw triagnle in the terminal
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{

	int i;
	int j;

	if (size <= 0)
        {
        _putchar('\n');
        }

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > 0; j--)
		{
			if (j <= i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
