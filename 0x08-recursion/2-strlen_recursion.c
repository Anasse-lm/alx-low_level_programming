#include "main.h"
/**
 * _strlen_recursion - lent of a string using recursion
 * @s: string
 * Return: int.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	return 1 + _strlen_recursion(s + 1);
}
