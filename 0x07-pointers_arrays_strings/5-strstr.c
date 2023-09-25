#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strstr - finds the first occurence of a substr of a str in other
 * @haystack: first string
 * @needle: seconde string
 * Return: char * or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int halen = strlen(haystack);
	int nelen = strlen(needle);
	int i;

	if (nelen == 0)
	{
		return ((char *)haystack);
	}
	for (i = 0; i <= halen - nelen; i++)
	{
		if (strncmp(&haystack[i], needle, nelen) == 0)
		{
			return ((char *)&haystack[i]);
		}
	}
	return (NULL);
}
