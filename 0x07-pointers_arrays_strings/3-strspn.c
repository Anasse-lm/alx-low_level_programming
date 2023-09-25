#include "main.h"
#include <string.h>

/**
 * _strspn - number of bytes in the initial segment of s.
 * @s: string
 * @accept: accept string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	const char *s_ptr = s;

	while (*s_ptr != '\0')
	{
		const char *accept_ptr = accept;
		int found = 0;

		while (*accept_ptr != '\0')
		{
			if (*s_ptr == *accept_ptr)
			{
				found = 1;
				break;
			}
			accept_ptr++;
		}

		if (!found)
		{
			break;
		}
		num++;
		s_ptr++;
	}
	return (num);
}
