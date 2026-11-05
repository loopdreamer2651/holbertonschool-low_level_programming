#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch_uppercase;
	char ch_lowercase;

	for (ch_lowercase = 'a'; ch_lowercase <= 'z'; ch_lowercase++)
	{
		putchar(ch_lowercase);
	}

	for (ch_uppercase = 'A'; ch_uppercase <= 'Z'; ch_uppercase++)
	{
		putchar(ch_uppercase);
	}

	putchar('\n');

	return (0);
}
