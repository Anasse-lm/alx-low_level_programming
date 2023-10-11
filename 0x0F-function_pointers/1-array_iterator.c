#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that execute an array of param
 * @array: array
 * @size: arrays size
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
