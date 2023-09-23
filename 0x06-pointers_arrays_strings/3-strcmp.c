#include "main.h"
#include <string.h>
/**
 * _strcmp - comparing two strings
 * @s1: string 1
 * @s2: string 2
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int i, len1 = strlen(s1), len2 = strlen(s2);

	if (len1 == len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		return (0);
	}
	else if (len1 < len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		return (s1[len1 - 1] - s2[len1 - 1]);
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
		}
		return (s1[len2 - 1] - s2[len2 - 1]);
	}
}
