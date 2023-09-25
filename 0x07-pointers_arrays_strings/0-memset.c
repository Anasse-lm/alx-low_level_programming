#include "main.h"

/**
 * _memset - fills the first n bytes of s with b
 * @s: pointer on memory arrea
 * @n: lenght
 * @b: char
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
