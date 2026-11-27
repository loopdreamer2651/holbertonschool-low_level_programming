#include <stdio.h>

/**
 * main - Prints the number of command-line arguments passed to it
 * @argc: Number of command-line arguments, including the program name
 * @argv: Array of command-line argument strings (unused)
 *
 * Description: This program prints the number of arguments passed to it,
 * excluding the program's own name, followed by a newline, to stdout.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
