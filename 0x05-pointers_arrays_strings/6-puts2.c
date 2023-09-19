#include "main.h"

/**
 * puts2 - two by two characters
 * @str: string
 *
 * Return: 1 on success
 * On error: -1.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
