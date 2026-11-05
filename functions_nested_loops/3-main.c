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

	r = _islower('H');
	printf("%d\n", r);   /* 0 */
	r = _islower('o');
	printf("%d\n", r);   /* 1 */
	r = _islower(108);
	printf("%d\n", r);   /* 1  ('l') */
	return (0);
}
