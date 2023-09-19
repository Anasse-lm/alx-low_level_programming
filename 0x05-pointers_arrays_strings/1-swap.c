#include "main.h"
/**
 * swap_int - This function swaps two values
 *
 * @a: first value
 * @b: second value
 *
 * Return: 1 on success
 * On error: -1.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
