#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int res;

	res = add(1, 2);
	printf("%d\n", res);   /* 3 */

	res = add(98, 0);
	printf("%d\n", res);   /* 98 */

	res = add(-1, 1);
	printf("%d\n", res);   /* 0 */

	res = add(1000, -2000);
	printf("%d\n", res);   /* -1000 */

	return (0);
}
