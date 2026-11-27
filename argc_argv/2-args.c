#include <stdio.h>

/**
 * main - Prints all command-line arguments, one per line
 * @argc: Number of command-line arguments, including the program name
 * @argv: Array of command-line argument strings
 *
 * Description: This program prints each command-line argument it receives,
 * including the program's own name (argv[0]), one per line, to stdout.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
