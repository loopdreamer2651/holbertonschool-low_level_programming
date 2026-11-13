#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
    int tmp;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
}

