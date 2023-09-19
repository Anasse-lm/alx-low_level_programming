#include "main.h"
#include <string.h>

/**
 * puts2 - two by two characters
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
