#include "main.h"
#include <string.h>
/**
 * _strncat - string concatination with n len of other str.
 * @dest: destination
 * @src: source
 * @n: lenght
 * Return: char *.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
