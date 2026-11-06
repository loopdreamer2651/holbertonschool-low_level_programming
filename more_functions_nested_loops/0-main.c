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

	r = _isupper('A');
	printf("%d\n", r);   /* 1 */
	r = _isupper('a');
	printf("%d\n", r);   /* 0 */
	r = _isupper('Z');
	printf("%d\n", r);   /* 1 */
	r = _isupper(';');
	printf("%d\n", r);   /* 0 */
	return (0);
}
