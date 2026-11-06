#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%d\n", mul(98, 1024));   /* 100352 */
	printf("%d\n", mul(-402, 4096)); /* -1646592 */
	printf("%d\n", mul(0, 5));       /* 0 */
	printf("%d\n", mul(-3, -4));     /* 12 */
	return (0);
}
