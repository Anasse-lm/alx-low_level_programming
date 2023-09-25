#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function locates the first occurrence in s
 * @s: string
 * @accept: string 2
 * Return: char * or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *s_ptr = s;

	while (*s_ptr != '\0')
	{
		char *accept_ptr = accept;
		while (*accept_ptr != '\0')
		{
			if (*accept_ptr == *s_ptr)
			{
				return ((char *)s_ptr);
			}
			accept_ptr++;
		}
		s_ptr++;
	}
	return (NULL);
}
