#include "main.h"

/**
 * _isalpha - check if c is a char or not
 * @c: character 
 *
 * Return: 1 if true.
 * On error: return 0.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
