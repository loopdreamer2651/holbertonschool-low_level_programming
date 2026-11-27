#include <stdio.h>

/**
 * main - Prints the program's name
 * @argc: Number of command-line arguments (unused)
 * @argv: Array of command-line argument strings; argv[0] is the program name
 *
 * Description: This program prints its own name (the value of argv[0]),
 * followed by a newline, to stdout.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
