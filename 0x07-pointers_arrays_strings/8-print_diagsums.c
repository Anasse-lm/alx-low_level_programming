#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints diagonals sums
 * @a: array
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size)
	{
		sum1 += a[i + j];
		j++;
	}
	j = 1;
	for (i = size; i <= size * size; i +=size)
	{
		sum2 += a[i - j];
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
