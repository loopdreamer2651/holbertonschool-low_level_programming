#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	printf("%d\n", r);   /* +, 1 */

	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	printf("%d\n", r);   /* 0, 0 */

	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	printf("%d\n", r);   /* +, 1  (255 > 0) */

	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	printf("%d\n", r);   /* -, -1 */

	return (0);
}
