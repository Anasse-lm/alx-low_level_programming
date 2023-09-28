#include "main.h"
#include <string.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: void
 */
int nbr = 0;
void _puts_recursion(char *s)
{
	int len = strlen(s);

	if (nbr >= len)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[nbr++]);
	_puts_recursion(s);
}
