#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: Number of command-line arguments, including the program name
 * @argv: Array of command-line argument strings
 *
 * Description: This program sums all numeric arguments passed to it and
 * prints the result followed by a newline. If any argument contains a
 * non-digit character, it prints "Error" followed by a newline and
 * returns 1. If no arguments are given, it prints 0.
 *
 * Return: 0 on success, 1 if any argument is not a positive number.
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
