#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char *hex_digits = "0123456789abcdef";

	for (n = 0; n < 16; n++)
	{
		putchar(hex_digits[n]);
	}
	putchar('\n');

	return (0);
}

