#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments
 * @argc: Number of command-line arguments, including the program name
 * @argv: Array of command-line argument strings
 *
 * Description: This program takes exactly two numeric arguments, converts
 * them to integers with atoi, and prints their product followed by a
 * newline. If the number of arguments is not exactly 3 (program name plus
 * two numbers), it prints "Error" followed by a newline and returns 1.
 *
 * Return: 0 on success, 1 if the argument count is wrong.
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", product);

	return (0);
}
