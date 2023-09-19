#include "main.h"

/**
 * _puts - print strings
 * @str: string
 *
 * Return: 1 on success.
 * On error: -1 .
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
