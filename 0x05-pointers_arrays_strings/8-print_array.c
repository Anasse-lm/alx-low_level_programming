#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elemets of an array separated with comma.
 * @a: array
 * @n: lenght of array
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
