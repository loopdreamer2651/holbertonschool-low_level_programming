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

	r = _isalpha('H');
	printf("%d\n", r);   /* 1 */
	r = _isalpha('o');
	printf("%d\n", r);   /* 1 */
	r = _isalpha(108);
	printf("%d\n", r);   /* 1  ('l') */
	r = _isalpha(';');
	printf("%d\n", r);   /* 0 */
	return (0);
}
