#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in a reversed order.
 * @s: string
 *
 * Return: 1 on success
 * On error: -1.
 */
void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i <= len; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}
