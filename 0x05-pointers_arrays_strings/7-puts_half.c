#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: string
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, len = strlen(str);

	for (i = (len - 1) / 2 + 1; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
