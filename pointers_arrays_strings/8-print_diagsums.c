#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals of matrix
 * @a: pointer to the first element of the matrix (flat, row-major)
 * @size: the width and height of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_right = 0;
	int sum_left = 0;

	for (i = 0; i < size; i++)
	{
		sum_right += a[i * size + i];
		sum_left += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_right, sum_left);
}
