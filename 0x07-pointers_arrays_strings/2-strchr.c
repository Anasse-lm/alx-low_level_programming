#include "main.h"
#include <string.h>

/**
 * _strchr - returns first occurrence of a char
 * @s: string
 * @c: character
 * Return: char *
 * On error: NULL
 */
char *_strchr(char *s, char c)
{
	int i, len = strlen(s);
	char *p;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	return NULL;
}
