#include "main.h"
/**
 * _strlen - returns strings lenght
 *
 * @s: string
 *
 * Return: 1 on success.
 * On error: -1.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
