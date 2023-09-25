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
	int alen = strlen(accept), i, j, found = 0;

	for (i = 0; i <= alen; i++)
	{
		for (j = 0; j < alen; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		num++;
	}
	return (num);
}
