#include "main.h"
/**
 * isupper - checks uppercase
 * @c: character
 * Return: 1 or 0.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
